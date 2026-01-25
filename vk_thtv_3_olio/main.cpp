#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

#include "chef.h"

int main()
{
    string whichCook;
    string whichDish;
    cout<<"mikko or pablo?"<<endl;
    cin>>whichCook;
    if (whichCook == "mikko")
    {
      Chef kokkiolio("mikko");
        cout<<"you chose mikko"<<endl;
        cout<<"would you like a salad or a soup?"<<endl;
        cin>>whichDish;
        if (whichDish == "salad")
        {
            kokkiolio.makeSalad(10);
        }
        else if (whichDish == "soup")
        {
            kokkiolio.makeSoup(12);
        }
        else
        {
            cout<<"you chose neither"<<endl;
        }
    }
    else if (whichCook == "pablo")
    {
       italianChef italiaolio("pablo");
        cout<<"you chose pablo"<<endl;
        cout<<"would you like a salad, a soup or a secret?"<<endl;
        cin>>whichDish;
        if (whichDish == "salad")
        {
           italiaolio.makeSalad(10);
        }
        else if (whichDish == "soup")
        {
           italiaolio.makeSoup(12);
        }
        else if (whichDish == "secret")
        {
            string password;
            cout<<"what's the password"<<endl;
            cin>>password;
            italiaolio.askSecret(password, 10, 10);
        }
        else
        {
            cout<<"you chose neither"<<endl;
        }
    }
    else
    {
        cout<<"you chose neither"<<endl;
    }
    return 0;
}
