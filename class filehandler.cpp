#include<iostream>
#include<fstream>
using namespace std;
class FileHandler{
    ofstream file;
public:
    FileHandler(){
        file.open("sample.txt");
        cout<<"File Opened"<<endl;
    }
    ~FileHandler(){
        file.close();
        cout<<"File Closed"<<endl;
    }
};
int main(){
    FileHandler f;
    return 0;
}
