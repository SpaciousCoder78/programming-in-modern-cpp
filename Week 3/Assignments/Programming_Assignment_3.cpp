#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class Student {
    int sid;
    char *name;
    public:
        Student(int sid_, const char *name_) : sid(sid_), name(strdup(name_)) {}
        Student(const Student &s) : sid(s.sid), name(strdup(s.name)) { }   //LINE-1
        Student& operator=(const Student &s) {    //LINE-2 
            if (this!=&s) {              //LINE-3 
                free(name);
                sid = s.sid;
                name = strdup(s.name);				
            }
            return *this;
        }
        void display(){
             cout << sid << " : " << name << endl;
        }
};
int main(){
    int a, b;
    char n1[80], n2[80];
    cin >> a >> n1 >> b >> n2;
    Student s1(a, n1);
    Student s2 = s1;
    Student s3(b, n2);
    s1 = s3;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
