#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define USER "usuario" // Definir el nombre correcto para el usuario
#define PASSWD "12357" // Contraseña para el usuario

int main()
{
  char user[16];
  char passwd[16];
  int n_user, n_passwd;
  
  n_user=0;
  n_passwd=0;
  
  while (n_user == 0)
  {
    printf("\nUSUARIO: ");
     scanf("%s", &user);
     fflush(stdin);
     if (strcmp (user, USER) == 0){
      n_user=1;
     }
     else{
      system("clear");
     }
  }
  while (n_passwd == 0)
  {
    
  }
}
