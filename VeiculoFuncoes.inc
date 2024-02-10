/*
    * VeiculoFuncoes v1.0.3

    Este include é parte integrante do projeto VeiculoFuncoes, uma biblioteca que oferece
    funcionalidades relacionadas a veículos. Desenvolvido por [Calasans]. 

    © [2024] [Calasans]. Todos os direitos reservados.

    Discord: ocalasans
    Youtube: Calasans
    Instagram: ocalasans

    SA:MP Programming Comunnity©: https://abre.ai/samp-spc
*/

#if defined _veiculo_funcoes
    #undef _veiculo_funcoes
#endif
//
#if defined _veiculo_funcoes_included
    #endinput
#endif
#define _veiculo_funcoes_included
//
#if !defined _samp_included
    #error "A biblioteca `a_samp` nao foi ativada. Por favor, ative-a no inicio do seu Gamemode, Ex: `#include <a_samp>`"
#endif
//
#if !defined IsValidVehicle
    native IsValidVehicle(vehicleid);
#endif
//
#if defined _FOREACH_LOCAL_VERSION
    new Iterator:Vehicle<MAX_VEHICLES>;
#endif

/*
$$$$$$$\             $$$$$$\  $$\           $$\                                               $$\       $$$$$$$\             $$$$$$\  $$\           $$\   $$\     $$\                               
$$  __$$\           $$  __$$\ \__|          \__|                                              $$ |      $$  __$$\           $$  __$$\ \__|          \__|  $$ |    \__|                              
$$ |  $$ | $$$$$$\  $$ /  \__|$$\ $$$$$$$\  $$\  $$$$$$$\  $$$$$$\   $$$$$$\   $$$$$$$\       $$ |      $$ |  $$ | $$$$$$\  $$ /  \__|$$\ $$$$$$$\  $$\ $$$$$$\   $$\  $$$$$$\  $$$$$$$\   $$$$$$$\ 
$$ |  $$ |$$  __$$\ $$$$\     $$ |$$  __$$\ $$ |$$  _____|$$  __$$\ $$  __$$\ $$  _____|      \__|      $$ |  $$ |$$  __$$\ $$$$\     $$ |$$  __$$\ $$ |\_$$  _|  $$ |$$  __$$\ $$  __$$\ $$  _____|
$$ |  $$ |$$$$$$$$ |$$  _|    $$ |$$ |  $$ |$$ |$$ /      $$ /  $$ |$$$$$$$$ |\$$$$$$\        $$\       $$ |  $$ |$$$$$$$$ |$$  _|    $$ |$$ |  $$ |$$ |  $$ |    $$ |$$ /  $$ |$$ |  $$ |\$$$$$$\  
$$ |  $$ |$$   ____|$$ |      $$ |$$ |  $$ |$$ |$$ |      $$ |  $$ |$$   ____| \____$$\       $$ |      $$ |  $$ |$$   ____|$$ |      $$ |$$ |  $$ |$$ |  $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \____$$\ 
$$$$$$$  |\$$$$$$$\ $$ |      $$ |$$ |  $$ |$$ |\$$$$$$$\ \$$$$$$  |\$$$$$$$\ $$$$$$$  |      $$ |      $$$$$$$  |\$$$$$$$\ $$ |      $$ |$$ |  $$ |$$ |  \$$$$  |$$ |\$$$$$$  |$$ |  $$ |$$$$$$$  |
\_______/  \_______|\__|      \__|\__|  \__|\__| \_______| \______/  \_______|\_______/       \__|      \_______/  \_______|\__|      \__|\__|  \__|\__|   \____/ \__| \______/ \__|  \__|\_______/ 
*/

#define VFI_SCM SendClientMessage
#define VFI_SCM_ALL SendClientMessageToAll
//
#define NON_GLOBAL_VEHICLES false
#define GLOBAL_VEHICLES true
//
#define VFI_LoopP: foreach(new i: Player)
#define VFI_LoopP_II: for(new i; i <= MAX_PLAYERS; i ++)
#define VFI_LoopV: foreach(new v: Vehicle)
#define VFI_LoopV_II: for(new v; v <= MAX_VEHICLES; v ++)
//
#define NEON_NULO INVALID_OBJECT_ID
#define	NEON_0 18647 //VERMELHO | RED
#define NEON_1 18648 //AZUL | BLUE
#define NEON_2 18649 //VERDE | GREEN
#define NEON_3 18650 //AMARELO | YELLOW
#define	NEON_4 18651 //ROSA | PINK
#define NEON_5 18652 //BRANCO | WHITE
//
#define XENON_NULO INVALID_OBJECT_ID
#define	XENON_0 19298 //AZUL | BLUE
#define XENON_1 19297 //VERDE | GREEN
#define XENON_2 19296 //VERMELHO | RED
#define XENON_3 19295 //BRANCO | WHITE
//
#define PAINTJOB_0 0
#define PAINTJOB_1 1
#define PAINTJOB_2 2

//Aerofólios | Spoilers
#define SPOILER_0 1000
#define SPOILER_1 1001
#define SPOILER_2 1002
#define SPOILER_3 1003
#define SPOILER_4 1014
#define SPOILER_5 1015
#define SPOILER_6 1016
#define SPOILER_7 1023
#define SPOILER_8 1049
#define SPOILER_9 1050
#define SPOILER_10 1058
#define SPOILER_11 1060
#define SPOILER_12 1138
#define SPOILER_13 1139
#define SPOILER_14 1146
#define SPOILER_15 1147
#define SPOILER_16 1158
#define SPOILER_17 1162
#define SPOILER_18 1163
#define SPOILER_19 1164

//Capuzes | Hoods
#define HOOD_0 1004
#define HOOD_1 1005
#define HOOD_2 1011
#define HOOD_3 1012

//Tetos | Ceilings
#define ROOF_0 1006
#define ROOF_1 1032
#define ROOF_2 1033
#define ROOF_3 1035
#define ROOF_4 1038
#define ROOF_5 1053
#define ROOF_6 1054
#define ROOF_7 1055
#define ROOF_8 1061
#define ROOF_9 1067
#define ROOF_10 1068
#define ROOF_11 1088
#define ROOF_12 1091
#define ROOF_13 1103
#define ROOF_14 1128
#define ROOF_15 1130
#define ROOF_16 1131

//Saias laterais | Side skirts
#define SIDESKIRT_0 1007
#define SIDESKIRT_1 1017
#define SIDESKIRT_2 1026
#define SIDESKIRT_3 1027
#define SIDESKIRT_4 1030
#define SIDESKIRT_5 1031
#define SIDESKIRT_6 1036
#define SIDESKIRT_7 1039
#define SIDESKIRT_8 1040
#define SIDESKIRT_9 1041
#define SIDESKIRT_10 1042
#define SIDESKIRT_11 1047
#define SIDESKIRT_12 1048
#define SIDESKIRT_13 1051
#define SIDESKIRT_14 1052
#define SIDESKIRT_15 1056
#define SIDESKIRT_16 1057
#define SIDESKIRT_17 1062
#define SIDESKIRT_18 1063
#define SIDESKIRT_19 1069
#define SIDESKIRT_20 1070
#define SIDESKIRT_21 1071
#define SIDESKIRT_22 1072
#define SIDESKIRT_23 1090
#define SIDESKIRT_24 1093
#define SIDESKIRT_25 1094
#define SIDESKIRT_26 1095
#define SIDESKIRT_27 1099
#define SIDESKIRT_28 1101
#define SIDESKIRT_29 1102
#define SIDESKIRT_30 1106
#define SIDESKIRT_31 1107
#define SIDESKIRT_32 1108
#define SIDESKIRT_33 1118
#define SIDESKIRT_34 1119
#define SIDESKIRT_35 1120
#define SIDESKIRT_36 1121
#define SIDESKIRT_37 1122
#define SIDESKIRT_38 1124
#define SIDESKIRT_39 1133
#define SIDESKIRT_40 1134
#define SIDESKIRT_41 1137

//Nitro
#define NITRO_0 1009
#define NITRO_1 1008
#define NITRO_2 1010

//Lâmpadas | Lamps
#define LAMPS_0 1013
#define LAMPS_1 1024

//Escapes | Exhausts
#define EXHAUST_0 1018
#define EXHAUST_1 1019
#define EXHAUST_2 1020
#define EXHAUST_3 1021
#define EXHAUST_4 1022
#define EXHAUST_5 1028
#define EXHAUST_6 1029
#define EXHAUST_7 1034
#define EXHAUST_8 1037
#define EXHAUST_9 1043
#define EXHAUST_10 1044
#define EXHAUST_11 1045
#define EXHAUST_12 1046
#define EXHAUST_13 1059
#define EXHAUST_14 1064
#define EXHAUST_15 1065
#define EXHAUST_16 1066
#define EXHAUST_17 1089
#define EXHAUST_18 1092
#define EXHAUST_19 1104
#define EXHAUST_20 1105
#define EXHAUST_21 1113
#define EXHAUST_22 1114
#define EXHAUST_23 1126
#define EXHAUST_24 1127
#define EXHAUST_25 1129
#define EXHAUST_26 1132
#define EXHAUST_27 1135
#define EXHAUST_28 1136

//Rodas | Wheels1
#define WHEELS_0 1025
#define WHEELS_1 1073
#define WHEELS_2 1074
#define WHEELS_3 1075
#define WHEELS_4 1076
#define WHEELS_5 1077
#define WHEELS_6 1078
#define WHEELS_7 1079
#define WHEELS_8 1080
#define WHEELS_9 1081
#define WHEELS_10 1082
#define WHEELS_11 1083
#define WHEELS_12 1084
#define WHEELS_13 1085
#define WHEELS_14 1096
#define WHEELS_15 1097
#define WHEELS_16 1098

//Estéreos | Stereos
#define STEREO_0 1086

//Hidráulicas | Hydraulics
#define HYDRAULICS_0 1087

//Barras de proteção | Protection bars
#define BULLBAR_0 1100
#define BULLBAR_1 1123
#define BULLBAR_2 1125

//Barras Traseiras | Rear Bullbars
#define REAR_BULLBARS_0 1109
#define REAR_BULLBARS_1 1110

//Sinais Frontais | Front Signs
#define FRONT_SIGN_0 1111
#define FRONT_SIGN_1 1112

//Barras Dianteiras | Front Bullbars
#define FRONT_BULLBARS_0 1115
#define FRONT_BULLBARS_1 1116

//Pára-choques dianteiros | Front bumpers
#define FRONT_BUMPER_0 1117
#define FRONT_BUMPER_1 1152
#define FRONT_BUMPER_2 1153
#define FRONT_BUMPER_3 1155
#define FRONT_BUMPER_4 1157
#define FRONT_BUMPER_5 1160
#define FRONT_BUMPER_6 1165
#define FRONT_BUMPER_7 1166
#define FRONT_BUMPER_8 1169
#define FRONT_BUMPER_9 1170
#define FRONT_BUMPER_10 1171
#define FRONT_BUMPER_11 1172
#define FRONT_BUMPER_12 1173
#define FRONT_BUMPER_13 1174
#define FRONT_BUMPER_14 1175
#define FRONT_BUMPER_15 1179
#define FRONT_BUMPER_16 1181
#define FRONT_BUMPER_17 1182
#define FRONT_BUMPER_18 1185
#define FRONT_BUMPER_19 1188
#define FRONT_BUMPER_20 1189
#define FRONT_BUMPER_21 1190
#define FRONT_BUMPER_22 1191

