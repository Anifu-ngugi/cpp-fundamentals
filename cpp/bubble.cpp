#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    int temp;
    int arr[8]={23,78,45,8,32,56,8,9};
    cout<<"unsorted list: \n";

for(i=0;i<8;i++)
 {
    cout<< arr[i]<<"\t";

 }
cout<<endl;

for(i=0;i<8;i++)
{
    for(j=i+1;j<8;j++)
    {
        if(arr[j]<arr[i])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
}
cout<<"sorted array: \n";

for(i=0;i<8;i++)
{
    cout<<arr[i]<<"\t";
}
cout<<endl;

return 0;
}