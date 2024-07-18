#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main() {
    char input[20];
    char character;
    cin >> input;
    stack<char> st; //LINE-1

    for(int i = 0; i < strlen(input); i++)

        st.push(input[i]); //LINE-2

    for(int i = 0; i < strlen(input); i++) {
      
        character = st.top();  //LINE-3
      
    cout << character;
        st.pop();
    }
    return 0;
}
