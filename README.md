## Include VeiculoFuncoes SA:MP

Este é um include que possui diversas funções para veículos, tudo de forma fácil de usar. Recomendo que leia as categorias abaixo para ficar informado.

-----------------------

### Como instalar?

Você deve fazer o download do include. Depois de tê-lo feito, você deverá colocar o include na pasta (pawno > include). Após ter feito isso, abra o arquivo pwn do seu Gamemode e coloque o seguinte código abaixo dos seus outros includes:
```pawn
#include <VeiculoFuncoes>
```

-----------------------

### Includes necessárias

```pawn
#include <a_samp>
#include <foreach>
#include <streamer>
```
Não tem os includes mencionados acima? Baixe aqui.

inc a_samp <kbd>nativo</kbd>   
inc foreach [download](https://github.com/karimcambridge/samp-foreach).   
inc streamer [download](https://github.com/samp-incognito/samp-streamer-plugin).

-----------------------

### Qual é a diferença?

Irei criar dois comandos para que você possa observar a diferença, utilizando o método normal e também utilizando o meu include.

Comando sem a include.
```pawn
CMD:motor(playerid, params[])
{
    new vehicleid = GetPlayerVehicleID(playerid);
    new engine, lights, alarm, doors, bonnet, boot, objective;
    GetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
    SetVehicleParamsEx(vehicleid, VEHICLE_PARAMS_ON, lights, alarm, doors, bonnet, boot, objective);
    SendClientMessage(playerid, -1, "Voce ligou o motor do seu veículo.");
    return 1;
}
```
Comando com a include.
```pawn
CMD:motor(playerid, params[])
{
    new vehicleid = GetPlayerVehicleID(playerid);
    Veiculo_Motor(true, NON_GLOBAL_VEHICLES, -1, "Você ligou o motor do seu veículo.", playerid, vehicleid);
    return 1;
}
```

-----------------------

### Como funciona?

Irei explicar primeiro como funciona uma determinada callback da minha include com um veículo específico, ou seja, o veículo de um jogador. Vou explicar utilizando a callback **Veiculo_Fechadura**.
```pawn
Veiculo_Fechadura(true, NON_GLOBAL_VEHICLES, -1, "Você trancou o veiculo.", playerid, vehicleid);
```
1 - <kbd>Defina se é true ou false, true tranca e false destranca.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o playerid.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>

Bem, acima foi explicado como usar a callback com um veículo específico, não global, ou seja, o veículo de um jogador. Agora vou explicar como vocês devem usar a callback global.
```pawn
Veiculo_Fechadura(true, GLOBAL_VEHICLES, -1, "Todos os veículos foram trancados.");
```
1 - <kbd>Defina se é true ou false, true tranca e false destranca.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para todos os players.</kbd>   

Leia a categoria **Relacionado ao Global** para entender.

-----------------------

### Como funciona as callbacks com estruturas diferentes?

Nesta parte, vou explicar como algumas callbacks que diferem das outras funcionam. Existem algumas callbacks que usam o mesmo estilo de estrutura, então a explicação servirá para ambas.
```pawn
Veiculo_Portas(↓)
Veiculo_Janelas(true, 5, NON_GLOBAL_VEHICLES, -1, "Você abriu todas as janelas", playerid, vehicleid);
```
1 - <kbd>Defina se é true ou false, true abre false fecha.</kbd>   
2 - <kbd>Defina qual janela irá abrir, vai de 1 até 4, 5 todas abrem.</kbd>   
3 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
4 - <kbd>Defina a cor da mensagem.</kbd>   
5 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
6 - <kbd>Defina o playerid.</kbd>   
7 - <kbd>Defina o vehicleid.</kbd>

```pawn
Veiculo_Vida(1000, NON_GLOBAL_VEHICLES, -1, "Você atualizou a vida do veículo para 1000", playerid, vehicleid);
```
1 - <kbd>Defina a vida do veiculo.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o playerid.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>

```pawn
Veiculo_Reparar(↓)
Veiculo_Respawn(NON_GLOBAL_VEHICLES, -1, "Você deu respawn em seu veiculo", playerid, vehicleid);
```
1 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
2 - <kbd>Defina a cor da mensagem.</kbd>   
3 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
4 - <kbd>Defina o playerid.</kbd>   
5 - <kbd>Defina o vehicleid.</kbd>

```pawn
Veiculo_World(2, NON_GLOBAL_VEHICLES, -1, "Você e seu veículo foram para o mundo 2", playerid, vehicleid);
```
1 - <kbd>Defina o mundo para qual o veículo irá.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o playerid.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>
```pawn
Veiculo_Sirene(true, NON_GLOBAL_VEHICLES, -1, "Você adicionou uma sirene no seu veículo", playerid, vehicleid);
```

A callback **Veiculo_Sirene** nem deveria estar aqui, pois ela não possui uma estrutura diferente das outras. No entanto, vou adicioná-la para mencionar que nem todos os veículos irão acionar a sirene. Em versões futuras, planejo trazer atualizações para esta callback.

1 - <kbd>Defina se é true ou false, true coloca a sirene e false retira.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o playerid.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
null - **Veículos compatíveis > Patriot, Sultan, Cheetah, BF-400, Predator, Rancher, NRG-500, Super-GT e FCR-900.**

-----------------------

### Relacionado ao Global

Aqui está o texto corrigido:

Aqui, vou explicar como funcionam as callbacks em modo global. É simples: quando a callback não é global, não é necessário que você use <kbd>playerid</kbd> e nem <kbd>vehicleid</kbd>. Mesmo que você os utilize, tudo dependerá das seguintes definições: <kbd>NON_GLOBAL_VEHICLES</kbd> ou <kbd>GLOBAL_VEHICLES</kbd>. A primeira definição citada indica que a callback não será global, ou seja, será referente ao veículo de um jogador. Já a segunda definição citada indica que a callback será global. Se você usar o modo global na maioria das callbacks, e o jogador estiver dentro do veículo, nenhuma mudança ocorrerá no veículo dele. Por exemplo, o **Veiculo_Respawn**. Se você usar essa callback de forma global, e algum jogador estiver utilizando um veículo, esse veículo específico não será respawnado.

Este include é altamente recomendado para servidores de DayZ, pois possui definições globais.

-----------------------

### Todas as callbacks

Callbacks com os mesmos padrões de estrutura:
```pawn
Veiculo_Fechadura(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Motor(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Farol(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Capo(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Malas(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Alarme(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Sirene(true, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);
```
Callbacks com estruturas diferentes:
```pawn
Veiculo_Portas(true, 5, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Janelas(true, 5, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Vida(1000, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Reparar(NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_Respawn(NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);

Veiculo_World(1, NON_GLOBAL_VEHICLES, -1, "Mensagem!", playerid, vehicleid);
```

-----------------------

### Informações de contato

Instagram: [ocalasans](https://instagram.com/ocalasans)   
YouTube: [Walkerxinho](https://www.youtube.com/@walkerxinho)   
Discord: walkerxinho7 ou Walkerxinho7#9124

***Chave pix para doações:***

Chave: 6ec94946-dfa5-4300-82b6-8307f9fefd38   
Irei por a chave aleatória por questões de privacidade.
