class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s;
        bool present =false;
        for(auto i: wordList){
            s.insert(i);
            if(s.find(endWord)!=s.end()){
                present=true;
            }
        }
        if(present==false)
            return 0;
        
        queue <string> q;
        q.push(beginWord);
        int ans=0;
        
        while(!q.empty())
        {
            ans++;
            int n=q.size();
            while(n--){
                string cur=q.front();
                q.pop();
                //checking for all possible 1 depth value
                for(int i=0;i<cur.size();i++){
                    //for each index check
                    string temp=cur;
                    
                    for(char ch='a';ch<='z';ch++)//try all possible chars
                    {
                        temp[i]=ch;
                        
                        if(temp==cur)
                            continue;
                        //skipping same word
                        if(temp==endWord)
                            return ans+1;
                        //endWord found so return
                        if(s.find(temp)!=s.end()){
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};