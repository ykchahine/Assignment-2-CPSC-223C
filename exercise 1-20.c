#include<stdio.h>
#define TAB 8

int main(void)
{
  int nb,i,c;

  nb = 0;
  i = 1;

  while((c=getchar())!=EOF)
  {
    if( c == '\t')
    {
      nb = TAB - (( i - 1) % TAB);

      while( nb > 0)
      {
        putchar('#');
        ++i;
        --nb;
      }
    }
    else if( c == '\n')
    {
      putchar(c);
      i = 1;
    }
    else
    {
      putchar(c);
      ++i;
    }
  }

  return 0;
}
