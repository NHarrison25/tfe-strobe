class Extended_GetInMan_EventHandlers
{
	class CAManBase {
		class tfe_strobe
		{
			getInMan = "_this call tfe_strobe_fnc_handleGetInMan";
		};
	};
};

class Extended_InventoryOpened_EventHandlers
{
	class CAManBase {
		class tfe_strobe
		{
			inventoryOpened = "_this call tfe_strobe_fnc_handleDelete";
		};
	};
};

class Extended_InventoryClosed_EventHandlers
{
	class CAManBase {
		class tfe_strobe
		{
			inventoryClosed = "_this call tfe_strobe_fnc_handleDelete";
		};
	};
};
