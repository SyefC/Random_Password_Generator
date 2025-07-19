#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

char ALPHABET[] = {'a','?','/"',';',':','|','[',']', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '$', 'k', 'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0','{','}',')','(','&','%','@','/','\'', '.', ',', '!', '#', '_', '-', '+', '=', '*', '<', '>','~', '`'};
char PASSWORD[50];

int MIN = 0;
int MAX = 0;

int main(){
   system("cls");
   srand(time(NULL));
   printf("Input How Many Letters can it be (MIN: 8 Letters, MAX: 66 Letters):");
   scanf("%d", &MIN);
   if(MIN < 8){
      printf("Too Small! Terminating Program...");
      return 0;
   }
   getchar();
   int overall = MIN;
   for(int i = -1; i < overall; i++){
      int random_number = rand() % 44;
      PASSWORD[i] = ALPHABET[random_number];
      printf("Your Generate Password: %c", PASSWORD[i]);
      Sleep(10);
      system("cls");
   }
     printf("Your Generated Password : %s\n", PASSWORD);
     printf("\n\n\nPress Any Key To Exit: ");
     int done = getch();
     system("cls");
   return 0;
}