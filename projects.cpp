/* Abraham Juliot
   September 6th, 2014
   Project 1 - Math Project
   CIS 17A C++ Programming */

/* ________________________________________________
  | 				Area of a Trapaziod 
  | This program gets from the user the height,
  | base, and length of a trapazoid. The program
  | then calculates the area of the trapazoid and
  | displays the solution. 
  |
  | Input Validation: User input is not validated
  | 
  | Calculation formula(s): 
  | area = 0.5 * height * (length + base)
  |
  |________________________________________________*/

#include <iostream>

using namespace std;
int main() {
	
	float area, height, length, base;
	
	// Display heading
	cout << "\t\t" << "Area of a Trapaziod\n"
	     << "\t\t" << "-------------------\n";
	
	// Get the trapazoid's height, base, and length
	cout << "Enter the height of the trapazoid: ";
	cin >> height;
	
	cout << "Enter the base of the trapazoid: ";
	cin >> base;
	
	cout << "Enter the length of the trapazoid: ";
	cin >> length;
	
	// Calculate the area of the trapazoid
    area = 0.5 * height * (length + base);
	
	// Display the area of the trapazoid
	cout << "The area of the trapazoid is " 
	     << area << endl;
	
	return 0;
}

/* Abraham Juliot
   September 10th, 2014
   Project 2.3 - Sales Tax
   CIS 17A C++ Programming */

/* Sales Tax - This program will compute the 
   total sales tax on a $95 purchase with the 
   state sales tax set at 4 percent and the 
   county sales tax set at 2 percent. */

#include <iostream>

using namespace std;

int main() {
    
    const float salesTaxState = 0.04,
                salesTaxCounty = 0.02;
    float salesTaxTotal,
          purchase = 95;
          
    // Compute the total sales tax
    salesTaxTotal = purchase * (salesTaxState
                                +salesTaxCounty);
    // Display the total sales tax
    cout << "The total sales tax is " 
         << salesTaxTotal << "%" << endl;
    
    return 0;
}

//Abraham Juliot            CSC5           Chapter 2, P. 83, #13

/**************************************************************
 *
 * Circuit Board Price
 * ____________________________________________________________
 * This program calculates the sell price of an electronic 
 * companies circuit board that costs $12.67 and sells at a 40 
 * percent profit. 
 *
 * Computation is based on the formulas:
 * Profit = Cost Price * Profit Percent,
 * Sell Price = Cost Price + Profit Amount
 * ____________________________________________________________
 * INPUT
 *   costPrice      : Input cost price
 *   profitPercent  : Input profit percent
 *  
 * COMPUTE  
 *   profitAmount   : Compute profit amount
 *   sellPrice      : Compute sell price
 *
 * OUTPUT
 *   sellPrice      : Print sell price
 *
 **************************************************************/

#include <iostream>
using namespace std;

int main ()
{
//  Define and Assign Variables
    double costPrice = 12.67,                        // Input cost price
           profitPercent = 0.40,                     // Input profit percent
           profitAmount = costPrice * profitPercent, // Compute profit amount
           sellPrice = costPrice + profitAmount;     // Compute sell price
   
//  Output Result
    cout << "The electronic company sells the circuit board for $" 
         << sellPrice <<".\n";
    return 0;
}

//refactored below

/* Abraham Juliot
   September 10th, 2014
   Project 2.13 - Circuit Board Price
   CIS 17A C++ Programming */

/* Circuit Board Price - An electronics company 
   sells circuit boards at a 35 % profit. This
   program calculates the selling price of the 
   circuit board, which costs $14.95, and 
   displays the result on the screen. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const float profit = 0.35;
    float sellingPrice = 14.95;
    
    // Calculate the selling price
    sellingPrice += sellingPrice * profit;
    
    // Display the selling price
    cout << fixed 
         << showpoint 
         << setprecision (2)
         << "The the selling price "
         << "of the circuit board is $"
         << sellingPrice;
         
    return 0;
}

//Abraham Juliot            CSC5           Chapter 2, P. 83, #14
 
/**************************************************************
 *
 * Display Personal Information
 * ____________________________________________________________
 * This program displays my name, my complete address, my
 * telephone number, and my college major, each on separate
 * lines.
 *
 * The output is displayed in a single cout statement.
 * ____________________________________________________________
 * INPUT
 *   yourName     : Your Name
 *   yourAddress  : Your complete address
 *   yourNumber   : Your telephone number
 *   yourMajor    : Your college Major
 *
 * OUTPUT
 *   yourName     : Abraham Juliot
 *   yourAddress  : 5555 House Ln, Riverside, CA 55555
 *   yourNumber   : 555-555-5555
 *   yourMajor    : Computer Science
 *
 **************************************************************/
 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main ()
{
    string yourName;    //INPUT - Your Name
    string yourAddress; //INPUT - Your complete address
    string yourNumber;  //INPUT - Your telephone number
    string yourMajor;   //INPUT - Your college Major
 
//  Assign Program Information to Variables
    yourName = "Abraham Juliot";
    yourAddress = "5555 House Ln, Riverside, CA 55555";
    yourNumber = "555-555-5555";
    yourMajor = "Computer Science";
 
//  Display Output Result of Variables
    cout << yourName << endl
         << yourAddress << endl
	     << yourNumber << endl
	     << yourMajor << endl;
    return 0;
}

//Abraham Juliot            CSC5           Chapter 2, P. 81, #6

/**************************************************************
 *
 * COMPUTE ANNUAL PAY
 * ____________________________________________________________
 * This program calculates the employee's total annual pay by 
 * multiplying the employee's pay amount by the number of pay
 * periods in a year, and displays the total pay.
 *
 * Computation is based on the formula:
 * Annual Pay = Pay Periods x Pay Amount
 * ____________________________________________________________
 * INPUT
 *   payAmount   : The employee's pay amount
 *   payPeriods  : The number of pay periods in a year
 *   
 * OUTPUT
 *   annualPay   : The employee's total annual pay
 *
 **************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    float payAmount;     //INPUT - The employee's pay amount
    float payPeriods;    //INPUT - The number of pay periods in a year
    float annualPay;     //OUTPUT - The employee's total annual pay
    
//  Initialize Program Variables
    payAmount = 1700.0;
    payPeriods = 26;
    
//  Compute Annual Pay
    annualPay = payAmount * payPeriods;

//  Output Result
    cout << "The employee's total annual pay is $" << annualPay << ". \n";
    return 0;
}

//Abraham Juliot            CSC5           Chapter 2, P. 83, #12

/**************************************************************
 *
 * Land Calculation
 * ____________________________________________________________
 * This program calculates the number of acres in a tract of 
 * land with 389,767 square feet when one acre of land is
 * equivelant to 43,560 feet.
 *
 * Computation is based on the formula:
 * Land Tract Acres = Land Tract Area / Land Acre Area,
 * ____________________________________________________________
 * INPUT
 *   acreArea       : Input land acre area
 *   tractArea      : Input land tract area
 *
 * COMPUTE
 *   tractAcres     : Compute land tract acres
 *
 * OUTPUT
 *   tractAcres     : Print land tract acres
 *
 **************************************************************/

#include <iostream>
using namespace std;

int main ()
{
//  Define, Assign, and Initialize Variables
    int acreArea = 43560,              // Input land acre area
    tractArea = 389767,                // Input land tract area
    tractAcres = tractArea / acreArea; // Compute land tract acres
      
//  Output Result
    cout << "There are " << tractAcres << " acres in a tract of land" 
         << " with 389,767 square feet.\n";
    return 0;
}

//Abraham Juliot            CSC5           Chapter 2, P. 84, #18

/**************************************************************
 *
 * Energy Drink Consumption
 * ____________________________________________________________
 * This program displays (1) the approximate number of 
 * customers in the survey who purchase one or more energy
 * drinks per week and (2) the approximate number of customers
 * in the survey who prefer citrus flavored energy drinks.
 *
 * Computation is based on the formula:
 * (1) Amount of Customers Purchasing one or more one drink a 
 * week is the total amount of customers * Percent of customers 
 * who purchase atleast one energy drink a week
 *
 * (2) Amount of Customers Prefering Citrus is the total 
 * amount of customers * Percent of customers who prefer Citrus
 * ____________________________________________________________
 * INPUT
 *   totalCustomers : Input total customers surveyed 
 *   percentWeekly  : Input percent of weekly purchasers
 *   percentCitrus  : Input percet of citrus preferers
 *
 * COMPUTE
 *   amountWeekly   : Compute weekly total
 *   amountCitrus   : Compute citrus total
 *                  
 * OUTPUT
 *   amountWeekly   : Print the approximate ammount
 *   amountCitrus   : Print the approximate ammount
 *
 **************************************************************/

#include <iostream>
using namespace std;

int main ()
{
//  Define, Assign, and Initialize Variables
    double totalCustomers = 12467,    // Input total customers surveyed 
           percentWeekly = 0.14,      // Input percent of weekly purchasers
           percentCitrus = 0.64;      // Input percent of citrus preferers
    
//  Compute Decimal Values to Approximate Variables
    int amountWeekly = totalCustomers * percentWeekly,   // Compute weekly total
        amountCitrus = totalCustomers * percentCitrus;   // Compute citrus total
  
//  Output Result
    cout << "Approximately " << amountWeekly 
         << " customers purchase one or more energy drinks per week.\n\n"
         << "Approximately " << amountCitrus 
         << " customers prefer citrus flavored energy drinks.\n";
    return 0;
}

//Abraham Juliot            CSC5           Chapter 2, P. 83, #16

/**************************************************************
 *
 * Face Pattern (Variation of the Diamond Pattern)
 *
 **************************************************************/

#include <iostream>
using namespace std;
int main ()
{
//  Output Result
    cout << "       ******* \n";
    cout << "     *********** \n";
    cout << "   ***         *** \n";
    cout << "  ***           *** \n";
    cout << "  **             ** \n";
    cout << "  ** ***     *** ** \n";
    cout << "  **     ***     ** \n";
    cout << "    *           *  \n";
    cout << "     *  *****  *  \n";
    cout << "       * *** * \n";
    cout << " ******       ****** \n";
    cout << "       *     * \n";
    cout << "        *   * \n";
    cout << "          * \n";
    return 0;
}

//Abraham Juliot            CSC5           Chapter 3, P. 148, #22
/* The Word Game
_____________________________________________________________________
   This program plays a word game with the user. The program asks the
   user to enter the following:

   * His or her name
   * His or her age
   * The name of a city
   * The name of a college
   * A profession
   * A type of animal
   * A pet's name

   After the user has entered these items, the program displays a
   story, inserting the user's information into the appropriate
   locations.
   ..................................................................
   INPUT
   userName        : Input user's name
   userAge         : Input user's age
   userCity        : Input user's city
   userCollege     : Input user's college
   userProfession  : Input user's profession
   userAnimal      : Input user's favorite animal
   userPetName     : Input user's name for pet animal

   OUTPUT
   There once was a person named [userName] who lived in [userCity]
   At the age of [userAge], [userName] went to a college at 
   [userCollege]. [userName] graduated and went to work as a 
   [userProfession]. Then, [userName] adopted a [userAnimal] named
   [userPetName]. They both lived happily ever after!
 ____________________________________________________________________
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Define Variables to hold user information
	string userName,        // Input user's name
	       userAge,         // Input user's age
	       userCity,        // Input user's city
	       userCollege,     // Input user's college
	       userProfession,  // Input user's profession
	       userAnimal,      // Input user's favorite animal
	       userPetName;     // Input user's name for pet animal

	// Get user information
	cout << "What is your first name? ";
	getline(cin, userName);
	cout << "\nWhat is your age? ";
	getline(cin, userAge);
	cout << "\nWhat city are you from? ";
	getline(cin, userCity);
	cout << "\nWhat college are you from? ";
	getline(cin, userCollege);
	cout << "\nWhat is your profession? ";
	getline(cin, userProfession);
	cout << "\nWhat is your favorite animal? ";
	getline(cin, userAnimal);
	cout << "\nWhat would you name the animal as a pet? ";
	getline(cin, userPetName);

	// Display story with user information
	cout << "\n\nThere once was a person named "
		 << userName       <<" who lived in "
		 << userCity       << ". At the age of \n"
		 << userAge        << ", "
		 << userName       << " went to college at "
		 << userCollege    << ". "
		 << userName       << " graduated and \n" 
		                   << "went to work as a "
		 << userProfession << ". "
		                   << "Then, "
		 << userName       << " adopted a "
		 << userAnimal     << " named "
		 << userPetName    << ". \n" 
		                   << "They both lived happily ever after!\n";
	return 0;
}

//Abraham Juliot            CSC5           Chapter 3, P. 146, #15
/* The Math Tutor
_____________________________________________________________________
   This program can be used as a math tutor for a young student. The
   program will display two random numbers to be added. The program
   will then pause while the student works on the problem. When the
   student is ready to check the answer, her or she can press ENTER,
   and the program will display the correct solution.
   ..................................................................
   INPUT
   studentAnswer : Input student's answer

   OUTPUT
   correctAnswer : Output correct answer
 ____________________________________________________________________
 */

#include <iostream>
#include <string>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time function
using namespace std;

int main()
{
	// Define variables to hold values
	int    number_1,              // Assign first random number
	       number_2,              // Assign second random number
	       studentAnswer,         // Input student's answer
	       correctAnswer;         // Output correct answer
    unsigned int seed = time(0);  // Assign the system time to seed
	
	// Assign random seed values between 1 and 1000 to variables
	srand(seed);                  // Seed the random number generator
	number_1 = 1 + rand() % 1000; // Assign first random number
	number_2 = 1 + rand() % 1000; // Assign first random number

	// Display the math problem for the student
	cout << "\nSolve: "
	     << number_1
	     << " + "
	     << number_2
	     << " = ";
	// Get the student's solution to the math problem
	cin >> studentAnswer;

	// Pause the screen and wait for the student to press ENTER
	cout << "\n<Press ENTER to Check the Answer>";
	cin.ignore(); // used to clear the buffer
	cin.get();    // used to pause the screen

	// Calculate the math problem
	correctAnswer = number_1 + number_2;

	// Display the correct solution to the math problem
	cout << "\nYou answered "
	     << studentAnswer
		 << " and the correct answer is "
		 << correctAnswer
		 << ".\n";
	return 0;
}

