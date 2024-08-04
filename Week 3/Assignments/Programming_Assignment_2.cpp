#include<iostream>
using namespace std;

class Calculator {
    int a, b;
    mutable int total;                                      //LINE-1
    public:
        Calculator(int a_, int b_) : a(a_ * 2), b(b_ * 2){}
        void calculateTotal() const { total = a + b; };       //LINE-2
        void display() const {                     //LINE-3 
            cout << "a = " << a << ", b = " << b << ", total = " << total; 
        }
};

int main(){
    int x, y;
    cin >> x >> y;
    const Calculator calc(x, y);
    calc.calculateTotal();
    calc.display();
    return 0;
}
