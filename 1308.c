#include <stdio.h>
 
int main(){
  int n;
  int guerreiros;  
  int linhas = 0;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d", &guerreiros);
    linhas = 0;

    for (int i = 0; i < guerreiros; ++i)
    {
      guerreiros = guerreiros - i;
      if (guerreiros > linhas)
        linhas++; 
    }
    printf("%d\n",linhas ); 
  }
  return 0;
}