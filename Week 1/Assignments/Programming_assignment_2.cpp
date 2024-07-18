#include<iostream>
#include <string>
using namespace std;
bool IsLonger(string str1, string str2){
  	int strlen1 = str1.length();
  	int strlen2 = str2.length();

    if(strlen1>strlen2) //LINE-1

        return 1; //LINE-2

    else
        return 0; //LINE-3
}
int main(){
    string str1, str2;

    cin >> str1 >> str2;

    cout << str1 << ", " << str2 << " : " << IsLonger(str1, str2);

    return 0;
}
