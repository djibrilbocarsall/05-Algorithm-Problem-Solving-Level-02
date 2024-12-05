
#include <iostream>
#include <string>


using namespace std;
 // exo 01
  /*
 void yourName(string name) {
    cout << "your name is " << name << endl;

 }
 */
 // exo 02
   /*
  string ReadName() {
     string name;
     cout << "Donner votre Nom " << endl;
     getline(cin, name);
     return name;
  }
 void PrintName(string name) {
     cout << "your name is " << name << endl;

  }
  */
  // exo 03
/*
enum enTypeNbr { pair = 1,impair=2 };
int ReadNbr() {
    int nbr;
    cout << "Donner le nbr " << endl;
    cin >> nbr;
    return nbr;
}
enTypeNbr TypeNbr(int nbr) {
    int res = nbr % 2;
    if (res == 0) {
        return enTypeNbr::pair;
    }
    else {
        return enTypeNbr::impair;
    }

} 
void PrintTypeNbr(enTypeNbr nbr) {
    if (nbr == enTypeNbr::pair) {
        cout << "le nombre est pair ";

    }
    else {
        cout << "l nombre est impair ";
    }
}
 */
 // exo 04
/*
struct strinfo
{
    unsigned short age;
    bool isconduict;
};
strinfo Readinfo()
{
    strinfo info;
    cout << "Donner votre age " << endl;
    cin >> info.age;
    cout << "avez-vous le permis du conduite " << endl;
    cin >> info.isconduict;
    return info;
}
bool isaccept(strinfo info)
{
    return ((info.age > 21) && (info.isconduict));
}
void PrintInfo(strinfo info) {
    if (isaccept(info)) {
        cout << "Accepter" << endl;
    }
    else {
        cout << "Rejeter" << endl;
    }
}
*/
// exo 05
  /*
struct strinfo 
{
    unsigned short age;
    bool is_conduit;
    bool is_recommadation;
  };
strinfo Readinfo()
{
    strinfo info;
    cout << "Donner votre age " << endl;
    cin >> info.age;
    cout << "avez-vous le permis du conduit " << endl;
    cin >> info.is_conduit;
    cout << "avez-vous une recommandation " << endl;
    cin >> info.is_recommadation;
    return info;
}
bool isaccept(strinfo info)
{
    if (info.is_recommadation) {
        return true;
    }
    else {
        return (info.age > 21) && (info.is_conduit);
    }
   
}
void Printdecided(strinfo info) {
    if (isaccept(info)) {
        cout << "Acceptable" << endl;
    }
    else {
        cout << "Rejeter" << endl;
    }
        
    

}
   */
// exo 06
/*
struct strinfo {
    string fristName;
    string lastName;
};

strinfo Readinfo() {
    strinfo info;
    cout << "Frist-Name : ";
    cin >> info.fristName;
    cout << "last-Name : ";
    cin >> info.lastName;
    return info;
}
string Getinfo(strinfo info,bool inverse) {
    string fullName = " ";
    if (inverse)
        return (info.lastName + " " + info.fristName);
    else
        return (info.fristName + " " + info.lastName);

}
void fullName(string Name) {
    cout << " your Name is " << Name << endl;

}
*/
// exo 07
 /*
int ReadNbr() {
    int Num;
    cout << "Donner le Nbr " << endl;
    cin >> Num;
    return Num;
  }
float CalculNbr(int nbr) {
    return (float)nbr / 2;
}
void PrintNbr(int nbr) {
    string res = "Le demi  de " + to_string(nbr) + "  est de " + to_string(CalculNbr(nbr));
    cout << res << endl;
}
*/
 // exo 08
/*
enum enavg
{pass=1,faild=2};
int ReadAvg()
{
    int nbr;
    cout << "Donner le nbr " << endl;
    cin >> nbr;
    return nbr;
}
enavg calculAvg(int nbr)
{
    if (nbr >= 50)
        return enavg::pass;
    else
        return enavg::faild;
}
void Printavg(int nbr)
{
    if (calculAvg(nbr) == enavg::pass)
        cout << "your pass :)" << endl;
    else
        cout << "your faild :(" << endl;
}
*/
 // exo 09
/*
void ReadNbr(int& n1, int& n2, int& n3)
{
    cout << "n1 " << endl;
    cin >> n1;
    cout << "n2 " << endl;
    cin >> n2;
    cout << "n3 " << endl;
    cin >> n3;
  }
int  sumNbr(int n1,int n2,int n3)
{
    int sum;
    sum = (n1 + n2 + n3);
    return sum;
}
void PrintsumNbr(int sum)
{
    cout << "le somme du nombre est de " << sum << endl;
}
*/
  // exo 10
