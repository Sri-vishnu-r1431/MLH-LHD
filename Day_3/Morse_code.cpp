
#include <iostream>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;
string solve(char a)
{
   string s;
   
     if(a<='z' && a>='a' || a>='A' && a<='Z')
     {a=tolower(a);
    
     string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
     ".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
     s=(arr[int(a)-96]);
     }
     else if(isspace(a))
     {
         return "/";
     }
     else if(a>='0' && a<='9')
    {
        if(a=='1')
        {
            s+=".---- ";
        }
        else if(a=='2')
        {
            s+="..--- ";
        }
        else if(a=='3')
        {
            s+="...-- ";
        }
        else if(a=='4')
        {
            s+="....- ";
        }
        else if(a=='5')
        {
            s+="..... ";
        }
        else if(a=='6')
        {
            s+="-.... ";
        }
        else if(a=='7')
        {
            s+="--... ";
        }
        else if(a=='8')
        {
            s+="---.. ";
        }
        else if(a=='9')
        {
            s+="----. ";
        }
        else if(a=='0')
        {
            s+="----- ";
        }
    }

   return s;
     
}

int main()
{
    string a;
    string s="";
    cout<<"Enter the data to be converted into Morse Code:\n";
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
       s+=solve(a[i]);
    }
    cout<<"The Morse code data is:\n"<<s<<"\n";
    
    return 0;
}
