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

    display_villagers(villagers, "Milestone 2 - Current Villager Map:");

    string searchKey = "Drago";
    auto it = villagers.find(searchKey);
    if (it != villagers.end()) {
        cout << "\nFound " << searchKey << " the " << get<1>(it->second) 
             << " with catchphrase: \"" << get<2>(it->second) << "\"" << endl;
    }
    
    cout << "Deleting Raymond..." << endl;
    villagers.erase("Raymond");

    // display the final map
    cout << "Final map size: " << villagers.size() << endl;

    return 0;
}
