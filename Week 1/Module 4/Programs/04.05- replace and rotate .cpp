//rotate

#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    int data[]={1,2,3,4,5};
    rotate(data,data+2,data+5);

    for(int i=0;i<5;++i)
        cout<<data[i]<<" ";
}

//********************************************************

//replace

#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    int data[]={1,2,3,4,5};
    replace(data,data+5,3,2);

    for(int i=0;i<5;++i)
        cout<<data[i]<<" ";
}