//Abraham Juliot            CSC5           Chapter 3, P. 146, #16
/* The Interest Earned
_________________________________________________________________________
   This program asks for the principal balance in a savings account, the
   interest rate, and the number of times the interest is compounded
   during a year. The program then displays the interest rate, times
   compounded, balance, interest, and amount in savings.

   The output should accurately display:

   Interest Rate:                    4.25%
   Times Compounded:                   12
   Principal:                 $   1000.00
   Interest:                  $     43.34
   Amount in Savings:         $   1043.34
   ......................................................................
   Calculation is based on the formulas:

   Savings Amount = Step 1: Interest Rate / Times Compounded
                    Step 2: + 1
                    Step 2: * The power of Times Compounded
                    Step 3: * Principal Balance

   Interest Earned = Amount - Principal
   ......................................................................
   INPUT
   accountPrincipal       : Input principal balance
   accountInterestRate    : Input interest rate
   accountTimesCompounded : Input times compounded in a year

   OUTPUT
   accountInterestEarned  : Output interest earned after a year
   accountSavingsAmount   : Output savings amount after a year
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>  // needed for manipulators
#include <cmath>    // needed for the pow function [x = pow (y, z)]
using namespace std;

int main()
{
	// Define account variables
	double accountPrincipal,       // Input principal balance
	       accountInterestRate,    // Input interest rate
	       accountTimesCompounded, // Input times compounded in a year
	       accountInterestEarned,  // Output interest earned after a year
	       accountSavingsAmount;   // Output savings amount after a year

	// Get the principal balance in the user's savings account
	cout << "Enter your principal account balance: ";
	cin >> accountPrincipal;

	// Get the interest rate in the user's savings account
	cout << "\nEnter your account interest rate: ";
	cin >> accountInterestRate;

	// Get the amount of times the interest
	// rate is compounded in a year
	cout << "\nEnter the amount of times the interest "
	     << "rate is compounded in a year: ";
	cin >> accountTimesCompounded;

	// Convert interest rate to decimal
	// percent value for calculation
	accountInterestRate = accountInterestRate * 0.01;

	// Calculate the amount in savings after one year
	accountSavingsAmount = accountPrincipal * pow
	((1 + (accountInterestRate / accountTimesCompounded)),
    accountTimesCompounded);

	// Calculate the interest earned after one year
	accountInterestEarned = accountSavingsAmount - accountPrincipal;

	// Convert interest rate back to original
	// percent value for display
    accountInterestRate = accountInterestRate * 100;

	// Display the account information
	cout << "\n\n          ACCOUNT INFORMATION"
	     << "\n_______________________________________"
	     << left  << setw(17) << "\nInterest Rate:"
		 << right << setw(22) << accountInterestRate << "%" << endl
		 << left  << setw(18) << "Times Compounded:"
		 << right << setw(20) << accountTimesCompounded << endl
		 << left  << setw(18) << "Principal:"
		 << right << setw(10) << "$" << setw(10) << setprecision(6)
		 << showpoint << accountPrincipal << endl
		 << left  << setw(18) << "Interest:"
		 << right << setw(10) << "$" << setw(10) << setprecision(4)
		 << showpoint << accountInterestEarned << endl
		 << left  << setw(18) << "Amount in Savings:"
		 << right << setw(10) << "$" << setw(10) << setprecision(6)
		 << showpoint << accountSavingsAmount << endl
		 << "_______________________________________";
	return 0;
}

//Abraham Juliot            CSC5           Chapter 3, P. 147, #21
/* The Stock Transaction Program
_____________________________________________________________________
   Joe purchased and later sold his stock in Acme Software. Based on 
   the details of Joe's purchase of the stock, payments to the stock 
   brocker, and sale of the stock, this program displays the 
   following information:

   [1] The amount of money Joe paid for the stock. [2] The *amount 
   of commission Joe paid his broker when he bought the stock. 
   [3] The amount that Joe sold the stock for. [4] The *amount of 
   commission Joe paid his broker when he sold the stock. [5] The 
   amount of profit that Joe made after selling his stock and paying 
   the two commissions to his broker.
   
   *Joe paid his stock broker a commission that amounted to 2% of 
   the amount he paid for the stock and he paid his stock broker 
   another commission that amounted to 2% of the amount he received 
   after selling the stock. 

   If the amount of profit displayed in the program displays a
   negative number, then Joe lost money on the transaction.
   ..................................................................
   PROGRAMMER INPUT
   sharesPurchased   : Assign amount of shares purchased [1,000]
   share_Payment     : Assign amount paid per share [$32.87]
   sharesSold        : Assign number of shares sold [1,000]
   share_Sale        : Assign sale amount per share [$33.92]
   brokerPercent     : Assign percent paid to broker [0.02]

   OUTPUT
   stockPrice_1      : Output amount paid for the stock
   brokerPayment_1   : Output 1st amount paid to broker
   stockPrice_2      : Output sale amount for the stock
   brokerPayment_2   : Output 2nd amount paid to broker
   stockProfit       : Output profit made
 ____________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define the variables and assign transaction values
	double sharesPurchased = 1000, // Assign amount of shares purchased
	       share_Payment = 32.87,  // Assign amount paid per share
	       sharesSold = 1000,      // Assign number of shares sold
	       share_Sale = 33.92,     // Assign sale amount per share
	       stockPrice_1,           // Output amount paid for the stock
	       brokerPercent = 0.02,   // Assign percent paid to broker
	       brokerPayment_1,        // Output 1st amount paid to broker
	       stockPrice_2,           // Output sale amount for the stock
	       brokerPayment_2,        // Output 2nd amount paid to broker
	       stockProfit;            // Output profit made

	// Calculate the amount paid for the stock
	stockPrice_1 = share_Payment * sharesPurchased;

	// Calculate the 1st amount paid to the stock broker
	brokerPayment_1 = stockPrice_1 * brokerPercent;

	// Calculate the sale amount for the stock
	stockPrice_2 = share_Sale * sharesSold;

    // Calculate the 2nd amount paid to the stock broker
	brokerPayment_2 = stockPrice_2 * brokerPercent;

	// Calculate the profit made after stocks sold and broker paid
	stockProfit = stockPrice_2 // Profit = loss subtracted from gain
	            - (stockPrice_1
	            + brokerPayment_1
	            + brokerPayment_2);

	// Display stock transaction and profit information
	cout << "JOE'S ACME SOFTWARE TRANSACTIONS\n"
	     << "________________________________\n"
	     << setprecision(2) << fixed
	     << "Stock Price:"
	     << right << setw(12)     << "$" << setw(8) << stockPrice_1
	     << "\nBroker Payment 1:"
	     << right << setw(7)      << "$" << setw(8) << brokerPayment_1
	     << "\nStock Sale:"
	     << right << setw(13)     << "$" << setw(8) << stockPrice_2
	     << "\nBroker Payment 2:"
	     << right << setw(7)      << "$" << setw(8) << brokerPayment_2
	     << "\n\nJOE'S PROFIT FROM ACME SOFTWARE\n"
	     << "________________________________\n"
	     << "Profit:"
	     << right << setw(17)    << "$" << setw(8) << stockProfit
            ;
	return 0;
}

//Abraham Juliot            CSC5           Chapter 3, P. 143, #3
/* The Test Average
_____________________________________________________________________
   This program asks for five test scores, calculates the average
   test score and displays it. The number displayed is formatted in
   fixed-point notation, with one decimal point of precision.
   ..................................................................
   INPUT
   testScore_1       : Input the first test score
   testScore_2       : Input the second test score
   testScore_3       : Input the third test score
   testScore_4       : Input the fourth test score
   testScore_5       : Input the fifth test score

   OUTPUT
   testScoreAverage  : Output the test score average
 ____________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define the variables to hold values
	double testScore_1,       // Input the first test score
	       testScore_2,       // Input the second test score
	       testScore_3,       // Input the third test score
	       testScore_4,       // Input the fourth test score
	       testScore_5,       // Input the fifth test score
	       testScoreAverage;  // Output the test score average

	// Get the test scores from the user
	cout << "Enter Test Score [1]: ";
	cin >> testScore_1;
	cout << "\nEnter Test Score [2]: ";
	cin >> testScore_2;
	cout << "\nEnter Test Score [3]: ";
	cin >> testScore_3;
	cout << "\nEnter Test Score [4]: ";
	cin >> testScore_4;
	cout << "\nEnter Test Score [5]: ";
	cin >> testScore_5;

	// Calculate the test score average
	testScoreAverage = (testScore_1
			         + testScore_2
			         + testScore_3
			         + testScore_4
			         + testScore_5) / 5;

	// Display the test score average
    cout << setprecision (1) << fixed
         << "\n_______________________________\n"
    	 << "The Test Score Average is: "
    	 << testScoreAverage;

	return 0;
}

// refactored below

/* 
	Abraham Juliot  
    September 21st, 2014
    Project 3.3 - Test Average
    CIS 17A C++ Programming 

Test Average
________________________________________________
    This program asks for five test scores. The 
    program will calculate the average test 
    score and display it. The number displayed 
    will be formatted in fixed-point notation, 
    with one decimal point of precision. 
    ............................................
    
    Input Validation: user input is not 
    validated
________________________________________________
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float testScore_1, 
          testScore_2, 
          testScore_3,
          average;
         
    // Get 3 test scores
	cout << "Enter test score 1: ";
	cin >> testScore_1;
	cout << "Enter test score 2: ";
	cin >> testScore_2;
	cout << "Enter test score 3: ";
	cin >> testScore_3;
    
    // Calculate the average test score
    average = (testScore_1
			    + testScore_2
			    + testScore_3)
			    / 3;
			
    // Display the average test score
	cout << fixed 
	     << showpoint 
	     << setprecision (1)
	     << "The average test score is "
	     << average;

	return 0;
}

/* 
	Abraham Juliot  
    September 21st, 2014
    Project 3.4 - Average Rainfall
    CIS 17A C++ Programming 

Average Rainfall
________________________________________________
    This program calculates the average rainfall
    for three months. The program asks the user 
    to enter the name of each month, such as 
    June or July, and the amount of rain (in 
    inches) that fell each month. The program
    will display a message similar to the 
    following:
    
    The average rainfall for June, July, and 
    August is 6.72 inches.
    ............................................
    
    Input Validation: user input is not 
    validated
________________________________________________
*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    string month_1, 
           month_2, 
           month_3;
    double month_1_rain, 
           month_2_rain,
           month_3_rain,
           average;
         
    // Get the name of each month
    cout << "Enter month 1: ";
    getline(cin, month_1);
    cout << "Enter month 1 rain: ";
    cin >> month_1_rain;
    cin.ignore(100, '\n'); // Clear the buffer
    
    cout << "Enter month 2: ";
    getline(cin, month_2);
    cout << "Enter month 2 rain: ";
    cin >> month_2_rain;
    cin.ignore(100, '\n'); // Clear the buffer
    
    cout << "Enter month 3: ";
    getline(cin, month_3);
    cout << "Enter month 3 rain: ";
    cin >> month_3_rain;
    cin.ignore(100, '\n'); // Clear the buffer
    
    // Calculate the average rainfall
    average = (month_1_rain
               + month_2_rain
               + month_3_rain) 
               / 3; 
    
    // Display the average rainfall
    cout << fixed 
         << showpoint 
         << setprecision(1)
         << "The average rainfall for "
         << month_1 << ", "
         << month_2 << ", and "
         << month_3 << " is "
         << average << " inches" 
         << endl;

	return 0;
}

//Abraham Juliot            CSC5           Chapter 4, P. 224, #20
/* Freezing and Boiling Points
_________________________________________________________________________
   This program asks the user for a temperature and then shows all the
   substances that will freeze at that temperature and all that will boil
   at that temperature. For example, if the user enters -20, the program
   should report that water will freeze and oxygen will boil at that
   temperature.

   The following table lists the freezing and boiling points of several
   substances:
   __________________________________________________________________
   SUBSTANCE			FREEZING POINT (F)			BOILING POINT (F)
   __________________________________________________________________
   Ethyl alcohol		-173  						172
   Mercury				-38							676
   Oxygen				-362						-306
   Water                32							212
   __________________________________________________________________
   ......................................................................
   CONSTANTS
   ETHYL_ALCOHOL_FREEZE : To hold -173
   ETHYL_ALCOHOL_BOIL   : To hold 172
   MERCURY_FREEZE       : To hold -38
   MERCURY_BOIL         : To hold 676
   OXYGEN_FREEZE        : To hold -362
   OXYGEN_BOIL          : To hold -306
   WATER_FREEZE         : To hold 32
   WATER_BOIL           : To hold 212

   INPUT
   temperature         : Input temperature
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define Constants
	const double ETHYL_ALCOHOL_FREEZE = -173, // To hold -173
			     ETHYL_ALCOHOL_BOIL = 172,    // To hold 172
			     MERCURY_FREEZE = -38,       // To hold -38
			     MERCURY_BOIL = 676,         // To hold 676
			     OXYGEN_FREEZE = -362,       // To hold -362
			     OXYGEN_BOIL = -306,         // To hold -306
			     WATER_FREEZE = 32,          // To hold 32
			     WATER_BOIL = 212;           // To hold 212

	// Define variables
	double temperature; // Input temperature

	// Get temperature from user
	cout << "FREEZING AND BOILING POINTS\n"
	     << "___________________________\n"
	     << "SUBSATNCES:\n"
		 << right << setw(26) << "*Ethyl Alcohol\n"
		 << right << setw(20) << "*Mercury\n"
		 << setw(19) << "*Oxygen\n"
		 << setw(18) << "*Water\n"
	     << "___________________________\n"
	     << "Enter a temperature in degrees fahrenheit: ";
	cin >> temperature;
	cout << endl;

	// Display conditional freezing and boiling points
	if (temperature <= OXYGEN_FREEZE)
	    cout << "At that temperature, "
	       	 <<	"oxygen, "
	         << "ethyl alcohol, "
	       	 <<	"and mercury will freeze.\n\n"

	       	 << "SUBSTANCE INFORMATION:\n"
		     << "*Oxygen will freeze at "
		     << OXYGEN_FREEZE << endl
			 << "*Ethyl Alcohol will freeze at "
			 << ETHYL_ALCOHOL_FREEZE << endl
			 << "*Mercury will freeze at "
			 << MERCURY_FREEZE << endl;
	else if (temperature < OXYGEN_BOIL)
			 cout << "At that temperature, "
			      << "ethyl alcohol "
				  <<	"and mercury will freeze.\n\n"

				  << "SUBSTANCE INFORMATION:\n"
				  << "*Ethyl Alcohol will freeze at "
				  << ETHYL_ALCOHOL_FREEZE << endl
				  << "*Mercury will freeze at "
				  << MERCURY_FREEZE << endl;
		else if (temperature == OXYGEN_BOIL)
				 cout << "At that temperature, "
			          << "ethyl alcohol "
				      <<	"and mercury will freeze, "
				      << "and oxygen will boil.\n\n"

				      << "SUBSTANCE INFORMATION:\n"
					  << "*Ethyl Alcohol will freeze at "
					  << ETHYL_ALCOHOL_FREEZE << endl
					  << "*Mercury will freeze at "
					  << MERCURY_FREEZE << endl
					  << "*Oxygen will boil at "
					  << OXYGEN_BOIL << endl;
			else if (temperature <= ETHYL_ALCOHOL_FREEZE)
					 cout << "At that temperature, "
					      << "ethyl alcohol, "
					      << "and mercury will freeze, "
				          << "and oxygen will boil.\n\n"

				          << "SUBSTANCE INFORMATION:\n"
						  << "*Ethyl Alcohol will freeze at "
						  << ETHYL_ALCOHOL_FREEZE << endl
						  << "*Mercury will freeze at "
						  << MERCURY_FREEZE << endl
						  << "*Oxygen will boil at "
						  << OXYGEN_BOIL << endl;
				else if (temperature <= MERCURY_FREEZE)
						 cout << "At that temperature, "
							  << "mercury will freeze, "
					          << "and oxygen will boil.\n\n"

					          << "SUBSTANCE INFORMATION:\n"
							  << "*Mercury will freeze at "
							  << MERCURY_FREEZE << endl
							  << "*Oxygen will boil at "
							  << OXYGEN_BOIL << endl;
					else if (temperature <= WATER_FREEZE)
							 cout << "At that temperature, "
							      << "water will freeze, "
					              << "and oxygen will boil.\n\n"

					              << "SUBSTANCE INFORMATION:\n"
								  << "*Water will freeze at "
								  << WATER_FREEZE << endl
								  << "*Oxygen will boil at "
								  << OXYGEN_BOIL << endl;
						else if (temperature < ETHYL_ALCOHOL_BOIL)
								 cout << "At that temperature, "
								      << "oxygen will boil.\n\n"

								      << "SUBSTANCE INFORMATION:\n"
									  << "*Oxygen will boil at "
									  << OXYGEN_BOIL << endl;
							else if (temperature >= MERCURY_BOIL)
								   	 cout << "At that temperature, "
									      << "ethyl alcohol, "
									      << "mercury, "
									      << "oxygen, "
									      << "and water will boil.\n\n"

									      << "SUBSTANCE INFORMATION:\n"
									      << "*Ethyl Alcohol will boil at "
									      << ETHYL_ALCOHOL_BOIL << endl
									      << "*Mercury will boil at "
										  << MERCURY_BOIL << endl
										  << "*Oxygen will boil at "
										  << OXYGEN_BOIL << endl
										  << "*Water will boil at "
										  << WATER_BOIL << endl;
								else if (temperature >= WATER_BOIL)
										 cout << "At that temperature, "
				   							  << "ethyl alcohol, "
		     							      << "oxygen, "
										      << "and water will boil.\n\n"

										      << "SUBSTANCE INFORMATION:\n"
										      << "*Ethyl Alcohol will boil at "
										      << ETHYL_ALCOHOL_BOIL << endl
											  << "*Oxygen will boil at "
											  << OXYGEN_BOIL << endl
										 	  << "*Water will boil at "
											  << WATER_BOIL << endl;
									else if (temperature >= ETHYL_ALCOHOL_BOIL)
										  	 cout << "At that temperature, "
											  	  << "ethyl alcohol "
											      << "and oxygen will boil.\n\n"

											      << "SUBSTANCE INFORMATION:\n"
											      << "*Ethyl Alcohol will boil at "
											      << ETHYL_ALCOHOL_BOIL << endl
												  << "*Oxygen will boil at "
												  << OXYGEN_BOIL << endl;
	return 0;
}

//Abraham Juliot            CSC5           Chapter 4, P. 222, #11
/* Book Club Points
_________________________________________________________________________
   This program asks the user to enter the number of books that he or she
   purchased this month and then displays the number of points awarded.

   Serendipity Booksellers has a book club that awards points to its
   customers based on the number of books purchased each month. The
   points are awarded as follows:
   * If a customer purchases 0 books, he or she earns 0 points.
   * If a customer purchases 1 books, he or she earns 5 points.
   * If a customer purchases 2 books, he or she earns 15 points.
   * If a customer purchases 3 books, he or she earns 30 points.
   * If a customer purchases 4 or more books, he or she earns 60 points.
   ......................................................................
   INPUT
   booksPurchased     : Input the number of books purchased

   OUTPUT
   pointsAwarded      : Output the number of Points awarded
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define variables
	int booksPurchased, // Input the number of books purchased
	    pointsAwarded;  // Output the number of Points awarded

	// Get the number of books the user purchased this month
	cout << "SERENDIPITY BOOKSELLERS\n\n"
	     << "Welcome book club member!\n\n"
	     << "***YOUR BOOK CLUB POINTS***\n"
	     << "---------------------------\n"
	     << "Enter the number of books you purchased this month: ";
	cin >> booksPurchased;
	cout << endl;

	// Display the points awarded based on conditions
	if (booksPurchased >= 4)
	{
		pointsAwarded = 60;
		cout << "Serendipity Booksellers has awarded "
		     << pointsAwarded
		     << " points to your account.";
	}
	else if (booksPurchased == 3)
		 {
			 pointsAwarded = 30;
		     cout << "Serendipity Booksellers has awarded "
		          << pointsAwarded
		          << " points to your account.";
		 }
		 else if (booksPurchased == 2)
			  {
				  pointsAwarded = 15;
				  cout << "Serendipity Booksellers has awarded "
				       << pointsAwarded
					   << " points to your account.";
			  }
		   	  else if (booksPurchased == 1)
				   {
					   pointsAwarded = 5;
					   cout << "Serendipity Booksellers has awarded "
					        << pointsAwarded
						    << " points to your account.";
				   }
				   else if (booksPurchased == 0)
					    {
						    pointsAwarded = 0;
						    cout << "Serendipity Booksellers has awarded "
						         << pointsAwarded
							    << " points to your account.";
					    }
	return 0;
}

//Abraham Juliot            CSC5           Chapter 4, P. 223, #14
/* Running the Race
_________________________________________________________________________
   This program asks the user for the names of three runners and the time
   it took each of them to finish the race. The program displays who came
   in first, second, and third place. The program displays output for all
   possible conditions, including ties in first or second place.

   Input Validation: Only accept positive numbers for the finish times.
   ......................................................................
   CONSTANTS
   INVALID_NUMBER = -0.01 : Hold greatest invalid number

   INPUT
   runner_1               : Input name of runner 1
   runner_2               : Input name of runner 2
   runner_3               : Input name of runner 3
   finishTime_1           : Input finish time of runner 1
   finishTime_2           : Input finish time of runner 2
   finishTime_3           : Input finish time of runner 3
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// Define variables
	const double INVALID_NUMBER = -0.01; // Hold greatest invalid number
	string runner_1,                     // Input name of runner 1
	       runner_2,                     // Input name of runner 2
	       runner_3;                     // Input name of runner 3
	double finishTime_1,                 // Input finish time of runner 1
	       finishTime_2,                 // Input finish time of runner 2
	       finishTime_3;                 // Input finish time of runner 3

	// Get runner information from user
	cout << "Enter the name of Runner 1: ";
	getline(cin, runner_1);
	cout << "\nEnter the finish time of Runner 1 [Min.Sec]: ";
	cin >> finishTime_1;
	if (finishTime_1 > INVALID_NUMBER)
	{
		cout << "\nEnter the name of Runner 2: ";
		cin.ignore(); // Clear the Buffer
		getline(cin, runner_2);
		cout << "\nEnter the finish time of Runner 2 [Min.Sec]: ";
		cin >> finishTime_2;
		if (finishTime_2 > INVALID_NUMBER)
		{
			cout << "\nEnter the name of Runner 3: ";
			cin.ignore(); // Clear the Buffer
			getline(cin, runner_3);
			cout << "\nEnter the finish time of Runner 3 [Min.Sec]: ";
			cin >> finishTime_3;
			if (finishTime_3 > INVALID_NUMBER)
			{
				cout << endl
					 << endl;

				// Display 1st place runner(s)
				// based on 7 possible conditions
				cout << "************RACE RESULTS************\n"
					 << "____________________________________\n";
				if (finishTime_1 < finishTime_2
					&& finishTime_1 < finishTime_3)
					cout << runner_1
						 << " finished in 1st place\n";
				else if (finishTime_2 < finishTime_1
						 && finishTime_2 < finishTime_3)
						 cout << runner_2
							  << " finished in 1st place\n";
				else if (finishTime_3 < finishTime_1
						 && finishTime_3 < finishTime_2)
						 cout << runner_3
						 	  << " finished in 1st place\n";
				else if (finishTime_1 == finishTime_2
						 && finishTime_1 < finishTime_3)
					     cout << runner_1 << " and " << runner_2
					          << " tied in 1st place"
					          << ", and " << runner_3
					          << " placed in 2nd\n";
				else if (finishTime_1 == finishTime_3
						 && finishTime_1 < finishTime_2)
						 cout << runner_1 << " and " << runner_3
					          << " tied in 1st place"
		                      << ", and " << runner_2
		                      << " placed in 2nd\n";
				else if (finishTime_2 == finishTime_3
						 && finishTime_2 < finishTime_1)
						 cout << runner_2 << " and " << runner_3
					          << " tied in 1st place"
		                      << ", and " << runner_1
		                      << " placed in 2nd\n";
				else if (finishTime_1 == finishTime_2
						 && finishTime_1 == finishTime_3)
					     cout << runner_1 << ", " << runner_2
					          << ", and " << runner_3
					          << " tied in 1st place\n";

				// Display 2nd place runner(s)
				// based on 10 possible conditions
				if (finishTime_1 == finishTime_2
				    && finishTime_1 == finishTime_3)
					cout << "No one placed in 2nd ";
				else if (finishTime_1 > finishTime_2
					     && finishTime_1 < finishTime_3)
					     cout << runner_1
						      << " finished in 2nd place\n";
				else if (finishTime_1 > finishTime_3
						 && finishTime_1 < finishTime_2)
						 cout << runner_1
							  << " finished in 2nd place\n";
				else if (finishTime_1 == finishTime_2
						 && finishTime_1 > finishTime_3)
					     cout << runner_1 << " and " << runner_2
					          << " tied in 2nd place\n";
			    else if (finishTime_1 == finishTime_3
					   	 && finishTime_1 > finishTime_2)
				         cout << runner_1 << " and " << runner_3
						      << " tied in 2nd place\n";
				else if (finishTime_2 > finishTime_1
						 && finishTime_2 < finishTime_3)
						 cout << runner_2
							  << " finished in 2nd place\n";
				else if (finishTime_2 > finishTime_3
						 && finishTime_2 < finishTime_1)
						 cout << runner_2
							  << " finished in 2nd place\n";
				else if (finishTime_2 == finishTime_3
						 && finishTime_2 > finishTime_1)
		     	         cout << runner_2 << " and " << runner_3
							  << " tied in 2nd place\n";
				else if (finishTime_3 > finishTime_1
						 && finishTime_3 < finishTime_2)
						 cout << runner_3
							  << " finished in 2nd place\n";
				else if (finishTime_3 > finishTime_2
						 && finishTime_3 < finishTime_1)
						 cout << runner_3
							  << " finished in 2nd place\n";

				// Display 3rd place runner
				// based on 10 possible conditions
				if (finishTime_1 == finishTime_2
					&& finishTime_1 < finishTime_3)
					cout << "No one placed in 3rd\n";
				else if (finishTime_1 == finishTime_3
				    	 && finishTime_1 < finishTime_2)
						 cout << "No one placed in 3rd\n";
				else if (finishTime_2 == finishTime_3
						 && finishTime_2 < finishTime_1)
						 cout << "No one placed in 3rd\n";
				else if (finishTime_1 == finishTime_2
						 && finishTime_1 == finishTime_3)
					     cout << "or 3rd\n";
				else if (finishTime_1 == finishTime_2
						 && finishTime_1 > finishTime_3)
						 cout << "No one placed in 3rd\n";
				else if (finishTime_1 == finishTime_3
						 && finishTime_1 > finishTime_2)
					     cout << "No one placed in 3rd\n";
				else if (finishTime_2 == finishTime_3
					     && finishTime_2 > finishTime_1)
					     cout << "No one placed in 3rd\n";
				else if (finishTime_1 > finishTime_2
					     && finishTime_1 > finishTime_3)
					     cout << runner_1
						      << " finished in 3rd place\n";
				else if (finishTime_2 > finishTime_1
						 && finishTime_2 > finishTime_3)
						 cout << runner_2
							  << " finished in 3rd place\n";
				else if (finishTime_3 > finishTime_1
						 && finishTime_3 > finishTime_2)
						 cout << runner_3
							  << " finished in 3rd place\n";
			}
			else cout << "\nError Detected: "
					  << "You provided an invalid finish time.\n"
					  << "Please run the program again "
					  << "with a finish time greater than "
					  << INVALID_NUMBER << ".";
		}
		else cout << "\nError Detected: "
				  << "You provided an invalid finish time.\n"
				  << "Please run the program again "
				  << "with a finish time greater than "
				  << INVALID_NUMBER << ".";
	}
	else cout << "\nError Detected: "
			  << "You provided an invalid finish time.\n"
			  << "Please run the program again "
			  << "with a finish time greater than "
			  << INVALID_NUMBER << ".";
	return 0;
}

//Abraham Juliot            CSC5           Chapter 4, P. 225, #22
/* Long-Distance Calls
_________________________________________________________________________
   This program asks the user for the starting time and the number of
   minutes of his or her call, and displays the charges for the call. The
   program will ask for the time to be entered as a floating point number
   in the form HH.MM. For example, 01:30 hours must be entered as 01.30.

   	   	   	   The long-distance carrier charges the
   	   	   	   following rates for telephone calls:
           	   ________________________________________
           	   *Starting Time of Call  *Rate per Minute
           	   ----------------------------------------
           	   00:00 - 06:59			0.12
           	   07:00 - 19:00			0.55
           	   19:01 - 23:59			0.35
           	   ----------------------------------------

   Input Validation: The program will not accept times that are greater
   than 23.59. Also, numbers whose last two digits are greater than 59
   will not be accepted.
   ......................................................................
   CONSTANTS
	RATE_PER_MIN_1 = 0.12 : Hold first rate per min.
	RATE_PER_MIN_2 = 0.55 : Hold second rate per min.
	RATE_PER_MIN_3 = 0.35 : Hold third rate per min.
	MIN_IN_HOUR = 60      : Hold amount of min. in an hour
    INVALID_MIN = 60      : Hold the least invalid min.
    INVALID_HOUR = 24     : Hold the least invalid hour

   INPUT
    startingTime          : Input starting time of call from user
    callTime	          : Input the call time from user

   OUTPUT
    totalCharge           : Output the total charge for the call
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Define Constants
	const float RATE_PER_MIN_1 = 0.12, // Hold first rate per min.
				RATE_PER_MIN_2 = 0.55, // Hold second rate per min.
				RATE_PER_MIN_3 = 0.35; // Hold third rate per min.
	const int MIN_IN_HOUR = 60,        // Hold amount of min. in an hour
			  INVALID_MIN = 60,        // Hold the least invalid min.
			  INVALID_HOUR = 24;       // Hold the least invalid hour

	// Define Variables
	double startingTime,       // Input starting time of call from user
	 	   callTime,	       // Input the call time from user
	       minutes_perHour,    // To hold the amount of min. per hour
		   minutes_additional, // To hold additional min. within an hour
	       totalMinutes,       // To hold the total amount of minutes
		   totalCharge;        // Output the total charge for the call

	// Get starting time
	cout << "\t\tLONG-DISTANCE CARRIER CHARGES\n"
	     << "Please enter time with a decimal point.\n"
	     << "For example, 01:30 hours must be entered as 01.30.\n\n"
	     << "Enter the starting time of your call [HH.MM]: ";
	cin >> startingTime;

	// Get the call time from the user in hours and minutes.
	cout << "\nEnter the number of hours and minutes of your call [HH.MM]: ";
	cin >> callTime;

	// Check for invalid input
	if (((callTime - (int)callTime) * 100) >= INVALID_MIN
	   || (int)callTime >= INVALID_HOUR)
	   cout << "\nINVALID INPUT: Please restart the program"
		    << " and enter your call time hours less than "
		    << INVALID_HOUR
		    << " and minutes less than "
		    << INVALID_MIN << ".";
	else if (((startingTime - (int)startingTime) * 100) >= INVALID_MIN
			|| (int)startingTime >= INVALID_HOUR)
			cout << "\nINVALID INPUT: Please restart the program"
				 << " and enter your starting time hours less than "
		         << INVALID_HOUR
				 << " and minutes less than "
				 << INVALID_MIN << ".";

	// Display charge for the call based on conditions
	else if (startingTime >= 00.00 && startingTime <= 06.59)
	{
		// Compute total amount of minutes
		minutes_perHour = ((int)callTime * MIN_IN_HOUR);
		minutes_additional = (callTime - (int)callTime);
		minutes_additional *= 100; // Convert decimal to whole number
		totalMinutes = minutes_perHour + minutes_additional;

		// Compute total charge for the call
		totalCharge = totalMinutes * RATE_PER_MIN_1;

		// Display the charge for the call
			cout << fixed << showpoint << setprecision (2)
				 << "\nThe charge for your call is "
				 << "$" << totalCharge << ".\n";
	}
	else if (startingTime >= 07.00 && startingTime <= 19.00)
	{
		// Compute total amount of minutes
		minutes_perHour = ((int)callTime * MIN_IN_HOUR);
		minutes_additional = (callTime - (int)callTime);
		minutes_additional *= 100; // Convert decimal to whole number
		totalMinutes = minutes_perHour + minutes_additional;

		// Compute total charge for the call
		totalCharge = totalMinutes * RATE_PER_MIN_2;

		// Display the charges for the call
			cout << fixed << showpoint << setprecision (2)
				 << "\nThe charge for your call is "
				 << "$" << totalCharge << ".\n";
	}
	else if (startingTime >= 19.01 && startingTime <= 23.59)
	{
		// Compute total amount of minutes
		minutes_perHour = ((int)callTime * MIN_IN_HOUR);
		minutes_additional = (callTime - (int)callTime);
		minutes_additional *= 100; // Convert decimal to whole number
		totalMinutes = minutes_perHour + minutes_additional;

		// Compute total charge for the call
		totalCharge = totalMinutes * RATE_PER_MIN_3;

		// Display the charges for the call
			cout << fixed << showpoint << setprecision (2)
				 << "\nThe charge for your call is "
				 << "$" << totalCharge << ".\n";
	}
	return 0;
}

//Abraham Juliot            CSC5           Chapter 4, P. 220, #1
/* Minimum/Maximum
_________________________________________________________________________
   This program asks the user to enter two numbers. The program will use
   the conditional operator to determine which number is the smaller and
   which number is the larger.
   ......................................................................
   INPUT
    number_1   : Input the first number
    number_2   : Input the second number

   OUTPUT
    numberMin  : Output the minimum number
    numberMax  : Output the maximum number
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

int main()
{
	// Define Constants
	double number_1,   // Input the first number
		   number_2,   // Input the second number
		   numberMin,  // Output the minimum number
		   numberMax;  // Output the maximum number

	// Get two numbers from user
	cout << "\t\tMINIMUM/ MAXIMUM\n"
	     << " Enter two numbers: ";
	cin >> number_1 >> number_2;

	// Find minimum number
	(number_1 < number_2) ? (numberMin = number_1) : (numberMin = number_2);

	// Find maximum number
	(number_1 > number_2) ? (numberMax = number_1) : (numberMax = number_2);

	// Display the minimum number
	cout << "\nThe minimum number is " << numberMin<< ".";

	// Display the maximum number
	cout << "\nThe maximum number is " << numberMax << ".\n";

	return 0;
}

/*  Abraham Juliot 
    Sept 30, 2014
    CIS-17A: C++ Programming
    4.23 - Geometry Calculator 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double pie = 3.14159, 
           radius, 
           area, 
           length, 
           width,
           base,
           height;
    
    // Display menu to the user
    cout << "\tGeometry Calculator\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Quit" << endl;
    
    // Get choice from the user
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    // Calculate according to case
    switch (choice)
		{ 
		case 1: cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius > 0) { 
                    area = pie * pow(radius, 2.0);
                    cout << fixed << showpoint << setprecision(2)
                         << "The area of the circle is " 
                         << area << endl;
    				break;
                } else {
                    cout << "Invalid Input: The program does not "
                         << "accept negative values";
                    break;
                }
		case 2: cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                if (length > 0 && width > 0) { 
                    area = length * width;
                    cout << fixed << showpoint << setprecision(2)
                         << "The area of the rectangle is " 
                         << area << endl;
    				break;
                } else {
                    cout << "Invalid Input: The program does not "
                         << "accept negative values";
                    break;
                }
		case 3: cout << "Enter the length of the triangle’s base: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                if (base > 0 && height > 0) { 
                    area = base * height * 0.5;
                    cout << fixed << showpoint << setprecision(2)
                         << "The area of the triangle is " 
                         << area << endl;
                } else {
                    cout << "Invalid Input: The program does not "
                         << "accept negative values";
                    break;
                }
		case 4: break;
		default: cout << "Invalid Input: Restart the program " 
		              << "and enter a valid choice" << endl;
		}

    return 0;
}

/*  Abraham Juliot 
    Oct 1, 2014
    CIS-17A: C++ Programming
    4.5 - Body Mass Index 
*/

