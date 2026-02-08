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
    
    //Function creates a restaurant object
    Restaurant createRestaurant(){
        Restaurant temp;
        cout << "Enter the restaurant's name: ";
        getline(cin, temp.name);
        cout << "Enter the restaurant's address: ";
        getline(cin, temp.address);
        cout << "Enter the average cost of a meal: ";
        cin >> temp.averageCost;
        cout << "Is the restaurant dinner only? (1 for yes, 0 for no): "; 
        cin >> temp.dinnerOnly;
        cout << "Enter the maximum occupancy: ";
        cin >> temp.maxOccupancy;
        return temp;
    }


    int main() {
        Restaurant r1 = createRestaurant();

        // Testing to ensure the restaurant was created correctly
        cout << "\nTesting: Restaurant Name: " << r1.name << endl;

        return 0;
    
    }