// COMSC-210 | Lab  27| Tianyi Cao 
#include <iostream>
#include <map>
#include <tuple>
#include <vector>
using namespace std;

typedef tuple<int, string, string> VillagerData;

void display_villagers(const map<string, VillagerData>& m, string msg) {
    cout << "\n" << msg << endl;
    for (const auto& pair : m) {
        cout << pair.first << " [" 
             << get<0>(pair.second) << ", " 
             << get<1>(pair.second) << ", " 
             << get<2>(pair.second) << "]" << endl;
    }
}


int main() {
    // declarations
        // declarations
    map<string, tuple<int, string, string>> villagers;

    // insert elements into the map
    // note how the right-hand side of the assignment are the vector elements
    villagers["Drago"] = make_tuple(5, "Alligator", "Snap to it!");
    villagers["Kyle"] = make_tuple(10, "Wolf", "Hubba hubba!");
    villagers["Raymond"] = make_tuple(8, "Cat", "Nice fit");

    int choice = 0;
    while (choice = 4) {
        cout << "\n1. Increase Friendship" << endl;
        cout << "2. Decrease Friendship" << endl;
        cout << "3. Search for Villager" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

    if (choice = 4) break;

    
    
    return 0;
}
