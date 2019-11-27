#include<bits/stdc++.h>
using namespace std;


void SieveOfEratosthenes(int n) 
{ 
   
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        
        if (prime[p] == true) 
        { 
           
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 

int main()
{

	int n;

	string prompt;
	cout<<"Enter the number to n you want to print the prime number\n";
	cin>>n;


	SieveOfEratosthenes(n);
	cout<<"\nType ny string to exit\n"; // this step is bsically done to retian the putput on the screen;

	cin>>prompt;

	getchar();



}