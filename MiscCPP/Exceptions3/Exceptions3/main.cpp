//
//  main.cpp
//  Exceptions3
//
//  Created by Ali Ghorbani on 2/24/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>

class ExceptionClass {
public:
    ExceptionClass() {
        char* pMemory = new char[10249999999999999];
        delete pMemory;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    try {
        ExceptionClass e;
    } catch (std::bad_alloc b) {
        std::cout << b.what() << std::endl;
    }
    
    std::cout << "Still Running" << std::endl;
    return 0;
}
