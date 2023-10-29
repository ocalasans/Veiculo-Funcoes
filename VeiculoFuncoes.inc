/*
        Include versao: 1.0.1; criado por Calasans(Walkerxinho7).
        
        Discord: walkerxinho7 ou Walkerxinho7#9124
        Youtube: Walkerxinho
        Instagram: ocalasans

        Pix para doacoes: 6ec94946-dfa5-4300-82b6-8307f9fefd38
        Irei por a chave aleatoria por questao de privacidade.
        Confirmacao: Wellington Daniel Ferreira Calasans
*/

#include <a_samp>
#include <foreach>
#include <streamer>

#define INC_SCM SendClientMessage
#define INC_SCM_ALL SendClientMessageToAll
//Defines do global.
#define NON_GLOBAL_VEHICLES 1 //A callback sera executada com um veiculo especifico.
#define GLOBAL_VEHICLES 2 //A callback sera executada de forma global, ou seja todos os veiculos existentes.

new INC_str_message[156], bool:INC_usando_veiculo[MAX_VEHICLES],
    bool:INC_sirenactivated[MAX_VEHICLES] = false,
    bool:INC_sirenactivated_global[MAX_VEHICLES] = false,
    INC_siren[MAX_VEHICLES], INC_siren_global[MAX_VEHICLES];

