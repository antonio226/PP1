//
//  main.cpp
//  PP1
//
//  Created by Antonio Sanchez on 11/6/19.
//  Copyright © 2019 Antonio Sanchez. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<string> inventory = {"Phone"};
    vector<string>::const_iterator iter;
    
    cout << "Welcome to:\n";
    cout << "Sudden Dead\n";
    cout << "Type 's' to Start\n" ;
    cout << "Type 'q' to Quit\n";
    char intro;
    cin >> intro;
    if(intro == 's'){
        cout << "\nYou wake up in your bed on the second floor of your apartment in the middle of the night and hear short burst of screams and shuffling outside. There's red and blue sirens flashing through your window, and onto your open curtains and right wall, but It's nothing new. You hear another short shuffle and then faint gurgeling.\n";
    }else if(intro == 'q'){
        cout << "Thanks for playing.\n";
    }
    
    int choice = 1;
    if (choice != 0)
    {
    cout << "Choices:\n";
    cout << "0. Quit\n";
    cout << "1. Look outside the window.\n";
    cout << "2. Run outside with your phone to record whatever it is.\n";
    cout << "3. Sleep some more.\n";
    cout << "4. Check inventory\n";
    int choice;
    cin >> choice;
    switch(choice) {
        case 0:
            cout << "Thanks for playing.\n";
            break;
        case 1 :
            cout << "You go to your window and witness a man near the bus stop on the main road side walk hammering at another unconcious man on the ground with his fist and then biting chunks out of any exposed fleshy parts. There's a police cruiser with it's lights on near them and no cars going down the main road.\n";
            break;
        case 2 :
            cout << "As you're running down the corridor of your apartments floor you see sign that the trouble outside may have spilled into your apartment building. There's a purse on the floor and blood drippings leading to to a room. You inspect the blood trail leading to the room and then a women opens the door. You notice something not right but before you know it she grabs at your neck with both hand and rips out your throat.\n";
            break;
        case 3 :
            cout << "You decide to sleep it off and wake up to a dark figure standing at your bed side panting abnormally, staring at you as if waiting for you to wake up. You have no idea how it got in, or what it is. With a lipless mouth and heavy lead like arms it batters and ravages you to death with lightning fast speed.\n";
            break;
        case 4 :
            cout << "Your items:\n";
            for (iter = inventory.begin(); iter != inventory.end(); ++iter)
            {
                cout << *iter << endl;
            }
            break;
            default:
            cout << "\nSorry, but " << choice << " isn’t a valid choice.\n";
    }
    }
    
    cout << "\nThere's no sign of life outside like as if everyone is hiding. You turn on the TV and theres a broadcast warning. The news lady says there's been a sudden event of people losing their minds and going into a frenzy. Then they show videos some recorded off their phones of the frenzies. She says to get to your nearest police station in order to stay safe. The police station is kinda far, so you need to get to your car, and it's parked in the parking lot right outside your window. You'll need a weapon.\n";
    
    int weapon = 1;
    if (weapon != 0)
    {
    cout << "Choices:\n";
    cout << "0. Quit\n";
    cout << "1. Kitchen knife\n";
    cout << "2. Hatchet\n";
    cout << "3. Hands\n";
    cout << "4. Check inventory\n";
    cin >> weapon;
    switch(weapon) {
        case 0:
            cout << "Thanks for playing.\n";
            break;
        case 1 :
            cout << "You take the biggest kitchen knife out of the knife block and hold it up like excalibur.\n";
            inventory.insert(inventory.begin(), "Kitchen knife");
            cout << "\nYour items:\n";
            for (iter = inventory.begin(); iter != inventory.end(); ++iter)
            {
                cout << *iter << endl;
            }
            break;
        case 2 :
            cout << "You dig through your storage for your hatchet and swing it a few times to feel the weight and momentum.\n";
            inventory.insert(inventory.begin(), "Hatchet");
            cout << "\nYour items:\n";
            for (iter = inventory.begin(); iter != inventory.end(); ++iter)
            {
                cout << *iter << endl;
            }
            break;
        case 3 :
            cout << "You decide you can handle any trouble without sharp objects becuase your confident you won't be attacked.\n";
            cout << "\nYour items:\n";
            for (iter = inventory.begin(); iter != inventory.end(); ++iter)
            {
                cout << *iter << endl;
            }
            break;
        case 4 :
           cout << "Your items:\n";
            for (iter = inventory.begin(); iter != inventory.end(); ++iter)
            {
                cout << *iter << endl;
            }
            break;
            default:
            cout << "\nSorry, but " << weapon << " isn’t a valid choice.\n";
    }
    }
    
    cout << "\nYou get ready to leave with nothing but your phone, car keys, and " << weapon << ". You go to the door to look through the peep hole, then open the door with your " << weapon << " ready. You look around and see the stairs and a purse on the floor to the left down the corridor, and the elevator to the right.\n";
    
    inventory.insert(inventory.begin(), "Car keys");
    
    int direction = 1;
    if (direction != 0)
    {
    cout << "Choices:\n";
    cout << "0. Quit\n";
    cout << "1. Left\n";
    cout << "2. Right\n";
    cout << "3. Check inventory\n";
    cin >> direction;
    switch(direction) {
        case 0:
            cout << "Thanks for playing.\n";
            break;
        case 1 :
            cout << "You decide to go left towards the stairs and can't help but inspect the blood trail leading to a room. A women opens the door and you notice somethings not right. You remember what you saw in the news and swing at the zombified women's head with your " << weapon << ". She goes down and you now see that she isnt even human anymore, so you then finish the zombie off with one more strike.\n";
            break;
        case 2 :
            cout << "You decide to go right and take the elevator but immediate regret it as the doors open, because four disfigured zombies are waiting for you in the elevator. You hold your " << weapon << " towards them in shock, but before you can do anything they all lunge towards you faster than lighting and ravage you to death.\n";
            break;
        case 3 :
            cout << "Your items:\n";
            for (iter = inventory.begin(); iter != inventory.end(); ++iter)
            {
                cout << *iter << endl;
            }
            break;
            default:
            cout << "\nSorry, but " << direction << " isn’t a valid choice.\n";
    }
    }
    
    cout << "You decide to search the purse and find a handgun with 30 rounds. The sound of the elevator doors open and you turn to see four disfigured zombies in the elevator. You starts shooting at them as you run down stairs to your car, get inside, and speed away.\n";
    
    cout << "\nYou get a handgun with 30 rounds.";
    inventory.insert(inventory.begin(), "Handgun");
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    
    cout << "Congradulations you've completed the game.\n";
    
    return 0;
}
