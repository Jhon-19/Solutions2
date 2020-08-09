#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include<array>
#include <vector>
#include <set>
using namespace std;
set<int> numbers = {4,216,104,38,4,60,4,8,6,10,
         8,2,4,8,8,2,8,301,6,38,
         30,8,4,4,34,18,4,4,90,30,
         30,212,108,482,196,8,32,4,52,42,
         8,8,8,60,136,4,68,286,502,286,
         292,57,24};

 set<int> lengths = {1743,1680,1532,1477,1313,1285,1232,1217,1180,1177,
         1105,1055,1046,1032,1030,975,893,882,847,845,
         830,795,766,745,732,719,714,690,665,633,
         630,600,590,588,582,578,540,488,455,434,
         420,415,414,411,405,328,313,290,275,265,
         255,184,155};

set<int> await = {5,7,9,12,15,18,20,25,28,36,48,
         4,11,24,29,32,38,40,46,50};



int X = 1;
int Y = 53;


//不行就把模板去掉 T->int
template <class T>
int sum(set<T> set){
int sum_await = 0;
set<T>::iterator iter = set.begin();
while(iter!=await.end())
{
				sum_await += *iter;
				iter++;
}
return sum_await;
}

void generator(set<set<int>>& array ,set<int> await,int all_number,int await_number,int step )
{
    set<int> s;
    array.clear();
    int array_number;
    
if(all_number % step != 0 )
     array_number = all_number / step +1;
else
   array_number = all_number / step ;

for(int i = 0;i< array_number;i++){
int temp = 0;
if(all_number - await.size() >= step){
while(temp<step){
int temp_number=rand()%(Y-X+1)+X;
if(await.find(temp_number) != await.end())
{
    s.insert(temp_number);
    await.insert(temp_number);
    temp++;
    
}
}
array.insert(s);
}
else{
int remain = all_number - await.size();
while(temp< remain ){
int temp_number=rand()%(Y-X+1)+X;
if(await.find(temp_number) != await.end())
{
    
    s.insert(temp_number);
    await.insert(temp_number);
    temp++;
    
}
}
array.insert(s);
}
}
};


void main(){


};