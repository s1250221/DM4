#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, num, heads=0, tails=0;
  
  // name
  char str[8];
  printf("Who are you?\n");
  scanf("%s",str);
  printf("Hello,%s\n",str);
  
//coin
  printf("Tossing a coin....\n");

  for(i=0;i<3;i++){
    num=rand();
    if(num%2==0){
      printf("Round %d: Head\n",i+1);
      heads++;
    } else{
      printf("Round %d: Tails\n",i+1);
      tails++;
    }
  }
  printf("Heads: %d, Tails: %d\n",heads,tails);
  
  if(heads>tails) printf("You won\n");
  else printf("%s lost\n",str);
  return 0;
}
