//
//  main.cpp
//  Exception5
//
//  Created by Ali Ghorbani on 2/25/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
using namespace std;

void goesWrong() {
    bool error1 = true;
    bool error2 = false;
    
    if (error1) {
        throw bad_alloc();
    }
    
    if (error2) {
        throw exception();
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    try {
        goesWrong();
    } catch (exception& e) {
        cout << "Exception " << e.what() << endl;
    } catch (bad_alloc& e) {
        cout << "Bad_Alloc" << e.what() << endl;
    }
    
    return 0;
}
