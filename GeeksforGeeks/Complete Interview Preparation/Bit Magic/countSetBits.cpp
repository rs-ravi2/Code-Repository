// C++ program to Count set 
// bits in an integer 
#include <bits/stdc++.h> 
using namespace std; 

 int table[256];
	
	// recursive function to count set bits 
	void initialize() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}

/* Function to get no of set bits in binary 
representation of positive integer n */
unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    if (n % 2 != 0)
	       count++;
	    n = n/2;      
	} 
	return count; 
} 

unsigned int countSetBits(int n) 
{ 
       unsigned int count = 0; 
       while (n) { 
          n &= (n - 1); 
          count++; 
       } 
      return count; 
} 

/* Program to test function countSetBits */
int main() 
{ 
	int i = 9; 
	cout << countSetBits(i); 
	return 0; 
} 
