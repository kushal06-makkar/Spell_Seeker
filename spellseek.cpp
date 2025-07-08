// including header files used

#include <iostream>    //for input/output
#include <cstdlib>     //for random function
#include <sstream>     //for string operations
#include <ctype.h>     //for upper function
#include <time.h>      //to seed random function with system's time
#include <conio.h>     //to take hidden input
#include <fstream>     //for file handling  
#include <cstring>     //for string commands
#include <vector>      //for vector


using namespace std;


// defining colours for highlighting specific text

#define RED_FONT     "\x1b[31m"
#define RESET_FONT   "\x1b[0m"
#define BLUE_FONT    "\x1b[34m"


// declaring universal variable

int level,score=0,highscore=0;
char heart=3;
int size=446;    
int size1=51;
int size2=51;
int size3=32;
int size4=31;
int size5=35;

struct WordData {
    int serialNumber;
    string word;
    string hint;
};

class process
{
    int i, f;
    char b;
    public:

void process_arcade(char a[], char c[], char d[], int n, int lives) {
    int flag = 0;

    while (lives > 0 && flag == 0) {
        f = 0;
        cout << "\t\t";

        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        for (i = 0; i < 700000000; i++);
        cout << "\n\n\t\tYou have " << lives << " Lives left....\n";
        for (i = 0; i < 700000000; i++);
        cout << "\t\t";

        for (i = 0; i < lives; i++) {
            cout << RED_FONT <<" "<< heart << RESET_FONT;
        }

        cout << "\n\n";
        for (i = 0; i < 700000000; i++);
        cout << "Enter an Alphabet To Guess..\n  ";
        cin >> b;
        b = toupper(b);
        for (i = 0; i < 700000000; i++);

       for (i = 0; i < n; i++) {
            if (c[i] == b) {
                f = 1;
                a[i] = c[i];
            }
        }

        if (f == 1) {
            cout << "GOOD!!!\n";
        }
        else {
            lives--;
            cout << "OOPS!! Wrong Guess\n";
            if (lives == 3) {
                cout << "\t\t HINT: ITS " << d << "\n";
            }
        }

        for (i = 0; i < n; i++) {
            if (i != n - 1 && a[i] == '_') {
                flag = 0;
                break;
            }
            if (i == n - 1 && a[i] != '_') {
                flag = 1;
            }
        }
    }

    if (flag == 1) {
        cout << "\t\t";

        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        for (i = 0; i < 700000000; i++);
        cout << "\n\n";
        cout << "\t\tHURRAYYY!!!,YOU HAVE GUESSED THE WORD RIGHT.....\n\n";
        for (i = 0; i < 700000000; i++);
        level++;
    }

    if (flag == 0) {
        cout << "\t\t";

        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        for (i = 0; i < 700000000; i++);
        cout << "\n\n";
        cout << "\t\t0 lives left\n";
        cout << "\t\tSORRY,YOU LOSE!\n";
        cout << "\t\tThe Word was ";

        for (i = 0; i < n; i++) {
            cout << c[i];
        }

        cout << " !!!\n\n";
    }
}


int process_survival(char a[],char c[],char d[],int n,int lives)
{
    int flag=0;

    while(lives>0 && flag==0)
    {
        f=0;
        cout<<"\t\t";

        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
        for(i=0;i<700000000;i++);
        cout<<"\t\t HINT: ITS "<<d<<endl;

        for(i=0;i<700000000;i++);
        cout<<"\n\n\t\tYou have"<< lives <<"Lives left....\n";
        for(i=0;i<700000000;i++);
        cout<<"\t\t";

        for(i=0;i<lives;i++)
        {
             cout<<RED_FONT<<" "<<heart<<RESET_FONT;
        }

        cout << "\n\n";
for(i=0; i<700000000; i++); 
cout << "Enter an Alphabet To Guess..\n ";
char b;
cin >> b;
b = toupper(b);
for(i=0; i<700000000; i++); 

for(i=0; i<n; i++)
{
    if(c[i] == b)
    {
        f = 1;
        a[i] = c[i];
    }
}

if(f == 1)
{
    cout << "GOOD!!!\n";
}
else
{
    lives--;
    cout << "OOPS!! Wrong Guess\n";
}

for(i=0; i<n; i++)
{
    if(i != n-1 && a[i] == '_')
    {
        flag = 0;
        break;
    }
    if(i == n-1 && a[i] != '_')
    {
        flag = 1;
    }
}


    }

   if(flag == 1)
{
    cout << "\t\t";

    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    for(i=0; i<700000000; i++); 
    cout << "\n\n";
    cout << "\t\tHURRAYYY!!!, YOU HAVE GUESSED THE WORD RIGHT.....\n\n";
    for(i=0; i<700000000; i++); 
    lives++;
    score++;
    if(score > highscore)
    {
        cout << "CONGRATULATIONS!!! NEW HIGHSCORE \n\n";
        highscore = score;
    }
}

if(flag == 0)
{
    cout << "\t\t";

    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    for(i=0; i<700000000; i++); 
    cout << "\n\n";
    cout << "\t\t0 lives left\n";
    cout << "\t\tSORRY, YOU LOSE!\n";
    cout << "\t\tThe Word was ";

    for(i=0; i<n; i++)
    {
        cout << c[i];
    }

    cout << " !!!\n\n";
}

return lives;

}



// defining a function for processing of word guessed in multiplayer mode of game

int process_multiplayer(char a[], char c[], char d[], int n, int lives)
{
    
    int flag=0;

    while (lives > 0 && flag == 0)
    {
        f = 0;
        cout << "\t\t";

        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        for (i = 0; i < 700000000; i++);
        cout << "\n\n\t\tYou have " << lives << " Lives left....\n";
        for (i = 0; i < 700000000; i++);
        cout << "\t\t";

        for (i = 0; i < lives; i++)
        {
            cout << RED_FONT <<" "<<heart<< RESET_FONT;
        }

        cout << "\n\n";
        for (i = 0; i < 700000000; i++);
        cout << "Enter an Alphabet To Guess..\n  ";
        cin >> b;
        b = toupper(b);
        for (i = 0; i < 700000000; i++);

        for (i = 0; i < n; i++)
        {
            if (c[i] == b)
            {
                f = 1;
                a[i] = c[i];
            }
        }

        if (f == 1)
        {
            cout << "GOOD!!!\n";
        }
        else
        {
            lives--;
            cout << "OOPS!! Wrong Guess\n";
            if (lives == 3)
            {
                cout << "\t\t HINT: " << d << endl;
            }
        }

        for (i = 0; i < n; i++)
        {
            if (i != n - 1 && a[i] == '_')
            {
                flag = 0;
                break;
            }
            if (i == n - 1 && a[i] != '_')
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        cout << "\t\t";
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (i = 0; i < 700000000; i++);
        cout << "\n\n";
        cout << "\t\tHURRAYYY!!!, YOU HAVE GUESSED THE WORD RIGHT.....\n\n";
        for (i = 0; i < 700000000; i++);
    }

    if (flag == 0)
    {
        cout << "\t\t";

        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        for (i = 0; i < 700000000; i++);
        cout << "\n\n";
        cout << "\t\t0 lives left\n";
        cout << "\t\tSORRY, YOU LOSE!\n";
        cout << "\t\tThe Word was ";

        for (i = 0; i < n; i++)
        {
            cout << c[i];
        }

        cout << " !!!\n\n";
    }

    return lives;
}
};

int main()
{
    process pro;
   
    int i,j, r, n, m , f, flag = 0, lives, mode;
    char b, play;
    char a[50], c[50], d[50];
    cout << RED_FONT << "\n\n\n\t\tWelcome to the SPELLSEEKER.....\n\n" << RESET_FONT;
    
    do
    {
        choice:

        for (i = 0; i < 500000000; i++);
        cout << "\t\tWhich Mode Do You Want To Play\n\n";
        for (i = 0; i < 500000000; i++);
        cout << RED_FONT << "  <1>ARCADE MODE\t<2>SURVIVAL MODE\t<3>MULTIPLAYER MODE\n\n\t\t\t\t" << BLUE_FONT;
        cin >> mode;
        cout << RESET_FONT << "\n";

        switch (mode)
        {

            case 1:
{
    for (i = 0; i < 500000000; i++);
    cout << RED_FONT "\t\t    WELCOME TO ARCADE MODE....\n" RESET_FONT;
    for (i = 0; i < 500000000; i++);
    cout << "\t\tYou will have to guess the word....\n";
    for (i = 0; i < 500000000; i++);
    cout << "\t\tYou will be given 5 lives....\n";
    for (i = 0; i < 500000000; i++);
    cout << "\t\tIf you lose all lives you will lose the game....\n";
    for (i = 0; i < 500000000; i++);
    cout << "\t\tAfter 2 wrong guesses, you will be given a hint....\n\n\n";
    for (i = 0; i < 500000000; i++);

    flag = 0;
    level = 1;
    lives = 5;
    cout << "\t\tLets Begin...\n";
    


    if(level==1)
    {
        cout << "\t\tLEVEL 1 : VERY EASY\n";
        srand(time(NULL));
        r=2+rand()%size1;

        
    ifstream file("Very Easy.csv");                                                   

    
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }


    
    string line;
    for (int i = 1; i < r; ++i) {
        if (!getline(file, line)) {
            cout << "Error: Serial number out of range!";
            return 1;
        }
    }

    
    const int maxLength = 100; 
    char wordsArray[maxLength];
    stringstream ss(line);
    string word;
    vector<string> tokens;
    while (getline(ss, word, ',')) {
        tokens.push_back(word);
    }

    
    if (tokens.size() < 3) {
        cout << "Error: Invalid CSV format!";
        return 1;
    }

    
    strncpy(wordsArray, tokens[1].c_str(), maxLength);
    strncat(wordsArray, " ", maxLength);
    strncat(wordsArray, tokens[2].c_str(), maxLength);

    
    wordsArray[maxLength - 1] = '\0';

    
    file.close();

     char *pos = strchr(wordsArray, ' ');

    strncpy(c, wordsArray, pos - wordsArray);
    c[pos - wordsArray] = '\0';

    strcpy(d, pos + 1);

        n=strlen(c);
        for(j=0;j<n;j++)
            {
                c[j]=toupper(c[j]);
                if(c[j]=='A'||c[j]=='E'||c[j]=='I'||c[j]=='O'||c[j]=='U'||c[j]==' ')
                {
                    a[j]=c[j];
                }
                else
                {
                    a[j]='_';
                }
            }

        m=strlen(d);
        for(j=0;j<m;j++)
        {
            d[j]=toupper(d[j]);
        }

        pro.process_arcade(a,c,d,n,lives);     
    }

    if(level==2)
    {
        cout << "\t\tLEVEL 2 : EASY\n";
        srand(time(NULL));
        r=2+rand()%size2;

         // Open the CSV file for reading
    ifstream file("Easy.csv");                                                   

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }


    // Skip lines until the desired serial number
    string line;
    for (int i = 1; i < r; ++i) {
        if (!getline(file, line)) {
            cout << "Error: Serial number out of range!";
            return 1;
        }
    }

    // Read words from the CSV line into a char array
    const int maxLength = 100; // Maximum length of a word
    char wordsArray[maxLength];
    stringstream ss(line);
    string word;
    vector<string> tokens;
    while (getline(ss, word, ',')) {
        tokens.push_back(word);
    }

    // Check if the line contains the required columns
    if (tokens.size() < 3) {
        cout << "Error: Invalid CSV format!";
        return 1;
    }

    // Copy word and hint to the char array
    strncpy(wordsArray, tokens[1].c_str(), maxLength);
    strncat(wordsArray, " ", maxLength);
    strncat(wordsArray, tokens[2].c_str(), maxLength);

    // Null-terminate the char array
    wordsArray[maxLength - 1] = '\0';

    // Close the file
    file.close();

     char *pos = strchr(wordsArray, ' ');

    strncpy(c, wordsArray, pos - wordsArray);
    c[pos - wordsArray] = '\0';

    strcpy(d, pos + 1);

        n=strlen(c);
        for(j=0;j<n;j++)
            {
                c[j]=toupper(c[j]);
                if(c[j]=='A'||c[j]=='E'||c[j]=='I'||c[j]=='O'||c[j]=='U'||c[j]==' ')
                {
                    a[j]=c[j];
                }
                else
                {
                    a[j]='_';
                }
            }

        m=strlen(d);
        for(j=0;j<m;j++)
        {
            d[j]=toupper(d[j]);
        }

        pro.process_arcade(a,c,d,n,lives);

    }

    if(level==3)
    {
        cout << "\t\tLEVEL 3 : MEDIUM\n";
        srand(time(NULL));
        r=2+rand()%size3;

         // Open the CSV file for reading
    ifstream file("medium.csv");                                                  

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }


    // Skip lines until the desired serial number
    string line;
    for (int i = 1; i < r; ++i) {
        if (!getline(file, line)) {
            cout << "Error: Serial number out of range!";
            return 1;
        }
    }

    // Read words from the CSV line into a char array
    const int maxLength = 100; // Maximum length of a word
    char wordsArray[maxLength];
    stringstream ss(line);
    string word;
    vector<string> tokens;
    while (getline(ss, word, ',')) {
        tokens.push_back(word);
    }

    // Check if the line contains the required columns
    if (tokens.size() < 3) {
        cout << "Error: Invalid CSV format!";
        return 1;
    }

    // Copy word and hint to the char array
    strncpy(wordsArray, tokens[1].c_str(), maxLength);
    strncat(wordsArray, " ", maxLength);
    strncat(wordsArray, tokens[2].c_str(), maxLength);

    // Null-terminate the char array
    wordsArray[maxLength - 1] = '\0';

    // Close the file
    file.close();

     char *pos = strchr(wordsArray, ' ');

    strncpy(c, wordsArray, pos - wordsArray);
    c[pos - wordsArray] = '\0';

    strcpy(d, pos + 1);

        n=strlen(c);
        for(j=0;j<n;j++)
            {
                c[j]=toupper(c[j]);
                if(c[j]=='A'||c[j]=='E'||c[j]=='I'||c[j]=='O'||c[j]=='U'||c[j]==' ')
                {
                    a[j]=c[j];
                }
                else
                {
                    a[j]='_';
                }
            }

        m=strlen(d);
        for(j=0;j<m;j++)
        {
            d[j]=toupper(d[j]);
        }

        pro.process_arcade(a,c,d,n,lives);

    }

    if(level==4)
    {
        cout << "\t\tLEVEL 4 : HARD\n";
        srand(time(NULL));
        r=2+rand()%size4;

         // Open the CSV file for reading
    ifstream file("hard.csv");                                                   

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }


    // Skip lines until the desired serial number
    string line;
    for (int i = 1; i < r; ++i) {
        if (!getline(file, line)) {
            cout << "Error: Serial number out of range!";
            return 1;
        }
    }

    // Read words from the CSV line into a char array
    const int maxLength = 100; // Maximum length of a word
    char wordsArray[maxLength];
    stringstream ss(line);
    string word;
    vector<string> tokens;
    while (getline(ss, word, ',')) {
        tokens.push_back(word);
    }

    // Check if the line contains the required columns
    if (tokens.size() < 3) {
        cout << "Error: Invalid CSV format!";
        return 1;
    }

    // Copy word and hint to the char array
    strncpy(wordsArray, tokens[1].c_str(), maxLength);
    strncat(wordsArray, " ", maxLength);
    strncat(wordsArray, tokens[2].c_str(), maxLength);

    // Null-terminate the char array
    wordsArray[maxLength - 1] = '\0';

    // Close the file
    file.close();

     char *pos = strchr(wordsArray, ' ');

    strncpy(c, wordsArray, pos - wordsArray);
    c[pos - wordsArray] = '\0';

    strcpy(d, pos + 1);

        n=strlen(c);
        for(j=0;j<n;j++)
            {
                c[j]=toupper(c[j]);
                if(c[j]=='A'||c[j]=='E'||c[j]=='I'||c[j]=='O'||c[j]=='U'||c[j]==' ')
                {
                    a[j]=c[j];
                }
                else
                {
                    a[j]='_';
                }
            }

        m=strlen(d);
        for(j=0;j<m;j++)
        {
            d[j]=toupper(d[j]);
        }

        pro.process_arcade(a,c,d,n,lives);

    }