/*
void ReadNbr(int& n1, int& n2, int& n3)
{
    cout << "n1 " << endl;
    cin >> n1;
    cout << "n2 " << endl;
    cin >> n2;
    cout << "n3 " << endl;
    cin >> n3;
}
float  sumNbr(int n1, int n2, int n3)
{
    int sum;
    sum = (float)(n1 + n2 + n3)/3;
    return sum;
}


void PrintsumNbr(float sum)
{
    cout << "Avg is " << sum << endl;
}
*/
// exo 11
   /*
   enum enresAvg{pass=1,fail=2};
void ReadNbr(int& n1, int& n2, int& n3)
{
    cout << "n1 " << endl;
    cin >> n1;
    cout << "n2 " << endl;
    cin >> n2;
    cout << "n3 " << endl;
    cin >> n3;
}
float  sumNbr(int n1, int n2, int n3)
{
    int sum;
    sum = (float)(n1 + n2 + n3)/3;
    return sum;
}
enresAvg resAvg(float sum) {
    if (sum >= 50)
        return enresAvg::pass;
    else
        return enresAvg::fail;

    
}

void PrintsumNbr(float sum)
{
    cout << "Avg is " << sum << endl;
}
void PrintresAvg(float sum) {
    if (resAvg(sum) == enresAvg::pass)
        cout << "your pass " << endl;
    else
        cout << "your faild " << endl;
}

   */
// exo 12 
/*
void Readof2Nbrs(int &n1,int &n2)
{
    
    cout << "Donner n1 " << endl;
    cin >> n1;
    cout << "Donner n2 " << endl;
    cin >> n2;

   }
int Maxof2Nbrs(int n1, int n2) {
    int Max;
    if (n1 > n2)
        Max = n1;
    else
        Max = n2;
    return Max;
}
void Printresult(int max) {
    cout << "le nbr Max est " << max << endl;


}
 */   
 // exo 13
/*
void Readof3Nbrs(int& n1, int& n2,int &n3)
{

    cout << "Donner n1 " << endl;
    cin >> n1;
    cout << "Donner n2 " << endl;
    cin >> n2;
    cout << "Donner n3 " << endl;
    cin >> n3;

}
int Maxof3Nbrs(int n1, int n2,int n3) {
    int Max;
    if ((n1 > n2) && (n1 > n3))
        Max = n1;
    else if ((n2 > n1) && (n2 > n3))
        Max = n2;
    else
        Max = n3;
    return Max;
}
void Printresult(int max) {
    cout << "le nbr Max est " << max << endl;


}
*/
 // exo 14
/*
void ReadNbr(int &n1,int &n2)
{
    
    cout << "Donner n1 " << endl;
    cin >> n1;
    cout << "Donner n2 " << endl;
    cin >> n2;
   

   }
void SwapNbr(int &n1,int &n2)
{
    int n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
    

}
void PrintSwapNbr(int n1,int n2) 
{
    
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

}
*/
  /// exo 15
 /*
void ReadNbr(int &lon,int &lar)
{
    cout << "Donner la longueur " << endl;
    cin >> lon;
    cout << "Donner la largeur " << endl;
    cin >> lar;


}
float CalculArea(int lon, int lar) {
    float area;
    area = (float)lon * lar;
    return area;
}
void PrintArea(float Area)
{
    cout << "the Rectangle Area is : " << Area << endl;
}
*/
 // exo 16
 /*
void ReadNbrs(float &a, float &d)
{
    cout << "Donner a " << endl;
    cin >> a;
    cout << "Donner d " << endl;
    cin >> d;
  }
float calculArea(float a,float d) 
{
    float area;
    area = a * sqrt(pow(d, 2) - pow(a, 2));
    return area;
}
void PrintArea(float area)
{
    cout << " Area = " << area << endl;
}
*/
  // exo 17
/*
void ReadNbrs(float& a, float& h)
{
    cout << "Donner a " << endl;
    cin >> a;
    cout << "Donner h " << endl;
    cin >> h;
}
float calculArea(float a, float h)
{
    float area;
    area = a/2*h;
    return area;
}
void PrintArea(float area)
{
    cout << " Area = " << area << endl;
}
*/
 // exo 18
/*
float ReadNbrs()
{
    float r;
    cout << "Donner r " << endl;
    cin >> r;
    return r
    
}
float calculCircleArea(float r)
{
    float area;
    float const pi = 3.141592653589793238;
    area = pi * pow(r,2);
    return area;
}
void PrintArea(float area)
{
    cout << " Area = " << area << endl;
}
*/
 // exo 19
