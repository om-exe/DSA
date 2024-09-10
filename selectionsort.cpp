#include<iostream>
using namespace std;
void search(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int index=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[index])
            {
                index =j;
            }
            
        }
        swap(arr[i],arr[index]);
        
    }
    
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n = 5;
    int arr[5]={26,87,12,5,3};
    cout<<"Before Sorting  "<<endl;
    print(arr,n);
    cout<<endl;
    search(arr,5);
    cout<< "After Sorting  "<<endl;
    print(arr,n);
return 0;
}