    if(level==5)
    {
        cout << "\t\tLEVEL 5 : VERY HARD\n";
        srand(time(NULL));
        r=2+rand()%size5;

         // Open the CSV file for reading
    ifstream file("very hard.csv");                                                   

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }


    // Skip lines until the desired serial number
    string line;
    for (int i = 1; i < r; ++i) {
        if (!getline(file, line)) {
            cout << "Error: Serial number out of range!";
            return 1;
        }
    }

    // Read words from the CSV line into a char array
    const int maxLength = 100; // Maximum length of a word
    char wordsArray[maxLength];
    stringstream ss(line);
    string word;
    vector<string> tokens;
    while (getline(ss, word, ',')) {
        tokens.push_back(word);
    }

    // Check if the line contains the required columns
    if (tokens.size() < 3) {
        cout << "Error: Invalid CSV format!";
        return 1;
    }

    // Copy word and hint to the char array
    strncpy(wordsArray, tokens[1].c_str(), maxLength);
    strncat(wordsArray, " ", maxLength);
    strncat(wordsArray, tokens[2].c_str(), maxLength);

    // Null-terminate the char array
    wordsArray[maxLength - 1] = '\0';

    // Close the file
    file.close();

     char *pos = strchr(wordsArray, ' ');

    strncpy(c, wordsArray, pos - wordsArray);
    c[pos - wordsArray] = '\0';