/* This program calculates and displays a person’s body mass index (BMI). 
The program will display a message indicating whether the person has 
optimal weight, is underweight, or is overweight. A sedentary person’s 
weight is considered to be optimal if his or her BMI is between 
18.5 and 25. If the BMI is less than 18.5, the person is considered to 
be underweight. If the BMI value is greater than 25, the person is 
considered to be overweight.

A person’s BMI is calculated with the following formula: 

BMI = weight * 703 / height * height (or height to the power of 2), 
where weight is measured in pounds and height is measured in inches. 
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const float MINIMUM_OptimalWeight = 18.5,
                MAXIMUM_OptimalWeight = 25;
    float weight, height, bodyMassIndex;
    
    // Get weight and height from the user
    cout << "Enter your weight (in pounds): ";
    cin >> weight;
    
    cout << "Enter your height (in inches): ";
    cin >> height;
    
    // Calculate BMI
    bodyMassIndex = weight * 703 / pow(height, 2.0);
    
    // Display BMI
    cout << fixed << showpoint << setprecision(1)
         << "Your body mass index (BMI) is "
         << bodyMassIndex << "." << endl;
    
    // Display weight condition
    if (bodyMassIndex < MINIMUM_OptimalWeight) {
        cout << "You are underweight.";
    } else if (bodyMassIndex > MAXIMUM_OptimalWeight) {
        cout << "You are overweight.";
    } else {
        cout << "You have optimal weight.";
    }
    
    return 0;
}

//Abraham Juliot            CSC5           Chapter 5, P. 298, #20
/* Random Number Guessing Game
_________________________________________________________________________
   This program generates a random number and asks the user to guess what
   the number is. If the user's guess is higher than the random number,
   program will display "Too high, try again." If the user's guess is
   lower than the random number, the program should display "Too low, try
   again." The program will use a loop that repeats until the user
   correctly guesses the random number.

   The user will have 10 attempts to guess the correct number. After 10
   attempts, the game will end.
   ......................................................................
   CONSTANTS
	maxAttempts    : To hold the max number of attempts

   INPUT
	userNumber     : Input the user's guess
_________________________________________________________________________
 */

#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function

using namespace std;

int main()
{
	// Variables
	int randomNumber,       // To hold the random number
	    userNumber,         // Input the user's guess
	    attemptCounter = 1; // To count the number of attempts

	// Constants
	const int maxAttempts = 11;   // To hold the max number of attempts

	// Assign the system time to seed
	unsigned int seed = time(0);

	// Seed the random number generator
	srand(seed);

	// Generate random number
	randomNumber = 1 + rand() % 1000;

	// Display game title
	cout << "\t\tRANDOM NUMBER GUESSING GAME\n"
		 << "\t\t===========================\n"
		 << "Guess a whole number between 1 and 1000\n"
		 << "**You have 10 attempts to guess the number**\n"
		 << "____________________________________________\n";

	// Ask user to guess the number
	do
	{
        cout << "\n\nAttempt " << attemptCounter << " - Enter a number: ";
		cin >> userNumber;
		attemptCounter++;

		if (userNumber < randomNumber && attemptCounter < maxAttempts)
		{
			cout << "\nToo low, try again.";
		}

		else if (userNumber > randomNumber && attemptCounter < maxAttempts)
		{
			cout << "\nToo high, try again.";
		}
	} while (userNumber != randomNumber && attemptCounter < maxAttempts);

	// Display game conclusion
	if (userNumber == randomNumber)
	cout << "\nYOU GUESSED THE CORRECT NUMBER!";

	else
    cout << "\nGAME OVER: The correct number is "
         << randomNumber << ".";

	return 0;
}

//Abraham Juliot            CSC5           Chapter 5, P. 298, #22
/* Square Display
_________________________________________________________________________
   This program asks the user for a positive integer no greater than 15.
   The program should then display a square on the screen using the
   character 'X'. The number entered by the user will be the length of
   each side of the square. For example, if the user enters 5, the
   program should display the following:

   XXXXX
   XXXXX
   XXXXX
   XXXXX
   XXXXX
   ......................................................................
   INPUT
	number  : Input positive integer
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

int main()
{
	// Variables
	int number; // Input positive integer

	// Display the title
	cout << "THE SQUARE DISPLAY\n"
		 << "------------------\n";

	// Ask the user for a positive integer
	cout << "Enter a positive integer: ";
	cin >> number;
	cout << endl;

	// Display square on the screen
	for (int counter1 = 0; counter1 < number; counter1++)
	{
		for (int counter2 = 0; counter2 < number; counter2++)
		{
			cout << "X";
		}
		cout << "\n";
	}
	return 0;
}

//Abraham Juliot            CSC5           Chapter 5, P. 298, #23
/* Pattern Displays
_________________________________________________________________________
   This program uses a loop to display Pattern A below, followed by
   another loop that displays Pattern B.

   ______________________________________________________________________
   Pattern A								Pattern B
   ----------------------------------------------------------------------
   +										++++++++++
   ++										+++++++++
   +++										++++++++
   ++++										+++++++
   +++++									++++++
   ++++++									+++++
   +++++++									++++
   ++++++++									+++
   +++++++++								++
   ++++++++++								+
   ......................................................................
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Display header for Pattern A
	cout << "___________\n"
	     << "Pattern A\n"
	     << "-----------\n";

	// Use loop to display Pattern A
	for (int counter = 1; counter < 11; counter++)
	{
		// Display Pattern A
		if (counter == 1)
			cout << "+";
		else if (counter == 2)
			cout << "\n++";
		else if (counter == 3)
			cout << "\n+++";
		else if (counter == 4)
			cout << "\n++++";
		else if (counter == 5)
			cout << "\n+++++";
		else if (counter == 6)
			cout << "\n++++++";
		else if (counter == 7)
			cout << "\n+++++++";
		else if (counter == 8)
			cout << "\n++++++++";
		else if (counter == 9)
			cout << "\n+++++++++";
		else if (counter == 10)
			cout << "\n++++++++++";
	}	
	
	// Display header for Pattern B
	cout << "\n___________\n"
	     << "Pattern B\n"
	     << "-----------\n";

	// Use loop to display Pattern B
	for (int counter = 1; counter < 11; counter++)
	{
		// Display Pattern B
		if (counter == 1)
			cout << "++++++++++";
		else if (counter == 2)
			cout << "\n+++++++++";
		else if (counter == 3)
			cout << "\n++++++++";
		else if (counter == 4)
			cout << "\n+++++++";
		else if (counter == 5)
			cout << "\n++++++";
		else if (counter == 6)
			cout << "\n+++++";
		else if (counter == 7)
			cout << "\n++++";
		else if (counter == 8)
			cout << "\n+++";
		else if (counter == 9)
			cout << "\n++";
		else if (counter == 10)
			cout << "\n+";
	}
	return 0;
}

//Abraham Juliot            CSC5           Chapter 5, P. 297, #17
/* Sales Bar Chart
_________________________________________________________________________
   This program asks the user to enter today's sales for five stores. The
   program will then display a bar graph comparing each store's sales.
   Create each bar in the bar graph by displaying a row of asterisks.
   Each asterisk should represent $100 of sales.
   ......................................................................
   INPUT
	sales  : Input store sale
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

int main()
{
	// Variables
	float sales,   // Input store sales
		  store_1, // To hold sales for store 1
		  store_2, // To hold sales for store 2
		  store_3, // To hold sales for store 3
		  store_4, // To hold sales for store 4
		  store_5; // To hold sales for store 5

	// Ask the user to enter today's sales for five stores
	for (int storeNumber = 1; storeNumber < 6; storeNumber++)
	{
		cout << "\nEnter today's sales for store " 
		     << storeNumber << ": ";
		cin >> sales;

		// Assign sales to store
		switch (storeNumber)
		{
		case 1: store_1 = sales;
				break;
		case 2: store_2 = sales;
		  	  	break;
		case 3: store_3 = sales;
		  	    break;
		case 4: store_4 = sales;
		  	  	break;
		case 5: store_5 = sales;
		  	  	break;
		}
	}
	
	// Display header
	cout << "\n\nSALES BAR CHART"
			"\n(Each * = $100)";

	// Display a row of asterisks for store 1
	store_1 /= 100; // Divide store sale by 100
	cout << "\nStore 1: ";

	for (int counter = 1; counter <= store_1; counter++)
	{
		cout << "*";
	}

	// Display a row of asterisks for store 2
	store_2 /= 100; // Divide store sale by 100
	cout << "\nStore 2: ";

	for (int counter = 1; counter <= store_2; counter++)
	{
		cout << "*";
	}

	// Display a row of asterisks for store 3
	store_3 /= 100; // Divide store sale by 100
	cout << "\nStore 3: ";

	for (int counter = 1; counter <= store_3; counter++)
	{
		cout << "*";
	}

	// Display a row of asterisks for store 4
	store_4 /= 100; // Divide store sale by 100
	cout << "\nStore 4: ";

	for (int counter = 1; counter <= store_4; counter++)
	{
		cout << "*";
	}

	// Display a row of asterisks for store 5
	store_5 /= 100; // Divide store sale by 100
	cout << "\nStore 5: ";

	for (int counter = 1; counter <= store_5; counter++)
	{
		cout << "*";
	}
	return 0;
}

// refactored below

/*	Abraham Juliot  
    October 8th, 2014
    Project 5.17 - Sales Bar Chart
    CIS 17A C++ Programming 


   Sales Bar Chart
_________________________________________________________________________
   This program asks the user to enter today's sales for five stores. The
   program will then display a bar graph comparing each store's sales.
   Create each bar in the bar graph by displaying a row of asterisks.
   Each asterisk should represent $100 of sales.
   ......................................................................
   INPUT
	sales  : Input store sale
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

int main()
{
	// Variables
	float sales,   // Input store sales
		  store_1, // To hold sales for store 1
		  store_2, // To hold sales for store 2
		  store_3, // To hold sales for store 3
		  store_4, // To hold sales for store 4
		  store_5; // To hold sales for store 5

	// Ask the user to enter today's sales for five stores
	for (int storeNumber = 1; storeNumber < 6; storeNumber++){
		cout << "\nEnter today's sales for store " 
		     << storeNumber << ": ";
		cin >> sales;

		// Assign sales to store
		switch (storeNumber)
		{
		case 1: store_1 = sales;
				break;
		case 2: store_2 = sales;
		  	  	break;
		case 3: store_3 = sales;
		  	    break;
		case 4: store_4 = sales;
		  	  	break;
		case 5: store_5 = sales;
		  	  	break;
		}
	}
	
	// Display header
	cout << "\n\nSALES BAR CHART"
			"\n(Each * = $100)";

	// Display a row of asterisks for each store
    for (int storeNumber = 1; storeNumber < 6; storeNumber++){
        
        switch (storeNumber){
		case 1: store_1 /= 100;
	            cout << "\nStore 1: ";
                for (int counter = 1; counter <= store_1; counter++){
                    cout << "*";
                }
				break;
		case 2: store_2 /= 100;
	            cout << "\nStore 2: ";
                for (int counter = 1; counter <= store_2; counter++){
                    cout << "*";
                }
		  	  	break;
		case 3: store_3 /= 100;
	            cout << "\nStore 3: ";
                for (int counter = 1; counter <= store_3; counter++){
                    cout << "*";
                }
		  	    break;
		case 4: store_4 /= 100;
	            cout << "\nStore 4: ";
                for (int counter = 1; counter <= store_4; counter++){
                    cout << "*";
                }
		  	  	break;
		case 5: store_5 /= 100;
	            cout << "\nStore 5: ";
                for (int counter = 1; counter <= store_5; counter++)
                {
                    cout << "*";
                }
		  	  	break;
		}
    }
    
	return 0;
}

//Abraham Juliot            CSC5           Chapter 5, P. 294, #1
/* Sum of Numbers
_________________________________________________________________________
   This program asks the user for a positive integer value. The program
   will use a loop to get the sum of all the integers from 1 up to the
   number entered. For example, if the user enters 50, the loop will find
   the sum of 1, 2, 3, 4, ... 50.

   Input Validation: Do not accept a negative starting number.
   ......................................................................
   INPUT
    number  : Input number

   OUTPUT
    sum     : Display sum

_________________________________________________________________________
 */

#include <iostream>
using namespace std;

