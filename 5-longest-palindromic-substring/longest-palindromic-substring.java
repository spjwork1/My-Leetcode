class Solution {
    public String longestPalindrome(String s) {
        int start = 0; int end = 0;
        for(int i = 0; i<s.length(); i++){
            int odd = expand(s, i, i);
            int even = expand(s, i, i+1);

            int len = Math.max(odd, even);

            if(len>end-start){

                //Even len(6)-> 2 start --> i-2, end -> i+3
                //Oddlen(5)->2 start i-2, end -> i+2
                start = i - (len-1)/2;
                end = i+ len/2;
            }
        }
        return s.substring(start, end+1);
        
    }
    int expand(String s, int left, int right){
        while(left>=0 && right<s.length() && s.charAt(left) == s.charAt(right)){
            left--;
            right++;
        }
        return right - left - 1;
    }
}