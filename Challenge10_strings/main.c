#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char text[100]; //input bugger for string to be searched
    char substring[40]; //input buffer for string sought
    printf("Enter the string to be searched (less than %d characers): ", sizeof(text));
    scanf("%s", text);
    printf("Enter the string to be searched (less than %d characers): ", sizeof(substring));
    scanf("%s", substring);

    printf("\nFirst string entered:\n\t%s", text);
    printf("\nSecond string entered:\n\t%s", substring);

    //Convert both strings to uppercase
    for(int i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i);
    for(int i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i);

    printf("The second string %s found in the first string", ((strstr(text,substring) == NULL) ? "was not" : "was"));

}