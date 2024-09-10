#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch (n)
    {
    case 18:
        cout<<"Eligible for driving  "<<endl;
        break;
    case 5:
        cout<<"You r a kid "<<endl;
        break;
    
    default:
        cout<<"Invalid "<<endl;
        break;
    }
return 0;
}