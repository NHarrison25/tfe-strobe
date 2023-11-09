#include "..\script_component.hpp"

params ["_unit", "_strobeType"];

private _strobe = _strobeType createVehicle position _unit; 
_strobe attachTo [_unit, [-.05,-0.2,0.2],"head", true]; 
