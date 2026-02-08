#include <iostream>
#include <string> 
using namespace std;

struct Restaurant{ 
    string name;
    string address; 
    double averageCost;
    bool dinnerOnly;
    int maxOccupancy;
};
    
Restaurant createRestaurant();
void displayRestaurant(Restaurant restaurant1);


int main() {
    cout<< "Enter information for Restaurant 1\n";
    Restaurant restaurant1 = createRestaurant();
    cin.ignore();
        
    cout << "\nEnter information for Restaurant 2\n";
    Restaurant restaurant2 = createRestaurant();
    cin.ignore();
        
    cout << "\nEnter information for Restaurant 3\n";
    Restaurant restaurant3 = createRestaurant();
    cin.ignore();

    cout << "\nEnter information for Restaurant 4\n";
    Restaurant restaurant4 = createRestaurant();
        

        
    //Displays all restaurant information together
    displayRestaurant(restaurant1);
    displayRestaurant(restaurant2);
    displayRestaurant(restaurant3);
    displayRestaurant(restaurant4);

    return 0;
    
}




Restaurant createRestaurant() {
    // declarations
    Restaurant temp;

    // obtain restaurant information from the console
    cout << "Enter the restaurant's name: ";
    getline(cin, temp.name);
    cout << "Enter the restaurant's address: ";
    getline(cin, temp.address);
    cout << "Enter the average cost of a meal: ";
    cin >> temp.averageCost;
    cout << "Is the restaurant dinner only? (1 for yes, 0 for no): "; // MD: make sure you understand that dinnerOnly
    // is a boolean variable, storing True/False. The processor codes 1 for True, so entering a 1 for yes sets that
    // boolean to True. The processor then codes 0 for False.
    cin >> temp.dinnerOnly;
    cout << "Enter the maximum occupancy: ";
    cin >> temp.maxOccupancy;

    return temp;
}

void displayRestaurant(Restaurant restaurant1) {
    cout << "\n-----------------------------\n";
    cout << "Restaurant Name: " << restaurant1.name << endl;
    cout << "Address: " << restaurant1.address << endl;
    cout << "Average Cost: $" << restaurant1.averageCost << endl;
    cout << "Dinner Only: " 
         << (restaurant1.dinnerOnly ? "Yes" : "No") << endl;
    cout << "Max Occupancy: " << restaurant1.maxOccupancy << endl;
}