#include<iostream>
#include<ctime>

using namespace std;

int main(){

    int num,tries,guess;
    
    srand(time(NULL));

    num = (rand()%100)+1;

    cout<<"***** Number Guessing Game *****"<<endl;

    do{
        cout<<"Guess a number between 1 to 100:";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"TOO HIGH"<<endl;
        }
        else if(guess<num){
            cout<<"TOO LOW"<<endl;
        }
        else{
            cout<<"CORRECT!"<<endl;
            cout<<"Number of tries:"<<tries<<endl;
        }
    }
    while(guess!=num);

}