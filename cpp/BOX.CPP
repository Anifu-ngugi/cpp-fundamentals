#include<iostream>
using namespace std;
class box{
   private:
   int length;
   int width;
   int height;

 int area()
 {
   return 2*(length+width+height);
 } 

 public:
      void set_dimension(int l,int w,int h)//to set the rectangle,using setter
      {
         length=l;
         width=w;
         height=h;
      }
   int volume();//the function

void print_area()
{
   cout<<"AREA"<<area()<<endl;
}
};

int box::volume() /* calling the function outside the class,using the(::),we have the type to return
                     which is int and the class (box):: and volume()fuction */
{
   return  (length*width*height);
}

int main()
{
box box1;// the class and the object 
box1.set_dimension(5,2,13);/*see now that you had set you will know call using set_dimension(l*w*h),(5*2*13)
                           box1 it s the object and the setter*/

cout<<"volume:"<<box1.volume()<<endl;

box1.print_area();
}
    
