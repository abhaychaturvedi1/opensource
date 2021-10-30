Experiment No. 1
IMPLEMENTATION OF CAESAR CIPHER

AIM:
To implement the simple substitution technique named Caesar cipher using C language.

DESCRIPTION:

To encrypt a message with a Caesar cipher, each letter in the message is changed using a simple rule: shift by three. Each letter is replaced by the letter three letters ahead in the alphabet. A becomes D, B becomes E, and so on. For the last letters, we can think of alphabet as a circle and "wrap around". W becomes Z, X becomes A, Y becomes B, and Z becomes C. To change a message back, each letter is replaced by the one three before it.

ALGORITHM:
STEP-1: Read the plain text from the user.
STEP-2: Read the key value from the user.
STEP-3: If the key is positive then encrypt the text by adding the key with each
character in the plain text.
STEP-4: Else subtract the key from the plain text.
STEP-5: Display the cipher text obtained above.


Program:

#include<stdio.h>
 
int main()
{
char message[100], ch;
int i, key;
printf("Enter a message to encrypt: ");
gets(message);
printf("Enter key: ");
scanf("%d", &key);
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch + key;
if(ch > 'z'){
ch = ch - 'z' + 'a' - 1;
}
message[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch + key;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
message[i] = ch;
}
}
printf("Encrypted message: %s", message);
return 0;
}
Output:
Enter a message to encrypt: axzd
Enter key: 4
Encrypted message: ebdh


