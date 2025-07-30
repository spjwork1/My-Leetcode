int romanToInt(char* s) {
    int total = 0;
    int pval = 0;

    for(int i = strlen(s) - 1; i>=0; i--){
        int curVal;
        switch(s[i]){
            case 'I': curVal=1; break;
            case 'V': curVal=5; break;
            case 'X': curVal=10; break;
            case 'L': curVal=50; break;
            case 'C': curVal=100; break;
            case 'D': curVal=500; break;
            case 'M': curVal=1000; break;
            default: return -1;
        }
        if(curVal<pval){
            total-=curVal;
        } else {
            total+=curVal;
        }
        pval = curVal;
    }
    return total;
}