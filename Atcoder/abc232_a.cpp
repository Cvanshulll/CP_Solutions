/* 
  Implementation in C++
You can use char type to receive the input one character by one. After accepting three characters, the first and the third represents the given integers.

Note that a digit of char type and a numeric value of int type are different. That’s why you cannot directly multiply the characters you received as char type and output it two get accepted. Instead, you must first convert it from char type to int type.

A character of char type is expressed by a bit sequence of one byte, which is encoded as per the standards like ASCII or Unicode. For example, in ASCII, the character 0 corresponds to the numeric value 40. Since 0 ,…, 9 are numbered consecutively in most standards, when a variable c represents a number of char type, c - '0' represents the difference of integers of their internal expressions, i.e. how many c is greater than '0'. This enables us to convert c to a numeric value of int type.

Overall, we can implement like this:

*/


#include<bits/stdc++.h>  ///iostream 
using namespace  std;
typedef long long ll;

 
int main()
{
    
      char a,x,b;
      cin>>a>>x>>b;
      
      cout<<(int)(a-'0')*(int)(b-'0');
      cout<<"\n";

}
