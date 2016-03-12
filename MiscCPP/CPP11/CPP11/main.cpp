
#include <iostream>
using namespace std;

void mightGoWrong() {
    
    bool error0 = true;
    bool error1 = false;
    bool error2 = true;
    
    if (error0) {
        throw 34.5;
    }
    
    if (error1) {
        throw "Something went wrong";
    }
    
    if (error2) {
        throw string("Something else went wrong");
    }
}

void usesMightGoWrong() {
    mightGoWrong();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    try {
        usesMightGoWrong();
    } catch (int value) {
        cout << value << endl;
    } catch (const char* value) {
        cout << value << endl;
    } catch (string& value) {
        cout << value << endl;
    } catch (...) {
        cout << "Generic Exception" << endl;
    }
    
    cout << "Still Running" << endl;
    return 0;
}
