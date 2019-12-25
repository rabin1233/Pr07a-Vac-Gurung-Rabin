/*
School  : Contra Costa College 
Term    : 2017 Spring
Course:   Comp-251-2384,
          Fundamentals of Computer Science with C++

Chapter : 7
Program : Pr07a-Vac-Gurung-Rabin.cpp
Author  : Gurung, Rabin
Date    : Mar. 7, 2017

Sample 
Purpose : To learn about conditional processing with
          "else if" and "nested if" statements, and 
          about sounding an audible alert with '\a'
          when a user enters an invalid data

Sample 
Problem : To inform a user of vacation costs for 1
          or 2 passengers, depending on the month
          of the year, and to prepare and order

Real 
Purpose : Also, to review "toupper()" function, and
          to review continuous looping

Real 
Problem : Also, to confirm an order
*/
 
//Preprocessor directives

#include <string>
#include <iostream>

using namespace std;

#include <cctype>

//Main routine 

int main()
{

  //Declare variables

  string fname;    //First name
  string lname;    //Last name
  string abbr;     //Month abbreviation

  int    mon;      //Month number
  int    pax;      //Passenger count
  int    cost;     //Cost

  char   conf;     //Booking confirmation

  //To the console, output title and instructions

  cout << endl; 
  cout << "Vacation Program" << endl; 
  cout << "--------------------" << endl; 
  cout << endl; 
  cout << "Welcome to Creative Vacation Cruises" << endl; 
  cout << "(CCC)! Please look at our prices," << endl; 
  cout << "then choose a month, and number of" << endl; 
  cout << "passengers, for which to book a " << endl;
  cout << "vacation." <<endl;
  cout << endl;

  cout << "Mon.   " << " 1 Pax  " << " 2 Pax" << endl;
  cout << "----   " << "------  " << "------" << endl;
  cout << "  1    " << "$ 1200  " << "$ 1800" << endl;
  cout << "  2    " << "  1200  " << "  1800" << endl;
  cout << "  3    " << "  1200  " << "  3000" << endl;
  cout << "  4    " << "  2000  " << "  3000" << endl;
  cout << "  5    " << "  2000  " << "  3000" << endl;
  cout << "  6    " << "  2000  " << "  3000" << endl;
  cout << "  7    " << "  2000  " << "  3000" << endl;
  cout << "  8    " << "  2000  " << "  3000" << endl;
  cout << "  9    " << "  2000  " << "  3000" << endl;
  cout << " 10    " << "  1200  " << "  1800" << endl;
  cout << " 11    " << "  1200  " << "  1800" << endl;
  cout << " 12    " << "  1200  " << "  1800" << endl;
  cout <<                                        endl;

  //At the console, get a passenger's last and 
  //first names
 
  cout << "Last  name ? ";
  getline (cin, lname);


  cout << "first name ? ";
  getline (cin, fname);
  cout << endl;
  
  //At the console, get the month number and 
  //Validate it
  
  while (true)
  {
    cout << "Month(1-12)? ";
    cin  >>  mon;

    if (cin. fail())
    {
      cin.clear ();
      cin.ignore (1000,10);

      cout << "Invalid \a\n";
      continue;
    }
    
    if (mon >=1 && mon <= 12)
    {
      break;
    }
    else
    {
      cout << "Invalid \a\n";  
    }
  }
  cout << endl;
  
  //At the console, get the passenger count and 
  //Validate it
 
  while (true)
  {
    cout << "Pax   (1- 2)? ";
    cin  >>  pax;

    if (cin. fail())
    {
      cin.clear ();
      cin.ignore (1000,10);

      cout << "Invalid \a\n";
      continue;
    }
    
    if (pax >=1 && pax <= 2)
    {
      break;
    }
    else
    {
      cout << "Invalid \a\n";  
    }
  }
  cout << endl;

  //Determine month abbreviation
 
  if      (mon ==  1) abbr = "Jan.";
  else if (mon ==  2) abbr = "Feb.";
  else if (mon ==  3) abbr = "Mar.";
  else if (mon ==  4) abbr = "Apr.";
  else if (mon ==  5) abbr = "May "; 
  else if (mon ==  6) abbr = "Jun.";
  else if (mon ==  7) abbr = "Jul.";
  else if (mon ==  8) abbr = "Aug.";
  else if (mon ==  9) abbr = "Sep.";
  else if (mon == 10) abbr = "oct."; 
  else if (mon == 11) abbr = "Nov.";
  else if (mon == 12) abbr = "Dec.";
  else                abbr = "??? ";

  //Determine cost
  
  if ((mon >=  1 && mon <=   3)
  ||  (mon >= 10 && mon <=  12))
  {
    if (pax == 1)
    {
      cost = 1200;
    }
    else 
    {
      cost = 1800;
    }
  }
  else if (mon >=  4 && mon <= 9)
  {
    if (pax == 1)
    {   
      cost = 2000;
    }
    else
    {
      cost = 3000;
    }
  }
  else
  {
    cost = 0;
  }  

  //To the console, output a greeting, user name,
  //passenger count, month abbreviation and
  //vacation cost
  
  cout << "Hello, " << fname << " " << lname <<"."  << endl;
  cout <<                                              endl;
  cout << "Your vacation for " << pax <<" passenger(s) in ";
  cout << abbr << " would cost $" << cost << "."    << endl;
  cout <<                                              endl; 
  
  //At the console, confirm a vacation order

  while (true)
  {
    cout << "Confirm (Y or N)? ";
    cin  >> conf;
    

    if (cin. fail())
    {
      cin.clear ();
      cin.ignore (1000,10);

      cout << "Invalid \a\n";
      continue;
    }

    else if (toupper(conf) == 'Y')
    {
      cout << endl;
      cout << "Thanks for your order.";
      cout << endl; 
      break;
    }
    else if (toupper(conf) == 'N')
    { 
      cout << endl;
      cout << "Maybe next time.";
      cout << endl;
      break;
    }
    else
    {
      cout << "Invalid \a\n";
    }
      
  }

}