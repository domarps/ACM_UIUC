#include<iostream>
#include<vector>
#include<algorithm>
#include <sstream>
using namespace std;

class ManySquares
{
    public:
          int howManySquares(vector<int> sticks)
          {
              int ans = 0;
              sort(sticks.begin(),sticks.end());
              for(int i = 0; i < sticks.size();)
              {
                 int start = i;
                 while((start+1) < sticks.size() && sticks[start+1] ==  sticks[i]) start++;
                 ans += (start - i + 1)/4;
                 i = start + 1; 
              }
              return ans;
          }
};
int main()
{
   ManySquares MS;
   int stickHt;
   vector<int> sticks; 
   string str;
   do
   {
      if(cin >> stickHt) sticks.push_back(stickHt);
   }while ( std::cin && std::cin.peek() != '\n' );  
   cout << MS.howManySquares(sticks) << endl;
}

