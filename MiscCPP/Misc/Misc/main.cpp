//
//  main.cpp
//  Misc
//
//  Created by Ali Ghorbani on 3/4/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int x = 1;
    long z = 34;

//    int y = sizeof(x = 5, z);
    int y = -(x=5);
    
    
    
    cout << x << endl;
    cout << y << endl;
    
    return 0;
}
