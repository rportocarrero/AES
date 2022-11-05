#include <string.h>

int Nb = 4;
int Nk = 4;
int Nr = 10;


void AddRoundKey(){

}

void InvMixColumns(){   

}

void InvShiftRows(){

}

void InvSubBytes(){

}

void MixColumns(){

}

void RotWord(){

}

void ShiftRows(){

}

void SubBytes(){

}

void SubWord(){

}

void AES(char plaintext[32], char key[32], char ciphertext[32]){
    char state[32];
    strcpy(state, plaintext);
    strcpy(ciphertext, state);
}