#include<iostream>
using namespace std;
int main(){
    const long int pi=3.14159;
    const int days_of_the_week(7);
    int area;
    int radius;
    cout<<"enter the radius:";
    cin>>radius;
    area=pi*radius*radius;
    cout<<area;
    cout<<days_of_the_week;
    return 0;
}