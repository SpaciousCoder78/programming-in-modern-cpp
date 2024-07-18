#include <iostream>
#include <cmath>     //LINE-1 

using namespace std;
struct Point{
    int x, y;
};

double calculate_distance(Point pt1, Point pt2){

    return abs(pt1.y-pt2.y)+abs(pt1.x-pt2.x);    //LINE-2
}
int main() { 
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point pt1, pt2;
    pt1.x = x1;
    pt1.y = y1;
    pt2.x = x2;
    pt2.y = y2;
    cout << calculate_distance(pt1, pt2);
    return 0;
}
