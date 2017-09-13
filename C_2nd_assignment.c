#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 3
char ch();
int main(){
 int i,input,number=0,n;
 srand((unsigned)time(NULL));
 i=ch();
 while (number<30){
  if(i==2){
   input=rand()%3 +1;
   number+=input;
   printf("computer (%d 만큼 더한다.): %d\n",input,number);
   if(number>=31) printf("승리입니다.\n");
  }
  do{
  printf("1~3까지 중 수를 입력하세요: ");
  scanf("%d", &n);
  if(n>3||n<1) printf("1~3까지 꼭 입력하세요.\n");
  }while(n>3||n<1);
  number+=n;
  printf("gamer (%d 만큼 더한다.) : %d\n",n,number);
  if(number>=31) printf("패배입니다.\n");
  if(i!=2)
   i+=1;
 }
 
 return 0;
}
char ch(){
 char ch1;
 printf("g(gamer)과 c(computer)중 누가 먼저 시작할까요?");
 scanf(" %c", &ch1);
 if(ch1=='g') return 1;
 else if(ch1=='c') return 2;
 else return ch();
} 