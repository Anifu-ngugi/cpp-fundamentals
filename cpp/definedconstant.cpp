#include<iostream>
#include<string>
using namespace std;

#define PI 3.14159 //defined constant pi
#define newline '\n'// defined comstant newline
int main(){
    int radius=7;
    float area;
    area=PI*radius*radius;
    cout<<"area is:"<<area;    
    cout<<newline;
    return 0;
}/* so the whole basically illustrates a define constant,but after learning the entire code you will 
encounter implict conversion done by the compiler,this does not involve the programmer.The code output which
is 153.938 has been rounded off to 3 dp.The actual value is 153.93791

*/