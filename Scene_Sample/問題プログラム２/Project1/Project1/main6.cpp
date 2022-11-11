#include <stdio.h>

const int KUSO = 4000000;
const int KAMI = 10;

int Fibonacci(int& num1, int& num2);

int main()
{
    int num[2] = { 1,2 };
    int ans = 0;
    int temp = 0;

    ans = num[1];

    while (temp < KUSO)
    {
        temp = Fibonacci(num[0], num[1]);
        if (temp % 2 == 0)
        {
            ans += temp;
        }
    }
    
    printf("%d", ans);

    return 0;
}

int Fibonacci(int& num1, int& num2)
{
    int ans;
    ans = num1 + num2;

    num1 = num2;
    num2 = ans;


    return ans;
}
