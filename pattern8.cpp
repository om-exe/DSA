#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << (row - col + 1) << " ";
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }

    return 0;
}
// MY CODE
// VALUE VARIABLE ADDED  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    while (row <= n)

    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }

    return 0;
}