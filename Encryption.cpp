#include<iostream>
#include<string>
using namespace std;
char str[50];
int des[50];
int bin1[20];
long int bin2[40];
int binary(int);
int decimal(char);
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
	decimal(a);
	j++;
	}
cout<<"\n";
	return 0;
}
//Decimal conversion from character
int decimal(char a)
{
	int j=0;
	int i = a;
  	cout<<"\n"<<i;
	des[j]=i;
	j++;
	binary(des[j-1]);
  }
//Binary Conversion from decimal
int binary(int a)
{
    int i=0,j=0;
    int rem;

    if (a <= 1)
    {
        cout <<" \n"<< a;
        return 0;
    }
    else
    rem = a % 2;
    binary(a / 2);
    cout <<""<< rem;
    bin1[i]=rem;
    i++;
}
