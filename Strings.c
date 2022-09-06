#include<stdio.h>
#include<string.h>

 //LENGHT
/*int main(){
    char str[100];
    printf("enter the string:");
    gets(str);
    int i,len=0;
    len=strlen(str);
    printf("%d",len);
}


int main(){
    char str[100];
    printf("enter the string:");
    gets(str);
    int i,len=0;
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("len is %d",len);
}

//STRCMP

int main(){
    char s1[10]="beginners";
    char s2[12]="beginners";
    if(strcmp(s1,s2)==0){
    printf("equal");
    }
    else{
    printf("different");
    }
}


int main(){
    char s1[10]="beginners";
    char s2[12]="beginners";
    if(s1==s2==0){
    printf("equal");
    }
    else{
    printf("different");
    }
}

//String concatinate STRCAT 
int main(){
    char s1[10]="Hello";
    char s2[10]="World";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
    
}*/
//without using STRCAT 

int main(){
    char str1[50],str2[50],str3[50];
    int i=0,j=0;
    printf("enter the string1:");
    scanf("%s",str1);
    printf("enter the string2:");
    scanf("%s",str2);
    while(str1[i]!='\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]='\0';
    printf("the string is %s",str3);
 return 0;
}

//Copying

#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    printf("enter the string:");
    gets(s1);
    char s2[100];
    strcpy(s2,s1);
    puts(s2);
}

// copying without using function

#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}

// strrev

#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    printf("enter the string:");
    fgets(s1,100,stdin);
   int len,i;
   len=strlen(s1);
   for(i=len-1;i>=0;i--){
       printf("%c",s1[i]);
   }
}


// String Sorting


#include <stdio.h>
#include <string.h>

int main (void) {
   char string[] = "simplyeasylearning";
   char temp;

   int i, j;
   int n = strlen(string);

   printf("String before sorting - %s \n", string);

   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   
   printf("String after sorting  - %s \n", string);
   return 0;
}
    

