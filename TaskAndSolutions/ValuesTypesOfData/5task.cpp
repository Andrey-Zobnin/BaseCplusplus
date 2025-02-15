/*

Hello, Hurry!

Напишите программу, которая приветствует пользователя, выводя слово Hello, введённое имя и знаки препинания по образцу (см. пример входных и выходных данных). Программа должна считывать в строковую переменную значение и писать соответствующее приветствие. Обратите внимание, что после запятой должен обязательно стоять пробел, а перед восклицательным знаком пробела нет.

Входные данные

Вводится строка, длина которой не превышает 10

символов.

Выходные данные

Выведите ответ на задачу.
Примеры
Ввод
Hurry
Вывод

Hello, Hurry!

*/

#include <iostream>
#include <cstring>

int main() 
{
    char name[100]; 
    std::cin.getline(name, 100); 
    std::cout << "Hello, " << name << "!" << std::endl; 
    return 0;
}