/*
float ReadNbrs()
{
    float D;
    cout << "Donner r " << endl;
    cin >> D;
    return D;

}
float calculCircleArea(float D)
{
    float area;
    float const pi = 3.141592653589793238;
    area = (pi * pow(D, 2)) / 4;
    return area;
}
void PrintArea(float area)
{
    cout << " Area = " << area << endl;
}
 */
  // exo 20
/*
float ReadNbrs()
{
    float A;
    cout << "Donner r " << endl;
    cin >> A;
    return A;

}
float calculCircleArea(float A)
{
    float area;
    float const pi = 3.141592653589793238;
    area = (pi * pow(A, 2)) / 4;
    return area;
}
void PrintArea(float area)
{
    cout << " Area = " << area << endl;
}
*/
 // exo 21
/*
float Readlongeur()
{
    float l;
    cout << "Donner l : " << endl;
    cin >> l;
    return l;
 }
float calculArea(float longeur)
{
    const float pi = 3.14;
    float area;
    area = (pow(longeur, 2)) / (4 * pi);
    return area;
    
}
void printcalculArea(float area)
{
    cout << "the area is " << area << endl;

}
*/ 
   // exo 22
 /*
void ReadNbr(float& a, float& b)
{
    cout << "Donner a : " << endl;
    cin >> a;
    cout << "Donner b : " << endl;
    cin >> b;

 }
float CalculArea(float a,float b)
{
    float area;
    const float pi = 3.14;

    area = ((pi * pow(b, 2)) / (4)) * (2 * a - b) / (2 * a + b);
    return area;

}

void PrintCalculArea(float Area)
{
    cout << "the Area is : " << Area << endl;
}
 */
  // exo 23
 /*
void ReadNbr(float& a, float& b, float& c)
{
    cout << "Donner a : " << endl;
    cin >> a;
    cout << "Donner b : " << endl;
    cin >> b;
    cout << "Donner c : " << endl;
    cin >> c;

   }
float CalculArea(float a, float b, float c)
{
    const float pi = 3.14;
    float area;
    float p = (a + b + c) / 2;
    area = pi * (pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));
    return area;

}
void PrintCalculArea(float area)
{
    cout << "the area is " << area << endl;
}
 */
 // exo 24 
/*
int ReadAge()
{
    int Age;
    cout << "Donner votre Age entre (18) et (45) " << endl;
    cin >> Age;
    return Age;

}
bool ValidateAge(int Nbr, int from, int to)
{
    return (Nbr >= from && Nbr <= to);
}
void PrintAgeValidate(int Age)
{
    if (ValidateAge(Age, 18, 45))
        cout << "Age vaildate";
    else
        cout << "Age in-valid";
}
*/
 // exo 25
/*
int ReadAge()
{
    int Age;
    cout << "Donner votre Age entre (18) et (45) " << endl;
    cin >> Age;
    return Age;

 }
bool ValidateAge(int Nbr, int from, int to)
{
    return (Nbr >= from && Nbr <= to);
}
int UnitilReadAge(int from,int to)
{
    int Age;
    do {
        Age = ReadAge();
    } while (!ValidateAge(Age, from, to));
       return Age;
}
void PrintAgeValidate(int Age)
{
    if (ValidateAge(Age, 18, 45))
        cout << "Age vaildate";
    else
        cout << "Age in-valid";
}
*/
  // exo 26
/*
int ReadNbr()
{
    int Nbr;
    cout << "Donner N : " << endl;
    cin >> Nbr;
    return Nbr;
  }
void Print1toNbr(int Nbr)
{   

    // for
    /*
    for (int i = 1; i <= Nbr; i++)
        cout << i << endl;
    */
    // while
    /*
    int i = 1;
    while (i <= Nbr) {
        cout << i << endl;
        i++;
      }
    */
    // do-while
    /*
    int i = 1;
    do {
        cout << i<<endl;
        i++;
    } while (i <= Nbr);
    */

   // exo 27
/*
int ReadNbr()
{
    int nbr;
    cout << "Donner N : " << endl;
    cin >> nbr;
    return nbr;
     }
void PrintRangeNbrto1(int nbr)
{
    // for
    
    int i = 0;
    for (i = nbr; i >= 1; i--)
        cout << i << endl;
    
    // while 
    
    int i = nbr;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }
    
    
    // do-while
    int i = nbr;
    do {
        cout << i << endl;
        i--;
    } while (i >= 1);
   
}
*/
  // exo 28
