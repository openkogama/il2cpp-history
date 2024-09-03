
/* XZGridSettings() */

void Assembly-CSharp.dll::RTG::XZGridSettings::XZGridSettings__ctor
               (XZGridSettings *this,MethodInfo *method)

{
  (this->fields)._isVisible = 1;
  (this->fields)._cellSizeX = 1.0;
  (this->fields)._cellSizeZ = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields)._rotationAngles.x = (pVVar1->zeroVector).x;
  (this->fields)._rotationAngles.y = fVar2;
  (this->fields)._rotationAngles.z = fVar3;
  (this->fields)._upDownStep = 1.0;
  Settings::Settings__ctor((Settings *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_CellSizeX(Single) */

void Assembly-CSharp.dll::RTG::XZGridSettings::XZGridSettings_set_CellSizeX
               (XZGridSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._cellSizeX = value;
  return;
}


/* Void set_CellSizeZ(Single) */

void Assembly-CSharp.dll::RTG::XZGridSettings::XZGridSettings_set_CellSizeZ
               (XZGridSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._cellSizeZ = value;
  return;
}


/* Void set_UpDownStep(Single) */

void Assembly-CSharp.dll::RTG::XZGridSettings::XZGridSettings_set_UpDownStep
               (XZGridSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._upDownStep = fVar1;
  return;
}

