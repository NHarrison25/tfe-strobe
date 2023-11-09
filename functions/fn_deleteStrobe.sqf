#include "..\script_component.hpp"

params ["_unit", ["_external", false]];
private _objects = attachedObjects _unit;

//Deletes every TFE strobe that is attached to the unit
{
	if (typeOf _x == "tfe_strobe_steady" || typeOf _x == "tfe_strobe_pulse") then
	{
		deleteVehicle _x;
	};
} forEach _objects;

//If called with true as the second parameter, set the unit's variable to 0. Second parameter is used when other code does not set the variable.
if (_external) exitWith {_unit setVariable [STROBE_STATUS, STROBE_OFF, true]};
