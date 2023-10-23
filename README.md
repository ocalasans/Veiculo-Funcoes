## Include VeiculoFuncoes SA:MP

Este é um include que possui diversas funções para veículos, tudo de forma fácil de usar. Recomendo que leia as categorias abaixo para ficar informado.

-----------------------

### Como instalar?

Você deve fazer o dowloand do include, depois de ter feito, você deverá colocar o include na pasta (pawno > include).
Após ter feito isso abra o arquivo pwn do seu Gamemode e coloque o seguinte código abaixo do seus outros includes:
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

Eu irei fazer 2 comandos para vocês verem a diferença, usando o normal ou usando o meu include.

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

Eu irei explicar primeiro como funciona uma determinada callback da minha include com um determinado veiculo, ou seja, o veiculo de um player. Irei explicar utilizando a callback **Veiculo_Fechadura**.
```pawn
Veiculo_Fechadura(true, NON_GLOBAL_VEHICLES, -1, "Você trancou o veiculo.", playerid, vehicleid);
```
1 - <kbd>Defina se é true ou false, true tranca e false destranca.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o playerid.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>

Bom, acima foi explicado a usar a callback com um determinado veiculo, não global, ou seja, o veiculo de um player. Agora vou explicar a vocês, como vocês devem usar a callback global.
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

Aqui nessa parte irei explicar como algumas callbacks que são diferentes das outras funcionam. Tem algumas callbacks que utilizam a mesma estrutura então a explicação servirá para as duas.
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
A callback **Veiculo_Sirene** nem deveria estar aqui pois ela não tem uma estrutura diferente das outras, mas vou adicioná-la aqui para mencionar que não são todos os veículos que irão pegar a sirene, em versões futuras planejo trazer atualizações para essa callback.

1 - <kbd>Defina se é true ou false, true coloca a sirene e false retira.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o playerid.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
null - **Veículos compatíveis > Patriot, Sultan, Cheetah, BF-400, Predator, Rancher, NRG-500, Super-GT e FCR-900.**

-----------------------

### Relacionado ao Global

Aqui eu irei explicar como funciona as callbacks em modo Global, bom é simples, quando a callback não é global, não é necessário que você use o <kbd>playerid</kbd> e nem o <kbd>vehicleid</kbd>, mesmo que você use, tudo dependerá das seguintes definições <kbd>NON_GLOBAL_VEHICLES</kbd> ou <kbd>GLOBAL_VEHICLES</kbd>, a primeira definição citada quer dizer que a callback não será global, ou seja, o veiculo de um player, mas a segunda definição citada quer dizer que a callback vai ser global. Se você usar o global na maioria das callbacks, e o player estiver dentro do veículo, nenhuma mudança irá acontecer com veiculo dele, por exemplo o **Veiculo_Respawn** se você usar essa callback global, caso tenha algum player utilizando um veículo, esse determinado veículo não será respawnado.

Este include é muito recomendado para servidores de DayZ, pois tem definições global.

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

Instagram: ocalasans   
YouTube: Walkerxinho   
Discord: walkerxinho7 ou Walkerxinho7#9124

***Chave pix para doações:***

Chave: 6ec94946-dfa5-4300-82b6-8307f9fefd38   
Irei por a chave aleatória por questões de privacidade.