int main()
{
	// Variables
	int number,            // Input number
	    invalidValue = -1, // Hold greatest invalid integer
		sum = 0;           // Display sum

	// Ask the user for a positive integer value
	do
	{
		cout << "\n\nEnter a positive integer value: ";
		cin >> number;

		// Validate user input
		if (number <= invalidValue)
		   cout << "\nINVALID INPUT";
	} while (number <= invalidValue);

	// Calculate the sum of all the integers from 1 up to the number entered
	for (int counter = 1; counter <= number; counter++)
	{
		sum += counter;
	}

	// Display the sum of all the integers from 1 up to the number entered
	cout << "\nThe sum of all the integers from 1 up to the number entered is "
	     << sum << ".\n";
	return 0;
}

/*	Abraham Juliot  
    October 9th, 2014
    Project 5.7 - Pennies For Pay
    CIS 17A C++ Programming 
 
Write a program that calculates how much a person would 
earn over a period of time if his or her salary is one 
penny the first day and two pennies the second day, and 
continues to double each day. The program should ask the 
user for the number of days. 

Display a table showing how much the salary was for each 
day, and then show the total pay at the end of the period. 
The output should be displayed in a dollar amount, not 
the number of pennies. 

Input Validation: Do not accept a number less than 1 for 
the number of days worked.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MINIMUM = 0; 
    double pennyAmount = 0;
    int days;
	double total = 0;
        
    do {
        cout << "Enter the amount of days you worked: ";
        cin >> days; 
        
        if (days < MINIMUM){
            cout << "Invalid Input: Enter a number greater than " 
                 << MINIMUM;
        }
    } while (days < MINIMUM);
      
    cout << "\t\t  Daily Salary\n"
         << "-------------------------------\n";
    
    for (int counter = 0; counter < days; counter ++){
        (counter < 1)? pennyAmount = 1: pennyAmount += pennyAmount;
        total += pennyAmount;
        cout << fixed << showpoint << setprecision(2)
             << left << setw(5) << "Day #" << setw(4) << (counter+1) 
             << right << " $"
             << setw(20) << (pennyAmount * 0.01)
             << endl;
    }

	cout << "You earned a total of $" << total;
	return 0;
}

/*	Abraham Juliot  
    CIS 17A C++ Programming 
 
    Project 5.2 Markup 
 
    Input validation: 
 */

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double cost, double percent);

int main()
{
    const double MINIMUM = 0;
    double wholesaleCost, markupPercentage;
    
    // Get wholesale cost 
    do {
        cout << "Enter the item's wholesale cost: ";
        cin >> wholesaleCost;
        
        // Do not accept negative vaules
        if (wholesaleCost < MINIMUM){
            cout << "Invalid Input: " 
                 << "Negative values are not accepted.";
        }
    } while (wholesaleCost < MINIMUM);
    
    // Get markup percentage
    do { 
        cout << "Enter the item's markup percentage: ";
        cin >> markupPercentage;
        
        // Do not accept negative vaules
        if (markupPercentage < MINIMUM){
            cout << "Invalid Input: "
                << "Negative values are not accepted.";
        }
    } while (markupPercentage < MINIMUM);
    
    cout << fixed << showpoint << setprecision(2)
         << "The retail price of the item is $" 
         << calculateRetail(wholesaleCost,
                            markupPercentage)
         << endl;
	return 0;
}

double calculateRetail(double cost, double percent) {
    double retailPrice;
    
    // Calculate retail price
    percent *= 0.01;
    retailPrice = cost + (cost * percent);
    
    // Return value of retail price
    return retailPrice;
}

/*******************************************************************
 * AUTHOR			: Abraham Juliot
 * ASSIGNMENT		: Practicum No. 1
 * CLASS			: CSC5
 * SECTION			: TH 6PM - 9:10PM
 * DUE DATE			: 4/10/2014
 *******************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*-----------------------------------------------------------------
  This program displays a weekly payroll report.  A loop in the
  program will ask the user for the employee number, gross pay,
  state tax, federal tax, and FICA withholdings. The loop will
  terminate when 0 is entered for the employee number. After the
  data is entered, the program will display totals for the gross
  pay, state tax, federal tax, FICA withholdings, and net pay. The
  output display will be on two lines; the top line will display
  label headers and the second line will display the actual values.

  INPUT VALIDATION:

  1. The program will not accept negative numbers for any of the
  items entered.

  2. The program will not accept values for state, federal, or
  FICA withholdings that are greater than the gross pay.

  3. If the sum state tax + federal tax + FICA withholdings for
  any employee is greater than gross pay, an error message will
  display and the user will be asked to re-enter the data for that
  employee.
  .................................................................
  INPUT
   employeeNumber         : Input the employee number
   grossPay		          : Input gross pay
   stateTax               : Input state tax
   federalTax             : Input federal tax
   ficaWithholdings       : Input FICA withholdings

  OUTPUT
   grossPayTotal          : Output gross pay total
   stateTaxTotal          : Output state tax total
   federalTaxTotal        : Output federal tax total
   ficaWithholdingsTotal  : Output FICA withholdings Total
   netPayTotal            : Output net pay total
-------------------------------------------------------------------*/

int main()
{
	// Variables

	int employeeNumber;               // Input the employee number
	char terminate = 0;		          // Hold terminate character
	double grossPay;		          // Input gross pay
	double stateTax;                  // Input state tax
	double federalTax;                // Input federal tax
	double ficaWithholdings;          // Input FICA withholdings
	double netPay;                    // Hold net pay
	double lowestValue = 0;           // Hold lowest value
	double grossPayTotal = 0;         // Output gross pay total
	double stateTaxTotal = 0;         // Output state tax total
	double federalTaxTotal = 0;       // Output federal tax total
	double ficaWithholdingsTotal = 0; // Output FICA withholdings Total
	double netPayTotal = 0;           // Output net pay total

	// LOOP - Ask the user for employee data
	do
	{
		// INPUT - Ask the user for employee number
		cout << "\nEnter the employee number: ";
		cin >> employeeNumber;

		// Check if the value of employee number is negative
		while (employeeNumber < lowestValue)
		{
			// Instruct the user enter a positive value
			cout << "The program will not accept negative numbers.";
			cout << "\nEnter a positive employee number: ";
			cin >> employeeNumber;
		}

		// Terminate loop if employee value is zero
		if (employeeNumber == terminate)
			break;

		// INPUT - Ask the user for gross pay
		cout << "Enter the gross pay: ";
		cin >> grossPay;

		// Check if the value of gross pay is negative
		while (grossPay < lowestValue)
		{
			// Instruct the user enter a positive value
			cout << "The program will not accept negative numbers.";
			cout << "\nEnter a positive gross pay: ";
			cin >> grossPay;
		}

		// INPUT - Ask the user for state tax
		cout << "Enter the state tax: ";
		cin >> stateTax;

		// Check if the value of state tax is negative
		while (stateTax < lowestValue)
		{
			// Instruct the user enter a positive value
			cout << "The program will not accept negative numbers.";
			cout << "\nEnter a positive state tax: ";
			cin >> stateTax;
		}

		// Check if value of state tax is greater than gross pay
		while (stateTax > grossPay)
		{
			// Instruct the user enter a value less than gross pay
			cout << fixed << setprecision(2);
			cout << "The program will not accept a state tax greater than "
				 << "the employee's gross pay " << "[$" << grossPay << "].";
			cout << "\nEnter a state tax less than the employee's gross pay: ";
			cin >> stateTax;
		}

		// INPUT - Ask the user for federal tax
		cout << "Enter the federal tax: ";
		cin >> federalTax;

		// Check if the value of federal tax is negative
		while (federalTax < lowestValue)
		{
			// Instruct the user enter a positive value
			cout << "The program will not accept negative numbers.";
			cout << "\nEnter a positive federal tax: ";
			cin >> federalTax;
		}

		// Check if value of federal tax is greater than gross pay
		while (federalTax > grossPay)
		{
			// Instruct the user enter a value less than gross pay
			cout << fixed << setprecision(2);
			cout << "The program will not accept a federal tax greater than "
				 << "the employee's gross pay " << "[$" << grossPay << "].";
			cout << "\nEnter a federal tax less than the employee's gross pay: ";
			cin >> federalTax;
		}

		// INPUT - Ask the user for FICA withholdings
		cout << "Enter the FICA withholdings: ";
		cin >> ficaWithholdings;

		// Check if the value of FICA withholdings is negative
		while (ficaWithholdings < lowestValue)
		{
			// Instruct the user enter a positive value
			cout << "The program will not accept negative numbers.";
			cout << "\nEnter positive FICA withholdings: ";
			cin >> ficaWithholdings;
		}

		// Check if value of FICA withholdings is greater than gross pay
		while (ficaWithholdings > grossPay)
		{
			// Instruct the user enter a value less than gross pay
			cout << fixed << setprecision(2);
			cout << "The program will not accept FICA withholdings greater than "
				 << "the employee's gross pay " << "[$" << grossPay << "].";
			cout << "\nEnter FICA withholdings less than the employee's gross pay: ";
			cin >> ficaWithholdings;
		}

		// Check for invalid sum of state tax, federal tax, and FICA withholdings
		if ((stateTax + federalTax + ficaWithholdings ) > grossPay)
		{
			double invalidSum = stateTax + federalTax + ficaWithholdings;
			cout << fixed << setprecision(2);
			cout << "ERROR: The sum of state tax, federal tax, and FICA withholdings "
				 << "[$" << invalidSum << "]"
				 << "\nis greater than the employee's gross pay " << "[$" << grossPay << "]."
				 << "\nPlease re-enter the data for this employee.\n";
			continue;
		}

		// Calculate net pay
		netPay = (grossPay)
			   - (stateTax + federalTax + ficaWithholdings);

		// Calculate employee data totals
		grossPayTotal += grossPay;
		stateTaxTotal += stateTax;
		federalTaxTotal += federalTax;
		ficaWithholdingsTotal += ficaWithholdings;
		netPayTotal += netPay;

	} while (employeeNumber != terminate);

	// Display weekly payroll report
	cout << fixed << showpoint << setprecision(2);
	cout << "\nGross Pay"
		 << "State Tax"
		 << "Federal Tax"
		 << "FICA withholdings"
		 << "Net Pay\n";
	cout << "$" << grossPayTotal
		 << "$" << stateTaxTotal
		 << "$" << federalTaxTotal
		 << "$" << ficaWithholdingsTotal
		 << "$" << netPayTotal;
	return 0;
}

//Abraham Juliot            CSC5           Chapter 6, P. 373, #14
/* Overloaded Hospital
_________________________________________________________________________
   This program computes and displays the charges for a patient's
   hospital stay. First, the program will ask if the patient was admitted
   as an in-patient or an out-patient. If the patient was an in-patient,
   the following data should be entered:

   	   * The number of days spent in the hospital
   	   * The daily rate
   	   * Hospital medication charges
   	   * Charges for hospital services (lab tests, etc.)

   The program will ask for the following data if the patient was an
   out-patient:

   	   * Charges for hospital services (lab tests, etc.)
   	   * Hospital medication charges

   The program will use two overloaded functions to calculate the total
   charges. One of the functions will accept arguments for the in-patient
   data, while the other function accepts arguments for out-patient
   information. Both functions should return the total charges.

   	   Input Validation: The program will not accept negative numbers for
   	   any data.
   ......................................................................
   INPUT
    patientType       : Input how the patient was admitted
    daysIn_Hospital   : Input the amount of days
	dailyRate         : Input input the daily rate
	medicationCharges : Input the medication charges
	serviceCharges    : Input the hospital service charges

   OUTPUT
    patient_Total     : Output the patient's total charges
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype(s)
double inPatient(int, double, double, double);
double outPatient(double, double);

int main()
{
	// Variables
	string patientType;        // Input how the patient was admitted
	int daysIn_Hospital,       // Input the amount of days
	    minimum = 0;           // Hold the minimum value for any data
	double dailyRate,          // Input input the daily rate
	       medicationCharges,  // Input the medication charges
	       serviceCharges,     // Input the hospital service charges
	       patient_Total;      // Output the patient's total charges


	// Ask the user how the patient was admitted
	cout << "Was the patient admitted as in-patient "
	     << "or an out-patient? "
	     << "\nEnter 'in-patient' or 'out-patient': ";
	cin >> patientType;

	// If in-patient, ask the user for the patient's data
	if (patientType == "in-patient")
	{

		// Get number of days and validate user input
		do
		{
			cout << "\nEnter the number of days "
				 <<	"spent in the hospital: ";
			cin >> daysIn_Hospital;

			// Display error message if negative
			if (daysIn_Hospital < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative numbers for any data.";
		} while (daysIn_Hospital < minimum); // Loop while negative

		// Get daily rate and validate user input
		do
		{
			cout << "\nEnter the daily rate: ";
			cin >> dailyRate;

			// Display error message if negative
			if (dailyRate < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative numbers for any data.";
		} while(dailyRate < minimum); // Loop while negative

		// Get medication charges and validate user input
		do
		{
			cout << "\nEnter the hospital medication charges: ";
			cin >> medicationCharges;

			// Display error message if negative
			if (medicationCharges < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative numbers for any data.";
		} while (medicationCharges < minimum); // Loop while negative

		// Get service charges and validate user input
		do
		{
			cout << "\nEnter the charges for "
					"hospital services (lab tests, etc.): ";
			cin >>  serviceCharges;

			// Display error message if negative
			if (serviceCharges < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative numbers for any data.";
		} while (serviceCharges < minimum); // Loop while negative

		// Call function inPatient and assign the returned value
		patient_Total = inPatient(int(daysIn_Hospital),
		               	   	   	   double(dailyRate),
		               	   	   	   double(medicationCharges),
		               	   	   	   double(serviceCharges));

		// Display the in-patient's total charges
		cout << fixed << showpoint << setprecision(2);
		cout << "\nThe in-patient's total charges amount to $"
			 << patient_Total;
	}

	// Else if out-patient, ask the user for the patient's data
	else if (patientType == "out-patient")
	{
		// Get medication charges and validate user input
		do
		{
			cout << "\nEnter the hospital medication charges: ";
			cin >> medicationCharges;

			// Display error message if negative
			if (medicationCharges < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative numbers for any data.";
		} while (medicationCharges < minimum); // Loop while negative

		// Get service charges and validate user input
		do
		{
			cout << "\nEnter the charges for "
					"hospital services (lab tests, etc.): ";
			cin >>  serviceCharges;

			// Display error message if negative
			if (serviceCharges < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative numbers for any data.";
		} while (serviceCharges < minimum); // Loop while negative

		// Call function outPatient and assign the returned value
		patient_Total = outPatient(double(medicationCharges),
		               	   	   	      double(serviceCharges));

		// Display the in-patient's total charges
		cout << fixed << showpoint << setprecision(2);
		cout << "\nThe out-patient's total charges amount to $"
			 << patient_Total;
	}

	// Else restart the program with the correct input
	else
		cout << "\nYou must enter 'in-patient' or 'out-patient'."
		     << "\nPlease restart the program with "
		     << "the correct input.";

	return 0;
}

/************************************************
 *                  inPatient                   *
 * This function accepts one integer argument   *
 * and three double arguments, calculates the   *
 * in-patients total charges, and returns the   *
 * value of the total charges.                  *
 ************************************************/

double inPatient(int(daysIn_Hospital_Copy),
   	   	         double(dailyRate_Copy),
   	   	         double(medicationCharges_Copy),
   	   	         double(serviceCharges_Copy))
{
	return (daysIn_Hospital_Copy
		   * dailyRate_Copy)
	       + medicationCharges_Copy
	       + serviceCharges_Copy;
}

/************************************************
 *                  outPatient                  *
 * This function accepts two double arguments,  *
 * calculates the out-patients total charges,   *
 * and returns the value of the total charges.  *
 ************************************************/

double outPatient(double(medicationCharges_Copy),
   	   	          double(serviceCharges_Copy))
{
	return (medicationCharges_Copy
	       + serviceCharges_Copy);
}

//Abraham Juliot            CSC5           Chapter 6, P. 374, #17
/* Paint Job Estimator
_________________________________________________________________________
   A painter company has determined that for every 115 square feet of
   wall space, one gallon of paint and eight hours of labor will be
   required. The company charges $18.00 per hour for labor.

   This modular program allows the user to enter the number of rooms that
   are to be painted and the price of the paint per gallon. The program
   will also ask for the square feet of the wall space in each room. It
   will then display the following data:

   	   * The number of gallons of paint required
   	   * The hours of labor required
   	   * The cost of the paint
   	   * The labor charges
   	   * The total cost of the paint job

   Input Validation: [1] The program will not accept a value less than 1
   for the number of rooms. [2] The program will not accept a value less
   than $10.00 for the price of the paint. [3] The program will not
   accept a negative value for square footage of wall space.
   ......................................................................
   INPUT
    roomsValue        : Input rooms painted
    paintValue        : Input paint price
    feetValue         : Input feet value

   OUTPUT
    paintGallons_Copy : Output number of gallons of paint required
    laborHours_Copy   : Output hours of labor required
    paintCost_Copy    : Output cost of the paint
    laborCharge_Copy  : Output labor charges
    totalCost_Copy    : Output total cost of the paint job
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;
int roomsPainted; // Global variable

// Function prototype(s)
int roomsFunction();
double paintFunction();
float wallFunction();
float paintJobFunction(float, float, float, float, float);

int main()
{
	// Variables
	double paintPrice_perGal;    // Hold price of paint per gallon
	float squareFeet_wallSpace;  // Hold sq. ft. of wall space per room
	int squareFeetPortion = 115, // Hold sq. ft. for paint and labor
		squareFeetSets,          // Hold sets of sq. ft. portions
        paintGallons = 1,        // Hold required gallons of paint
	    laborHours = 8;          // Hold required hours of labor
	float laborCharge = 18.00,   // Hold charge for labor
	      paintCost,             // Hold cost of paint
	      totalCost;             // Hold total cost

	// Input the number of rooms that are to be painted
    roomsPainted = roomsFunction();

	// Input the price of the paint per gallon
    paintPrice_perGal = paintFunction();

	// Input the square feet of the wall space in each room
    squareFeet_wallSpace = wallFunction();

    // Calculate total sets of square feet containing 115 feet
    squareFeetSets = squareFeet_wallSpace / squareFeetPortion;

    // Calculate total gallons of paint for each square feet set
    paintGallons *= squareFeetSets;

    // Calculate total hours of labor for each square feet set
    laborHours *= squareFeetSets;

    // Calculate the cost of the paint
    paintCost = paintGallons * paintPrice_perGal;

    // Calculate total charge for labor
    laborCharge *= laborHours;

    // Calculate the total cost
    totalCost = laborCharge + paintCost;

    // Display paint job data
    paintJobFunction(float(paintGallons),
    		 	 	 float(laborHours),
    		 	 	 float(paintCost),
    	 	 	 	 float(laborCharge),
    	 	 	 	 float(totalCost));
	return 0;
}

/************************************************
                  roomsFunction
   This function gets from the user the number of
   rooms that are to be painted and displays an
   error message if the value is less than 1. The
   input request repeats while the value is less
   than 1.
 ************************************************/

int roomsFunction()
{
	int roomsValue;  // Input rooms painted
	int minimum = 1; // Hold minimum value

	// Do and loop while roomsValue is less
	// than minimum
	do
	{
		// Get the number of rooms
		cout << "\nEnter the number of rooms "
			 << "that are to be painted: ";
		cin >> roomsValue;

		// Display error message if roomsValue
		// is less than minimum value
		if (roomsValue < minimum)
			cout << "\nERROR: The program will "
				 <<	"not accept a value "
				 << "less than " << minimum
                 << " for the number of rooms.";
	} while (roomsValue < minimum);

	// return the value of roomsValue
	return roomsValue;
}

/************************************************
                 paintFunction
   This function gets from the user the price of
   the paint per gallon and displays an error
   message if the value is less than 1. The input
   request repeats while the value is less than
   $10.00.
 ************************************************/

double paintFunction()
{
	double paintValue,      // Input paint price
	       minimum = 10.00; // Hold minimum value

	// Do and loop while paintValue is less
	// than minimum
	do
	{
		// Get the paint price
		cout << "\nEnter the price of the "
			 <<	"paint per gallon: ";
		cin >> paintValue;

		// Display error message if paintValue
		// is less than minimum value
		if (paintValue < minimum)
		cout << fixed << showpoint
		     << setprecision(2)
		     << "\nERROR: The program will not "
		     << "accept a value less than $"
		     << minimum
             << " for the price of the paint.";
	} while (paintValue < minimum);

	// return the value of paintValue
	return paintValue;
}

/************************************************
                   wallFunction
   This function gets from the square feet of the
   wall space in each room and displays and error
   message if the value is less than 0. The input
   request repeats while the value is less than
   0.
 ************************************************/

