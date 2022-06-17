#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int length(char array[]){
    int ans = 0;
    for(int i = 0; array[i] !='\0'; ++i){
        ++ans;
    }
    return ans;
}
int concat(char str1[], char str2[], char result[]){
    int k = 0;
    for(int i = 0; str1[i] != '\0'; ++i, ++k){
        result[k] = str1[i];
    }
    for(int j = 0; str2[j] != '\0'; ++j, ++k){
        result[k] = str2[j];
    }
    printf("Concatenation of \"%s\" and \"%s\" is \"%s\"\n", str1, str2, result);    
    return 0;
}
_Bool compare(char str1[], char str2[]){
    _Bool equal;
    for(int i = 0, j = 0; str1[i] != '\0' || str2[j] != '\0'; ++i, ++j){
        if(str1[i] == str2[j]){
            equal = true;
        }
        else{
            equal = false;
            break;
        }
    }
    return equal;
}
int main(){
    char array[] = "Hello";
    int size = length(array);
    printf("The size of \"%s\" is %d\n", array, size);
    char result[50] = "";
    char str1[] = "World";
    char str2[] = "World";
    concat(str1, str2, result);
    _Bool cmp = compare(str1, str2);
    if(cmp == false){
        printf("\"%s\" and \"%s\" are not equal", str1, str2);
    }
    if(cmp == true){
        printf("\"%s\" and \"%s\" are equal", str1, str2);
    }
    return 0;
}