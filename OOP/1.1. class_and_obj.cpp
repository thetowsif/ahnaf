#include <iostream>
using namespace std;

// Creating a class
class myClass {
    public:
    int myNum;
    string myName;
};

int main(){
    // Creating a object of the class/blueprint
    myClass thisIsMyObject;
    myClass hudaiObj;

    // Using the object to input data
    thisIsMyObject.myNum = 007;
    thisIsMyObject.myName = "Towsif";

    // Here i can use the blueprint again to print different shit
    string lol = hudaiObj.myName = "James Bond";


    // print the shit
    cout << lol << endl;


}