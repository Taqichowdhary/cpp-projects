#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;
    std::cout << "calculator << '\n'";

    std::cout << "enter operator (+, - , * , / ) : ";
    std::cin >> op;

    std::cout << "enter #1 : ";
    std::cin >> num1;

    std::cout << "enter #2 : ";
    std::cin >> num2;

    switch (op){
        case '+':
            result = num1 + num2;
            std::cout << "result:" << result;
            break;
             case '-':
            result = num1 - num2;
            std::cout << "result:" << result;
            break;
             case '*':
            result = num1 * num2;
            std::cout << "result:" << result;
            break;
             case '/':
            result = num1 / num2;
            std::cout << "result:" << result;
            break;
            default:
            std::cout << "error! operator is not correct";
            std::cout << "thanks for using the calculator!";
        }
    return 0;
}