/*
	Created by : xnvry
	Date       : 01-26-2020
	Language   : C
*/

#include <stdio.h>
#include <string.h>
#include "krypto.h"

// Algoritma enkripsi Caesar Cipher
void cCipher_encrypt(function_encrypt *input_encrypt)
{
	int cipher = 0;

	printf("Ciphertext : ");
	// Menghitung jumlah string yang akan di enkripsi
	for (int i=0;i<strlen(input_encrypt->plaintext);i++)
	{
		// Mengecek satu per satu huruf dari plaintext
		cipher = (*input_encrypt).plaintext[i];

		/*
		   Jika menemukan SPACE
		   maka jangan di enkrip
		*/
		if (input_encrypt->plaintext[i] == ' ')
			cipher = ' ';

		// Mengenkrip satu per satu huruf menjadi ciphertext
		else if (input_encrypt->plaintext[i] >= 'A' && input_encrypt->plaintext[i] <= 'Z')
			cipher = ((input_encrypt->plaintext[i] + (*input_encrypt).key_encrypt - 'A') % 26) + 'A';
		else if (input_encrypt->plaintext[i] >= 'a' && input_encrypt->plaintext[i] <= 'z')
			cipher = ((input_encrypt->plaintext[i] + (*input_encypt).key_encrypt - 'a') % 26) + 'a';

		printf("%c", cipher);
	}
	printf("\n");
}

// Algoritma dekripsi Caesar Cipher
void cCipher_decrypt(function_decrypt *input_decrypt)
{
        int plain = 0;

        printf("Plaintext : ");
	// Menghitung jumlah string yang akan di di dekrip
        for (int i=0;i<strlen(input_decrypt->ciphertext);i++)
        {
		// Mengecek satu per satu huruf dari ciphertext
                cipher = (*input_decrypt).ciphertext[i];

		/*
		   Jika menemukan SPACE
		   maka jangan di dekrip
		*/
                if (input_decrypt->ciphertext[i] == ' ')
                        plain = ' ';

		// Mendekrip satu per satu huruf manjadi plaintext
                else if (input_decrypt->ciphertext[i] >= 'A' && input_decrypt->ciphertext[i] <= 'Z')
                        plain = ((input_decrypt->ciphertext[i] - (*input_decrypt).key_decrypt - 'A') % 26) + 'A';
                else if (input_decrypt->ciphertext[i] >= 'a' && input_decrypt->ciphertext[i] <= 'z')
                        plain = ((input_decrypt->ciphertext[i] - (*input_decrypt).key_decrypt - 'a') % 26) + 'a';

                printf("%c", plain);
        }
        printf("\n");
}
