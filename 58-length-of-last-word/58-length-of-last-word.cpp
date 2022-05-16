class Solution {
    public:
        int lengthOfLastWord(string s) {

            // Edge Case
            if(s.length()==1){
                return 1;
            }


			// Initialise pointer towards end
			// of string
            int j = s.length()-1;

			// make sure pointer points to
			// char and ignores empty space
            while(s[j] == ' '){
                j--;
            }


			// counter for word
            int counter = 0;

			// while pointer is greater than 0
			// and we are not at empty char
            while(j>=0 && s[j] != ' '){
                counter++;
				
				// decrement pointer
                j--;
            }
            
            return counter;
        }
};