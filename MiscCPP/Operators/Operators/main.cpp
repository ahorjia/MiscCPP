//
//  main.cpp
//  Operators
//
//  Created by Ali Ghorbani on 2/29/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
#include <typeinfo>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;
    
public:
    Complex() : real(0), imaginary(0) {
        
    }
    
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {
        
    }
    
    Complex(const Complex& other) {
        real = other.real;
        imaginary = other.imaginary;
    }
    
    const Complex& operator=(const Complex& other) {
        real = other.real;
        imaginary = other.imaginary;
        
        return *this;
    }
    
    Complex operator+(const Complex& other) {
        Complex retVal;
        retVal.real = real + other.real;
        retVal.imaginary = imaginary + other.imaginary;
        
        return retVal;
    }
    
    friend ostream& operator<<(ostream& out, const Complex& other) {
        out << other.real << "+j" << other.imaginary;
        return out;
    }
    
    bool operator==(const Complex& other) {
        return real == other.real && imaginary == other.imaginary;
    }
    
    bool operator!=(const Complex other) {
        return !(*this == other);
    }
    
    Complex operator*() {
        return Complex(real, -imaginary);
    }
};

class Test {
private:
    int id;
    string name;
    
public:
    Test() : id(0), name("") {
    }
    
    Test(int id, string name) : id(id), name(name) {
        
    }

    void print() {
        cout << id << "+j" << name << endl;
    }
    
    Test(Test& other) {
        cout << "Copy .ctor running:" << endl;
        
        id = other.id;
        name = other.name;
    }
    
    ~Test() {
        cout << ".dctor is running" << endl;
    }
    
    const Test& operator=(const Test& other) {
        cout << "Assignment running" << endl;
        
        id = other.id;
        name = other.name;

        return other;
    }
    
    friend ostream& operator<<(ostream& out, const Test& o) {
        out << o.id << "+j" << o.name;
        return out;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Operator Overloading!\n";
    
//    Test test1(32, "Mike");
//    test1.print();
//    
//    cout << test1 << endl;
    
    Complex c1(3,4);
    Complex c2(5,6);
    
    Complex c3 = c1 + c2;
    cout << c3 << endl;
    cout << c1 << endl;
    
    
    Complex c4(3,4);
    cout << (c4 == c1) << endl;
    cout << (c4 == c2) << endl;
    cout << (c4 != c2) << endl;
    cout << *c4 << endl;
    
//    Test test2(20, "Bob");
//    Test test3;
//    
//    test3 = test2 = test1;
//    
//    test2.print();
//    test3.print();
//    
//    Test test4;
//    test4.operator=(test1);
//    test4.print();
//    
//    Test test5 = test4;
//    test5.print();
//    
//    const char* const pStr = "hello";
//    const char* pStr2 = "Str2";
//    
//    cout << pStr << endl;
//    cout << pStr2 << endl;
//    cout << typeid(pStr).name() << endl;
//    
//    cout << pStr[0] << endl;
////    pStr[0] = 'M';
////    pStr = "Bye";
////    pStr = pStr2;
//    cout << pStr << endl;
    return 0;
}
