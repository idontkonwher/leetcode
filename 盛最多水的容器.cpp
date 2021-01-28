#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int a = 0;
    int b = height.size()-1;
    int max = -1;
    while (a != b)
    {
        int volume;
        if (height[a] < height[b])
        {
            volume = height[a] * (b - a);
            a++;
        }
        else
        {
            volume = height[b] * (b - a);
            b--;
        }
        if (volume > max)
            max = volume;
    }
    return max;
}
int main()
{
    int num;
    vector<int> heights;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int height;
        cin >> height;
        heights.push_back(height);
    }
    cout << maxArea(heights);
}