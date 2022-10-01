# Car-Rental-Project-PF
This Car Rental Service project was intiated by us as our submission for our Programming Fundamentals Semester Project in the 1st Semester of our degree. This was a basic C++ program which worked as a program which was capable of performing the basic tasks required in a software made for companies which offer car rental services.

# Project Title:
 CAR RENTING SERVICE PROGRAM FOR A CAR DEALERSHIP.
 
# Details:
The user will be able to select a vehicle from a dealership's stock of vehicles and rent it for the duration they want.

# Specifications:
1) From the offered cars, the user can select the ones they prefer.
2) After the process, the user will see the final charges.

# Header Files:
In this program, five header files were used which include:
•	iostream (for input/output )
•	iomanip (for setw function)
•	cmath (for complex mathematical functions)
•	cstdlib (for rand() function)
•	string (for string class)
•	using namespace std (for using standard function for cin and cout commands)

# Explanation:
# Structures:
The following software uses three structures, one for each class of vehicles the company offers. The name, model, and daily rate of each car are the three structure variables that describe the characteristics of the vehicles the company offers.
# Functions:
This programme offers a function that prints the final receipt and gives the customer an order number after the procedure is finished.
1) Value passed by reference:
The address of the value is used in this function to pass the value of the int days variable.
2) Use of pointers: 
In this function, the int total is also computed by multiplying the number of days by the chosen vehicle's daily rate per unit of time. A pointer named "tptr" has been declared. The pointer is given the value of the address of the int total, and using dereference, the value of total is written on the receipt, showing the correct amount.
# Main Function:
In the main body, we have declared multiple variables by using different classes including string, double, int etc. 
1) Login Process:
                        To rent a car, the user first must make an account in our system. In which they enter their name, CNIC number, age etc. If the user is under 18, our system will print that the user cannot legally drive a car and the program closes. Then the user must enter their phone number and set a password to complete their registration. After the process, the user must login by entering their phone number and password which they had set previously. If there is any difference between the phone number and password they entered previously, the system will declare that either the username or password is incorrect.
2) Goto function:
                        If the username and password is incorrect, the program will take the user back to the login area.
3) Structure Variables:
                                  Further in the program, we declared multiple structure variables in the form of arrays to insert information about the cars being offered by us. Each category contains three cars each with their own names, models, and rates.
4) Program Officially Starts:
                                            Upon starting the program, the program greets the user by using their first and last name that they had entered upon registration. Then the list of categories is displayed with numbers. The user chooses the designated number and the car names in that category are displayed also with designated numbers. The user chooses their preferred choice and then the details of that specific car are displayed which includes their per day rates in Rupees. Then the user is asked about for how many days do they require the car. Then the user enters the number of days and then the values are passed to the function named receipt.
5) For loops:
                 To display the information stored in the arrays, we use for loops. The integer i
is declared that is incremented every time the loop is completed, printing the information in next array element. 
6) If-Else statements: 
                               If-else and Nested If-Else statements are used to print the array elements according to the user’s choice. 
7) Passing values to functions: 
                                              The values of multiple variables are passed to the receipt function and a receipt is printed for the user. The rand() function is used to assign the user an order number. 

# Output:
![Picture1](https://user-images.githubusercontent.com/91963525/193406498-e89d228b-ca6d-4623-9072-478b8b3c0a26.png)


# Contributors:
1) Muhammad Qalb-e-Ali
2) Syed Ali Raza
3) Daniyal Shah
4) Muhammad Tayyab
