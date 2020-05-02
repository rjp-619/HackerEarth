//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         1st May, 2020
//	Description:  Count number of individual digit in given input flow of string.
//                eg. Input : 77150      Output : 0 1
//                                                1 1 
//                                                2 0                            
//                                                3 0
//                                                ....
//                                                7 2
//                                                ..
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //


#include<iostream>
using namespace std;
//int N[10];
int main()
{
	char S[100];
	int N[10]={0,0,0,0,0,0,0,0,0,0};
	cout << "Enter the string of numbers :" << endl;
	cin >> S;
	int i=0;
	while(S[i])
	{	
		if(S[i]=='0')
			N[0]++;
		else if(S[i]=='1')
			N[1]++;
		else if(S[i]=='2')
        	        N[2]++;
		else if(S[i]=='3')
	                N[3]++;
		else if(S[i]=='4')
                	N[4]++;
		else if(S[i]=='5')
	                N[5]++;
		else if(S[i]=='6')
	                N[6]++;
		else if(S[i]=='7')
                	N[7]++;
		else if(S[i]=='8')
        	        N[8]++;
		else if(S[i]=='9')
        	        N[9]++;
		
		i++;
	
	
	}
	for(i=0;i<=9;i++)
		cout << i << "  " << N[i] << endl;

	return 0;

}
