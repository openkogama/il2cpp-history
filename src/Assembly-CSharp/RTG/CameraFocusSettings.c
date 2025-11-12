
/* CameraFocusSettings() */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings__ctor
               (CameraFocusSettings *this,MethodInfo *method)

{
  (this->fields)._focusMode = 2;
  (this->fields)._constantSpeed = 10.0;
  (this->fields)._smoothTime = 1.5;
  (this->fields)._focusDistanceAdd = 1.2;
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


/* Void set_ConstantSpeed(Single) */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings_set_ConstantSpeed
               (CameraFocusSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._constantSpeed = value;
  return;
}


/* Void set_FocusDistanceAdd(Single) */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings_set_FocusDistanceAdd
               (CameraFocusSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._focusDistanceAdd = value;
  return;
}


/* Void set_SmoothTime(Single) */

void Assembly-CSharp.dll::RTG::CameraFocusSettings::CameraFocusSettings_set_SmoothTime
               (CameraFocusSettings *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._smoothTime = value;
  return;
}

