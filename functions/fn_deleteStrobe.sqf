#include "..\script_component.hpp"

params ["_unit", ["_external", false]];
private _objects = attachedObjects _unit;

{
	if (typeOf _x == "tfe_strobe_steady" || typeOf _x == "tfe_strobe_pulse") then
	{
		deleteVehicle _x;
	};
} forEach _objects;

if (_external) exitWith {_unit setVariable [STROBE_STATUS, STROBE_OFF, true]};
