#include<iostream>
#include<iomanip>
#include<string>
#include<time.h>
using namespace std;
void Guess(int,int);
int main()
{   int num=0,i=1 ,all=0;
	srand(time(NULL));
	int random = 1+rand()%10;
	while(num != random)
	{	cout<<"Guess the number (1 to 10) :";
		cin>>num;
		i++;
		
		
		Guess(num,random);
		
		
		all =+ i;
	}
	cout<<"The secret number is "<<random<<endl;
	cout<<"You made "<< all-1 <<" guesses"<<endl;
	return 0;
}
void Guess(int num,int random)
{
		if (num > random) cout << "The secret number is lower" << endl;
		else if  (num < random) cout << "The secret number is higher" << endl;
		else  cout <<"Congratulations!"<<endl;
}