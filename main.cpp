#include <iostream>
#include <cmath>
#include <string>
class Calculator {
public:
    double add(double a, double b) {
        return a + b;

    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double devide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Devide by minys!!" << std::endl;
            return 0;
        }
    }
};


class SquareRootCalculator {
public:
    double SquareRoot(double a) {
        return sqrt(a);

    }
};


class UserInterface {
public:
    void getInput(double &num1, double &num2) {
        std::cout << "enter first number:";
        std::cin >> num1;
        std::cout << "enter second number:";
        std::cin >> num2;
    }

    static void displayResult(const std::string &operation, double result) {
        std::cout << operation << ":" << result << std::endl;
    }

    void displayError(const std::string &errorMessage) {
        std::cout << "Error" << errorMessage << std::endl;
    }
};
int main(){
    Calculator calculator;
    SquareRootCalculator sqrtCalculator;
    UserInterface userInterface;

    double num1,num2;
    userInterface.getInput(num1, num2);

    double sum = calculator.add(num1,num2);
    userInterface.displayResult("Summa", sum);

    double difference = calculator.subtract(num1,num2);
    userInterface.displayResult("Raznost", difference);

    double product = calculator.multiply(num1 ,num2);
    userInterface.displayResult("proizvedeniye", product);

    double quotient = calculator.devide(num1, num2);
    if (quotient !=0){
        double quo;
        userInterface.displayResult("chastnoye", quo - quotient);
    }
    double  sqrtRezult = sqrtCalculator.SquareRoot(num1);
    userInterface.displayResult("Kvadratniy koren first number", sqrtRezult);
    return 0;
}
