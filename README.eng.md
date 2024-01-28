## Include VeiculoFuncoes SA:MP

This is an include that has several functions for vehicles, all in an easy-to-use way. I recommend reading the categories below to stay informed.

-----------------------

### How to install?

You should download the include. After doing so, you need to place the include in the folder (pawno > include). Once you have done that, open the pwn file of your Gamemode and insert the following code below your other includes:
```pawn
#include <VeiculoFuncoes>
```

-----------------------

### What is the difference?

I will create two commands so that you can observe the difference, using the regular method and also utilizing my include.

Command without the include:
```pawn
CMD:engine(playerid)
{
    new vehicleid = GetPlayerVehicleID(playerid);
    new engine, lights, alarm, doors, bonnet, boot, objective;
    GetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
    SetVehicleParamsEx(vehicleid, VEHICLE_PARAMS_ON, lights, alarm, doors, bonnet, boot, objective);
    SendClientMessage(playerid, -1, "You turned on the engine of your vehicle.");
    return true;
}
```

Command with the include:
```pawn
CMD:engine(playerid)
{
    new vehicleid = GetPlayerVehicleID(playerid);
    Veiculo_Engine(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You turned on the engine of your vehicle.", vehicleid, playerid);
    return true;
}
```

-----------------------

### How does it work?

I will first explain how a specific callback of my include works with a particular vehicle, that is, a player's vehicle. I will explain using the callback `Vehicle_Lock`.

```pawn
Vehicle_Lock(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You locked the vehicle.", vehicleid, playerid);
```
1 - <kbd>Define it to true or false, true locks, false unlocks.</kbd>   
2 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>   
3 - <kbd>Define the color of the message.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Define the vehicleid.</kbd>   
6 - <kbd>Define the playerid.</kbd>

Well, above was explained how to use the callback with a specific vehicle, not global, meaning the vehicle of a player. Now I will explain how you should use the global callback.

```pawn
Vehicle_Lock(true, GLOBAL_VEHICLES, 0xFFFFFFFF, "All vehicles have been locked.");
```
1 - <kbd>Define it to true or false, true locks, false unlocks.</kbd>   
2 - <kbd>Define whether it is global or if it is not global; in this case, it is global.</kbd>   
3 - <kbd>Define the color of the message.</kbd>   
4 - <kbd>Define the message that will appear for all players.</kbd>   

