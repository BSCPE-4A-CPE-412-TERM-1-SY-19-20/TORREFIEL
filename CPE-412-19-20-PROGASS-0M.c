
//id num 768879

#include<stdio.h>
#include<string.h>

main()
{
 char str[1000],temp;
 
 int i=0,count=0,a,b;
 
 printf("Enter string: ");
 gets(str);
 count=0;
 
 b=strlen(str)-1;
 for(a=0;a<=b;a++){
     if(str[a]=='a'||str[a]=='b'){
         if(str[a]=='b'){
             count++;
         }
     }
 }
 
if(count>=5){
    printf("Valid");
}
else{
    printf("\nInvalid");
}
 return 0;
}
