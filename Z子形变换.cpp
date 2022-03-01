class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> my_list;
        if(numRows==1) return s;
        for(int i =0;i<numRows;i++){
            vector<char> temp;
            my_list.push_back(temp);
        }
        for(int i=0;i<s.length();i++){
            int temp=i%(2*(numRows-1));
            if(temp<numRows){
                my_list[temp].push_back(s[i]);
            }
            else{
                my_list[2*numRows-temp-2].push_back(s[i]);
            }
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            for(int k=0;k<my_list[i].size();k++){
                ans+=my_list[i][k];
            }
        }
        return ans;
    }
};
