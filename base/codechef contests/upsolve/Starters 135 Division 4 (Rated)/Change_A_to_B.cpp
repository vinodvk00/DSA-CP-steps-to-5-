#include <bits/stdc++.h>
using namespace std;

/*
	Takeaway :

	When unable to find conditions in the problem to go from src to dest, then try to go from dest to src.

	dest to src, then we can follow the below steps:

	1. Always try to reverse the operations, if possible.
	2. If not possible, then try to find the nearest multiple of k, so that the operation II can be performed.
	3. If not possible, then try to divide the number by k, if it is greater than a.
	4. If not possible, then just subtract the number by a.

*/

int main() {
	 int t;
	 cin >> t;
	 
	 while(t--) {
	     int a, b, k;
	     cin >> a >> b >> k;
	     
	     //going from dest to src
	     // i.e b to a, so reverse operations
	     
	     int x = b;
	     
	     int op = 0;
	     
	     while(x != a) {
	         if(x % k != 0) {
	             // not divisible
	             // get to nearest multiple of k
	             // so that op II can be performed
	             
	             int nearMulti= (x / k) * k;
	             op += (x - nearMulti);
	             
	             x = nearMulti;
	             
	             // op += x % k;
	             
	             
	             
	             
	         }else if((x / k) >= a) {
	             // just divide
	             
	             op++;
	             x = x / k; // reverse operation II
	             
	             
	         }else {
	             // just subtract
	             
	             // here first cal op then update
	             
	             op += (x - a); 
	             x = (x - a); // reverse operation I 
	             break;
	             
	         }
	     }
	     
	     cout << op << endl;
	 }

}
