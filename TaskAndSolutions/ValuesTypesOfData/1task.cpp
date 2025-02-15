/*

Не запуская код, ответьте на вопрос: что выведет на экран данная программа?

*/
#include "iostream"

int main(void)
{
    int a = 2;
    int b = 4 + a + a;
    int c = 12 + a * b;
    std::cout << a + b + c << std::endl;

    return 0;

}
// output
// 38