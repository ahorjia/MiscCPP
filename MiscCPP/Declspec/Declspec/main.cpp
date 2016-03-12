//
//  main.cpp
//  Declspec
//
//  Created by Ali Ghorbani on 3/8/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
#include <typeinfo>

using namespace std;

template<class T, class S>
auto test1(T t, S s) -> decltype(t) {
    return t + s;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello Declspec\n";
    // -std=gnu++11
    
    int value;
    cout << typeid(value).name() << endl;
    
    float value2;
    cout << typeid(value2).name() << endl;
    
    // Name handling
    decltype(value) age;
    cout << typeid(age).name() << endl;
    
//    auto int value2 = 34;
//    cout << value2 << endl;
    
    auto value3 = 24;
    cout << value3 << endl;

    cout << test1(4, 5) << endl;
    return 0;
}
