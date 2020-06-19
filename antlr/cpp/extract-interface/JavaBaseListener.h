
// Generated from Java.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "JavaListener.h"


/**
 * This class provides an empty implementation of JavaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  JavaBaseListener : public JavaListener {
public:

  virtual void enterCompilationUnit(JavaParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(JavaParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterPackageDeclaration(JavaParser::PackageDeclarationContext * /*ctx*/) override { }
  virtual void exitPackageDeclaration(JavaParser::PackageDeclarationContext * /*ctx*/) override { }

  virtual void enterImportDeclaration(JavaParser::ImportDeclarationContext * /*ctx*/) override { }
  virtual void exitImportDeclaration(JavaParser::ImportDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeDeclaration(JavaParser::TypeDeclarationContext * /*ctx*/) override { }
  virtual void exitTypeDeclaration(JavaParser::TypeDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(JavaParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(JavaParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterEnumDeclaration(JavaParser::EnumDeclarationContext * /*ctx*/) override { }
  virtual void exitEnumDeclaration(JavaParser::EnumDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceDeclaration(JavaParser::InterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceDeclaration(JavaParser::InterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceModifier(JavaParser::ClassOrInterfaceModifierContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceModifier(JavaParser::ClassOrInterfaceModifierContext * /*ctx*/) override { }

  virtual void enterModifiers(JavaParser::ModifiersContext * /*ctx*/) override { }
  virtual void exitModifiers(JavaParser::ModifiersContext * /*ctx*/) override { }

  virtual void enterTypeParameters(JavaParser::TypeParametersContext * /*ctx*/) override { }
  virtual void exitTypeParameters(JavaParser::TypeParametersContext * /*ctx*/) override { }

  virtual void enterTypeParameter(JavaParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(JavaParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterTypeBound(JavaParser::TypeBoundContext * /*ctx*/) override { }
  virtual void exitTypeBound(JavaParser::TypeBoundContext * /*ctx*/) override { }

  virtual void enterEnumBody(JavaParser::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(JavaParser::EnumBodyContext * /*ctx*/) override { }

  virtual void enterEnumConstants(JavaParser::EnumConstantsContext * /*ctx*/) override { }
  virtual void exitEnumConstants(JavaParser::EnumConstantsContext * /*ctx*/) override { }

  virtual void enterEnumConstant(JavaParser::EnumConstantContext * /*ctx*/) override { }
  virtual void exitEnumConstant(JavaParser::EnumConstantContext * /*ctx*/) override { }

  virtual void enterEnumBodyDeclarations(JavaParser::EnumBodyDeclarationsContext * /*ctx*/) override { }
  virtual void exitEnumBodyDeclarations(JavaParser::EnumBodyDeclarationsContext * /*ctx*/) override { }

  virtual void enterNormalInterfaceDeclaration(JavaParser::NormalInterfaceDeclarationContext * /*ctx*/) override { }
  virtual void exitNormalInterfaceDeclaration(JavaParser::NormalInterfaceDeclarationContext * /*ctx*/) override { }

  virtual void enterTypeList(JavaParser::TypeListContext * /*ctx*/) override { }
  virtual void exitTypeList(JavaParser::TypeListContext * /*ctx*/) override { }

  virtual void enterClassBody(JavaParser::ClassBodyContext * /*ctx*/) override { }
  virtual void exitClassBody(JavaParser::ClassBodyContext * /*ctx*/) override { }

  virtual void enterInterfaceBody(JavaParser::InterfaceBodyContext * /*ctx*/) override { }
  virtual void exitInterfaceBody(JavaParser::InterfaceBodyContext * /*ctx*/) override { }

  virtual void enterClassBodyDeclaration(JavaParser::ClassBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitClassBodyDeclaration(JavaParser::ClassBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterMember(JavaParser::MemberContext * /*ctx*/) override { }
  virtual void exitMember(JavaParser::MemberContext * /*ctx*/) override { }

  virtual void enterMethodDeclaration(JavaParser::MethodDeclarationContext * /*ctx*/) override { }
  virtual void exitMethodDeclaration(JavaParser::MethodDeclarationContext * /*ctx*/) override { }

  virtual void enterMethodDeclarationRest(JavaParser::MethodDeclarationRestContext * /*ctx*/) override { }
  virtual void exitMethodDeclarationRest(JavaParser::MethodDeclarationRestContext * /*ctx*/) override { }

  virtual void enterGenericMethodDeclaration(JavaParser::GenericMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitGenericMethodDeclaration(JavaParser::GenericMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterFieldDeclaration(JavaParser::FieldDeclarationContext * /*ctx*/) override { }
  virtual void exitFieldDeclaration(JavaParser::FieldDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructorDeclaration(JavaParser::ConstructorDeclarationContext * /*ctx*/) override { }
  virtual void exitConstructorDeclaration(JavaParser::ConstructorDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceBodyDeclaration(JavaParser::InterfaceBodyDeclarationContext * /*ctx*/) override { }
  virtual void exitInterfaceBodyDeclaration(JavaParser::InterfaceBodyDeclarationContext * /*ctx*/) override { }

  virtual void enterInterfaceMemberDecl(JavaParser::InterfaceMemberDeclContext * /*ctx*/) override { }
  virtual void exitInterfaceMemberDecl(JavaParser::InterfaceMemberDeclContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodOrFieldDecl(JavaParser::InterfaceMethodOrFieldDeclContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodOrFieldDecl(JavaParser::InterfaceMethodOrFieldDeclContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodOrFieldRest(JavaParser::InterfaceMethodOrFieldRestContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodOrFieldRest(JavaParser::InterfaceMethodOrFieldRestContext * /*ctx*/) override { }

  virtual void enterVoidMethodDeclaratorRest(JavaParser::VoidMethodDeclaratorRestContext * /*ctx*/) override { }
  virtual void exitVoidMethodDeclaratorRest(JavaParser::VoidMethodDeclaratorRestContext * /*ctx*/) override { }

  virtual void enterInterfaceMethodDeclaratorRest(JavaParser::InterfaceMethodDeclaratorRestContext * /*ctx*/) override { }
  virtual void exitInterfaceMethodDeclaratorRest(JavaParser::InterfaceMethodDeclaratorRestContext * /*ctx*/) override { }

  virtual void enterInterfaceGenericMethodDecl(JavaParser::InterfaceGenericMethodDeclContext * /*ctx*/) override { }
  virtual void exitInterfaceGenericMethodDecl(JavaParser::InterfaceGenericMethodDeclContext * /*ctx*/) override { }

  virtual void enterVoidInterfaceMethodDeclaratorRest(JavaParser::VoidInterfaceMethodDeclaratorRestContext * /*ctx*/) override { }
  virtual void exitVoidInterfaceMethodDeclaratorRest(JavaParser::VoidInterfaceMethodDeclaratorRestContext * /*ctx*/) override { }

  virtual void enterConstantDeclarator(JavaParser::ConstantDeclaratorContext * /*ctx*/) override { }
  virtual void exitConstantDeclarator(JavaParser::ConstantDeclaratorContext * /*ctx*/) override { }

  virtual void enterVariableDeclarators(JavaParser::VariableDeclaratorsContext * /*ctx*/) override { }
  virtual void exitVariableDeclarators(JavaParser::VariableDeclaratorsContext * /*ctx*/) override { }

  virtual void enterVariableDeclarator(JavaParser::VariableDeclaratorContext * /*ctx*/) override { }
  virtual void exitVariableDeclarator(JavaParser::VariableDeclaratorContext * /*ctx*/) override { }

  virtual void enterConstantDeclaratorsRest(JavaParser::ConstantDeclaratorsRestContext * /*ctx*/) override { }
  virtual void exitConstantDeclaratorsRest(JavaParser::ConstantDeclaratorsRestContext * /*ctx*/) override { }

  virtual void enterConstantDeclaratorRest(JavaParser::ConstantDeclaratorRestContext * /*ctx*/) override { }
  virtual void exitConstantDeclaratorRest(JavaParser::ConstantDeclaratorRestContext * /*ctx*/) override { }

  virtual void enterVariableDeclaratorId(JavaParser::VariableDeclaratorIdContext * /*ctx*/) override { }
  virtual void exitVariableDeclaratorId(JavaParser::VariableDeclaratorIdContext * /*ctx*/) override { }

  virtual void enterVariableInitializer(JavaParser::VariableInitializerContext * /*ctx*/) override { }
  virtual void exitVariableInitializer(JavaParser::VariableInitializerContext * /*ctx*/) override { }

  virtual void enterArrayInitializer(JavaParser::ArrayInitializerContext * /*ctx*/) override { }
  virtual void exitArrayInitializer(JavaParser::ArrayInitializerContext * /*ctx*/) override { }

  virtual void enterModifier(JavaParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(JavaParser::ModifierContext * /*ctx*/) override { }

  virtual void enterPackageOrTypeName(JavaParser::PackageOrTypeNameContext * /*ctx*/) override { }
  virtual void exitPackageOrTypeName(JavaParser::PackageOrTypeNameContext * /*ctx*/) override { }

  virtual void enterEnumConstantName(JavaParser::EnumConstantNameContext * /*ctx*/) override { }
  virtual void exitEnumConstantName(JavaParser::EnumConstantNameContext * /*ctx*/) override { }

  virtual void enterTypeName(JavaParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(JavaParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterType(JavaParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(JavaParser::TypeContext * /*ctx*/) override { }

  virtual void enterClassOrInterfaceType(JavaParser::ClassOrInterfaceTypeContext * /*ctx*/) override { }
  virtual void exitClassOrInterfaceType(JavaParser::ClassOrInterfaceTypeContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(JavaParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(JavaParser::PrimitiveTypeContext * /*ctx*/) override { }

  virtual void enterVariableModifier(JavaParser::VariableModifierContext * /*ctx*/) override { }
  virtual void exitVariableModifier(JavaParser::VariableModifierContext * /*ctx*/) override { }

  virtual void enterTypeArguments(JavaParser::TypeArgumentsContext * /*ctx*/) override { }
  virtual void exitTypeArguments(JavaParser::TypeArgumentsContext * /*ctx*/) override { }

  virtual void enterTypeArgument(JavaParser::TypeArgumentContext * /*ctx*/) override { }
  virtual void exitTypeArgument(JavaParser::TypeArgumentContext * /*ctx*/) override { }

  virtual void enterQualifiedNameList(JavaParser::QualifiedNameListContext * /*ctx*/) override { }
  virtual void exitQualifiedNameList(JavaParser::QualifiedNameListContext * /*ctx*/) override { }

  virtual void enterFormalParameters(JavaParser::FormalParametersContext * /*ctx*/) override { }
  virtual void exitFormalParameters(JavaParser::FormalParametersContext * /*ctx*/) override { }

  virtual void enterFormalParameterDecls(JavaParser::FormalParameterDeclsContext * /*ctx*/) override { }
  virtual void exitFormalParameterDecls(JavaParser::FormalParameterDeclsContext * /*ctx*/) override { }

  virtual void enterFormalParameterDeclsRest(JavaParser::FormalParameterDeclsRestContext * /*ctx*/) override { }
  virtual void exitFormalParameterDeclsRest(JavaParser::FormalParameterDeclsRestContext * /*ctx*/) override { }

  virtual void enterMethodBody(JavaParser::MethodBodyContext * /*ctx*/) override { }
  virtual void exitMethodBody(JavaParser::MethodBodyContext * /*ctx*/) override { }

  virtual void enterConstructorBody(JavaParser::ConstructorBodyContext * /*ctx*/) override { }
  virtual void exitConstructorBody(JavaParser::ConstructorBodyContext * /*ctx*/) override { }

  virtual void enterExplicitConstructorInvocation(JavaParser::ExplicitConstructorInvocationContext * /*ctx*/) override { }
  virtual void exitExplicitConstructorInvocation(JavaParser::ExplicitConstructorInvocationContext * /*ctx*/) override { }

  virtual void enterQualifiedName(JavaParser::QualifiedNameContext * /*ctx*/) override { }
  virtual void exitQualifiedName(JavaParser::QualifiedNameContext * /*ctx*/) override { }

  virtual void enterLiteral(JavaParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(JavaParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(JavaParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(JavaParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(JavaParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(JavaParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterAnnotations(JavaParser::AnnotationsContext * /*ctx*/) override { }
  virtual void exitAnnotations(JavaParser::AnnotationsContext * /*ctx*/) override { }

  virtual void enterAnnotation(JavaParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(JavaParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterAnnotationName(JavaParser::AnnotationNameContext * /*ctx*/) override { }
  virtual void exitAnnotationName(JavaParser::AnnotationNameContext * /*ctx*/) override { }

  virtual void enterElementValuePairs(JavaParser::ElementValuePairsContext * /*ctx*/) override { }
  virtual void exitElementValuePairs(JavaParser::ElementValuePairsContext * /*ctx*/) override { }

  virtual void enterElementValuePair(JavaParser::ElementValuePairContext * /*ctx*/) override { }
  virtual void exitElementValuePair(JavaParser::ElementValuePairContext * /*ctx*/) override { }

  virtual void enterElementValue(JavaParser::ElementValueContext * /*ctx*/) override { }
  virtual void exitElementValue(JavaParser::ElementValueContext * /*ctx*/) override { }

  virtual void enterElementValueArrayInitializer(JavaParser::ElementValueArrayInitializerContext * /*ctx*/) override { }
  virtual void exitElementValueArrayInitializer(JavaParser::ElementValueArrayInitializerContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeDeclaration(JavaParser::AnnotationTypeDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeDeclaration(JavaParser::AnnotationTypeDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeBody(JavaParser::AnnotationTypeBodyContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeBody(JavaParser::AnnotationTypeBodyContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeElementDeclaration(JavaParser::AnnotationTypeElementDeclarationContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeElementDeclaration(JavaParser::AnnotationTypeElementDeclarationContext * /*ctx*/) override { }

  virtual void enterAnnotationTypeElementRest(JavaParser::AnnotationTypeElementRestContext * /*ctx*/) override { }
  virtual void exitAnnotationTypeElementRest(JavaParser::AnnotationTypeElementRestContext * /*ctx*/) override { }

  virtual void enterAnnotationMethodOrConstantRest(JavaParser::AnnotationMethodOrConstantRestContext * /*ctx*/) override { }
  virtual void exitAnnotationMethodOrConstantRest(JavaParser::AnnotationMethodOrConstantRestContext * /*ctx*/) override { }

  virtual void enterAnnotationMethodRest(JavaParser::AnnotationMethodRestContext * /*ctx*/) override { }
  virtual void exitAnnotationMethodRest(JavaParser::AnnotationMethodRestContext * /*ctx*/) override { }

  virtual void enterAnnotationConstantRest(JavaParser::AnnotationConstantRestContext * /*ctx*/) override { }
  virtual void exitAnnotationConstantRest(JavaParser::AnnotationConstantRestContext * /*ctx*/) override { }

  virtual void enterDefaultValue(JavaParser::DefaultValueContext * /*ctx*/) override { }
  virtual void exitDefaultValue(JavaParser::DefaultValueContext * /*ctx*/) override { }

  virtual void enterBlock(JavaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(JavaParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStatement(JavaParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(JavaParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclarationStatement(JavaParser::LocalVariableDeclarationStatementContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclarationStatement(JavaParser::LocalVariableDeclarationStatementContext * /*ctx*/) override { }

  virtual void enterLocalVariableDeclaration(JavaParser::LocalVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitLocalVariableDeclaration(JavaParser::LocalVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterVariableModifiers(JavaParser::VariableModifiersContext * /*ctx*/) override { }
  virtual void exitVariableModifiers(JavaParser::VariableModifiersContext * /*ctx*/) override { }

  virtual void enterStatement(JavaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(JavaParser::StatementContext * /*ctx*/) override { }

  virtual void enterCatches(JavaParser::CatchesContext * /*ctx*/) override { }
  virtual void exitCatches(JavaParser::CatchesContext * /*ctx*/) override { }

  virtual void enterCatchClause(JavaParser::CatchClauseContext * /*ctx*/) override { }
  virtual void exitCatchClause(JavaParser::CatchClauseContext * /*ctx*/) override { }

  virtual void enterFormalParameter(JavaParser::FormalParameterContext * /*ctx*/) override { }
  virtual void exitFormalParameter(JavaParser::FormalParameterContext * /*ctx*/) override { }

  virtual void enterSwitchBlock(JavaParser::SwitchBlockContext * /*ctx*/) override { }
  virtual void exitSwitchBlock(JavaParser::SwitchBlockContext * /*ctx*/) override { }

  virtual void enterSwitchBlockStatementGroup(JavaParser::SwitchBlockStatementGroupContext * /*ctx*/) override { }
  virtual void exitSwitchBlockStatementGroup(JavaParser::SwitchBlockStatementGroupContext * /*ctx*/) override { }

  virtual void enterSwitchLabel(JavaParser::SwitchLabelContext * /*ctx*/) override { }
  virtual void exitSwitchLabel(JavaParser::SwitchLabelContext * /*ctx*/) override { }

  virtual void enterForControl(JavaParser::ForControlContext * /*ctx*/) override { }
  virtual void exitForControl(JavaParser::ForControlContext * /*ctx*/) override { }

  virtual void enterForInit(JavaParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(JavaParser::ForInitContext * /*ctx*/) override { }

  virtual void enterEnhancedForControl(JavaParser::EnhancedForControlContext * /*ctx*/) override { }
  virtual void exitEnhancedForControl(JavaParser::EnhancedForControlContext * /*ctx*/) override { }

  virtual void enterForUpdate(JavaParser::ForUpdateContext * /*ctx*/) override { }
  virtual void exitForUpdate(JavaParser::ForUpdateContext * /*ctx*/) override { }

  virtual void enterParExpression(JavaParser::ParExpressionContext * /*ctx*/) override { }
  virtual void exitParExpression(JavaParser::ParExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionList(JavaParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(JavaParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterStatementExpression(JavaParser::StatementExpressionContext * /*ctx*/) override { }
  virtual void exitStatementExpression(JavaParser::StatementExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(JavaParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(JavaParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterExpression(JavaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(JavaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimary(JavaParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(JavaParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterCreator(JavaParser::CreatorContext * /*ctx*/) override { }
  virtual void exitCreator(JavaParser::CreatorContext * /*ctx*/) override { }

  virtual void enterCreatedName(JavaParser::CreatedNameContext * /*ctx*/) override { }
  virtual void exitCreatedName(JavaParser::CreatedNameContext * /*ctx*/) override { }

  virtual void enterInnerCreator(JavaParser::InnerCreatorContext * /*ctx*/) override { }
  virtual void exitInnerCreator(JavaParser::InnerCreatorContext * /*ctx*/) override { }

  virtual void enterExplicitGenericInvocation(JavaParser::ExplicitGenericInvocationContext * /*ctx*/) override { }
  virtual void exitExplicitGenericInvocation(JavaParser::ExplicitGenericInvocationContext * /*ctx*/) override { }

  virtual void enterArrayCreatorRest(JavaParser::ArrayCreatorRestContext * /*ctx*/) override { }
  virtual void exitArrayCreatorRest(JavaParser::ArrayCreatorRestContext * /*ctx*/) override { }

  virtual void enterClassCreatorRest(JavaParser::ClassCreatorRestContext * /*ctx*/) override { }
  virtual void exitClassCreatorRest(JavaParser::ClassCreatorRestContext * /*ctx*/) override { }

  virtual void enterNonWildcardTypeArguments(JavaParser::NonWildcardTypeArgumentsContext * /*ctx*/) override { }
  virtual void exitNonWildcardTypeArguments(JavaParser::NonWildcardTypeArgumentsContext * /*ctx*/) override { }

  virtual void enterArguments(JavaParser::ArgumentsContext * /*ctx*/) override { }
  virtual void exitArguments(JavaParser::ArgumentsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

