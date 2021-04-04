#include<iostream>
using namespace std;
struct Point{
    int x;
    int y;

};
void printf(Point d){
    cout << d.x << ' ' << d.y;
}
int main(){
    Point d;
    cin >> d.x >> d.y;
    printf(d);

}
