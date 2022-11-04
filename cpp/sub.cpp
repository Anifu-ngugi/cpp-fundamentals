#include<iostream>
using namespace std;
int main(){
    int a,b,sub,modus;
    cout<<"Enter first digit:";
    cin>>a;
    cout<<"Enter second digit:";
    cin>>b;
    sub=a-b;
    modus=sub % 2;
    cout<<"The sub:"<<sub<<endl;
    cout<<"the modulas:"<<modus<<endl;
        return 0;
}
