#include <iostream>
#include "headers.file.h"

  using namespace std;

int main() {
draw();

// input =le numero qui va changer par X ou O
int input ;

// count = indique le role de quelle joueur si pair cad X else O
int count=0;

    
while (count<=9 ){


    
    do

    {
  
 cout << "please can you enter a number between a 1 and 9" << endl;
cout << "its role of " << currentplayer << endl;
cin >> input;
    }while(input<1 || input >9);
    
if(count %2==0) {


replace(input,currentplayer);
currentplayer ='O';
}
else{

 replace(input,currentplayer);
 currentplayer ='X';
}
count ++;
draw();
if(checkwinnerXX()){

break;
}
if(checkwinnerOO()){
    
    break;
    
}
if(count==9 && checknowin()){
    break;
    
}

  if(X==1 || O==1  || NOWIN==1){
      cout << "thanks for playing this game -_- \n" ;
      break;
  }
 
}




return 0;

}