    strcpy(d, pos + 1);

        n=strlen(c);
        for(j=0;j<n;j++)
            {
                c[j]=toupper(c[j]);
                if(c[j]=='A'||c[j]=='E'||c[j]=='I'||c[j]=='O'||c[j]=='U'||c[j]==' ')
                {
                    a[j]=c[j];
                }
                else
                {
                    a[j]='_';
                }
            }

        m=strlen(d);
        for(j=0;j<m;j++)
        {
            d[j]=toupper(d[j]);
        }

        pro.process_arcade(a,c,d,n,lives);

    }
    break;
}


            case 2:
{
    lives = 7;
    score = 0;
    cout << RED_FONT << "\t\t    WELCOME TO SURVIVAL MODE....\n" << RESET_FONT;
    cout << "\t   IN THIS MODE PLAYER WILL HAVE 7 LIVES\n\t   YOU WILL HAVE TO GUESS AS MANY WORDS AS U CAN\n";
    cout << "\t   AFTER EVERY RIGHT GUESS U WILL BE REWARDED WITH A LIFE\n\n";
    

    while(lives>0)
    {
        srand(time(NULL));
        r=2+rand()%size;

         // Open the CSV file for reading
    ifstream file("Survival_Database.csv");

    // Check if the file is open
    if (!file.is_open()) {
        cout << "Error opening file!";
        return 1;
    }


    // Skip lines until the desired serial number
    string line;
    for (int i = 1; i < r; ++i) {
        if (!getline(file, line)) {
            cout << "Error: Serial number out of range!";
            return 1;
        }
    }

    // Read words from the CSV line into a char array
    const int maxLength = 100; // Maximum length of a word
    char wordsArray[maxLength];
    stringstream ss(line);
    string word;
    vector<string> tokens;
    while (getline(ss, word, ',')) {
        tokens.push_back(word);
    }

    // Check if the line contains the required columns
    if (tokens.size() < 3) {
        cout << "Error: Invalid CSV format!";
        return 1;
    }

    // Copy word and hint to the char array
    strncpy(wordsArray, tokens[1].c_str(), maxLength);
    strncat(wordsArray, " ", maxLength);
    strncat(wordsArray, tokens[2].c_str(), maxLength);

    // Null-terminate the char array
    wordsArray[maxLength - 1] = '\0';

    // Close the file
    file.close();

     char *pos = strchr(wordsArray, ' ');

    strncpy(c, wordsArray, pos - wordsArray);
    c[pos - wordsArray] = '\0';

    strcpy(d, pos + 1);

        n=strlen(c);
        for(j=0;j<n;j++)
            {
                c[j]=toupper(c[j]);
                if(c[j]=='A'||c[j]=='E'||c[j]=='I'||c[j]=='O'||c[j]=='U'||c[j]==' ')
                {
                    a[j]=c[j];
                }
                else
                {
                    a[j]='_';
                }
            }

        m=strlen(d);
        for(j=0;j<m;j++)
        {
            d[j]=toupper(d[j]);
        }
        lives=pro.process_survival(a,c,d,n,lives);
    }
    break;
}
    
