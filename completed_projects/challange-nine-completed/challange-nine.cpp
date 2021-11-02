/*
Program Goal: Display a menu to a user that will repeat until he quits with a "Q" or "q".
              Simple math using a list of numbers via a vector.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    //selection
    char selection;
    //list
    vector<int> list ;

    do{
    //display menu to user
    cout << "Menu" << endl;
    cout << "Enter 'P' or 'p' to see the values of the list." << endl;
    cout << "Enter 'A' or 'a' to add a number to the list." << endl;
    cout << "Enter 'M' or 'm' to find the mean of the list." << endl;
    cout << "Enter 'L' or 'l' to find the largest number of the list." << endl;
    cout << "Enter 'S' or 's' to find the smallest number of the list." << endl;
    cout << "Enter 'Q' or 'q' to quite the program." << endl;
    cin >> selection;

    //if statement to handle all cases
    if(selection == 'Q' || selection == 'q') {

        cout << "Goodbye\n" << endl;

    } else if (selection == 'P' || selection == 'p') {

        if(list.empty()) {
            cout << "[ ]" << endl;
        } else {
            cout << "[ " ;
            for(int i = 0; i < list.size(); i++) {
                cout << list[i] << " ";
            }
            cout << "]";
        }
    } else if(selection == 'A' || selection == 'a'){

            int number = 0;
            cout << "Please enter a number: ";  
            cin >> number;
            list.push_back(number);
            cout << number << " added" << endl;

    } else if(selection == 'M' || selection == 'm') {

            if(list.empty()) {
                cout << "Your list is empty, no mean value to find." << endl;
            } else {
                int mean = 0;
                int total = 0;
                for(int i=0; i < list.size(); i++) {
                    total += list[i];
                }
                mean = total / 2;
                cout << "Your mean value is " << mean << endl;
            }
    } else if (selection == 'S' || selection == 's') {

        if(list.empty()) {
            cout << "List is Empty\n";
        }else {
            int smallest = list[0];
            for(int i=1; i < list.size(); i++){
                if(list[i] < smallest){
                    smallest = list[i];
                }
            }
            cout << "The smallest number in the list is "<< smallest << endl;
        }
    } else if (selection == 'L' || selection == 'l') {

        if(list.empty()) {
            cout << "List is Empty" << endl;
        }else {
            int largest = list[0];
            for(int i=1; i < list.size(); i++){
                if(list[i] > largest){
                    largest = list[i];
                }
            }
            cout << "The smallest number in the list is "<< largest << endl;
        }
    } else {

        //This is the defaulting value for invalid key entries
        cout << "That is an invalid keypress, enter a key listed in the menu" << endl;
    }
    } while(selection != 'q' && selection != 'Q');

    return 0;
}


