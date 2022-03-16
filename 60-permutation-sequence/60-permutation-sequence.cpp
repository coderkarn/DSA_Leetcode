class Solution {
public:
    string getPermutation(int n, int k) {
        int f=1;
        vector <int> num;
        for(int i=1;i<n;i++){
            //Calculating (n-1) factorial
            f*=i;
            num.push_back(i);//storing all number
        }
        num.push_back(n);
        string ans="";
        k=k-1; //Reducing k as it is 0 based indexing
        while(1){
            ans+=to_string(num[k/f]);
            num.erase(num.begin()+k/f);
            
            if(num.size()==0)
                break;
            
            k%=f;
            f/=num.size();
        }
        return ans;
    }
};