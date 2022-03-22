#include <iostream>
#include <math.h>
#include <vector>
#include "string.h"
using namespace std;

void Pow(int i,vector<int>&pow_ans);
void Multi(vector<int> na, vector<int>nb,vector<int>&ans);
vector<int> Add(vector<int> a, vector<int> b);
int main() {
vector<int> ans;
for(int i=1;i<=1000;++i)
  {
    vector<int> pow_ans;
    Pow(i,pow_ans);
    ans = Add(ans,pow_ans);
  }
    for(int i=ans.size()-1;i>=0;--i)
      {
        cout<<ans[i];
      }
    cout<<endl;
  
}
void Pow(int i,vector<int> & pow_ans){
    vector<int>na;
    vector<int>nb;
    string a_reverse = to_string(i);
    auto len = a_reverse.length();
    for(int j=0;j<len/2;j++){
    swap(a_reverse[j], a_reverse[len-1-j]);
    }
    for(int j=0;j<len;++j)
    {
      na.push_back(a_reverse[j]-'0');
      nb.push_back(a_reverse[j]-'0');
    }
  if(i>1)
  {
    for(int j=1;j<i;++j)
      {
        for(int k=0;k<pow_ans.size();++k)
          {
            pow_ans[k]=0;
          }
        
    
      Multi(na,nb,pow_ans);
        na = pow_ans;
        
      }
    }
  else
  {
    pow_ans.push_back(1);
  }
}
void Multi(vector<int> na, vector<int>nb,vector<int>&pow_ans){

  for(int k=0;k<na.size();++k)
        {
          for(int l=0;l<nb.size();++l)
            {
              if(pow_ans.size()<=(k+l))
              {
                  pow_ans.push_back(na[k] * nb[l]);                
              }
              else
              {
                pow_ans[k+l] += na[k] * nb[l];
              }
                if(pow_ans[k+l]>=10){
                  if(pow_ans.size()<=(k+l+1))
                  {
                               pow_ans.push_back(pow_ans[k+l]/10); 
                  }
                  else
                  {
            pow_ans[k+l+1] += pow_ans[k+l]/10;
                    }
            pow_ans[k+l] = pow_ans[k+l]%10;
            }
        }
        }
}

vector<int> Add(vector<int> na, vector<int> nb){

  if(na.size()<nb.size())
{
  int diff = nb.size()-na.size();
  for(int i=0;i<diff;++i)
    {
      na.push_back(0);
    }
}

  if(na.size()>nb.size())
{
  int diff = na.size()-nb.size();
  for(int i=0;i<diff;++i)
    {
      nb.push_back(0);
    }
}
  
  vector<int>sum;
  int carry = 0;

  
for(int i=0;i<na.size();i++){
     sum.push_back(na[i]+nb[i]+carry);
  
    if(sum[i]>=10){
        sum[i]-=10;
        carry=1;
    }
    else carry=0;
}

  return sum;
}