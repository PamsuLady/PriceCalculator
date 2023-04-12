

#include <iostream>
using namespace std;

double askWage(double, double);
void printWage(double, double);
double askCost(double, double);
void printCost(double, double);
double calculateMyPrice(double, double, double, double);
void printMyPrice(double, double, double, double);
double calculateFullPrice(double, double, double, double, double);
void printFullPrice(double, double, double, double, double);

int main() {
    double tunnit{}, tuntipalkka{}, materiaalikulut{}, toimPakkaus{};
    double tuntiM, tunti€, matskut, toiPak;
    double myWage{}, myCost{}, myPrice{}, pMp{}, pFp{}, y{};
    const double alv1 = 24;
    const double alv = 1.24;
    const double x = 100;

    cout << "\n\t\tTuntipalkka: " << "\t\t\t";
    cin >> tunti€;
    cout << "\t\tTunnit: " << "\t\t\t";
    cin >> tuntiM;
    cout << "\t\tMateriaalikulut: " << "\t\t";
    cin >> matskut;
    cout << "\t\tToimitus- ja pakkauskulut: " << "\t";
    cin >> toiPak;
    cout << endl;

    cout << "\t********************************************************************************" << endl << "\t\t";
    printWage(tuntiM, tunti€);
    cout << "\t" << endl << "\t\t";
    printCost(matskut, toiPak);
    cout << "\t" << endl << "\t\t";
    printMyPrice(tuntiM, tunti€, matskut, toiPak);
    cout << "\t" << endl << "\t\t";
    printFullPrice(tuntiM, tunti€, matskut, toiPak, alv);

   
  
    system("pause>0");
}

double askWage(double tunnit, double tuntipalkka) 
{ return tunnit * tuntipalkka; }
void printWage(double tunnit, double tuntipalkka)
{
    double myWage = askWage(tunnit, tuntipalkka);
    cout << "Tyokustannukset on :" << myWage << " euroa. Ilman Yel:n ja muita sivukuluja" << endl;
}
double askCost(double materiaalikulut, double toimPakkaus)
{ return materiaalikulut + toimPakkaus; }
void printCost(double materiaalikulut, double toimPakkaus)
{
    double myCost = askCost(materiaalikulut, toimPakkaus);
    cout << "Toimitus- ja lahetyskulut on :" << myCost << " euroa" << endl;
}
double calculateMyPrice(double tunnit, double tuntipalkka, double materiaalikulut, double toimPakkaus) { return (tunnit * tuntipalkka) + materiaalikulut + toimPakkaus; }
void printMyPrice(double tunnit, double tuntipalkka, double materiaalikulut, double toimPakkaus)
{
    double myPrice = calculateMyPrice(tunnit, tuntipalkka, materiaalikulut, toimPakkaus);
    cout << "Nettohinta on: " << myPrice << " euroa." << endl;
}
double calculateFullPrice(double tunnit, double tuntipalkka, double materiaalikulut, double toimPakkaus, double alv)
{ return ((tunnit * tuntipalkka) + materiaalikulut + toimPakkaus) * alv; }
void printFullPrice(double tunnit, double tuntipalkka, double materiaalikulut, double toimPakkaus, double alv)
{
    double myFullPrice = calculateFullPrice(tunnit, tuntipalkka, materiaalikulut, toimPakkaus, alv);
    cout << "Kokonaishinta on: " << myFullPrice << " euroa" << endl;
}





