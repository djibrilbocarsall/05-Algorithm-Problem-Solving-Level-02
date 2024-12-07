// cours 5(Algorithms & Problem-Solving Level 2).cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <cstdlib>
using namespace std;
   // exo 1
/*
void PrintHeaderTable()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
        cout << i << "\t";
    cout << "\n____________________________________________________________________________________________\n";
}
string espaceequalty(int i) {
    if (i < 10)
        return "  |";
    else
        return " |";

}
void PrintTableMultiplication() {
    PrintHeaderTable();

    for (int i = 1; i <= 10; i++) {
        cout <<  i << espaceequalty(i)<<"\t";
        for (int j = 1; j <= 10; j++)
            cout << i*j << "\t";
        cout << "\n";
    }
}
*/
   // exo 03
  // My
/*
enum enPrimeNotPrime { prime = 1, not_prime = 2 };
enum enPrefectNotPrefect{ prefect =1 , not_prefect =2};
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
enPrimeNotPrime ChoiseTypeNbr(int Nbr,int val) {
    int arret = Nbr / 2;
    for (int counter = val; counter <= arret; counter++) {
        if (Nbr % counter == 0)
            return enPrimeNotPrime::not_prime;
        else
            break;

    }
    return enPrimeNotPrime::prime;
}
int SumNbr(int Nbr)
{
    int sum = 0;
    for (int i = 1; i <= (Nbr / 2); i++) {
        if (ChoiseTypeNbr(Nbr, i) == enPrimeNotPrime::not_prime)
            sum += i;

    }
    return sum;

}
enPrefectNotPrefect CheckPrefectandNotPrefect(int Nbr) {
    if (Nbr == SumNbr(Nbr))
        return enPrefectNotPrefect::prefect;
    else
        return enPrefectNotPrefect::not_prefect;
}
void PrintRes(enPrefectNotPrefect TypeNbr,int Nbr) {
    switch (TypeNbr)
    {
    case prefect:
        cout << Nbr << " is Prefect" << endl;
        break;
    case not_prefect:
        cout << Nbr << " is Not-Prefect" << endl;
        break;
    }

}
*/
  // version-prof
  /*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
bool isNbrPrefect(int Nbr) {
    int sum = 0;
    for (int i = 1; i <= (Nbr / 2); i++) {
        if (Nbr % i == 0)
            sum += i;
    }
    return Nbr == sum;

}
void PrintRes(int Nbr) {
    if (isNbrPrefect(Nbr))
        cout << Nbr << " is Prefect " << endl;
    else
        cout << Nbr << " is Not Prefect" << endl;
}
 */
 // exo 04
   // My
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
bool isNbrPrefect(int Nbr) {
    int sum = 0;
    for (int i = 1; i <= (Nbr / 2); i++) {
        if (Nbr % i == 0)
            sum += i;
    }
    return Nbr == sum;

}
void PrintRes(int Nbr) {
    int sum = 0;
    for (int i = 1; i <= (Nbr); i++) {
            if (isNbrPrefect(i))
                cout << i << " is Prefect" << endl;
    }
    
}
  */



// exo 01
/*
void HederTable() {
    cout << "\n\n\t\t\t Multiplication Table from 1 to 10 \n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
        cout << i << "\t";
    cout << "\n___________________________________________________________________________________________\n";
    
}
string Esapaceequaluty(int i) {
    if (i < 10)
        return "  |";
    else
        return " |";
}
void PrintTable1To10() {
    HederTable();
    for (int i = 1; i <= 10; i++) {
        cout <<" " << i << Esapaceequaluty(i)<<"\t";
        for (int j = 1; j <= 10; j++)
            cout << i * j << "\t";
        cout << "\n";
    }
       
        
}
*/
// exo 02
/*
enum enPrimeNotPrime { prime = 1, not_prime = 2 };
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
enPrimeNotPrime CheckNbr(int Nbr) {
    int arret = Nbr / 2;
    for (int i = 2; i <= arret; i++) {
        if (Nbr % i == 0)
            return enPrimeNotPrime::not_prime;

    }
    return enPrimeNotPrime::prime;
}
void PrintNbrPrime(int Nbr) {
    for (int i = 1; i <= Nbr; i++) {
        if (CheckNbr(i) == enPrimeNotPrime::prime)
            cout << i << endl;

    }
}
*/
 // exo 03
  /*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
   }
bool isPrefectNbr(int Nbr) {
    int sum = 0;
    for (int i = 1; i <= (Nbr/2); i++) {
        if (Nbr % i == 0)
            sum += i;
    }
    return Nbr == sum;
}
void PrintRes(int Nbr) {
    if (isPrefectNbr(Nbr))
        cout << Nbr << " is Prefect ";
    else
        cout << Nbr << "is Not Prefect ";
}
  */
 // exo 04
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
bool isPrefectNbr(int Nbr) {
    int sum = 0;
    for (int i = 1; i <= (Nbr / 2); i++) {
        if (Nbr % i == 0)
            sum += i;
    }
    return Nbr == sum;
}
void PrintRes(int Nbr) {
    for (int i = 1; i <= Nbr; i++) {
        if (isPrefectNbr(i))
            cout << i<< " is Prefect "<<endl;
       
    }
    
}
   */
// exo 05
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
  }
void PrintReverseNbr(int Nbr) {
    int Remainder=0,sum=0 ;
    while (Nbr > 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        cout << Remainder << endl;
    }
    

}
*/
 // exo 06
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int SumReverseNbr(int Nbr) {
    int Remainder = 0, sum = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        sum += Remainder;
    }
    return sum;
}
void PrintSumReverseNbr(int Nbr) {
    cout <<"Sum of Digits = " << SumReverseNbr(Nbr);
}
*/
 // exo 07
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReverseNbr(int Nbr) {
    int Remainder = 0, Reverse = 0, counter =0;
    while (Nbr > 0) {
        Remainder = Nbr % 10;
        Reverse = (Reverse * 10) + Remainder; 
        Nbr = Nbr / 10;
        if (Reverse == Remainder) {
            counter++;

        }
    }
    return Reverse;
}
void PrintReverseNbr(int Nbr) {
    cout << "Reverse is" << endl;
    cout << ReverseNbr(Nbr);
}
*/
  // exo 08
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReverseNbr(int Nbr, int Nbr_search) {
    int Remainder = 0, counter = 0;
    while (Nbr > 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        if (Nbr_search == Remainder)
            counter++;
    }
    return counter;
}
*/
// exo 09
 /*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReverseNbr(int Nbr, int Nbr_search) {
    int Remainder = 0, counter = 0;
    while (Nbr > 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        if (Nbr_search == Remainder)
            counter++;
    }
    return counter;
}
void RepeteNbr(int Nbr) {
    int DigtDocker = 0;
    for(int i=0;i<10;i++){
        DigtDocker = ReverseNbr(Nbr, i);
        if (DigtDocker > 0)
            cout << "Dijits " << i << "frequency is " << DigtDocker << " Time(s) "<<endl;

   }
        

}
  */
  // exo 10
    /*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReverseNbr(int Nbr) {
    int Remainder = 0, Reverse = 0, counter = 0;
    while (Nbr > 0) {
        Remainder = Nbr % 10;
        Reverse = (Reverse * 10) + Remainder;
        Nbr = Nbr / 10;
        if (Reverse == Remainder) {
            counter++;

        }
    }
    return Reverse;
}
void PrintDigits(int Nbr) {
    int Remainder = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        cout << Remainder << endl;
    }
}
  */
  // exo 11
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReverseNbr(int Nbr) {
    int Remainder = 0, Reverse = 0, counter = 0;
    while (Nbr > 0) {
        Remainder = Nbr % 10;
        Reverse = (Reverse * 10) + Remainder;
        Nbr = Nbr / 10;
        if (Reverse == Remainder) {
            counter++;

        }
    }
    return Reverse;
}
bool PrintRes(int Nbr) {
    return Nbr == ReverseNbr(Nbr);    
}
*/
 // exo 12
/*
 int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
 void BoucleNbr(int Nbr) {
     for (int i = Nbr; i >= 1; i--) {
         for (int j = 1; j <= i; j++)
             cout << i;
         cout << endl;
     }
}
*/
  // exo 13
  /*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
void BoucleNbr(int Nbr) {
    for (int i = 1; i <= Nbr; i++) {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}
  */
 // exo 14
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
void BoucleNbr(int Nbr) {
    for (int i = 65 + Nbr - 1; i >= 65; i--) {
        for (int j = 1; j <= Nbr - (65 + Nbr - 1 - i); j++) {
            cout << char(i);
        }
        cout << endl;
   }
}
*/
 // exo 15
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
void BoucleNbr(int Nbr) {
    for (int i = 65; i < 65 + Nbr; i++) {
        for (int j = 1; j <= i-65+1; j++)
            cout << char(i);
         cout << endl;
   }
}
*/
 // exo 16
  /*
void BoucleNbr()
{
    string word = "";
    for (int i = 65; i <= 90; i++) {
        for (int j=65; j <= 90; j++) {
            for (int z=65; z <= 90; z++) {

            //    cout << char(i) << char(j) << char(z) << endl;
                word = word + char(i);
                word = word + char(j);
                word = word + char(z);

                cout << word << endl;
                word = "";
            }
        }
    }
}
  
  */
  // exo 17
