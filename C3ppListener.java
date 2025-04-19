// Generated from C3pp.g4 by ANTLR 4.13.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link C3ppParser}.
 */
public interface C3ppListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link C3ppParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(C3ppParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(C3ppParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#classDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterClassDeclaration(C3ppParser.ClassDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#classDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitClassDeclaration(C3ppParser.ClassDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#classBody}.
	 * @param ctx the parse tree
	 */
	void enterClassBody(C3ppParser.ClassBodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#classBody}.
	 * @param ctx the parse tree
	 */
	void exitClassBody(C3ppParser.ClassBodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#constructorDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterConstructorDeclaration(C3ppParser.ConstructorDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#constructorDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitConstructorDeclaration(C3ppParser.ConstructorDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#fieldDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFieldDeclaration(C3ppParser.FieldDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#fieldDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFieldDeclaration(C3ppParser.FieldDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#methodDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterMethodDeclaration(C3ppParser.MethodDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#methodDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitMethodDeclaration(C3ppParser.MethodDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#methodBody}.
	 * @param ctx the parse tree
	 */
	void enterMethodBody(C3ppParser.MethodBodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#methodBody}.
	 * @param ctx the parse tree
	 */
	void exitMethodBody(C3ppParser.MethodBodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDeclaration(C3ppParser.FunctionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#functionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDeclaration(C3ppParser.FunctionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterVariableDeclaration(C3ppParser.VariableDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#variableDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitVariableDeclaration(C3ppParser.VariableDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(C3ppParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(C3ppParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(C3ppParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(C3ppParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(C3ppParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(C3ppParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(C3ppParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(C3ppParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(C3ppParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(C3ppParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStatement(C3ppParser.ExpressionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStatement(C3ppParser.ExpressionStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void enterReturnStatement(C3ppParser.ReturnStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#returnStatement}.
	 * @param ctx the parse tree
	 */
	void exitReturnStatement(C3ppParser.ReturnStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(C3ppParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(C3ppParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(C3ppParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(C3ppParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#equality}.
	 * @param ctx the parse tree
	 */
	void enterEquality(C3ppParser.EqualityContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#equality}.
	 * @param ctx the parse tree
	 */
	void exitEquality(C3ppParser.EqualityContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#comparison}.
	 * @param ctx the parse tree
	 */
	void enterComparison(C3ppParser.ComparisonContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#comparison}.
	 * @param ctx the parse tree
	 */
	void exitComparison(C3ppParser.ComparisonContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#addition}.
	 * @param ctx the parse tree
	 */
	void enterAddition(C3ppParser.AdditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#addition}.
	 * @param ctx the parse tree
	 */
	void exitAddition(C3ppParser.AdditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#multiplication}.
	 * @param ctx the parse tree
	 */
	void enterMultiplication(C3ppParser.MultiplicationContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#multiplication}.
	 * @param ctx the parse tree
	 */
	void exitMultiplication(C3ppParser.MultiplicationContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#unary}.
	 * @param ctx the parse tree
	 */
	void enterUnary(C3ppParser.UnaryContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#unary}.
	 * @param ctx the parse tree
	 */
	void exitUnary(C3ppParser.UnaryContext ctx);
	/**
	 * Enter a parse tree produced by {@link C3ppParser#primary}.
	 * @param ctx the parse tree
	 */
	void enterPrimary(C3ppParser.PrimaryContext ctx);
	/**
	 * Exit a parse tree produced by {@link C3ppParser#primary}.
	 * @param ctx the parse tree
	 */
	void exitPrimary(C3ppParser.PrimaryContext ctx);
}