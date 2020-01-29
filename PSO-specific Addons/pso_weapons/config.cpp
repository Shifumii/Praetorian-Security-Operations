//Config adapted from the configs of LM Handguns & FlankenLabs. All texturing done from scratch by Corey. White P07 retexture by Shifumii.

class CfgPatches {
	class pso_weapons {
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons {
	class ItemCore;
	//class hgun_ACP2_F;
	class hgun_P07_F;
	
	class pso_p07_m81 : hgun_P07_F {
		displayname = "P99 9mm PSO M81";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07\p07_m81.paa"};
		baseweapon = pso_p07_m81;
	};
	
	class pso_p07_multicam : hgun_P07_F {
		displayname = "P99 9mm PSO Multicam";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07\p07_multicam.paa"};
		baseweapon = pso_p07_multicam;
	};
	
	class pso_p07_grey : hgun_P07_F {
		displayname = "P99 9mm PSO Grey";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07\p07_grey.paa"};
		baseweapon = pso_p07_grey;
	};
	
	class pso_p07_scratched : hgun_P07_F {
		displayname = "P99 9mm PSO Scratched";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07\p07_scratched.paa"};
		baseweapon = pso_p07_scratched;
	};
	
	class pso_p07_white : hgun_P07_F {
		author = "Retextured by Shifumii";
		displayname = "P99 9mm PSO White";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\pso_weapons\data\p07\p07_white.paa"};
		baseweapon = pso_p07_white;
	};
};