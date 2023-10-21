#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to simulate rolling a single die
int rollDie() {
    return rand() % 6 + 1; // Generate a random number between 1 and 6
}

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Simulate rolling two dice
    int die1 = rollDie();
    int die2 = rollDie();
    int total = die1 + die2;

    // Display the result
    std::cout << "Rolling the dice... You rolled a " << die1 << " and a " << die2 << ". Total: " << total << std::endl;

    return 0;
}