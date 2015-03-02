class CfgPatches {
  class JNS_Skycranes_BLU_Black {
    units[] = {
      "JNS_Skycrane_BLU_Black",
      "JNS_Skycrane_Ammo_BLU_Black",
      "JNS_Skycrane_Bench_BLU_Black",
      "JNS_Skycrane_Cargo_BLU_Black",
      "JNS_Skycrane_Transport_BLU_Black",
      "JNS_Skycrane_Fuel_BLU_Black",
      "JNS_Skycrane_Medical_BLU_Black",
      "JNS_Skycrane_Repair_BLU_Black"
    };
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {JNS_Skycranes_Core};
    version = "1.1.0";
    versionStr = "1.1.0";
    versionAr[] = {1,1,0};
    author[] = {"Jonpas"};
    authorUrl = "https://github.com/jonpas";
  };
};


// Scope definitions
#define public 2

// Macro definitions
#define MACRO_BLACK \
  scope = public; \
  vehicleClass = JNS_Skycranes_Black;


class CfgVehicles {
  class JNS_Skycrane_BLU;
  class JNS_Skycrane_BLU_Black: JNS_Skycrane_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane Black";
    hiddenSelections[] = {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa"
    };
  };

  class JNS_Skycrane_Ammo_BLU;
  class JNS_Skycrane_Ammo_BLU_Black: JNS_Skycrane_Ammo_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Ammo) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Bench_BLU;
  class JNS_Skycrane_Bench_BLU_Black: JNS_Skycrane_Bench_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Bench) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_black_CO.paa"
    };
  };

  class JNS_Skycrane_Cargo_BLU;
  class JNS_Skycrane_Cargo_BLU_Black: JNS_Skycrane_Cargo_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Cargo) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Transport_BLU;
  class JNS_Skycrane_Transport_BLU_Black: JNS_Skycrane_Transport_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Transport) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Fuel_BLU;
  class JNS_Skycrane_Fuel_BLU_Black: JNS_Skycrane_Fuel_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Fuel) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_black_CO.paa"
    };
  };

  class JNS_Skycrane_Medical_BLU;
  class JNS_Skycrane_Medical_BLU_Black: JNS_Skycrane_Medical_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Medical) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };

  class JNS_Skycrane_Repair_BLU;
  class JNS_Skycrane_Repair_BLU_Black: JNS_Skycrane_Repair_BLU {
    MACRO_BLACK
    author = "Jonpas";
    displayName = "CH-54 Skycrane (Repair) Black";
    hiddenSelections[] = {"Camo_1", "Camo_2", "Camo_3", "Camo_4"};
    hiddenSelectionsTextures[] = {
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_co.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
      "\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
    };
  };
};