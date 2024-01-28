## Include VeiculoFuncoes SA:MP

Este é um include que possui diversas funções para veículos, tudo de forma fácil de usar. Recomendo que leia as categorias abaixo para ficar informado.

English > [README](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/README.eng.md).

-----------------------

### Como instalar?

Você deve fazer o download do include. Depois de tê-lo feito, você deverá colocar o include na pasta (pawno > include). Após ter feito isso, abra o arquivo pwn do seu Gamemode e coloque o seguinte código abaixo dos seus outros includes:
```pawn
#include <VeiculoFuncoes>
```

-----------------------

### Qual é a diferença?

Irei criar dois comandos para que você possa observar a diferença, utilizando o método normal e também utilizando o meu include.

Comando sem a include:
```pawn
CMD:motor(playerid)
{
    new vehicleid = GetPlayerVehicleID(playerid);
    new engine, lights, alarm, doors, bonnet, boot, objective;
    GetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
    SetVehicleParamsEx(vehicleid, VEHICLE_PARAMS_ON, lights, alarm, doors, bonnet, boot, objective);
    SendClientMessage(playerid, -1, "Voce ligou o motor do seu veículo.");
    return true;
}
```

Comando com a include:
```pawn
CMD:motor(playerid)
{
    new vehicleid = GetPlayerVehicleID(playerid);
    Veiculo_Motor(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você ligou o motor do seu veículo.", vehicleid, playerid);
    return true;
}
```

-----------------------

### Como funciona?

Irei explicar primeiro como funciona uma determinada callback da minha include com um veículo específico, ou seja, o veículo de um jogador. Vou explicar utilizando a callback `Veiculo_Fechadura`.

```pawn
Veiculo_Fechadura(true, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você trancou o veículo.", vehicleid, playerid);
```
1 - <kbd>Defina se é true ou false, true tranca, false destranca.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o vehicleid.</kbd>   
6 - <kbd>Defina o playerid.</kbd>

Bem, acima foi explicado como usar a callback com um veículo específico, não global, ou seja, o veículo de um jogador. Agora vou explicar como vocês devem usar a callback global.

```pawn
Veiculo_Fechadura(true, GLOBAL_VEHICLES, 0xFFFFFFFF, "Todos os veículos foram trancados.");
```
1 - <kbd>Defina se é true ou false, true tranca, false destranca.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso é global.</kbd>   
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para todos os players.</kbd>   

