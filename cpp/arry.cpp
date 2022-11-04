#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    int v[2][3]={{2,3,4},{5,6,7}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        cout<<v[i][j];
        
    };
    cout<<endl;

    return 0;
}