Read the category [Related to Global](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/README.eng.md#related-to-global) to understand.

-----------------------

### How do callbacks work with different structures?

In this section, I will explain how some callbacks that differ from others work. There are some callbacks that use the same structural style, so the explanation will apply to both.

-----------------------

```pawn
Vehicle_Doors(↓)
Vehicle_Windows(true, 5, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You opened all the windows.", vehicleid, playerid);
```
1 - <kbd>Define it to true or false, true opens, false closes.</kbd>   
2 - <kbd>Define which window will open, ranging from 1 to 4; if set to 5, all windows will open.</kbd>   
3 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>    
4 - <kbd>Define the message color.</kbd>   
5 - <kbd>Define the message that will appear for the player.</kbd>   
6 - <kbd>Define the vehicleid.</kbd>   
7 - <kbd>Define the playerid.</kbd>

-----------------------

```pawn
Vehicle_Life(1000, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You updated the vehicle's health to 1000.", vehicleid, playerid);
```
1 - <kbd>Define the vehicle's lifespan.</kbd>   
2 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>    
3 - <kbd>Define the message color.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Define the vehicleid.</kbd>   
6 - <kbd>Define the playerid.</kbd>

-----------------------

```pawn
Vehicle_Repair(↓)
Vehicle_Respawn(NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You respawned your vehicle.", vehicleid, playerid);
```
1 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>    
2 - <kbd>Define the message color.</kbd>   
3 - <kbd>Define the message that will appear for the player.</kbd>   
4 - <kbd>Define the vehicleid.</kbd>   
5 - <kbd>Define the playerid.</kbd>

-----------------------

```pawn
Vehicle_World(1, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Your vehicle went to world 1.", vehicleid, playerid);
```
1 - <kbd>Define the world to which the vehicle will go.</kbd>   
2 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>    
3 - <kbd>Define the message color.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Define the vehicleid.</kbd>   
6 - <kbd>Define the playerid.</kbd>

-----------------------

```pawn
Vehicle_Neon(true, NEON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You added Neon to your vehicle.", vehicleid, playerid);
```
1 - <kbd>Define whether it is true or false, true means the neon is attached, false means the neon is detached.</kbd>   
2 - <kbd>Define the color of the neon.</kbd>   
3 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>   
4 - <kbd>Define the message color.</kbd>   
5 - <kbd>Define the message that will appear for the player.</kbd>   
6 - <kbd>Define the vehicleid.</kbd>   
7 - <kbd>Define the playerid.</kbd>

> [!Warning]
> When setting `false` to the first definition, establish the second definition as `NEON_NULL`.

You can find all the definitions for `Neon` by accessing this tab > [other definitions](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/other_definitions.eng.md).

-----------------------

```pawn
Vehicle_Xenon(true, XENON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You added Xenon to your vehicle.", vehicleid, playerid);
```
1 - <kbd>Define whether it is true or false; true means xenon is attached, false means xenon is detached.</kbd>   
2 - <kbd>Define the xenon color.</kbd>   
3 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>   
4 - <kbd>Define the message color.</kbd>   
5 - <kbd>Define the message that will appear for the player.</kbd>   
6 - <kbd>Define the vehicleid.</kbd>   
7 - <kbd>Define the playerid.</kbd>

> [!Warning]
> When setting `false` for the first definition, establish the second definition as `XENON_NULL`.

You can find all definitions for `Xenon` by accessing this tab > [other definitions](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/other_definitions.eng.md).

-----------------------

```pawn
Vehicle_Tune(true, SPOILER_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You added a Spoiler to your vehicle.", vehicleid, playerid);
```
1 - <kbd>Define whether it is true or false; if true, the component is added, if false, the component is removed.</kbd>   
2 - <kbd>Define the component.</kbd>   
3 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>   
4 - <kbd>Define the message color.</kbd>   
5 - <kbd>Define the message that will appear for the player.</kbd>   
6 - <kbd>Define the vehicleid.</kbd>   
7 - <kbd>Define the playerid.</kbd>

> [!Warning]
> When setting `false` to the first definition, you are specifying that the component to be removed is the one defined by the second definition.

You can find all the definitions for `Components` by accessing this tab > [components](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/components.eng.md).

-----------------------

```pawn
Vehicle_Color(120, 120, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "You added the color ID 120 to your vehicle.", vehicleid, playerid);
```
1 - <kbd>Define the first color.</kbd>   
2 - <kbd>Define the second color.</kbd>   
3 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>   
4 - <kbd>Define the message color.</kbd>   
5 - <kbd>Define the message that will appear to the player.</kbd>   
6 - <kbd>Define the vehicleid.</kbd>   
7 - <kbd>Define the playerid.</kbd>

-----------------------

```pawn
Vehicle_Interior(1, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Your vehicle went to interior 1.", vehicleid, playerid);
```
1 - <kbd>Define the interior to which the vehicle will go.</kbd>   
2 - <kbd>Define whether it is global or if it is not global; in this case, it is not global.</kbd>   
3 - <kbd>Define the message color.</kbd>   
4 - <kbd>Define the message that will appear for the player.</kbd>   
5 - <kbd>Define the vehicleid.</kbd>   
6 - <kbd>Define the playerid.</kbd>

-----------------------

### Related to Global

When the callback is not global, you do not need to use `vehicleid` nor `playerid`. Even if you use them, everything will depend on the following definitions: `NON_GLOBAL_VEHICLES` or `GLOBAL_VEHICLES`. The first definition mentioned indicates that the callback will not be global, that is, it will refer to a player's vehicle. The second definition mentioned indicates that the callback will be global. If you use global mode in most callbacks, and the player is inside the vehicle, no changes will occur to their vehicle. For example, `Vehicle_Respawn`. If you use this callback globally, and a player is using a vehicle, that specific vehicle will not be respawned.

This include is highly recommended for SA:MP DayZ servers because it has global settings.

-----------------------

### How should you use it without a playerid parameter

When the callback doesn't have the `playerid` and is unrelated to the players, you started defining only the `vehicleid`, as shown in the example below:
```pawn
Vehicle_Neon(true, NEON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "", vehicleid);
```
* The definition of `color` and `message` seems unnecessary, since `Vehicle_Neon` is being used in a callback that has no relationship with `playerid` or the global. However, this situation is inevitable, and it is a consequence that we will have to accept.

On the other hand, if the callback doesn't have the `playerid` but is related to the players, you started defining it in the following way:
```pawn
Vehicle_Neon(true, NEON_0, GLOBAL_VEHICLES, 0xFFFFFFFF, "Message.");
```

> [!Warning]
> There's no need to create a `loop` since the definition of `GLOBAL_VEHICLES` already handles that.

-----------------------

### All the callbacks

You can find all the callbacks by accessing this tab > [callbacks](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/callbacks.eng.md).

-----------------------

### Contact Information

Instagram: [ocalasans](https://instagram.com/ocalasans)   
YouTube: [Walkerxinho](https://www.youtube.com/@walkerxinho)   
Discord: walkerxinho7 ou Walkerxinho7#9124   
Community: [SA:MP Programming Community©](https://abre.ai/samp-spc)
