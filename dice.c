#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a,b;
  int t;

  srand(time(NULL));
  a=rand()%6+1;
  b=rand()&6+1;
  t=a+b;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",a,b,t);

  if(t>7){
    printf("%s won!\n",str);
  } else printf("%s lost!\n",str);

  return 0;
}
  
