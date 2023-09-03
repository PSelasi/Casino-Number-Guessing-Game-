#include <iostream>
#include <random>
using namespace std;

class Player {
private:
	string name;
	int age;

public:
	string playerName()
	{ 
	 cout <<"Input Name: ";
     cin.ignore();
	 getline(cin,name);
     return name ;
	}	
	
	int playerAge() 
	{
	 cout <<"Input Age: ";
	 while (!(cin >> age)) {
        cout << "Invalid input! Please enter a valid number: ";
        cin.clear();  // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore remaining input
    }
     return age;
	}

};

int main (){
int option;
int guess;
double totalAmount;
double betAmount;
int randomNumber;
char playAgain;
int difficulty;


	    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		     <<"NUMBER GUESSING GAME\n"
		     <<"~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		     <<"[01] PLAY GAME \n" 
	    	 <<"[02] INSTRUCTIONS \n"
		     <<"[03] EXIT \n"
		     <<"Input Number: ";
	    while (!(cin >> option)) {
            cout << "Invalid input! Please enter a valid number: ";
            cin.clear();  // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore remaining input
        }


	switch(option)
	{
	    
	case 01:
    {
		cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		     <<"NUMBER GUESSING GAME\n"
		     <<"~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		     
		     Player playerDetails;
		     playerDetails.playerName();
		     playerDetails.playerAge();
		     
             
		cout <<"Input Amount: ";
		 while (!(cin >> totalAmount)) {
             cout << "Invalid input! Please enter a valid number: ";
             cin.clear();  
             cin.ignore(numeric_limits<streamsize>::max(), '\n');  
         }
		 
		 cout <<"Input Bet Amount: ";
		  while (!(cin >> betAmount)) {
             cout << "Invalid input! Please enter a valid number: ";
             cin.clear();  
             cin.ignore(numeric_limits<streamsize>::max(), '\n');  
         }
		 
		 
			 if (betAmount < 0 || betAmount > totalAmount)
			 {
			 	do 
				 	{
				 		cout <<"Invalid amount!! \n"
				 		     <<"Input Bet Amount: ";
				 		 cin >>betAmount;
				 	}
				 	while (betAmount < 0 || betAmount > totalAmount);
			 }
			 
			 cout <<"\nDifficulty Level\n"
			 	  <<"[01] Easy\n"
			 	  <<"[02] Hard\n"
			 	  <<"[03] Difficult\n"
			 	  <<"Input Option: ";
			  while (!(cin >> difficulty)) {
                 cout << "Invalid input! Please enter a valid number: ";
                 cin.clear();  
                 cin.ignore(numeric_limits<streamsize>::max(), '\n');  
              }
			 
			do{	
				 if(difficulty == 01 )
				 {
				 //random number gen
				 random_device rd;
				 mt19937 gen(rd());			 
			 
	 
					 // random number range
					 int lowerBound = 1;
					 int upperBound = 10;
					 uniform_int_distribution<int> distribution (lowerBound, upperBound);
					 int randomNumber = distribution(gen);
		           	 cout <<"Input Number between 1 - 10: ";
		                   while (!(cin >> guess)) {
                             cout << "Invalid input! Please enter a valid number: ";
                             cin.clear();  
                             cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                           }	
		             
		             	 if(guess == randomNumber)
			                {
        				 	    cout <<"You Win!! \n";
        				 	    totalAmount = betAmount + 10;
        				 	    cout <<"Your new amount is $"<<totalAmount<<"\n";
		                	 }
            			  else
            			 	{
            				 	cout <<"You Lose \n";
						cout <<"The number was "<<randomNumber<<"\n" ;
            				 	totalAmount = totalAmount - betAmount;
            				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
            			 	}
					    break;
					 }
				 else if (difficulty == 02) {
				 
				 //random number gen
				 random_device rd;
				 mt19937 gen(rd());			 
			 

					 int lowerBound = 1;
				 	int upperBound = 50;
				 	uniform_int_distribution<int> distribution (lowerBound, upperBound);
				        int randomNumber = distribution(gen);
				  	 cout <<"Input Number between 1 - 50:  ";
		              while (!(cin >> guess)) {
                         cout << "Invalid input! Please enter a valid number: ";
                         cin.clear();  
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                      }
            		             
              			 if(guess == randomNumber)
            	    		 {
            			 
            				 	cout <<"You Win!!\n";
            				 	totalAmount = betAmount + 50;
            				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
                			 }
            			 else
            		    	 {
            				 	cout <<"You Lose\n";
						cout <<"The number was "<<randomNumber<<"\n" ;
            				 	totalAmount = totalAmount - betAmount;
            			   	  cout <<"Your new amount is $"<<totalAmount<<"\n";
            			 }
				   break;
				   }
				  else if (difficulty == 03) {
				 
				 //random number gen
				 random_device rd;
				 mt19937 gen(rd());			 
			 

				 	 int lowerBound = 1;
					 int upperBound = 100;
					 uniform_int_distribution<int> distribution (lowerBound, upperBound);
					 int randomNumber = distribution(gen);
					 cout <<"Input Number between 1 - 100: ";
            	     while (!(cin >> guess)) {
                         cout << "Invalid input! Please enter a valid number: ";
                         cin.clear();  
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                     }
            		 
            		 		 if(guess == randomNumber)
                			     {
                			 
                				 	cout <<"You Win!!\n";
                				 	totalAmount = betAmount + 10;
                				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
                			     }
                			 else
                			    {
                				 	cout <<"You Lose\n";
							cout <<"The number was "<<randomNumber<<"\n" ;
                				 	totalAmount = totalAmount - betAmount;
                				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
                			     }
			            break;
				 }
				 else {
				 	 cout <<"Invalid Input!";
	 
				 }
			 } while (difficulty != 01 || difficulty != 02 || difficulty != 03);
			 		 
		 	 cout <<"Enter [Y] to play again or [N] to quit: ";
	 		 cin >> playAgain;
		 
		 while (playAgain == 'y' || playAgain == 'Y')
		 	{
			 cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	    		      <<"NUMBER GUESSING GAME\n"
		              <<"~~~~~~~~~~~~~~~~~~~~~~~~~\n"
			      <<"Amount = "<<totalAmount<< "\n";	
				
				while (totalAmount == 0)
				   { 
				     cout <<"Input Amount: ";
		         	 while (!(cin >> totalAmount)) {
                         cout << "Invalid input! Please enter a valid number: ";
                         cin.clear();  
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                      }
				   };
		 
			cout <<"Input Bet Amount: ";
			 while (!(cin >> betAmount)) {
                 cout << "Invalid input! Please enter a valid number: ";
                 cin.clear();  
                 cin.ignore(numeric_limits<streamsize>::max(), '\n');  
             }

				 if (betAmount < 0 || betAmount > totalAmount)
				 {
				 	do 
					 	{
					 		cout <<"Invalid amount!! \n"
					 		     <<"Input Bet Amount: \n";
					 		 cin >>betAmount;
					 	}
					 	while (betAmount < 0 || betAmount > totalAmount);
				 }

 			    cout <<"\nDifficulty Level\n"
			 	  <<"[01] Easy\n"
			 	  <<"[02] Hard\n"
			 	  <<"[03] Difficult\n"
			 	  <<"Input Option: ";
			     while (!(cin >> difficulty)) {
                         cout << "Invalid input! Please enter a valid number: ";
                         cin.clear();  
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                     }; 
			 
			do{	
				 if(difficulty == 01 )
				 {
				 //random number gen
				 random_device rd;
				 mt19937 gen(rd());			 
			 
	 
					 // random number range
					 int lowerBound = 1;
					 int upperBound = 10;
					 uniform_int_distribution<int> distribution (lowerBound, upperBound);
					 int randomNumber = distribution(gen);
		           	 cout <<"Input Number between 1 - 10: ";
		                while (!(cin >> guess)) {
                             cout << "Invalid input! Please enter a valid number: ";
                             cin.clear();  
                             cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                        }	
		             
		             	 if(guess == randomNumber)
			                {
        				 	    cout <<"You Win!! \n";
        				 	    totalAmount = betAmount + 10;
        				 	    cout <<"Your new amount is $"<<totalAmount<<"\n";
		                	 }
            			 else
            			 	{
            				 	cout <<"You Lose \n";
						cout <<"The number was "<<randomNumber<<"\n" ;
            				 	totalAmount = totalAmount - betAmount;
            				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
            			 	}
					    break;
					 }
				 else if (difficulty == 02) {
				 
				 //random number gen
				 random_device rd;
				 mt19937 gen(rd());			 
			 

					int lowerBound = 1;
				 	int upperBound = 50;
				 	uniform_int_distribution<int> distribution (lowerBound, upperBound);
				        int randomNumber = distribution(gen);
				  	 cout <<"Input Number between 1 - 50: ";
		               while (!(cin >> guess)) {
                         cout << "Invalid input! Please enter a valid number: ";
                         cin.clear();  
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                       }
            		             
              			 if(guess == randomNumber)
            	    		 {
            			 
            				 	cout <<"You Win!! \n";
            				 	totalAmount = betAmount + 50;
            				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
                			 }
            			 else
            		    	 {
            				 	cout <<"You Lose \n";
						cout <<"The number was "<<randomNumber<<"\n" ;
            				 	totalAmount = totalAmount - betAmount;
            			   	 	cout <<"Your new amount is $"<<totalAmount<<"\n";
            			 }
				   break;
				   }
				  else if (difficulty == 03) {
				 
				 //random number gen
				 random_device rd;
				 mt19937 gen(rd());			 
			 

				 	 int lowerBound = 1;
					 int upperBound = 100;
					 uniform_int_distribution<int> distribution (lowerBound, upperBound);
					 int randomNumber = distribution(gen);
					 cout <<"Input Number between 1 - 100: ";
            		 while (!(cin >> guess)) {
                         cout << "Invalid input! Please enter a valid number: ";
                         cin.clear();  
                         cin.ignore(numeric_limits<streamsize>::max(), '\n');  
                     }
            		 
            		 		 if(guess == randomNumber)
                			     {
                			 
                				 	cout <<"You Win!! \n";
                				 	totalAmount = betAmount + 10;
                				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
                			     }
                			 else
                			    {
                				 	cout <<"You Lose \n";
							cout <<"The number was "<<randomNumber<<"\n" ;
                				 	totalAmount = totalAmount - betAmount;
                				 	cout <<"Your new amount is $"<<totalAmount<<"\n";
                			     }
			            break;
				 }
				 else {
				 	 cout <<"Invalid Input! \n";
	 
				 }
			 } while (difficulty != 01 || difficulty != 02 || difficulty != 03);
			 		 
		 	 cout <<"Enter [Y] to play again or [N] to quit: ";
	 		 cin >> playAgain;
	 
		 	};
    }
	break;
	
	case 02:
		cout <<"Casino Number Guessing Game Instructions \n"
			 <<"Welcome to the Casino Number Guessing Game! Test your luck and see if you can guess the random number generated by the computer.\n\n"
			 <<"Follow these steps to play the game: \n"
			 <<"1. Set Up Initial Amount: \n"
			 <<"You'll be asked to input the total amount of money you have to play with. Enter the amount and press Enter. \n\n"
			 <<"2. Place Your Bet: \n"
			 <<"Input the amount of money you want to bet on this round. Make sure the amount is between 0 and your total available amount."
			 <<"3. Guess a Number:\n"
			 <<"You'll be prompted to input a number between 1 and 10 as your guess for the secret number. \n\n"
			 <<"4. Validate Bet Amount: \n"
			 <<"If the bet amount you entered is invalid (less than 0 or greater than your total available amount), you'll be asked to input a valid bet amount until it's within the allowed range. \n\n"
			 <<"5. Guess Result: \n"
			 <<"The game will compare your guess with the secret random number. \n\n"
			 <<"6. If your guess matches the secret number: \n"
			 <<"You'll receive a message saying You Win!! \n"
			 <<"Your new total amount will be calculated by adding the bet amount and 10 to your current total. \n"
			 <<"Your new total amount will be displayed. \n\n"
			 <<"7. If your guess doesn't match the secret number: \n"
			 <<"You'll receive a message saying You Lose \n"
			 <<"The bet amount will be subtracted from your total amount. \n"
			 <<"Your new total amount will be displayed. \n\n"
			 <<"8. Play Again or Quit: \n"
			 <<"After each round, you'll be asked if you want to play again or quit: \n"
			 <<"Enter 'Y' or 'y' if you want to play another round. \n"
			 <<"Enter 'N' or 'n' if you want to quit the game. \n\n"
			 <<"9. Game End: \n"
			 <<"If you decide to quit, the game will end, and your final total amount will be displayed. \n"
			 <<"Remember, your goal is to guess the correct number and accumulate as much money as you can. Good luck and have fun playing the Casino Number Guessing Game! \n";

	break;
	
	case 03:
		cout <<"Game End";
	break;
	
	default:
		cerr <<"Invalid Input";
	break;
	}
	
}
    