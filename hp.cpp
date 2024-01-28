/*
In a candy store, there are N different types of candies available and the prices of all the N different types of candies are provided to you.
You are now provided with an attractive offer.
For every candy you buy from the store and get K other candies ( all are different types ) for free.
Now you have to answer two questions. Firstly, you have to find what is the minimum amount of money you have to spend to buy all the N different candies.
 Secondly, you have to find what is the maximum amount of money you have to spend to buy all the N different candies.
In both the cases you must utilize the offer i.e. you buy one candy and get K other candies for free.
*/

/*
Input:
N = 4
K = 2
candies[] = {3 2 1 4}
Output:
3 7
*/
#include<iostream>
using namespace std;
#include<vector>
class Solution
{
     public:
 vector<int> candyStore(int a[], int n, int k)
    {
        vector<int>e;
      int i=0;
      int j=n-1;
      int low=0;
      int high=0;
            bool y=false;
      sort(a,a+n);
      while(i<=j)
      {
        int q=k;
           low=low+a[i];
           i++;
           while(q--)
           {
             j--;
             if(j<i)
             {
              y=true;
             break;
             }
           }
           if(y)
           break;
      }
        y=false;
        i=0;
        j=n-1; 
     int start=0;
    int end =n-1;

    while (start < end) {
       swap(a[start], a[end]);
        start++;
        end--;
    }
      while(i<=j)
      {
        int q=k;
           high=high+a[i];
           i++;
           while(q--)
           {
             j--;
             if(j<i)
             {
              y=true;
             break;
             }
           }
           if(y)
           break;
      }
      e.push_back(low);
       e.push_back(high);
       return e;
 }
};
int main()
{

}