#include<iostream>
using namespace std;
struct Point
{
    double x;
    double y;
    double *k=new double [2];
    Point ()
    {

    }
    Point (int x,int y)
    {
        this->x=x;
        this->y=y;
    }

};

int main()
{
    Point a(3,4);
    Point b(4,5);
    cout<<a.k<<" "<<b.k;

}
