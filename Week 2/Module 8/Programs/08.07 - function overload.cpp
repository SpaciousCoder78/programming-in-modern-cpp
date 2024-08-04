#include <iostream>

using namespace std;

int f();
int f(int);
int f(int,int);

int main() {
    int x=5,y=6;
    f();
    f(x);
    f(x,y);
}
