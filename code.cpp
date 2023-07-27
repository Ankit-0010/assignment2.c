#include<stdio.h>    
                       
#include<stdlib.h>        /*stdlib.h is of the general purpose standard header which includes 
                           functions of Dynamic Memory allocation and other Standard Functions.*/
       
#include<time.h>          /* it is used to make our alphanumerical numerical character random*/

char getrandomalphanumericcharacter()
{
    const char charset[] = "0123456789ABCDEF";
    int index = rand() % (sizeof(charset)-1);
    return charset[index];
}

/* sir i dont get the logic to make this program , i tried but i wont*/
