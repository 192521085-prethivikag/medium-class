#include<iostream>
using namespace std;
class Distance{
    int meters,centimeters;
public:
    Distance(int m=0,int c=0){
        meters=m;
        centimeters=c;
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.meters=meters+d.meters;
        temp.centimeters=centimeters+d.centimeters;
        if(temp.centimeters>=100)
        {
            temp.meters++;
            temp.centimeters-=100;
        }
        return temp;
    }
    Distance addDistance(Distance d){
        Distance temp;
        temp.meters=meters+d.meters;
        temp.centimeters=centimeters+d.centimeters;
        if(temp.centimeters>=100)
        {
            temp.meters++;
            temp.centimeters-=100;
        }
        return temp;
    }
    void display(){
        cout<<meters<<" m "<<centimeters<<" cm"<<endl;
    }
};
int main(){
    Distance d1(5,80),d2(3,50);
    Distance d3=d1+d2;
    cout<<"Using Operator + : ";
    d3.display();
    Distance d4=d1.addDistance(d2);
    cout<<"Using Normal Function : ";
    d4.display();
    return 0;
}