/*
string ReadPassword(string Message) {
    string password = "";
        cout << Message << endl;
        cin >> password;
    return password;
}
bool BoucleNbr(string OrginalPassword)
{
    string word = "";
    int counter = 1;

    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int z = 65; z <= 90; z++) {

                //    cout << char(i) << char(j) << char(z) << endl;
                word = word + char(i);
                word = word + char(j);
                word = word + char(z);

                cout << "Trial[" << counter << "] : " << word << endl;

                if (word == OrginalPassword) {
                    cout << "Password is " << OrginalPassword << endl;
                    cout << "Found After is " << counter << "Trial(s)";
                    return true;
                }

               
                word = "";
            }
        }
    }
    return false;
}
*/

// Revision Semain 01
   // exo 01
/*
void HeaderTable()
{
    cout <<"\n\n\t\t\t Multiplication Table from 1 to 10 \n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
        cout << i << "\t";
    cout << "\n____________________________________________________________________________________________\n";
 
   }
string equaltytext(int i) {
    if (i < 10)
        return "  |";
    else
        return " |";
}
void BodyTable()
{
    HeaderTable();
    for (int i = 1; i <= 10; i++) {
        cout <<"  " << i << equaltytext(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
     }
}
*/
  // exo 02
  /*
enum enTypeNbr { prime = 1, not_prime = 2 };
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
enTypeNbr CheckNbr(int Nbr) {
    int arret = Nbr / 2;
    for (int i = 2; i <= arret; i++) {
        if (Nbr % i == 0)
            return enTypeNbr::not_prime;

    }
    return enTypeNbr::prime;
}
void TypeNbr(int Nbr) {
    for (int i = 1; i <= Nbr; i++) {
        if (CheckNbr(i) == enTypeNbr::prime)
            cout << i << endl;
    }
}
 */
   // exo 03
/*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
bool sumNbr(int Nbr) {
    int stop = Nbr / 2;
    int sum = 0;
    for (int i = 1; i <= stop; i++) {
        if (Nbr % i == 0)
            sum += i;

    }
    return Nbr==sum;

}
void PrintRes(int Nbr) {
    if (sumNbr(Nbr))
        cout << Nbr << " is Prefect" << endl;
    else
        cout << Nbr << " is Not-Prefect" << endl;

}
 */
 // exo 04
  /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
bool isPrefectNbr(int Nbr) {
   
    int sum = 0;
    for (int i = 1; i < Nbr; i++) {
        if (Nbr % i == 0)
            sum += i;

    }
    return Nbr == sum;

}
void PrintNbrPrefect(int Nbr) {
    for (int i = 1; i <= Nbr; i++) {
        if (isPrefectNbr(i))
            cout << i << " Prefect Number" << endl;
    }
        
}
*/
  // exo 05
/*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
void PrintDigitsNbr(int Nbr) {
    int Remainder = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        cout << Remainder << endl;
    }
}
*/
   // exo 06
  /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
int SumDigitsNbr(int Nbr) {
    int sum = 0;
    int Remainder = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        sum += Remainder;
    }
    return sum;
}
   */
   // exo 07
 /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
int ReverseDigitsNbr(int Nbr) {
    
    int Remainder = 0,Reverse=0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Reverse = (Reverse*10) + Remainder;
        Nbr = Nbr / 10;
        
    }
    return Reverse;
}
  */
 // exo 09
  /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
int  NbrCounterofDigits(int Nbr,int Digitcook) {

    int Remainder = 0, counter = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        if (Remainder == Digitcook)
            counter++;
            

    }
    return counter;
}
void PrintNbrofDigits(int Nbr)
{
    for (int i = 0; i < 10; i++) {
        if (NbrCounterofDigits(Nbr, i) > 0)
            cout << "Digit " << i << " Frequency is " << NbrCounterofDigits(Nbr, i) << " Time(s)" << endl;
    }
}
  */
  // exo 10
/*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
int ReverseDigitsNbr(int Nbr) {

    int Remainder = 0, Reverse = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Reverse = (Reverse * 10) + Remainder;
        Nbr = Nbr / 10;

    }
    return Reverse;
}
void PrintReverseDigitsNbr(int Nbr) {
    int Remainder = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Nbr = Nbr / 10;
        cout << Remainder << endl;
    }
}
 */
    // exo 11
  /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
int ReverseDigitsNbr(int Nbr) {

    int Remainder = 0, Reverse = 0;
    while (Nbr != 0) {
        Remainder = Nbr % 10;
        Reverse = (Reverse * 10) + Remainder;
        Nbr = Nbr / 10;

    }
    return Reverse;
}
bool CheckValType(int Nbr) {
    return Nbr == ReverseDigitsNbr(Nbr);
}
  */
  // exo 12
 /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
void PrintPatternNbr(int Nbr) {
    for (int i = Nbr; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}
 */
   // exo 13
/*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
void PrintPatternNbr(int Nbr) {
    for (int i = 1; i <= Nbr; i++) {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}
*/
  // exo 14
 /*
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);

    return nbr;
}
void PrintPatternNbr(int Nbr) {
    for (int i = 65+Nbr-1; i >= 65; i--) {
        for (int j = 1; j <= Nbr-(65+Nbr-1-i); j++)
            cout << char(i);
        cout << endl;
    }
}
  */
  // exo 16
  /*
void PrintPatternAAAtoZZZ() {
    string word= "";
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int z = 65; z <= 90; z++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(z);

                cout << word << endl;

                word = "";
            }
        }
    }
}
   */
  // exo 17
/*
string ReadPassword(string Message) {
    string nbr;
    
        cout << Message << endl;
        cin >> nbr;
    

    return nbr;
}
bool PrintPatternAAAtoZZZ(string orginalPassword) {
    string word = "";
    int counter = 1;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int z = 65; z <= 90; z++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(z);

                cout <<"Trial["<<counter<<"] : " << word << endl;
                if (word == orginalPassword) {
                    cout << "passWord is " << word << endl;
                    cout << "found after " << counter << " Trial(s)" << endl;
                    return 1;
                }


                word = "";
                counter++;
            }
        }
    }
    return 0;
}
  */
   // exo 18   
/*
string ReadText(string Message) {
    string Text;

    cout << Message << endl;
    cin >> Text;


    return Text;
}
string Encrypttext(string Text, short EncryptionKey) {
    for (int i = 0; i <= Text.length(); i++)
        Text[i] = ((int)Text[i] + EncryptionKey);
    return Text;
}
string Decrypttext(string EncryptText, short EncryptionKey) {
    for (int i = 0; i <= EncryptText.length(); i++)
        EncryptText[i] = char( (int)EncryptText[i] - EncryptionKey);
    return EncryptText;
}
*/
   // exo 20
/*
int ReadNum(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
enum enTypeChar{SmallLetter=1,CapitalLetter=2,SpecialChar=3,Digit=4};
char Randonchar(enTypeChar TypeChar) {
    switch (TypeChar)
    {
    case SmallLetter:
        return char(ReadNum(97, 122));
        break;
    case CapitalLetter:
        return char(ReadNum(65,90));
        break;
    case SpecialChar:
        return char(ReadNum(33, 47));
        break;
    case Digit:
        return char(ReadNum(49, 57));
        break;
    
    }

}
*/
 // exo 21
  /*
int RandomOfNbr(int from, int to) {
    int RandomofNbr;
    RandomofNbr = rand() % (to - from + 1) + from;
    return RandomofNbr;
}
enum enTypeChar { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };
char Randomchar(enTypeChar TypeChar) {
    switch (TypeChar)
    {
    case SmallLetter:
        return char(RandomOfNbr(97, 122));
        break;
    case CapitalLetter:
        return char(RandomOfNbr(65, 90));
        break;
    case SpecialChar:
        return char(RandomOfNbr(33, 47));
        break;
    case Digit:
        return char(RandomOfNbr(49, 57));
        break;

    }

}
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}

string RandomOfWord(enTypeChar TypeChar, int length)
{
    string Word = "";
    for (int i = 1; i <= length; i++) 
        Word = Word + char(Randomchar(TypeChar));
    return Word;
    

}
string RandomOfKey() {
    string Key = "";

    Key = RandomOfWord(enTypeChar::CapitalLetter, 4) + "-";
    Key += RandomOfWord(enTypeChar::CapitalLetter, 4) + "-";
    Key += RandomOfWord(enTypeChar::CapitalLetter, 4) + "-";
    Key += RandomOfWord(enTypeChar::CapitalLetter, 4) ;

    return Key;

}
void RandomOfkeys(int NbrOfKeys) {
    for (int i = 1; i <= NbrOfKeys; i++)
        cout << "Key[" << i << "] : " << RandomOfKey() << endl;
}
  */
  // exo 22
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
void ReadArray(int arr[100], int &arrLength) {
    cout << "Entrer Array Element : " << endl;
    for (int i = 0; i <= arrLength - 1; i++) {
        cout << "Element [" << i + 1 << "] = ";
        cin >> arr[i];
    }
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i <= arrLength - 1; i++)
        cout << arr[i] << "  ";
       
    
}
int NbrOfCounterDigits(int arr[100], int Nbr, int arrLength) {
    int counter = 0;
    for (int i = 0; i <= arrLength - 1; i++) {
        if (Nbr == arr[i])
            counter++;
    }
    return counter;
}
*/
    // exo 23
