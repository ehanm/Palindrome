// Made by Ehan Masud
// Completed on 9/28/21
// This program takes an input (with a maximum of 80 characters long) and determines whether it is a palindrome or not
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char input[81]; // character array for input
  char converter[81]; // character array to remove all spaces and punctuation 
  char checker[81]; // character array to reverse the the previous array
  int convertercounter = 0;
  int finalcheck = 0;
<<<<<<< HEAD
  memset(input, 0, 81);
  memset(converter, 0, 81);
  memset(checker, 0, 81);

  cin.get(input, 81);
  
=======
  cin.get(input, 81);

>>>>>>> 1aa58e2569ab57d1b1ede793f11d9af8b5413a70
  for (int i = 0; i < strlen(input); i++) { // removing all punctuation and converting the entire array to uppercase
    if (isalpha(input[i]) != 0){
      converter[convertercounter] = toupper(input[i]);
      convertercounter++;
      cout << converter[i] << endl;
    }
 
  }

<<<<<<< HEAD
  checker[strlen(converter)] = '\0';
  
=======
>>>>>>> 1aa58e2569ab57d1b1ede793f11d9af8b5413a70
  for (int i = 0; i < strlen(converter); i++){ // reversing the entire array and copying it into a new array
    checker[i] = converter[strlen(converter)-1-i];
    cout << checker[i] << endl;
  }

<<<<<<< HEAD
  

=======
>>>>>>> 1aa58e2569ab57d1b1ede793f11d9af8b5413a70
  for (int i = 0; i < strlen(converter); i++) { // checking if both arrays are the same
    if (checker[i] == converter[i]){
      finalcheck++;
    }
  }

  if (finalcheck == strlen(converter)) { // if they are, print "Palindrome"
    cout << "Palindrome.";
  }
  else { // if they aren't print "Not a palindrome."
    cout << "Not a palindrome."; 
  }
 
  return 0;
}
