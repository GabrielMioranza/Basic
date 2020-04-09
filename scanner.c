
#include <stdio.h>

int main(int argc, char  *argv[])
{
     if (argc<2)
     {
          printf("Informe o ip e a porta\n");
          return 0;
     }
     else
     {
          printf("Varrendo Host %s na porta %s\n", argv[1], argv[2]);
          return 0;
     }
     
}