float wallFunction()
{
	float feetValue,          // Input square feet value
	      feetValueTotal = 0, // Hold square feet total
	      minimum = 0;        // Hold minimum value

	// Loop while counter is less than or equal to
	// roomsPainted and increment counter each new run
	for (int counter = 1;
		 counter <= roomsPainted; counter++)
	{
		// Do and loop while feetValue is less
		// than minimum
		do
		{
			// Get the square feet
			cout << "\nEnter the square feet "
				 <<	"of the wall "
	             <<	"space in room "
	             << counter << ": ";
		    cin >> feetValue;

			// Display error message if feetValue
			// is less than minimum value
		    if (feetValue < minimum)
		    cout << "\nERROR: The program "
		    	 <<	"will not accept "
		    	 << "a negative value "
		         << "for the square footage "
		    	 << "of wall space.";
		} while (feetValue < minimum);

	    // Calculate the square feet total
		feetValueTotal += feetValue;
	}

	// Return the value of feetValueTotal
	return feetValueTotal;
}

/************************************************
                paintJobFunction
   This function displays the following data, the
   number of gallons of paint required, the hours
   of labor required, the cost of the paint, the
   labor charges, and the total cost of the paint
   job.
 ************************************************/

float paintJobFunction(float(paintGallons_Copy),
	 	 	 	 	   float(laborHours_Copy),
	 	 	 	 	   float(paintCost_Copy),
	 	 	 	 	   float(laborCharge_Copy),
	 	 	 	 	   float(totalCost_Copy))
{
	// Display paint job data
	cout << "\nThe number of gallons of paint "
		 <<	"required is "
		 << paintGallons_Copy
    	 << "\nThe hours of labor required is "
    	 << laborHours_Copy
    	 << fixed << showpoint << setprecision(2)
         << "\nThe cost of the paint is $"
         << paintCost_Copy
         << "\nThe charge for labor is $"
         << laborCharge_Copy
         << "\nThe total cost of "
         << "the paint job is $"
         << totalCost_Copy;
    return 0;
}

//Abraham Juliot            CSC5           Chapter 6, P. 371, #8
/* Coin Toss
_________________________________________________________________________
   This program asks the user how many times a coin should be tossed, and
   then simulates the tossing of the coin that number of times. The
   program will then display "heads" or "tails."
   ......................................................................
   INPUT
    timesTossed    : Input amount of times coin will be tossed
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time function
using namespace std;

// Function prototype(s)
void coinToss(int);

int main()
{
	// Local Variable(s)
	int timesTossed; // Input amount of times coin will be tossed

	// Asks the user how many times a coin should be tossed
	cout << "How many times should the coin be tossed? ";
	cin >> timesTossed;

	// Generate random number(s) and display "heads" or "tails"
	coinToss(timesTossed);

	return 0;
}

/************************************************************************
 *                               coinToss
 * This function simulates the tossing of a coin. When the function is
 * called, it generates a random number in the range of 1 through 2. If
 * the random number is 1, the function should display "heads." If the
 * random number is 2, the function should display "tails."
 ************************************************************************/
void coinToss(int timesTossed_Copy)
{
	// Local Variable(s)
	int randomNumber;             // Hold a random number between 1 and 2
	unsigned int seed = time(0);  // Assign the system time to seed

	// Run the simulation of the coin toss in a controlled loop
	for (int counter = timesTossed_Copy; counter > 0; counter-- )
	{
		// Assign a random number between 1 and 2 to randomNumber
		srand(seed);
		randomNumber = 1 + rand() % 2;
	}

	// Display "heads" or "tails"
	if (randomNumber == 1)
		cout << "heads";

	if (randomNumber == 2)
		cout << "tails";

	return;
}

//Abraham Juliot            CSC5           Chapter 6, P. 373, #15
/* Population
_________________________________________________________________________
   This program displays the size of a population for any number of
   years. The program will ask for the following data:

   	   * The starting size of a population
   	   * The annual birth rate
   	   * The annual death rate
   	   * The number of years to display

   After the program receives data input, it will calculate the size of
   the population for a year.

   	   Input Validation: [1] The program will not accept numbers less
   	   than 2 for the starting size. [2] The program will not accept
   	   negative numbers for birth rate or death rate. [3] The program
   	   will not accept numbers less than 1 for the number of years.
   ......................................................................
   INPUT
    populationSize         : Input population size
	yearsNumber            : Input number of years
	float annualBirthRate  : Input annual birth rate %
    annualDeathRate        : Input annual death rate %

   OUTPUT
    newPopulation          : Output new population
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype(s)
void populationData(int &, float &, float &, int &);
void newPopulationSize(int, float, float, int);

int main()
{
	// Local Variable(s)
	int populationSize,    // Input population size
	    yearsNumber;       // Input number of years
	float annualBirthRate, // Input annual birth rate %
		  annualDeathRate; // Input annual death rate %

	// Get population data
	populationData(populationSize,
			       annualBirthRate,
			       annualDeathRate,
			       yearsNumber);

	// Display the size of the population
	newPopulationSize(populationSize,
		       	   annualBirthRate,
		       	   annualDeathRate,
		       	   yearsNumber);
	return 0;
}

/************************************************************************
 *                            populationData
 * This program gets the following data from the user:
 *
 *  	   * The starting size of a population
 *  	   * The annual birth rate
 *  	   * The annual death rate
 *  	   * The number of years to display
 *
 * An error message is displayed if the user: [1] Enters a number less
 * than 2 for the starting size. [2] Enters a negative a number for birth
 * rate or death rate. [3] Enters a number less than 1 for the number of
 * years. After an error message is displayed, the program will
 * re-request data from the user until valid input is received.
 ************************************************************************/
void populationData(int &populationSize_Ref,
		            float &annualBirthRate_Ref,
		            float &annualDeathRate_Ref,
		            int &yearsNumber_Ref)
{
	// Get population data
	// Do not accept numbers less than 2 for the starting size
	do
	{
		// Get the starting size of a population
		cout << "Enter the starting size of a population: ";
		cin >> populationSize_Ref;

		// Display error message if true
		if (populationSize_Ref < 2)
			cout << "\nERROR: The program will not accept "
		         << "a starting size less than 2.\n";
	} while (populationSize_Ref < 2); // Run loop if true

	// Do not accept negative numbers for the birth rate
	do
	{
		// Get the annual birth rate
		cout << "\nEnter the annual birth rate %: ";
		cin >> annualBirthRate_Ref;

		// Display error message if true
		if (annualBirthRate_Ref < 0)
		    cout << "\nERROR: The program will not accept "
		    	 <<	"negative numbers for the birth rate.";
	} while (annualBirthRate_Ref < 0); // Run loop if true

	// Do not accept negative numbers for the death rate
	do
	{
		// Get the annual death rate
		cout << "\nEnter the annual death rate %: ";
		cin >> annualDeathRate_Ref;

		// Display error message if true
		if (annualDeathRate_Ref < 0)
			cout << "\nERROR: The program will not accept "
				 <<	"negative numbers for the death rate.";

	} while (annualDeathRate_Ref < 0); // Run loop if true

	// Do not accept numbers less than 1 for the number of years
	do
	{
		// Get the number of years to display
		cout << "\nEnter the number of years to display: ";
		cin >> yearsNumber_Ref;

		// Display error message if true
		if (yearsNumber_Ref < 1)
			cout << "\nERROR: The program will not accept "
			     <<	"numbers less than 1 for the number of years.";
	} while (yearsNumber_Ref < 1); // Run loop if true

	return;
}

/************************************************************************
 *                            populationData
 * This program calculates the birth rate and death rate percent, then
 * the program calculates and displays the new population size after the
 * number of years that the user previously entered.
 ************************************************************************/
void newPopulationSize(int populationSize_Copy,
		               float annualBirthRate_Copy,
		               float annualDeathRate_Copy,
		               int yearsNumber_Copy)
{
	// Local Variable(s)
	int newPopulation = populationSize_Copy; // Output new population
	int birthRatePercent,                    // Hold birth rate %
		deathRatePercent;                    // Hold death rate %

	// Calculate birth rate and death rate percent
	birthRatePercent = (populationSize_Copy * annualBirthRate_Copy) / 100;
	deathRatePercent = (populationSize_Copy * annualDeathRate_Copy) / 100;


	// Calculate the population size after so many years
	for (int counter = yearsNumber_Copy; counter > 0; counter--)
	{
		// Add the birth rate % and subtract the death rate % each year
		newPopulation += birthRatePercent
	 	 	 	       - deathRatePercent;
	}

	// Display population size
	cout << "\nThe new population size after "
		 << yearsNumber_Copy << " years is " << newPopulation;

	return;
}

//Abraham Juliot            CSC5           Chapter 7, P. 444, #1
/* Largest/ Smallest Array Values
_________________________________________________________________________
   This program lets the user enter 10 values into an array. The program
   should then display the largest and smallest values stored in the
   array.

   	   Input Validation: There is no input validation
   ......................................................................
   INPUT
    array[]             : Input 10 values

   OUTPUT
    highest_Value       : Output the highest value
    lowest_Value        : Output the lowest value
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constant element size of array[]
	const int ELEMENTS = 10;  // Hold element size for array[]

	// Array declaration
	int array[ELEMENTS];      // Input 10 values

	// Get 10 values from the user and store in array[]
	int value_num = 1; // Output the value number

	for (int count = 0; count < ELEMENTS; count++)
	{
		cout << "\nEnter value #" << value_num << ": ";
		cin >> array[count];
		value_num++;
	}

	// Assign the highest value to highest_Value
	int highest_Value = array[0]; // Output the highest value

	for (int count = 1; count < ELEMENTS; count++)
	{
		if (array[count] > highest_Value)
			highest_Value = array[count];
	}

	// Assign the lowest value to lowest_Value
	int	lowest_Value = array[0];  // Output the lowest value

	for (int count = 1; count < ELEMENTS; count++)
	{
		if (array[count] < lowest_Value)
		lowest_Value = array[count];
	}

	// Display the highest and the lowest value
	cout << "\nThe highest value is " << highest_Value
		 << " and the lowest value is " << lowest_Value << ".\n";

	return 0;
}

//Abraham Juliot            CSC5           Chapter 7, P. 444, #2
/* Rainfall Statistics
_________________________________________________________________________
   This program lets the user enter the total rainfall for each of 12
   months into an array of doubles. The program should calculate and
   display the total rainfall for the year, the average monthly rainfall,
   and the months with the highest and lowest amounts.

   	   Input Validation: The program will not accept negative numbers for
   	   monthly rainfall figures.
   ......................................................................
   INPUT
    rainfall[ELEMENTS] : Input 12 values

   OUTPUT
    minimum            : Display minimum value
    total              : Output the total rainfall for the year
    average            : Output the average monthly rainfall
    lowest             : Output the lowest value
    highest            : Output the highest value
    month_Highest      : Output the month(s) with the highest value
    month_Lowest       : Output the month(s) with the lowest value
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variable
	double total = 0,  // Output the total rainfall for the year
	       average;    // Output the average monthly rainfall

	// Constant element size of rainfall[]
	const int ELEMENTS = 12;   // Hold element size for rainfall[]

	// Array declaration
	double rainfall[ELEMENTS]; // Input 12 values

	// Get monthly rainfall figures
	for (int count = 0; count < ELEMENTS; count++)
	{
		int minimum = 0; // Display minimum value

		// Display and loop while true
		do
		{
			cout << "\nEnter the rainfall for month "
				 << (count+1) << ": ";
			cin >> rainfall[count];

			if (rainfall[count] < minimum)
			    cout << "\nERROR: The program will not numbers "
			    	 <<	"less than " << minimum
			    	 << " for rainfall figures.\n";
		} while (rainfall[count] < minimum);

		// Calculate the total rainfall for the year
		total += rainfall[count];
	}

	// Display the total monthly rainfall
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe total rainfall for the year is " << total;

	// Calculate the average monthly rainfall
	average = total / ELEMENTS;

	// Display the average monthly rainfall
	cout << "\nThe total monthly rainfall is " << average;

	// Calculate and display the month(s) with the highest amount
	int month_Highest = 1; // Output the month(s) with the highest value
	double highest = rainfall[0]; // Output the highest value

	for (int count = 1; count < ELEMENTS; count++)
	{
		if (rainfall[count] > highest)
		{
			highest = rainfall[count];
			month_Highest = (count+1);
		}
	}

	cout << "\nMonth(s) with " << highest
		 << " as the highest rainfall: Month(s) ["
		 << month_Highest << "] ";

	for (int count = month_Highest; count < ELEMENTS; count++)
	{
		if (rainfall[count] == highest)
		cout << "[" << (count+1) << "] ";
	}

	// Calculate and display the month(s) with the lowest amount
	int month_Lowest = 1; // Output the month(s) with the lowest value
	double lowest = rainfall[0]; // Output the lowest value

	for (int count = 1; count < ELEMENTS; count++)
	{
		if (rainfall[count] < lowest)
		{
			lowest = rainfall[count];
			month_Lowest = (count+1);
		}
	}

	cout << "\nMonth(s) with " << lowest
		 << " as the lowest rainfall: Month(s) ["
		 << month_Lowest << "] ";

	for (int count = month_Lowest; count < ELEMENTS; count++)
	{
		if (rainfall[count] == lowest)
		cout << "[" << (count+1) << "] ";
	}

	return 0;
}

//Abraham Juliot            CSC5           Chapter 7, P. 444, #3
/* Chips and Salsa
_________________________________________________________________________
   This program lets a maker of chips and salsa keep track of sales for
   five different types of salsa: mild, medium, sweet, hot, and zesty.
   The program will use two parallel 5-element arrays: an array of
   strings that holds the five salsa names and an array of integers that
   holds the number of jars sold during the past month for each salsa
   type. The salsa names will be stored using an initialization list at
   the time the name array is created. The program will prompt the user
   to enter the number of jars sold for each type. Once this sales data
   has been entered, the program will produce a report that displays
   sales for each salsa type, total sales, and the names of the highest
   selling and lowest selling products.

   	   Input Validation: The program will not accept negative values for
   	   numbers of jars sold.
   ......................................................................
   INPUT
	salsa_Jars_Sold[]  : Input Jars sold

   OUTPUT
    salsa_Jars_Sold[]  : Output Jars sold
    salsa_Names[]      : Output salsa names
    string mild        : Output salsa type
    medium             : Output salsa type
	sweet = "Sweet"    : Output salsa type
	hot = "Hot"        : Output salsa type
	zesty = "Zesty"    : Output salsa type
	int total          : Output total salsa jars sold
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// Variable declaration
	string mild = "Mild",     // Output salsa type
	       medium = "Medium", // Output salsa type
	       sweet = "Sweet",   // Output salsa type
	       hot = "Hot",       // Output salsa type
	       zesty = "Zesty";   // Output salsa type
	int total = 0;            // Output total salsa jars sold

	// Declare element size for parallel arrays
	const int ELEMENT_SIZE = 5; // Hold element size

	// Declare parallel arrays
	string salsa_Names[ELEMENT_SIZE] = {mild,   // Output salsa names
			                            medium,
			                            sweet,
			                            hot,
			                            zesty};
	int salsa_Jars_Sold[ELEMENT_SIZE];          // Input Jars sold

	// Prompt the user to enter the sales data for each type of salsa
	for (int count = 0; count < ELEMENT_SIZE; count++)
	{
		int minimum = 0; // Hold minimum acceptable value

		// Get sales data and loop if true
		do
		{
			cout << "\nEnter the number of jars sold for "
				 << salsa_Names[count] << " Salsa: ";
			cin >> salsa_Jars_Sold[count];

			// Calculate new total
			if (salsa_Jars_Sold[count] > minimum)
			total += salsa_Jars_Sold[count];

			// Display error message if true
			if (salsa_Jars_Sold[count] < minimum)
				cout << "\nERROR: The program will not accept "
					 <<	"negative values for numbers of jars sold.\n";
		} while (salsa_Jars_Sold[count] < minimum);
	}

	// Display sales for each salsa type
	cout << "\nSALSA SALES"
	     << "\n--------------------------------------------------\n";

	for (int count = 0; count < ELEMENT_SIZE; count++)
	{
		cout << left << setw(11) << salsa_Names[count];
	}

	cout << endl;

	for (int count = 0; count < ELEMENT_SIZE; count++)
	{
		cout << left << setw(11) << salsa_Jars_Sold[count];
	}

	cout << endl;
	cout << "\n--------------------------------------------------";

	// Display the total sales
	cout << "\nTotal Jars Sold: " << total << endl;

	// Find and assign the highest selling salsa
	int highest = salsa_Jars_Sold[0];    // Hold highest salsa type sold
    int highest_Selling = 0;                 // Hold highest selling element

	for (int count = 1; count < ELEMENT_SIZE; count++)
	{
		if (salsa_Jars_Sold[count] > highest)
		{
			highest = salsa_Jars_Sold[count];
			highest_Selling = count;
		}
	}

	cout << "\nHighest selling salsa(s)\n"
		 <<	"------------------------";

	// Display the highest selling salsa(s)
	for (int count = highest_Selling; count < ELEMENT_SIZE; count++)
	{
		if (salsa_Jars_Sold[count] == highest)
		cout << "\n\t* " << salsa_Names[count] << " Salsa";
	}

	// Find and assign the lowest selling salsa
	int lowest = salsa_Jars_Sold[0];     // Hold lowest salsa type sold
    int lowest_Selling = 0;              // Hold lowest selling element

	for (int count = 1; count < ELEMENT_SIZE; count++)
	{
		if (salsa_Jars_Sold[count] < lowest)
		{
			lowest = salsa_Jars_Sold[count];
			lowest_Selling = count;
		}
	}

	cout << "\n\nLowest selling salsa(s)\n"
		 <<	"------------------------";

	// Display the lowest selling salsa(s)
	for (int count = lowest_Selling; count < ELEMENT_SIZE; count++)
	{
		if (salsa_Jars_Sold[count] == lowest)
		cout << "\n\t* " << salsa_Names[count] << " Salsa";
	}

	return 0;
}

//Abraham Juliot            CSC5           Chapter 7, P. 447, #11
/* Grade Book
_________________________________________________________________________
   This program uses an array of string objects to hold five student
   names, an array of five characters to hold five students' letter
   grades, and five arrays of four doubles to hold each student's set of
   test scores. The program will allow the user to enter each student's
   name and his or her four test scores. It should then calculate and
   display each student's average test score and a letter grade based on
   the average.

   	   Input Validation: The program will not accept test scores less
   	   than 0 or greater than 100.
   ......................................................................
   INPUT
    studentNames[]    : Input each student's name
    studentScores[][] : Input each student's scores

   OUTPUT
	studentNames[]    : Output each student's name
	studentScores[][] : Ouptut each student's scores
	studentAverage    : Output the students' average score
	studentGrades[]   : Output student's average letter grade
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	//______________________________DEFINITIONS_______________________________

	// Variables
	double studentAverage;   // Output the students' average score
	double studentTotal;     // Hold the student's total of scores

	// Element declarations
	const int ELEMENT_NAMES = 5, // Hold 5 names
			  ELEMENT_TESTS = 4; // Hold 4 test scores

	// Array declarations
	string studentNames[ELEMENT_NAMES]; // Input/ Output each student's name
	char studentGrades[ELEMENT_NAMES];  // Output student's average letter
										// grade
	double studentScores[ELEMENT_NAMES][ELEMENT_TESTS]; // Input/ Output each
													    // student's scores

	//________________________________________________________________________

	// Get each student's names and each student's 4 test score
	// Loop through each of the 5 students
	for (int row = 0; row < ELEMENT_NAMES; row++)
	{
		cout << "\nEnter the name of student #"
			 << (row+1) << ": ";
		cin >> studentNames[row];

		// Request the student's scores
		cout << "\nEnter his or her scores:";

        // Get each student's 4 test scores
        // Loop through each of the 4 tests of the student
		for (int column = 0; column < ELEMENT_TESTS; column++)
		{
			// Get the student's test score and loop if the input is invalid
			do
			{
				cout << "\n\t* Test #"
					 << (column+1) << ": ";
				cin >> studentScores[row][column];

				// Do not accept test scores less than 0 or greater than 100
				if (studentScores[row][column] < 0
					|| studentScores[row][column] > 100)
				{
					// Display error message if input is invalid
					cout << "\nERROR: The program will not accept "
						 << "test scores less than 0 or greater than 100.";
				}
			} while (studentScores[row][column] < 0
					|| studentScores[row][column] > 100);
		}
	}

	// Calculate and display each student's average test score
	// Loop through each of the 5 students
	for (int row = 0; row < ELEMENT_NAMES; row++)
	{
		// Assign zero to the student's total variable
		studentTotal = 0; // Hold the student's total of scores

	    // Loop through each of the 4 tests of the student
		for (int column = 0; column < ELEMENT_TESTS; column++)
		{
			// Calculate the new total for the student's test scores
			studentTotal += studentScores[row][column];
		}

		// Calculate the student's average score
		studentAverage = studentTotal / ELEMENT_TESTS; // Student's score total
 													   // divided by tests
		// Display the student's average test score
		cout << fixed << showpoint << setprecision(1);
		cout << "\nThe average test score for " << studentNames[row]
		     << " is " << studentAverage; // Allow the line to continue

		// Display the student's average letter grade
		// Display an "A" if true
		if (studentAverage >= 90 && studentAverage <= 100)
		{
			// Assign the proper letter to the array studentGrades[]
			studentGrades[row] = 'A';

			// Display the letter grade from the array studentGrades[]
			cout << ", which is an " << studentGrades[row];
		}

		// Else Display a "B" if true
		else if (studentAverage >= 80 && studentAverage <= 89)
		{
			// Assign the proper letter to the array studentGrades[]
			studentGrades[row] = 'B';

			// Display the letter grade from the array studentGrades[]
			cout << ", which is a " << studentGrades[row];
		}

		// Else Display a "C" if true
		else if (studentAverage >= 70 && studentAverage <= 79)
		{
			// Assign the proper letter to the array studentGrades[]
			studentGrades[row] = 'C';

			// Display the letter grade from the array studentGrades[]
			cout << ", which is a " << studentGrades[row];
		}

		// Else Display a "D" if true
		else if (studentAverage >= 60 && studentAverage <= 69)
		{
			// Assign the proper letter to the array studentGrades[]
			studentGrades[row] = 'D';

			// Display the letter grade from the array studentGrades[]
			cout << ", which is a " << studentGrades[row];
		}

		// Else Display an "F" if true
		else
		{
			// Assign the proper letter to the array studentGrades[]
			studentGrades[row] = 'F';

			// Display the letter grade from the array studentGrades[]
			cout << ", which is an " << studentGrades[row];
		}
	}
	return 0;
}

//Abraham Juliot            CSC5           Chapter 7, P. 444, #4
/* Monkey Business
_________________________________________________________________________
   This program stores, in a two dimensional 3 x 7 array, how many pounds
   of food each of three monkeys eats each day during a typical week.
   Each row in the array represents a different monkey and each column
   represents a different day of the week. The program will first have
   the user input the data for each monkey. Then it will create a report
   that includes the following information:

   	   * Average amount of food eaten per day by the whole family of
   	     monkeys.
   	   * The least amount of food  eaten during the week by any one
   	     monkey.
   	   * The greatest amount of food eaten during the week by any one
   	     monkey.

   	   Input Validation: The program will not accept negative numbers for
   	   pounds of food eaten.
   ......................................................................
   INPUT
	monkeyFood[MONKEY][DAY]  : Input each monkey's food per day

   OUTPUT
    minimum                  : Output minimum acceptable amount
    average;                 : Output the average amount of food
    monkeyHighest = 1        : Output the monkey with highest food
    monkeyLowest = 1         : Output the monkey with highest food
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variable declaration
	double total = 0,      // Hold total amount of food
		   average;        // Output the average amount of food

	// array element declarations
	const int MONKEY = 3,  // Hold each monkey
	          DAY = 7;     // Hold each day of the week

	// 2 dimensional array
	double monkeyFood[MONKEY][DAY]; // Input each monkey's food per day

	// Get monkey data from the user
	for (int row = 0; row < MONKEY; row++)
	{
		cout << "\nHow many pounds of food did monkey #"
			 << (row+1) << " eat: ";

		// Input each monkey's food per day
		for (int column = 0; column < DAY; column++)
		{
			int minimum = 0;  // Output minimum acceptable amount

			do
			{
				cout << "\n\t\t* Enter day " << (column+1) << " amount: ";
				cin >> monkeyFood[row][column];

				// Display error message if true
				if (monkeyFood[row][column] < minimum)
				{
					cout << "\nERROR: The program will not accept "
						 <<	"negative numbers for pounds of food eaten.";
				}
				else // Calculate total amount of food
					total += monkeyFood[row][column];

			} while (monkeyFood[row][column] < minimum);
		}
	}

	// Calculate average amount of food
	average = total / (MONKEY * DAY);

	// Display the average amount of food
	cout << fixed << showpoint << setprecision(1);
	cout << "\nThe average amount of food eaten per day "
		 <<	"by the whole family of monkeys is " << average << " pounds "
		 << "of food.";

	// Calculate and display the monkey with the greatest amount of food
	int monkeyHighest = 1; // Output the monkey with highest food
    double highest = monkeyFood[0][0];

	for (int row = 0; row < MONKEY; row++)
	{
		for (int column = 1; column < DAY; column++)
		{
			if (monkeyFood[row][column] > highest)
			{
				highest = monkeyFood[row][column];
				monkeyHighest = (row+1);
			}
		}
	}

	cout << "\nMonkey " << monkeyHighest << " ate the greatest amount of food "
		 << "[" << highest << " pounds]" <<  " during the week.";

	// Calculate and display the monkey with the least amount of food
	int monkeyLowest = 1; // Output the monkey with least food
    double lowest = monkeyFood[0][0];

	for (int row = 0; row < MONKEY; row++)
	{
		for (int column = 1; column < DAY; column++)
		{
			if (monkeyFood[row][column] < lowest)
			{
				lowest = monkeyFood[row][column];
				monkeyLowest = (row+1);
			}
		}
	}

	cout << "\nMonkey " << monkeyLowest << " ate the least amount of food "
		 << "[" << lowest << " pounds]" <<  " during the week.";

	return 0;
}

//Abraham Juliot            CSC5           Chapter 8, P. 487, #1
/* Charge Account Validation
_________________________________________________________________________
   This program lets the user enter a charge account number. The program
   will determine if the number is valid by checking for it in the
   following list:

   5658845		4520125		7895122		8777541		8451277		1302850
   8080152		4562555		5552012		5050552		7825877		1250255
   1005231		6545231		3852085		7576651		7881200		4581002

   The list above will be initialized in a single-dimensional array. A
   simple linear search will be used to locate the number entered by the
   user. If the user enters a number that is in the array, the program
   will display a message saying that the number is valid. If the user
   enters a number that is not in the array, the program will display a
   message indicating that the number is invalid.

   	   Input Validation: The program does not validate user input
   ......................................................................
   INPUT
    accountNumber       : Input charge account number

   OUTPUT
    accountNumber       : Output charge account number
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

/************************************************************************
 *  								searchList
 * This integer function performs a linear search on an integer array.
 * The array list, which has a maximum of numElems elements, is searched
 * for the number stored in value. If the number is found, its array
 * subscript is returned. Otherwise, -1 is returned indicating the value
 * was not in the array.
 ************************************************************************/
