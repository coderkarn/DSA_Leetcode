class Solution {
public:

    // Encodes a URL to a shortened URL.
    unordered_map<string,string> mp;
    unordered_map<string,int> cnt;
    
    string str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    
    string rstring()
    {
        string ans="";
        srand(time(0));
        for(int i = 0; i<8; i++)
        {
            ans+=str[rand()%62];
        }
        return ans;
    }
    
    string encode(string longUrl) 
    {
        string tmp=rstring();
        cout << tmp << endl;
        cnt[tmp]+=1;
        mp[tmp+to_string(cnt[tmp])]=longUrl;
        return tmp+to_string(cnt[tmp]);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));