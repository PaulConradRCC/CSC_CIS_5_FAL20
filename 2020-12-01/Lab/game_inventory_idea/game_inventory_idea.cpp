#include <iostream>
#include <string>
using namespace std;

const string COMMANDS[4] = {"quit", "pick", "drop", "inventory"};
const string ITEMS[3] = {"hat", "gold", "key"};
const int BAG_SIZE = 5;

int main(int argc, char** argv) {

    string user_command ="";
    string inventory[BAG_SIZE];
    int current_slot = 0;
    
    do
    {
        cout << "> ";
        cin >> user_command;
        
        if ( user_command == "inventory" )
        {
            if ( current_slot == 0 )
                cout << "Bag is currently empty" << endl;
            else
                for(int i=0; i<current_slot; i++)
                    cout << inventory[i] << endl;
        }
        
        if ( user_command == "pick" )
        {
            bool found=false;
            string user_command_item;
            cin >> user_command_item;
            
            for(int i=0;i<3;i++)
                if ( user_command_item == ITEMS[i] )
                {
                    found=true;
                    break;
                }
            
            if ( !found )
                cout << "Not an item in the game!" << endl;
            else
            {
                if ( current_slot <= BAG_SIZE )
                {
                    inventory[current_slot++]=user_command_item;
                    cout << user_command_item << " picked up and placed in the bag." << endl;
                }
                else
                    cout << "Sorry - bag is full!  Go to our shop and buy 50 more slots for $0.99" << endl;
            }
        }
        
        if ( user_command == "drop" )
        {
            bool found=false;
            string user_command_item;
            cin >> user_command_item;
            
            for(int i=0;i<3;i++)
                if ( user_command_item == ITEMS[i] )
                {
                    found=true;
                    break;
                }
            
            if ( !found )
                cout << "Not an item in the game!" << endl;
            else
            {
                if ( current_slot > 0 )
                {
                    int i;
                    for(i=0; i<current_slot; i++)
                        if ( inventory[i] == user_command_item )
                            break;
                    
                    for(int j=i;j<current_slot;j++)
                        inventory[j] = inventory[j+1];
                    
                    current_slot--;
                    cout << user_command_item << " dropped from the bag." << endl;
                }
                else
                    cout << "Sorry - bag empty" << endl;
            }
        }
            
        
    } while(user_command != "quit" );
    
    return 0;
}

