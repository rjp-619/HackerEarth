//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         3rd May, 2020
//	Description:  The online taxis cost 'Oc' for the first 'Of' km and 'Od' for every km 
//		      afterward. The classic taxis travel at a speed of 'Cs' km per minute. The
//		      cost of classic taxis are 'Cb', 'Cm' and 'Cd' that represents the base 
//		      fare, cost for every minute that is spent in the taxi, and cost for each 
//		      kilometer that you ride.
//		      You are going to the office from your home. Your task is to minimize the 
//		      cost that you are required to pay. The distance from your home to the 
//		      office is D. You are required to select whether you want to use online or 
//		      classic taxis to go to your office. If both the taxis cost the same, 
//		      then you must use an online taxi.
//                
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include<iostream>
using namespace std;

int main()
{
	int D, Oc, Of, Od, Cs, Cb, Cm, Cd;
	scanf("%d", &D);
	scanf("%d %d %d", &Oc, &Of, &Od);
	scanf("%d %d %d %d", &Cs, &Cb, &Cm, &Cd);

	(Oc+(D-Of)*4)>=(Cb+(D/Cs)*Cm+D*Cd)?printf("Classic Taxi"):printf("Online Taxi");

return 0;

}
