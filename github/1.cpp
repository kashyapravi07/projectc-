#include<iostream>
using namespace std;
int main()
{
int a,b;
char ch;

cout<<"enter the first number"<<endl;
cin>>a;
cout<<"enter the second number"<<endl;
cin>>b;
cout<<"enter the operator"<<endl;
cin>>ch;
switch (ch)
{
case '+':cout<<"sum is"<<a+b<<endl;
    break;
case '-':cout<<"Difference is"<<a-b<<endl;
    break;
case '*':cout<<"product is:"<<a*b<<endl;
    break;
case '/':if(b !=0)
        {
            cout<<"division is:"<<a/b<<endl;
        }
        else{
            cout<<"division is not possible"<<endl;
        }
        
    break;

default :cout<<"invalid oprator"<<endl;
}
}