//Pára-choques traseiros | Rear bumpers
#define REAR_BUUMPER_0 1140
#define REAR_BUUMPER_1 1141
#define REAR_BUUMPER_2 1148
#define REAR_BUUMPER_3 1149
#define REAR_BUUMPER_4 1150
#define REAR_BUUMPER_5 1151
#define REAR_BUUMPER_6 1154
#define REAR_BUUMPER_7 1156
#define REAR_BUUMPER_8 1159
#define REAR_BUUMPER_9 1161
#define REAR_BUUMPER_10 1167
#define REAR_BUUMPER_11 1168
#define REAR_BUUMPER_12 1176
#define REAR_BUUMPER_13 1177
#define REAR_BUUMPER_14 1178
#define REAR_BUUMPER_15 1180
#define REAR_BUUMPER_16 1183
#define REAR_BUUMPER_17 1184
#define REAR_BUUMPER_18 1186
#define REAR_BUUMPER_19 1187
#define REAR_BUUMPER_20 1192
#define REAR_BUUMPER_21 1193

//Aberturas | Vents
#define VENTS_0 1142
#define VENTS_1 1143
#define VENTS_2 1144
#define VENTS_3 1145

/*
$$\    $$\                    $$\                               $$\                 $$\       $$\    $$\                    $$\           $$\       $$\                     
$$ |   $$ |                   \__|                              \__|                $$ |      $$ |   $$ |                   \__|          $$ |      $$ |                    
$$ |   $$ |$$$$$$\   $$$$$$\  $$\  $$$$$$\ $$\    $$\  $$$$$$\  $$\  $$$$$$$\       $$ |      $$ |   $$ |$$$$$$\   $$$$$$\  $$\  $$$$$$\  $$$$$$$\  $$ | $$$$$$\   $$$$$$$\ 
\$$\  $$  |\____$$\ $$  __$$\ $$ | \____$$\\$$\  $$  |$$  __$$\ $$ |$$  _____|      \__|      \$$\  $$  |\____$$\ $$  __$$\ $$ | \____$$\ $$  __$$\ $$ |$$  __$$\ $$  _____|
 \$$\$$  / $$$$$$$ |$$ |  \__|$$ | $$$$$$$ |\$$\$$  / $$$$$$$$ |$$ |\$$$$$$\        $$\        \$$\$$  / $$$$$$$ |$$ |  \__|$$ | $$$$$$$ |$$ |  $$ |$$ |$$$$$$$$ |\$$$$$$\  
  \$$$  / $$  __$$ |$$ |      $$ |$$  __$$ | \$$$  /  $$   ____|$$ | \____$$\       $$ |        \$$$  / $$  __$$ |$$ |      $$ |$$  __$$ |$$ |  $$ |$$ |$$   ____| \____$$\ 
   \$  /  \$$$$$$$ |$$ |      $$ |\$$$$$$$ |  \$  /   \$$$$$$$\ $$ |$$$$$$$  |      $$ |         \$  /  \$$$$$$$ |$$ |      $$ |\$$$$$$$ |$$$$$$$  |$$ |\$$$$$$$\ $$$$$$$  |
    \_/    \_______|\__|      \__| \_______|   \_/     \_______|\__|\_______/       \__|          \_/    \_______|\__|      \__| \_______|\_______/ \__| \_______|\_______/ 
*/

static VFI_str_message[156];
//
static Float:VFI_pos[3];
//
static bool:VFI_usingvehicle[MAX_VEHICLES] = false,
    bool:VFI_sirenactivated[MAX_VEHICLES] = false,
    bool:VFI_sirenactivated_global[MAX_VEHICLES] = false,
    bool:VFI_neonactivated[MAX_VEHICLES] = false,
    bool:VFI_neonactivated_global[MAX_VEHICLES] = false,
    bool:VFI_xenonactivated[MAX_VEHICLES] = false,
    bool:VFI_xenonactivated_global[MAX_VEHICLES] = false;
