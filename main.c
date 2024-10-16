#include "stdio.h" 
#include "stdlib.h"   
#include "TripleDES.h"

int main()   
{
Creating a new branch is quick & simple.
	//TripleDES
	//明文
    char * plain = "2022150016_plain.docx";
	//解密文
    char * decrypted = "2022150016_decrypted.docx";
	//密文
    char * cipher = "2022150016_cipher.docx";
	//密钥
    char *key = "2022150016_key.txt"; 

	//3重DES加密
	TripleDES_Encrypt_File(plain,key, cipher);
	printf("TripleDES_Encrypt OK!\n");

	//3重DES解密  
	TripleDES_Decrypt_File(cipher,key, decrypted);
	printf("TripleDES_Decrypt OK!\n");
	
	getchar();
    return 0;   
}   