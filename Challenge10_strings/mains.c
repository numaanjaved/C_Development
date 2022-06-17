#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    for(int i = 0; i < sizeof(str[i]); ++i){
        value = strtod(pstr, &ptr);
        if(pstr == ptr) {}
        else { 
            printf(" %f", value);
            // pstr = ptr;
        }
    }
    return 0;
}