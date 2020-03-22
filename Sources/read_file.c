#include <stdlib.h>
#include <stdio.h>

int main(void) {
   FILE *fp;
   char buff[255];

   fp = fopen("energy", "r");
//   fp = fopen("test_doc", "r");
   if(!fp){
        printf("something went wrong: file doesn't exist");
        return 0;
   }
//   reads one word
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );
   fscanf(fp, "%s", buff);
   printf("2: %s\n", buff );
   //getw does not work here as it only get an int
   fscanf(fp, "%s\n", buff);
   printf("distance is : %s\n", buff);

   fclose(fp);

    return 0;
}
