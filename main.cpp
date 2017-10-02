#include <iostream>                         
#include <cctype>                           
 using namespace std;
int main()
{
  int i = 0;
  int k=0;         
  char bukva;
  string str;
  cin>>str;
 
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
 

  return 0;
}
