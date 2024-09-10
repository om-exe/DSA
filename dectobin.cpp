#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int bit = 1;
    while (n!=0)
    {
        bit = n&1;
        n>>1;
        cout<<bit;

    }
    
return 0;
}