//Trancar/Destrancar veiculo.
stock Veiculo_Fechadura(bool:INC_blocked, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
            SetVehicleParamsForPlayer(vehicleid, i, 0, INC_blocked);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            if(!INC_usando_veiculo[v])
            {
                foreach(new i: Player)
                    SetVehicleParamsForPlayer(v, i, 0, INC_blocked);
            }
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Ligar/Desligar motor veiculo.
stock Veiculo_Motor(bool:INC_engine, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new not_usable, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsEx(vehicleid, not_usable, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        SetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsEx(v, not_usable, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
            //
            if(!INC_usando_veiculo[v])
                SetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Ligar/Desligar farol veiculo.
stock Veiculo_Farol(bool:INC_lights, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new INC_engine, not_usable, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsEx(vehicleid, INC_engine, not_usable, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        SetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsEx(v, INC_engine, not_usable, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
            //
            if(!INC_usando_veiculo[v])
                SetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Abrir/Fechar capo veiculo.
stock Veiculo_Capo(bool:INC_bonnet, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new INC_engine, INC_lights, INC_alarm, INC_doors, not_usable, INC_boot, INC_objective;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, not_usable, INC_boot, INC_objective);
        //
        SetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, not_usable, INC_boot, INC_objective);
            //
            if(!INC_usando_veiculo[v])
                SetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Abrir/Fechar porta malas veiculo.
stock Veiculo_Malas(bool:INC_boot, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, not_usable, INC_objective;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, not_usable, INC_objective);
        //
        SetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, not_usable, INC_objective);
            //
            if(!INC_usando_veiculo[v])
                SetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Ativar/Desativar alarme veiculo.
stock Veiculo_Alarme(bool:INC_alarm, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new INC_engine, INC_lights, not_usable, INC_doors, INC_bonnet, INC_boot, INC_objective;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsEx(vehicleid, INC_engine, INC_lights, not_usable, INC_doors, INC_bonnet, not_usable, INC_objective);
        //
        SetVehicleParamsEx(vehicleid, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsEx(v, INC_engine, INC_lights, not_usable, INC_doors, INC_bonnet, not_usable, INC_objective);
            //
            if(!INC_usando_veiculo[v])
                SetVehicleParamsEx(v, INC_engine, INC_lights, INC_alarm, INC_doors, INC_bonnet, INC_boot, INC_objective);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Abrir/Fechar portas veiculo.
stock Veiculo_Portas(bool:INC_close, INC_doors, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new INC_driver, INC_passenger, INC_backleft, INC_backright;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsCarDoors(vehicleid, INC_driver, INC_passenger, INC_backleft, INC_backright);
        //
        if(INC_close)
        {
            if(INC_doors == 1)
                SetVehicleParamsCarDoors(vehicleid, true, INC_passenger, INC_backleft, INC_backright);
            else if(INC_doors == 2)
                SetVehicleParamsCarDoors(vehicleid, INC_driver, true, INC_backleft, INC_backright);
            else if(INC_doors == 3)
                SetVehicleParamsCarDoors(vehicleid, INC_driver, INC_passenger, true, INC_backright);
            else if(INC_doors == 4)
                SetVehicleParamsCarDoors(vehicleid, INC_driver, INC_passenger, INC_backleft, true);
            else if(INC_doors == 5)
                SetVehicleParamsCarDoors(vehicleid, true, true, true, true);
        }
        else if(!INC_close)
        {
            if(INC_doors == 1)
                SetVehicleParamsCarDoors(vehicleid, false, INC_passenger, INC_backleft, INC_backright);
            else if(INC_doors == 2)
                SetVehicleParamsCarDoors(vehicleid, INC_driver, false, INC_backleft, INC_backright);
            else if(INC_doors == 3)
                SetVehicleParamsCarDoors(vehicleid, INC_driver, INC_passenger, false, INC_backright);
            else if(INC_doors == 4)
                SetVehicleParamsCarDoors(vehicleid, INC_driver, INC_passenger, INC_backleft, false);
            else if(INC_doors == 5)
                SetVehicleParamsCarDoors(vehicleid, false, false, false, false);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsCarDoors(v, INC_driver, INC_passenger, INC_backleft, INC_backright);
            //
            if(!INC_usando_veiculo[v])
            {
                if(INC_close)
                {
                    if(INC_doors == 1)
                        SetVehicleParamsCarDoors(v, true, INC_passenger, INC_backleft, INC_backright);
                    else if(INC_doors == 2)
                        SetVehicleParamsCarDoors(v, INC_driver, true, INC_backleft, INC_backright);
                    else if(INC_doors == 3)
                        SetVehicleParamsCarDoors(v, INC_driver, INC_passenger, true, INC_backright);
                    else if(INC_doors == 4)
                        SetVehicleParamsCarDoors(v, INC_driver, INC_passenger, INC_backleft, true);
                    else if(INC_doors == 5)
                        SetVehicleParamsCarDoors(v, true, true, true, true);
                }
                else if(!INC_close)
                {
                    if(INC_doors == 1)
                        SetVehicleParamsCarDoors(v, false, INC_passenger, INC_backleft, INC_backright);
                    else if(INC_doors == 2)
                        SetVehicleParamsCarDoors(v, INC_driver, false, INC_backleft, INC_backright);
                    else if(INC_doors == 3)
                        SetVehicleParamsCarDoors(v, INC_driver, INC_passenger, false, INC_backright);
                    else if(INC_doors == 4)
                        SetVehicleParamsCarDoors(v, INC_driver, INC_passenger, INC_backleft, false);
                    else if(INC_doors == 5)
                        SetVehicleParamsCarDoors(v, false, false, false, false);
                }
            }
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Abrir/Fechar janelas veiculo.
stock Veiculo_Janelas(bool:INC_close, INC_windows, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new INC_driver, INC_passenger, INC_backleft, INC_backright;
    //
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        GetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, INC_backleft, INC_backright);
        //
        if(INC_close)
        {
            if(INC_windows == 1)
                SetVehicleParamsCarWindows(vehicleid, false, INC_passenger, INC_backleft, INC_backright);
            else if(INC_windows == 2)
                SetVehicleParamsCarWindows(vehicleid, INC_driver, false, INC_backleft, INC_backright);
            else if(INC_windows == 3)
                SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, false, INC_backright);
            else if(INC_windows == 4)
                SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, INC_backleft, false);
            else if(INC_windows == 5)
                SetVehicleParamsCarWindows(vehicleid, false, false, false, false);
        }
        else if(!INC_close)
        {
            if(INC_windows == 1)
                SetVehicleParamsCarWindows(vehicleid, true, INC_passenger, INC_backleft, INC_backright);
            else if(INC_windows == 2)
                SetVehicleParamsCarWindows(vehicleid, INC_driver, true, INC_backleft, INC_backright);
            else if(INC_windows == 3)
                SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, true, INC_backright);
            else if(INC_windows == 4)
                SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, INC_backleft, true);
            else if(INC_windows == 5)
                SetVehicleParamsCarWindows(vehicleid, true, true, true, true);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            GetVehicleParamsCarWindows(v, INC_driver, INC_passenger, INC_backleft, INC_backright);
            //
            if(!INC_usando_veiculo[v])
            {
                if(INC_close)
                {
                    if(INC_windows == 1)
                        SetVehicleParamsCarWindows(vehicleid, false, INC_passenger, INC_backleft, INC_backright);
                    else if(INC_windows == 2)
                        SetVehicleParamsCarWindows(vehicleid, INC_driver, false, INC_backleft, INC_backright);
                    else if(INC_windows == 3)
                        SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, false, INC_backright);
                    else if(INC_windows == 4)
                        SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, INC_backleft, false);
                    else if(INC_windows == 5)
                        SetVehicleParamsCarWindows(vehicleid, false, false, false, false);
                }
                else if(!INC_close)
                {
                    if(INC_windows == 1)
                        SetVehicleParamsCarWindows(vehicleid, true, INC_passenger, INC_backleft, INC_backright);
                    else if(INC_windows == 2)
                        SetVehicleParamsCarWindows(vehicleid, INC_driver, true, INC_backleft, INC_backright);
                    else if(INC_windows == 3)
                        SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, true, INC_backright);
                    else if(INC_windows == 4)
                        SetVehicleParamsCarWindows(vehicleid, INC_driver, INC_passenger, INC_backleft, true);
                    else if(INC_windows == 5)
                        SetVehicleParamsCarWindows(vehicleid, true, true, true, true);
                }
            }
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Dar/Retirar vida veiculo.
stock Veiculo_Vida(Float:INC_health, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        SetVehicleHealth(vehicleid, INC_health);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
            SetVehicleHealth(v, INC_health);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Reparar veiculo.
stock Veiculo_Reparar(INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        RepairVehicle(vehicleid);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
            RepairVehicle(v);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Setar respawn veiculo.
stock Veiculo_Respawn(INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        if(IsPlayerInAnyVehicle(playerid))
            RemovePlayerFromVehicle(playerid);
        
        SetVehicleToRespawn(vehicleid);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        foreach(new i: Player)
        {
            if(IsPlayerInAnyVehicle(i))
                INC_usando_veiculo[GetPlayerVehicleID(i)] = true;
        }
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            if(!INC_usando_veiculo[v])
                SetVehicleToRespawn(v);
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Setar world veiculo.
stock Veiculo_World(INC_world, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        if(IsPlayerInAnyVehicle(playerid))
            SetVehicleVirtualWorld(playerid, INC_world);
        
        SetVehicleVirtualWorld(vehicleid, INC_world);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
            SetVehicleVirtualWorld(v, INC_world);
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}

//Setar sirene objeto veiculo.
stock Veiculo_Sirene(bool:INC_sirene, INC_global, INC_color, const INC_message[], playerid = -1, vehicleid = -1)
{
    new Float:x_v, ,Float:y_x, Float:z_v;
    GetPlayerPos(playerid, x_v, y_x, z_v);
        
    if(INC_global == NON_GLOBAL_VEHICLES)
    {
        new patriot = GetVehicleModel(vehicleid);
        new sultan = GetVehicleModel(vehicleid);
        new cheetah = GetVehicleModel(vehicleid);
        new bf-400 = GetVehicleModel(vehicleid);
        new predator = GetVehicleModel(vehicleid);
        new rancher = GetVehicleModel(vehicleid);
        new nrg-500 = GetVehicleModel(vehicleid);
        new super-gt = GetVehicleModel(vehicleid);
        new fcr-900 = GetVehicleModel(vehicleid);

        if(INC_sirene)
        {
            if(patriot == 470)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);
                    
                INC_siren[vehicleid] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 1.10, 0, 0, 0);
            }
            else if(sultan == 560)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);
                    
                INC_siren[vehicleid] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 0.82, 0, 0, 0);
            }
            else if(cheetah == 415)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                INC_siren[vehicleid] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 0.57, 0, 0, 0);
            }
            else if(bf-400 == 581)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                INC_siren[vehicleid] = CreateDynamicObject(18646, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 0.62, 0, 0, 0);
            }
            else if(predator == 430)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                INC_siren[vehicleid] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 2.13, 0, 0, 0);
            }
            else if(rancher == 490)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                INC_siren[vehicleid] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 1.11, 0, 0, 0);
            }
            else if(nrg-500 == 522)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                INC_siren[vehicleid] = CreateDynamicObject(18646, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 0.68, 0, 0, 0);
            }
            else if(super-gt == 541)
            {
                if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                INC_siren[vehicleid] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 0.62, 0, 0, 0);
            }
            else if(fcr-900 == 521)
            {
                 if(INC_sirenactivated[vehicleid])
                    DestroyDynamicObject(INC_siren[vehicleid]);

                 INC_siren[vehicleid] = CreateDynamicObject(18646, x_v, y_v, z_v, 0, 0, 0, 0);
                 AttachDynamicObjectToVehicle(INC_siren[vehicleid], vehicleid, 0.0, 0, 0.65, 0, 0, 0);
            }
            INC_sirenactivated[vehicleid] = true;
        }
        else if(!INC_sirene)
        {
            if(INC_sirenactivated[vehicleid])
            {
                INC_sirenactivated[vehicleid] = false;
                DestroyDynamicObject(INC_siren[vehicleid]);
            }
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM(playerid, INC_color, INC_str_message);
    }
    else if(INC_global == GLOBAL_VEHICLES)
    {
        for(new v = 0, a = GetVehiclePoolSize(); v < a; v++)
        {
            new patriot = GetVehicleModel(v);
            new sultan = GetVehicleModel(v);
            new cheetah = GetVehicleModel(v);
            new bf-400 = GetVehicleModel(v);
            new predator = GetVehicleModel(v);
            new rancher = GetVehicleModel(v);
            new nrg-500 = GetVehicleModel(v);
            new super-gt = GetVehicleModel(v);
            new fcr-900 = GetVehicleModel(v);
        
            if(INC_sirene)
            {
                if(patriot == 470)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);
                        
                    INC_siren_global[v] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 1.10, 0, 0, 0);
                }
                else if(sultan == 560)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);

                    INC_siren_global[v] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 0.82, 0, 0, 0);
                }
                else if(cheetah == 415)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);

                    INC_siren_global[v] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 0.57, 0, 0, 0);
                }
                else if(bf-400 == 581)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);

                    INC_siren_global[v] = CreateDynamicObject(18646, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 0.62, 0, 0, 0);
                }
                else if(predator == 430)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);

                    INC_siren_global[v] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 2.13, 0, 0, 0);
                }
                else if(rancher == 490)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);
                    INC_siren_global[v] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 1.11, 0, 0, 0);
                }
                else if(nrg-500 == 522)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);
                    INC_siren_global[v] = CreateDynamicObject(18646, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 0.68, 0, 0, 0);
                }
                else if(super-gt == 541)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);
                    INC_siren_global[v] = CreateDynamicObject(19288, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 0.62, 0, 0, 0);
                }
                else if(fcr-900 == 521)
                {
                    if(INC_sirenactivated_global[v])
                        DestroyDynamicObject(INC_siren_global[v]);
                    INC_siren_global[v] = CreateDynamicObject(18646, x_v, y_v, z_v, 0, 0, 0, 0);
                    AttachDynamicObjectToVehicle(INC_siren_global[v], v, 0.0, 0, 0.65, 0, 0, 0);
                }
                INC_sirenactivated_global[v] = true;
            }
            if(!INC_sirene)
            {
                if(INC_sirenactivated_global[v])
                {
                    INC_sirenactivated_global[v] = false;
                    DestroyDynamicObject(INC_siren_global[v]);
                }
            }
        }
        //
        format(INC_str_message, sizeof(INC_str_message), "%s", INC_message);
        INC_SCM_ALL(INC_color, INC_str_message);
    }
    return true;
}
