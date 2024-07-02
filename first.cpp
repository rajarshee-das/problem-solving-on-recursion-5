#include<iostream>
using namespace std;
int function11(int a,int b)
{
    if(b==1)return a;
    return 1*function11(a,b-1);
}
int main()
{
    int num1,num2; cout<<"Enter two num:";
    cin>>num1>>num2;
    cout<<num2*(function11(num1,num2));
    return 0;
}