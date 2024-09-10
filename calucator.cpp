#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your First Number"<<endl;
    int x;
    cin>>x;
    cout<<"Enter your second Number"<<endl;
    int y;
    cin>>y;
    cout<<"Enter any operator (+,-,/,*,%)"<<endl;
    char z;
    cin>>z;
    switch (z)
    {
    case '+':
        cout<<"Answer is --> "<<x+y<<endl;
        break;
    case '-':
        cout<<"Answer is --> "<<x-y<<endl;
        break;
    case '*':
        cout<<"Answer is --> "<<x*y<<endl;
        break;
    case '/':
        cout<<"Answer is --> "<<x/y<<endl;
        break;
    case '%':
        cout<<"Answer is --> "<<x%y<<endl;
        break;
    
    default:
        cout<<"Invalid "<<endl;
        break;
    }


return 0;
}