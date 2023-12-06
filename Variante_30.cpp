MAB, [‎06‎/‎12‎/‎2023 ‎08‎:‎06]
я заканчиваю организовывать

MAB, [‎06‎/‎12‎/‎2023 ‎11‎:‎52]
#include <iostream> 

class Fraction { 
private: 
    int numerator; 
    int denominator; 

public: 
    // Конструктор с двумя целыми параметрами 
    Fraction(int num, int den) : numerator(num), denominator(den) { 
        if (denominator == 0) { 
            std::cerr << "Error: Denominator cannot be zero." << std::endl; 
            exit(1); 
        } 
    } 

    // Метод для сложения двух дробей 
    Fraction add(const Fraction& other) const { 
        int resultNumerator = numerator * other.denominator + other.numerator * denominator; 
        int resultDenominator = denominator * other.denominator; 
        return Fraction(resultNumerator, resultDenominator); 
    } 

    // Метод для умножения дроби на целое число 
    Fraction mult(int factor) const { 
        int resultNumerator = numerator * factor; 
        return Fraction(resultNumerator, denominator); 
    } 

    // Метод для печати дроби 
    void print() const { 
        std::cout << numerator << "/" << denominator << std::endl; 
    } 
}; 

int main() { 
    // Создаем объект класса Fraction 
    Fraction fraction1(1, 2); 

    // Печать дроби 
    std::cout << "Fraction 1: "; 
    fraction1.print(); 

    // Создаем еще один объект класса Fraction 
    Fraction fraction2(3, 4); 

    // Печать второй дроби 
    std::cout << "Fraction 2: "; 
    fraction2.print(); 

    // Тестирование сложения дробей 
    Fraction sum = fraction1.add(fraction2); 
    std::cout << "Sum: "; 
    sum.print(); 

    // Тестирование умножения дроби на целое число 
    int factor = 2; 
    Fraction product = fraction1.mult(factor); 
    std::cout << "Product: "; 
    product.print(); 

    return 0; 
}
