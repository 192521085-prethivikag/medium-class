#include<iostream>
#include<string>
using namespace std;
class Mobile{
    string brand;
    float price;
public:
    Mobile(){
        brand="Samsung";
        price=10000;
    }
    Mobile(string b,float p){
        brand=b;
        price=p;
    }
    Mobile(const Mobile &m){
        brand=m.brand;
        price=m.price;
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Mobile m1;
    Mobile m2("Apple",80000);
    Mobile m3=m2;
    cout<<"Default Constructor Object"<<endl;
    m1.display();
    cout<<"\nParameterized Constructor Object"<<endl;
    m2.display();
    cout<<"\nCopy Constructor Object"<<endl;
    m3.display();
    return 0;
}
