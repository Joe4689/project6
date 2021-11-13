#include <stdio.h>
	
char reverse(char *string) { //a function of reversing the string was stored as a void
int i, len, temp; //three variables (i) means the index, (len) is the length of the string, (temp) is a temporary storage for the string
len = strlen(string);      //this built-in function is used to measure the length of the string
for (i = 0; i < len/2; i++) {
temp = string[i];
string[i] = string[len - i - 1];
string[len - i - 1] = temp;
} //this sequence of orders is used to make sure that all letters are reversed in sequence
}



int main() {
int i, x;
   char str[100];
   
   while (1) {
   
   printf("\nPlease enter a string:\t");
   scanf("%[^\n]%*c" ,str) ;
    reverse(str); 
   
   printf("\nPlease choose following options:\n");
   printf("1 = Encryption\n");
   printf("2 = Decryption\n");
   scanf("%d", &x);

   
   switch(x)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; 

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; 

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
      
    
   } }
   
   return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	



