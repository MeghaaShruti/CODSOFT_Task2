#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	cout<<"Welcome to the [Guess The Number] game. Let's start!"<<endl<<endl;
	srand(time(nullptr));
	int rndmnum =rand() % 100 + 1;
	int num;
	cout<<"In this game you need to guess a number from 1 to 100. "<<endl<<endl;
	
	do{
		cout<<"Enter the number you have guessed:";
		cin>>num;
		if(num>rndmnum){
			cout<<"INCORRECT! The number is too high!"<<endl ;   
		}
		else if(num<rndmnum){
			cout<<"INCORRECT! The number is too low"<<endl;
		}
		else{
			cout<<"Congrats you have guessed the number!!"<<endl;
			cout<<"The number guessed is="<<rndmnum<<endl;
		}
		
	}while(num!=rndmnum);
	
	char playAgain;
	cout << "Would you like to play again (y or n)? ";
    cin >> playAgain;
    if(playAgain == 'n' || playAgain=='N'){
	    cout<<"Game Over!";
	}
	else if (playAgain == 'y' || playAgain=='Y'){
	    main(); //restart the game
	}
		return 0;
	
	
}

