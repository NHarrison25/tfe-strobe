class CfgPatches {
	class tfe_strobe {
		author = "Harrison";
		requiredAddons[] = {"ace_interact_menu", "aceax_ingame", "tfn_helmets"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions {
	class tfe_strobe {
		class functions {
			file = "tfe_strobe\functions";
			class checkStrobe {};
			class createStrobe {};
			class deleteStrobe {};
			class handleInventory {};
			class hasStrobe {};
			class toggleStrobe {};
		};
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
