#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans = 0;
    while (n!=0)
    {
        int digit=n%10;
        if ((ans>INT16_MAX)||(ans<INT16_MIN))
        {
            return 0;
        }
        
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans;
    cout<<endl;
    
return 0;
}