#ifndef H_AES
#define H_AES

int Nb = 4;
int Nk = 4;
int Nr = 10;

void AddRoundKey();
void InvMixColumns();
void InvShiftRows();
void InvSubBytes();
void MixColumns();
void RotWord();
void ShiftRows();
void SubBytes(char state [16]);
void SubWord();
void AES(char plaintext[32], char key[32], char ciphertext[32]);
int main(int argc, char** argv);

#endif