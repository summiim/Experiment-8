#include<stdio.h>
int main(){
char str[100];
int length = 0;
printf("\t\t***sring length finder***\n\n");
printf("Enter Your String:");
gets(str);
while(str[length]!='\0'){
length++;

}
printf("string Length: %d Characters",length);
return 0;
}