case 3:
{
    int i, t, p1 = 0, p2 = 0, round;
    char a[50], c[50];
    cout << RED_FONT << "\t\t    WELCOME TO MULTIPLAYER MODE....\n" << RESET_FONT;
    cout << " IN THIS MODE ONE PLAYER WILL CHALLENGE OTHER PLAYER BY GIVING\n  HIM A WORD TO GUESS(after giving word press enter twice)\n\n";
    cout << "\t\tENTER THE NUMBER OF ROUNDS YOU WANT TO PLAY\n\t\t\t\t";
    cin >> round;

    for (i = 1; i <= round; i++)
    {

        int j = 0;
        cout << RED_FONT << "\n\t\t\tROUND " << i << "\n\n" << RESET_FONT;
        cout << BLUE_FONT << "\tPLAYER 1's TURN TO GIVE WORD\n\n\t\t" << RESET_FONT;

        while (1)
        {

            char ch = _getch();
            if (ch == 13)
            {
                break;
            }
            else if (ch == 8 && j > 0)
            {
                cout << "\b \b";
                j--;
            }
            else
            {
                c[j++] = ch;
                cout << "_";
            }
        }

        flag = 0;
        lives = 5;
        c[j] = '\0';
        _getch();
        n = strlen(c);
        cout << "\n\n\n\t\t";

        for (j = 0; j < n; j++)
        {
            c[j] = toupper(c[j]);
            if (c[j] == 'A' || c[j] == 'E' || c[j] == 'I' || c[j] == 'O' || c[j] == 'U' || c[j] == ' ')
            {
                a[j] = c[j];
            }
            else
            {
                a[j] = '_';
            }
        }

        j = 0;
        cout << "ENTER THE HINT RELATED TO WORD: ";
        char d[] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0','\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};

        while (1)
        {

            char ch = _getch();
            if (ch == 13)
            {
                break;
            }
            else if (ch == 8 && j > 0)
            {
                cout << "\b \b";
                j--;
            }
            else
            {
                d[j++] = ch;
                cout << "_";
            }
        }

        _getch();
        cout << "\n\n";
        t = pro.process_multiplayer(a, c, d, n, lives);

        p2 = p2 + t;

        cout << BLUE_FONT << "\tPLAYER 2's TURN TO GIVE WORD\n\n\t\t" << RESET_FONT;
        j = 0;

        while (1)
        {

            char ch = _getch();
            if (ch == 13)
            {
                break;
            }
            else if (ch == 8 && j > 0)
            {
                cout << "\b \b";
                j--;
            }
            else
            {
                c[j++] = ch;
                cout << "_";
            }
        }

        flag = 0;
        lives = 5;
        c[j] = '\0';
        _getch();
        n = strlen(c);
        cout << "\n\n\n\t\t";

        for (j = 0; j < n; j++)
        {
            c[j] = toupper(c[j]);
            if (c[j] == 'A' || c[j] == 'E' || c[j] == 'I' || c[j] == 'O' || c[j] == 'U' || c[j] == ' ')
            {
                a[j] = c[j];
            }
            else
            {
                a[j] = '_';
            }
        }

        j = 0;
        cout << "ENTER THE HINT RELATED TO WORD: ";
        char e[] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0','\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};

        while (1)
        {

            char ch = _getch();
            if (ch == 13)
            {
                break;
            }
            else if (ch == 8 && j > 0)
            {
                cout << "\b \b";
                j--;
            }
            else
            {
                e[j++] = ch;
                cout << "_";
            }
        }

        _getch();
        cout << "\n\n";
        t = pro.process_multiplayer(a, c, e, n, lives);

        p1 = p1 + t;

        cout << "\t\t SCORE:- Player1=" << p1 << " Player2=" << p2 << "\n\n";
    }

    if (p1 > p2)
    {
        cout << "\t\t PLAYER 1 WINS....\n\n";
    }

    if (p2 > p1)
    {
        cout << "\t\t PLAYER 2 WINS....\n\n";
    }

    if (p1 == p2)
    {
        cout << "\t\t SCORE IS TIED....\n\n";
    }

    break;
}

default:
{
    cout << "SORRY, YOU ENTERED WRONG CHOICE, ENTER A VALID NUMBER FOR GAME MODE\n\n";
    goto choice;
}
}

cout << RED_FONT << "\t\t    Do You Want to Play Again \n\n" << RESET_FONT;
cout << "\t\tType 'Y' for yes and 'N' for no \n\t\t\t\t";
cin >> play;

} while (play == 'Y' || play == 'y');

cout << "\n\t\t  THANK YOU FOR PLAYING......\n";
cout << "\n\t\t  HOPE YOU LIKED IT..........\n";
cout << "\n\t\t  HAVE A NICE DAY AHEAD  " << RED_FONT << " "<< heart <<" "<< heart<<"  \n\n\n" << RESET_FONT;

return 0;
}