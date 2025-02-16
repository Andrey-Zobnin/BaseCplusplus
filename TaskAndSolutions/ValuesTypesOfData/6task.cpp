/*

Следующее и предыдущее

Напишите программу, которая считывает целое число и выводит текст, аналогичный приведённому в примере. Пробелы, знаки препинания, заглавные и строчные буквы важны!

Входные данные

Вводится целое число, по модулю не превосходящее 10000

.

Выходные данные

Выведите сначала фразу "The next number for the number", затем введённое число, затем слово "is", окружённое пробелами, затем формулу для следующего за введённым числа, наконец, знак точки без пробела. Аналогично в следующей строке для предыдущего числа.

Примечание

Вывод необходимо организовать в две строки, по одному предложению в каждой. При выводе обращайте внимание на пробелы и регистр.
Примеры
Ввод
179
66

Вывод
The next number for the number 179 is 180.
The previous number for the number 179 is 178.

The next number for the number 66 is 67.
The previous number for the number 66 is 65.


*/
#include "iostream"

int main() 
{
    int number;
    std::cin >> number;

    int next_number = number + 1;
    int previous_number = number - 1;


    std::cout << "The next number for the number " << number << " is " << next_number << "." << std::endl;
    std::cout << "The previous number for the number " << number << " is " << previous_number << "." << std::endl;

}