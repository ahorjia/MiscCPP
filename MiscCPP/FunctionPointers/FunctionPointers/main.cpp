//
//  main.cpp
//  FunctionPointers
//
//  Created by Ali Ghorbani on 3/4/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Test() {
    cout << "hello" << endl;
}

int Test2(int input) {
    return input * 2;
}

bool match(string input) {
    return input.size() == 3;
}

int main(int argc, const char * argv[]) {
    std::cout << "Hello Function Pointers!\n";
//    Test();
    
    void (*pTest)() = Test;
    int (*pTest2)(int) = Test2;
    
    pTest = Test;
    
    pTest();
    cout << pTest2(234) << endl;
    
    vector<string> values;
    values.push_back("One");
    values.push_back("Two");
    values.push_back("Three");
    
    long retVal = count_if(values.begin(), values.end(), match);
    cout << retVal << endl;
    
    return 0;
}
