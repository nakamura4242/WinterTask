#include <iostream>
#include <stdio.h>
#include <Windows.h>

void main()
{
    int kariMax = 0;
    char MaxStr[100];

    for (int I = 100; I <= 999; I++) {
        for (int J = I; J <= 999; J++) {
            int wkInt = I * J;

            char ascStr[100];
            wsprintf(ascStr,"%d", wkInt);

            char descStr[100];
            strcpy_s(descStr, ascStr);
            _strrev(descStr);

            if (strcmp(ascStr, descStr) == 0 && kariMax < wkInt) {
                kariMax = wkInt;
                wsprintf(MaxStr, "%d * %d = %d", I, J, wkInt);
            }
        }
    }
    std::cout << MaxStr << std::endl;
}
