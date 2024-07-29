#include <iostream>
using namespace std;

struct Vector{
    int x;
    int y;
};

Vector Operator(const Vector& v1, const Vector& v2){ //LINE-1
    Vector v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}

Vector wrapper(const Vector v1, const Vector v2){
    Vector v = Operator(v1,v2); //LINE-2
    return v;
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Vector v1 = {a, b}, v2 = {c, d};
    Vector result = wrapper(v1, v2);
    cout << result.x << " " << result.y;
    return 0;
}
