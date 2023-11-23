void rev_string(char* s){

    int len = strlen(s);

   char reversed[len + 1];
   
    for(int i = (len - 1) ; i >= 0 ; --i){

        reversed[len - (i + 1)] = s[i];

    } 

    reversed[len] = '\0'; //compensates for the null char.

   strcpy(s , reversed); //since arrays cannot be directly copied into each other.

}