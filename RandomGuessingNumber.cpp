#include<bits/stdc++.h>
using namespace std;

int main(){
    int number,guess;
    srand(time(NULL));
    number = rand()%100;
    // cout<<number<<endl;
    for (int i = 0; i < INT_MAX; i++) {
        cout<<"Guess the number : ";
        if(!(cin>>guess)){
        cout<<"Enter a number!"<<endl;
        }
        else if(number>guess){
            cout<<"Oops its low!!"<<endl;
        }
        else if(number<guess){
            cout<<"Oops is high!"<<endl;
        }
        else if(number = guess){
            cout<<"Wooh! you guessed it right!"<<endl;
            break;
        }
    }
    
    cout<<"The number is "<<number;
    
    
    
    return 0;
}