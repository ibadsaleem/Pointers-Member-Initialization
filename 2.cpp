#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class RentCalculator{
        static const float rentperday;
        const string customerName;
        int numberOfDays;
        float customerRent;
        
        public:
        RentCalculator(){};
        RentCalculator( string a,int z):customerName(a){
            numberOfDays=z;
           // customerRent=x;
        }
        void RentwithBonus(int a)
        {
            if (a>7)
            {
                customerRent=rentperday*(a-1);
            }
            else {
                RentwithoutBonus(a);
            }

        }
        void RentwithoutBonus(int a)
        {
            if (a>0 && a<=7)
            {
                customerRent=rentperday*a;
            }
        }
        void DisplayRent()  const
        {
              cout<<"Name: "<<customerName;
              cout<<"\nDays: "<<numberOfDays;
              cout<<"\nRent: "<<customerRent;  
        }
        
        void setdays(int n)
        {
            numberOfDays=n;
        }
};

 const float RentCalculator::rentperday=1000.85;

int main()
{
    int i=0;
    system("cls");
    do{
    
    string N;
    int nd;
    cout<<"\nEnter Name: ";
    cin>>N;
    cout<<"Enter Number of Days To Stay: ";
    cin>>nd;
   // system("cls");
    RentCalculator R1(N,nd);
    R1.RentwithBonus(nd);
    R1.RentwithoutBonus(nd);
    R1.DisplayRent();
    i++;
    }while(i<2);
}
