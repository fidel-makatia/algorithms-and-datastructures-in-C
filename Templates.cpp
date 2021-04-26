#include <iostream>

using namespace std;

template<class T>
class Rectangle{

private:
    T length;
    T width;
public:
    T area();
    void changevalue(T l);

    Rectangle(T a , T b);
    Rectangle(){length=width=1;}

};
template<class T>
Rectangle<T>::Rectangle(T a, T b)
{

    this->length=a;
    this->width=b;
}
template<class T>
 T Rectangle<T>::area()
 {
     return length*width;
 }
 template<class T>
 void Rectangle<T>::changevalue(T l)
 {
     length=l;
 }

int main()
{   Rectangle<int> r(10,11);
   cout<< r.area()<<endl;
   r.changevalue(400);
   cout<<r.area()<<endl;
    return 0;
}
