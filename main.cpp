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