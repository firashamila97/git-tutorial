#include<stdio.h>

#include "espl_lib.h"

int main(){
    int num,a;
    char b;
    

 a=1;

while(a!=0) 
    {
 	printf("Please input a number\n");
        scanf("%d", &num);
        getchar ();
        printf("%s\n",num_to_words(num));
        printf("type x to exist or e to enter another number\n");
        scanf("%c", &b);
        if (b == 'e') { 
              a=1; }
        else { 
              a=0; }
    }
        
	
}