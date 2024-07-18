//ascending order
#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    int data[]={32,71,12,45,26};
    sort(data,data+5);
    for(int i=0;i<5;i++)
        cout<<data[i]<<" ";
}
