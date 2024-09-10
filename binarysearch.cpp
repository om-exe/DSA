#include <iostream>
using namespace std;
int search(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)

    {
        if (arr[mid] == key)
        {
            return mid;
        }
        
    
    // Right wala Part
    if (key > arr[mid])
    {
        start = mid + 1;
    }
    //Left wala part
    else
    {
        end = mid - 1;
    }
    //Updating the value
    mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int odd[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int even[6]={1,2,3,4,5,6};
    int n1=6;
    // int found = search(odd, n, 3);
    int found = search(even,n1,2);
    if (found)
    {
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    

    return 0;
}