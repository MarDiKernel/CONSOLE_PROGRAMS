#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define USER "root" // Definir el nombre correcto para el usuario
#define PASSWD "toor123" // Contraseña para el usuario

int main(void)
{
  char user[16];
  char passwd[16];
  int n_passwd, veces_user, veces_passwd;
  
  n_passwd=0;
  veces_user=0;
  veces_passwd=0;
  
  while (n_passwd == 0)
  {
    system("clear");
    printf("\nUSER: "); //Poner el el idioma que se quiera
    gets(user);
    fflush(stdin);
    if (strcasecmp (user, USER) == 0){
      n_passwd=1;
      while (n_passwd == 1)
      {
        system("clear");
        printf("\nUSER: %s\nPASSWORD: ", user); //Poner en el idioma que se quiera
        gets(passwd);
        fflush(stdin);
        if (strcmp (passwd, PASSWD) == 0){
          n_passwd=2;
        }
        else{
          veces_passwd++;
          if (veces_passwd == 3){
            n_passwd=3;
          }
        }
      }
    }
    else{
      veces_user++;
      if (veces_user == 3){
        n_passwd=3;  
      }
    }
  }
  if (n_passwd == 3){
    system("clear");
    printf("\n\tACCESO DENEGADO\n");
  }
  if (n_passwd == 2){
    printf("\n\tAcceso Concedido\n\n");
    system("bash"); //Cambiar por la shell a usar
  }
  
  return 0;
}
