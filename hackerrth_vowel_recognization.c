//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         2nd May, 2020
//	Description:  Counting the number of vowels in all possible sub-strings of the user input main string. 
//                eg. input is suppose baceb. So the sub-strings will be ""b, ba, bac, bace, a, ac, ace, 
//                          aceb, c, ce, ceb, e, eb, baceb"" 
//                OUTPUT will be 16 (sum of all vowels in sub strings)
//                
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //

#include<stdio.h>
#include<string.h>
 
//int count;

void counting_vowels(char s[], int length)
{
        int count=0;        //making count = 0 each time with new string
        for(int i=0;i<length;i++)   
        {
                char subS[length - i + 1];      //declaring sub string in which vowels will be recognized and counted
                int n=0;
                for(int j=i;j<length;j++)       //starting with lower number of letters in string and increasing gradually 
                {
                        subS[n++]=s[j];         
                        subS[n]='\0';
             //         printf("%s\n", subS); 
                        for(int m=0;m<strlen(subS);m++)        
                        
                        
                                 //***checking condition of vowel occurance***//
                                if(subS[m]=='a' || subS[m]=='e' || subS[m]=='i' || subS[m]=='o' || subS[m]=='u' || subS[m]=='A' || subS[m]=='E' || subS[m]=='I' || subS[m]=='O' || subS[m]=='U')
			                            count++;
			                            
                }
        }
        printf("%d\n", count);
}

void main()
{
	int T;
	scanf("%d", &T);        //Taking input for number of cases
	while(T>0)
	{	
		char s[100000];        
        	//gets(s);
		scanf("%s", s);     //input main string one by one
		counting_vowels(s, strlen(s));      //passing the input main string and length of string
		T--;
	}
}


