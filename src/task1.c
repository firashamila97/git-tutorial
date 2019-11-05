#include<stdio.h>

#include "espl_lib.h"

int main(){
    int num;
    char a;
    varchar(100) str;
a:= 'i';
while(a = 'i') 
    {
 	printf("Please input a number\n");
        scanf("%d", &num);
    str := num_to_words(num) ;
        printf("%c\n",str);
        printf("type x to exist or i to input another number\n");
        scanf("%c", &a);
    }
        
	return 0;
}