int searchList(const int list[], int numElems, int value);

const int numListSize = 18;

int main()
{
	// Variable Definition(s)
	int accountNumber, // Input/ Output charge account number
	    results;       // Hold the results from the searchList function

	// Get a charge account number from the user
	cout << "Enter a charge account number: ";
	cin >> accountNumber;

	// Array Definition(s)
	int numberList[numListSize] = {5658845,
								   4520125,
								   7895122,
								   8777541,
								   8451277,
								   1302850,
								   8080152,
								   4562555,
								   5552012,
								   5050552,
								   7825877,
								   1250255,
								   1005231,
								   6545231,
								   3852085,
								   7576651,
								   7881200,
								   4581002};

	// Search the array for the value of accountNumber
	results = searchList(numberList, numListSize, accountNumber);

	// If searchList returned -1, then accountNumber was not found
	if (results == -1)
		cout << "\nThe number " << accountNumber << " is invalid";
	else
	{
		// Otherwise results contain the subscript of the first value
		// of accountNumber found in the array
		cout << "\nThe number " << accountNumber << " is valid";
	}

	return 0;
}

/************************************************************************
 * 								searchList
 * The searchList function performs a linear search on an integer array.
 ************************************************************************/
int searchList(const int list[], int numElems, int value)
{
	int index = 0;      // Used as a subscript to search array
	int position = -1;  // To record position of search value
	bool found = false; // Flag to indicate if the value was found

	while (index < numElems && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true;     // Set the flag
			position = index; // Record the value's subscript
		}
		index++;              // Go to the next element
	}
	return position;          // Return the position, or -1
}

//Abraham Juliot            CSC5           Chapter 8, P. 487, #2
/* Lottery Winners
_________________________________________________________________________
   This program initializes an array with 10 5-digit lottery numbers and
   then lets the user enter this week's winning 5-digit number. The
   program will perform a linear search through the list of the player's
   numbers and report whether or not one of the tickets is a winner
   this week. The numbers within the array are:

   13579		26791		26792		33445		55555
   62483		77777		79422		85647		93121

   	   Input Validation: The program does not validate user input.
   ......................................................................
   INPUT
    winningNumber     : Input the winning lottery number

   OUTPUT
    winningNumber     : Output the winning lottery number
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

// Function Prototype
/************************************************************************
 *  								searchList
 * This integer function performs a linear search on an integer array.
 * The array list, which has a maximum of numElems elements, is searched
 * for the number stored in value. If the number is found, its array
 * subscript is returned. Otherwise, -1 is returned indicating the value
 * was not in the array.
 ************************************************************************/
int searchList(const int list[], int numElems, int value);

const int lotteryNumSize = 10;

int main()
{
	// Variable Definition(s)
	int winningNumber,  // Input/ Output the winning lottery number
	    results;        // To hold the search results

	// Array Definition(s)
	int lotteryNumbers[lotteryNumSize] = {13579,
							 	 	 	  26791,
							              26792,
							              33445,
										  55555,
										  62483,
										  77777,
										  79422,
										  85647,
										  93121};

	// Get the winning number from the user to search for
	cout << "Enter the winning lottery number: ";
	cin >> winningNumber;

	// Search the array for the winningNumber
	results = searchList(lotteryNumbers, lotteryNumSize, winningNumber);

	// If results contains -1 the winning lottery number was not found
	if (results == -1)
		cout << "\nThe lottery number " << winningNumber
		     << " is not a winning ticket this week.";
	else
	{
		// Otherwise results contains the subscript of the specified
		// lottery number in the array
		cout << "\nThe lottery number " << winningNumber
			 << " is a winning ticket this week.";
	}
	return 0;
}

/************************************************************************
 * 								searchList
 * The searchList function performs a linear search on an integer array.
 ************************************************************************/
int searchList(const int list[], int numElems, int value)
{
	int index = 0;      // Used as a subscript to search array
	int position = -1;  // To record position of search value
	bool found = false; // Flag to indicate if the value was found

	while (index < numElems && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true;     // Set the flag
			position = index; // Record the value's subscript
		}
		index++;              // Go to the next element
	}
	return position;          // Return the position, or -1
}

//Abraham Juliot            CSC5           Chapter 8, P. 487, #3
/* Lottery Winners Modification
_________________________________________________________________________
   This program initializes an array with 10 5-digit lottery numbers and
   then lets the user enter this week's winning 5-digit number. The
   program will perform a binary search through the list of the player's
   numbers and report whether or not one of the tickets is a winner
   this week. The selection sort algorithm is used to sort the list 
   before the binary search is performed. The numbers within the array 
   are:

   13579		26791		26792		33445		55555
   62483		77777		79422		85647		93121

   	   Input Validation: The program does not validate user input.
   ......................................................................
   INPUT
    winningNumber     : Input the winning lottery number

   OUTPUT
    winningNumber     : Output the winning lottery number
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

// Function Prototype(s)
/************************************************************************
 *  							binarySearch
 * This integer function performs a binary search on an integer array,
 * which has a maximum of size elements, is searched for the number
 * stored in value. If the number is found, its array subscript is
 * returned. Otherwise, -1 is returned indicating the value was not in
 * the array.
 ************************************************************************/
int binarySearch(const int array[], int numElems, int value);

/************************************************************************
 * 								sortArray
 * This void function performs an ascending order bubble sort on array.
 * Size is the number of elements in the array.
 ************************************************************************/
void sortArray(int array[], int size);

const int lotteryNumSize = 10;

int main()
{
	// Variable Definition(s)
	int winningNumber,  // Input/ Output the winning lottery number
	    results;        // To hold the search results

	// Array of unsorted values
	int lotteryNumbers[lotteryNumSize] = {13579,
							 	 	 	  26791,
							              26792,
										  55555,
										  62483,
										  77777,
										  79422,
							              33445,
										  85647,
										  93121};

	// Sort the values for the binarySearch function
	sortArray(lotteryNumbers, lotteryNumSize);

	// Get the winning number from the user to search for
	cout << "Enter the winning lottery number: ";
	cin >> winningNumber;

	// Search the array for the winningNumber
	results = binarySearch(lotteryNumbers, lotteryNumSize, winningNumber);

	// If results contains -1 the winning lottery number was not found
	if (results == -1)
		cout << "\nThe lottery number " << winningNumber
		     << " is not a winning ticket this week.";
	else
	{
		// Otherwise results contains the subscript of the specified
		// lottery number in the array
		cout << "\nThe lottery number " << winningNumber
			 << " is a winning ticket this week.";
	}
	return 0;
}

/************************************************************************
 * 								binarySearch
 * The BinarySearch function performs a binary search on an integer
 * array.
 ************************************************************************/
int binarySearch(const int array[], int numElems, int value)
{
	int first = 0,            // First array element
		last = numElems - 1,  // Last array element
		middle,               // Midpoint of search
		position = -1;        // Position of search value
	bool found = false;       // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;  // Calculate midpoint
		if (array[middle] == value)   // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)  // If value is in lower half
			last = middle - 1;
		  else
		    first = middle + 1;          // If value is in upper half
	}
	return position;
}

/************************************************************************
 * 								sortArray
 * This function performs an ascending order bubble sort on array.
 * Size is the number of elements in the array.
 ************************************************************************/
void sortArray(int array[], int size)
{
	bool swap;
	int temp;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

//Abraham Juliot            CSC5           Chapter 8, P. 488, #5
/* Rainfall Statistics Modification
_________________________________________________________________________
   This program lets the user enter the total rainfall for each of 12
   months into an array of doubles. The program should calculate and
   display the total rainfall for the year, the average monthly rainfall,
   and the months with the highest and lowest amounts. The program will
   also display a list of the rainfall, from highest to lowest.

   	   Input Validation: The program will not accept negative numbers for
   	   monthly rainfall figures.
   ......................................................................
   INPUT
    rainfall[ELEMENTS] : Input 12 values

   OUTPUT
    minimum            : Display minimum value
    total              : Output the total rainfall for the year
    average            : Output the average monthly rainfall
    lowest             : Output the lowest value
    highest            : Output the highest value
    month_Highest      : Output the month(s) with the highest value
    month_Lowest       : Output the month(s) with the lowest value
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

// function prototype(s)
/************************************************************************
 * 							selectionSort
 * This void function performs an ascending order selection sort on
 * array. Size is the number of elements in the array.
 ************************************************************************/
void selectionSort(double array[], int size);

/************************************************************************
 * 								showAray
 * This void function displays the contents of array. Size is the number
 * of elements.
 ************************************************************************/
void showArray(const double array[], int size);


int main()
{
	// Variable(s)
	double total = 0,  // Output the total rainfall for the year
	       average;    // Output the average monthly rainfall

	// Constant element size of rainfall[]
	const int ELEMENTS = 12;   // Hold element size for rainfall[]

	// Array declaration
	double rainfall[ELEMENTS]; // Input 12 values

	// Get monthly rainfall figures
	for (int count = 0; count < ELEMENTS; count++)
	{
		int minimum = 0; // Display minimum value

		// Display and loop while true
		do
		{
			cout << "\nEnter the rainfall for month "
				 << (count+1) << ": ";
			cin >> rainfall[count];

			if (rainfall[count] < minimum)
			    cout << "\nERROR: The program will not numbers "
			    	 <<	"less than " << minimum
			    	 << " for rainfall figures.\n";
		} while (rainfall[count] < minimum);

		// Calculate the total rainfall for the year
		total += rainfall[count];
	}

	// Display the total monthly rainfall
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe total rainfall for the year is " << total;

	// Calculate the average monthly rainfall
	average = total / ELEMENTS;

	// Display the average monthly rainfall
	cout << "\nThe total monthly rainfall is " << average;

	// Calculate and display the month(s) with the highest amount
	int month_Highest = 1; // Output the month(s) with the highest value
	double highest = rainfall[0]; // Output the highest value

	for (int count = 1; count < ELEMENTS; count++)
	{
		if (rainfall[count] > highest)
		{
			highest = rainfall[count];
			month_Highest = (count+1);
		}
	}

	cout << "\nMonth(s) with " << highest
		 << " as the highest rainfall: Month(s) ["
		 << month_Highest << "] ";

	for (int count = month_Highest; count < ELEMENTS; count++)
	{
		if (rainfall[count] == highest)
		cout << "[" << (count+1) << "] ";
	}

	// Calculate and display the month(s) with the lowest amount
	int month_Lowest = 1; // Output the month(s) with the lowest value
	double lowest = rainfall[0]; // Output the lowest value

	for (int count = 1; count < ELEMENTS; count++)
	{
		if (rainfall[count] < lowest)
		{
			lowest = rainfall[count];
			month_Lowest = (count+1);
		}
	}

	cout << "\nMonth(s) with " << lowest
		 << " as the lowest rainfall: Month(s) ["
		 << month_Lowest << "] ";

	for (int count = month_Lowest; count < ELEMENTS; count++)
	{
		if (rainfall[count] == lowest)
		cout << "[" << (count+1) << "] ";
	}

	// Sort the values of the array rainfall
	selectionSort(rainfall, ELEMENTS);

	// Display the values of the array rainfall
	cout << "\nThe sorted rainfall from highest to lowest: \n";
	showArray(rainfall, ELEMENTS);

	return 0;
}

/************************************************************************
 * 							selectionSort
 * This function performs an ascending order selection sort on array.
 * Size is the number of elements in the array.
 ************************************************************************/
void selectionSort(double array[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < size; index++)
		{
			if (array[index] > minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

/************************************************************************
 * 								showAray
 * This function displays the contents of array. Size is the number of
 * elements.
 ************************************************************************/
void showArray(const double array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << "\n";
}

//Abraham Juliot            CSC5           Chapter 10, P. 588, #1
/* String Length
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function,
   and then displays the function's return value.
   ......................................................................
   INPUT
    line[]        : Input a string of characters
   OUTPUT
	StringCount   : Display amount of characters in array
_________________________________________________________________________
 */

#include <iostream>
#include <cstring>
using namespace std;

/************************************************************************
 * 								StringCount
 * This int function returns an integer and accepts a pointer to a
 * C-string as an argument. The function will count the number of
 * characters in the string and return that number.
 ************************************************************************/
int StringCount(char *strPtr);  // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input a string of characters

	// Ask the user to input a string
	cout << "Input a string of no more than "
		 << (SIZE - 1) << " characters: "; // -1 for the NULL char
	cin.getline(line, SIZE);

	// Display amount of characters entered by the user
	cout << "\nYou entered " << StringCount(line) << " characters [space(s) included].";

	return 0;
}

/************************************************************************
 * This int function counts the number of characters in an array of
 * characters and returns that number.
 ************************************************************************/
int StringCount(char *strPtr)
{
	int nameCount;
	nameCount = strlen(strPtr);

	return nameCount;
}

//Abraham Juliot            CSC5           Chapter 10, P. 588, #2
/* Backward String
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function
   that will display the contents of the string backwards.
   ......................................................................
   INPUT
    line[]        : Input a string of characters
   OUTPUT
	line[]        : Output a string of characters
_________________________________________________________________________
 */

#include <iostream>
#include <cstring>
using namespace std;

/************************************************************************
 * 								StringBackward
 * This void function accepts a pointer to a C-String as an argument and
 * displays it's contents backward. For instance, if the string argument
 * is "Gravity" the function should display "ytivarG".
 ************************************************************************/
void StringBackward(char *strPtr); // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input and Output a string of characters

	// Ask the user to input a string of characters
	cout << "Input a string of no more than "
		 << (SIZE - 1) << " characters: "; // -1 for the NULL char
	cin.getline(line, SIZE);

	// Pass the string to the function
	StringBackward(line); // Pass line array

	return 0;
}

/************************************************************************
 * This void function accepts a pointer to a C-String as an argument and
 * displays it's contents backward.
 ************************************************************************/
void StringBackward(char *strPtr)
{
	const int LENGTH = strlen(strPtr);

	cout << endl;
	for (int count = (LENGTH-1); count < LENGTH && count >= 0; count--)
		cout << strPtr[count];

	return;
}

//Abraham Juliot            CSC5           Chapter 10, P. 588, #3
/* Word Counter
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function
   that will display the number of words in the string
   ......................................................................
   INPUT
    line[]        : Input a string of characters
   OUTPUT
	WordCount     : Display the number of words entered by the user
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

/************************************************************************
 * 								WordCount
 * This int function accepts a pointer to a C-string as an argument and
 * returns the number of words contained in the string. For instance, if
 * the string argument is "Four score and seven years ago" the function
 * will return the number 6.
 ************************************************************************/
int WordCount(char *strPtr); // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input a string of characters

	// Ask the user to input a string of characters
	cout << "Input a string of words, each separated by a single space, "
		 <<	"\nand containing no more than a total of "
		 << (SIZE - 1) << " word characters: "; // -1 for the NULL char
	cin.getline(line, SIZE);

	// Display the number of words entered by the user
	cout <<  "\nYou entered " << WordCount(line) << " words.";

	return 0;
}

/************************************************************************
 * This int function accepts a pointer to a C-string as an argument and
 * returns the number of words contained in the string.
 ************************************************************************/
int WordCount(char *strPtr)
{
	int total = 1;

	while (*strPtr != '\0')
	{
		if (*strPtr == ' ')
			total += 1;
			strPtr++;
	}

	return total;
}

//Abraham Juliot            CSC5           Chapter 10, P. 589, #4
/* Average Number of Letters
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function
   that will display the average number of letters in each word.
   ......................................................................
   INPUT
    line[]       		   : Input a string of characters
   OUTPUT
	WordLetterCountAverage : Display average number of letters per word
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

/************************************************************************
 * 							WordCountAverage
 * This int function accepts a pointer to a C-string as an argument and
 * returns the average number of letters in each word. For instance, if
 * the string argument is "Four score and seven years ago" the function
 * will return the number 4.
 ************************************************************************/
int WordLetterCountAverage(char *strPtr); // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input a string of characters

	// Ask the user to input a string of characters
	cout << "Input a string of words, each separated by a single space, "
		 <<	"\nand containing no more than a total of "
		 << (SIZE - 1) << " characters (spaces included): "; // -1 for the NULL char
	cin.getline(line, SIZE);

	// Display average number of letters per word
	cout << "\nThe average number of letters in the words you entered is "
		 << WordLetterCountAverage(line) << ".";

	return 0;
}

