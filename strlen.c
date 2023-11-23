#include <stdio.h>

int _strlen(char* s);

int main(){
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);

    printf("%d" , len);

    return 0;
}

int _strlen(char* s){

int count = 0;

int i = 0;

while(s[i] != '\0'){

s[i];

i++;

count++;

}

return count;

}