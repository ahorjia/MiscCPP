//
//  main.cpp
//  Templates
//
//  Created by Ali Ghorbani on 3/4/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
using namespace std;
#include <vector>

template<class T>
class Test {
private:
    T t;
    
public:
    Test(T t) : t(t) {
        
    }
    
    void print() {
        cout << t << endl;
    }
};

template<typename T>
void print(T n) {
    cout << n << endl;
}

template<typename T>
T sum(T a, T b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello Templates!\n";
    
    Test<int> ti(34);
    ti.print();
    
    Test<string> test2("hello");
    test2.print();
    
    print<string>("helloddddd");
    print<int>(345);
    
    
    cout << sum<int>(34,45) << endl;
    cout << sum<string>("bbb", "rerere") << endl;
    cout << sum<char>('a', 'b') << endl;
    return 0;
}
