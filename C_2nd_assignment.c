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
   printf("computer (%d ��ŭ ���Ѵ�.): %d\n",input,number);
   if(number>=31) printf("�¸��Դϴ�.\n");
  }
  do{
  printf("1~3���� �� ���� �Է��ϼ���: ");
  scanf("%d", &n);
  if(n>3||n<1) printf("1~3���� �� �Է��ϼ���.\n");
  }while(n>3||n<1);
  number+=n;
  printf("gamer (%d ��ŭ ���Ѵ�.) : %d\n",n,number);
  if(number>=31) printf("�й��Դϴ�.\n");
  if(i!=2)
   i+=1;
 }
 
 return 0;
}
char ch(){
 char ch1;
 printf("g(gamer)�� c(computer)�� ���� ���� �����ұ��?");
 scanf(" %c", &ch1);
 if(ch1=='g') return 1;
 else if(ch1=='c') return 2;
 else return ch();
} 