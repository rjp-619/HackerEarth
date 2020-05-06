//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         5th May, 2020
//	Description:  Mr. X's birthday is in next month. This time he is planning to invite N of 
//                his friends. He wants to distribute some chocolates to all of his friends 
//                after party. He went to a shop to buy a packet of chocolates.
//                At chocolate shop, each packet is having different number of chocolates. He 
//                wants to buy such a packet which contains number of chocolates, which can be 
//                distributed equally among all of his friends.
//                Help Mr. X to buy such a packet.
//
//              Input:
//                  First line contains T, number of test cases.
//                  Each test case contains two integers, N and M. where is N is number of 
//                  friends and M is number number of chocolates in a packet.
//
//              Output:
//                  In each test case output "Yes" if he can buy that packet and "No" if he 
//                  can't buy that packet.
//                
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include<iostream>
using namespace std;

int main()
{
	int T,N,M;
	cout << "Enter the number of test cases : " << endl;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
		cout << "Enter the number of guests : " << endl;
		cin >> N;
		cout << "Enter the number of chocolates in packet : " << endl;
		cin >> M;
		
		/*if((M%N)!=0)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	    */
	    
	    (M%N)!=0 ? cout << "N0" << endl : cout << "Yes" << endl ;
	}

}
