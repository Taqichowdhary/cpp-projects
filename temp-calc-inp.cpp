#include<iostream>

int main(){
    double temp;
    char unit;
        std::cout << "temperature conversiom program" << '\n';
    std::cout << "F = Farenhite\n";
    std::cout << "C = Celcius\n";
    std::cout << "what unit would you like to convert? ";
    std::cin >> unit;

    if(unit == 'f' || unit == 'F'){
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;
        temp = (temp * 1.8) + 32;
        std::cout << "The temperature in Farenhite is: " << temp << "F\n";
    }
    else if(unit == 'c' || unit == 'C'){
        std::cout << "Enter temperature in Farenhite: ";
        std::cin >> temp;
        temp = (temp - 32) * 5/9;
        std::cout << "Temperature in celcius is: " << temp << "C\n";
    }
    std::cout << "thank you  :)  ";
    return 0;
}