#include<iostream>
using namespace std;
struct point{
    int x;int y;
};
void ham1(point d){
    cout << &d<< endl;
}
void ham2(point &d){
    cout << &d<< endl;
}
int main(){
    point d;
    cout << &d << endl;
    ham1(d);
    ham2(d);
}
