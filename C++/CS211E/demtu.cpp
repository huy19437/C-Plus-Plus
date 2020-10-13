#include<iostream>
#include<string.h>
#include<ctype.h>
#define max 100
using namespace std;
int Demtu(char st[])
{
     int i,count=0;
     bool space=false;
     for(i=0;i<strlen(st);i++)
     {
          if(i==0 && !isspace(st[i]))
                 count++;
          if(isspace(st[i]))
                 space = true;
          else if(space)
          {
               count++;
          space = false;
          }
     }
     return count;
}
void  Docchuoi(char st[])
{
     int i;
     for(i=0;i<strlen(st);i++)
     {
         if(!isspace(st[i]))
         {
            if(st[i] >= 'A' && st[i] <= 'Z')
                 (char)tolower(st[i]);
         }
     }
     for(i=0;i<strlen(st);i++)
     {
          if(i==0 && !isspace(st[i]))
                 {
                     if(st[i] >= 'a' && st[i] <= 'z')
                     {
                              (char)toupper(st[i]);
                     }
                 }
          if(isspace(st[i]) && !isspace(st[i+1]))
                 {
                            (char)toupper(st[i+1]);
                 }
     }
     
} 

main()
{
   char ch[max];
   cout<<"Nhap chuoi: "<<endl;
   gets(ch);
   Docchuoi(ch);
   puts(ch);
   system("pause");
      
}
