params ["_unit"];

if (!(_unit call tfe_strobe_fnc_hasStrobe)) then
{
	private _objects = attachedObjects _unit;

	{
		if (typeOf _x == "tfe_strobe_steady" || typeOf _x == "tfe_strobe_pulse") then
		{
			deleteVehicle _x;
		};
	} forEach _objects;
};
