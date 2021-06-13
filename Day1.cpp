// Uncommon Characters in two Strings(GFG)

// 1. Using 2 Arrays Time = O(l1+l2)  Space = O(l1+l2)
// 2. Using Bitmap Time = O(l1+l2) Space = O(1)

#include <iostream>

using namespace std;

string uncommonChars(string &str1,string &str2)
{
    unsigned int bitmap1=0, bitmap2=0;
    string ans=" ";
    
    for(int i=0;i<str1.length();i++)
    {
        int setBit = (int)(str1[i]-'a');
        bitmap1 = bitmap1|(1<<setBit);
    }
    
      
    for(int i=0;i<str2.length();i++)
    {   
        int setBit =  (int)(str2[i]-'a');
        bitmap2 = bitmap2|(1<<setBit);
    }
    
    unsigned rem_chars = bitmap1^bitmap2;
    char uncommonChar;
    
    for(int i=0;i<32;i++)
    {
        if( rem_chars&(1<<i))
        {   
            uncommonChar= char(i+'a');
            ans=ans+uncommonChar;

        }
    }
    
    return ans;
}


int main()
{
   string str1="Smith";
   string str2="Jonie";
   string ans;
   
   ans=uncommonChars(str1,str2);
   cout<<ans<<endl;

    return 0;
}

//_______________________________________________________________________________________________________________



