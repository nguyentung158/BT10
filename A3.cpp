#include<iostream>
using namespace std;
struct point{
    double x;
    double y;

};
point mid_point(const point a, const point b ){
    point c;
    c.x = (a.x + b.x)/2;
    c.y = (a.y + b.y ) /2;
    return c;
}
int main(){
    point a , b;
    cin >> a.x >> b.x >> a.y >> b.y;
    cout << mid_point(a,b).x << ' ' << mid_point(a,b).y;

}
