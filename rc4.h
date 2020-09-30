#ifndef RC4_H
#define RC4_H

#define KEY_LENGTH 6
#define TEXT_LENGTH 10

//定义一个流密码结构体RC4_KEY_S
typedef struct RC4_KEY_S {
	unsigned char S[256];
}RC4_KEY;

//密钥分配函数
void RC4_key(RC4_KEY* rc4_key, int* keylength);

//加密
void RC4(RC4_KEY* rc4_key, unsigned char* plaintext, int* plaintext_length, unsigned char* ciphertext);


#endif // !RC4_H







