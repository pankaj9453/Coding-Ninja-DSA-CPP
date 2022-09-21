/*
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,reverse=0;
    cin>>n;
    while(n!=0){
           int  x=n%10;
    		reverse=reverse*10+x;
   		 n=n/10;
    }
    cout<<reverse;
}