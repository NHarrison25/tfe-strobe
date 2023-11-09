params ["_unit", "_strobeType"];
private _objects = attachedObjects player; 
private _strobeStatus = _objects findIf {typeOf _x == _strobeType};

_strobeStatus != -1;
