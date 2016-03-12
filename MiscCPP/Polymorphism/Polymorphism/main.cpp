//
//  main.cpp
//  Polymorphism
//
//  Created by Ali Ghorbani on 3/4/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
using namespace std;

class Parent {
private:
    int in;
public:
    
    Parent(const Parent& parent) : in(1) {
        cout << "Copy ctor" << endl;
        
        in = parent.in;
    }
    
    Parent() : in(1) {
        
    }
    
    virtual void print() {
        cout << "Parent" << in << endl;
    }
    
    virtual ~Parent() {
        
    }
    
    virtual void doSomething() = 0;
};

class Child : public Parent {
private:
    int in2;
    
public:
    Child() : in2(2) {
        
    }
    
    void print() {
        cout << "Child" << endl;
    }
    
    virtual void doSomething() {
        cout << "hello" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello Polymorphism\n";
//    
//    Parent p1;
//    p1.print();
    
    Child c1;
    c1.print();
    
    Parent& p2 = c1;
    p2.print();
//
//    Parent p3 = Child();
//    p3.print();
    
    return 0;
}
