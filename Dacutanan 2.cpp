#include <iostream>
using namespace std;

int main(){

    int pz , pay , c1 , B = 150 , H = 250 , S = 175 , P = 200;

        cout << "Choose a Pizza You Want " << endl;
        cout << "                             " <<endl;
        cout << "     [1]Beef = 150         " << endl ;
        cout << "     [2]Hawaian = 250      " << endl;
        cout << "     [3]Sausage= 175          " << endl;
        cout << "     [4]Pepperoni= 200              " << endl;
        cout << "                             " <<endl;

        cout << endl<< "Enter Number: ";
        cin >> pz;

        if(pz==1){
            cout << "Beef = 150"<<endl;
        }
            else if(pz==2){
                cout << "Hawaian = 250"<<endl;
            }
             else if(pz==3){
                cout << "Sausage= 175"<<endl;
            }
            else if (pz==4){
                cout << "Pepperoni = 200"<<endl;
            }
        cout << "Your payment: ";
        cin >> pay;
            if( pz == 1){
                c1 = pay - B;
                if(pay < B){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }
            if( pz == 2){
                c1 = pay - H;
                if(pay < H){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }if( pz == 3){
                c1 = pay - S;
                if(pay < S){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }if( pz == 4){
                c1 = pay - P;
                if(pay < P){
                cout << endl<< "Error" << endl;
                }
                else
                cout << "Your change is : " << c1 <<endl;
            }
    return 0;
}
