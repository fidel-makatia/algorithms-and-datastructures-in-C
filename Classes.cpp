#include <iostream>

using namespace std;
class Rectangle{

private:
    int length;
    int width;
public:
    int area();
    void changevalue(int l);

    Rectangle(int a , int b);
    Rectangle(){length=width=1;}

};
Rectangle::Rectangle(int a, int b)
{

    this->length=a;
    this->width=b;
}
 int Rectangle::area()
 {
     return length*width;
 }
 void Rectangle::changevalue(int l)
 {
     length=l;
 }

int main()
{   Rectangle r(10,11);
   cout<< r.area()<<endl;
   r.changevalue(400);
   cout<<r.area()<<endl;
    return 0;
}
