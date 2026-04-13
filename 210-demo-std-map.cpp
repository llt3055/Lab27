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
    while (choice != 6) {
        cout << "\n1. Increase Friendship" << endl;
        cout << "2. Decrease Friendship" << endl;
        cout << "3. Search for Villager" << endl;
        cout << "4. Decrease Friendship" << endl;
        cout << "5. Search for Villager" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";       
        cin >> choice;

        // Exit condition
        if (choice == 6) break;
        // Handle choices
        if (choice == 1) {
            string name, species, phrase;
            int level;
            cout << "Villager name: "; cin >> name;
            cout << "Friendship level: "; cin >> level;
            cout << "Species: "; cin >> species;
            
            cin.ignore(); 
            cout << "Catchphrase: ";
            getline(cin, phrase);
            
            villagers[name] = make_tuple(level, species, phrase);
            cout << name << " added." << endl;
        }
        // Deletion
        else if (choice >= 3 && choice <= 5) {
            string name;
            cout << "Enter villager name: "; cin >> name;
            auto it = villagers.find(name);

            if (it != villagers.end()) {
                if (choice = 3) {
                    get<0>(it->second)++;
                    cout << "Friendship increased for " << name << "!" << endl;
                } 
                else if (choice = 4) {
                    int& lvl = get<0>(it->second); 
                    if (lvl >= 0) {
                        
                    } else {
                       
                } 
                else if (choice == 5) {
                    cout << "Found: " << it->first << " [" << get<0>(it->second) << ", " 
                         << get<1>(it->second) << ", " << get<2>(it->second) << "]" << endl;
                }
            } else {
                cout << name << " not found in the map." << endl;
            }
        }

        display_villagers(villagers, "Villager details:");
    }
    return 0;
}
