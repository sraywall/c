#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>

bool is_armstrong_number1(int i){
	char digits[12];
	int pow = sprintf(digits, "%d", i);
	int sum = 0;
	for(int j = 0; j < pow; j++){
    int exp = 1;
		for(int k = 0; k < pow; k++){
			exp *= digits[j] - '0';	
		}
		sum += exp;
	}	
	return sum == i;
}

bool is_armstrong_number(int i){
    int digit_count = 0;
    int temp_i = i;

    int digits[11];
    while(temp_i > 0){
        digits[digit_count] = temp_i % 10;
        temp_i /= 10;
        digit_count++;
    }
    printf("digit_count= %d\n",digit_count);
    int sum = 0;
    for(int j = 0;j<digit_count; j++){
        printf("digits[%d]= %d\n",j,digits[j]);
        int pow = 1;
        for(int k = 0; k < digit_count; k++){
            pow *= digits[j];
        }
        sum += pow;
    }

    return i == sum;
}
