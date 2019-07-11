#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a,b,c;
  int x;
  char str[20];

  printf("What is your name?\n");
  scanf("%s",str);
  printf("Hello, %s!\n",str);

  srand(time(NULL));
  a=rand()%6+1;
  b=rand()%6+1;
  c=rand()%6+1;
  x=a+b+c;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nDie 3: %d\nTotal value: %d\n",a,b,c,x);

  if(x>7){
    printf("%s won!\n",str);
  } else printf("%s lost!\n",str);

  return 0;
}
