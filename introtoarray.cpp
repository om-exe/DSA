#include<iostream>
using namespace std;
// Function for printing array
void printarr(int n[],int size){
    for (int  i = 0; i < size; i++)
    {
    
        cout<<n[i]<<" ";
        
    }
        cout<<endl;
        cout<<"Done printing the array "<<endl;
    

}

int main(){
    // Initialising the element 
    int a[10]={0,1,2,6,5,55,5,5,10,11};
    int n = 10;

    // // Accessing the element 
    // cout<<a[1];
    // cout<<endl;

    //Printing the element 
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<endl;

    // }

    printarr(a,10);
    
return 0;
}