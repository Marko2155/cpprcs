#include <iostream>
#include <string>

void rps() {
    std::string items[] = {"rock", "paper", "scissors"};
    int choice;
    int comp_choice;
    std::cout << "Choose an item" << std::endl;
    std::cout << "rock (0), paper (1), scissors (2) > ";
    std::cin >> choice;
    comp_choice = rand() % 3;
    if (choice > 2) {
        std::cout << "Item does not exist, restarting" << std::endl;
        rps();
    }
    std::cout << "Your choice: " << items[choice] << std::endl;
    std::cout << "Computer's choice: " << items[comp_choice] << std::endl;
    if (choice == 0 && comp_choice == 1) {
        std::cout << "You lost" << std::endl;
    } else if (choice == 1 && comp_choice == 2) {
        std::cout << "You lost" << std::endl;
    } else if (choice == 2 && comp_choice == 0) {
        std::cout << "You lost" << std::endl;
    } else if (choice == 1 && comp_choice == 0) {
        std::cout << "You won" << std::endl;
    } else if (choice == 2 && comp_choice == 1) {
        std::cout << "You won" << std::endl;
    } else if (choice == 0 && comp_choice == 2) {
        std::cout << "You won" << std::endl;
    } else if (choice == comp_choice) {
        std::cout << "Same item, restarting" << std::endl;
        rps();
    } else {
        std::cout << "Unexcpected error" << std::endl;
        exit(1);
    }
    std::string ynres;
    std::cout << "Wanna try again? (yes/no) ";
    std::cin >> ynres;
    if (ynres == "yes") {
        rps();
    } else if (ynres == "no") {
        exit(0);
    } else {
        std::cout << "User did not type yes or no, assuming no" << std::endl;
        exit(0);
    }
}

int main() {
    rps();
    return 0;
}
