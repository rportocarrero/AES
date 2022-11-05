#include "AES.cpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

const char delim[2] = " ";

int main(){
    char key[128];
    char plaintext[128];
    char ciphertext[128];

    fstream newFile;
    newFile.open("../test/GFSBox_KAT_128");
    if(newFile.is_open()){
        string line;
        getline(newFile,line);
        strcpy(key, line.c_str());

        while(newFile >> plaintext >> ciphertext){
            cout << "Key: "<< key << endl;
            cout << "Plaintext: " <<  plaintext << endl;
            cout << "Ciphertext: " << ciphertext << endl;
            cout << endl;
        }
        newFile.close();
    }
    
    else cout << "Unable to open File\n";

    return 0;
}