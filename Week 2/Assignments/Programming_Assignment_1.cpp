#include <iostream>
using namespace std;

float compute(const float &x){ //LINE-1

    return x-1; //LINE-2
}
int main(){
    float y;
    cin >> y;
    cout << compute(y * 2);
    return 0;
}
