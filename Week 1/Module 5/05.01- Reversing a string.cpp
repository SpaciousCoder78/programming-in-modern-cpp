#include <iostream>
#include <stack>

using namespace std;




int main() {
    stack<char> s;
    s.top();

    char ch,str[10] = "ABCDE";

    int i, len = sizeof(str);

    for(i=0;i<len;i++)
        s.push(str[i]);

    printf("Reversed String: ");

    while(!empty(s)) {
        cout<<s.top();
        s.pop();
    }


}
