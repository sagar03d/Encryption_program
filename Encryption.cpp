#include<iostream>
#include<string>
using namespace std;
char str[50];
int bin[50];
int binary(char);
int main()
{
	//Input characters
	int index=-1,j=0;
	cout<<"\nTips: Press 0 for termination.\n";
	cout<<"\n Enter your string:";
	do{
		index++;
		cin>>str[index];
	}while(str[index]!='0');
	
//Output of characters and their binaries
	cout<<"\nGiven input without spaces along with the binaries of each character: \n";
	for(int i=0;i<index;i++)
		{
			cout<<str[i];
		}
	while(j<index)
	{
	char a=str[j];
	binary(a);
	j++;
	}
cout<<"\n";
	return 0;
}
//Binary conversion from character
int binary(char a)
{
	int j=0;
	int i = a;
  	cout<<" "<<i;
	bin[j]=i;
  }
