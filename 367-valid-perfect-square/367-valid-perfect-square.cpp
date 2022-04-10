class Solution {
public:
     bool isPerfectSquare(int num) {
        
        //take two index
        long start=0; long end=num;
        
        //loop
        while(start<=end){
            long mid = start+(end-start)/2;
            
            //condition to find if the number is absolute square 
            if(mid*mid==num){
                return true;
            }
            else if(mid*mid<num){
                start=(int)mid+1;
            }else{
                end=(int)mid-1;
            }
        }
        return false;
    }
};