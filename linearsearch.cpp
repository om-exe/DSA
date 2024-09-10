#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
           return 1;
        }
        
    }
    return 0;
}
int main(){
    int n =5;
    int arr[5]={25,45,6,6,7};
    cout<<arr[5]<<endl;
    cout<<"Enter the value you want to find "<<endl;
    int key;
    cin>>key;
    int found = search(arr,n,key);

    if (found)
    {
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is Absent "<<endl;
    }
    
return 0;
}
















