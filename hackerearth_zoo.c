//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         30th April, 2020
//	Description:  Checking if-  2*(number of 'z') = (number of 'o')
//                eg. condition is satisfied if input is zoo, zzoooo, etc
//                    condition is not satisfied if input is zooo, zzooo, etc
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //

#include<stdio.h>
void main()
{
	char input[20];
	int i;
	gets(input);

	for(i=0;input[i]=='z';i++);                     //i increments till 'z' occurs
	int x=i;                                        //value of i is stored in x for further calculation
	for(i;input[i]=='o';i++);                       //i is continued for incrementing for every occurance of 'o'
	int y=i-x;                                      //number of 'o' = y
	(2*x)==y?printf("Yes\n"):printf("No\n");        //Use of ternary operator - If condition true - prints Yes, for false - No 
}