/*
enum enTypeNbr{pair=1,impair=2};
int ReadNbr()
{
    int nbr;
    cout << "Donner Nbr : " << endl;
    cin >> nbr;
    return nbr;
}
enTypeNbr TypeNbr(int nbr)
{
    if (nbr % 2 != 0)
        return enTypeNbr::impair;
    else
        return enTypeNbr::pair;
}
     

void PrintSumTypeNbr(int nbr)
{
    int sum = 0;
    int i = nbr;
    while (i >= 1) {
        if (TypeNbr(i) == enTypeNbr::impair)
            sum += i;
        i--;
        
            


    }
    cout << "sum = " << sum;
}
*/
  // exo 29
/*
enum enTypeNbr { pair = 1, impair = 2 };
int ReadNbr()
{
    int nbr;
    cout << "Donner Nbr : " << endl;
    cin >> nbr;
    return nbr;
}
enTypeNbr TypeNbr(int nbr)
{
    if (nbr % 2 == 0)
        return enTypeNbr::pair;
    else
        return enTypeNbr::impair;
}


void PrintSumTypeNbr(int nbr)
{
    int sum = 0;
    int i = nbr;
    while (i >= 1) {
        if (TypeNbr(i) == enTypeNbr::pair)
            sum += i;
        i--;




    }
    cout << "sum = " << sum;
}
   */
  // exo 30
   /*
int ReadNbr(string Message)
{
    int Nbr;
    do
    {
        cout << Message << endl;
        cin >> Nbr;
        

    } while (Nbr < 0);
    return Nbr;

    

}
int Factoriel(int Nbr)
{
    int fact = 1;
    for (int counter = Nbr; counter >= 1; counter--)
        fact *= counter;
    return fact;
}
  */
  // exo 31
/*
int ReadNbr()
{
    int Nbr;
    cout << "Donner Nbr : " << endl;
    cin >> Nbr;
    return Nbr;
    }
void CalculPowerOfNbr(int Nbr)
{
    int p1 = Nbr * Nbr;
    int p2 = Nbr * Nbr * Nbr;
    int p3 = Nbr * Nbr * Nbr * Nbr;
    cout << "power of 2 " << p1 << endl;
    cout << "power of 3 " << p2 << endl;
    cout << "power of 4 " << p3 << endl;

}
  */
    // exo 32
/*
int ReadNbr()
{
    int Nbr;
    cout << " Donner Nbr : "<<endl;
    cin >> Nbr;
    return Nbr;
}
int ReadpowerNbr()
{
    int power;
    cout << "Donner le power : "<< endl;
    cin >> power;
    return power;
}
int calculNbr(int Nbr,int power) {
    int p = 1;
    for (int i = 1; i <= power; i++)
        p *= Nbr;
    return p;
    

}
 */
  // exo 33
/*
int ReadGrade(int from , int to)
{
    int Grade;
    do {
        cout << "Donner Grade entre " << from << " est " << to << " : " << endl;
        cin >> Grade;
    } while (Grade <= from || Grade > to);
    
    return Grade;
 }
string choiseGrade(int Nbr) {
    if (Nbr <= 100 && Nbr >= 90)
        return "A";
    else if (Nbr >= 80)
        return "B";
    else if (Nbr >= 70)
        return "C";
    else if (Nbr >= 60)
        return "D";
    else if (Nbr >= 50)
        return "E";
    else
        return "F";
}
void PrintResult(string val) {
    cout << "Grade value is " << val << endl;
}
*/
   // exo 34
/*
float ReadTotalsales() {
    float sales;
    cout << "Total Sales : " << endl;
    cin >> sales;
    return sales;
  }
float porcentageTotalsales(float totalsales)
{
    float porcentage = 0;
    if (totalsales > 1000000)
        return porcentage = 0.01;
    else if (totalsales > 500000)
        return porcentage = 0.02;
    else if (totalsales > 100000)
        return porcentage = 0.03;
    else if (totalsales > 50000)
        return porcentage = 0.05;
    else
        return porcentage;
}
void printTotalesSales( float totale) {
    cout<<"comission pourcentage is "<< porcentageTotalsales(totale)<<endl;
    cout << "salary is " << totale * porcentageTotalsales(totale);
}
  */
 // exo 36
    // My
  /*
void ReadNbr(int& Nbr1, int& Nbr2)
{
    cout << "Donner n1 : " << endl;
    cin >> Nbr1;
    cout << "Donner n2 : " << endl;
    cin >> Nbr2;
  }
int ReadOpr(int from,int to)
{
    int opr;
    do {
        cout << "Choisir une opr " << endl;
        cout << "1-Addition" << endl;
        cout << "2-Soustraction" << endl;
        cout << "3-Division" << endl;
        cout << "4-Multiplication" << endl;
        cin >> opr;

    } while (opr < from || opr > to);
    return opr;
}
int CalculNbrandOpr(int Nbr1,int Nbr2) 
{
    int res = 0;
    int opr = ReadOpr(1, 4);
    switch (opr)
    {
    case 1 :
         res = Nbr1 + Nbr2;
         break;
    case 2 : 
        res = Nbr1 - Nbr2;
        break;
    case 3 :
        if (Nbr2 != 0)
            res = Nbr1 / Nbr2;
        else
            cout << "impossible de diviser par 0 " << endl;
        break;
    case 4 :
        res = Nbr1 * Nbr2;
        break;

    }
    return res;

}
void PrintCalculNbrtoOpr(int res)
{
    cout << " res = " << res << endl;

}
  */
  // version-prof
