
/*
题目描述：

有 n 个人排成了一行队列，每个人都有一个站立的方向：面向左或面向右。由于这 n 个人中每个人都很讨厌其他的人，所以当两个人面对面站立时，他们会发生争吵，然后其中一个人就会被踢出队列，谁被踢出队列都是有可能的。
 
我们用字符 L 来表示一个面向左站立的人，用字符 R 来表示一个面向右站立的人，那么这个队列可以用一个字符串描述。比如 RLLR 就表示一个四个人的队列，其中第一个人和第二个人是面对面站立的。他们发生争吵后队列可能会变成 LLR，也可能变成 RLR；若变成 RLR，则第一个人与第二个人还会发生争吵，队列会进一步变成 LR 或者 RR。
 
若在某个时刻同时可能有很多的争吵会发生时，接下来只会发生其中的一个，且任意一个都是有可能发生的。
 
你想知道经过一系列的争吵后，这个队列最少会剩下多少人？
输入
第一行包含一个有字符 L 和 R 构成的字符串。
1 ≤字符串长度≤ 105
样例输入
LRRLRL
<div class="outputarea yangli ng-scope" ng-if="model.ques.questype==6 && model.ques.outputSample != null && model.ques.outputSample!=''" "="" style="box-sizing: border-box; margin: 0px; padding: 0px;">
样例输出
2

Hint
一种可能的变化情况是：LRRLRL -> LRLRL -> LRRL -> LRL -> LR
*/
#include <iostream>
using namespace std;
int main()
{
	char people[100000];
	cin>>people;
	int i,j;
	for (i=0;i<strlen(people);i++)
	{
		if (people[i]=='R')
		{
			break;
		}
	}
	for (j=strlen(people);j>=0;j--)
	{
		if (people[j]=='L')
		{
			break;
		}
	}
	if(j>=i)
	{
		cout<<i<<" "<<j<<"\n";
		cout<<strlen(people)-(j-i);
	}else{
		cout<<strlen(people);
	}
	system("pause");
	return 0;
}