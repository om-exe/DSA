#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INT16_MAX)
        {
            ans = ans * 2;
            cout << ans;
        }
        return false;
    }

    return 0;
}