/*
enum enTypeOpr
{
    Addition = '+',
    Soustraction = '-',
    Multiplication = '*',
    Division = '/'
};
float ReadNbr(string Message)
{
    float Nbr;
    cout << Message << endl;
    cin >> Nbr;
    return Nbr;

     }
enTypeOpr ChoiseTypeOpr()
{
    char opr = '+';
    cout << "Donner l ' operation (+,-,*,/) " << endl;
    cin >> opr;
    return (enTypeOpr)opr;

}
float CalculNbr(float Nbr1, float Nbr2, enTypeOpr opr) {
    switch (opr)
    {
    case Addition:
        return Nbr1 + Nbr2;
    case Soustraction:
        return Nbr1 - Nbr2;
    case Multiplication:
        return Nbr1 * Nbr2;
    case Division:
        return Nbr1 / Nbr2;
    default:
        return Nbr1 + Nbr2;
    }
}
void ReadRes(float res) {
    cout << "Res = " << res << endl;
}
*/
    // exo 36
      // My
    /*
int ReadNbr()
{
    int Nbr;
    cout << "Donner le Nbr " << endl;
    cin >> Nbr;
    return Nbr;
}
int CalculSumNbr(int Nbr)
{
    int sum = 0;
    while (Nbr != -99) {
        sum += Nbr;
        Nbr = ReadNbr();

    }
    return sum;
}
void PrintSumNbr(int sum)
{
    cout << " sum = " << sum << endl;
}

    */
    // version-prof
/*
int ReadNbr(string Message)
{
    int Nbr;
    cout << Message << endl;
    cin >> Nbr;
    return Nbr;
}
int CalculSumNbr()
{
    int sum = 0, counter = 1, Nbr = 0;
    do {
        Nbr = ReadNbr(" saisir Nombre " + to_string(counter));
        if (Nbr == -99)
            break;
        sum += Nbr;
        counter++;

    } while (Nbr != -99);
    return sum;

}
*/

   // exo 37
   // MY
   /*
enum enTypeNbr{prime = 1 ,Not_prime = 0};
int ReadNbr() {
    int Nbr;
    cout << "Donnner Nbr : " << endl;
    cin >> Nbr;
    return Nbr;
}
enTypeNbr VerifyTypeNbr(int Nbr)
{
    int est_choisir = 1;
    for (int i = (Nbr/2); i < Nbr; i++) {
        if (Nbr % i == 0) {
            est_choisir = 0;
            break;
        }
    }
    return (enTypeNbr)est_choisir;
}
string ChoiseTypeNbr(int Nbr)
{
    if (VerifyTypeNbr(Nbr) == enTypeNbr::prime)
        return "prime";
    else
        return "Not-prime";
}
   */
   // version-prof
/*
enum enTypeNbr{prime =1,not_prime=2};
int ReadNbr(string Message) {
    int nbr;
    do {
        cout << Message << endl;
        cin >> nbr;
    } while (nbr <= 0);
    
    return nbr;
   }
enTypeNbr ChoiseTypeNbr(int Nbr) {
    int arret = Nbr / 2;
    for (int i = 2; i <= arret; i++) {
        if (Nbr % i == 0)
            return enTypeNbr::not_prime;

    }
    return enTypeNbr::prime;
}
void PrintTypeNbr(enTypeNbr TypeNbr)
{
    
    switch (TypeNbr)
    {
    case prime:
        cout << "Prime" << endl;
        break;
    case not_prime:
        cout << "Not-Prime" << endl;
        break;
    }
}
*/
   // exo 39
   // My'
