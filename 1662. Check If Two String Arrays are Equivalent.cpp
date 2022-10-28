class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        int n1=word1.size();
        int n2=word2.size();
        int i=0,j=0;
        s1+=word1[0];
        s2+=word2[0];
        i++;
        j++;
        while(i<n1 && j<n2)
        {
            if(s1==s2)
            {
                s1="";
                s2="";
            }
            s1+=word1[i++];
            s2+=word2[j++];
        }
        
        while(i<n1)
        {
            s1+=word1[i++];
        }
        
        while(j<n2)
        {
            s2+=word2[j++];
        }
        
        return s1==s2;
    }
};
