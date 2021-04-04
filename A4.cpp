#include<iostream>
using namespace std;
struct point{
    int x;int y;
    point(int x, int y){
        this ->x;
        this ->y;
    }
};

int main(){
    point d(1,2);
    cout << &d << endl << &d.x << endl << &d.y;

}
//dia chi cua d la dia chi cua d.x, cac bien luu theo stack lien nhau trong point
