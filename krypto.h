/*
        Created by : xnvry
        Date       : 01-26-2020
        Language   : C
*/

#ifndef _KRYPTO_H
#define _KRYPTO_H

#define UINT unsigned int

// Warna Tulisan
#define BOLDRED "\x1B[1m\033[31m"
#define BOLDGRN "\x1B[1m\033[32m"
#define BOLDBLU "\x1B[1m\033[34m"
#define BOLDWHT "\x1B[1m\033[37m"

// Enkripsi Caesar Cipher
typedef struct cipher_encrypt
{
	char *plaintext;        // Kata yang dapat dibaca
	UINT key_encrypt;       // Kunci Enkripsi
} function_main_encrypt, *function_encrypt;

// Prototipe fungsi dari enkripsi Caesar Cipher
void cCipher_encrypt(function_encrypt *input_encrypt);

typedef struct cipher_decrypt
{
	char *ciphertext;       // Kata yang sudah dienkripsi
	UINT key_decrypt;       // Kunci dekripsi
} function_main_decrypt, *function_decrypt;

// Prototipe Fungsi dari dekripsi Caesar Cipher
void cCipher_decrypt(function_decrypt *input_decrypt);

#undef UINT

// Enkripsi RSA

#endif