Leia a categoria [Relacionado ao Global](https://github.com/Walkerxinho7/Veiculo-Funcoes#relacionado-ao-global) para entender.

-----------------------

### Como funciona as callbacks com estruturas diferentes?

Nesta parte, vou explicar como algumas callbacks que diferem das outras funcionam. Existem algumas callbacks que usam o mesmo estilo de estrutura, então a explicação servirá para ambas.

-----------------------

```pawn
Veiculo_Portas(↓)
Veiculo_Janelas(true, 5, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você abriu todas as janelas.", vehicleid, playerid);
```
1 - <kbd>Defina se é true ou false, true abre, false fecha.</kbd>   
2 - <kbd>Defina qual janela irá abrir, vai de 1 até 4, 5 todas abrem.</kbd>   
3 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
4 - <kbd>Defina a cor da mensagem.</kbd>   
5 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
7 - <kbd>Defina o playerid.</kbd>

-----------------------

```pawn
Veiculo_Vida(1000, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você atualizou a vida do veículo para 1000.", vehicleid, playerid);
```
1 - <kbd>Defina a vida do veículo.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o vehicleid.</kbd>   
6 - <kbd>Defina o playerid.</kbd>

-----------------------

```pawn
Veiculo_Reparar(↓)
Veiculo_Reaparecer(NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você deu respawn em seu veículo.", vehicleid, playerid);
```
1 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
2 - <kbd>Defina a cor da mensagem.</kbd>   
3 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
4 - <kbd>Defina o vehicleid.</kbd>   
5 - <kbd>Defina o playerid.</kbd>

-----------------------

```pawn
Veiculo_Mundo(1, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "O seu veículo foi para o mundo 1.", vehicleid, playerid);
```
1 - <kbd>Defina o mundo para qual o veículo irá.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o vehicleid.</kbd>   
6 - <kbd>Defina o playerid.</kbd>

-----------------------

```pawn
Veiculo_Neon(true, NEON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você adicionou Neon ao seu veículo.", vehicleid, playerid);
```
1 - <kbd>Defina se é true ou false, true o neon é anexado, false o neon é desanexado.</kbd>   
2 - <kbd>Defina a cor do neon.</kbd>   
3 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
4 - <kbd>Defina a cor da mensagem.</kbd>   
5 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
7 - <kbd>Defina o playerid.</kbd>

> [!Warning]
> Ao definir `false` à primeira definição, estabeleça a segunda definição como `NEON_NULO`.

Você poderá encontrar todas as definições para `Neon` acessando esta aba > [other definitions](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/other_definitions.md).

-----------------------

```pawn
Veiculo_Xenon(true, XENON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você adicionou Xenon ao seu veículo.", vehicleid, playerid);
```
1 - <kbd>Defina se é true ou false, true o xenon é anexado, false o xenon é desanexado.</kbd>   
2 - <kbd>Defina a cor do xenon.</kbd>   
3 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
4 - <kbd>Defina a cor da mensagem.</kbd>   
5 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
7 - <kbd>Defina o playerid.</kbd>

> [!Warning]
> Ao definir `false` à primeira definição, estabeleça a segunda definição como `XENON_NULO`.

Você poderá encontrar todas as definições para `Xenon` acessando esta aba > [other definitions](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/other_definitions.md).

-----------------------

```pawn
Veiculo_Tunar(true, SPOILER_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você adicionou um Aerofólio ao seu veículo.", vehicleid, playerid);
```
1 - <kbd>Defina se é true ou false, true o componente é adicionado, false o componente é removido.</kbd>   
2 - <kbd>Defina o componente.</kbd>   
3 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
4 - <kbd>Defina a cor da mensagem.</kbd>   
5 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
7 - <kbd>Defina o playerid.</kbd>

> [!Warning]
> Ao definir `false` à primeira definição, você está especificando que o componente a ser removido é aquele definido pela segunda definição.

Você poderá encontrar todas as definições para `Componentes` acessando esta aba > [components](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/components.md).

-----------------------

```pawn
Veiculo_Cor(120, 120, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "Você adicionou a cor id 120 ao seu veículo.", vehicleid, playerid);
```
1 - <kbd>Defina a primeira cor.</kbd>   
2 - <kbd>Defina a segunda cor.</kbd>   
3 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
4 - <kbd>Defina a cor da mensagem.</kbd>   
5 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
6 - <kbd>Defina o vehicleid.</kbd>   
7 - <kbd>Defina o playerid.</kbd>

-----------------------

```pawn
Veiculo_Interior(1, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "O seu veículo foi para o interior 1.", vehicleid, playerid);
```
1 - <kbd>Defina o interior para qual o veículo irá.</kbd>   
2 - <kbd>Defina se é global ou se não é global, nesse caso não é global.</kbd>    
3 - <kbd>Defina a cor da mensagem.</kbd>   
4 - <kbd>Defina a mensagem que irá aparecer para o player.</kbd>   
5 - <kbd>Defina o vehicleid.</kbd>   
6 - <kbd>Defina o playerid.</kbd>

-----------------------

### Relacionado ao Global

Quando a callback não é global, não é necessário que você use <kbd>vehicleid</kbd> e nem <kbd>playerid</kbd>. Mesmo que você os utilize, tudo dependerá das seguintes definições: <kbd>NON_GLOBAL_VEHICLES</kbd> ou <kbd>GLOBAL_VEHICLES</kbd>. A primeira definição citada indica que a callback não será global, ou seja, será referente ao veículo de um jogador. Já a segunda definição citada indica que a callback será global. Se você usar o modo global na maioria das callbacks, e o jogador estiver dentro do veículo, nenhuma mudança ocorrerá no veículo dele. Por exemplo, o `Veiculo_Reaparecer`. Se você usar essa callback de forma global, e algum jogador estiver utilizando um veículo, esse veículo específico não será respawnado.

Este include é altamente recomendado para servidores de SA:MP DayZ, pois possui definições globais.

-----------------------

### Como você deve usá-lo sem um parâmetro playerid

Quando a callback não possui o `playerid` e não tem nenhuma relação com os players, vocês passaram a definir apenas o `vehicleid`, como exemplificado abaixo:
```pawn
Veiculo_Neon(true, NEON_0, NON_GLOBAL_VEHICLES, 0xFFFFFFFF, "", vehicleid);
```
* A definição de `cor` e `mensagem` parece desnecessária, uma vez que `Veiculo_Neon` está sendo utilizada em uma callback que não possui relação alguma com o `playerid` nem com o global. No entanto, essa situação é inevitável, e é uma consequência que teremos que aceitar.

Por outro lado, se a callback não possuir o `playerid`, mas tem relação com os players, vocês passaram a definir da seguinte forma:
```pawn
Veiculo_Neon(true, NEON_0, GLOBAL_VEHICLES, 0xFFFFFFFF, "Mensagem.");
```

> [!Warning]
> Não é necessário criar um `loop` pois a definição `GLOBAL_VEHICLES` já realiza essa operação.

-----------------------

### Todas as callbacks

Você poderá encontrar todas as callbacks acessando esta aba > [callbacks](https://github.com/Walkerxinho7/Veiculo-Funcoes/blob/main/others/callbacks.md).

-----------------------

### Informações de contato

Instagram: [ocalasans](https://instagram.com/ocalasans)   
YouTube: [Walkerxinho](https://www.youtube.com/@walkerxinho)   
Discord: walkerxinho7 ou Walkerxinho7#9124   
Comunidade: [SA:MP Programming Community©](https://abre.ai/samp-spc)
