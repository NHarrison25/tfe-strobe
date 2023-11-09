#include "..\script_component.hpp"

params ["_unit", "_strobeType"];

switch (_strobeType) do {
	case STROBE_OFF: {
		_unit call tfe_strobe_fnc_deleteStrobe;
		_unit setVariable [STROBE_STATUS, _strobeType, true];
	};
	case STROBE_ON_STEADY: {
		_unit call tfe_strobe_fnc_deleteStrobe;
		[_unit, "tfe_strobe_steady"] call tfe_strobe_fnc_createStrobe;
		_unit setVariable [STROBE_STATUS, _strobeType, true];
	};
	case STROBE_ON_PULSE: {
		_unit call tfe_strobe_fnc_deleteStrobe;
		[_unit, "tfe_strobe_pulse"] call tfe_strobe_fnc_createStrobe;
		_unit setVariable [STROBE_STATUS, _strobeType, true];
	};
};
