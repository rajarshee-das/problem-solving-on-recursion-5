#include<iostream>
using namespace std;
int function13(int a,int b){
    if(a==1)return 1;
    return function13(a/2,b)*10+(a%b);
    
}
int main()
{
    int num;cout<<"Enter num:";
    cin>>num;cout<<function13(num,2);
    return 0;
}