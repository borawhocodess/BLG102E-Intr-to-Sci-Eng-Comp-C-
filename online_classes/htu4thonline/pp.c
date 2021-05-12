#include <stdio.h>
int main()
{
/*  int var = 5;
  printf("var: %d\n", var);
  printf("address of var: %p\n", &var);
  var -= 1;
  printf("var: %d\n", var);
  // Notice the use of & before var
  printf("address of var: %p\n", &var);
  int abc;
  int xyz;
  scanf("%d", &abc);
  xyz = abc;
  printf("abc: %d\n", abc);
  printf("address of abc: %p\n", &abc);

  printf("xyz: %d\n", xyz);
  printf("address of xyz: %p\n", &xyz);
  xyz = 4;
  printf("xyz: %d\n", xyz);
  printf("address of xyz: %p\n", &xyz);
  xyz = var;
  printf("xyz: %d\n", xyz);
  printf("address of xyz: %p\n", &xyz);

  int* pc, c;
  c = 5;
  pc = &c;
  printf("c: %d\n", c);
  printf("address of c: %p\n", &c);
  printf("pc: %d\n", *pc);
  printf("address of pc: %p\n", &pc);


   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2

   */


   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);


  return 0;
}