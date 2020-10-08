#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    int temp = x;
    long int pdm = 0;
    while (temp > 0)
    {
        pdm = pdm * 10 + temp % 10;
        temp /= 10;
    }
    return pdm == x;
}