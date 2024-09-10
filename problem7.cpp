// find the unique element in array
#include<iostream>
using namespace std;
int Unique(int arr[],int size){
    int ans=0;
    for (int  i = 0; i < size; i++)
    {
     ans =ans xor arr[i];
     cout<<ans<<endl;
     
    }
    return ans;
}
int main(){
    int arr[5]={4,5,5,4,1};
    Unique(arr,5);
    
    
return 0;
}