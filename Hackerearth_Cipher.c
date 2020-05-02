//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         1st May, 2020
//	Description:  Encrypting the input text using basic encryption technique. Input cipher 
//                must rotate every character in the message by a fixed number making it 
//                unreadable by enemies. Given a single line of string 'S' containing alpha, numeric and symbols, followed by a number N.
//                SAMPLE INPUT : All-convoYs-9-be:Alert1.
//                               4
//                SAMPLE OUTPUT : Epp-gsrzsCw-3-fi:Epivx5.
//                
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //


#include<stdio.h>
#include<string.h>


int main()
{
	char str1[100];
	int N;
//	int sw;
	gets(str1);
	scanf("%d", &N);
//	puts(str1);
	for(int i=0;i<strlen(str1);i++)
	{	int sw;
		//str1[i]=str1[i]+4;
		if(str1[i]<=90 && str1[i]>=65)
	//	{printf("im here");
			sw=0;//}
		else if(str1[i]<=122 && str1[i]>=97)
			sw=1;
		else if(str1[i]<=57 && str1[i]>=48)
			sw=2;
		else
			continue;
		switch(sw)
		{
			case 0:
			//	printf("\ninside case 0\n");
				str1[i]=str1[i]+N;
			//	printf("%d  %c\n", str1[i], str1[i]);
		
				while(str1[i]>90)
				{	str1[i]=64+((int)str1[i]-90);
			//		printf("%d  %c\n", str1[i], str1[i]);		
				}
		
				break;

			case 1:
				str1[i]=str1[i]+N;
	
				while(str1[i]>122)
					str1[i]=96+(str1[i]-122);
	
				break;

			case 2:
				str1[i]=str1[i]+N;
		
				while(str1[i]>57)
					str1[i]=47+(str1[i]-57);
		
				break;

		}

	}

		
		

//	printf("the encrypted is :\n");
//puts(str1);
	puts(str1);

	return 0;



}
