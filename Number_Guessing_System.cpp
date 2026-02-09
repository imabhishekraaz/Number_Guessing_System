#include<iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main(void){

    int number,guess,attempt = 0;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    cout<<"Welcome to Number guesses program!"<<endl;
    cout<<"Guess the number b/w 1 to 100.=>\n"<<endl;

    do{
        cout<<"Enter the number: ";
        cin>>guess;

        attempt++;

        if(guess>number){
            cout<<"Too High"<<endl;
        } else if(guess < number) {
            cout<<"Too Low"<<endl;
        } else if (guess==number){
            cout<<"Correct"<<endl;
            cout<<"You took "<<attempt<<"'s attempts"<<endl;
        }
    } while(guess!=number);

    return 0;
}