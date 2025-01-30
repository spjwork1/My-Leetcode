char* intToRoman(int num) {

    int i = 0;
   
    int l1[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* l2[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    static char ch[50];
    ch[0] = '\0';
    for(int i = 0; i<13 && num > 0; i++){
        while(num>=l1[i]){
            strcat(ch, l2[i]);
            num-=l1[i];
        }
    }
    
    return ch;
}