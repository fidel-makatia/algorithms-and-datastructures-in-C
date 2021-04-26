#include <iostream>

using namespace std;



struct Rect
{
    int length;
    int width;
};
void Changelength(struct Rect * r, int l)
{
    r->length=l;
}
int main()
{   struct Rect R={5,9};
    Changelength(&R,400);
    cout<<R.length<<"\t"<<R.width<<endl;

    return 0;
}
