/*
 * author	:	uanheng
 * date		:	2017/08/20
 * title	:	1001
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;  //初始输入
    int i = 0;  //计数变量
    scanf("%d", &n);
    if(n < 1 || n > 1000){
        printf("error");
    }
    if(1 == n){
        printf("0");
        return 0;
    }
    else{
        while(1 != n){
			if(1 == (n % 2)){
				i ++;
				n = (3*n+1)/2;
			}
			else{
				i ++;
				n /= 2;
			}
        }
        printf("%d", i);
        return 0;
    }
}
