#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string_pinyin[10][5] ={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	char str[100];
	int i = 0, sum = 0;

    scanf("%s", str);		//read strings(or numbers)
    while('\0' != str[i]){	//use ascii
		//printf("%d ", (int)str[i] - 48);
		sum += (int)str[i ++] - 48;
    }
	//printf("\nsum is %d\n", sum);

	printf("\n");
    if(sum > 900){
		printf("error\n");
    }
    else if(sum >= 100){
		//printf("\n***********3************\n");
		printf("%s ", string_pinyin[sum/100]);
		printf("%s ", string_pinyin[sum/10%10]);
		printf("%s", string_pinyin[sum%10]);
    }
    else if(sum >= 10){
    	//printf("\n***********2************\n");
		printf("%s ", string_pinyin[sum/10]);
		printf("%s", string_pinyin[sum%10]);
    }
    else{
    	//printf("\n***********1************\n");
		printf("%s", string_pinyin[sum]);
    }

    return 0;
}
