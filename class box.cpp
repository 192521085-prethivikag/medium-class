#include<iostream>
using namespace std;
class Box{
    int volume;
public:
    Box(int v){
        volume=v;
    }
    bool operator>(Box b){
        return volume>b.volume;
    }
    void display(){
        cout<<"Volume = "<<volume<<endl;
    }
};
int main(){
    Box b1(100),b2(150);
    b1.display();
    b2.display();
    if(b1>b2)
        cout<<"Box1 has greater volume"<<endl;
    else
        cout<<"Box2 has greater volume"<<endl;
    return 0;
}
