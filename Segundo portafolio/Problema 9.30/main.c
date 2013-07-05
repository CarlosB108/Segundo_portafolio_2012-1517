#include<stdio.h>

int main()
{
    int vect[20],menor,burbuja;
    int i,j;
    for(i=0;i<20;i++)
    {
        vect[i]=rand()%100;
        printf("%d\n",vect[i]);

    }
    printf("\n");
    for (i = 0; i < (19); i++)
  {
    for (j = i+1; j < 19; j++)
    {
      if (vect[j] > vect[i])
      {
        burbuja= vect[j];
        vect[j] = vect[i];
        vect[i] = burbuja;
      }
    }
  }
  for(i=0;i<20;i++)
  {
      printf("%d\n ",vect[i]);
  }
}
