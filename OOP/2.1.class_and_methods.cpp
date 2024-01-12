#include <iostream>
using namespace std;

// Inside method
class myClassOne{
    public:

    void methodName(){
        cout << "Something is fishy..." << endl;
    }
    
};

class myClassTwo{
    public:
    void methodName();
};

// Outside method
void myClassTwo::methodName(){
    cout << "No things fishy!!!" << endl;
}


int main(){
    // creating object
    myClassOne myObj1;
    myClassTwo myObj2;


    // Run Inside method
    myObj1.methodName();

    // Run Outside method
    myObj2.methodName();

}