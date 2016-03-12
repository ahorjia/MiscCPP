//
//  main.cpp
//  Functors
//
//  Created by Ali Ghorbani on 3/4/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
using namespace std;

struct MatchTest {
    bool operator()(string &text) {
        return text == "lion";
    }
};

void check(string input) {
    
}

int main(int argc, const char * argv[]) {
    std::cout << "Hello Functors\n";
    
    MatchTest pred;
    string value = "hello";
    
    cout << pred(value) << endl;
    return 0;
}
