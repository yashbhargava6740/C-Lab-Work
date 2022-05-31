WAP which asks the user which exam you passed if you passed maths or science youll get a gift of prize 15 Rs and if you passed both youll get a gift of prize 45 Rs. 
#include <stdio.h>
int main()
{
    int a;
    printf("enter exam you passed\n");
    printf("enter 1 if you passed maths only\n");
    printf("enter 2 if you passed science only\n");
    printf("enter 3 if you passed maths and science both\n");
    scanf("%d",&a);
    if (a==1){
        printf("you passed in maths you'll get a gift prize of Rs.15");
    }
    else if(a==2){
         printf("you passed in science you'll get a gift prize of Rs.15");
    }
    else if(a==3){
        printf("you passed in maths and science you'll get a gift prize of Rs.45");
    }
    else{
        printf("you didnt pass in any exam");
    }
Return 0;
}

