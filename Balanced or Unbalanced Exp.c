#include<stdio.h>  
int main()  
{  
    char exp[50];
    int x=0, i=0; 
    printf("\nHey Buddy Enter an expression = ");  
    scanf("%s", exp);  
 while(exp[i]!= '\0')  
    {  
     if(exp[i]=='(')  
        {  
            x++;
        }  
     else if(exp[i]==')')  
        {  
            x--; 
            if(x<0)  
            break;  
        }  
    i++;
    }  
    if(x==0)  
    {  
        printf("Hey Buddy Expression is balanced");  
    }  
      
    else  
    {  
        printf("Hey Buddy Expression is unbalanced");  
    }  
    return 0;  
}
