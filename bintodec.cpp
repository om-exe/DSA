#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ans;
    while (n!=1)
    {
        int bit = n&1;
        int digit = n%10;
        if (bit==1)
        {
            int ans = ans+pow(2,i);
            i++;
        }
            cout<<ans;
    }
    
return 0;
}