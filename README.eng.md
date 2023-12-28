## Include VeiculoFuncoes SA:MP

This is an include that has several functions for vehicles, all in an easy-to-use way. I recommend reading the categories below to stay informed.

-----------------------

### How to install?

You should download the include. After doing so, you need to place the include in the folder (pawno > include). Once you have done that, open the pwn file of your Gamemode and insert the following code below your other includes:
```pawn
#include <VeiculoFuncoes>
```

-----------------------

### Necessary includes

```pawn 
#include <a_samp>
#include <foreach>
#include <streamer>
```
Don't have the mentioned includes? Download them here.

inc a_samp <kbd>native</kbd>   
inc foreach [download](https://github.com/karimcambridge/samp-foreach).   
inc streamer [download](https://github.com/samp-incognito/samp-streamer-plugin).

-----------------------

### What is the difference?

I will create two commands so that you can observe the difference, using the regular method and also utilizing my include.

Command without the include.
```pawn
CMD:engine(playerid, params[])
{
    new vehicleid = GetPlayerVehicleID(playerid);
    new engine, lights, alarm, doors, bonnet, boot, objective;
    GetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
    SetVehicleParamsEx(vehicleid, VEHICLE_PARAMS_ON, lights, alarm, doors, bonnet, boot, objective);
    SendClientMessage(playerid, -1, "You turned on the engine of your vehicle.");
    return 1;
}
```
Command with the include.
```pawn
CMD:engine(playerid, params[])
{
    new vehicleid = GetPlayerVehicleID(playerid);
    Veiculo_Engine(true, NON_GLOBAL_VEHICLES, -1, "You turned on the engine of your vehicle.", playerid, vehicleid);
    return 1;
}
```

-----------------------

### How does it work?

I will first explain how a specific callback of my include works with a particular vehicle, that is, a player's vehicle. I will explain using the callback **Vehicle_Lock**.
```pawn
Vehicle_Lock(true, NON_GLOBAL_VEHICLES, -1, "You locked the vehicle.", playerid, vehicleid);
```
1 - <kbd>Set it to true or false, true locks, and false unlocks.</kbd>   
2 - <kbd>Specify whether it is global or if it is not global; in this case, it is not global.</kbd>   
3 - <kbd>Set the color of the message.</kbd>   
4 - <kbd>Set the message that will appear for the player..</kbd>   
5 - <kbd>Set the playerid.</kbd>   
6 - <kbd>Set the vehicleid.</kbd>

Well, above was explained how to use the callback with a specific vehicle, not global, meaning the vehicle of a player. Now I will explain how you should use the global callback.
```pawn
Vehicle_Lock(true, GLOBAL_VEHICLES, -1, "All vehicles have been locked.");
```
1 - <kbd>Set it to true or false, true locks, and false unlocks.</kbd>   
2 - <kbd>Define whether it is global or if it is not global; in this case, it is global.</kbd>   
3 - <kbd>Set the color of the message.</kbd>   
4 - <kbd>Set the message that will appear for all players.</kbd>   

Read the category **Related to Global** to understand.

-----------------------

### How do callbacks work with different structures?

In this section, I will explain how some callbacks that differ from others work. There are some callbacks that use the same structural style, so the explanation will apply to both.
```pawn
Vehicle_Doors(↓)
Vehicle_Windows(true, 5, NON_GLOBAL_VEHICLES, -1, "You opened all the windows.", playerid, vehicleid);
```
1 - <kbd>Set it to true or false, true opens, false closes.</kbd>   
2 - <kbd>Specify which window will open, ranging from 1 to 4; if set to 5, all windows will open.</kbd>   
3 - <kbd>Specify whether it is global or if it is not global; in this case, it is not global.</kbd>    
4 - <kbd>Set the message color.</kbd>   
5 - <kbd>Define the message that will appear for the player.</kbd>   
6 - <kbd>Set the playerid.</kbd>   
7 - <kbd>Set the vehicleid.</kbd>

```pawn
Vehicle_Life(1000, NON_GLOBAL_VEHICLES, -1, "You updated the vehicle's health to 1000.", playerid, vehicleid);
```
1 - <kbd>Define the vehicle's lifespan.</kbd>   
2 - <kbd>Specify whether it is global or if it is not global; in this case, it is not global.</kbd>    
3 - <kbd>Set the message color.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Set the playerid.</kbd>   
6 - <kbd>Set the vehicleid.</kbd>

```pawn
Vehicle_Repair(↓)
Vehicle_Respawn(NON_GLOBAL_VEHICLES, -1, "You respawned your vehicle.", playerid, vehicleid);
```
1 - <kbd>Specify whether it is global or if it is not global; in this case, it is not global.</kbd>    
2 - <kbd>Set the message color.</kbd>   
3 - <kbd>Define the message that will appear for the player.</kbd>   
4 - <kbd>Set the playerid.</kbd>   
5 - <kbd>Set the vehicleid.</kbd>

```pawn
Vehicle_World(2, NON_GLOBAL_VEHICLES, -1, "You and your vehicle have entered world 2.", playerid, vehicleid);
```
1 - <kbd>Set the world to which the vehicle will go.</kbd>   
2 - <kbd>Specify whether it is global or if it is not global; in this case, it is not global.</kbd>    
3 - <kbd>Set the message color.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Set the playerid.</kbd>   
6 - <kbd>Set the vehicleid.</kbd>
```pawn
Vehicle_Siren(true, NON_GLOBAL_VEHICLES, -1, "You added a siren to your vehicle.", playerid, vehicleid);
```

The callback **Vehicle_Siren** shouldn't even be here, as it doesn't have a different structure from the others. Nevertheless, I will add it to mention that not all vehicles will activate the siren. In future versions, I plan to bring updates to this callback.

1 - <kbd>Set it to true or false; true activates the siren, and false deactivates it.</kbd>   
2 - <kbd>Specify whether it is global or if it is not global; in this case, it is not global.</kbd>   
3 - <kbd>Set the message color.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Set the playerid.</kbd>   
6 - <kbd>Set the vehicleid.</kbd>   
null - **Compatible vehicles: Patriot, Sultan, Cheetah, BF-400, Predator, Rancher, NRG-500, Super-GT, and FCR-900.**

-----------------------

### Related to Global

Here, I will explain how global mode callbacks work. It's simple: when the callback is not global, it is not necessary to use <kbd>playerid</kbd> or <kbd>vehicleid</kbd>. Even if you use them, everything depends on the following definitions: <kbd>NON_GLOBAL_VEHICLES</kbd> or <kbd>GLOBAL_VEHICLES</kbd>. The first mentioned definition indicates that the callback will not be global, meaning it will be related to a player's vehicle. On the other hand, the second mentioned definition indicates that the callback will be global. If you use the global mode in most callbacks and the player is inside a vehicle, no changes will occur to their vehicle. For example, **Vehicle_Respawn**. If you use this callback globally and a player is using a vehicle, that specific vehicle will not respawn.

This include is highly recommended for SA:MP DayZ servers because it has global settings.

-----------------------

### All the callbacks

Callbacks with the same structure patterns:
```pawn
Vehicle_Lock(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Engine(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Light(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Hood(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_SuitCase(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Alarm(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Siren(true, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);
```
Callbacks with different structures:
```pawn
Vehicle_Doors(true, 5, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Windows(true, 5, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Life(1000, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Repair(NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_Respawn(NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);

Vehicle_World(1, NON_GLOBAL_VEHICLES, -1, "Message!", playerid, vehicleid);
```

-----------------------

### Contact Information

Instagram: [ocalasans](https://instagram.com/ocalasans)   
YouTube: [Walkerxinho](https://www.youtube.com/@walkerxinho)   
Discord: walkerxinho7 ou Walkerxinho7#9124   
Community: [SA:MP Programming Community©](https://abre.ai/samp-spc)
