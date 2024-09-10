#include <iostream>
using namespace std;
int main()
{
    int size;
    int ans = 0;
    int arr[5] = {45, 7, 8, 8, 9};
    for (int i = 0; i < size; i++)
    {
        ans = ans xor arr[i];   
    }

    return 0;
}