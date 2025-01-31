bool isSubsequence(char* s, char* t) {
    int j = 0;
    int i = 0;
    int s_len = strlen(s);
    int t_len = strlen(t);
    while (i < s_len && j < t_len) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    return i == s_len;
}