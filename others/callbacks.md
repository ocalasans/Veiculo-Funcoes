## Português

Aqui você encontrará todos as callbacks.

English > [callbacks](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/callbacks.eng.md).

-----------------------

#### Callbacks com os mesmos padrões de estrutura:
```pawn
Veiculo_Fechadura(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Motor(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Farol(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Capo(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Malas(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Alarme(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Sirene(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
```

-----------------------

#### Callbacks com estruturas diferentes:
```pawn
Veiculo_Portas(true, 5, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Janelas(true, 5, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Vida(1000, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Reparar(NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Reaparecer(NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Mundo(1, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Neon(true, NEON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Xenon(true, XENON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Tunar(true, SPOILER_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Cor(120, 120, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
-
Veiculo_Interior(1, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.", vehicleid, playerid);
```