//
enum enum_VehicleUtilities {
    VFI_Sirene[2],
    VFI_Neon[2],
    VFI_Xenon[3]
}
static VFI_VehicleUtilities[MAX_VEHICLES][enum_VehicleUtilities];
//
enum enum_VehicleFunctions {
    VFI_Name_Vehicle[30],
    bool:VFI_Nitro,
    bool:VFI_Paintjob,
    Float:VFI_Sirene_X,
    Float:VFI_Sirene_Y,
    Float:VFI_Sirene_Z,
    Float:VFI_Neon_X,
    Float:VFI_Neon_Y,
    Float:VFI_Neon_Z,
    Float:VFI_Xenon_X,
    Float:VFI_Xenon_Y,
    Float:VFI_Xenon_Z
}
static const VFI_VehicleFunctions[212][enum_VehicleFunctions] = {
    {"Landstalker", true, false, -0.390, 0.080, 0.840, -0.924, 0.009, -0.674, 0.000, 4.571, -0.890}, {"Bravura", true, false, -0.610, 0.020, 0.790, -0.979, 0.074, -0.489, 0.000, 5.791, -0.580}, {"Buffalo", true, false, -0.540, -0.300, 0.770, -1.034, -0.029, -0.579, 0.000, 5.223, -0.630},
    {"Linerunner", true, false, -0.660, 1.961, 1.520, -0.884, 1.834, -1.099, 0.000, 7.912, -1.370}, {"Perennial", true, false, -0.510, 0.070, 0.970, -0.839, -0.064, -0.419, 0.000, 5.043, -0.570}, {"Sentinel", true, false, -0.470, 0.050, 0.769, -0.914, 0.000, -0.534, 0.000, 4.941, -0.730},
    {"Dumper", true, false, -1.051, 4.943, 0.990, -1.129, 0.354, -1.219, 0.000, 8.972, -2.150}, {"Firetruck", true, false, 0.000, 0.000, 0.000, -1.214, 0.125, -0.759, 0.000, 7.612, -1.050}, {"Trashmaster", true, false, -0.670, 3.012, 1.020, -0.664, 0.709, -0.889, 0.000, 7.905, -1.090},
    {"Stretch", true, false, -0.480, 1.010, 0.83, -0.914, -0.294, -0.474, 0.000, 6.492, -0.660}, {"Manana", true, false, -0.360, -0.090, 0.920, -0.879, 0.000, -0.389, 0.000, 4.754, -0.430}, {"Infernus", true, false, -0.400, 0.200, 0.710, -0.969, 0.004, -0.559, 0.000, 5.463, -0.450},
    {"Voodoo", true, false, -0.520, 0.170, 0.710, -0.994, -0.154, -0.569, 0.000, 5.951, -0.540}, {"Pony", true, false, -0.590, 0.820, 1.110, -0.919, -0.069, -0.719, 0.000, 5.645, -0.760}, {"Mule", true, false, -0.720, 2.177, 0.619, -0.759, -0.469, -0.524, 0.000, 6.155, -0.790},
    {"Cheetah", true, false, -0.370, -0.120, 0.620, -0.949, -0.009, -0.524, 0.000, 5.282, -0.500}, {"Ambulance", true, false, 0.000, 0.000, 0.000, -1.259, -0.604, -0.664, 0.000, 6.461, -0.859}, {"Leviathan", false, false, -0.000, 3.432, 2.100, -2.255, 0.859, -0.124, 0.000, 0.000, 0.000},
    {"Moonbeam", true, false, -0.550, 0.660, 1.020, -1.004, 0.089, -0.829, 0.000, 5.479, -0.860}, {"Esperanto", true, false, -0.480, -0.140, 0.720, -0.934, -0.009, -0.584, 0.000, 5.251, -0.460}, {"Taxi", true, false, -0.510, 0.000, 0.860, -0.954, -0.009, -0.444, 0.000, 5.382, -0.600},
    {"Washington", true, false, -0.380, 0.140, 0.720, -0.929, -0.029, -0.589, 0.000, 5.453, -0.460}, {"Bobcat", true, false, -0.610, 0.130, 0.820, -0.889, 0.009, -0.609, 0.000, 5.050, -0.670}, {"Mr. Whoopee", true, false, -0.610, 1.351, 1.529, -0.999, 0.164, -0.714, 0.000, 5.463, -0.690},
    {"BF Injection", true, false, -0.870, 0.870, 0.330, -0.739, 0.039, -0.234, 0.000, 4.390, -0.330}, {"Hunter", false, false, 0.000, 4.952, 0.290, -0.639, 2.475, -0.789, 0.000, 0.000, 0.000}, {"Premier", true, false, -0.550, -0.040, 0.860, -0.969, 0.000, -0.464, 0.000, 5.364, -0.410},
    {"Enforcer", true, false, 0.000, 0.000, 0.000, -1.124, -0.714, -0.734, 0.000, 6.671, -0.800}, {"Securicar", true, false, -0.910, 0.910, 1.340, -1.124, 0.054, -0.759, 0.000, 6.142, -0.630}, {"Banshee", true, false, -0.520, 0.540, 0.320, -0.844, 0.004, -0.474, 0.000, 5.237, -0.450},
    {"Predator", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Bus", true, false, -0.930, 5.282, 2.170, -1.304, 2.300, -0.714, 0.000, 9.601, -0.620}, {"Rhino", true, false, -1.611, 3.420, 0.649, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Barracks", true, false, -0.710, 1.380, 1.710, -0.579, 0.994, -0.874, 0.000, 8.121, -1.140}, {"Hotknife", true, false, -0.439, 0.120, 0.780, 0.000, 0.000, 0.000, 0.000, 4.652, -0.680}, {"Trailer 1", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Previon", true, false, -0.410, -0.170, 0.860, -0.859, -0.024, -0.489, 0.000, 5.293, -0.440}, {"Coach", true, false, -0.890, 4.851, 2.080, -1.314, 2.245, -0.724, 0.000, 9.332, -0.630}, {"Cabbie", true, false, -0.560, 0.610, 0.800, -0.969, -0.034, -0.674, 0.000, 5.985, -0.580},
    {"Stallion", true, false, -0.720, 0.830, 0.280, -0.884, 0.034, -0.644, 0.000, 5.049, -0.470}, {"Rumpo", true, false, -0.530, 0.770, 1.250, -0.914, -0.045, -0.899, 0.000, 5.571, -0.770}, {"RC Bandit", true, false, 0.000, -0.600, 0.480, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Romero", true, false, -0.570, 0.210, 0.920, -1.004, -0.074, -0.604, 0.000, 6.080, -0.560}, {"Packer", true, false, -0.600, 4.239, 0.740, -0.809, 2.770, -1.174, 0.000, 10.252, -1.160}, {"Monster", true, false, -0.710, 0.490, 1.700, -1.064, 0.000, 0.135, 0.000, 6.620, -0.870},
    {"Admiral", true, false, -0.500, 0.060, 0.850, -0.949, 0.000, -0.519, 0.000, 5.238, -0.590}, {"Squalo", false, false, -0.750, 3.771, 1.780, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Seasparrow", true, false, -1.010, 2.212, -0.460, -1.004, 0.259, -0.769, 0.000, 0.000, 0.000},
    {"Pizzaboy", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 2.982, -0.310}, {"Tram", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Trailer 2", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Turismo", true, false, -0.400, -0.330, 0.600, -0.984, -0.194, -0.519, 0.000, 5.241, -0.390}, {"Speeder", false, false, -0.740, 4.674, 0.980, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Reefer", false, false, -1.220, 3.522, 1.719, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Tropic", false, false, 0.000, 8.462, 1.370, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Flatbed", true, false, -0.730, 1.421, 1.710, -0.579, 0.979, -0.859, 0.000, 7.973, -1.050}, {"Yankee", true, false, -0.470, 1.441, 1.270, -0.764, -0.179, -0.464, 0.000, 7.103, -0.820},
    {"Caddy", true, false, -0.310, 0.370, 1.349, 0.000, 0.000, 0.000, 0.000, 3.461, -0.460}, {"Solair", true, false, -0.480, 0.190, 0.730, -0.959, -0.039, -0.594, 0.000, 5.394, -0.570}, {"Berkley's RC Van", true, false, -0.540, 0.790, 1.130, -0.919, -0.069, -0.719, 0.000, 5.534, -0.690},
    {"Skimmer", false, false, -0.380, 1.981, 0.520, -1.399, 0.554, -1.819, 0.000, 0.000, 0.000}, {"PCJ-600", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 3.091, -0.300}, {"Faggio", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 2.691, -0.320},
    {"Freeway", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 2.850, -0.340}, {"RC Baron", true, false, 0.000, 0.160, 0.330, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"RC Raider", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Glendale", true, false, -0.540, 0.290, 0.869, -0.989, -0.064, -0.489, 0.000, 6.122, -0.370}, {"Oceanic", true, false, -0.500, 0.400, 0.850, -0.989, -0.044, -0.484, 0.000, 5.080, -0.400}, {"Sanchez", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 2.930, -0.460},
    {"Sparrow", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Patriot", true, false, -0.750, 0.180, 1.100, -1.119, -0.149, -0.359, 0.000, 5.589, -0.730}, {"Quad", true, false, -0.360, 0.640, 0.380, 0.000, 0.000, 0.000, 0.000, 2.671, -0.290},
    {"Coastguard", false, false, -0.010, 3.901, 0.640, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Dinghy", false, false, -0.340, 2.110, 0.880, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Hermes", true, false, -0.500, -0.070, 0.850, -0.994, -0.064, -0.544, 0.000, 6.154, -0.510},
    {"Sabre", true, false, -0.520, -0.040, 0.740, -0.904, -0.054, -0.549, 0.000, 5.680, -0.420}, {"Rustler", false, false, 0.000, -1.131, 0.650, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"ZR-350", true, false, -0.430, -0.260, 0.730, -0.979, 0.019, -0.514, 0.000, 5.419, -0.400},
    {"Walton", true, false, -0.540, 0.610, 0.900, -0.804, 0.064, -0.519, 0.000, 5.912, -0.650}, {"Regina", true, false, -0.530, 0.000, 0.990, -0.854, 0.090, -0.454, 0.000, 4.994, -0.420}, {"Comet", true, false, -0.500, 0.830, 0.310, -0.879, 0.000, -0.489, 0.000, 5.233, -0.500},
    {"BMX", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Burrito", true, false, -0.520, 0.820, 0.940, -0.989, 0.000, -0.759, 0.000, 5.400, -0.760}, {"Camper", true, true, -0.460, 1.861, 1.039, -0.834, -0.149, -0.744, 0.000, 5.561, -0.590},
    {"Marquis", false, false, 0.000, 7.865, 2.270, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Baggage", true, false, -0.250, 0.930, 0.720, -0.629, 0.164, -0.374, 0.000, 4.289, -0.390}, {"Dozer", true, false, -1.101, 1.261, 0.590, 0.000, 0.000, 0.000, 0.000, 5.343, -0.780},
    {"Maverick", false, false, 0.000, 1.381, 1.569, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"News Chopper", false, false, 0.000, 0.730, 1.550, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Rancher", true, false, -0.660, 0.070, 1.100, -1.019, 0.109, -0.679, 0.000, 6.051, -0.780},
    {"FBI Rancher", true, false, -0.640, 0.650, 1.100, -1.054, 0.125, -0.604, 0.000, 6.144, -0.750}, {"Virgo", true, false, -0.420, -0.170, 0.730, -0.874, -0.009, -0.569, 0.000, 4.971, -0.520}, {"Greenwood", true, false, -0.500, 0.120, 0.890, -0.909, 0.000, -0.459, 0.000, 5.711, -0.500},
    {"Jetmax", false, false, -1.171, 3.032, 1.380, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Hotring Racer", true, false, -0.450, -0.220, 0.750, -0.909, -0.199, -0.639, 0.000, 5.293, -0.610}, {"Sandking", true, false, -0.830, 1.341, 0.419, -1.024, 0.184, -0.809, 0.000, 5.822, -1.060},
    {"Blista Compact", true, false, -0.480, -0.160, 0.860, -0.854, 0.029, -0.469, 0.000, 5.366, -0.480}, {"Police Maverick", false, false, 0.000, 1.341, 1.569, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Boxville", true, false, -0.850, 1.931, 2.060, -1.149, 0.269, -0.654, 0.000, 6.932, -0.700},
    {"Benson", true, false, -0.710, 1.461, 0.440, -0.969, -1.404, -0.199, 0.000, 5.851, -0.660}, {"Mesa", true, false, -0.590, 0.960, 0.240, -0.969, 0.189, -0.574, 0.000, 4.499, -0.760}, {"RC Goblin", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Hotring Racer A", true, false, -0.420, -0.050, 0.790, -0.909, 0.029, -0.639, 0.000, 5.281, -0.680}, {"Hotring Racer B", true, false, -0.410, -0.220, 0.820, -0.909, -0.184, -0.639, 0.000, 4.981, -0.700}, {"Bloodring Banger", true, false, -0.540, 0.300, 0.910, -0.989, -0.059, -0.494, 0.000, 5.908, -0.510},
    {"Rancher Lure", true, false, -0.680, 0.070, 1.100, -1.019, 0.109, -0.679, 0.000, 5.930, -0.780}, {"Super GT", true, false, -0.430, -0.260, 0.610, -0.904, -0.249, -0.509, 0.000, 5.029, -0.440}, {"Elegant", true, false, -0.570, -0.040, 0.820, -1.084, -0.024, -0.589, 0.000, 5.863, -0.550},
    {"Journey", true, false, -0.870, 2.521, 0.169, -1.334, -0.424, -0.979, 0.000, 6.720, -1.040}, {"Bike", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Mountain Bike", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Beagle", false, false, -0.490, 2.532, 0.419, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Cropduster", false, false, 0.000, 0.190, 0.910, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Stuntplane", false, false, 0.000, -1.431, 0.400, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Tanker", true, false, -0.660, 1.891, 1.360, -0.969, 1.669, -1.174, 0.000, 8.182, -1.120}, {"Roadtrain", true, false, -0.930, 1.791, 1.300, -1.454, 0.439, -1.854, 0.000, 9.062, -1.670}, {"Nebula", true, false, -0.540, 0.220, 0.860, -0.989, 0.024, -0.584, 0.000, 5.650, -0.530},
    {"Majestic", true, false, -0.550, -0.010, 0.850, -0.959, 0.004, -0.554, 0.000, 5.491, -0.480}, {"Buccaneer", true, false, -0.530, 0.160, 0.730, -1.049, 0.109, -0.439, 0.000, 5.741, -0.360}, {"Shamal", false, false, 0.000, 5.013, 1.120, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Hydra", false, false, 0.000, 0.980, 0.889, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"FCR-900", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 3.140, -0.320}, {"NRG-500", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 3.090, -0.360},
    {"HPV1000", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 3.059, -0.340}, {"Cement Truck", true, false, -0.670, 1.691, 0.920, -0.689, 1.489, -1.319, 0.000, 7.654, -1.450}, {"Towtruck", true, false, 0.000, 0.000, 0.000, -1.054, 0.499, -0.329, 0.000, 6.311, -0.300},
    {"Fortune", true, false, -0.410, 0.000, 0.670, -0.899, 0.000, -0.564, 0.000, 4.960, -0.410}, {"Cadrona", true, false, -0.400, 0.060, 0.890, -0.944, 0.154, -0.419, 0.000, 5.230, -0.450}, {"FBI Truck", true, false, -0.610, 0.290, 1.079, -0.924, 0.059, -0.529, 0.000, 5.821, -0.750},
    {"Willard", true, false, -0.610, 0.020, 0.920, -0.934, -0.109, -0.429, 0.000, 5.293, -0.300}, {"Forklift", true, false, -0.401, -1.211, 0.720, 0.000, 0.000, 0.000, 0.000, 2.149, -0.500}, {"Tractor", true, false, -0.220, 1.261, 0.470, -0.144, 0.314, -0.444, 0.000, 3.271, -0.670},
    {"Combine Harvester", true, false, -1.350, 4.081, 2.100, 0.000, 0.000, 0.000, 0.000, 7.971, -1.700}, {"Feltzer", true, false, -0.551, 1.189, 0.360, -0.924, -0.034, -0.479, 0.000, 5.359, -0.440}, {"Remington", true, true, -0.490, 0.250, 0.649, -0.984, 0.164, -0.564, 0.000, 5.741, -0.500},
    {"Slamvan", true, true, -0.580, 0.450, 0.829, -1.069, -0.034, -0.569, 0.000, 5.931, -0.540}, {"Blade", true, true, -0.750, 1.081, 0.240, -0.954, -0.019, -0.579, 0.000, 5.529, -0.430}, {"Freight", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Brown Streak", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Vortex", true, false, -0.660, 1.141, 0.300, -1.004, -0.049, -0.019, 0.000, 0.000, 0.000}, {"Vincent", true, false, -0.580, 0.070, 0.719, -1.024, -0.090, -0.639, 0.000, 5.782, -0.620},
    {"Bullet", true, false, -0.440, 0.080, 0.660, -0.904, 0.000, -0.414, 0.000, 4.697, -0.350}, {"Clover", true, false, -0.490, 0.000, 0.840, -0.894, 0.014, -0.539, 0.000, 5.721, -0.450}, {"Sadler", true, false, -0.600, 0.370, 0.910, -0.904, 0.009, -0.409, 0.000, 5.312, -0.520},
    {"Firetruck (Ladder variant)", true, false, 0.000, 0.000, 0.000, -1.089, 0.000, -0.709, 0.000, 6.532, -0.840}, {"Hustler", true, false, -0.410, 0.030, 0.760, -0.939, -0.029, -0.564, 0.000, 4.171, -0.540}, {"Intruder", true, false, -0.520, -0.070, 0.859, -1.039, -0.100, -0.474, 0.000, 5.611, -0.430},
    {"Primo", true, false, -0.530, 0.070, 0.900, -0.884, 0.059, -0.479, 0.000, 5.511, -0.470}, {"Cargobob", false, false, -0.410, 4.611, 0.629, -1.769, 1.484, -1.774, 0.000, 0.000, 0.000}, {"Tampa", true, false, -0.540, 0.320, 0.750, -0.949, 0.104, -0.439, 0.000, 5.770, -0.470},
    {"Sunrise", true, false, -0.580, 0.110, 0.719, -1.089, -0.059, -0.554, 0.000, 5.391, -0.520}, {"Merit", true, false, -0.470, 0.090, 0.880, -0.964, 0.004, -0.564, 0.000, 5.552, -0.500}, {"Utility Van", true, false, -0.720, 0.800, 1.340, -1.034, 0.749, -0.254, 0.000, 6.442, -0.340},
    {"Nevada", false, false, 0.000, 9.291, 1.199, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Yosemite", true, false, -0.610, 0.210, 1.060, -1.109, 0.009, -0.534, 0.000, 6.061, -0.680}, {"Windsor", true, false, -0.450, 0.000, 0.630, -0.754, 0.000, -0.464, 0.000, 4.940, -0.350},
    {"Monster A", true, false, -0.702, 0.400, 1.670, -1.119, 0.000, 0.184, 0.000, 6.262, -0.970}, {"Monster B", true, false, -0.670, 0.190, 1.670, -1.129, 0.044, 0.074, 0.000, 5.680, -1.020}, {"Uranus", true, true, -0.390, -0.080, 0.880, -0.894, -0.089, -0.374, 0.000, 4.892, -0.380},
    {"Jester", true, true, -0.460, -0.040, 0.750, -0.964, 0.000, -0.444, 0.000, 4.811, -0.360}, {"Sultan", true, true, -0.570, 0.220, 0.840, -1.004, 0.054, -0.414, 0.000, 5.331, -0.470}, {"Stratum", true, true, -0.430, 0.150, 0.829, -0.919, 0.129, -0.574, 0.000, 5.340, -0.520},
    {"Elegy", true, true, -0.450, -0.100, 0.800, -0.909, 0.119, -0.404, 0.000, 5.349, -0.460}, {"Raindance", false, false, 0.000, 2.622, 1.119, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"RC Tiger", true, false, 0.000, 0.250, 0.490, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Flash", true, true, -0.460, 0.000, 0.710, -0.824, 0.000, -0.414, 0.000, 4.416, -0.390}, {"Tahoma", true, false, -0.610, 0.190, 0.850, -0.989, -0.049, -0.479, 0.000, 6.302, -0.450}, {"Savanna", true, true, -0.730, 1.601, 0.179, -1.089, 0.309, -0.609, 0.000, 6.571, -0.600},
    {"Bandito", true, false, 0.000, 0.000, 0.000, -0.3349, 0.100, -0.374, 0.000, 3.739, -0.600}, {"Freight Flat", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Streak Carriage", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Kart", true, false, -0.520, 0.230, -0.010, 0.000, 0.000, 0.000, 0.000, 2.550, -0.190}, {"Mower", true, false, -0.170, 0.290, 0.470, 0.000, 0.000, 0.000, 0.000, 2.770, -0.420}, {"Dune", true, false, -0.800, 2.402, 1.530, 0.000, 0.000, 0.000, 0.000, 5.890, -1.350},
    {"Sweeper", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 4.082, -0.460}, {"Broadway", true, true, -0.610, 1.200, 0.570, -0.924, 0.004, -0.334, 0.000, 5.741, -0.290}, {"Tornado", true, true, -0.630, 0.360, 0.909, -1.019, -0.140, -0.419, 0.000, 5.531, -0.370},
    {"AT-400", false, false, 0.000, 22.383, 6.380, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"DFT-30", true, false, -0.900, 3.902, 1.390, -1.429, -0.649, -0.879, 0.000, 7.412, -1.170}, {"Huntley", true, false, -0.650, 0.050, 1.239, -1.014, 0.000, -0.484, 0.000, 5.792, -0.660},
    {"Stafford", true, false, -0.690, 0.340, 1.050, -1.089, 0.014, -0.474, 0.000, 5.502, -0.480}, {"BF-400", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 2.940, -0.390}, {"Newsvan", true, false, -0.620, 0.920, 1.160, -0.984, -0.194, -0.709, 0.000, 5.451, -0.720},
    {"Tug", true, false, 0.000, 0.000, 0.000, -0.674, 0.259, 0.129, 0.000, 4.119, -0.330}, {"Trailer (Tanker Commando)", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Emperor", true, false, -0.570, 0.100, 1.020, -1.019, -0.009, -0.354, 0.000, 5.762, -0.390},
    {"Wayfarer", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 2.900, -0.310}, {"Euros", true, false, -0.780, 1.010, 0.300, -1.009, -0.064, -0.534, 0.000, 4.881, -0.420}, {"Hotdog", true, false, -0.780, 2.340, 2.130, -1.374, 0.000, -0.664, 0.000, 7.061, -0.370},
    {"Club", true, false, -0.560, 0.040, 1.079, -0.909, 0.000, -0.359, 0.000, 5.431, -0.440}, {"Freight Carriage", false, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Trailer 3", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Andromada", false, false, 0.000, 14.365, 3.210, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Dodo", false, false, -0.430, 1.636, 0.559, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"RC Cam", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Launch", false, false, -0.760, 1.961, 1.659, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Police Car LS", true, false, 0.000, 0.000, 0.000, -0.974, 0.000, -0.469, 0.000, 5.321, -0.470}, {"Police Car SF", true, false, 0.000, 0.000, 0.000, -0.969, 0.000, -0.464, 0.000, 5.283, -0.390},
    {"Police Car LV", true, false, 0.000, 0.000, 0.000, -1.004, -0.014, -0.414999, 0.000, 5.450, -0.440}, {"Ranger", true, false, 0.000, 0.000, 0.000, -1.019, 0.115, -0.684, 0.000, 5.849, -0.790}, {"Picador", true, false, -0.580, 0.130, 0.800, -0.959, 0.204, -0.499, 0.000, 5.502, -0.560},
    {"S.W.A.T. Van", true, false, -0.680, 1.451, 1.520, 0.000, 0.000, 0.000, 0.000, 6.210, -0.420}, {"Alpha", true, false, -0.500, -0.160, 0.710, -1.024, 0.000, -0.549, 0.000, 5.341, -0.540}, {"Phoenix", true, false, -0.490, -0.160, 0.680, -0.954, 0.034, -0.629, 0.000, 5.328, -0.600},
    {"Glendale Damaged", true, false, -0.560, 0.300, 0.880, -0.989, -0.064, -0.489, 0.000, 5.832, -0.410}, {"Sadler Damaged", true, false, -0.620, 0.340, 0.910, -0.904, 0.009, -0.409, 0.000, 5.561, -0.460}, {"Baggage Trailer A", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000},
    {"Baggage Trailer B", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Stair Trailer", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Boxville (Burglary)", true, false, -0.900, 1.941, 2.070, -1.149, 0.269, -0.654, 0.000, 6.551, -0.670},
    {"Farm Plow", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}, {"Utility Trailer", true, false, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000}
};
//
static const VFI_VehicleComponents[183][45] = {
    {400, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {401, SPOILER_1, SPOILER_3, HOOD_0, HOOD_1, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, EXHAUST_1, EXHAUST_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {402, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {403, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {404, SPOILER_0, SPOILER_2, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SPOILER_6, SIDESKIRT_1, EXHAUST_1, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {405, SPOILER_0, SPOILER_1, NITRO_1, NITRO_0, NITRO_2, SPOILER_4, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {406, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {407, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {408, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {409, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {410, SPOILER_1, SPOILER_3, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, EXHAUST_1, EXHAUST_2, EXHAUST_3, SPOILER_7, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {411, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {412, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {413, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {414, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {415, SPOILER_1, SPOILER_3, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {416, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {417, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {418, SPOILER_2, ROOF_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_6, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {419, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {420, SPOILER_1, SPOILER_3, HOOD_0, HOOD_1, NITRO_1, NITRO_0, NITRO_2, EXHAUST_1, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {421, SPOILER_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_4, SPOILER_6, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {422, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, EXHAUST_1, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {423, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {424, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {425, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {426, SPOILER_1, SPOILER_3, HOOD_0, HOOD_1, ROOF_0, NITRO_1, NITRO_0, NITRO_2, EXHAUST_1, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {427, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {428, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {429, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{430, },
    {431, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {432, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {433, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {434, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {435, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {436, SPOILER_1, SPOILER_3, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, EXHAUST_1, EXHAUST_2, EXHAUST_3, EXHAUST_4, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {437, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {438, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {439, SPOILER_1, SPOILER_3, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {440, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {441, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {442, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {443, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {444, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {445, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{446, },
    {447, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{448, },
    //{449, },
    {450, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {451, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{452, },
    //{453, },
    //{454, },
    {455, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {456, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {457, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {458, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {459, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {460, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{461, },
    //{462, },
    //{463, },
    {464, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {465, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {466, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {467, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{468, },
    {469, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {470, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {471, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{472, },
    //{473, },
    {474, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {475, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {476, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {477, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {478, HOOD_0, HOOD_1, NITRO_1, NITRO_0, NITRO_2, HOOD_3, LAMPS_0, EXHAUST_2, EXHAUST_3, EXHAUST_4, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {479, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {480, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{481, },
    {482, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {483, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{484, },
    {485, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {486, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {487, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {488, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {489, SPOILER_0, SPOILER_2, HOOD_0, HOOD_1, ROOF_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SPOILER_6, EXHAUST_0, EXHAUST_1, EXHAUST_2, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {490, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {491, SPOILER_3, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_4, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {492, SPOILER_0, HOOD_0, HOOD_1, ROOF_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_6, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{493, },
    {494, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {495, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {496, SPOILER_1, SPOILER_2, SPOILER_3, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, HOOD_2, SIDESKIRT_1, EXHAUST_1, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1},
    {497, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {498, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {499, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {500, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {501, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {502, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {503, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {504, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {505, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {506, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {507, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {508, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{509, },
    //{510, },
    {511, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {512, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {513, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {514, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {515, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {516, SPOILER_0, SPOILER_2, HOOD_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_5, SPOILER_6, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {517, SPOILER_2, SPOILER_3, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_6, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {518, SPOILER_1, SPOILER_3, HOOD_1, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, EXHAUST_0, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {519, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {520, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{521, },
    //{522, },
    //{523, },
    {524, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {525, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {526, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {527, SPOILER_1, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_4, SPOILER_5, SIDESKIRT_1, EXHAUST_0, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {528, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {529, SPOILER_1, SPOILER_3, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, HOOD_2, HOOD_3, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {530, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {531, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {532, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {533, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {534, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, BULLBAR_0, SIDESKIRT_28, SIDESKIRT_30, SIDESKIRT_37, BULLBAR_1, SIDESKIRT_38, BULLBAR_2, EXHAUST_23, EXHAUST_24, REAR_BUUMPER_14, FRONT_BUMPER_15, REAR_BUUMPER_15, FRONT_BUMPER_18},
    {535, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, REAR_BULLBARS_0, REAR_BULLBARS_1, EXHAUST_21, EXHAUST_22, FRONT_BULLBARS_0, FRONT_BULLBARS_1, FRONT_BUMPER_0, SIDESKIRT_33, SIDESKIRT_34, SIDESKIRT_35, SIDESKIRT_36},
    {536, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, ROOF_13, EXHAUST_19, EXHAUST_20, SIDESKIRT_31, SIDESKIRT_32, ROOF_14, FRONT_BUMPER_16, FRONT_BUMPER_17, REAR_BUUMPER_16, REAR_BUUMPER_17},
    //{537, },
    //{538, },
    {539, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {540, SPOILER_1, HOOD_0, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, SPOILER_7, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {541, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {542, NITRO_1, NITRO_0, NITRO_2, SPOILER_4, SPOILER_5, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_2, VENTS_3},
    {543, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {544, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {545, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {546, SPOILER_1, SPOILER_2, HOOD_0, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, SPOILER_7, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {547, SPOILER_0, SPOILER_3, NITRO_1, NITRO_0, NITRO_2, SPOILER_6, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1},
    {548, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {549, SPOILER_1, SPOILER_3, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, HOOD_2, HOOD_3, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {550, SPOILER_1, SPOILER_3, HOOD_0, HOOD_1, ROOF_0, NITRO_1, NITRO_0, NITRO_2, EXHAUST_0, EXHAUST_1, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {551, SPOILER_2, SPOILER_3, HOOD_1, ROOF_0, NITRO_1, NITRO_0, NITRO_2, SPOILER_6, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {552, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {553, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {554, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {555, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {556, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {557, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {558, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, ROOF_11, EXHAUST_17, SIDESKIRT_23, ROOF_12, EXHAUST_18, SIDESKIRT_24, SIDESKIRT_25, SIDESKIRT_26, WHEELS_14, WHEELS_15, WHEELS_16, SPOILER_18, SPOILER_19, FRONT_BUMPER_6, FRONT_BUMPER_7, REAR_BUUMPER_10, REAR_BUUMPER_11},
    {559, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, EXHAUST_15, EXHAUST_16, ROOF_9, ROOF_10, SIDESKIRT_19, SIDESKIRT_20, SIDESKIRT_21, SIDESKIRT_22, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, SPOILER_16, REAR_BUUMPER_8, FRONT_BUMPER_5, REAR_BUUMPER_9, SPOILER_17, FRONT_BUMPER_12},
    {560, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, SIDESKIRT_2, SIDESKIRT_3, EXHAUST_5, EXHAUST_6, SIDESKIRT_4, SIDESKIRT_5, ROOF_1, ROOF_2, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, SPOILER_12, SPOILER_13, REAR_BUUMPER_0, REAR_BUUMPER_1, FRONT_BUMPER_8, FRONT_BUMPER_9},
    {561, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, ROOF_7, SIDESKIRT_15, SIDESKIRT_16, SPOILER_10, EXHAUST_13, SPOILER_11, ROOF_8, SIDESKIRT_17, SIDESKIRT_18, EXHAUST_14, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, REAR_BUUMPER_6, FRONT_BUMPER_3, REAR_BUUMPER_7, FRONT_BUMPER_4},
    {562, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, EXHAUST_7, ROOF_3, SIDESKIRT_6, EXHAUST_8, ROOF_4, SIDESKIRT_7, SIDESKIRT_8, SIDESKIRT_9, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, SPOILER_14, SPOILER_15, REAR_BUUMPER_2, REAR_BUUMPER_3, FRONT_BUMPER_10, FRONT_BUMPER_11},
    {563, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {564, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {565, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, EXHAUST_11, EXHAUST_12, SIDESKIRT_11, SIDESKIRT_12, SPOILER_8, SPOILER_9, SIDESKIRT_13, SIDESKIRT_14, ROOF_5, ROOF_6, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, REAR_BUUMPER_4, REAR_BUUMPER_5, FRONT_BUMPER_1, FRONT_BUMPER_2},
    {566, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {567, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, SIDESKIRT_29, EXHAUST_25, ROOF_15, ROOF_16, EXHAUST_26, SIDESKIRT_39, REAR_BUUMPER_18, REAR_BUUMPER_19, FRONT_BUMPER_19, FRONT_BUMPER_20},
    {568, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{569, },
    //{570, },
    {571, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {572, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {573, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {574, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {575, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, SIDESKIRT_10, EXHAUST_9, EXHAUST_10, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, SIDESKIRT_27, FRONT_BUMPER_13, FRONT_BUMPER_14, REAR_BUUMPER_12, REAR_BUUMPER_13},
    {576, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, SIDESKIRT_40, EXHAUST_27, EXHAUST_28, SIDESKIRT_41, FRONT_BUMPER_21, FRONT_BUMPER_22, REAR_BUUMPER_20, REAR_BUUMPER_21},
    {577, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {578, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {579, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {580, SPOILER_1, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SIDESKIRT_1, EXHAUST_0, EXHAUST_2, SPOILER_7, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{581, },
    {582, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {583, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {584, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {585, SPOILER_0, SPOILER_1, SPOILER_2, SPOILER_3, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SPOILER_4, SPOILER_5, SPOILER_6, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, EXHAUST_3, EXHAUST_4, SPOILER_7, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    //{586, },
    {587, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {588, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {589, SPOILER_0, HOOD_0, HOOD_1, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SPOILER_6, SIDESKIRT_1, EXHAUST_0, EXHAUST_2, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_2, VENTS_3},
    //{590, },
    {591, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {592, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {593, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {594, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    //{595, },
    {596, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {597, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {598, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {599, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {600, HOOD_0, HOOD_1, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, LAMPS_0, SIDESKIRT_1, EXHAUST_0, EXHAUST_2, EXHAUST_4, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {601, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {602, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {603, SPOILER_1, ROOF_0, SIDESKIRT_0, NITRO_1, NITRO_0, NITRO_2, SIDESKIRT_1, EXHAUST_0, EXHAUST_1, EXHAUST_2, SPOILER_7, LAMPS_1, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16, VENTS_0, VENTS_1, VENTS_2, VENTS_3},
    {604, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {605, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {606, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {607, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {608, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {609, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {610, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16},
    {611, NITRO_1, NITRO_0, NITRO_2, WHEELS_0, WHEELS_1, WHEELS_2, WHEELS_3, WHEELS_4, WHEELS_5, WHEELS_6, WHEELS_7, WHEELS_8, WHEELS_9, WHEELS_10, WHEELS_11, WHEELS_12, WHEELS_13, STEREO_0, HYDRAULICS_0, WHEELS_14, WHEELS_15, WHEELS_16}
};

/*
 $$$$$$\              $$\                                         $$\        $$$$$$\    $$\     $$\                                     
$$  __$$\             $$ |                                        $$ |      $$  __$$\   $$ |    $$ |                                    
$$ /  $$ |$$\   $$\ $$$$$$\    $$$$$$\   $$$$$$\   $$$$$$$\       $$ |      $$ /  $$ |$$$$$$\   $$$$$$$\   $$$$$$\   $$$$$$\   $$$$$$$\ 
$$ |  $$ |$$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  _____|      \__|      $$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  __$$\ $$  _____|
$$ |  $$ |$$ |  $$ |  $$ |    $$ |  \__|$$ /  $$ |\$$$$$$\        $$\       $$ |  $$ |  $$ |    $$ |  $$ |$$$$$$$$ |$$ |  \__|\$$$$$$\  
$$ |  $$ |$$ |  $$ |  $$ |$$\ $$ |      $$ |  $$ | \____$$\       $$ |      $$ |  $$ |  $$ |$$\ $$ |  $$ |$$   ____|$$ |       \____$$\ 
 $$$$$$  |\$$$$$$  |  \$$$$  |$$ |      \$$$$$$  |$$$$$$$  |      $$ |       $$$$$$  |  \$$$$  |$$ |  $$ |\$$$$$$$\ $$ |      $$$$$$$  |
 \______/  \______/    \____/ \__|       \______/ \_______/       \__|       \______/    \____/ \__|  \__| \_______|\__|      \_______/ 
*/

stock VFI_verification_strcmp(const string_1[], const string_2[], valor)
{
    for(new v = 0; v < valor; v ++)
    {
        if(string_1[v] != string_2[v])
            return false;
        //
        if(string_1[v] == 0 || string_1[v] == '\n')
            return true;
    }
    return true;
}

stock VFI_destroy_from_vehicle(related, bool:global, vehicleid)
{
    if(related == 1)
    {
        if(!global)
        {
            if(VFI_sirenactivated[vehicleid])
            {
                #if defined _streamer_included
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]);
                #else
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]);
                #endif
                //
                VFI_sirenactivated[vehicleid] = false;
            }
        }
        if(global)
        {
            if(VFI_sirenactivated_global[vehicleid])
            {
                #if defined _streamer_included
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]);
                #else
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0]);
                #endif
                //
                VFI_sirenactivated_global[vehicleid] = false;
            }
        }
        //
        return true;
    }
    else if(related == 2)
    {
        if(!global)
        {
            if(VFI_neonactivated[vehicleid])
            {
                #if defined _streamer_included
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]);
                    //
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]);
                #else
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]);
                    //
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]);
                #endif
                //
                VFI_neonactivated[vehicleid] = false;
            }
        }
        if(global)
        {
            if(VFI_neonactivated_global[vehicleid])
            {
                #if defined _streamer_included
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]);
                    //
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]);
                #else
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0]);
                    //
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1]);
                #endif
                //
                VFI_neonactivated_global[vehicleid] = false;
            }
        }
        //
        return true;
    }
    else if(related == 3)
    {
        if(!global)
        {
            if(VFI_xenonactivated[vehicleid])
            {
                #if defined _streamer_included
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]);
                    //
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]);
                    //
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]);
                #else
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]);
                    //
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]);
                    //
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]);
                #endif
                //
                VFI_xenonactivated[vehicleid] = false;
            }
        }
        if(global)
        {
            if(VFI_xenonactivated_global[vehicleid])
            {
                #if defined _streamer_included
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]);
                    //
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]);
                    //
                    if(IsValidDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]))
                        DestroyDynamicObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]);
                #else
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0]);
                    //
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1]);
                    //
                    if(IsValidObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]))
                        DestroyObject(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2]);
                #endif
                //
                VFI_xenonactivated_global[vehicleid] = false;
            }
        }
        //
        return true;
    }
    return false;
}

stock VFI_vehicle_supports_nitro(VFI_modelid)
{
    if(400 <= VFI_modelid <= 611)
        return VFI_VehicleFunctions[VFI_modelid - 400][VFI_Nitro];
    //
    return false;
}

stock VFI_vehicle_supports_paintjob(VFI_modelid)
{
    if(400 <= VFI_modelid <= 611)
        return VFI_VehicleFunctions[VFI_modelid - 400][VFI_Paintjob];
    //
    return false;
}

stock VFI_vehicle_supports_component(VFI_modelid, VFI_componentid)
{
    if(!(400 <= VFI_modelid <= 611))
        return false;
    //
    if(CARMODTYPE:GetVehicleComponentType(VFI_componentid) == CARMODTYPE_WHEELS || VFI_componentid == STEREO_0 || VFI_componentid == HYDRAULICS_0 || (NITRO_1 <= VFI_componentid <= NITRO_2))
    {
        if(!VFI_vehicle_supports_nitro(VFI_modelid))
            return false;
        //
        return true;
    }
    else
    {
        for(new i = 0; i < sizeof(VFI_VehicleComponents); i ++)
        {
            if(VFI_VehicleComponents[i][0] != VFI_modelid)
                continue;
            //
            for(new i_2 = 1; i_2 < sizeof(VFI_VehicleComponents[]); i_2 ++)
            {
                if(VFI_VehicleComponents[i][i_2] == VFI_componentid)
                    return true;
            }
        }
    }
    return false;
}

stock VFI_vehicle_supports_siren(VFI_modelid)
{
    new id_mod = VFI_modelid - 400;
    //
    if(0 <= id_mod <= 211)
    {
        if(VFI_VehicleFunctions[id_mod][VFI_Sirene_X] == 0.0 && VFI_VehicleFunctions[id_mod][VFI_Sirene_Y] == 0.0 && VFI_VehicleFunctions[id_mod][VFI_Sirene_Z] == 0.0)
            return false;
        //
        return true;
    }
    return false;
}

stock VFI_vehicle_supports_neon(VFI_modelid)
{
    new id_mod = VFI_modelid - 400;
    //
    if(0 <= id_mod <= 211)
    {
        if(VFI_VehicleFunctions[id_mod][VFI_Neon_X] == 0.0 && VFI_VehicleFunctions[id_mod][VFI_Neon_Y] == 0.0 && VFI_VehicleFunctions[id_mod][VFI_Neon_Z] == 0.0)
            return false;
        //
        return true;
    }
    return false;
}

stock VFI_vehicle_supports_xenon(VFI_modelid)
{
    new id_mod = VFI_modelid - 400;
    //
    if(0 <= id_mod <= 211)
    {
        if(VFI_VehicleFunctions[id_mod][VFI_Xenon_X] == 0.0 && VFI_VehicleFunctions[id_mod][VFI_Xenon_Y] == 0.0 && VFI_VehicleFunctions[id_mod][VFI_Xenon_Z] == 0.0)
            return false;
        //
        return true;
    }
    return false;
}

stock VFI_vehicle_destroy(vehicleid)
{
    if(IsValidVehicle(vehicleid))
    {
        if(1 <= vehicleid <= MAX_VEHICLES)
        {
            if(VFI_sirenactivated[vehicleid])
                VFI_destroy_from_vehicle(1, false, vehicleid);
            //
            if(VFI_sirenactivated_global[vehicleid])
                VFI_destroy_from_vehicle(1, true, vehicleid);
            //
            if(VFI_neonactivated[vehicleid])
                VFI_destroy_from_vehicle(2, false, vehicleid);
            //
            if(VFI_neonactivated_global[vehicleid])
                VFI_destroy_from_vehicle(2, true, vehicleid);
            //
            if(VFI_xenonactivated[vehicleid])
                VFI_destroy_from_vehicle(3, false, vehicleid);
            //
            if(VFI_xenonactivated_global[vehicleid])
                VFI_destroy_from_vehicle(3, true, vehicleid);
            //
            return DestroyVehicle(vehicleid);
        }
        return true;
    }
    return false;
}

public OnGameModeInit()
{
    print(" ");
    print("__________________________________________________________________");
    print("||==============================================================||");
    print("||                                                              ||");
    print("||             Veiculo Funcoes | Vehicle Functions              ||");
    print("||                                                              ||");
    print("||             8b           d8         88888888888              ||");
    print("||             `8b         d8'         88                       ||");
    print("||              `8b       d8'          88                       ||");
    print("||               `8b     d8'           88aaaaa                  ||");
    print("||                `8b   d8'  aaaaaaaa  88=====                  ||");
    print("||                 `8b d8'   ========  88                       ||");
    print("||                  `888'              88                       ||");
    print("||                   `8'               88                       ||");
    print("||                                                              ||");
    print("||                                                              ||");
    print("||                                                              ||");
    print("||                      V-F versao 1.0.3                        ||");
    print("||                       By: Calasans                           ||");
    print("||                  Discord: abre.ai/samp-spc                   ||");
    print("||                                                              ||");
    print("||==============================================================||");
    print("__________________________________________________________________");
    print(" ");
    //
    #if defined VFI_print_gamemodeinit
        return VFI_print_gamemodeinit();
    #else
        return true;
    #endif
}

/*
$$$$$$$$\                                                                $$\       $$$$$$$$\                              $$\     $$\                               
$$  _____|                                                               $$ |      $$  _____|                             $$ |    \__|                              
$$ |   $$\   $$\ $$$$$$$\   $$$$$$$\  $$$$$$\   $$$$$$\   $$$$$$$\       $$ |      $$ |   $$\   $$\ $$$$$$$\   $$$$$$$\ $$$$$$\   $$\  $$$$$$\  $$$$$$$\   $$$$$$$\ 
$$$$$\ $$ |  $$ |$$  __$$\ $$  _____|$$  __$$\ $$  __$$\ $$  _____|      \__|      $$$$$\ $$ |  $$ |$$  __$$\ $$  _____|\_$$  _|  $$ |$$  __$$\ $$  __$$\ $$  _____|
$$  __|$$ |  $$ |$$ |  $$ |$$ /      $$ /  $$ |$$$$$$$$ |\$$$$$$\        $$\       $$  __|$$ |  $$ |$$ |  $$ |$$ /        $$ |    $$ |$$ /  $$ |$$ |  $$ |\$$$$$$\  
$$ |   $$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$   ____| \____$$\       $$ |      $$ |   $$ |  $$ |$$ |  $$ |$$ |        $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \____$$\ 
$$ |   \$$$$$$  |$$ |  $$ |\$$$$$$$\ \$$$$$$  |\$$$$$$$\ $$$$$$$  |      $$ |      $$ |   \$$$$$$  |$$ |  $$ |\$$$$$$$\   \$$$$  |$$ |\$$$$$$  |$$ |  $$ |$$$$$$$  |
\__|    \______/ \__|  \__| \_______| \______/  \_______|\_______/       \__|      \__|    \______/ \__|  \__| \_______|   \____/ \__| \______/ \__|  \__|\_______/ 
*/

stock Veiculo_Fechadura(bool:VFI_blocked, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
                VFI_LoopP:
                    SetVehicleParamsForPlayer(vehicleid, i, false, VFI_blocked);
            #else
                VFI_LoopP_II:
                    SetVehicleParamsForPlayer(vehicleid, i, false, VFI_blocked);
            #endif
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        VFI_LoopP:
                            SetVehicleParamsForPlayer(v, i, false, VFI_blocked);
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        VFI_LoopP_II:
                            SetVehicleParamsForPlayer(v, i, false, VFI_blocked);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Motor(bool:VFI_engine, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new not_usable, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsEx(vehicleid, not_usable, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
            //
            SetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, not_usable, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, not_usable, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Farol(bool:VFI_lights, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new VFI_engine, not_usable, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsEx(vehicleid, VFI_engine, not_usable, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
            //
            SetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, not_usable, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, not_usable, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Capo(bool:VFI_bonnet, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new VFI_engine, VFI_lights, VFI_alarm, VFI_doors, not_usable, VFI_boot, VFI_objective;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, not_usable, VFI_boot, VFI_objective);
            //
            SetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, not_usable, VFI_boot, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, not_usable, VFI_boot, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Malas(bool:VFI_boot, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, not_usable, VFI_objective;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, not_usable, VFI_objective);
            //
            SetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, not_usable, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, not_usable, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Alarme(bool:VFI_alarm, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new VFI_engine, VFI_lights, not_usable, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, not_usable, VFI_doors, VFI_bonnet, not_usable, VFI_objective);
            //
            SetVehicleParamsEx(vehicleid, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, VFI_lights, not_usable, VFI_doors, VFI_bonnet, not_usable, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsEx(v, VFI_engine, VFI_lights, not_usable, VFI_doors, VFI_bonnet, not_usable, VFI_objective);
                        //
                        SetVehicleParamsEx(v, VFI_engine, VFI_lights, VFI_alarm, VFI_doors, VFI_bonnet, VFI_boot, VFI_objective);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Portas(bool:VFI_close, VFI_doors, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new VFI_driver, VFI_passenger, VFI_backleft, VFI_backright;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsCarDoors(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, VFI_backright);
            //
            if(VFI_close)
            {
                if(VFI_doors == 1)
                    SetVehicleParamsCarDoors(vehicleid, true, VFI_passenger, VFI_backleft, VFI_backright);
                //
                else if(VFI_doors == 2)
                    SetVehicleParamsCarDoors(vehicleid, VFI_driver, true, VFI_backleft, VFI_backright);
                //
                else if(VFI_doors == 3)
                    SetVehicleParamsCarDoors(vehicleid, VFI_driver, VFI_passenger, true, VFI_backright);
                //
                else if(VFI_doors == 4)
                    SetVehicleParamsCarDoors(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, true);
                ///
                else if(VFI_doors == 5)
                    SetVehicleParamsCarDoors(vehicleid, true, true, true, true);
            }
            else if(!VFI_close)
            {
                if(VFI_doors == 1)
                    SetVehicleParamsCarDoors(vehicleid, false, VFI_passenger, VFI_backleft, VFI_backright);
                //
                else if(VFI_doors == 2)
                    SetVehicleParamsCarDoors(vehicleid, VFI_driver, false, VFI_backleft, VFI_backright);
                //
                else if(VFI_doors == 3)
                    SetVehicleParamsCarDoors(vehicleid, VFI_driver, VFI_passenger, false, VFI_backright);
                //
                else if(VFI_doors == 4)
                    SetVehicleParamsCarDoors(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, false);
                //
                else if(VFI_doors == 5)
                    SetVehicleParamsCarDoors(vehicleid, false, false, false, false);
            }
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, VFI_backleft, VFI_backright);
                        //
                        if(VFI_close)
                        {
                            if(VFI_doors == 1)
                                SetVehicleParamsCarDoors(v, true, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 2)
                                SetVehicleParamsCarDoors(v, VFI_driver, true, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 3)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, true, VFI_backright);
                            //
                            else if(VFI_doors == 4)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, VFI_backleft, true);
                            //
                            else if(VFI_doors == 5)
                                SetVehicleParamsCarDoors(v, true, true, true, true);
                        }
                        else if(!VFI_close)
                        {
                            if(VFI_doors == 1)
                                SetVehicleParamsCarDoors(v, false, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 2)
                                SetVehicleParamsCarDoors(v, VFI_driver, false, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 3)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, false, VFI_backright);
                            //
                            else if(VFI_doors == 4)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, VFI_backleft, false);
                            //
                            else if(VFI_doors == 5)
                                SetVehicleParamsCarDoors(v, false, false, false, false);
                        }
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, VFI_backleft, VFI_backright);
                        //
                        if(VFI_close)
                        {
                            if(VFI_doors == 1)
                                SetVehicleParamsCarDoors(v, true, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 2)
                                SetVehicleParamsCarDoors(v, VFI_driver, true, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 3)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, true, VFI_backright);
                            //
                            else if(VFI_doors == 4)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, VFI_backleft, true);
                            //
                            else if(VFI_doors == 5)
                                SetVehicleParamsCarDoors(v, true, true, true, true);
                        }
                        else if(!VFI_close)
                        {
                            if(VFI_doors == 1)
                                SetVehicleParamsCarDoors(v, false, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 2)
                                SetVehicleParamsCarDoors(v, VFI_driver, false, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_doors == 3)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, false, VFI_backright);
                            //
                            else if(VFI_doors == 4)
                                SetVehicleParamsCarDoors(v, VFI_driver, VFI_passenger, VFI_backleft, false);
                            //
                            else if(VFI_doors == 5)
                                SetVehicleParamsCarDoors(v, false, false, false, false);
                        }
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Janelas(bool:VFI_close, VFI_windows, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    new VFI_driver, VFI_passenger, VFI_backleft, VFI_backright;
    //
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            GetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, VFI_backright);
            //
            if(VFI_close)
            {
                if(VFI_windows == 1)
                    SetVehicleParamsCarWindows(vehicleid, false, VFI_passenger, VFI_backleft, VFI_backright);
                //
                else if(VFI_windows == 2)
                    SetVehicleParamsCarWindows(vehicleid, VFI_driver, false, VFI_backleft, VFI_backright);
                //
                else if(VFI_windows == 3)
                    SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, false, VFI_backright);
                //
                else if(VFI_windows == 4)
                    SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, false);
                //
                else if(VFI_windows == 5)
                    SetVehicleParamsCarWindows(vehicleid, false, false, false, false);
            }
            else if(!VFI_close)
            {
                if(VFI_windows == 1)
                    SetVehicleParamsCarWindows(vehicleid, true, VFI_passenger, VFI_backleft, VFI_backright);
                //
                else if(VFI_windows == 2)
                    SetVehicleParamsCarWindows(vehicleid, VFI_driver, true, VFI_backleft, VFI_backright);
                //
                else if(VFI_windows == 3)
                    SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, true, VFI_backright);
                //
                else if(VFI_windows == 4)
                    SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, true);
                //
                else if(VFI_windows == 5)
                    SetVehicleParamsCarWindows(vehicleid, true, true, true, true);
            }
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsCarWindows(v, VFI_driver, VFI_passenger, VFI_backleft, VFI_backright);
                        //
                        if(VFI_close)
                        {
                            if(VFI_windows == 1)
                                SetVehicleParamsCarWindows(vehicleid, false, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 2)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, false, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 3)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, false, VFI_backright);
                            //
                            else if(VFI_windows == 4)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, false);
                            //
                            else if(VFI_windows == 5)
                                SetVehicleParamsCarWindows(vehicleid, false, false, false, false);
                        }
                        else if(!VFI_close)
                        {
                            if(VFI_windows == 1)
                                SetVehicleParamsCarWindows(vehicleid, true, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 2)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, true, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 3)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, true, VFI_backright);
                            //
                            else if(VFI_windows == 4)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, true);
                            //
                            else if(VFI_windows == 5)
                                SetVehicleParamsCarWindows(vehicleid, true, true, true, true);
                        }
                    }
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                    {
                        GetVehicleParamsCarWindows(v, VFI_driver, VFI_passenger, VFI_backleft, VFI_backright);
                        //
                        if(VFI_close)
                        {
                            if(VFI_windows == 1)
                                SetVehicleParamsCarWindows(vehicleid, false, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 2)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, false, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 3)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, false, VFI_backright);
                            //
                            else if(VFI_windows == 4)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, false);
                            //
                            else if(VFI_windows == 5)
                                SetVehicleParamsCarWindows(vehicleid, false, false, false, false);
                        }
                        else if(!VFI_close)
                        {
                            if(VFI_windows == 1)
                                SetVehicleParamsCarWindows(vehicleid, true, VFI_passenger, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 2)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, true, VFI_backleft, VFI_backright);
                            //
                            else if(VFI_windows == 3)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, true, VFI_backright);
                            //
                            else if(VFI_windows == 4)
                                SetVehicleParamsCarWindows(vehicleid, VFI_driver, VFI_passenger, VFI_backleft, true);
                            //
                            else if(VFI_windows == 5)
                                SetVehicleParamsCarWindows(vehicleid, true, true, true, true);
                        }
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Vida(Float:VFI_health, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
            SetVehicleHealth(vehicleid, VFI_health);
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                    SetVehicleHealth(v, VFI_health);
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                    SetVehicleHealth(v, VFI_health);
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Reparar(bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
            RepairVehicle(vehicleid);
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                    RepairVehicle(v);
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                    RepairVehicle(v);
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Reaparecer(bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(IsPlayerInAnyVehicle(playerid))
                RemovePlayerFromVehicle(playerid);
            //
            SetVehicleToRespawn(vehicleid);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                        SetVehicleToRespawn(v);
                }
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    VFI_usingvehicle[GetPlayerVehicleID(i)] = true;
            }
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(!VFI_usingvehicle[v])
                        SetVehicleToRespawn(v);
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Mundo(VFI_world, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(IsPlayerInAnyVehicle(playerid))
                SetPlayerVirtualWorld(playerid, VFI_world);
            //
            SetVehicleVirtualWorld(vehicleid, VFI_world);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    SetPlayerInterior(i, VFI_world);
            }
            //
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                    SetVehicleVirtualWorld(v, VFI_world);
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    SetPlayerInterior(i, VFI_world);
            }
            //
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                    SetVehicleVirtualWorld(v, VFI_world);
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Sirene(bool:VFI_sirene, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(VFI_sirene)
            {
                new support = GetVehicleModel(vehicleid); 
                //
                if(VFI_vehicle_supports_siren(support))
                {
                    new id_mod = GetVehicleModel(vehicleid) - 400;
                    //
                    if(0 <= id_mod <= 211)
                    { 
                        VFI_destroy_from_vehicle(1, false, vehicleid);
                        //
                        #if defined _streamer_included
                            VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0] = CreateDynamicObject(18646, 6977.057128, -6280.096679, 1.013507, 0.0, 0.0, 0.0);
                            //
                            AttachDynamicObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Sirene_X], VFI_VehicleFunctions[id_mod][VFI_Sirene_Y], VFI_VehicleFunctions[id_mod][VFI_Sirene_Z], 0.0, 0.0, 0.0);
                            //
                            GetVehiclePos(vehicleid, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                            //
                            #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
                                VFI_LoopP:
                                {
                                    if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                        Streamer_Update(i);
                                }
                            #else
                                VFI_LoopP_II:
                                {
                                    if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                        Streamer_Update(i);
                                }
                            #endif
                            //
                        #else
                            VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0] = CreateObject(18646, 6977.057128, -6280.096679, 1.013507, 0.0, 0.0, 0.0);
                            //
                            AttachObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Sirene][0], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Sirene_X], VFI_VehicleFunctions[id_mod][VFI_Sirene_Y], VFI_VehicleFunctions[id_mod][VFI_Sirene_Z], 0.0, 0.0, 0.0);
                        #endif
                        //
                        VFI_sirenactivated[vehicleid] = true;
                    }
                }
            }
            else if(!VFI_sirene)
                VFI_destroy_from_vehicle(1, false, vehicleid);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_sirene)
                    {
                        new support = GetVehicleModel(v); 
                        //
                        if(VFI_vehicle_supports_siren(support))
                        {
                            new id_mod = GetVehicleModel(v) - 400;
                            //
                            if(0 <= id_mod <= 211)
                            { 
                                VFI_destroy_from_vehicle(1, true, v);
                                //
                                #if defined _streamer_included
                                    VFI_VehicleUtilities[v - 1][VFI_Sirene][0] = CreateDynamicObject(18646, 4433.192382, 6363.766113, 1.553262, 0.0, 0.0, 0.0);
                                    //
                                    AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Sirene][0], v, VFI_VehicleFunctions[id_mod][VFI_Sirene_X], VFI_VehicleFunctions[id_mod][VFI_Sirene_Y], VFI_VehicleFunctions[id_mod][VFI_Sirene_Z], 0.0, 0.0, 0.0);
                                    //
                                    GetVehiclePos(v, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                    //
                                    VFI_LoopP:
                                    {
                                        if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                            Streamer_Update(i);
                                    }
                                #else
                                    VFI_VehicleUtilities[v - 1][VFI_Sirene][0] = CreateObject(18646, 4433.192382, 6363.766113, 1.553262, 0.0, 0.0, 0.0);
                                    //
                                    AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Sirene][0], v, VFI_VehicleFunctions[id_mod][VFI_Sirene_X], VFI_VehicleFunctions[id_mod][VFI_Sirene_Y], VFI_VehicleFunctions[id_mod][VFI_Sirene_Z], 0.0, 0.0, 0.0);
                                #endif
                                //
                                VFI_sirenactivated_global[v] = true;
                            }
                        }
                    }
                    else if(!VFI_sirene)
                        VFI_destroy_from_vehicle(1, true, v);
                }
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_sirene)
                    {
                        new support = GetVehicleModel(v); 
                        //
                        if(VFI_vehicle_supports_siren(support))
                        {
                            new id_mod = GetVehicleModel(v) - 400;
                            //
                            if(0 <= id_mod <= 211)
                            { 
                                VFI_destroy_from_vehicle(1, true, v);
                                //
                                #if defined _streamer_included
                                    VFI_VehicleUtilities[v - 1][VFI_Sirene][0] = CreateDynamicObject(18646, 4433.192382, 6363.766113, 1.553262, 0.0, 0.0, 0.0);
                                    //
                                    AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Sirene][0], v, VFI_VehicleFunctions[id_mod][VFI_Sirene_X], VFI_VehicleFunctions[id_mod][VFI_Sirene_Y], VFI_VehicleFunctions[id_mod][VFI_Sirene_Z], 0.0, 0.0, 0.0);
                                    //
                                    GetVehiclePos(v, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                    //
                                    VFI_LoopP_II:
                                    {
                                        if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                            Streamer_Update(i);
                                    }
                                #else
                                    VFI_VehicleUtilities[v - 1][VFI_Sirene][0] = CreateObject(18646, 4433.192382, 6363.766113, 1.553262, 0.0, 0.0, 0.0);
                                    //
                                    AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Sirene][0], v, VFI_VehicleFunctions[id_mod][VFI_Sirene_X], VFI_VehicleFunctions[id_mod][VFI_Sirene_Y], VFI_VehicleFunctions[id_mod][VFI_Sirene_Z], 0.0, 0.0, 0.0);
                                #endif
                                //
                                VFI_sirenactivated_global[v] = true;
                            }
                        }
                    }
                    else if(!VFI_sirene)
                        VFI_destroy_from_vehicle(1, true, v);
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Neon(bool:VFI_neon, VFI_neon2, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(VFI_neon)
            {
                if((NEON_0 <= VFI_neon2 <= NEON_5))
                {
                    new support = GetVehicleModel(vehicleid); 
                    //
                    if(VFI_vehicle_supports_neon(support))
                    {
                        new id_mod = GetVehicleModel(vehicleid) - 400;
                        //
                        if(0 <= id_mod <= 211)
                        { 
                            VFI_destroy_from_vehicle(2, false, vehicleid);
                            //
                            #if defined _streamer_included
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0] = CreateDynamicObject(VFI_neon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1] = CreateDynamicObject(VFI_neon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                //
                                AttachDynamicObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                AttachDynamicObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1], vehicleid, -VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                //
                                GetVehiclePos(vehicleid, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                //
                                #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
                                    VFI_LoopP:
                                    {
                                        if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                            Streamer_Update(i);
                                    }
                                #else
                                    VFI_LoopP_II:
                                    {
                                        if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                            Streamer_Update(i);
                                    }
                                #endif
                                //
                            #else
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0] = CreateObject(VFI_neon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1] = CreateObject(VFI_neon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                //
                                AttachObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][0], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                AttachObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Neon][1], vehicleid, -VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                            #endif
                            //
                            VFI_neonactivated[vehicleid] = true;
                        }
                    }
                }
            }
            else if(!VFI_neon)
            {
                if(VFI_neon2 == NEON_NULO)
                    VFI_destroy_from_vehicle(2, false, vehicleid);
            }
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_neon)
                    {
                        if((NEON_0 <= VFI_neon2 <= NEON_5))
                        {
                            new support = GetVehicleModel(v);
                            //
                            if(VFI_vehicle_supports_neon(support))
                            {
                                new id_mod = GetVehicleModel(v) - 400;
                                //
                                if(0 <= id_mod <= 211)
                                {
                                    VFI_destroy_from_vehicle(2, true, v);
                                    //
                                    #if defined _streamer_included
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][0] = CreateDynamicObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][1] = CreateDynamicObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        //
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][0], v, VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][1], v, -VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                        //
                                        GetVehiclePos(v, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                        //
                                        VFI_LoopP:
                                        {
                                            if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                                Streamer_Update(i);
                                        }
                                    #else
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][0] = CreateObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][1] = CreateObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        //
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][0], v, VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][1], v, -VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                    #endif
                                    //
                                    VFI_neonactivated_global[v] = true;
                                }
                            }
                        }
                    }
                    else if(!VFI_neon)
                    {
                        if(VFI_neon2 == NEON_NULO)
                            VFI_destroy_from_vehicle(2, true, v);
                    }
                }
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_neon)
                    {
                        if((NEON_0 <= VFI_neon2 <= NEON_5))
                        {
                            new support = GetVehicleModel(v);
                            //
                            if(VFI_vehicle_supports_neon(support))
                            {
                                new id_mod = GetVehicleModel(v) - 400;
                                //
                                if(0 <= id_mod <= 211)
                                {
                                    VFI_destroy_from_vehicle(2, true, v);
                                    //
                                    #if defined _streamer_included
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][0] = CreateDynamicObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][1] = CreateDynamicObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        //
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][0], v, VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][1], v, -VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                        //
                                        GetVehiclePos(v, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                        //
                                        VFI_LoopP_II:
                                        {
                                            if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                                Streamer_Update(i);
                                        }
                                    #else
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][0] = CreateObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Neon][1] = CreateObject(VFI_neon2, 8459.392578, -3691.130859, -0.483993, 0.0, 0.0, 0.0);
                                        //
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][0], v, VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Neon][1], v, -VFI_VehicleFunctions[id_mod][VFI_Neon_X], VFI_VehicleFunctions[id_mod][VFI_Neon_Y], VFI_VehicleFunctions[id_mod][VFI_Neon_Z], 0.0, 0.0, 0.0);
                                    #endif
                                    //
                                    VFI_neonactivated_global[v] = true;
                                }
                            }
                        }
                    }
                    else if(!VFI_neon)
                    {
                        if(VFI_neon2 == NEON_NULO)
                            VFI_destroy_from_vehicle(2, true, v);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Xenon(bool:VFI_xenon, VFI_xenon2, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(VFI_xenon)
            {
                if((XENON_0 >= VFI_xenon2 >= XENON_3))
                {
                    new support = GetVehicleModel(vehicleid); 
                    //
                    if(VFI_vehicle_supports_xenon(support))
                    {
                        new id_mod = GetVehicleModel(vehicleid) - 400;
                        //
                        if(0 <= id_mod <= 211)
                        { 
                            VFI_destroy_from_vehicle(3, false, vehicleid);
                            //
                            #if defined _streamer_included
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                //
                                AttachDynamicObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                AttachDynamicObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                AttachDynamicObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                //
                                GetVehiclePos(vehicleid, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                //
                                #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
                                    VFI_LoopP:
                                    {
                                        if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                            Streamer_Update(i);
                                    }
                                #else
                                    VFI_LoopP_II:
                                    {
                                        if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                            Streamer_Update(i);
                                    }
                                #endif
                                //
                            #else
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                //
                                AttachObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][0], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                AttachObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][1], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                AttachObjectToVehicle(VFI_VehicleUtilities[vehicleid - 1][VFI_Xenon][2], vehicleid, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                            #endif
                            //
                            VFI_xenonactivated[vehicleid] = true;
                        }
                    }
                }
            }
            else if(!VFI_xenon)
            {
                if(VFI_xenon2 == XENON_NULO)
                    VFI_destroy_from_vehicle(3, false, vehicleid);
            }
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_xenon)
                    {
                        if((XENON_0 >= VFI_xenon2 >= XENON_3))
                        {
                            new support = GetVehicleModel(v);
                            //
                            if(VFI_vehicle_supports_xenon(support))
                            {
                                new id_mod = GetVehicleModel(v) - 400;
                                //
                                if(0 <= id_mod <= 211)
                                { 
                                    VFI_destroy_from_vehicle(3, true, v);
                                    //
                                    #if defined _streamer_included
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][0] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][1] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][2] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        //
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][0], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][1], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][2], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        //
                                        GetVehiclePos(v, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                        //
                                        VFI_LoopP:
                                        {
                                            if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                                Streamer_Update(i);
                                        }
                                    #else
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][0] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][1] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][2] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        //
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][0], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][1], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][2], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                    #endif
                                    //
                                    VFI_xenonactivated_global[v] = true;
                                }
                            }
                        }
                    }
                    else if(!VFI_xenon)
                    {
                        if(VFI_xenon2 == XENON_NULO)
                            VFI_destroy_from_vehicle(3, true, v);
                    }
                }
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_xenon)
                    {
                        if((XENON_0 >= VFI_xenon2 >= XENON_3))
                        {
                            new support = GetVehicleModel(v);
                            //
                            if(VFI_vehicle_supports_xenon(support))
                            {
                                new id_mod = GetVehicleModel(v) - 400;
                                //
                                if(0 <= id_mod <= 211)
                                { 
                                    VFI_destroy_from_vehicle(3, true, v);
                                    //
                                    #if defined _streamer_included
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][0] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][1] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][2] = CreateDynamicObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        //
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][0], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][1], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachDynamicObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][2], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        //
                                        GetVehiclePos(v, VFI_pos[0], VFI_pos[1], VFI_pos[2]);
                                        //
                                        VFI_LoopP_II:
                                        {
                                            if(IsPlayerInRangeOfPoint(i, 70.0, VFI_pos[0], VFI_pos[1], VFI_pos[2]))
                                                Streamer_Update(i);
                                        }
                                    #else
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][0] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][1] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        VFI_VehicleUtilities[v - 1][VFI_Xenon][2] = CreateObject(VFI_xenon2, -1441.211303, 8739.687500, -1.272213, 0.0, 0.0, 0.0);
                                        //
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][0], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][1], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                        AttachObjectToVehicle(VFI_VehicleUtilities[v - 1][VFI_Xenon][2], v, VFI_VehicleFunctions[id_mod][VFI_Xenon_X], VFI_VehicleFunctions[id_mod][VFI_Xenon_Y], VFI_VehicleFunctions[id_mod][VFI_Xenon_Z], 0.0, 0.0, 0.0);
                                    #endif
                                    //
                                    VFI_xenonactivated_global[v] = true;
                                }
                            }
                        }
                    }
                    else if(!VFI_xenon)
                    {
                        if(VFI_xenon2 == XENON_NULO)
                            VFI_destroy_from_vehicle(3, true, v);
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Tunar(bool:VFI_tune, VFI_tunetype, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(VFI_tune)
            {
                new VFI_modelid = GetVehicleModel(vehicleid);
                //
                if(VFI_tunetype == PAINTJOB_0 && PAINTJOB_1 && PAINTJOB_2)
                {
                    if(VFI_vehicle_supports_paintjob(VFI_modelid))
                        ChangeVehiclePaintjob(vehicleid, VFI_tunetype);
                }
                else
                {
                    if(VFI_vehicle_supports_component(VFI_modelid, VFI_tunetype))
                        AddVehicleComponent(vehicleid, VFI_tunetype);
                }
            }
            else if(!VFI_tune)
            {
                if(VFI_tunetype != PAINTJOB_0 && PAINTJOB_1 && PAINTJOB_2)
                {
                    if(GetVehicleComponentType(VFI_tunetype))
                        RemoveVehicleComponent(vehicleid, VFI_tunetype);
                }
            }
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_tune)
                    {
                        new VFI_modelid = GetVehicleModel(v);
                        //
                        if(VFI_tunetype == PAINTJOB_0 && PAINTJOB_1 && PAINTJOB_2)
                        {
                            if(VFI_vehicle_supports_paintjob(VFI_modelid))
                                ChangeVehiclePaintjob(v, VFI_tunetype);
                        }
                        else
                        {
                            if(VFI_vehicle_supports_component(VFI_modelid, VFI_tunetype))
                                AddVehicleComponent(v, VFI_tunetype);
                        }
                    }
                    else if(!VFI_tune)
                    {
                        if(VFI_tunetype != PAINTJOB_0 && PAINTJOB_1 && PAINTJOB_2)
                        {
                            if(GetVehicleComponentType(VFI_tunetype))
                                RemoveVehicleComponent(v, VFI_tunetype);
                        }
                    }
                }
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                {
                    if(VFI_tune)
                    {
                        new VFI_modelid = GetVehicleModel(v);
                        //
                        if(VFI_tunetype == PAINTJOB_0 && PAINTJOB_1 && PAINTJOB_2)
                        {
                            if(VFI_vehicle_supports_paintjob(VFI_modelid))
                                ChangeVehiclePaintjob(v, VFI_tunetype);
                        }
                        else
                        {
                            if(VFI_vehicle_supports_component(VFI_modelid, VFI_tunetype))
                                AddVehicleComponent(v, VFI_tunetype);
                        }
                    }
                    else if(!VFI_tune)
                    {
                        if(VFI_tunetype != PAINTJOB_0 && PAINTJOB_1 && PAINTJOB_2)
                        {
                            if(GetVehicleComponentType(VFI_tunetype))
                                RemoveVehicleComponent(v, VFI_tunetype);
                        }
                    }
                }
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Cor(VFI_color1, VFI_color2, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
            ChangeVehicleColor(vehicleid, VFI_color1, VFI_color2);
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                    ChangeVehicleColor(v , VFI_color1, VFI_color2);
            }
        #else
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                    ChangeVehicleColor(v , VFI_color1, VFI_color2);
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

stock Veiculo_Interior(VFI_interior, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
{
    if(!VFI_global)
    {
        if(IsValidVehicle(vehicleid))
        {
            if(IsPlayerInAnyVehicle(playerid))
                SetPlayerInterior(playerid, VFI_interior);
            //
            LinkVehicleToInterior(vehicleid, VFI_interior);
        }
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM(playerid, VFI_color, VFI_str_message);
        //
        return true;
    }
    else if(VFI_global)
    {
        #if defined _INC_y_iterate || defined _FOREACH_LOCAL_VERSION
            VFI_LoopP:
            {
                if(IsPlayerInAnyVehicle(i))
                    SetPlayerInterior(i, VFI_interior);
            }
            //
            VFI_LoopV:
            {
                if(IsValidVehicle(v))
                    LinkVehicleToInterior(v, VFI_interior);
            }
        #else
            VFI_LoopP_II:
            {
                if(IsPlayerInAnyVehicle(i))
                    SetPlayerInterior(i, VFI_interior);
            }
            //
            VFI_LoopV_II:
            {
                if(IsValidVehicle(v))
                    LinkVehicleToInterior(v, VFI_interior);
            }
        #endif
        //
        format(VFI_str_message, sizeof(VFI_str_message), "%s", VFI_message);
        //
        if(!VFI_verification_strcmp(VFI_str_message, "", 2) && !VFI_verification_strcmp(VFI_str_message, " ", 3))
            VFI_SCM_ALL(VFI_color, VFI_str_message);
        //
        return true;
    }
    return false;
}

/*
$$$$$$$$\                     $$\ $$\           $$\       
$$  _____|                    $$ |\__|          $$ |      
$$ |      $$$$$$$\   $$$$$$\  $$ |$$\  $$$$$$$\ $$$$$$$\  
$$$$$\    $$  __$$\ $$  __$$\ $$ |$$ |$$  _____|$$  __$$\ 
$$  __|   $$ |  $$ |$$ /  $$ |$$ |$$ |\$$$$$$\  $$ |  $$ |
$$ |      $$ |  $$ |$$ |  $$ |$$ |$$ | \____$$\ $$ |  $$ |
$$$$$$$$\ $$ |  $$ |\$$$$$$$ |$$ |$$ |$$$$$$$  |$$ |  $$ |
\________|\__|  \__| \____$$ |\__|\__|\_______/ \__|  \__|
                    $$\   $$ |                            
                    \$$$$$$  |                            
                     \______/                             
*/

#define NEON_NULL NEON_NULO
#define XENON_NULL XENON_NULO
//
stock Vehicle_Lock(bool:VFI_blocked, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Fechadura(VFI_blocked, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Engine(bool:VFI_engine, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Motor(VFI_engine, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Light(bool:VFI_lights, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Farol(VFI_lights, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Hood(bool:VFI_bonnet, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Capo(VFI_bonnet, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_SuitCase(bool:VFI_boot, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Malas(VFI_boot, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Alarm(bool:VFI_alarm, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Alarme(VFI_alarm, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Doors(bool:VFI_close, VFI_doors, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Portas(VFI_close, VFI_doors, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Windows(bool:VFI_close, VFI_windows, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Janelas(VFI_close, VFI_windows, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Life(Float:VFI_health, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Vida(VFI_health, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Repair(bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Reparar(VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Respawn(bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Reaparecer(VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_World(VFI_world, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Mundo(VFI_world, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Siren(bool:VFI_sirene, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Sirene(VFI_sirene, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Neon(bool:VFI_neon, VFI_neon2, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Neon(VFI_neon, VFI_neon2, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Xenon(bool:VFI_xenon, VFI_xenon2, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Xenon(VFI_xenon, VFI_xenon2, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Tune(bool:VFI_tune, VFI_tunetype, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Tunar(VFI_tune, VFI_tunetype, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Color(VFI_color1, VFI_color2, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Cor(VFI_color1, VFI_color2, VFI_global, VFI_color, VFI_message, vehicleid, playerid);
//
stock Vehicle_Interior(VFI_interior, bool:VFI_global, VFI_color, const VFI_message[], vehicleid = -1, playerid = -1)
    return Veiculo_Interior(VFI_interior, VFI_global, VFI_color, VFI_message, vehicleid, playerid);

/*
 $$$$$$\    $$\     $$\                                 $$$$$$$\             $$$$$$\  $$\           $$\   $$\     $$\                               
$$  __$$\   $$ |    $$ |                                $$  __$$\           $$  __$$\ \__|          \__|  $$ |    \__|                              
$$ /  $$ |$$$$$$\   $$$$$$$\   $$$$$$\   $$$$$$\        $$ |  $$ | $$$$$$\  $$ /  \__|$$\ $$$$$$$\  $$\ $$$$$$\   $$\  $$$$$$\  $$$$$$$\   $$$$$$$\ 
$$ |  $$ |\_$$  _|  $$  __$$\ $$  __$$\ $$  __$$\       $$ |  $$ |$$  __$$\ $$$$\     $$ |$$  __$$\ $$ |\_$$  _|  $$ |$$  __$$\ $$  __$$\ $$  _____|
$$ |  $$ |  $$ |    $$ |  $$ |$$$$$$$$ |$$ |  \__|      $$ |  $$ |$$$$$$$$ |$$  _|    $$ |$$ |  $$ |$$ |  $$ |    $$ |$$ /  $$ |$$ |  $$ |\$$$$$$\  
$$ |  $$ |  $$ |$$\ $$ |  $$ |$$   ____|$$ |            $$ |  $$ |$$   ____|$$ |      $$ |$$ |  $$ |$$ |  $$ |$$\ $$ |$$ |  $$ |$$ |  $$ | \____$$\ 
 $$$$$$  |  \$$$$  |$$ |  $$ |\$$$$$$$\ $$ |            $$$$$$$  |\$$$$$$$\ $$ |      $$ |$$ |  $$ |$$ |  \$$$$  |$$ |\$$$$$$  |$$ |  $$ |$$$$$$$  |
 \______/    \____/ \__|  \__| \_______|\__|            \_______/  \_______|\__|      \__|\__|  \__|\__|   \____/ \__| \______/ \__|  \__|\_______/ 
*/

#if defined _ALS_DestroyVehicle
    #undef DestroyVehicle
#else
    #define _ALS_DestroyVehicle
#endif
#define DestroyVehicle VFI_vehicle_destroy
//
#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit VFI_print_gamemodeinit
#if defined VFI_print_gamemodeinit
    forward VFI_print_gamemodeinit();
#endif
