class CfgPatches
{
	class tfe_strobe
	{
		author = "Harrison";
		requiredAddons[] = {"ace_interact_menu", "aceax_ingame", "tfn_helmets"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class tfe_strobe
	{
		class functions
		{
			file = "tfe_strobe\functions";
			class toggleStrobe {};
			class checkStrobe {};
			class hasStrobe {};
			class handleGetInMan {};
			class handleDelete {};
		};
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

//Change to use unit variables instead of checking attached items constantly
