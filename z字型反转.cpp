#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows)
{
    string str;
    str.reserve(s.length()+5); //提前确定好长度好像可以让程序快一点（避免重新分配内存）
    if (numRows == 1)
    {
        return s;
    }
    for (int i = 0; i < numRows; i++)
    {
        for (int k = i; k < s.length(); k++)
        {
            int temp = k % (2 * numRows - 2);
            if (temp == i)
            {
                str += s[k];
            }
            else if (temp >= numRows && (2 * numRows - 2) - temp == i)
            {
                str += s[k];
            }
        }
    }
    return str;
}

int main()
{
    string s = "LEETCODEISHIRING";
    int numRows = 4;
    cout << convert(s, 4);
}