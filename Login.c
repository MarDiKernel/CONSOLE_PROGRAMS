#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define USER "usuario" // Definir el nombre correcto para el usuario
#define PASSWD "12357" // Contraseña para el usuario

int main(void)
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
     if (strcasecmp (user, USER) == 0){
      n_user=1;
     }
     else{
      system("clear");
     }
  }
  
  while (n_passwd == 0)
  {
    system("clear");
    printf("\nUSUARIO: %s\nCONTRASEÑA: ", user);
    scanf("%s", &passwd);
    fflush(stdin);
    if (strcmp (passwd, PASSWD) == 0){
      n_passwd=1;
    }
  }
  fflush(stdin);
  getchar();
  printf("\n\n\tACCESO CONCEDIDO [ %s ]", user);
  printf("\n\nPulsa Intro para finalizar...\n");
  getchar();
  
  return 0;
}
