#include<iostream>
using namespace std;
class Complex{
    int real,img;
public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    Complex operator+(Complex c){
        return Complex(real+c.real,img+c.img);
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3=c1+c2;
    cout<<"First Complex Number: ";
    c1.display();
    cout<<"Second Complex Number: ";
    c2.display();
    cout<<"Result After Addition: ";
    c3.display();
    return 0;
}
