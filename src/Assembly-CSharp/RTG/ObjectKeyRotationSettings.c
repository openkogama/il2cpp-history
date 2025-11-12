
/* ObjectKeyRotationSettings() */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::ObjectKeyRotationSettings__ctor
               (ObjectKeyRotationSettings *this,MethodInfo *method)

{
  (this->fields)._xRotationStep = 90.0;
  (this->fields)._yRotationStep = 90.0;
  (this->fields)._zRotationStep = 90.0;
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
    uVar2 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void set_XRotationStep(Single) */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::
     ObjectKeyRotationSettings_set_XRotationStep
               (ObjectKeyRotationSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._xRotationStep = fVar1;
  return;
}


/* Void set_YRotationStep(Single) */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::
     ObjectKeyRotationSettings_set_YRotationStep
               (ObjectKeyRotationSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._yRotationStep = fVar1;
  return;
}


/* Void set_ZRotationStep(Single) */

void Assembly-CSharp.dll::RTG::ObjectKeyRotationSettings::
     ObjectKeyRotationSettings_set_ZRotationStep
               (ObjectKeyRotationSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._zRotationStep = fVar1;
  return;
}

