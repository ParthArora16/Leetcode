class Solution {
public:
    int myAtoi(string s) 
{    
	string temp="";
	
	//Creating Flags to deal with many conditions like no words before digits etc.
    int numflag=0,spaceflag=0;
    
    if(s.size()==1 && (s[0]=='+' || s[0]=='-')) return 0;
 
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' '){
            if(temp.size()>0)
            {
			    //This flag tell there is space after there is digit already stored in temp variable.
				//if there is a space after digit then just break the whole loop and proceed.
                spaceflag=1;
                break;
            }
            continue;
        }
        if(s[i]>='a' && s[i]<='z' || s[i]=='.')
        {
		    //The below condition tells if there is alphabet entered before numflag is 1 
			//i.e. before digits are entered and it returns zero if so!
            if(numflag==0) return 0;
            else if(temp.size()>0) break; 
			//The above line simply discards all the alphabets or a '.' after digit is entered and accepts the temp so far
			//i.e. temp only digits so far. For example 3.14 is our input, then the above line helps us get temp as 3 which is the answer
        }
        if(s[i]=='+' || s[i]=='-')
        {
		    //This line helps us accepts all the signs before any digit entered into temp.
            if(numflag==0)
            {
                temp+=s[i];
            }
            else
                break;
			//Above line helps us to break after it sees any signs '+' or '-' after digits already entered.
        }
        if((s[i]>='0' && s[i]<='9'))
        {
            temp+=s[i];
			//This flag obviously tells there is first entry of digits.
            numflag=1;
        }
        if(numflag==1 && s[i]=='.') {
            break;
        }
    }
    if(temp=="") return 0;
    //The above line help return 0 if there are no digits in the given string
	
    long res=0; // Obviously to store our result hehe :P
    int sign=1; // To help deal with Negativity
    int signcounter=0; // To count if there are more than one sign, if so then return 0.
    
	//At this point the temp can look like ++--1234 or +13 or -5 or +-+345 etc.
	
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]=='-' && signcounter<2) 
        {
            sign=-1;
            signcounter++;
            continue;
        }
        else if(temp[i]=='+' && signcounter<2)
        {
            signcounter++;
            continue;
        }
        if(signcounter==2) return 0; //This means there are more than one sign characters.
		
		//Here's the tricky part, the below two lines helps from many test/edge/corner cases, take it as homework :)
        if(((res*10)+(temp[i]-'0'))>=pow(2,31) && sign==1) return (pow(2,31)-1);
        if(((res*10)+(temp[i]-'0'))>pow(2,31) && sign==-1) return (pow(-2,31));
        
		//The below formula helps us to convert our temp string into an Actual Integer.
        res=(res*10)+(temp[i]-'0'); 
		//In above line if our input i.e. "s" for example is -123456 then at final step "res" here would look as 123456
		//Because Im only converting String to a Positive Integer, Im not negating it anywhere to make it simpler.
    }
    //This below line is where I add my Negative/Positive Sign
	
    res=res*sign;
	return res;
	
	//Hope you uderstood my way haha it took me half a day to get here without googling after consecutive Wrong answers/Compiler errors.
	//The first time it got accepted... it was the Best Solution, Performed better than 100% solutions out here, just made my... "Half a day" XD
    //Do upvote if you felt you learnt anything that might seem important to you! Take care :) keep learning.
	
}
};