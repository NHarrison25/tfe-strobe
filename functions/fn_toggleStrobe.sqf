params ["_unit", "_strobeType"];

private _objects = attachedObjects _unit; 

{
	if (typeOf _x == "tfe_strobe_steady" || typeOf _x == "tfe_strobe_pulse") then
	{
		deleteVehicle _x;
	};
} forEach _objects;

if (_strobeType == "strobeOff") exitWith {true};

private _strobe = _strobeType createVehicle position _unit; 
_strobe attachTo [_unit, [-.05, -0.2,0.2],"head", true]; 
