class Solution {
public:
    string addBinary(string a, string b) {
        int size1=a.size()-1,size2=b.size()-1;
        string str="";
        int carry=0;
        while(size1>=0 || size2>=0 || carry>0){
            int sum=((size1<0)?0:(a[size1--]-'0'))+((size2<0)?0:(b[size2--]-'0'))+carry;
            carry=sum/2;
            str+='0'+(sum%2);
        }
        reverse(str.begin(),str.end());
        return str;
    }
};