#include<iostream>
using namespace std;
class Test{
public:
    Test(){
        cout<<"Constructor Called"<<endl;
    }
    ~Test(){
        cout<<"Destructor Called"<<endl;
    }
};
int main(){
    Test t1;{
        Test t2;{
            Test t3;
        }
    }
    return 0;
}
