// MADE BY: github.com/Mondonno
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int check_passports(char passports[]){
    passports = strtok(passports, "\n");
    for (int i; i >= passports.length; i++) {
         char passport[] = passports[i];
        if(passport == "\n") passport = "";
         passports[i] = passport;
    }
    for (int i; i >= passports.length; i++) {
       char passport[] = passports[i].split(" ");
       if(passport) {
          for(int j; j >= passport.length; j++){

          }
         passports = new {
           
         }
       } 
    }
    char good_passports[] = "";
    char bad_passports[] = "";
    char noreview_passports[] = "";

   return 0;
}
int main(int argc, const char * argv[]) {
   FILE *file;
   int c;
   char result[1000] = "";
   char results[1000] = "";
   char* file_path = "input.txt";
   file = fopen(file_path, "r");
   if(file == NULL){
      printf("err: file is null");
       return 0;
   }
   while(fgets(result, 1000, file) != NULL){
      results += result
      printf("%s", result);
   }
   fclose(file);
   printf("\nHAHAHA\n\n%s",results);
//    const char *correct[] =check_passports(result)
   return 0;
}