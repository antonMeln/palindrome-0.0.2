#include <iostream>                         
#include <cctype>                           
 using namespace std;
int main()
{
  int i = 0;
  int k=0; 
  int c;
  char bukva;
  string str;
  cin>>str;
    
    
    while (str[i])
          {if (ispunct(str[i]))
              c=c+1;
              i++;
          }
           if (c==str.length())
             cout<<1; 
             else
             {
            
  
  
  while (str[i])                          
  {
    bukva = str[i];
   str[i]=toupper(bukva); 
    i++; 
     if ( ispunct(str[i]) ) 
     {
        str[i]=' ' ;
     }                               
  }
  for (i=0;i<str.length()-i-1;i++)
     if (str[i]==str[str.length()-i-1])
       k=k+1;
  if (k==str.length()/2)
     cout<<1;
     else cout<<0;
             }         

  return 0;
}
