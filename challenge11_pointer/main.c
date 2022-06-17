#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int first(){
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;
    
    pnum = &num1;
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum, *pnum+num2);
    *pnum = 2L;
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum, *pnum+num2);
    ++num2;
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum, *pnum+num2);
    num2 += *pnum;
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum, *pnum+num2);
    pnum = &num2;
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum, *pnum+num2);
    ++*pnum;
    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1,num2,*pnum, *pnum+num2);
    return 0;
}
int second(){
    long value = 777L; 
    long *const p_value = &value;
    printf("value = %ld, *p_value = %p\n", value, *p_value);
    long value1 = 888L;
    *p_value = &value1;
    printf("value = %ld, value1 = %ld, *p_value = %p", value, value1, *p_value);
    return 0;
}
int arraySum(int array[], const int n){
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;
    printf("arrayEnd =  %d\n", arrayEnd ); 
    for(ptr = array; ptr < arrayEnd; ++ptr){
        printf("ptr = %d, sum = %d\n", *ptr, sum); 
        sum += *ptr;
    }
    return sum;
}
int arraySumm(int *array, const int n){
    int sum = 0;
    int *const arrayEnd = array + n;
    printf("array = %p, arrayEnd =  %p\n",array, arrayEnd ); 
    for(; array < arrayEnd; ++array){
        printf("array = %d, sum = %d\n", *array, sum); 
        sum += *array;
    }
    return sum;
}
int third(){
    int values[10] = { 3, 7, -9, -3, 6, -1, 7, 9, 1, -5};
   printf("The sum is %i\n", arraySum(values,10)); 
    return 0;
}
int fourth(){
    int values[10] = { 3, 7, -9, -3, 6, -1, 7, 9, 1, -5};
   printf("The sum is %i\n", arraySumm(values,10)); 
    return 0;
}
int fifth(){
    char multiple[] = "a string";
    char *p = multiple;
    for(int i = 0; i < strnlen(multiple, sizeof(multiple)); ++i){
        printf("multiple[%d] = %c\n", i, multiple[i]); 
        printf("*(p + %d) = %c\n",i, *(p+i)); 
        printf("&multiple[%d] = %p\n",i, &multiple[i]);
        printf("p+%d = %p\n", i, p+i);
    }
    return 0;
}
int challenge(const char *array){
    const char *init = array;
    while(*array){ 
        array++;
    };
    int dif = array - init;
    return dif;
}
int sixth(){
    char *array = "a string";
    int length = challenge(array); 
    printf("The length of string \"%s\" is %d", array, length);
    return 0;
}
int square(int *integer){
    return (*integer) * (*integer); 
}
int main(){
    int integer = 2;
    printf("The square of 2 is %d\n",square(&integer));
}