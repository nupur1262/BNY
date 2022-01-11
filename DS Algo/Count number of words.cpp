int countWords(string s)
{
    stack<string>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
            continue;
        else if(i+1<s.length()&&s[i]=='\\' && (s[i+1]=='n'||s[i+1]=='t'))
            i++;
        else
        {
            string temp=""; 
            while(s[i]>='a'&&s[i]<='z')
            {
                temp+=s.substr(i,1);
                
                i++;
            }
            st.push(temp);
            i--;
        }
    }
    return st.size();
    //code here.
}
