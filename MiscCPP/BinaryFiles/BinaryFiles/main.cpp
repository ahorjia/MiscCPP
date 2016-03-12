
#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
#pragma pack(pop)

struct Person {
    char name[50];
    int age;
    double height;
};

int main(int argc, const char * argv[]) {
    
    cout << sizeof(Person) << endl;
    
    string fileName = "/Users/ali.ghorbani/MiscCPP/MiscCPP/BinaryFiles/BinaryFiles/myfile.bin";
    
    ofstream output;

    output.open(fileName, ios::binary);
    
    if (output.is_open()) {
        cout << "File opened " << fileName << endl;
        
        Person someone = { "Ali", 231, 1.2};
        
        // output.write((char * )&someone, sizeof(Person));
        output.write(reinterpret_cast<char*>(&someone), sizeof(Person));
        output.close();
    } else {
        cout << "Unable to create the file: " << fileName << endl;
    }
    
    ifstream input;
    
    input.open(fileName, ios::binary);
    
    if (input.is_open()) {
        cout << "File opened to read " << fileName << endl;
        
        Person someone2 = {};
        
        input.read(reinterpret_cast<char*>(&someone2), sizeof(Person));
        input.close();
        
        cout << someone2.name << " " << someone2.age << " " << someone2.height << endl;
    } else {
        cout << "Unable to open the file: " << fileName << endl;
    }
    
    return 0;
}
