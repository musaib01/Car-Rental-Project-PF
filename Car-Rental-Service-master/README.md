# Project Title:
 Car Renting Service Program for a Car Dealership.

# Details:
The user will be able to choose from a variety of cars available at a car dealership and rent the
car for their preferred amount of time.

-	Login Process:
To rent a car, the user first must make an account in our system. In which they enter their name, CNIC number, age etc. If the user is under 18, our system will print that the user cannot legally drive a car and the program closes. Then the user must enter their phone number and set a password to complete their registration. After the process, the user must login by entering their phone number and password which they had set previously. If there is any difference between the phone number and password they entered previously, the system will declare that either the username or password is incorrect.

-	Password Authentication:
If the username and password is incorrect, the program will take the user back to the login area.

-	Car Information:
Further in the program, we declared multiple structure variables in the form of arrays to insert information about the cars being offered by us. Each category contains three cars each with their own names, models, and rates.

-	Main Screen:
Upon starting the program, the program greets the user by using their first and last name that they had entered upon registration. Then the list of categories is displayed with numbers. The user chooses the designated number and the car names in that category are displayed also with designated numbers. The user chooses their preferred choice and then the details of that specific car are displayed which includes their per day rates in Rupees. Then the user is asked about for how many days do they require the car. Then the user enters the number of days and then the values are passed to the function named receipt.

- Information Display:
To display the information stored in the arrays, we use for loops. The integer i
is declared that is incremented every time the loop is completed, printing the information in next array element. 

- Options: 
If-else and Nested If-Else statements are used to print the array elements according to the user’s choice. 

- Receipt Printing: 
The values of multiple variables are passed to the receipt function and a receipt is printed for the user. The rand() function is used to assign the user an order number. 


# Specifications:
- The user can choose their preferred cars from the ones available.
- The total charges will be displayed to the user after the process.

# Header Files:
In this program, five header files were used which include :
-	iostream (for input/output )
-	iomanip (for setw function)
-	cmath (for complex mathematical functions)
-	cstdlib (for rand() function)
-	string (for string class)
-	using namespace std (for using standard function for cin and cout commands)

#Screenshots
- ![Program](https://github.com/sydalirza/Car-Rental-Service/blob/master/Picture1.png)

# Contributors
- Muhammad Qalb-e-Ali
- Musaib Gillani
- Daniyal Shah
- Muhammad Wahaj-ud-din

