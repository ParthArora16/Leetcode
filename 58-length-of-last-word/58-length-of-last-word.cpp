class Solution {
    public:
        int lengthOfLastWord(string s) {

            if(s.length()==1){
                return 1;
            }
            int j = s.length()-1;
            while(s[j] == ' '){
                j--;
            }
            int count = 0;
            while(j>=0 && s[j] != ' '){
                count++;
                j--;
            }
            return count;
        }
};