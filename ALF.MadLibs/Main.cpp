
//Mad Libs
//Alex Freimuth

#include <iostream>
#include <conio.h>

using namespace std;

//step 1
struct Entries 
{
    string type;
    string input;
};

//step 2 - make array
Entries entries[] = {
{"adjective", ""},
{"adjective", ""},
{"type of bird", ""},
{"room in a house", ""},
{"verb (past tense)", ""},
{"verb", ""},
{"relative's name", ""},
{"noun", ""},
{"a liquid", ""},
{"verb ending in -ing", ""},
{"part of the body (plural)", ""},
{"plural noun", ""},
{"verb ending in -ing", ""},
{"noun", ""}
};

void FixMistake();



void DoubleCheck()
{
    //step 4 - fix mistakes
    char fix;
    cout << "Do you want to make any changes? [Y/N] ";
    cin >> fix;
    if (toupper(fix) != 'Y' && toupper(fix) != 'N')
    {
        cout << "Error, try again\n";
        DoubleCheck();
    }
    else if (toupper(fix) == 'N')
    {
        return;
    }
    else
    {
        FixMistake();
    }
};

void FixMistake()
{
    int index;
    cout << "What index do you want to fix? ";
    cin >> index;
    cout << index << ". Enter a(n) " << entries[(index - 1)].type + ": ";
    cin >> entries[(index - 1)].input;
    DoubleCheck();
}

int main()
{
    const int SIZE = 14;
    
    //step 3 - prompt for input
    for (int i = 0; i < SIZE; i++)
    {
        cout << (i+1) << ". Enter a(n) " << entries[i].type + ": ";
        cin >> entries[i].input;
    }

    //step 4 - fix mistakes
    DoubleCheck();


    //step 5 - display
    cout << "It was a " << entries[0].input << ", cold November day. I woke up to the " << entries[1].input 
        << " smell of " << entries[2].input << " roasting in the " << entries[3].input 
        << " downstairs. \nI " << entries[4].input << " down the stairs to see if I could help " << entries[5].input 
        << " the dinner. My mom said, 'See if " << entries[6].input << " needs a fresh " << entries[7].input 
        << ".' \nSo I carried a tray of glasses full of " << entries[8].input << " into the " << entries[9].input 
        << " room. When I got there, I couldn't believe my " << entries[10].input << "! \nThere were " << entries[11].input 
        << " " << entries[12].input << " on the " << entries[13].input << "!";

    //It was a _, cold November day. I woke up to the _ smell of _ roasting in the _ downstairs. I _ down the stairs to see if I could help _ the dinner. My mom said, "See if _ needs a fresh _." So I carried a tray of glasses full of _ into the _ room. When I got there, I couldn't believe my _! There were _ _ on the _!

    (void)_getch();
    return 0;
}