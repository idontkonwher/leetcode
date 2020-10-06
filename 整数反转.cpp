#include <iostream>
#include <climits>
using namespace std;
int reverse(int x)
{
    long int reverse_x = 0;
    int temp = x;
    while (temp)
    {
        reverse_x *= 10;
        reverse_x += temp % 10;
        temp /= 10;
    }
    if (reverse_x > INT_MAX || reverse_x < INT_MIN)
    {
        return 0;
    }
    return reverse_x;
}
int main()
{
    cout<<INT_MAX;
    cout << reverse(1534236469);
}