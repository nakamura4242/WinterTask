#include<stdio.h>

const int KAMI = 13195;
const int HUTU = 100;
const long long KUSO = 600851475143;

const long long DAI = KUSO;

int main()
{
    int ans = 1;
    double temp = 0.0f;
    long long after = DAI;

    for (long long i = 2; i < DAI; i++)
    {
        temp = (double)after / i;

        if (temp < 1.0f)
        {
            break;
        }

        if (after % i != 0)
        {
            continue;
        }
        else
        {
            if (ans < i)
            {
                ans = i;
            }
        }
        after = temp;

    }

    printf("%d", ans);

    return 0;
}