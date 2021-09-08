class Solution {
  public:
  int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
    int romanToDecimal(string &str) {
        // code here
        int ans=0;
        for(int i=0;i<str.length();i++){
            int s1 =value(str[i]);
            if(i+1<str.length()){
                //condn to check bounds
                int s2=value(str[i]);
                if(s1>=s2){
                    ans+=s1;
                }
                else{
                    ans+=s2-s1;//eg for case IV or IX etc
                    i++; //as we have considered value of s2 also now
                }
            }
            else{
                ans+=s1; //we are on last so no i+1 
            }
        }
        return ans;
    }
};