/************************************************************************
 * This int function accepts a pointer to a C-string as an argument and
 * returns the average number of letters in each word.
 ************************************************************************/
int WordLetterCountAverage(char *strPtr)
{
	int total = 1;      // Hold the total amount of words
	int average;        // Return the average of letters per word
	int charCount = 0;  // Hold the total amount of letters

	while (*strPtr != '\0')
	{
		// Increment charCount if the subscript is not white space
		if (*strPtr != ' ')
		charCount++;

		// Increment total if the subscript is a white space
		if (*strPtr == ' ')
			total += 1;

		// Continue to the next subscript
			strPtr++;
	}

	// Calculate the average amount of letters per word
	average = charCount / total;

	return average;
}

//Abraham Juliot            CSC5           Chapter 10, P. 589, #4
/* Average Number of Letters
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function
   that will display the average number of letters in each word.
   ......................................................................
   INPUT
    line[]       		   : Input a string of characters
   OUTPUT
	WordLetterCountAverage : Display average number of letters per word
_________________________________________________________________________
 */

#include <iostream>
using namespace std;

/************************************************************************
 * 							WordCountAverage
 * This int function accepts a pointer to a C-string as an argument and
 * returns the average number of letters in each word. For instance, if
 * the string argument is "Four score and seven years ago" the function
 * will return the number 4.
 ************************************************************************/
int WordLetterCountAverage(char *strPtr); // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input a string of characters

	// Ask the user to input a string of characters
	cout << "Input a string of words, each separated by a single space, "
		 <<	"\nand containing no more than a total of "
		 << (SIZE - 1) << " characters (spaces included): "; // -1 for the NULL char
	cin.getline(line, SIZE);

	// Display average number of letters per word
	cout << "\nThe average number of letters in the words you entered is "
		 << WordLetterCountAverage(line) << ".";

	return 0;
}

/************************************************************************
 * This int function accepts a pointer to a C-string as an argument and
 * returns the average number of letters in each word.
 ************************************************************************/
int WordLetterCountAverage(char *strPtr)
{
	int total = 1;      // Hold the total amount of words
	int average;        // Return the average of letters per word
	int charCount = 0;  // Hold the total amount of letters

	while (*strPtr != '\0')
	{
		// Increment charCount if the subscript is not white space
		if (*strPtr != ' ')
		charCount++;

		// Increment total if the subscript is a white space
		if (*strPtr == ' ')
			total += 1;

		// Continue to the next subscript
			strPtr++;
	}

	// Calculate the average amount of letters per word
	average = charCount / total;

	return average;
}

//Abraham Juliot            CSC5           Chapter 10, P. 589, #5
/* Sentence Capitalizer
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function
   that will display a modified string with each sentence capitalized.
   ......................................................................
   INPUT
    line[]       		   : Input a string of characters
   OUTPUT
	SentenceCapitalizer    : Display each sentence capitalized
_________________________________________________________________________
 */

#include <iostream>
#include <cctype>
using namespace std;

/************************************************************************
 * 							SentenceCapitalizer
 * This void function accepts a pointer to a C-string as an argument and
 * capitalizes the first character of each sentence in the string. For
 * instance, if the string argument is "hello. my name is Joe. what is
 * your name?" the function will manipulate the string so it contains
 * "Hello. My name is Joe. What is your name?"
 ************************************************************************/
void SentenceCapitalizer(char *strPtr);  // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input a string of characters

	// Ask the user to input a string of characters
	cout << "Input a string of lower case sentences, "
		 <<	"with each word and sentence "
		 <<	" separated by a single "
		 <<	"space, and containing no more than a total of "
		 << (SIZE - 1) << " characters and white space characters:\n";
	cin.getline(line, SIZE);

	// Display each sentence capitalized
	SentenceCapitalizer(line);

	return 0;
}

/************************************************************************
 * This void function accepts a pointer to a C-string as an argument and
 * capitalizes the first character of each sentence in the string.
 ************************************************************************/
void SentenceCapitalizer(char *strPtr)
{

	// Capitalize the first subscript
	*strPtr = toupper(*strPtr);

	// Run while the subscript's character is not NULL
	while (*strPtr != '\0') 
	{
		// Display the character stored in the current subscript
		cout << *strPtr;
		
		// If the current subscript is a period, 
		// an exclamation point, or a question mark
		if (*strPtr == '.' || *strPtr == '!' || *strPtr == '?')
			{
				// Capitalize the subscript after following subscript
				*(strPtr+2) = toupper(*(strPtr + 2));
				
				// Display the whitespace stored in the following subscript
				cout << *(strPtr+1);

				// Continue to the whitespace subscript
				strPtr++;
			}

		// Continue to the next subscript
		strPtr++;
	}

	return;
}

//Abraham Juliot            CSC5           Chapter 10, P. 589, #5
/* Sentence Capitalizer
_________________________________________________________________________
   This program asks the user to input a string, passes it to a function
   that will display a modified string with each sentence capitalized.
   ......................................................................
   INPUT
    line[]       		   : Input a string of characters
   OUTPUT
	SentenceCapitalizer    : Display each sentence capitalized
_________________________________________________________________________
 */

#include <iostream>
#include <cctype>
using namespace std;

/************************************************************************
 * 							SentenceCapitalizer
 * This void function accepts a pointer to a C-string as an argument and
 * capitalizes the first character of each sentence in the string. For
 * instance, if the string argument is "hello. my name is Joe. what is
 * your name?" the function will manipulate the string so it contains
 * "Hello. My name is Joe. What is your name?"
 ************************************************************************/
void SentenceCapitalizer(char *strPtr);  // Input a string of characters

int main()
{
	const int SIZE = 80; // Array size
	char line[SIZE];     // Input a string of characters

	// Ask the user to input a string of characters
	cout << "Input a string of lower case sentences, "
		 <<	"with each word and sentence "
		 <<	"separated by a single "
		 <<	"space, and containing no more than a total of "
		 << (SIZE - 1) << " characters and white space characters:\n";
	cin.getline(line, SIZE);

	// Display each sentence capitalized
	SentenceCapitalizer(line);

	return 0;
}

/************************************************************************
 * This void function accepts a pointer to a C-string as an argument and
 * capitalizes the first character of each sentence in the string.
 ************************************************************************/
void SentenceCapitalizer(char *strPtr)
{

	// Capitalize the first subscript
	*strPtr = toupper(*strPtr);

	// Run while the subscript's character is not NULL
	while (*strPtr != '\0')
	{
		// Display the character stored in the current subscript
		cout << *strPtr;

		// If the current subscript is a period,
		// an exclamation point, or a question mark
		if (*strPtr == '.' || *strPtr == '!' || *strPtr == '?')
			{
				// Capitalize the subscript after the following subscript
				*(strPtr+2) = toupper(*(strPtr + 2));

				// Display the whitespace stored in the following subscript
				cout << *(strPtr+1);

				// Continue to the whitespace subscript
				strPtr++;
			}

		// Continue to the next subscript
		strPtr++;
	}

	return;
}

//Abraham Juliot            CSC5           Chapter 11, P. 645, #1
/* Movie Data
_________________________________________________________________________
   This program will create two MovieData variables, store values in
   their members, and pass each one, in turn, to a function that displays
   the information about the movie in a clearly formatted manner.
   ......................................................................
   INPUT

   OUTPUT
    starRun  : Variable that will hold and display movie data
    sandMan  : Variable that will hold and display movie data
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/************************************************************************
 * 							   MovieData
 * This structure stores the following information about a movie:
 * 		* Title
 * 		* Director
 * 		* Year released
 * 		* Running Time (in minutes)
 ************************************************************************/
struct MovieData
{
	string title;     // Title of the movie
	string director;  // Director of the movie
	int yearReleased; // Release year of the movie
	int runningTime;  // Running time of the movie (in minutes)
};

/************************************************************************
 * 							 MovieDisplay
 * This void function displays the information about the movie(s) in a
 * clear formatted matter.
 ************************************************************************/
void MovieDisplay(MovieData strRn, MovieData sndMn);

int main()
{
	// Variables that will hold and display movie data
	MovieData starRun = {"Star Run", "Charles Lindonie", 2013, 95};
	MovieData sandMan = {"Sand Man", "Charles Lindonie", 2011, 145};

	// Display the information about the movie(s)
	MovieDisplay(starRun, sandMan);

	return 0;
}

/************************************************************************
 * 							   MovieDisplay
 * This void function displays the information about the movie(s) in a
 * clear formatted matter.
 ************************************************************************/
void MovieDisplay(MovieData strRn, MovieData sndMn)
{
	cout << "Movie 1\n";
	cout << "---------------------------------\n";
	cout << setw(16) << left << "Title:"
		 << strRn.title << endl
	     << setw(16) << left << "Director:"
		 << strRn.director << endl
	     << setw(16) << left << "Year Released:"
		 << strRn.yearReleased << endl
	     << setw(16) << left << "Running Time:"
		 << strRn.runningTime << endl << endl;

	cout << "Movie 2\n";
	cout << "---------------------------------\n";
	cout << setw(16) << left << "Title:"
		 << sndMn.title << endl
	     << setw(16) << left << "Director:"
		 << sndMn.director << endl
	     << setw(16) << left << "Year Released:"
		 << sndMn.yearReleased << endl
	     << setw(16) << left << "Running Time:"
		 << sndMn.runningTime << endl;

	return;
}

//Abraham Juliot            CSC5           Chapter 11, P. 645, #2
/* Movie Profit
_________________________________________________________________________
   This program will create two MovieData variables, store values in
   their members, and pass each one, in turn, to a function that displays
   the information about the movie in a clearly formatted manner.
   ......................................................................
   INPUT

   OUTPUT
    starRun      : Variable that will hold and display movie data
    sandMan      : Variable that will hold and display movie data
    profitOrLoss : Display first year's profit or loss for the movie
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/************************************************************************
 * 							   MovieData
 * This structure stores the following information about a movie:
 * 		* Title
 * 		* Director
 * 		* Year released
 * 		* Running Time (in minutes)
 * 		* The first years profit or loss
 ************************************************************************/
struct MovieData
{
	string title;          // Title of the movie
	string director;       // Director of the movie
	int yearReleased;      // Release year of the movie
	int runningTime;       // Running time of the movie (in minutes)
	float productionCosts; // Production costs of the movie
	float revenues_year1;  // First year revenues of the movie
};

/************************************************************************
 * 							 MovieDisplay
 * This void function displays the information about the movie(s) in a
 * clear formatted matter.
 ************************************************************************/
void MovieDisplay(MovieData strRn, MovieData sndMn);

int main()
{
	// Variables that will hold and display movie data
	MovieData starRun = {"Star Run",
						 "Charles Lindonie",
						 2013,
						 95,
						 450.65,
						 575.55};
	MovieData sandMan = {"Sand Man",
			             "Charles Lindonie",
			             2011,
			             145,
			             500.25,
			             75.01};

	// Display the information about the movie(s)
	MovieDisplay(starRun, sandMan);

	return 0;
}

/************************************************************************
 * 							   MovieDisplay
 * This void function displays the information about the movie(s) in a
 * clear formatted matter.
 ************************************************************************/
void MovieDisplay(MovieData strRn, MovieData sndMn)
{
	// Calculate the first year's profit or loss for the movie 1
	float profitOrLoss = strRn.revenues_year1 - strRn.productionCosts;

	// Display movie 1 data
	cout << "Movie 1\n";
	cout << "---------------------------------\n";
	cout << setw(16) << left << "Title:"
		 << strRn.title << endl
	     << setw(16) << left << "Director:"
		 << strRn.director << endl
	     << setw(16) << left << "Year Released:"
		 << strRn.yearReleased << endl
	     << setw(16) << left << "Running Time:"
		 << strRn.runningTime << " minutes" << endl;

	if (strRn.revenues_year1 > strRn.productionCosts)
	{
		cout << setw(16) << left << "Year 1 Profit:"
		     << "$" << profitOrLoss << endl << endl;
	}
		else if (strRn.revenues_year1 < strRn.productionCosts)
		{
			cout << setw(16) << left << "Year 1 Loss:"
				 << "$" << profitOrLoss << endl << endl;
		}
			else
			{
				cout << "No Profit or Loss in Year 1" << endl << endl;
			}

	// Calculate the first year's profit or loss for the movie 2
	profitOrLoss = sndMn.revenues_year1 - sndMn.productionCosts;

	// Display movie 2 data
	cout << "Movie 2\n";
	cout << "---------------------------------\n";
	cout << setw(16) << left << "Title:"
		 << sndMn.title << endl
	     << setw(16) << left << "Director:"
		 << sndMn.director << endl
	     << setw(16) << left << "Year Released:"
		 << sndMn.yearReleased << endl
	     << setw(16) << left << "Running Time:"
		 << sndMn.runningTime << " minutes" << endl;

	if (sndMn.revenues_year1 > sndMn.productionCosts)
	{
		cout << setw(16) << left << "Year 1 Profit:"
		     << "$" << profitOrLoss << endl << endl;
	}
		else if (sndMn.revenues_year1 < sndMn.productionCosts)
		{
			cout << setw(16) << left << "Year 1 Loss:"
				 << "$" << profitOrLoss << endl << endl;
		}
			else
			{
				cout << "No Profit or Loss in Year 1" << endl << endl;
			}

	return;
}

//Abraham Juliot            CSC5           Chapter 11, P. 645, #3
/* Corporate Sales Data
_________________________________________________________________________
   This program will ask the user to enter 4 quarter's sales figures for
   4 company divisions. Each division's total and average sales will be
   calculated and stored in the appropriate member of each structure
   variable. These figures will then be displayed on the screen.

   Input Validation: The program will not accept negative numbers for any
   sales figures.
   ......................................................................
   INPUT
   	SalesQuarter_1		   : Input 1st quarter sales
	SalesQuarter_2         : Input 2nd quarter sales
	SalesQuarter_3         : Input 3rd quarter sales
	SalesQuarter_4         : Input 4th quarter sales

   OUTPUT
   	divisionName           : Output Division name
   	salesAnnualTotal       : Output Total annual sales
	salesQuarterlyAverage  : Output Average quarterly sales
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/************************************************************************
 * 							CompanyDivision
 * This structure stores the following info about a company division:
 * 		* Division name
 * 		* 1st quarter sales
 * 		* 2nd quarter sales
 * 		* 3rd quarter sales
 * 		* 4th quarter sales
 * 		* Total annual sales
 * 		* Average quarterly sales
 ************************************************************************/
struct CompanyDivision
{
	string divisionName;           // Output Division name
	float SalesQuarter_1; 		   // Input 1st quarter sales
	float SalesQuarter_2;          // Input 2nd quarter sales
	float SalesQuarter_3;          // Input 3rd quarter sales
	float SalesQuarter_4;          // Input 4th quarter sales
	float salesAnnualTotal;        // Output Total annual sales
	float salesQuarterlyAverage;   // Output Average quarterly sales
};

