//
//  main.c
//  myProjest
//
//  Created by 김진헌 on 12/15/24.
//

#include <stdio.h>

int main(void) {
    int a,b,c,d;

    printf("첫번째 숫자를 입력하십시오. :");
    scanf("%d",&a);
    printf("두번째 숫자를 입력하십시오. :");
    scanf("%d",&b);
    printf("세번째 숫자를 입력하십시오. :");
    scanf("%d",&c);
    
    d= a+b+c;
    printf("%d+%d+%d=%d\n",a,b,c,d);
    
}

