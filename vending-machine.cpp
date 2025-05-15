#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  const string red("\033[0;31m");
  const string reset("\033[0m");
  string userChoice, user2Choice;
  double price=0, total=0, moneyAmount, userChange;

  cout << "                Welcome to our vending machine\n" <<  "------------------------------------------------------------" << endl;
  cout << endl;
  cout << "    1. Sun Chips   $0.75" << "    | " << "   2. Cheetos   $1.25" << endl;
  cout << endl;
  cout << "    3. Takis       $1.25" << "    | " << "   4. Doritos   $1.15" << endl;
  cout << endl;
  cout << "    5. Fritos      $0.75" << "    | " << "   6. Lay's     $1.25" << endl;
  cout << endl;
  cout << "    7. m&m's       $1.25" << "    | " << "   8. Cheez-It  $1.75" << endl;
  cout << endl;
  cout << "    9. Ruffles     $1.25" << "    | " << "  10. Twix      $1.75" << endl;
  cout << endl;
  cout << "   11. Reese's     $0.75" << "    | " << "  12. Oreo      $1.75" << endl;
  cout << endl;
  cout <<  "------------------------------------------------------------" << endl;
  user2Choice = "yes";
   while (user2Choice=="yes" || user2Choice== "Yes")
     {
  cout << " Please make a selection from 1-12: " << endl;
  cin >> userChoice;
  if (userChoice=="1")
  {
    price = 0.75;
    total += price;
  }
  else if (userChoice=="2")
  {
    price = 1.25;
    total += price;
  }
  else if (userChoice=="3")
  {
    price = 1.25;
    total += price;
  }
  else if (userChoice=="4")
  {
    price = 1.15;
    total += price;
  }
  else if (userChoice=="5")
  {
    price = 0.75;
    total += price;
  }
  else if (userChoice=="6")
  {
    price = 1.25;
    total += price;
  }
  else if (userChoice=="7")
  {
    price = 1.25;
    total += price;
  }
  else if (userChoice=="8")
  {
    price = 1.75;
    total += price;
  }
  else if (userChoice=="9")
  {
    price = 1.25;
    total += price;
  }
  else if (userChoice=="10")
  {
    price = 1.75;
    total += price;
  }
  else if (userChoice=="11")
  {
    price = 0.75;
    total += price;
  }
  else if (userChoice=="12")
  {
    price = 1.75;
    total += price;
  }
  else
  {
    cout << red << " Invalid choice! please enter the number before your selection:" << endl;
    cout << reset;
    //cin >> userChoice;
  }
    cout << " Would you like to select another item? (yes or no) " << endl;
    cin >> user2Choice;
  while (!(user2Choice=="Yes"|| user2Choice== "yes" or user2Choice== "No" || user2Choice == "no"))
    {
    cout << red << " Ivalid choice! please select yes or no " << endl;
    cout << reset;
      cin >> user2Choice;
    }

       
  }
  while (user2Choice=="No" || user2Choice=="no")
    if (total>20)
    {
      cout << red << " sorry! You have reached the maximum amount " << endl;
  break;
    }
    else
    {
      cout << " Please enter your amount of money : " << endl;
      cin >> moneyAmount;
      while (moneyAmount>20)
      {
        cout << red << " sorry! You have reached the maximum amount " << endl;
        cout << reset;
        cin >> moneyAmount;
      }
      total = total - moneyAmount;
      while (total>0)
      {
        
        cout << red << " please enter $" << total << endl;
        cin >> moneyAmount;
        total = total - moneyAmount;
      }
      cout << reset << " Please use a card or cash " << endl;
      userChange = - total ;
      
      cout << " your change is $" << userChange << endl;
      cout << " Thank you! Have a good day~" << endl;
      break;
    
    
  }
  
}