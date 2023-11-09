#include "..\script_component.hpp"

params ["_unit"];
private _strobeStatus = _unit getVariable STROBE_STATUS;

if (isNil {_strobeStatus}) exitWith {
	_unit setVariable [STROBE_STATUS, STROBE_OFF, true];
	_unit call tfe_strobe_fnc_deleteStrobe;	
	_unit getVariable STROBE_STATUS;
};

_strobeStatus;