/*
int ReadNbr(string Message) {
    int Nbr;
    cout << Message << endl;
    cin >> Nbr;
    return Nbr;
     }
int CalculBackpaid(int totalpaid, int cashpaid) {
    return cashpaid - totalpaid;
}
void PrintBackPaid(int backpaid) {
    cout << "Back Paid = " << backpaid << endl;
}
 */
   // exo 40
  /*
float ReadNbr(string Message) {
    float Nbr;
    cout << Message << endl;
    cin >> Nbr;
    return Nbr;
   }
float CalculTotalPaid(float T_paid) {<<
    T_paid = T_paid *1.1;
    T_paid = T_paid * 1.16;
    return T_paid;

}
  */
   // exo 41
     // My
   /*
float ReadHours(string Message)
{
    float Hours;
    cout << Message << endl;
    cin >> Hours;
    return Hours;

   }
float NumbersHourstoWeeks(float Hours)
{
    float NumbersToWeek;
    NumbersToWeek = Hours / 24;
    NumbersToWeek = NumbersToWeek / 7;

    return NumbersToWeek;

}
float NumbersHoursToDays(float Hours)
{
    float NumbersToDay;
    NumbersToDay = Hours / 24;
    return NumbersToDay;
}
   */
   // version-prof
/*
float ReadNbrofHours(string Message)
{
    float NbrOfHours;
    cout << Message << endl;
    cin >> NbrOfHours;
    return NbrOfHours;

   }
float HourstoDay(float NbrOfHours)
{
    return (float)NbrOfHours / 24;
}
float HourstoWeek(float NbrOfHours) {
     return (float)NbrOfHours / 24 / 7;
}
  */
  // exo 41
   // My
/*
int ReadNbr(string Message) {
    int Nbr;
    cout << Message << endl;
    cin >> Nbr;
    return Nbr;
   }
float DayofSec(int NumbersofDay)
{

    return (float)NumbersofDay * (60 * 60 * 24);

}
float HoursofSec(int NumbersofHours)
{
    return (float)NumbersofHours * (60 * 60);
}
float MinuteofSec(int NumbersofMinues)
{
    return (float)NumbersofMinues * (60);

}
float SecofSec(int NumbersofSec)
{
    return NumbersofSec;
}
*/
   // exo 41
   // My (essayer  02)
  /*
struct strTypeofTime {
    float NbrofDay;
    float NbrofHours;
    float NbrfMinutes;
    float NbrofSecondes;
};
float ReadNbrofTime(string Message)
{
    int NbrofTime;
    cout << Message<<endl;
    cin >> NbrofTime;
    return NbrofTime;

}
strTypeofTime ReadNbrofTimes()
{
    strTypeofTime Time;

    Time.NbrofDay = ReadNbrofTime("Read Day : ");
    Time.NbrofHours = ReadNbrofTime("Read Hours : ");
    Time.NbrfMinutes = ReadNbrofTime("Read Minutes :");
    Time.NbrofSecondes = ReadNbrofTime("Read Seconds : ");

    return Time;
}
float Total_Seconds(strTypeofTime NbrofTime)
{
    float Total_Second = 0;

    NbrofTime.NbrofDay = NbrofTime.NbrofDay * (24 * 60 * 60);
    NbrofTime.NbrofHours = NbrofTime.NbrofHours * (60 * 60);
    NbrofTime.NbrfMinutes = NbrofTime.NbrfMinutes * (60);
    NbrofTime.NbrofSecondes = NbrofTime.NbrofSecondes;

    Total_Second = NbrofTime.NbrofDay + NbrofTime.NbrofHours + NbrofTime.NbrfMinutes + NbrofTime.NbrofSecondes;
    return Total_Second;

    
}
  */
  // version-prof
 /*
struct strTaskDuration
{
    int NbrofDay, NbrofHours, NbrofMinutes, NbrofSeconds;

  };
int ReadNbrPositiv(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;
    } while (Nbr <= 0);
    return Nbr;
}
strTaskDuration ReadTaskDuration()
{
    strTaskDuration NbrofTime;

    NbrofTime.NbrofDay = ReadNbrPositiv("Read Numbers of Day : ");
    NbrofTime.NbrofHours = ReadNbrPositiv("Read Numbers of Hours : ");
    NbrofTime.NbrofMinutes = ReadNbrPositiv("Read Numbers of Minutes : ");
    NbrofTime.NbrofSeconds = ReadNbrPositiv("Read Numbers of Secondes : ");

    return NbrofTime;
}
int Total_Seconds(strTaskDuration NbrofTime)
{
    int TotalDurationSeconds = 0;

    TotalDurationSeconds = NbrofTime.NbrofDay * (24*60*60);
    TotalDurationSeconds += NbrofTime.NbrofHours * (60 * 60);
    TotalDurationSeconds += NbrofTime.NbrofMinutes * (60);
    TotalDurationSeconds += NbrofTime.NbrofSeconds;

    return TotalDurationSeconds;
}
  */
   // exo 43
    // My(in-correct)