/*
int ReadNbrOfRandom(int from,int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
int ReadNbr(string Message) {
    int NbrOfRandom;
    do {
        cout << Message <<  endl;
        cin >> NbrOfRandom;

    } while (NbrOfRandom <= 0);
    return NbrOfRandom;
}
void PrintArr(int arr[100], int& arrlength) {
    cout << "Array Elements : ";
    for (int i = 0; i < arrlength; i++)
        cout << ReadNbrOfRandom(1, 100)<<"  ";
    

    
}
*/
 // exo 24
/*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void  fillArraRandomNumber(int arr[100],int &arrlength) {
      
        cout << "Read Nbr of length : " << endl;
        cin >> arrlength;
        for (int i = 0; i < arrlength; i++) 
            arr[i] = ReadNbrOfRandom(1, 100);


    
}
void PrintArr(int arr[100], int& arrlength) {
    for (int i = 0; i < arrlength; i++) 
        cout << arr[i] << "  ";
    
}
int MaxNumber(int arr[100], int arrlength) {
        int Max = arr[0];
        for (int i = 0; i < arrlength; i++) {
            if (Max < arr[i])
                Max = arr[i];
        }
       
        return Max;
    }
    */
  // exo 25
/*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
void PrintArr(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";
}
int MinNumber(int arr[100], int arrlength) {
    int Min = arr[0];
    for (int i = 0; i < arrlength; i++) {
        if (Min > arr[i])
            Min = arr[i];
    }
    return Min;
}
*/
 // exo 26
/*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
void PrintArr(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";
}
int SumNumber(int arr[100], int arrlength) {
    int sum = 0;
    for (int i = 0; i < arrlength; i++)
        sum += arr[i];
       
    
    return sum;
}
*/
 // exo 27
/*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
void PrintArr(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";
}
int SumNumber(int arr[100], int arrlength) {
    int sum = 0;

    for (int i = 0; i < arrlength; i++)
        sum += arr[i];


    return sum;
}
float AvgNbr(int arr[100],int arrlength) {
    return (float)SumNumber(arr, arrlength) / arrlength;
}
  */
 // exo 28
 /*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++) 
        arr[i] = ReadNbrOfRandom(1, 100);
        
    
                 
}

void CopyArr(int arrsource[100], int arrDestination[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        arrDestination[i] = arrsource[i];

}

void PrintArr(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";
}
 */
 // exo 29
/*
enum enTypeNbr { prime = 1, not_prime = 2 };
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
enTypeNbr CheckNbr(int Nbr) {
    int arret = Nbr / 2;
    for (int i = 2; i <= Nbr; i++) {
        if (Nbr % i == 0)
            return enTypeNbr::not_prime;

    }
    return enTypeNbr::prime;
}
void CopyOnlyPrimeArr(int arrsource[100], int arrlengthsource, int arrDestination[100],int arrlengthDestination) {
    int counter = 0;
    for (int i = 0; i < arrlengthsource; i++) {
        if (CheckNbr(arrsource[i]) == enTypeNbr::prime) {
            arrDestination[counter] = arrsource[i];
            counter++;

        }
    }

    arrlengthDestination = --counter;

}

void PrintArr(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";
}
*/
// exo 30
/*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
   
}

void CopyArray(int arr01[100],int arr02[100], int arrlength) {
    cout << "Array 1 elements : " << endl;
    for (int i = 0; i < arrlength; i++) {
        arr01[i] = ReadNbrOfRandom(1, 100);
        cout << arr01[i]<<"  ";
    }
    cout << endl;
    cout << "Array 2 elements : " << endl;
    for (int i = 0; i < arrlength; i++) {
        arr02[i] = ReadNbrOfRandom(1, 100);
        cout << arr02[i]<<"  ";
    }

}
void sumArray(int arr01[100], int arr02[100], int arrlength) {
    cout << endl;
    cout << "Sum of Array 1 and Array 2 elements : " << endl;
    int sum = 0;
    for (int i = 0; i < arrlength; i++) {
        sum = arr01[i] + arr02[i];
        cout << sum << "  ";
        sum = 0;

    }
}
*/
  





// exo 28 
/*
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);

}
void CopyRandomNbr(int arrlength, int arraysource[100], int arrimplements[100]) {
    for (int i = 0; i < arrlength; i++) {
        arrimplements[i] = arraysource[i];
    }
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "  ";
    }
}
*/
// exo 29
  /*
enum enTypeNbr { prime = 1, not_prime = 2 };
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
enTypeNbr CheckNbr(int Nbr) {
    int arret = Nbr / 2;
    for (int i = 2; i <= arret; i++) {
        if (Nbr % i == 0)
            return enTypeNbr::not_prime;

    }
    return enTypeNbr::prime;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);

}
void sumRandomNbr(int arrlength, int arrsum[100], int arraysource[100], int arrimplements[100]) {
     for(int i=0;i<arrlength;i++)
         arrsum[i]  = arraysource[i] + arrimplements[i];    
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "  ";
    }
}
 */
 // exo 30
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void SwapNbr(int& n1, int& n2)
{
    int n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;


}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    for (int i = 0; i < arrlength; i++)
        arr[i] = i;

}
void fillArrRandom1ToN(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        SwapNbr(arr[ReadNbrOfRandom(1, arrlength) - 1], arr[ReadNbrOfRandom(1, arrlength) - 1]);

}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "  ";
    }
}
*/
 // exo 31
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    arrlength = ReadNbr("Read Random Nbr : ");
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);

}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << "  ";
    }
}
void fillArraRandomNbrReverse(int arrSource[100], int arrDestination[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        arrDestination[i] = arrSource[arrlength - 1 - i];
}
*/
// exo 33
/*
int ReadNum(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
int RandomOfNbr(int from, int to) {
    int RandomofNbr;
    RandomofNbr = rand() % (to - from + 1) + from;
    return RandomofNbr;
}
enum enTypeChar { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };
char Randomchar(enTypeChar TypeChar) {
    switch (TypeChar)
    {
    case SmallLetter:
        return char(RandomOfNbr(97, 122));
        break;
    case CapitalLetter:
        return char(RandomOfNbr(65, 90));
        break;
    case SpecialChar:
        return char(RandomOfNbr(33, 47));
        break;
    case Digit:
        return char(RandomOfNbr(49, 57));
        break;

    }

}
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}

string RandomOfWord(enTypeChar TypeChar, int length)
{
    string Word = "";
    for (int i = 1; i <= length; i++)
        Word = Word + char(Randomchar(TypeChar));
    return Word;


}
string RandomOfKey() {
    string Key = "";

    Key = RandomOfWord(enTypeChar::CapitalLetter, 4) + "-";
    Key += RandomOfWord(enTypeChar::CapitalLetter, 4) + "-";
    Key += RandomOfWord(enTypeChar::CapitalLetter, 4) + "-";
    Key += RandomOfWord(enTypeChar::CapitalLetter, 4);

    return Key;

}
void ArrayRandomOfkeys(string arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        arr[i] = RandomOfKey();
}
void printStringArray(string  arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) 
        cout << "Array [" << i << "] : " << arr[i] << endl;
    
}
*/
 // exo 34
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);

}
int FindNbrpositionInArray(int arr[100], int Nbrsearch, int arrlength) {
    int position = -1;
    for (int i = 0; i < arrlength; i++) {
        if (Nbrsearch == arr[i])
            position = i;

    }
    return position;
}
bool CheckNbrInArray(int arr[100], int arrlength, int searchNbr) {
    return FindNbrpositionInArray(arr, searchNbr, arrlength) != -1;
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) 
        cout << arr[i] << "  ";
    
}
*/
// exo 36
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrPositiv(string Message, int From, int To) {
    int NbrofDay;
    do {
        cout << Message ;
        cin >> NbrofDay;
    } while ( NbrofDay  < From || NbrofDay > To);
    return NbrofDay;
}
void AddArray(int arr[100], int &arrlength, int Nbr) {
    arrlength++;
    arr[arrlength - 1] = Nbr;
}
void CheckNbr(int arr[100], int &arrlength) {
    bool Desid = true;
    do {
        AddArray(arr, arrlength, ReadNbr("Please read numbers ? "));
        cout << "[0]:No,[1]:Yes" << endl;
        cin >> Desid;


    } while (Desid);
    
}



