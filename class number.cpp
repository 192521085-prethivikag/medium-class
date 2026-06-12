#include<iostream>
using namespace std;
class Number{
    int value;
public:
    Number(int v){
        value=v;
    }
    void operator-(){
        value=-value;
    }
    void display(){
        cout<<"Value = "<<value<<endl;
    }
};
int main(){
    Number n(10);
    cout<<"Before Applying Unary -"<<endl;
    n.display();
    -n;
    cout<<"After Applying Unary -"<<endl;
    n.display();
    return 0;
}
