//
//  main.cpp
//  TextFiles1
//
//  Created by Ali Ghorbani on 2/26/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    string outputFileName = "emptyFile.txt";
    string inputFileName = "/Users/ali.ghorbani/MiscCPP/MiscCPP/TextFiles1/TextFiles1/emptyFile.txt";
    
//    ofstream outFile;
    fstream outFile;
    ifstream inFile;
    
//    outFile.open(outputFileName);
    inFile.open(inputFileName);
    outFile.open(outputFileName, ios::out);

    if (inFile.is_open()) {
        
        string line;
        while (inFile) {
            getline(inFile, line);
            cout << line << endl;
        }

        cout << "file opened to read" << endl;
        inFile.close();
    } else {
        cout << "Can't open file for input" << endl;
    }
    
    if (outFile.is_open()) {
        cout << "File Opened" << endl;
        
        outFile << "Some New Content" << endl;
        outFile << 1323 << endl;
        outFile.close();
    } else {
        cout << "Can't open the file" << endl;
    }
    return 0;
}
