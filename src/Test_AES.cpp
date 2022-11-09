#include "AES.cpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

const char delim[2] = " ";

void test_GFSBox_KAT_128(char key[32], char plaintext[32], char ciphertext[32]){
    char result[32];
    AES(key, plaintext, result);
    if(result != ciphertext){
        cout << "TEST FAILED" << endl;
        cout << "Key: "<< key << endl;
        cout << "Plaintext: " <<  plaintext << endl;
        cout << "Ciphertext: " << ciphertext << endl;
        cout << endl;
    }
}

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
            test_GFSBox_KAT_128(key, plaintext, ciphertext);
        }
        newFile.close();
    }
    
    else cout << "Unable to open File\n";

    return 0;
}