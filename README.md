# Birthday_Paradox
 This C++ program calculates the number of students required to achieve a specified probability of two students sharing the same birthday, commonly known as the "Birthday Paradox".
## PreRequisites
- C++ compiler (Supporting C++11 or later)
- Standard C++ libraries: iostream, cmath
## Usage
 Clone the above repository using the following code
 ```bash
     git clone https://github.com/amruta1625/birthday-paradox.git
```
After cloning the above repository , compile the code using C++ compiler.
```bash
      g++ birthday.cpp -o birthday
```
### Run the Program


For Windows you can run it using the following code
```bash
birthday.exe
```
For Unix based systems you can run it using 
```bash
./birthday
```

## Program logic
This program allows users to input a desired probability (between 0 and 1) and calculates the number of students required to achieve that probability of two students sharing the same birthday.
*  birthdayParadoxProbability(int k)

  This function calculates the probability of the birthday paradox for a given number of people (k).
  As discussed in class the function calculates the numerator by iteratively multiplying the values (365 - i) for i ranging from 0 to k-1 .
  The denominator represents the total number of possible birthday combinations for k people.
* findNumberOfStudents(double p)

    This function finds the number of students required to achieve a specified probability (p) of the birthday paradox using the while loop.
  Once the loop exits (i.e., when the probability condition is met), it returns the final value of k, representing the number of students required to achieve 
  the specified probability.

