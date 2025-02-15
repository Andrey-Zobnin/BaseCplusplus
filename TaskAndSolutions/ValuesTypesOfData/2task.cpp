/*

Не запуская код, ответьте на вопрос: что выведет на экран данная программа?

*/
#include "iostream"
#include "string"

int main() 
{
    string a = "2";
    string b = "4+a";
    string c = a + b;
    std::cout << a + c + b << std::endl;
    return 0;
}

// output 
// 224+a4+a
