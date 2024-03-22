#include <iostream>
#include <cmath>

// Function to calculate the probability of the birthday paradox
double birthdayParadoxProbability(int k) {
    double numerator = 1;
    double denominator = pow(365, k);
    
    // Calculate numerator as 365 * 364 * ... * (365 - k + 1)
    for (int i = 0; i < k; ++i) {
        numerator *= (365 - i);
    }
    
    return 1 - (numerator / denominator);
}

// Function to find the number of students required
int findNumberOfStudents(double p) {
    int k = 2;
    while (birthdayParadoxProbability(k) <= p) {
        k++;
    }
    return k;
}

int main() {
    double p;
    std::cout << "Enter the desired probability (0 to 1): ";
    std::cin >> p;

    // Finding the number of students
    int numberOfStudents = findNumberOfStudents(p);
    std::cout << "The number of students required for probability greater than " << p << " is: " << numberOfStudents << std::endl;

    return 0;
}
