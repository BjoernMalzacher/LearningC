
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

#define MY_CONDITION 1

typedef int* (*myfunc)(int**, int);
typedef int lenght;
int a[2];

struct coord
{
 uint8_t a;
};

int* sum(int* a, int b){
 return a+b;  
} 
int testingFunktion(int i , int p ){
  
}

main()

{
lenght l = 0;
 a[0] = 42;
 a[1] = 69;
   struct coord c;
   c.a = 0; 
 while (c.a < 10)
 {
   char test[20];
   sprintf(test, "%d", c.a);
   printf(test , "\n");
   printf("\n");
   c.a++;
 }
 
int b[3];
b[0] = 3; 
b[1] = 42;
b[2] = 69;
int* pointer = &b[0]; // * = wird als Pointer interpretiert && & =  gibt spreicheradresse von Variable wieder
myfunc f = sum;  
pointer = f(pointer,2);
char ret[20];
   sprintf(ret, "%d", *pointer);
   
   printf(ret , "\n");






  return 0;
}






