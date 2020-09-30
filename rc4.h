#ifndef RC4_H
#define RC4_H

#define KEY_LENGTH 6
#define TEXT_LENGTH 10

//����һ��������ṹ��RC4_KEY_S
typedef struct RC4_KEY_S {
	unsigned char S[256];
}RC4_KEY;

//��Կ���亯��
void RC4_key(RC4_KEY* rc4_key, int* keylength);

//����
void RC4(RC4_KEY* rc4_key, unsigned char* plaintext, int* plaintext_length, unsigned char* ciphertext);


#endif // !RC4_H







