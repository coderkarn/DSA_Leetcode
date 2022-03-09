class Solution {
public:
    string interpret(string command) {
        string ans="";
        int n=command.size();
        bool b=false;
        for(int i=0;i<n;i++){
            if(command[i]!='(' && command[i]!=')'){
                ans+=command[i];
            }
            if(i!=0 && (command[i]==')' && command[i-1]=='(')){
                ans+='o';
            }
        }
        return ans;
    }
};