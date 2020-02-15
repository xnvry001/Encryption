/*
        Created by : xnvry
        Date       : 01-26-2020
        Language   : C
*/

#include <stdio.h>
#include <stdlib.h>

#define USI unsigned short int


int main(void)
{
	USI menu1, menu2 ;
	system("clear");

	printf(BOLDBLU "[" BOLDGRN "01" BOLDBLU "]" BOLDGRN " Caesar Chiper \n");
	printf(BOLDBLU "[" BOLDGRN "02" BOLDBLU "]" BOLDGRN " RSA \n");
	printf(BOLDBLU "[" BOLDGRN "03" BOLDBLU "]" BOLDGRN " AES \n");
	printf(BOLDBLU "  [" BOLDGRN ">>" BOLDBLU "]" BOLDRED " Enkripsi" BOLDWHT ":" BOLDBLU "~" BOLDWHT "> ");
	scanf("%d",&menu1);

	if (menu1 == 1 || menu1 == 01)
	{
		printf(BOLDBLU "[" BOLDGRN "01" BOLDBLU "]" BOLDGRN " Encrypt \n");
		printf(BOLDBLU "[" BOLDGRN "02" BOLDBLU "]" BOLDGRN " Decrypt \n");
		printf(BOLDBLU "  [" BOLDGRN ">>" BOLDBLU "]" BOLDRED " Enkripsi" BOLDWHT ":" BOLDBLU "~" BOLDWHT "> ");
		scanf("%d",&menu2);

		switch (menu2)
		{
			case (01 || 1) :
				function_main_encrypt output;
				printf("Key Encrypt : "); scanf("%d",&output.key_encrypt);
				while(getchar != '\n');
				output.plaintext = malloc(77 * sizeof(char);
				printf("Plaintext   : ");
				fgets(output.plaintext,sizeof(output.plaintext),stdin);
				cCipher_encrypt(output);
				free(output.plaintext);
				break;
			case (02 || 2) :
				function_main_decrypt output;
				printf("Key decrypt : "); scanf("%d",&output.key_decrypt);
				while(getchar != '\n');
				output.ciphertext = malloc(77 * sizeof(char);
				printf("Ciphertext  : ");
				fgets(output.ciphertext,sizeof(output.ciphertext),stdin);
				cCipher_decrypt(output);
				free(output.ciphertext);
				break;
			default :
				return 1;
		}
	}
	return 0;
}
