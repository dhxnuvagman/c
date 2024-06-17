#include<stdio.h>
#include<string.h>
int i= 0,j= 0; // Initialization
void len(char[]); //Function Declaration
void concat(char[],char[]);
void comp(char[],char[]);
int main( )
{
char str1[100], str2[100];
printf("\nEnter the first String : ");
gets(str1);
printf("\nEnter the Second String : ");
gets(str2);
len(str1);//Function Calling
len(str2);
comp(str1,str2);
concat(str1,str2);
}


void len(char str1[]) //Function Defination
{
int length=0;
while (str1[length] != '\0')
length++;
printf("\nLength of the String is : %d", length);
}
void concat(char str1[],char str2[])
{
while(str1[i]!='\0')
i++;
while(str2[j]!='\0')
{
str1[i]=str2[j];
j++;
i++;
}
str1[i]='\0';
printf("\nConcatenated String is %s",str1);
}
void comp(char str1[],char str2[])
{
i=0;
while (str1[i] == str2[i])
{
 if (str1[i] == '\0' || str2[i] == '\0')
 break;
 i++;
 }
if (str1[i] == '\0' && str2[i] == '\0')

printf("\n String1 is Equal to String2\n");

else
printf("\n String1 is not Equal to String2\n");

}

