//
//  main.cpp
//  Exceptions2
//
//  Created by Ali Ghorbani on 2/24/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
#include <exception>

using namespace std;

class MyException : exception {
public:
    virtual const char* what() const throw() {
        return "Something bad happened!";
    }
};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    try {
        Test test;
        test.goesWrong();
    } catch (MyException& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