void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout <<"Array elements : " << arr[i] << "  ";

}
*/
// exo 37
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
void AddArray(int arr[100], int& arrlength, int Nbr) {
    arrlength++;
    arr[arrlength - 1] = Nbr;
}
void AddArrayElements(int arrsource[100], int arrlength, int arrDestination[100], int& arrDestinationlength) {
    for (int i = 0; i < arrlength; i++)
        AddArray(arrDestination, arrDestinationlength, arrsource[i]);
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
// exo 38
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
void AddArray(int arr[100], int& arrlength, int Nbr) {
    arrlength++;
    arr[arrlength - 1] = Nbr;
}
void AddArrayElements(int arrsource[100], int arrlength, int arrDestination[100], int& arrDestinationlength) {
    for (int i = 0; i < arrlength; i++)
       if(arrsource[i] % 2 != 0)
        AddArray(arrDestination, arrDestinationlength, arrsource[i]);
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
// exo 39
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
void AddArray(int arr[100], int& arrlength, int Nbr) {
    arrlength++;
    arr[arrlength - 1] = Nbr;
}
void CopyoddArrayElements(int arrsource[100], int arrlength, int arrDestination[100], int& arrDestinationlength) {
    for (int i = 0; i < arrlength; i++)
        if(arrsource[i] % 2 == 0)
         AddArray(arrDestination, arrDestinationlength, arrsource[i]);
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
void fillArrNumber(int arr[100], int& arrlength) {
    arrlength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;

}
*/
// exo 40
/*
void fillArrNumber(int arr[100], int& arrlength) {
    arrlength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;

}
int FindNbrpositionInArray(int arr[100], int Nbrsearch, int arrlength) {
    int position = -1;
    for (int i = 0; i < arrlength; i++) {
        if (Nbrsearch == arr[i])
            position = i;

    }
    return position;
}
bool CheckNbrInArray(int arr[100], int arrlength, int searchNbr) {
    return FindNbrpositionInArray(arr, searchNbr, arrlength) != -1;
}
void AddArray(int arr[100], int& arrlength, int Nbr) {
    arrlength++;
    arr[arrlength - 1] = Nbr;
}
void CopyArrNumbers(int arrsourcelength,int &arrDestinationlength,int arrsource[100],int arrDestination[100]) {
    for (int i = 0; i < arrsourcelength; i++) {
        if (!CheckNbrInArray(arrDestination, arrDestinationlength, arrsource[i]))
            AddArray(arrDestination, arrDestinationlength, arrsource[i]);
    }

}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
// exo 41
/*
void fillArrNumber(int arr[100], int& arrlength) {
    arrlength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
    

}
bool isPalindromeNbr(int arr[100], int arrength) {
    for (int i = 0; i < arrength; i++) {
        if (arr[i] != arr[arrength - i-1])
            return false;
    }
    return true;
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
 // exo 42
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(1, 100);
}
int oddCountNbr(int arr[100], int arrlength) {
    int count = 0;
    for (int i = 0; i < arrlength; i++) {
        if (arr[i] % 2 != 0)
            count++;

    }
    return count;
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
// exo 43
/*


*/
 // exo 44
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(-100, 100);
}
int PositivCountNbr(int arr[100], int arrlength) {
    int count = 0;
    for (int i = 0; i < arrlength; i++) {
        if (arr[i]  > 0 )
            count++;

    }
    return count;
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
// exo 45
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
void fillArraRandomNumber(int arr[100], int& arrlength) {
    cout << "Read length Array : " << endl;
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
        arr[i] = ReadNbrOfRandom(-100, 100);
}
int NegativCountNbr(int arr[100], int arrlength) {
    int count = 0;
    for (int i = 0; i < arrlength; i++) {
        if (arr[i] < 0)
            count++;

    }
    return count;
}
void printArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++)
        cout << arr[i] << "  ";

}
*/
// exo 46
/*
float ReadNbr() {
    float Nbr;
    cout << "Read Nbr : " << endl;
    cin >> Nbr;
    return Nbr;
}

*/
 // exo 47
/*
float ReadNbr() {
    float Nbr;
    cout << "Read Nbr : " << endl;
    cin >> Nbr;
    return Nbr;
}
float GetFractionNbr(float Nbr) {
    return Nbr - (int)Nbr;
}
float MyAbsResult(float Nbr) {
    if (Nbr < 0)
        return Nbr * (-1);
    else
        return Nbr;
}
int MyRound(float Nbr) {
    
    // recuperer la partie entier
    int IntFractionNbr = Nbr;
    // recuperrer la partie decimal
    float FractionNbr = GetFractionNbr(Nbr);

    if (MyAbsResult(FractionNbr) >= .5) {
        if (Nbr > 0)
            return ++IntFractionNbr;
        else
            return --IntFractionNbr;
    }
    else
        return IntFractionNbr;
       
}
*/
// exo 48
/*
float ReadNbr() {
    float Nbr;
    cout << "Read Nbr : " << endl;
    cin >> Nbr;
    return Nbr;
}

int MyFloor(float Nbr) {

    // recuperer la partie entier
    int IntFractionNbr = Nbr;

    if (Nbr > 0) 
        return IntFractionNbr;
    else
        return --IntFractionNbr;

}
*/
// exo 49
/*
float ReadNbr() {
    float Nbr;
    cout << "Read Nbr : " << endl;
    cin >> Nbr;
    return Nbr;
}
float GetFractionNbr(float Nbr) {
    return Nbr - (int)Nbr;
}
float MyAbsResult(float Nbr) {
    if (Nbr < 0)
        return Nbr * (-1);
    else
        return Nbr;
}
int MyCeil(float Nbr) {

    // recuperer la partie entier
    int IntFractionNbr = Nbr;
    // recuperer la parie decimal
    float FractionNbr = GetFractionNbr(Nbr);

    if (MyAbsResult(FractionNbr) > 0) {
        if (Nbr > 0)
            return ++IntFractionNbr;
        else
            return IntFractionNbr;
    }
    else
        return IntFractionNbr;
}
*/
 // exo 50
/*
int ReadNbr(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
}
int Mysqrt(int Nbr) {
    return pow(Nbr, 0.5);
}
*/

  //  Projet 01 (My)
/*
struct strinfoGame {
    int Game_Rounds =0 ;
    int Players_won_times =0;
    int Computer_won_times =0;
    int Draw_times =0;
    string Final_Winner;
};
enum Type_Choise { stone=1,Paper=2,Sicssor=3};
enum Res{g=1,p=2,nul=0};
// 1- Demander Nombre de tour 
int ReadNbr(string Message,int from,int to) {
    unsigned short Nbr_repetisions;
    do {
        cout << Message<<endl;
        cin >> Nbr_repetisions;
    } while (Nbr_repetisions <= 0 || Nbr_repetisions < from || Nbr_repetisions > to);
    return Nbr_repetisions;
   }
char ReadNbrfornChar(string Message) {
    char Nbr_repetisions;
        cout << Message << endl;
        cin >> Nbr_repetisions;
    return Nbr_repetisions;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
// 2 - Choisir
int ChoiseRounds(int Round) {
    Round = ReadNbr("How Many Rounds 1 to 10 ? ", 1, 10);
    return Round;
}
int ChoiseMy(int &My) {
    My = ReadNbr("Your choice : [1]: Stone, [2]: Paper, [3]:Scissors ?",1,3);
    return My;
}
int ChoiseCoomputer(int& Computer) {
    Computer = ReadNbrOfRandom(1, 3);
    return Computer;

}

// 3 - Montrer le   Res chaque Round
Type_Choise Res_TypeChoise(int Choise_Nbr) {
    switch (Choise_Nbr)
    {
    case 1 :
        return Type_Choise::stone;
    case 2:
        return Type_Choise::Paper;
    case 3:
        return Type_Choise::Sicssor;
    
    }


}
string Res_TypeChoise_str(Type_Choise choise) {
    switch (choise)
    {
    case stone:
        return "Stone";
    case Paper:
        return "Paper";
    case Sicssor:
        return "Sicssor";
    }
}
Res Res_RoundGame(string My_str, string computer_str) {
    if ((My_str == Res_TypeChoise_str(Res_TypeChoise(2))) && (computer_str == Res_TypeChoise_str(Res_TypeChoise(1))))
        return Res::g;
    else if ((My_str == Res_TypeChoise_str(Res_TypeChoise(1))) && (computer_str == Res_TypeChoise_str(Res_TypeChoise(3))))
        return Res::g;
    else if ((My_str == Res_TypeChoise_str(Res_TypeChoise(3))) && (computer_str == Res_TypeChoise_str(Res_TypeChoise(2))))
        return Res::g;
    else if ((computer_str == Res_TypeChoise_str(Res_TypeChoise(2))) && (My_str == Res_TypeChoise_str(Res_TypeChoise(1))))
        return Res::p;
    else if ((computer_str == Res_TypeChoise_str(Res_TypeChoise(1))) && (My_str == Res_TypeChoise_str(Res_TypeChoise(3))))
        return Res::p;
    else if ((computer_str == Res_TypeChoise_str(Res_TypeChoise(3))) && (My_str == Res_TypeChoise_str(Res_TypeChoise(2))))
        return Res::p;
    else
        return Res::nul;

}
string Res_RoundGame_str(Res Res_Round) {
    switch (Res_Round)
    {
    case g:
        return "[Player1]";
    case p:
        return "[Computer]";
    case nul:
        return "[No Winner]";
    }
}
void Color_Res(Res Res_Round) {
    switch (Res_Round)
    {
    case g:
        system("color 2f");
        break;
    case p:
        system("color 4f");
        break;
    case nul:
        system("color 6f");
        break;
    
    }
}
void ChoiseMyandComputer(int &Round,int& My, int& Computer,string &My_str,string &Computer_str) {
   
    cout << "Round [" << Round + 1 << "] begins : " << endl;
    My_str = Res_TypeChoise_str(Res_TypeChoise(ChoiseMy(My)));
    Computer_str = Res_TypeChoise_str(Res_TypeChoise(ChoiseCoomputer(Computer)));

}
void DesignRes_RoundGame02(int& Round,int& My, int& Computer,string My_str,string Computer_str) {

    cout << "Player 1 choise : " << My_str << endl;
    cout << "Computer choise : " << Computer_str << endl;
    cout << "Round winer : " << Res_RoundGame_str(Res_RoundGame(My_str, Computer_str)) << endl;
    

}
void DesignRes_RoundGame01(int& Round, int& My, int& Computer, strinfoGame &info) {
    
    string My_str;
    string Computer_str;
    
    info.Game_Rounds ++;
    ChoiseMyandComputer(Round, My, Computer, My_str, Computer_str);
    Color_Res(Res_RoundGame(My_str, Computer_str));
    cout << "__________________Round[" << Round+1 << "]__________________" << endl;
    DesignRes_RoundGame02(Round,My, Computer,My_str,Computer_str);
    // condition pour res_GameOver
    if (Res_RoundGame(My_str, Computer_str) == Res::g)
        info.Players_won_times++;
    else if (Res_RoundGame(My_str, Computer_str) == Res::p)
        info.Computer_won_times++;
    else
        info.Draw_times = info.Draw_times++;
    // condition 


    cout << "____________________________________________" << endl;
    cout << endl;
    cout << endl;

}
// 4 - Montrer le Res a round Final 
string infofinalWinner(strinfoGame info) {
    if (info.Computer_won_times > info.Players_won_times)
        return "Computer";
    else if (info.Computer_won_times < info.Players_won_times)
        return "Players1";
    else
        return "No Winner";


   
}
void PrinInfo(strinfoGame info) {
    cout << "\n\tGame Rounds               : " << info.Game_Rounds << endl;
    cout << "\tPlayers1 won times        : " << info.Players_won_times << endl;
    cout << "\tComputer won times        : " << info.Computer_won_times << endl;
    cout << "\tDrawer won times          : " << info.Draw_times << endl;
    cout << "\tfinal Winner              : " << infofinalWinner(info) << endl;
    cout << "\n";

}

void  Design_Gameover(strinfoGame info) {
    
    cout << "\t----------------------------------------------------"<<endl;
    cout << "\t\t+++G a m e O v e r +++\t" << endl;
    cout << "\t----------------------------------------------------" << endl;
    cout << "\t________________ [Game Results ] ______________________" << endl;
    PrinInfo(info);
    cout << "\t-------------------------------------------------------" << endl;




}
// 4 - Res Final

void Game(int Round, int My, int Computer, strinfoGame &info) {
        for (int i = 0; i < Round; i++)
            DesignRes_RoundGame01(i, My, Computer, info);
        Design_Gameover(info);
    
}
// dunc principal
void starGame() {
    char rep = 'N';
    do {
        int Round = 0;
        int Computer = 0;
        int My = 0;
        strinfoGame info;
        Game(ChoiseRounds(Round), ChoiseMy(My), ChoiseCoomputer(Computer), info);
        rep = ReadNbrfornChar("Do you want to play again ? Y/N? ");
    } while (rep != 'Y');
}



*/

 // projet 01(Prof)
/*
enum enGameChoice{stone=1,paper=2,scissor=3};
enum enWinner{player=1,computer=2,draw=3};
struct stinfoGame {
    int GameRound = 0;
    enGameChoice player1_Choice;
    enGameChoice computer_Choice;
    enWinner winner;
    string NameWinner;
};
struct stGameRes {
    short GameRound = 0;
    short player1_Winner = 0;
    short computer_Winner = 0;
    short draw_Winner = 0;
    enWinner final_Winner;
    string final_Winner_str = "";

};
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
enGameChoice Player1Choice() {
    short player_Choice;
    do {
        cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ";
        cin >> player_Choice;
    } while (player_Choice < 1 || player_Choice > 3);
    return (enGameChoice)player_Choice;
}
enGameChoice ComputerChoice() {
    return (enGameChoice)ReadNbrOfRandom(1, 3);
}
enWinner whowoWinner(stinfoGame info) {
    if (info.computer_Choice == info.player1_Choice)
        return enWinner::draw;
    switch (info.player1_Choice)
    {
    case enGameChoice::paper :
        if (info.computer_Choice == enGameChoice::scissor)
            return enWinner::computer;
    case enGameChoice::scissor:
        if (info.computer_Choice == enGameChoice::stone)
            return enWinner::computer;
    case enGameChoice::stone:
        if (info.computer_Choice == enGameChoice::paper)
            return enWinner::computer;
    
    }
    return enWinner::player;
}
string NameWinner_str(enWinner winner) {
    string ArrNameWinner[3] = { "[Player]","[Computer]","[No-Winner]" };
    return ArrNameWinner[winner - 1];
}
void GetColors(enWinner winner) {
    switch (winner)
    {
    case enWinner::player:
        system("color 2f");
        break;
    case enWinner::computer:
        system("color 4f");
        cout << "\a";
        break;
    case enWinner::draw:
        system("color 6f");
        break;

    }
}
string NameChoice(enGameChoice GameChoice) {
    string ArrName[3] = { "Stone","Paper","Scissors" };
    return ArrName[GameChoice - 1];
}
void PrintResGameRound(stinfoGame info) {
    cout << "____________Round[" << info.GameRound << "]_____________" << endl;
    cout << "Player1 Choice      : " << NameChoice(info.player1_Choice) << endl;
    cout << "Computer Choice     : " << NameChoice(info.computer_Choice) << endl;
    cout << "Round Winner        : " << info.NameWinner << endl;
    cout << "____________________________________________________" << endl;
    cout << endl << endl;
    GetColors(info.winner);

}

enWinner whowoWinnerFinal(stGameRes GameRes) {
    if (GameRes.player1_Winner > GameRes.computer_Winner)
        return enWinner::player;
    else if (GameRes.computer_Winner > GameRes.player1_Winner)
        return enWinner::computer;
    else
        return enWinner::draw;

}
string WinnerName(enWinner winner) {
    string ArrWinner[3] = { "Player","Computer","No-Winner" };
    return ArrWinner[winner - 1];

}

stGameRes FillGameResults(short GameRound, short player1, short computer, short draw) {
    stGameRes GameRes;
    GameRes.GameRound = GameRound;
    GameRes.player1_Winner = player1;
    GameRes.computer_Winner = computer;
    GameRes.draw_Winner = draw;
    GameRes.final_Winner = whowoWinnerFinal(GameRes);
    GameRes.final_Winner_str = WinnerName(GameRes.final_Winner);
    return GameRes;
}


short ReadNbrofRound() {
    short Nbr_Round;
    do {
        cout << "How Many Rounds 1 to 10 " << endl;
        cin >> Nbr_Round;

    } while (Nbr_Round < 1 || Nbr_Round > 10);
    return Nbr_Round;
    
}
stGameRes PlayGame(short HowManyRound) {
    stinfoGame info;
    short player1winner = 0, Computerwinner = 0, drawWinner = 0;


    for (int Round = 1; Round <= HowManyRound; Round++) {
        cout << "Round [" << Round << "] begins:"<<endl;
        info.GameRound = Round;
        info.player1_Choice = Player1Choice();
        info.computer_Choice = ComputerChoice();
        info.winner = whowoWinner(info);
        info.NameWinner = NameWinner_str(info.winner);

        PrintResGameRound(info);
    }
    // increase win/draw counter

    if (info.winner == enWinner::computer)
        Computerwinner++;
    else if (info.winner == enWinner::player)
        player1winner++;
    else
        drawWinner++;


    return FillGameResults(HowManyRound, player1winner, Computerwinner, drawWinner);
}


string Tabs(int NbrSpaces) {
    string T = "";
    for (int i = 1; i <= NbrSpaces; i++) 
        T = T + "\t";
    return T;
    
}
void ScreenGameOver() {
    cout << Tabs(2) << "__________________________________________________" << endl;
    cout << Tabs(2) << Tabs(2) << "+++ G a m e O v e r +++" << endl;
    cout << Tabs(2) << "__________________________________________________" << endl;

}
void ResGameFinal(stGameRes GameRes) {
    cout << Tabs(2) << "___________________ [Game Results ] ___________________" << endl;
    cout << Tabs(2) << "Game Rounds           : " << GameRes.GameRound << endl;
    cout << Tabs(2) << "Player1 won Times     : " << GameRes.player1_Winner << endl;
    cout << Tabs(2) << "Computer won Times    : " << GameRes.computer_Winner << endl;
    cout <<  Tabs(2) <<  "Draw Times            : " << GameRes.draw_Winner << endl;
    cout <<  Tabs(2) <<  "final winner          : " << GameRes.final_Winner_str << endl;
    cout << Tabs(2) << "________________________________________________________" << endl;
    GetColors(GameRes.final_Winner);
    
}
void ResetGame() {
    system("cls");
    system("color 0f");
}

    
void starGame(){
    char PlayAgain = 'Y';
    do {
        ResetGame();
        stGameRes GameResults =
            PlayGame(ReadNbrofRound());
        ScreenGameOver();
       ResGameFinal(GameResults);
        cout << "Do you want to play Again Y/N ? " << endl;
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');

}
  */

  //  projet 02(My)
/*
enum enlevelQuestions { easy = 1, med = 2, hard = 3, mix_level = 4 };
enum  enOperationType { add = 1, sub = 2, mul = 3, dive = 4, mix_opr = 5 };
struct stinfoQuestions {
    int NbrOfQuestions;
    enlevelQuestions levelOfQuestions;
    enOperationType OperationOfType;

};
struct stQuestionsAndResRound {
    int Nbr1;
    int Nbr2;
    int Opr_Type;
    int Res_User;
    int Res_True;
};
struct stinfoResfinal {
    int NbrOfQuestions;
    string Questions_level;
    string Operations_type;
    int Nbr_Of_Right_answers;
    int Nbr_Of_Wornigt_answers;
};
int HowManyNbrofQuestions() {
    int NbrOfQuestions;
    cout << "How Many Questions do you want to answer ? ";
    cin >> NbrOfQuestions;
    return NbrOfQuestions;
}
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
enlevelQuestions GetlevelofQuestions() {
    int NbrOflevelQuestions;
    do {
        cout << "Enter Questions Level [1] Easy, [2] Med , [3] Hard , [4] Mix ? ";
        cin >> NbrOflevelQuestions;

    } while (NbrOflevelQuestions < 1 || NbrOflevelQuestions > 4);
    return (enlevelQuestions)NbrOflevelQuestions;
}
enOperationType GetOperationOfType() {
    int OperationOfType;
    do {
        cout << "Enter Operations Type [1] Add, [2] Sub , [3] Mup , [4] Div , [5] Mix ? ";
        cin >> OperationOfType;

    } while (OperationOfType < 1 || OperationOfType > 5);
    return (enOperationType)OperationOfType;

}
int Nbr(enlevelQuestions levelOfQuestions) {
    switch (levelOfQuestions)
    {
    case easy:
        return ReadNbrOfRandom(1, 10);
    case med:
        return ReadNbrOfRandom(10, 50);
    case hard:
        return ReadNbrOfRandom(50, 100);
    case  mix_level:
        return ReadNbrOfRandom(1, 100);

    }
}
int OprType(enOperationType OperationOfType) {
    switch (OperationOfType)
    {
    case add:
        return 1;
    case sub:
        return 2;
    case mul:
        return 3;
    case dive:
        return 4;
    case mix_opr:
        return ReadNbrOfRandom(1, 4);

    }
}
char Get_OprType(int opr_type) {
    switch (opr_type)
    {
    case 1:
        return '+';

    case 2:
        return '-';

    case 3:
        return '*';

    case 4:
        return '/';
    case 5 :
        return 'M';

    }
}
int GetRes_User(int Nbr1, int Nbr2, int opr_type) {
    int Res;
    char ch;
    cout << Nbr1 << endl;
    cout << Nbr2;
    ch = Get_OprType(opr_type);
    cout << ch<<endl;
    cout << "---------------" << endl;
    cin >> Res;
    return Res;

}
int GetRes_True(int Nbr1, int Nbr2, int opr_type) {


    switch (opr_type)
    {
    case 1:
        return Nbr1 + Nbr2;
    case 2:
        return Nbr1 - Nbr2;
    case 3:
        return Nbr1 * Nbr2;
    case 4:
        return Nbr1 / Nbr2;
    }
}
string GetlevelOf_Questions(enlevelQuestions levelOfQuestions) {
    switch (levelOfQuestions)
    {
    case easy:
        return "Easy";
    case med:
        return "Med";
    case hard:
        return "Hard";
    case mix_level:
        return "Mix";

    }

}
void Rep(int Rep_User, int Rep_true) {
    if (Rep_User == Rep_true)
        cout << "Right Answer :-) "<<endl;
    else
        cout << "Woring Aswer :-(" <<endl;

}
void GetColor(int Rep_User, int Rep_true) {
    if (Rep_User == Rep_true)
        system("color 2f");
    else
        system("color 4f");
    cout << "\a";

}
void GetColorFinal(stinfoResfinal infofinal) {
    if (infofinal.Nbr_Of_Right_answers > infofinal.Nbr_Of_Wornigt_answers)
        system("color 2f");
    else
        system("color 4f");
    cout << "\a";

}
void titleRes_Final_str(stinfoResfinal infofinal) {
    cout << "_______________________________________________" << endl;
    if (infofinal.Nbr_Of_Right_answers > infofinal.Nbr_Of_Wornigt_answers)
        cout << "Final Results is succesfull :-)" << endl;
        
    else
        cout << "Final Results is fail :-(" << endl;
    cout << "_______________________________________________" << endl;
    GetColorFinal(infofinal);


}
void Res_Final_str(stinfoResfinal infofinal) {
    cout << "___________________________________________________________" << endl;
    cout << "Nbr Of Questions : " << infofinal.NbrOfQuestions << endl;
    cout << "Questions Level  : " << infofinal.Questions_level << endl;
    cout << "Opr Type         : " << infofinal.Operations_type << endl;
    cout << "Nbr Of Right answers    : " << infofinal.Nbr_Of_Right_answers << endl;
    cout << "Nbr Of Worning answers  : " << infofinal.Nbr_Of_Wornigt_answers << endl;
    cout << "___________________________________________________________" << endl;


}

stinfoQuestions infoQuestions() {
    stinfoQuestions info;
    info.NbrOfQuestions = HowManyNbrofQuestions();
    info.levelOfQuestions = GetlevelofQuestions();
    info.OperationOfType = GetOperationOfType();
    return info;
}
stinfoResfinal Resfinal(int NbrOfQuestions, int Nbr_Right_Answer, int Nbr_Worning_Answer, int opr_Type, enlevelQuestions levelOfQuestions) {
    stinfoResfinal infoFinal;
    infoFinal.NbrOfQuestions = NbrOfQuestions;
    infoFinal.Nbr_Of_Right_answers = Nbr_Right_Answer;
    infoFinal.Nbr_Of_Wornigt_answers = Nbr_Worning_Answer;
    infoFinal.Operations_type = Get_OprType(opr_Type);
    infoFinal.Questions_level = GetlevelOf_Questions(levelOfQuestions);



    return infoFinal;

}
stinfoResfinal QuestionsAndResRound(stinfoQuestions info) {
    stQuestionsAndResRound QuestionsAndResRound;
    int Nbr_Right_Answer = 0, Nbr_Worning_Answer = 0 , opr_Type;


    for (int Round = 1; Round <= info.NbrOfQuestions; Round++) {
        cout << "_______________Questions[" << Round << "/" << info.NbrOfQuestions << "]_______________" << endl;
        QuestionsAndResRound.Nbr1 = Nbr(info.levelOfQuestions);
        QuestionsAndResRound.Nbr2 = Nbr(info.levelOfQuestions);
        QuestionsAndResRound.Opr_Type = OprType(info.OperationOfType);
        QuestionsAndResRound.Res_User = GetRes_User(QuestionsAndResRound.Nbr1, QuestionsAndResRound.Nbr2, QuestionsAndResRound.Opr_Type);
        QuestionsAndResRound.Res_True = GetRes_True(QuestionsAndResRound.Nbr1, QuestionsAndResRound.Nbr2, QuestionsAndResRound.Opr_Type);

        // increment Question(True)
        if (QuestionsAndResRound.Res_User == QuestionsAndResRound.Res_True)
            Nbr_Right_Answer++;
        else
            Nbr_Worning_Answer++;
        // Design
        Rep(QuestionsAndResRound.Res_User, QuestionsAndResRound.Res_True);
        GetColor(QuestionsAndResRound.Res_User, QuestionsAndResRound.Res_True);
    }
    opr_Type = QuestionsAndResRound.Opr_Type;
   return Resfinal(info.NbrOfQuestions, Nbr_Right_Answer, Nbr_Worning_Answer,opr_Type,info.levelOfQuestions);
}
void ResetGame() {
    system("cls");
    system("color 0f");

}

void playGame() {
    char PlayAgain = 'Y';
    do {
        ResetGame();
        stinfoQuestions info = infoQuestions();
        stinfoResfinal ResFinal = QuestionsAndResRound(info);
        titleRes_Final_str(ResFinal);
        Res_Final_str(ResFinal);
        cout << "Do you want to play Again Y/N ? " << endl;
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');

    }
    
  */
enum enOperationType{add=1,sub=2,mup=3,dive=4,mix_op=5};
enum enQuestionLevel{easy=1,med=2,hard=3,mix_level=4};
struct stQuestion {
    int Nbr1;
    int Nbr2;
    enQuestionLevel QuestionOflevel;
    enOperationType OperationOfType;
    int CorrectAnswer;
    int playerAnswer;
    bool Answer = false;

};
struct stQuizz {
    stQuestion QuestionList[100];
    short NbrofQuestions;
    enQuestionLevel QuestionOflevel;
    enOperationType OperationOfType;
    short NbrOfRigthAnswer=0;
    short NbrOfWornigAnswer=0;
    bool is_pass = false;
    
};
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
short ReadNbrOfQuestions() {
    short NbrOfQuestions;
    do {
        cout << "How Many Question do Want Answer ? ";
        cin >> NbrOfQuestions;
    } while (NbrOfQuestions < 1 || NbrOfQuestions > 10);
    return NbrOfQuestions;
   
}
enQuestionLevel ReadQuestionslevel() {
    short QuestionsOfLevel;
    do {
        cout << "Enter Questions Level [1]:Easy, [2]:Med, [3]:Hard , [4]:Mix ";
        cin >> QuestionsOfLevel;
    } while (QuestionsOfLevel <1 || QuestionsOfLevel >4);
    return (enQuestionLevel)QuestionsOfLevel;
}
enOperationType ReadOprType() {
    short OprOfType;
    do {
        cout << "Enter Operation Type [1]:Add, [2]:Sub, [3]:Mup, [4]:Div, [5]:Mix ";
        cin >> OprOfType;
    } while (OprOfType < 1 || OprOfType > 5);
    return (enOperationType)OprOfType;
}
int SimpleCalculator(int Nbr1,int Nbr2,enOperationType OprType) {
    switch (OprType)
    {
    case add:
        return Nbr1 + Nbr2;
    case sub:
        return Nbr1 - Nbr2;
    case mup:
        return Nbr1 * Nbr2;
    case dive:
        return Nbr1 / Nbr2;
    default:
        return Nbr1 + Nbr2;
    }

}
string GetOprTypeSymbol(enOperationType OprType) {
    switch (OprType)
    {
    case add:
        return "+";
    case sub:
        return "-";
    case mup:
        return "*";
    case dive:
        return "/";
    }

}
string GetQuestionsLevel(enQuestionLevel Questionslevel) {
    switch (Questionslevel)
    {
    case easy:
        return "Easy";
    case med:
        return "Medly";
    case hard:
        return "Hard";
    default :
            return "Mix";
    }

}
void GetColor(bool Answer) {
    if (Answer) {
        system("color 2f");
    }
    else {
        system("color 4f");
        cout << "\a";
    }

}
string Tabs(int NbrOfEspace) {
    string T = "";
    for (int i = 0; i < NbrOfEspace; i++)
        T = T + "\t";
    return T;
}
string GetRes_str(bool is_pass) {
    if (is_pass)
        return "Right :-)";
    else
        return "Worning :-(";

}
stQuestion GenerateQuestion(enQuestionLevel QuestionOflevel, enOperationType OperationType) {
    stQuestion Question;
    if (QuestionOflevel == enQuestionLevel::mix_level)
        QuestionOflevel = (enQuestionLevel)ReadNbrOfRandom(1, 3);
    if (OperationType == enOperationType::mix_op)
        OperationType = (enOperationType)ReadNbrOfRandom(1, 4);
    
    switch (QuestionOflevel)
    {
    case easy:
        Question.Nbr1 = ReadNbrOfRandom(1, 10);
        Question.Nbr2 = ReadNbrOfRandom(1, 10);
        Question.OperationOfType = OperationType;
        Question.CorrectAnswer = SimpleCalculator(Question.Nbr1, Question.Nbr2, Question.OperationOfType);
        return Question;
    case med:
        Question.Nbr1 = ReadNbrOfRandom(10, 50);
        Question.Nbr2 = ReadNbrOfRandom(10, 50);
        Question.OperationOfType = OperationType;
        Question.CorrectAnswer = SimpleCalculator(Question.Nbr1, Question.Nbr2, Question.OperationOfType);
        return Question;
    case hard:
        Question.Nbr1 = ReadNbrOfRandom(50, 100);
        Question.Nbr2 = ReadNbrOfRandom(50, 100);
        Question.OperationOfType = OperationType;
        Question.CorrectAnswer = SimpleCalculator(Question.Nbr1, Question.Nbr2, Question.OperationOfType);
        return Question;
    }


} 
void PrintQuestion(short Questions, stQuizz Quizz) {
    cout << endl;
    cout << "Question[" << Questions + 1 << "]" << endl;
    cout << Quizz.QuestionList[Questions].Nbr1 << endl;
    cout << Quizz.QuestionList[Questions].Nbr2 << " ";
    cout << GetOprTypeSymbol(Quizz.QuestionList[Questions].OperationOfType) << endl;
    cout << "______________________________" << endl;


}
int GetAnswer() {
    int Answer;
    cin >> Answer;
    return Answer;
}
void CorrectAnswerResult(short Questions,stQuizz &Quizz) {
    if (Quizz.QuestionList[Questions].CorrectAnswer != Quizz.QuestionList[Questions].playerAnswer) {
        cout << "Wornig Answer :-(" << endl;
        cout << "The Right Answer is : " << Quizz.QuestionList[Questions].CorrectAnswer << endl;

        Quizz.QuestionList[Questions].Answer = false;
        Quizz.NbrOfWornigAnswer++;
    }
    else {
        cout << "Right Answer :-)" << endl;
       
        Quizz.QuestionList[Questions].Answer = true;
        Quizz.NbrOfRigthAnswer++;

    }
    // Screen Color
    GetColor(Quizz.QuestionList[Questions].Answer);
}
void GenerateQuizzQuestion(stQuizz& Quizz) {
    for (short Questions = 0; Questions < Quizz.NbrofQuestions; Questions++)
        Quizz.QuestionList[Questions] = GenerateQuestion(Quizz.QuestionOflevel, Quizz.OperationOfType);
}
void AskAndCorrectListAnswers(stQuizz& Quizz) {
    for (short Questions = 0; Questions < Quizz.NbrofQuestions; Questions++) {
        PrintQuestion(Questions, Quizz);
        Quizz.QuestionList[Questions].playerAnswer = GetAnswer();
        CorrectAnswerResult(Questions, Quizz);
    }
    Quizz.is_pass = Quizz.NbrOfRigthAnswer >= Quizz.NbrOfWornigAnswer;
}
void PrintResults(stQuizz Quizz) {
    cout << "_____________________________________________" << endl;
    cout << Tabs(1) << "Final Results is " << GetRes_str(Quizz.is_pass) << endl;
    cout << "_____________________________________________" << endl << endl;
    cout << " Numbers Of Questions : " << Quizz.NbrofQuestions << endl;
    cout << " Operations Level : " << GetQuestionsLevel(Quizz.QuestionOflevel) << endl;
    cout << " Operation Type " << GetOprTypeSymbol(Quizz.OperationOfType) << endl;
    cout << " Numbers of Right Answers : " << Quizz.NbrOfRigthAnswer << endl;
    cout << " Numbers of Wornig Answers : " << Quizz.NbrOfWornigAnswer << endl;
    cout << "_____________________________________________" << endl;


}
void ResetGame() {
    system("cls");
    system("color 0f");
}
void PlayGame() {
    stQuizz Quizz;
    Quizz.NbrofQuestions = ReadNbrOfQuestions();
    Quizz.QuestionOflevel = ReadQuestionslevel();
    Quizz.OperationOfType = ReadOprType();

    GenerateQuizzQuestion(Quizz);
    AskAndCorrectListAnswers(Quizz);
    PrintResults(Quizz);
  
}
void StarGame() {
    char PlayAgain = 'Y';
    do {
        ResetGame();
        PlayGame();
        cout << "Do you want to play Again ? ";
        cin >> PlayAgain ;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');

}

int main()
{

   // srand((unsigned)time(NULL));
  //  StarGame();
    
   
    cout << "How are you" << endl;
    


   


     
   


    
    
 





    


   





   
    


    




  

            


    }
    

    

    

    


    
    


    
    
    
       
   

   


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accé
// dez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.


/*
enum enlevelQuestions{easy=1,med=2,hard=3,m=4};
enum  enOperationType{add=1,sub=2,mul=3,dive=4,mi=5};
struct stinfoQuestions {
    int NbrOfQuestions;
    enlevelQuestions levelOfQuestions;
    enOperationType OperationOfType;

};
struct stQuestionsAndResRound {

    int Nbr1;
    int Nbr2;
    int Opr_Type;
    int Res_User;
    int Res_True;



};
struct stinfoResfinal {
    int NbrOfQuestions;
    string Questions_level;
    string Operations_type;
    int Nbr_Of_Right_answers;
    int Nbr_Of_Wornigt_answers;
};
int ReadNbrOfRandom(int from, int to) {
    int Nbr;
    Nbr = rand() % (to - from + 1) + from;
    return Nbr;
}
int HowManyNbrofQuestions() {
    int NbrOfQuestions;
    cout << "How Many Questions do you want to answer ? ";
    cin >> NbrOfQuestions;
    return NbrOfQuestions;
}
enlevelQuestions GetlevelofQuestions() {
    int NbrOflevelQuestions;
    do {
        cout << "Enter Questions Level [1] Easy, [2] Med , [3] Hard , [4] Mix ? ";
        cin >> NbrOflevelQuestions;

    } while (NbrOflevelQuestions < 1 || NbrOflevelQuestions > 4);
    return (enlevelQuestions)NbrOflevelQuestions;
}
enOperationType GetOperationOfType() {
    int OperationOfType;
    do {
        cout << "Enter Operations Type [1] Add, [2] Sub , [3] Mup , [4] Div , [5] Mix ? ";
        cin >> OperationOfType;

    } while (OperationOfType < 1 || OperationOfType > 5);
    return (enOperationType)OperationOfType;

}
int Nbr(enlevelQuestions levelOfQuestions) {
    switch (levelOfQuestions)
    {
    case easy:
        return ReadNbrOfRandom(1,10);
    case med:
        return ReadNbrOfRandom(10,50);
    case hard:
        return ReadNbrOfRandom(50,100);
    case m:
        return ReadNbrOfRandom(1,100);

    }
}
int OprType(enOperationType OperationOfType) {
    switch (OperationOfType)
    {
    case add:
        return 1;
    case sub:
        return 2;
    case mul:
        return 3;
    case dive:
        return 4;
    case mi:
        return ReadNbrOfRandom(1, 4);

    }
}
char Get_OprType(int opr_type) {
    switch (opr_type)
    {
    case 1:
        return '+';

    case 2:
        return '-';

    case 3:
        return '*';

    case 4:
        return '/';

    }
}

int GetRes_User(int Nbr1,int Nbr2,int opr_type) {
    int Res;
    char ch;
    cout << Nbr1 << endl;
    cout << Nbr2;
    ch = Get_OprType(opr_type);
    cout << "---------------" << endl;
    cin >> Res;
    return Res;

}
int GetRes_True(int Nbr1, int Nbr2, int opr_type) {


    switch (opr_type)
    {
    case 1:
        return Nbr1 + Nbr2;
    case 2:
        return Nbr1 - Nbr2;
    case 3:
        return Nbr1 * Nbr2;
    case 4:
        return Nbr1 / Nbr2;
    }
}
void Rep(int Rep_User, int Rep_true) {
    if (Rep_User == Rep_true)
         cout<<"Right Answer :-) ";
    else
        cout<<"Woring Aswer :-(";

}
void GetColor(int Rep_User, int Rep_true) {
    if (Rep_User == Rep_true)
        system("color 2f");
    else
        system("color 4f");
        cout<<"\a";

}
string GetlevelOf_Questions(enlevelQuestions levelOfQuestions) {
    switch (levelOfQuestions)
    {
    case easy:
        return "Easy";
    case med:
        return "Med";
    case hard:
        return "Hard";
    case m:
        return "Mix";

    }

}
stinfoResfinal Resfinal(int NbrOfQuestions,int Nbr_Right_Answer,int Nbr_Worning_Answer,int opr_Type, enlevelQuestions levelOfQuestions) {
    stinfoResfinal infoFinal;
    infoFinal.NbrOfQuestions = NbrOfQuestions;
    infoFinal.Nbr_Of_Right_answers = Nbr_Right_Answer;
    infoFinal.Nbr_Of_Wornigt_answers = Nbr_Worning_Answer;
    infoFinal.Operations_type = Get_OprType(opr_Type);
    infoFinal.Questions_level = GetlevelOf_Questions(levelOfQuestions);



    return infoFinal;

}
void titleRes_Final_str(stinfoResfinal infofinal) {
    cout << "_______________________________________________" << endl;
    if (infofinal.Nbr_Of_Right_answers > infofinal.Nbr_Of_Wornigt_answers)
        cout << "Final Results is fail :-(" << endl;
    else
        cout << "Final Results is succesfull :-)" << endl;
    cout << "_______________________________________________" << endl;


}
void Res_Final_str(stinfoResfinal infofinal) {
    cout << "___________________________________________________________" << endl;
    cout << "Nbr Of Questions : " << infofinal.NbrOfQuestions << endl;
    cout << "Questions Level  : " << infofinal.Questions_level << endl;
    cout << "Opr Type         : " << infofinal.Operations_type << endl;
    cout << "Nbr Of Right answers    : " << infofinal.Nbr_Of_Right_answers << endl;
    cout << "Nbr Of Worning answers  : " << infofinal.Nbr_Of_Wornigt_answers << endl;
    cout << "___________________________________________________________" << endl;

}

stinfoResfinal QuestionsAndResRound(int NbrOfQuestions,enlevelQuestions levelOfQuestions,enOperationType OperationOfType) {
    stQuestionsAndResRound QuestionsAndResRound;
    int Nbr_Right_Answer = 0, Nbr_Worning_Answer = 0;


    for (int Round = 1; Round <= NbrOfQuestions; Round++) {
        cout << "_______________Questions[" << Round << "/" << NbrOfQuestions << "]_______________" << endl;
        QuestionsAndResRound.Nbr1     = Nbr(levelOfQuestions);
        QuestionsAndResRound.Nbr2     = Nbr(levelOfQuestions);
        QuestionsAndResRound.Opr_Type = OprType(OperationOfType);
        QuestionsAndResRound.Res_User = GetRes_User(QuestionsAndResRound.Nbr1, QuestionsAndResRound.Nbr2, QuestionsAndResRound.Opr_Type);
        QuestionsAndResRound.Res_True = GetRes_True(QuestionsAndResRound.Nbr1, QuestionsAndResRound.Nbr2, QuestionsAndResRound.Opr_Type);

        // increment Question(True)
        if (QuestionsAndResRound.Res_User == QuestionsAndResRound.Res_True)
            Nbr_Right_Answer++;
        else
            Nbr_Worning_Answer++;


        Rep(QuestionsAndResRound.Res_User, QuestionsAndResRound.Res_True);
      //  GetColor(QuestionsAndResRound.Res_User, QuestionsAndResRound.Res_True);



    }

    return Resfinal(NbrOfQuestions, Nbr_Right_Answer, Nbr_Worning_Answer, QuestionsAndResRound.Opr_Type, levelOfQuestions);
}
stinfoResfinal infoQuestions() {
    stinfoQuestions info;
    info.NbrOfQuestions   = HowManyNbrofQuestions();
    info.levelOfQuestions = GetlevelofQuestions();
    info.OperationOfType  = GetOperationOfType();

    return QuestionsAndResRound(info.NbrOfQuestions,info.levelOfQuestions,info.OperationOfType);
}

void StarGame(stinfoQuestions info) {

    stinfoResfinal ResFinal = QuestionsAndResRound(info.NbrOfQuestions,info.levelOfQuestions,info.OperationOfType);
    titleRes_Final_str(ResFinal);
    Res_Final_str(ResFinal);
  }

*/