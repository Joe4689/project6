#include <stdio.h>
	
char reverse(char *string) { //a function of reversing the string was stored as a void
int i, len, temp; //three variables (i) means the index, (len) is the length of the string, (temp) is a temporary storage for the string
len = strlen(string);      //this built-in function is used to measure the length of the string
for (i = 0; i < len/2; i++) {
temp = string[i];
string[i] = string[len - i - 1];
string[len - i - 1] = temp;
return string ;
} //this sequence of orders is used to make sure that all letters are reversed in sequence
}




int main() {
   int i, x;
   char str[100];
   char choice [100];
   char purestr [100];
   while (1) {
   printf("please enter if your string is new or old: \n");
   scanf("%[^\n]%*c" ,choice) ;
   printf("\nPlease enter a string:\t");
   scanf("%[^\n]%*c  %[^\n]%*c ",str,purestr) ;
   reverse(str); 
   char counter= reverse(str); 
   printf("\nPlease choose following options:\n");
   printf("1 = Encryption\n");
   printf("2 = Decryption\n");
   scanf("%d", &x);

   
   switch(x)
   {
   case 1:
   	  if (choice =="new"){
      for(i = 0; (i < 100 && purestr[i] != '\0'); i++)
        purestr[i] = purestr[i] + 3;
      printf("\nEncrypted string: %s\n", purestr);
      break;
  }   else if (choice=="old"){
  	  for(i = 0; (i < 100 && counter[i] != '\0'); i++)
        counter[i] = counter[i] + 3;
      printf("\nEncrypted string: %s\n", counter);
      break;
  	
  }

   case 2:
   	  if (choice=="new"){
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; 

      printf("\nDecrypted string: %s\n", str);
      break;
    
    	
   default:
      printf("\nError\n");
      
    
   } }
   
   return 0;

}

