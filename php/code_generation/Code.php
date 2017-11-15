<?php

defined('BASEPATH') OR exit('No direct script access allowed');

function get_array_keys($arr, $prefix = '')
{
    $result = [];
    foreach ($arr as $key => $value) {
        $result = array_merge($result, ["{$prefix}.{$key}"]);
        if (is_array($value)) {
            $result = array_merge($result, get_array_keys($value, "{$prefix}.{$key}"));
        }
    }
    return $result;
}

function process_line($line)
{
    $slices = explode(' ', $line);
    $slice_count = count($slices);
    $need_process = true;
    if ($slice_count == 1) {
        $need_process = false;
    } elseif ($slice_count == 2) {
    } else if ($slice_count == 3) {
        $slices[2] = trim($slices[2]);
    } else if ($slice_count > 3) {
        $slice_0 = array_shift($slices);
        $slice_1 = array_shift($slices);
        $slice_2 = trim(implode($slices));
        $slices = array($slice_0, $slice_1, $slice_2);
    } else {
        throw new Exception("行的格式错误", 1);
    }
    if ($need_process) {
        return generate_statements($slices);
    } else {
        return "";
    }
}

function generate_variable_by_index($slice_0)
{
    $index_arr = explode('.', $slice_0);
    $index_arr = array_slice($index_arr, 1);
    if ($index_arr <= 0) {
        throw new Exception("变量索引错误", 1);
    }
    $var_str = '$data';
    foreach ($index_arr as $index) {
        $var_str .= "['" . trim($index) . "']";
    }
    return $var_str;
}

function get_type($slice_1)
{
    //解析类型
    $type_condition_str = trim($slice_1);

    $allowed_type_condition_arr = array(
        'int' => 'int',
        '@int' => 'int',
        'int@' => 'int',
        'string' => 'string',
        '@string' => 'string',
        'string@' => 'string',
        'array' => 'array',
        '@array' => 'array',
        'array@' => 'array',
        'float' => 'float',
        '@float' => 'float',
        'float@' => 'float',
        'bool' => 'bool',
        '@bool' => 'bool',
        'bool@' => 'bool',
    );

    if (!isset($allowed_type_condition_arr[$type_condition_str])) {
        throw new Exception("类型标识错误", 1);
    }
    return $allowed_type_condition_arr[$type_condition_str];
}

function is_optional($slice_1)
{
    $ret = strstr($slice_1, '@');
    if ($ret === false)
        return false;
    else return true;
}

function get_rule_str($slice2, $var_str)
{
    $count = 0;
    $ret = str_replace('$x', $var_str, $slice2, $count);
    if ($count <= 0) {
        throw new Exception('规则错误,要有$x变量', 1);
    }
    return $ret;
}

function generate_judge_statements($var_str, $type, $is_optional, $rule_str, $var_index,$rule_str_for_print)
{
    if (empty($rule_str)) {
        return generate_judge_statements_2($var_str, $type, $is_optional, $var_index,$rule_str_for_print);
    } else {
        return generate_judge_statements_3($var_str, $type, $is_optional, $rule_str, $var_index,$rule_str_for_print);
    }
}

function generate_judge_statements_3($var_str, $type, $is_optional, $rule_str, $var_index,$rule_str_for_print)
{
    $field_missing_return_statement = 'return \'' . $var_index . ' field missing' . '\';';
    $type_wrong_return_statement = 'return \'' . $var_index . ' type wrong' . '\';';
    $rule_not_satisfy_return_statement = "return \"" . $var_index . ' rule ' . $rule_str_for_print . ' wrong' . "\";";
    if ($is_optional) {
        $str = "    if(isset($var_str)) {
        if(!is_$type($var_str)) $type_wrong_return_statement
        if(!($rule_str)) $rule_not_satisfy_return_statement
    };\n\n";
    } else {
        $str = "    if(!isset($var_str)) $field_missing_return_statement
    if(!is_$type($var_str)) $type_wrong_return_statement
    if(!($rule_str)) $rule_not_satisfy_return_statement\n\n";
    }
    return $str;
}


function generate_judge_statements_2($var_str, $type, $is_optional, $var_index,$rule_str_for_print)
{
    $field_missing_return_statement = 'return \'' . $var_index . ' field missing' . '\';';
    $type_wrong_return_statement = 'return \'' . $var_index . ' type wrong' . '\';';

    if ($is_optional) {
        $str = "    if(isset($var_str)) {
        if(!is_$type($var_str)) $type_wrong_return_statement
    }\n\n";
    } else {
        $str = "    if(!isset($var_str)) $field_missing_return_statement
    if(!is_$type($var_str)) $type_wrong_return_statement\n\n";
    }
    return $str;
}


function generate_statements($slices)
{
    $var_str = generate_variable_by_index($slices[0]);
    $type = get_type($slices[1]);
    $is_optional = is_optional($slices[1]);
    if (count($slices) == 3) {
        $rule_str = get_rule_str($slices[2], $var_str);
        $rule_str_for_print =  str_replace('$x', 'x', $slices[2]);
    } else {
        $rule_str = '';
        $rule_str_for_print='';
    }

    return generate_judge_statements($var_str, $type, $is_optional, $rule_str, $slices[0],$rule_str_for_print);
}

function process_lines($lines)
{
    $uniqid = uniqid();
    $str = "\nfunction is_validate_" . $uniqid . "(\$data){\n";
    foreach ($lines as $line) {
        $str .= process_line($line);
    }
    $str .= "\r\n    return 'ok';\r\n}\r\n";
    return $str;
}

function is_validate_5a0c1b072c1d1($data){
    if(!isset($data['code'])) return '.code field missing';
    if(!is_int($data['code'])) return '.code type wrong';
    if(!($data['code']==0)) return ".code rule x==0 wrong";

    if(!isset($data['data'])) return '.data field missing';
    if(!is_array($data['data'])) return '.data type wrong';
    if(!(count($data['data'])>=4&&count($data['data'])<=7)) return ".data rule count(x)>=4&&count(x)<=7 wrong";

    if(!isset($data['data']['uin'])) return '.data.uin field missing';
    if(!is_int($data['data']['uin'])) return '.data.uin type wrong';

    if(isset($data['data']['salt'])) {
        if(!is_string($data['data']['salt'])) return '.data.salt type wrong';
    }

    if(isset($data['data']['id_type'])) {
        if(!is_int($data['data']['id_type'])) return '.data.id_type type wrong';
    }


    return 'ok';
}


class Code extends CI_Controller
{
    public function index()
    {
        try {
            $op = isset($_GET['op']) ? $_GET['op'] : '';
            $template_file = "code_generator.html";
            $json_input = $this->input->post('json_input');

            $rule_input = $this->input->post('rule_input');

            if ($op == 'generate_index') {
                $arr = json_decode($json_input, true);
                if (!empty($arr)) {
                    $rule_input = get_array_keys($arr);
                    $rule_input = implode("\n", $rule_input);

                } else {
                    echo "json不合法";
                    exit;
                }
            }

            $code_generate = '';
            if ($op == 'generate_code') {
                $lines = explode("\n", $rule_input);
                $code_generate = process_lines($lines);
            }

            $this->load->view($template_file, array('json_input' => $json_input, 'rule_input' => $rule_input, 'code_generate' => $code_generate));
        } catch (Exception $e) {
            echo $e->getMessage();
        }
    }
}


