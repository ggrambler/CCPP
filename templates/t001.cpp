#include <iostream>
#include <string>

using namespace std;


template <typename T>
class AddVals {
    T a;

public:
    AddVals (T args){
        a = args;
    }
    T add (T args){
        a += args;
        return a;
    }
};

template <>
class AddVals <string> {
    string a;

    public:
    AddVals(string args){
        a = args;
    }
    void getvalue(string args){
        a = args;
    }
    string addstr(string args){
        return a + args;
    }

};


int main(){

    AddVals <int> A1(5);
    int b = A1.add(6);
    cout<<b<<endl;
    AddVals <float> A2(3.4);
    float c = A2.add(4.4);
    cout<<c<<endl;
    AddVals <string> A3("Hello");
    // A3.getvalue("World");
    string d = A3.addstr("New");
    cout<<d<<endl;
    return 0;
}