int main()
{
	// Hold company division data
	CompanyDivision eastDivision = {"East Division"};
	CompanyDivision westDivision = {"West Division"};
	CompanyDivision northDivision = {"North Division"};
	CompanyDivision southDivision = {"South Division"};

	// Input 4 quarter's sales figures for each company division:
	// Input East Division Data
	cout << "\nEnter the sale figures for " << eastDivision.divisionName
		 << "." << endl;

	do
	{
		cout << "\n1st Quarter Sales: ";
		cin >> eastDivision.SalesQuarter_1;

		// Input Validation
		if (eastDivision.SalesQuarter_1 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (eastDivision.SalesQuarter_1 < 0);

	do
	{
		cout << "\n2nd Quarter Sales: ";
		cin >> eastDivision.SalesQuarter_2;

		// Input Validation
		if (eastDivision.SalesQuarter_2 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (eastDivision.SalesQuarter_2 < 0);

	do
	{
		cout << "\n3rd Quarter Sales: ";
		cin >> eastDivision.SalesQuarter_3;

		// Input Validation
		if (eastDivision.SalesQuarter_3 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (eastDivision.SalesQuarter_3 < 0);

	do
	{
		cout << "\n4th Quarter Sales: ";
		cin >> eastDivision.SalesQuarter_4;

		// Input Validation
		if (eastDivision.SalesQuarter_4 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (eastDivision.SalesQuarter_4 < 0);

		// Calculate total annual sales for East Division
		eastDivision.salesAnnualTotal = eastDivision.SalesQuarter_1
									  + eastDivision.SalesQuarter_2
									  + eastDivision.SalesQuarter_3
									  + eastDivision.SalesQuarter_4;

		// Calculate average quarterly sales for East Division
		eastDivision.salesQuarterlyAverage = eastDivision.salesAnnualTotal
									   / 4;

	// Input West Division Data
	cout << "\nEnter the sale figures for " << westDivision.divisionName
		 << "." << endl;

	do
	{
		cout << "\n1st Quarter Sales: ";
		cin >> westDivision.SalesQuarter_1;

		// Input Validation
		if (westDivision.SalesQuarter_1 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (westDivision.SalesQuarter_1 < 0);

	do
	{
		cout << "\n2nd Quarter Sales: ";
		cin >> westDivision.SalesQuarter_2;

		// Input Validation
		if (westDivision.SalesQuarter_2 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (westDivision.SalesQuarter_2 < 0);

	do
	{
		cout << "\n3rd Quarter Sales: ";
		cin >> westDivision.SalesQuarter_3;

		// Input Validation
		if (westDivision.SalesQuarter_3 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (westDivision.SalesQuarter_3 < 0);

	do
	{
		cout << "\n4th Quarter Sales: ";
		cin >> westDivision.SalesQuarter_4;

		// Input Validation
		if (westDivision.SalesQuarter_4 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (westDivision.SalesQuarter_4 < 0);

		// Calculate total annual sales for West Division
		westDivision.salesAnnualTotal = westDivision.SalesQuarter_1
									  + westDivision.SalesQuarter_2
									  + westDivision.SalesQuarter_3
									  + westDivision.SalesQuarter_4;

		// Calculate average quarterly sales for West Division
		westDivision.salesQuarterlyAverage = westDivision.salesAnnualTotal
										   / 4;
	// Input West Division Data
	cout << "\nEnter the sale figures for " << northDivision.divisionName
		 << "." << endl;

	do
	{
		cout << "\n1st Quarter Sales: ";
		cin >> northDivision.SalesQuarter_1;

		// Input Validation
		if (northDivision.SalesQuarter_1 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (northDivision.SalesQuarter_1 < 0);

	do
	{
		cout << "\n2nd Quarter Sales: ";
		cin >> northDivision.SalesQuarter_2;

		// Input Validation
		if (northDivision.SalesQuarter_2 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (northDivision.SalesQuarter_2 < 0);

	do
	{
		cout << "\n3rd Quarter Sales: ";
		cin >> northDivision.SalesQuarter_3;

		// Input Validation
		if (northDivision.SalesQuarter_3 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (northDivision.SalesQuarter_3 < 0);

	do
	{
		cout << "\n4th Quarter Sales: ";
		cin >> northDivision.SalesQuarter_4;

		// Input Validation
		if (northDivision.SalesQuarter_4 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (northDivision.SalesQuarter_4 < 0);

		// Calculate total annual sales for West Division
	 	northDivision.salesAnnualTotal = northDivision.SalesQuarter_1
								       + northDivision.SalesQuarter_2
							           + northDivision.SalesQuarter_3
							   	       + northDivision.SalesQuarter_4;

		// Calculate average quarterly sales for West Division
		northDivision.salesQuarterlyAverage = northDivision.salesAnnualTotal
										   / 4;
	// Input South Division Data
	cout << "\nEnter the sale figures for " << southDivision.divisionName
		 << "." << endl;

	do
	{
		cout << "\n1st Quarter Sales: ";
		cin >> southDivision.SalesQuarter_1;

		// Input Validation
		if (southDivision.SalesQuarter_1 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (southDivision.SalesQuarter_1 < 0);

	do
	{
		cout << "\n2nd Quarter Sales: ";
		cin >> southDivision.SalesQuarter_2;

		// Input Validation
		if (southDivision.SalesQuarter_2 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (southDivision.SalesQuarter_2 < 0);

	do
	{
		cout << "\n3rd Quarter Sales: ";
		cin >> southDivision.SalesQuarter_3;

		// Input Validation
		if (southDivision.SalesQuarter_3 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (southDivision.SalesQuarter_3 < 0);

	do
	{
		cout << "\n4th Quarter Sales: ";
		cin >> southDivision.SalesQuarter_4;

		// Input Validation
		if (southDivision.SalesQuarter_4 < 0)
			cout << "\nThe program will not accept negative numbers "
				 <<	"for any sales figures.";
	} while (southDivision.SalesQuarter_4 < 0);

		// Calculate total annual sales for West Division
		southDivision.salesAnnualTotal = southDivision.SalesQuarter_1
								       + southDivision.SalesQuarter_2
								       + southDivision.SalesQuarter_3
							   	       + southDivision.SalesQuarter_4;

		// Calculate average quarterly sales for West Division
		southDivision.salesQuarterlyAverage = southDivision.salesAnnualTotal
										    / 4;

	// Display sales figures for each company Division
		cout << showpoint << fixed << setprecision(2) << endl;
		cout << eastDivision.divisionName << endl;
		cout << "--------------------------------------------\n";
		cout << setw(30) << left << "Total Annual Sales:"
		     << left << setw(4)  << "$"
		     << right << setw(10)  << eastDivision.salesAnnualTotal << endl
			 << setw(30) << left << "Average Quarterly Sales:"
		     << left << setw(4)  << "$"
		     << right << setw(10)  << eastDivision.salesQuarterlyAverage
		     << endl << endl;

		cout << westDivision.divisionName << endl;
		cout << "--------------------------------------------\n";
		cout << setw(30) << left << "Total Annual Sales:"
			 << left << setw(4)  << "$"
		     << right << setw(10)  << westDivision.salesAnnualTotal << endl
	     	 << setw(30) << left << "Average Quarterly Sales:"
		     << left << setw(4)  << "$"
		     << right << setw(10)  << westDivision.salesQuarterlyAverage
		     << endl << endl;

		cout << northDivision.divisionName << endl;
		cout << "--------------------------------------------\n";
		cout << setw(30) << left << "Total Annual Sales:"
			 << left << setw(4)  << "$"
			 << right << setw(10)  << northDivision.salesAnnualTotal << endl
		     << setw(30) << left << "Average Quarterly Sales:"
			 << left << setw(4)  << "$"
			 << right << setw(10)  << northDivision.salesQuarterlyAverage
			 << endl << endl;

		cout << southDivision.divisionName << endl;
		cout << "--------------------------------------------\n";
		cout << setw(30) << left << "Total Annual Sales:"
			 << left << setw(4)  << "$"
			 << right << setw(10)  << southDivision.salesAnnualTotal << endl
		     << setw(30) << left << "Average Quarterly Sales:"
			 << left << setw(4)  << "$"
			 << right << setw(10)  << southDivision.salesQuarterlyAverage
			 << endl << endl;

	return 0;
}

//Abraham Juliot            CSC5           Chapter 11, P. 646, #5
/* Weather Statistics Modification
_________________________________________________________________________
   This program will ask the user to enter data for each month in a year.
   Once the data is entered for all the months, the program will
   calculate and display the average monthly rainfall, the total rainfall
   for the year, the highest and lowest temperatures for the year, the
   months they occurred in, and the average of all the monthly average
   temperatures.

   Input Validation: The program will only accept temperatures within the
   range between -100 and 140 degrees Fahrenheit.
   ......................................................................
   INPUT
    totalRainfall           : Input total rainfall for the month
	temperatureHigh         : Input high temperature for the month
	temperatureLow          : Input low temperature for the month
	temperatureAverage      : Input average temperature for the month
	yearWeather[]           : Input monthly weather data for the year

   OUTPUT
	totalRainfall           : Output total monthly rainfall
	averageRainfall         : Output average monthly rainfall
	tempAverageAverage      : Output average of average temperatures
	tempHighest             : Output the highest monthly temperature
	tempLowest              : Output the lowest monthly temperature
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

enum Month {January,
	        February,
	        March,
	        April,
	        May,
	        June,
	        July,
	        August,
	        September,
	        October,
	        November,
	        December};

/************************************************************************
 * 							WeatherData
 * This structure stores the following info about weather data:
 * 		* Total Rainfall
 * 		* High Temperature
 * 		* Low Temperature
 * 		* Average Temperature
 ************************************************************************/
struct WeatherData
{
	float totalRainfall;      // Input total rainfall for the month
	float temperatureHigh;    // Input high temperature for the month
	float temperatureLow;     // Input low temperature for the month
	float temperatureAverage; // Input average temperature for the month
};

int main()
{
	const int SIZE = 12;
	WeatherData yearWeather[SIZE]; // Input monthly weather data for the year
	float totalTemperature = 0;    // Hold total of monthly temperatures
	float totalRainfall = 0;       // Output total monthly rainfall
	float averageRainfall = 0;     // Output average monthly rainfall
	float tempAverageTotal = 0;    // Hold total of monthly average temperatures
	float tempAverageAverage = 0;  // Output average of average temperatures
	float tempHighest = -101;      // Output the highest monthly temperature
	int tempHighestMonth;		   // Hold value for highest temperature month
	float tempLowest = 141;        // Output the lowest monthly temperature
	int tempLowestMonth;           // Hold value for lowest temperature month

	// Input data for each month
	for (int index = January; index <= December; index++)
	{
		// Input the total rainfall
		cout << "\nEnter the total rainfall for the month of ";
		switch(index)
		{
			case January	: cout << "January: ";
							  break;
			case February	: cout << "February: ";
							  break;
			case March   	: cout << "March: ";
							  break;
			case April  	: cout << "April: ";
							  break;
			case May    	: cout << "May: ";
							  break;
			case June   	: cout << "June: ";
							  break;
			case July   	: cout << "July: ";
					     	  break;
			case August  	: cout << "August: ";
							  break;
			case September	: cout << "September: ";
							  break;
			case October  	: cout << "October: ";
							  break;
			case November	: cout << "November: ";
							  break;
			case December	: cout << "December: ";
		}
		
		cin >> yearWeather[index].totalRainfall;

		// Calculate the total monthly rainfall
		totalRainfall += yearWeather[index].totalRainfall;

		do
		{
			// Input the high temperature
			cout << "\nEnter the high temperature for the month of ";
			switch(index)
			{
				case January	: cout << "January: ";
								  break;
				case February	: cout << "February: ";
								  break;
				case March   	: cout << "March: ";
								  break;
				case April  	: cout << "April: ";
								  break;
				case May    	: cout << "May: ";
								  break;
				case June   	: cout << "June: ";
								  break;
				case July   	: cout << "July: ";
						     	  break;
				case August  	: cout << "August: ";
								  break;
				case September	: cout << "September: ";
								  break;
				case October  	: cout << "October: ";
								  break;
				case November	: cout << "November: ";
								  break;
				case December	: cout << "December: ";
			}

			cin >> yearWeather[index].temperatureHigh;

			// Input Validation
			if (yearWeather[index].temperatureHigh < -100
				|| yearWeather[index].temperatureHigh > 140)
			{
				cout << "\nInvalid Input: The program will only accept "
					 <<	"temperatures within the range between "
					 << "-100 and 140 degrees Fahrenheit.\n";
			}
		} while (yearWeather[index].temperatureHigh < -100
				|| yearWeather[index].temperatureHigh > 140);

		// Calculate the total of the temperatures for the month
		totalTemperature += yearWeather[index].temperatureHigh;

		do
		{
			// Input the low temperature
			cout << "\nEnter the low temperature for the month of ";
			switch(index)
			{
				case January	: cout << "January: ";
								  break;
				case February	: cout << "February: ";
								  break;
				case March   	: cout << "March: ";
								  break;
				case April  	: cout << "April: ";
								  break;
				case May    	: cout << "May: ";
								  break;
				case June   	: cout << "June: ";
								  break;
				case July   	: cout << "July: ";
						     	  break;
				case August  	: cout << "August: ";
								  break;
				case September	: cout << "September: ";
								  break;
				case October  	: cout << "October: ";
								  break;
				case November	: cout << "November: ";
								  break;
				case December	: cout << "December: ";
			}

			cin >> yearWeather[index].temperatureLow;

			// Input Validation
			if (yearWeather[index].temperatureLow < -100
				|| yearWeather[index].temperatureLow > 140)
			{
				cout << "\nInvalid Input: The program will only accept "
					 <<	"temperatures within the range between "
					 << "-100 and 140 degrees Fahrenheit.\n";
			}
		} while (yearWeather[index].temperatureLow < -100
				|| yearWeather[index].temperatureLow > 140);

		// Calculate the total of the temperatures for the month
		totalTemperature += yearWeather[index].temperatureLow;

		// Calculate the average temperature
		yearWeather[index].temperatureAverage = totalTemperature / 2;

		// Calculate the total of the average temperatures
		tempAverageTotal += yearWeather[index].temperatureAverage;

		totalTemperature = 0; // Reset the value of totalTemperature
	}

	// Calculate and display the average monthly rainfall
	averageRainfall = totalRainfall / SIZE;
	cout << fixed << showpoint << setprecision(1);
	cout << "\nAverage Monthly Rainfall: " << averageRainfall;

	// Display the total rainfall for the year
	cout << "\nTotal Rainfall for the Year: " << totalRainfall;

	// Find the highest and lowest temperatures for the year
	for (int index = January; index <= December; index++)
	{
		// Assign the highest temperature to tempHighest
		if (yearWeather[index].temperatureHigh > tempHighest)
		{
			tempHighest = yearWeather[index].temperatureHigh;
			tempHighestMonth = index;
		}

		// Assign the lowest temperature to tempLowest
		if (yearWeather[index].temperatureLow < tempLowest)
		{
			tempLowest = yearWeather[index].temperatureLow;
			tempLowestMonth = index;
		}
	}

	// Display the highest temperature for the year
	cout << fixed << showpoint << setprecision(1);
	cout << "\nThe first occurrence of the highest "
		 <<	"temperature for the year was "
		 << tempHighest << " degrees Fahrenheit in ";
	switch(tempHighestMonth)
	{
		case January	: cout << "January";
						  break;
		case February	: cout << "February";
						  break;
		case March   	: cout << "March";
						  break;
		case April  	: cout << "April";
						  break;
		case May    	: cout << "May";
						  break;
		case June   	: cout << "June";
						  break;
		case July   	: cout << "July";
				     	  break;
		case August  	: cout << "August";
						  break;
		case September	: cout << "September";
						  break;
		case October  	: cout << "October";
						  break;
		case November	: cout << "November";
						  break;
		case December	: cout << "December";
	}

	// Display the lowest temperature for the year
	cout << fixed << showpoint << setprecision(1);
	cout << "\nThe first occurrence of the lowest "
		 <<	"temperature for the year was "
		 << tempLowest << " degrees Fahrenheit in ";
	switch(tempLowestMonth)
	{
		case January	: cout << "January";
						  break;
		case February	: cout << "February";
						  break;
		case March   	: cout << "March";
						  break;
		case April  	: cout << "April";
						  break;
		case May    	: cout << "May";
						  break;
		case June   	: cout << "June";
						  break;
		case July   	: cout << "July";
				     	  break;
		case August  	: cout << "August";
						  break;
		case September	: cout << "September";
						  break;
		case October  	: cout << "October";
						  break;
		case November	: cout << "November";
						  break;
		case December	: cout << "December";
	}

	// Calculate Display average of monthly average temperatures
	tempAverageAverage = tempAverageTotal / SIZE;
	cout << "\nAverage of Monthly Average Temperatures: "
		 << tempAverageAverage << " degrees Fahrenheit";

	return 0;
}

//Abraham Juliot            CSC5           Chapter 11, P. 646, #4
/* Weather Statistics
_________________________________________________________________________
   This program will ask the user to enter data for each month in a year.
   Once the data is entered for all the months, the program will
   calculate and display the average monthly rainfall, the total rainfall
   for the year, the highest and lowest temperatures for the year, the
   months they occurred in, and the average of all the monthly average
   temperatures.

   Input Validation: The program will only accept temperatures within the
   range between -100 and 140 degrees Fahrenheit.
   ......................................................................
   INPUT
    totalRainfall           : Input total rainfall for the month
	temperatureHigh         : Input high temperature for the month
	temperatureLow          : Input low temperature for the month
	temperatureAverage      : Input average temperature for the month
	yearWeather[]           : Input monthly weather data for the year

   OUTPUT
	totalRainfall           : Output total monthly rainfall
	averageRainfall         : Output average monthly rainfall
	tempAverageAverage      : Output average of average temperatures
	tempHighest             : Output the highest monthly temperature
	tempLowest              : Output the lowest monthly temperature
_________________________________________________________________________
 */

#include <iostream>
#include <iomanip>
using namespace std;

/************************************************************************
 * 							WeatherData
 * This structure stores the following info about weather data:
 * 		* Total Rainfall
 * 		* High Temperature
 * 		* Low Temperature
 * 		* Average Temperature
 ************************************************************************/
struct WeatherData
{
	float totalRainfall;      // Input total rainfall for the month
	float temperatureHigh;    // Input high temperature for the month
	float temperatureLow;     // Input low temperature for the month
	float temperatureAverage; // Input average temperature for the month
};

int main()
{
	const int SIZE = 12;
	WeatherData yearWeather[SIZE]; // Input monthly weather data for the year
	float totalTemperature = 0;    // Hold total of monthly temperatures
	float totalRainfall = 0;       // Output total monthly rainfall
	float averageRainfall = 0;     // Output average monthly rainfall
	float tempAverageTotal = 0;    // Hold total of monthly average temperatures
	float tempAverageAverage = 0;  // Output average of average temperatures
	float tempHighest = -101;      // Output the highest monthly temperature
	int tempHighestMonth;		   // Hold value for highest temperature month
	float tempLowest = 141;        // Output the lowest monthly temperature
	int tempLowestMonth;           // Hold value for lowest temperature month

	// Input data for each month
	for (int index = 0; index < SIZE; index++)
	{
		// Input the total rainfall
		cout << "\nEnter the total rainfall for the month of ";
		switch(index)
		{
			case 0		: cout << "January: ";
							  break;
			case 1		: cout << "February: ";
							  break;
			case 2   	: cout << "March: ";
							  break;
			case 3  	: cout << "April: ";
							  break;
			case 4    	: cout << "May: ";
							  break;
			case 5   	: cout << "June: ";
							  break;
			case 6   	: cout << "July: ";
					     	  break;
			case 7  	: cout << "August: ";
							  break;
			case 8		: cout << "September: ";
							  break;
			case 9  	: cout << "October: ";
							  break;
			case 10		: cout << "November: ";
							  break;
			case 11		: cout << "December: ";
		}

		cin >> yearWeather[index].totalRainfall;

		// Calculate the total monthly rainfall
		totalRainfall += yearWeather[index].totalRainfall;

		do
		{
			// Input the high temperature
			cout << "\nEnter the high temperature for the month of ";
			switch(index)
			{
				case 0		: cout << "January: ";
								  break;
				case 1		: cout << "February: ";
								  break;
				case 2   	: cout << "March: ";
								  break;
				case 3  	: cout << "April: ";
								  break;
				case 4    	: cout << "May: ";
								  break;
				case 5   	: cout << "June: ";
								  break;
				case 6   	: cout << "July: ";
						     	  break;
				case 7  	: cout << "August: ";
								  break;
				case 8		: cout << "September: ";
								  break;
				case 9  	: cout << "October: ";
								  break;
				case 10		: cout << "November: ";
								  break;
				case 11		: cout << "December: ";
			}

			cin >> yearWeather[index].temperatureHigh;

			// Input Validation
			if (yearWeather[index].temperatureHigh < -100
				|| yearWeather[index].temperatureHigh > 140)
			{
				cout << "\nInvalid Input: The program will only accept "
					 <<	"temperatures within the range between "
					 << "-100 and 140 degrees Fahrenheit.\n";
			}
		} while (yearWeather[index].temperatureHigh < -100
				|| yearWeather[index].temperatureHigh > 140);

		// Calculate the total of the temperatures for the month
		totalTemperature += yearWeather[index].temperatureHigh;

		do
		{
			// Input the low temperature
			cout << "\nEnter the low temperature for the month of ";
			switch(index)
			{
				case 0		: cout << "January: ";
								  break;
				case 1		: cout << "February: ";
								  break;
				case 2   	: cout << "March: ";
								  break;
				case 3  	: cout << "April: ";
								  break;
				case 4    	: cout << "May: ";
								  break;
				case 5   	: cout << "June: ";
								  break;
				case 6   	: cout << "July: ";
						     	  break;
				case 7  	: cout << "August: ";
								  break;
				case 8		: cout << "September: ";
								  break;
				case 9  	: cout << "October: ";
								  break;
				case 10		: cout << "November: ";
								  break;
				case 11		: cout << "December: ";
			}

			cin >> yearWeather[index].temperatureLow;

			// Input Validation
			if (yearWeather[index].temperatureLow < -100
				|| yearWeather[index].temperatureLow > 140)
			{
				cout << "\nInvalid Input: The program will only accept "
					 <<	"temperatures within the range between "
					 << "-100 and 140 degrees Fahrenheit.\n";
			}
		} while (yearWeather[index].temperatureLow < -100
				|| yearWeather[index].temperatureLow > 140);

		// Calculate the total of the temperatures for the month
		totalTemperature += yearWeather[index].temperatureLow;

		// Calculate the average temperature
		yearWeather[index].temperatureAverage = totalTemperature / 2;

		// Calculate the total of the average temperatures
		tempAverageTotal += yearWeather[index].temperatureAverage;

		totalTemperature = 0; // Reset the value of totalTemperature
	}

	// Calculate and display the average monthly rainfall
	averageRainfall = totalRainfall / SIZE;
	cout << fixed << showpoint << setprecision(1);
	cout << "\nAverage Monthly Rainfall: " << averageRainfall;

	// Display the total rainfall for the year
	cout << "\nTotal Rainfall for the Year: " << totalRainfall;

	// Find the highest and lowest temperatures for the year
	for (int index = 0; index < SIZE; index++)
	{
		// Assign the highest temperature to tempHighest
		if (yearWeather[index].temperatureHigh > tempHighest)
		{
			tempHighest = yearWeather[index].temperatureHigh;
			tempHighestMonth = index;
		}
 
		// Assign the lowest temperature to tempLowest
		if (yearWeather[index].temperatureLow < tempLowest)
		{
			tempLowest = yearWeather[index].temperatureLow;
			tempLowestMonth = index;
		}
	}
 
	// Display the highest temperature for the year
	cout << fixed << showpoint << setprecision(1);
	cout << "\nThe first occurrence of the highest "
		 <<	"temperature for the year was "
		 << tempHighest << " degrees Fahrenheit in ";
	switch(tempHighestMonth)
	{
		case 0		: cout << "January";
				      break;
		case 1		: cout << "February";
				      break;
		case 2   	: cout << "March";
				      break;
		case 3  	: cout << "April";
				      break;
		case 4    	: cout << "May";
				      break;
		case 5   	: cout << "June";
				      break;
		case 6   	: cout << "July";
				      break;
		case 7  	: cout << "August";
					  break;
		case 8		: cout << "September";
					  break;
		case 9  	: cout << "October";
					  break;
		case 10		: cout << "November";
					  break;
		case 11		: cout << "December";
	}
 
	// Display the lowest temperature for the year
	cout << fixed << showpoint << setprecision(1);
	cout << "\nThe first occurrence of the lowest "
		 <<	"temperature for the year was "
		 << tempLowest << " degrees Fahrenheit in ";
	switch(tempLowestMonth)
	{
		case 0		: cout << "January";
				      break;
		case 1		: cout << "February";
				      break;
		case 2   	: cout << "March";
				      break;
		case 3  	: cout << "April";
				      break;
		case 4    	: cout << "May";
				      break;
		case 5   	: cout << "June";
				      break;
		case 6   	: cout << "July";
				      break;
		case 7  	: cout << "August";
					  break;
		case 8		: cout << "September";
					  break;
		case 9  	: cout << "October";
					  break;
		case 10		: cout << "November";
					  break;
		case 11		: cout << "December";
	}
 
	// Calculate Display average of monthly average temperatures
	tempAverageAverage = tempAverageTotal / SIZE;
	cout << "\nAverage of Monthly Average Temperatures: "
		 << tempAverageAverage << " degrees Fahrenheit";
 
	return 0;
}
