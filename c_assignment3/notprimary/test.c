#include <stdio.h>
#include <stdlib.h>

int main()
{


/*/////////////////////////////////////////////////////////////////////////////////

  FILE *in_file  = fopen("name_of_file", "r"); // read only 
  FILE *out_file = fopen("name_of_file", "w"); // write only 
   
  // test for files not existing. 
  if (in_file == NULL || out_file == NULL) 
    {   
      printf("Error! Could not open file\n"); 
      exit(-1); // must include stdlib.h 
    } 
   
  // write to file vs write to screen 
  fprintf(file, "this is a test %d\n", integer); // write to file 

  fprintf(stdout, "this is a test %d\n", integer); // write to screen  
  printf(         "this is a test %d\n", integer); // write to screen  

  // read from file/keyboard. remember the ampersands!  
  fscanf(file, "%d %d", &int_var_1, &int_var_2);  

  fscanf(stdin, "%d %d", &int_var_1, &int_var_2);  
  scanf(        "%d %d", &int_var_1, &int_var_2); 

/*/////////////////////////////////////////////////////////////////////////////////



FILE *fp;
int myInt = 5;
fp = fopen("t10asig3beta.t", "w");// "w" means that we are going to write on this file
fprintf(fp, "This is being written in the file. This is an int variable: %d", myInt);
fclose(fp); //Don't forget to close the file when finished



  return 0;
}