#include<iostream>
using namespace std;

class A {
    public: int publicA;
    protected: int protectedA;
    private: int privateA;
};

class B {
    public: int publicB;
    protected: int protectedB;
    private: int privateB;
};

class C {
    public: int publicC;
    protected: int protectedC;
    private: int privateC;
};

class D : public A, protected B, private C {};

int main() {
    D obj;
    
    // publicA is public and it will remain public
    // so its value will be printed
    cout << obj.publicA;
    // protectedA is protected and it will remain protected
    // so it will give visibility error
    cout << obj.protectedA;
    // privateA is not accessible from B as
    // privateA is private and it will remain private
    // so it will give visibility error
    cout << obj.privateA;
 
    // publicB is public and it will become protected
    // so it will give visibility error
    cout << obj.publicB;
    // protectedB is protected and it will remain protected
    // so it will give visibility error
    cout << obj.protectedB;
    // privateB is not accessible from B as
    // privateB is private and it will remain private
    // so it will give visibility error
    cout << obj.privateB;
 
    // publicC is public and it will become private
    // so it will give visibility error
    cout << obj.publicC;
    // protectedC is protected and it will become private
    // so it will give visibility error
    cout << obj.protectedC;
    // privateC is not accessible from B as
    // privateC is private and it will remain private
    // so it will give visibility error
    cout << obj.privateC;
}