/*
int ReadNbrPositiv(string Message) {
    int Nbrofseconds;
    do {
        cout << Message << endl;
        cin >> Nbrofseconds;
    } while (Nbrofseconds <= 0);
    return Nbrofseconds;
    }
int TranslateSecondsToDay(int &second) {
    int D;
    D = second / (60*60*24);
    second = second % (60 * 60 * 24);
    return D;
}
int TranslateSecondsToHours(int &second) {
    int H;
    H = second / (60*60);
    second = second % (60 * 60);
    return H;
}
int TranslateSecondstoMinutes(int &second)
{
    int M;
    M = second / (60);
    second = second % (60);
    return M;

}
int TranslateSecondstoSeconds(int second) {
    int s;
    s = second;
    return s;
}
 */
    // My(correct)
/*
struct strTaskDuration {
    int NbrofDays, NbrofHours, NbrofMinutes, NbrofSeconds;
};
int ReadNbrPositiv(string Message) {
    int NbrofSeconds;
    do {
        cout << Message << endl;
        cin >> NbrofSeconds;
    } while (NbrofSeconds <= 0);
    return NbrofSeconds;
}
strTaskDuration TranslateSecondToTaskDuration(int NbrofSecond) {

    strTaskDuration TaskDuration;

    TaskDuration.NbrofDays = NbrofSecond / (24 * 60 * 60);
    NbrofSecond = NbrofSecond % (24 * 60 * 60);

    TaskDuration.NbrofHours = NbrofSecond / (60 * 60);
    NbrofSecond = NbrofSecond % (60 * 60);

    TaskDuration.NbrofMinutes = NbrofSecond / (60);
    NbrofSecond = NbrofSecond % (60);

    TaskDuration.NbrofSeconds = NbrofSecond;

    return TaskDuration;
}
void PrintTranslateSecondToTaskDuration(strTaskDuration TaskDuration) {
    cout << TaskDuration.NbrofDays << ":" << TaskDuration.NbrofHours << ":" << TaskDuration.NbrofMinutes << ":" << TaskDuration.NbrofSeconds << endl;
}
*/
// version-prof
/*
struct strTaskDuration {
    int NbrofDays, NbrofHours, NbrofMinutes, NbrofSeconds;
  };
int ReadNbrPositiv(string Message) {
    int TotalSeconds;
    do {
        cout << Message << endl;
        cin >> TotalSeconds;
    } while (TotalSeconds <= 0);
    return TotalSeconds;
}
strTaskDuration TranslateSecondsToTaskDuration(int NbrofSecond) {

    strTaskDuration Time;

    const int NbrparDays = (24 * 60 * 60);
    const int NbrparHours = (60 * 60);
    const int NbrparMinutes = (60);
    

    int Remainder = 0;

    Time.NbrofDays = NbrofSecond / NbrparDays;
    Remainder = NbrofSecond % NbrparDays;

    Time.NbrofHours = Remainder / NbrparHours;
    Remainder = Remainder % NbrparHours;

    Time.NbrofMinutes = Remainder / NbrparMinutes;
    Remainder = Remainder % NbrparMinutes;

    Time.NbrofSeconds = Remainder ;

    return Time;
}
void PrintTaskDuration(strTaskDuration TaskDuration) {
    cout << TaskDuration.NbrofDays << ":" << TaskDuration.NbrofHours << ":" << TaskDuration.NbrofMinutes << ":" << TaskDuration.NbrofSeconds << endl;
}
*/
  // exo 44
    // My
