#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
    char *name;
    int marks;
public:
    Student(const char *n,int m)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        marks=m;
    }
    Student(const Student &s)
    {
        name=new char[strlen(s.name)+1];
        strcpy(name,s.name);
        marks=s.marks;
    }
    void modify(const char *n,int m)
    {
        delete[] name;
        name=new char[strlen(n)+1];
        strcpy(name,n);
        marks=m;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    ~Student()
    {
        delete[] name;
    }
};
int main()
{
    Student s1("Prethivika",95);
    cout<<"Original Object"<<endl;
    s1.display();
    Student s2=s1;
    cout<<"\nCopied Object"<<endl;
    s2.display();
    s2.modify("Kavya",80);
    cout<<"\nOriginal Object After Modification"<<endl;
    s1.display();
    cout<<"\nCopied Object After Modification"<<endl;
    s2.display();
    return 0;
}
