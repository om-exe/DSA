/*
Swap the alternate
 For eg if we have int arr[]={45,78,89,56};
 Output will be 78,45,56,89
*/

#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" " ;
    }
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[4] = {45, 78, 89, 56};
    cout<<"Before swapping ";
    printarray(arr,4);
    cout<<endl;
    swapAlternate(arr, 4);
    cout<<"After Swapping ";
    printarray(arr, 4);
    cout<<endl;

    return 0;
}