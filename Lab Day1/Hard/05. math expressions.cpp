#include <iostream>
#include <stack>
#include <queue>
#include <sstream>
#include <cmath>
#include <cstdlib>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

double evaluateExpression(const std::string& expression) {
    std::stack<char> operatorStack;
    std::queue<std::string> outputQueue;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0])) {
            outputQueue.push(token);
        } else if (isOperator(token[0])) {
            while (!operatorStack.empty() && precedence(operatorStack.top()) >= precedence(token[0])) {
                outputQueue.push(std::string(1, operatorStack.top()));
                operatorStack.pop();
            }
            operatorStack.push(token[0]);
        }
    }

    while (!operatorStack.empty()) {
        outputQueue.push(std::string(1, operatorStack.top()));
        operatorStack.pop();
    }

    std::stack<double> evaluationStack;

    while (!outputQueue.empty()) {
        std::string token = outputQueue.front();
        outputQueue.pop();

        if (isdigit(token[0])) {
            evaluationStack.push(std::atof(token.c_str()));
        } else if (isOperator(token[0])) {
            double operand2 = evaluationStack.top();
            evaluationStack.pop();
            double operand1 = evaluationStack.top();
            evaluationStack.pop();
            double result;

            switch (token[0]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                case '^':
                    result = pow(operand1, operand2);
                    break;
            }

            evaluationStack.push(result);
        }
    }

    return evaluationStack.top();
}

int main() {
    std::string expression;

    std::cout << "Enter the expression: ";
    std::getline(std::cin, expression);

    double result = evaluateExpression(expression);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
