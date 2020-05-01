//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         30th April, 2020
//	Description:  Counting the occurances of consonant followed by vowel
//                eg. bahugi - output 3
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //

#include<stdio.h>

int main()
{
	int T,N;            //Input T is for number of test cases the user desires to run
	                    //Input N is for the length of input string for each test case
	
	char *S;

//	printf("Enter the number of test case\n");
	scanf("%d", &T);
//	printf("T=%d\n", T);
	
	while(T>0)
	{
//		printf("Enter the length of String\n");
		scanf("%d", &N);
//		printf("N=%d\n", N);
		scanf("%s", S);         //Input string
		int count=0,i=0;
		//while(S[i]!='\0')
		for(count=0, i=0;S[i]!='\0';i++)        //Condition for end of string
		//{
			if((S[i] != 'a' || S[i] != 'e' || S[i] != 'i' || S[i] !='o' || S[i] != 'u') && (S[i+1] == 'a' || S[i+1] == 'e' || S[i+1] == 'i' || S[i+1] =='o' || S[i+1] == 'u'))
			//{
				count++;
			//	i++;
			//}
			//i++;
		//}
		printf("count = %d", count);
//		printf("%s", S);
		T--;

	
	
	
	}




return 0;


}
