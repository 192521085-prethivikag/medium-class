#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
    char *name;
    float salary;
public:
    Employee(const char *n,float s)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        salary=s;
        cout<<"Constructor Called"<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    ~Employee()
    {
        delete[] name;
        cout<<"Destructor Called"<<endl;
    }
};
int main()
{
    Employee e("Ravi",50000);
    e.display();
    return 0;
}
