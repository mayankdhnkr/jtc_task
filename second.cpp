#include <iostream>
#include <string.h>
using namespace std;

class coffee
{
    public:
    
    char type[100];
    char addon[100];
    int price;

    coffee(){}

    coffee(int x, int y)
    {
        switch (x)
        {
        case 1:
            strcpy(type, "Espresso");
            switch (y)
            {
            case 1:
                strcpy(addon, "Milk");
                price=60;
                break;

            case 2:
                strcpy(addon, "Cream");
                price=75;
                break;

            case 3:
                strcpy(addon, "Latte");
                price =100;
                break;
            }
            break;

        case 2:
            strcpy(type, "Cappuccino");
            switch (y)
            {
            case 1:
                strcpy(addon, "Milk");
                price =80;
                break;

            case 2:
                strcpy(addon, "Cream");
                price =90;
                break;

            case 3:
                strcpy(addon, "Latte");
                price =125;
                break;
            }
            break;

        case 3:
            strcpy(type, "Latte");
            switch (y)
            {
            case 1:
                strcpy(addon, "Milk");
                price =100;
                break;

            case 2:
                strcpy(addon, "Cream");
                price =125;
                break;

            case 3:
                strcpy(addon, "Latte");
                price =150;
                break;
            }
            break;
        }
    }
};
int main()
{
    int n,x,y;

    cout << "Welcom to the coffee shop" << endl;
    cout << "_________________________" << endl;

    cout << "MENU" << endl;
    cout << "Product / Add-on        Milk         Cream         Latte" << endl;
    cout << "Espresso                60           75            100" << endl;
    cout << "Cappuccino              80           90            125" << endl;
    cout << "Latte                   100          125           150" << endl;

    cout << "______________________________________________________" << endl
         << endl;
    cout << "How many coffee do you wanna buy??";
    cin >> n;

    coffee C[n];

    for(int i=0;i<n;i++){
        cout << "What coffee would you prefer for your " << (i + 1) << " cup" << endl;
        cout << "1.Espresso" << endl;
        cout << "2.Cappuccino" << endl;
        cout << "3.Latte" << endl<< endl;
        cout << "Enter your choice:";
        cin>>x;
        cout << endl;
        cout << "What about the add ons for your " <<( i + 1) << " coffee" << endl;
        cout << "1.Milk" << endl;
        cout << "2.Cream" << endl;
        cout << "3.Latte" << endl<< endl;
        cout << "Enter your choice:";
        cin>>y;

        C[i]=coffee(x,y);
        cout<<"_______________________________________________________________"<<endl;
    }

    for(int i=0;i<n;i++){
        cout<<C[i].type<<"    "<<C[i].addon<<"     "<<C[i].price<<endl<<endl;
    }

    int sum=0;

    cout << "_________________________" << endl;
    cout << "Bill" << endl;
    cout << "Product           Add on        Price" << endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << C[i].type << "           " << C[i].addon << "           " << C[i].price<<endl;
        sum+=C[i].price;
    }
    cout<<endl;
    cout << "Total Bill-                      " << sum;
    return 0;
}