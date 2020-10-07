#include <iostream>
#include <climits>
#include <string>
using namespace std;

int myAtoi(string s)
{
    int index = 0;
    long int num = 0;
    while (s[index] == ' ' && index < s.length())
    {
        index++;
    }
    bool is_negative = false;
    if (s[index] == '-')
    {
        is_negative = true;
        index++;
    }
    else if (s[index] == '+')
    {
        index++;
    }
    while (index < s.length() && s[index] > 47 && s[index] < 58)
    {
        num *= 10;
        num += (s[index] - 48);
        if (num > INT_MAX && !is_negative)
        {
            return INT_MAX;
        }
        if (num * -1 < INT_MIN && is_negative)
        {
            return INT_MIN;
        }
        index++;
    }
    if (is_negative)
    {
        num *= -1;
    }
    return num;
}
int main()
{
    string s = "4193 with words";
    cout<<myAtoi(s);
}