/* 
 * File:   cin_multiple_values.cpp
 * Author: pconrad
 *
 * Created on September 17, 2020, 10:03 AM
 */

#include <iostream>
using namespace std;

int main() {

    // our variables
    int total_power, attack_power, spell_power, healing_power;
    
    // our prompt
    cout << "Enter your character's attack power, spell power and healing power " << endl;
    cout << "separate each value by a space: ";
    cin >> attack_power >> spell_power >> healing_power;
    
    // output our character's total power stat
    total_power = 2*attack_power + spell_power + healing_power;
    
    // output the character's power stats
    cout << "Character's total power: " << total_power << endl;
    
    return 0;
}

