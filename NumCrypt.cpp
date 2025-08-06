#include<iostream>
#include<conio.h>

using namespace std;

// Input Validation

bool inputIsValid ( string input , string charSet ) ;

// Encryption & Decryption

string encryptText ( string text, int base ) ;
string decryptText ( string text, int base ) ;

// Number Base Conversions

string fromDecimal ( string input , int base ) ;
string toDecimal ( string input , int base ) ;

// Helping Functions (To Completely Avoid Built-In Functions)

string intToString ( long long int integer ) ;
long long int stringToInt ( string str ) ;
string reverseString ( string str ) ;
int stringLength ( string str ) ;

int main()
{
    while(true)
    {
        system("cls");

        cout << "\n Select the task you want to perform.\n" ;
        cout << "\n 1. Encrypt Text" ;
        cout << "\n 2. Decrypt Text" ;
        cout << "\n 3. Convert Number Systems" ;
        cout << "\n 4. Exit Program\n";
        cout << "\n Enter your option: " ;

        string choice ;
        getline(cin,choice) ;

        if ( choice == "1" ) // Encryption 
        {
            system("cls");

            string text ;
            cout << "\n Enter a text message to encrypt: " ;
            getline(cin,text);

            cout << "\n Select the number system of encryption.\n" ;
            cout << "\n 1. Binary Number" ;
            cout << "\n 2. Octal Number" ;
            cout << "\n 3. Decimal Number" ;
            cout << "\n 4. Hexadecimal Number\n" ;
            cout << "\n Enter your option... " ;

            string subChoice ;
            getline(cin,subChoice);

            if ( subChoice == "1") // into Binary base
            {
                cout << "\n Encrypted in binary: " ;
                cout << encryptText ( text , 2 ) << "\n" ;                
            }
            else if ( subChoice == "2") // into Octal base
            {
                cout << "\n Encrypted in octal: " ;
                cout << encryptText ( text , 8 ) << "\n" ;                
            }
            else if ( subChoice == "3") // into Decimal base
            {
                cout << "\n Encrypted in decimal: " ;
                cout << encryptText ( text , 10 ) << "\n" ;                
            }
            else if ( subChoice == "4") // into Binary base
            {
                cout << "\n Encrypted in hexadecimal: " ;
                cout << encryptText ( text , 16 ) << "\n" ;                
            }
            else
            {
                cout << "\n Invlaid option selected.\n" ;
            }
            cout << "\n Press any key to return..." ;
            getch();
        }
        
        else if ( choice == "2" ) // Decryption 
        {
            system("cls");

            cout << "\n Enter the encrypted version of text: " ;
            string text ;
            getline(cin,text);

            cout << "\n Select the number system of encrypted text.\n" ;
            cout << "\n 1. Binary Number" ;
            cout << "\n 2. Octal Number" ;
            cout << "\n 3. Decimal Number" ;
            cout << "\n 4. Hexadecimal Number\n" ;
            cout << "\n Enter your option... " ;

            string subChoice ;
            getline(cin,subChoice);

            if ( subChoice == "1") // into Binary base
            {
                cout << "\n Decrypted text: " << decryptText ( text , 2 ) << "\n" ;
            }
            else if ( subChoice == "2") // into Octal base
            {
                cout << "\n Decrypted text: " << decryptText ( text , 8 ) << "\n" ;
            }
            else if ( subChoice == "3") // into Decimal base
            {
                cout << "\n Decrypted text: " << decryptText ( text , 10 ) << "\n" ;
            }
            else if ( subChoice == "4") // into Hexadecimal base
            {
                cout << "\n Decrypted text: " << decryptText ( text , 16 ) << "\n" ;
            }
            else
            {
                cout << "\n Invlaid option selected.\n" ;
            }
            cout << "\n Press any key to return..." ;
            getch();
        }
        
        else if ( choice == "3" ) // Number Base Conversion 
        {
            system("cls");
            
            cout << "\n Select the number system of input.\n" ;
            cout << "\n 1. Binary Number" ;
            cout << "\n 2. Octal Number" ;
            cout << "\n 3. Decimal Number" ;
            cout << "\n 4. Hexadecimal Number\n";
            cout << "\n Enter your option... " ;

            string subChoice ;
            getline(cin,subChoice);
            cout << endl ;

            if ( subChoice == "1") // from Binary base
            {
                string charSet = "01 " ;

                string input ;
                cout << " Enter a binary number: " ;
                getline(cin,input);

                if ( inputIsValid ( input, charSet ) )
                {
                    string dec = toDecimal ( input, 2 ) ;
                    string octal = fromDecimal ( dec, 8 ) ;
                    string hex = fromDecimal ( dec, 16 ) ;

                    cout << " In octal: " << octal << endl ;
                    cout << " In decimal: " << dec << endl ;
                    cout << " In hexadecimal: " << hex << endl ;
                }
                else
                {
                    cout << " Entered number is not a valid binary number.\n";
                }            
            }

            else if ( subChoice == "2") // from Octal base
            {
                string charSet = "01234567 " ;

                string input ;
                cout << " Enter a octal number: " ;
                getline(cin,input);

                if ( inputIsValid ( input, charSet ) )
                {
                    string dec = toDecimal ( input, 8 ) ;
                    string binary = fromDecimal ( dec, 2 ) ;
                    string hex = fromDecimal ( dec, 16 ) ;

                    cout << " In binary: " << binary << endl ;
                    cout << " In decimal: " << dec << endl ;
                    cout << " In hexadecimal: " << hex << endl ;
                }
                else
                {
                    cout << " Entered number is not a valid octal number.\n";
                }
            }

            else if ( subChoice == "3") // from Decimal base 
            {
                string charSet = "0123456789 " ;

                string input ;
                cout << " Enter a decimal number: " ;
                getline(cin,input);

                if ( inputIsValid ( input, charSet ) )
                {
                    string binary = fromDecimal ( input, 2 ) ;
                    string octal = fromDecimal ( input, 8 ) ;
                    string hex = fromDecimal ( input, 16 ) ;

                    cout << " In binary: " << binary << endl ;
                    cout << " In octal: " << octal << endl ;
                    cout << " In hexadecimal: " << hex << endl ;
                }
                else
                {
                    cout << " Entered number is not a valid decimal number.\n";
                }
            }

            else if ( subChoice == "4") // from Hexadecimal base 
            {
                string charSet = "0123456789ABCDEFabcdef " ;

                string input ;
                cout << " Enter a hexadecimal number: " ;
                getline(cin,input);

                if ( inputIsValid ( input, charSet ) )
                {
                    string dec = toDecimal ( input, 16 ) ;
                    string binary = fromDecimal ( dec, 2 ) ;
                    string octal = fromDecimal ( dec, 8 ) ;

                    cout << " In binary: " << binary << endl ;
                    cout << " In octal: " << octal << endl ;
                    cout << " In decimal: " << dec << endl ;
                    
                }
                else
                {
                    cout << " Entered number is not a valid decimal number.\n";
                }
            }
            cout << "\n Press any key to return..." ;
            getch();
        }

        else if ( choice == "4" ) // Exit Program 
        {
            cout << endl ;
            return 0 ;
        }
    }
}