/*
enum enTaskDayToWeek {
    Sunday =1,
    Monday =2,
    Tuesday =3,
    Wednesday =4,
    Thursday =5,
    friday =6,
    saturday =7,

};
int ReadNbrPositiv(string Message, int From, int To) {
    int NbrofDay;
    do {
        cout << Message << endl;
        cin >> NbrofDay;
    } while (NbrofDay <= 0 ||  NbrofDay  < From||  NbrofDay > To);
    return NbrofDay;
}
enTaskDayToWeek ChoiseDay(int NbrofDay) {
    switch (NbrofDay) {
    case 1 :
        return enTaskDayToWeek::Sunday;
    case 2:
        return enTaskDayToWeek::Monday;
    case 3:
        return enTaskDayToWeek::Tuesday;
    case 4:
        return enTaskDayToWeek::Wednesday;
    case 5:
        return enTaskDayToWeek::Thursday;
    case 6:
        return enTaskDayToWeek::friday;
    case 7:
        return enTaskDayToWeek::saturday;
        

    }
}
string PrintChoiseDay(enTaskDayToWeek NbrofDay) {
    switch (NbrofDay)
    {
    case Sunday:
        return "Sunday";
    case Monday:
        return "Monday";
    case Tuesday:
        return "Tuesday";
    case Wednesday:
        return "Wednesday";
    case Thursday:
        return "Thursday";
    case friday:
        return "friday";
    case saturday:
        return "saturday";
    default:
        return "Wrong Day";
    }
}
*/
  // version-prof
   /*
enum enDayToWeek {
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    friday = 6,
    saturday = 7,

};
int ReadNbrofRange(string Message, int From, int To) {
    int NbrofDay;
    do {
        cout << Message << endl;
        cin >> NbrofDay;
    } while (NbrofDay < From || NbrofDay > To);
    return NbrofDay;
}
enDayToWeek ChoiseNbrofDayToWeek() {
    return (enDayToWeek)ReadNbrofRange("Read Nbr of Days : ", 1, 7);
}
string PrintDay(enDayToWeek NbrofDay) {
    switch (NbrofDay)
    {
    case Sunday:
        return "Sunday";
    case Monday:
        return "Monday";
    case Tuesday:
        return "Tuesday";
    case Wednesday:
        return "Wednesday";
    case Thursday:
        return "Thursday";
    case friday:
        return "friday";
    case saturday:
        return "saturday";
    default:
        return "Wrong Day";
    }
}
    */
  // exo 45
    // My
/*
enum enMonthofYear {
    jan =1,
    fev =2,
    Mars = 3,
    avril = 4,
    Mai = 5,
    juin = 6,
    juill = 7,
    aout = 8,
    sep = 9,
    octe = 10,
    Nov = 11,
    Dec = 12,
   };
int ReadNbrtoRange(string Message, int From, int To) {
    int NbrofMonth;
    do {
        cout << Message << endl;
        cin >> NbrofMonth;
    } while (NbrofMonth < From || NbrofMonth > To);
    return NbrofMonth;
}
enMonthofYear ChoiseMonth()
{
    return (enMonthofYear)ReadNbrtoRange("Read Numbers to Month ", 1, 12);
}
string PrintMonth(enMonthofYear NbrofMonth) {
    switch (NbrofMonth)
    {
    case jan:
        return "Janvier";
    case fev:
        return "Fevirier";
    case Mars:
        return "Mars";
    case avril:
        return "avril";
    case Mai:
        return "Mai";
    case juin:
        return "Juin";
    case juill:
        return "Julliet";
    case aout:
        return "Aout";
    case sep:
        return "Septempre";
    case octe:
        return "Octobre";
    case Nov:
        return "Novembre";
     case Dec:
         return "Decembre";
    default:
        return "Wrong Month";
    }
}
*/
// exo 46
/*
void ListLettersAlphabet()
{
    for (int i = 65; i <= 90; i++) {
        cout << char(i)<<endl;
    }
}
*/
// exo 47
  /*
float ReadNbrPositif(string Message) {
    float Nbr;
    do {
        cout << Message<<endl;
        cin >> Nbr;

    } while (Nbr <= 0);
    return Nbr;
  }
float CalculNbrMonth(float LoadAmounth,float MonthkyPayment) {
    float NbrofMonth;
    NbrofMonth = (int)LoadAmounth / MonthkyPayment;
    return NbrofMonth;

}
  */
// exo 48
 /*
int ReadNbrpositiv(string Message) {
    int Nbr;
    do {
        cout << Message << endl;
        cin >> Nbr;
    } while (Nbr <= 0);
    return Nbr;
  }
int CalcultoMonthPayment(int LoadAmounth, int NbrofMonth) {
    int MonthPayment;
    MonthPayment = LoadAmounth / NbrofMonth;
    return MonthPayment;
}
*/
// exo 49
/*
string ReadPinCode()
{
    string Pincode;
    cout << "Pin Code " << endl;
    cin >> Pincode;
    return Pincode;


}
bool login()
{
    string Pincode;
    int counter = 1;
    do {
        Pincode = ReadPinCode();
        if (counter == 3) {
            cout << "you compte is block " << endl;
            return false;
        }
        else if (Pincode == "1234") {
            return true;
        }
        else {
            system("color 4f");
            cout << "Wrong passowrd" << endl;
        }
        counter++;
    } while (Pincode != "1234");
    return false;
}
*/
int main()
    {
     cout << "Wrong passowrd" << endl;
    }
    return 0;
    
    
    
    
   
    
    return 0;
    
}
