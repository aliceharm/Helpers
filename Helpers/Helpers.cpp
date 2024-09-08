// Helpers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include "Helpers.h"

int getValue() //функция для запроса числа
{
    std::cout << "enter your number: ";
    int a;
    std::cin >> a;
    return a;
}

void print(int a) //функция для печати
{
    std::cout << "result = " << a << "\n";
}

int main()
{
    int a = getValue(); //запрашиваем 1 число
    int b = getValue(); //запрашиваем 2 число
    int result = sguareSum(a, b); //идём в соседний файл и вычисляем квадрат суммы
    print(result); //печатаем результат
    

}

