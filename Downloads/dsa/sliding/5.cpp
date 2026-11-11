/*You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
Given the integer array fruits, return the maximum number of fruits you can pick.

 */
#include <iostream>
class solution{
    public:
    int totalFruit(vector<int>& a) {
       unordered_map<int,int> f;
       int low=0,high=0;
       int n=a.size();
       int res=INT_MIN;
       for(high=0;high<n;high++)
       {
           f[a[high]]++;
           while(f.size()>2)
           {
               f[a[low]]--;
               if(f[a[low]] ==0)
               f.erase(a[low]);
               low++;
           }


          
               int len=high-low+1;
               res=max(res,len);
          
       }
       return res;
   }

}