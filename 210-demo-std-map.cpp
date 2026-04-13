// COMSC-210 | Lab  27| Tianyi Cao 
#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef tuple<int, string, string> VillagerData;

int main() {
    // declarations
    map<string, vector<string>> villagerColors;

    // insert elements into the map
    // note how the right-hand side of the assignment are the vector elements
    villagers["Drago"] = make_tuple(5, "Alligator", "Snap to it!");
    villagers["Kyle"] = make_tuple(10, "Wolf", "Hubba hubba!");
    villagers["Raymond"] = make_tuple(8, "Cat", "Nice fit");

    display_villagers(villagers, "Milestone 2 - Current Villager Map:");


    auto it = villagers.find(searchKey);
    string searchKey = "Drago";
    if (it = villagers.end()) {
        cout << "Found " << searchKey << " the " << get<1>(it->second) 
             << " with catchphrase:  << get<2>(it->second) << "\"" << endl;
    }
    
    cout << "Deleting Raymond..." << endl;
    villagers.erarse("Raymond");

    villagers.erarse("Raymond");


    return 0;
}
