//
//  main.cpp
//  ParseText
//
//  Created by Ali Ghorbani on 2/26/16.
//  Copyright (c) 2016 AG. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream inFile;
    string inputFilePath = "/Users/ali.ghorbani/MiscCPP/MiscCPP/TextFiles1/TextFiles1/emptyFile.txt";
    
    inFile.open(inputFilePath);
    
    if (inFile.is_open()) {
        cout << "File open" << endl;
        
        string line;
        
        while (inFile) {
            getline(inFile, line, ':');
            
            int population;
            inFile >> population;
            inFile >> ws;
            
            cout << line << " -- " << population << endl;
        }
    } else {
        cout << "File Not Open" << endl;
    }
    
    cout << "Hello Parsing Text\n";
    return 0;
}
