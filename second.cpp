#include<iostream>
using namespace std;
int function12(int a,int b){
    if(b==1)return 0;
    if(a%b==0 && b>1)return 1;
    return function12(a,b-1);
}
int main()
{
    int num;cout<<"Enter num:";
    cin>>num;
    if(function12(num,10)==1)
        cout<<"no";
    else cout<<"yes";
    return 0;
}