// FUNCTIONS DEFINTIONS 

// ENCRYPTION
// To encrypt the given text's ASCII into specified base number  

string encryptText ( string text, int base )
{
    string textEncrypt = "";

    for (int i = 0; text[i] != '\0'; i++)
    {
        int chASCII = text[i];
        string strChASCII = intToString(chASCII);
        string chEncrypt = fromDecimal(strChASCII, base);
        textEncrypt = textEncrypt + chEncrypt + " ";
    }

    return textEncrypt;
}

// DECRYPTION
// To decrypt the given encrypted text of specified base number into original text

string decryptText ( string text, int base ) {

    string textDecrypt = "" ;
    string character = "" ;

    int charLimit = 0;
    if ( base == 2 )
    {
        charLimit = 8;
    }
    else if ( base == 8 )
    {
        charLimit = 3;
    }
    else if ( base == 10 )
    {
        charLimit = 3;
    }
    else if ( base == 16 )
    {
        charLimit = 2;
    }

    for (int i = 0; text[i] != '\0'; i++)
    {
        if ( text[i] != ' ')
        {
            character = character + text[i] ;
        }
        if ( stringLength(character) % charLimit == 0 ) 
        {
            string strChANSII = toDecimal(character, base);
            int chASCII = stringToInt(strChANSII);
            char chDecrypt = chASCII ;
            textDecrypt = textDecrypt + chDecrypt ;
            character = "";
        }
    }

    return textDecrypt ;
}


