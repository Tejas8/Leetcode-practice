class Solution {
public:
    int bagOfTokensScore(vector<int>& tok, int power) {
        int res=0,i=0,j=tok.size()-1,score=0;
        sort(tok.begin(),tok.end());
        while(i<=j){
            if(power>=tok[i]){
                power-=tok[i++];
                ++score;
                res=max(res,score);
               // i++;
            }else if(score>0){
                power+=tok[j--];
                score--;
            }else{
                break;
            }
        }
        return res;
    }
};