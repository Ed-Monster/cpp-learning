#include "test.h"
#include "mystring.h"

using std::cin;
using std::cout;
using std::endl;

void divide(){
    cout << STARS << endl;
}


void test_1(){
    const char * TITILE = "Welcome!";
    // initialize a String by C-style string
    String title(TITILE);
    cout << title << endl;

    String usr_name;
    cout << "Kimi no na wa: ";
    cin >> usr_name;
    
    // initialize a String by another String
    String usr_name_cp(usr_name);
    cout << "Konnichi wa, " << usr_name_cp << "-san!" << endl;
}


void test_2(){
    const char * GREET = "Youkoso!";
    // assignment by C-style string
    String greet;
    greet = GREET;
    cout << greet << endl;

    String usr_name;
    cout << "Kimi no na wa: ";
    cin >> usr_name;
    
    // assignment String by another String
    String usr_name_cp;
    usr_name_cp = usr_name;
    cout << "Komban wa, " << usr_name_cp << "-san!" << endl;
}


void test_5(){
    String passwd, ascertain;
    cout << "Set password: ";
    cin >> passwd;

    do{
        cout << "Please ascertain your password: ";
        cin >> ascertain;

        if(ascertain == passwd){
            cout << "Yeah! That's it!" << endl;
            break;
        }
        else{
            cout << "Oops! Try again." << endl;
        }
    }while(true);

}


void benchmark(){
    const int ArSize = 10; // the size of String array
    const int MAXLEN = 80; // the size of a string input
    int valid_n = 0; // the number of valid inputs
    String sayings[ArSize];
    char temp[MAXLEN];

    cout << "Please enter up to " << ArSize
         << " short sayings <empty line to quit>:" << endl;
    
    for(int i = 0; i < ArSize; i++){
        cout << i+1 << ": ";
        // get a C-style string with less than String::CINLIM characters
        cin.get(temp, MAXLEN);

        while(cin && cin.get() != '\n')
            continue;
        if(!cin || temp[0] == '\0'){
            break; // if empty line was input, quit
        }
        else {
            sayings[i] = temp; // add to sayings
            valid_n++;
        }
    }

    if(valid_n > 0){ // output
        int shortest = 0; // the index of the shortest saying
        int first = 0; // the index of the alphabetically earliest saying

        cout << "Here's your sayings:" <<endl;
        for(int i = 0; i < valid_n ; i++){
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        for(int i = 0; i < valid_n ; i++){
            if(sayings[i].length() < sayings[shortest].length())
                shortest = i;
            
            if(sayings[i] < sayings[first])
                first = i;
        }

        cout << "The shortest saying is: " << sayings[shortest] << endl;
        cout << "First alphabetically: " << sayings[first] << endl;
        
        cout << "This program used " << String::getNumStr()
             << " String objects. Bye.\n";
    }



}