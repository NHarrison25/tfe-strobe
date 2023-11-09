class Extended_GetInMan_EventHandlers {
	class CAManBase {
		class tfe_strobe
		{
			getInMan = "[_this select 0, true] call tfe_strobe_fnc_deleteStrobe";
		};
	};
};

class Extended_Killed_EventHandlers {
	class CAManBase {
		class tfe_strobe
		{
			killed = "[_this select 0, true] call tfe_strobe_fnc_deleteStrobe";
		};
	};
};

class Extended_InventoryOpened_EventHandlers {
	class CAManBase {
		class tfe_strobe
		{
			inventoryOpened = "_this call tfe_strobe_fnc_handleInventory";
		};
	};
};

class Extended_InventoryClosed_EventHandlers {
	class CAManBase {
		class tfe_strobe
		{
			inventoryClosed = "_this call tfe_strobe_fnc_handleInventory";
		};
	};
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class tfe_strobe {
            init = "_this call tfe_strobe_fnc_checkStrobe";
        };
    };
};
