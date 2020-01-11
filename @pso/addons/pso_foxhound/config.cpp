class CfgPatches
{
	class pso_foxhound
	{
		units[] = {"rksla3_foxhound_lppv_base_pso_black","rksla3_foxhound_lppv_base_pso_olive","rksla3_foxhound_lppv_base_pso_tan","rksla3_foxhound_lppv_base_pso_white"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rksla3_foxhound_lppv"};
		authors[] = {"Corey"};
	};
};

class CfgVehicles
{
	class rksla3_foxhound_lppv_base;
	
	class rksla3_foxhound_lppv_base_pso_black: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "PSO Foxhound LPPV Black";
		DLC = "";
		hiddenSelections[] = {"main_texture"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_black_co.paa"};
	};
	
	class rksla3_foxhound_lppv_base_pso_olive: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "PSO Foxhound LPPV Olive Drab";
		DLC = "";
		hiddenSelections[] = {"main_texture"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_olive_co.paa"};
	};
	
	class rksla3_foxhound_lppv_base_pso_tan: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "PSO Foxhound LPPV Tan";
		DLC = "";
		hiddenSelections[] = {"main_texture"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_tan_co.paa"};
	};
	
	class rksla3_foxhound_lppv_base_pso_white: rksla3_foxhound_lppv_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Retextured by Corey";
		displayName = "PSO Foxhound LPPV White";
		DLC = "";
		hiddenSelections[] = {"main_texture"};
		hiddenSelectionsTextures[] = {"pso_foxhound\paa\foxhound_exterior_pso_white_co.paa"};
	};
};