
/* XZGridSettings() */

void Assembly-CSharp.dll::RTG::XZGridSettings::XZGridSettings__ctor
               (XZGridSettings *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._isVisible = 1;
  (this->fields)._cellSizeX = 1.0;
  (this->fields)._cellSizeZ = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._rotationAngles.x = (pVVar2->zeroVector).x;
  (this->fields)._rotationAngles.y = fVar3;
  (this->fields)._rotationAngles.z = fVar4;
  (this->fields)._upDownStep = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar1) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
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

