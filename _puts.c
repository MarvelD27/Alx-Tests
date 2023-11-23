void _puts(char* str){

int i = 0;

while(str[i] != '\0'){

fprintf(stdout , "%c" , str[i]);
i++;

}
fprintf(stdout , "\n");

}