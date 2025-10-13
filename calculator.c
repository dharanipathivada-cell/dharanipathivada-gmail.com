#include<stdio.h>
int main(){
int choice;
double,num1,num2,result;
while(1){
printf("\n==== simple calculator ====\n");
printf("1.Addition(+)\n");
printf(2.Subtraction(-)\n");
printf(3.Multiplicatuon(*)\n");
printf(4.Division(/)\n");
printf("Exit/n");
printf("Enter your choice:");
scanf("%d",&choice);
if(choice==5){
printf("exiting calculator GoodBye");
break;
}
printf("Enter first number:");
scanf("%lf",&num1);
printf("Enter second number:");
scanf("lf",&num2);
switch(choice){
case 1:
result=num1+num2;
printf("Result:%2lf\n",result);
break;
case 2:
result=num1-num2;
printf("Result:%2lf\n",result);
break;
case 3:
result=num1*num2;
printf("Result:%2lf\n",result);
break;
case 4:
if(num2!=0){
result=num1/num2;
printf("Result:%2lf\n",result);
}
else{
printf("zero division error");
}
break;
default:
printf("invalid choice please try again");
}
}
return 0;
}




