#include<iostream>
using namespace std;
class student {
    private:
     int rollNo;
     string name;
    public:
     student(int r,string n) {
        rollNo=r;
        name=n;
        cout<<"Student object created"<<endl;
     }
     void display() {
        cout<<"Roll No.:"<<rollNo<<endl;
        cout<<"Name:"<<name<<endl;
     }
     ~student() {
        cout<<"Student object destroyed";
     }
};
int main() {
    student s1(2635,"Selvi");
    s1.display();
    return 0;
}