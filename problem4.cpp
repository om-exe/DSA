//Sum of Array
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int sum = 0;
    int arr[5]={25,45,78,4,5};
    cout<<"Sum of array is "<<endl;
    for (int  i = 0; i < n; i++)
    {
        sum = sum+arr[i];
        cout<<sum<<" ";
    }
    



return 0;
}