// Number Base Conversions

string fromDecimal ( string input, int base ) // To convert a decimal into any other base number
{
    string output = "" ;
    long long int dec = stringToInt (input) ;
    if ( dec == 0 )
    {
        output = "0" ;
    }
    else if ( dec < 0 )
    {
        output = "Output overflow! Input value is out of range." ;
    }
    while ( dec > 0 )
    {
        int rem = dec % base ;
        dec = dec / base ;
        if ( rem < 10 )
        {
            output = intToString(rem) + output ;
        }
        else if ( rem == 10 )
        {
            output = "A" + output ;
        }
        else if ( rem == 11 )
        {
            output = "B" + output ;
        }
        else if ( rem == 12 )
        {
            output = "C" + output ;
        }
        else if ( rem == 13 )
        {
            output = "D" + output ;
        }
        else if ( rem == 14 )
        {
            output = "E" + output ;
        }
        else if ( rem == 15 )
        {
            output = "F" + output ;
        }
    }
    
    // Padding leading zeros
    int minLength = 0; 
    if (base == 2)
    {
        minLength = 8;
    }
    else if (base == 8 || base == 10)
    {
        minLength = 3;
    }
    else if (base == 16)
    {
        minLength = 2;
    }
    while( stringLength(output) < minLength)
    {
        output = '0' + output;
    }
    return output ;
}

string toDecimal ( string input, int base ) // To convert any base number into decimal
{
    long long int dec = 0 ;

    long long int powValue = 1 ;

    int inputLength = stringLength(input) ;

    for ( int i = inputLength - 1 ; i >= 0 ; i = i - 1 ) 
    {
        int digit = 0 ;

        if ( input[i] >= '0' && input[i] <= '9' )
        {
            digit = input[i] - '0' ;
        }
        else if ( input[i] >= 'A' && input[i] <= 'F' )
        {
            digit = input[i] - ( 'A' - 10 ) ;
        }
        else if ( input[i] >= 'a' && input[i] <= 'f' )
        {
            digit = input[i] - ( 'a' - 10 ) ;
        }

        dec = dec + digit * powValue ;

        powValue = powValue * base ;
    }

    string result = intToString (dec) ;

    return result ;
}


// Helping Functions (To Completely Avoid Built-In Functions)

string intToString ( long long int integer ) // To convert integer value into numeric string
{
    string str ;

    if ( integer == 0 )
    {
        str = "0" ;
        return str ;
    }

    while (integer!=0)
    {
        int rem = integer % 10 ;
        integer = integer / 10 ;
        
        string temp = "0" ;
        temp[0] = '0' + rem ;
        str = temp + str ;
    }
    
    return str ;
}

long long int stringToInt ( string str ) // To convert numeric string into integer value
{
    long long int integer = 0 ;

    long long int power = 1 ;

    int strLength = stringLength (str) ;

    for (int i = strLength - 1 ; i >= 0 ; i--)
    {
        int digit = str[i] - '0' ;

        integer = integer + ( digit * power ) ;

        power = power * 10 ;
    }

    return integer ;    
}

string reverseString ( string str ) // To reverse the order / direction of characters of a string
{
    string result ;

    int strLength = stringLength(str) ;

    int x = strLength - 1 ;

    for (int i = 0; i < strLength; i++)
    {
        result[x] = str[i] ;
    }

    return result ;
}

int stringLength ( string str ) // To calculate the length of a string
{
    int count ;

    for (int i = 0; str[i] != '\0' ; i++)
    {
        count ++ ;
    }

    return count ;
}


//  Input Validation 

bool inputIsValid ( string input, string charSet ) // To check an input string against its character set 
{
    int inputLength = stringLength (input) ;
    
    int charSetLength = stringLength (charSet) ;
    
    bool result = true ;
    
    for ( int i = 0 ; i < inputLength ; i = i + 1 )
    {
        bool isValidChar = false ;
        
        for ( int j = 0 ; j < charSetLength ; j = j + 1 )
        {
            if ( input[i] == charSet[j] && input[i] != '\0' )
            {
                isValidChar = true ;
            }
        }
    
        if ( isValidChar == false )
        {
            result = false ;
        }
    }
    
    return result ;
}