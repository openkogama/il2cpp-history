
/* CameraBackgroundSettings() */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings__ctor(CameraBackgroundSettings *this,MethodInfo *method)

{
  (this->fields)._firstColor.r = 0.2784314;
  (this->fields)._firstColor.g = 0.2784314;
  (this->fields)._firstColor.b = 0.2784314;
  (this->fields)._firstColor.a = 1.0;
  (this->fields)._secondColor.r = 0.0;
  (this->fields)._secondColor.g = 0.0;
  (this->fields)._secondColor.b = 0.0;
  (this->fields)._secondColor.a = 1.0;
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


/* Void set_GradientOffset(Single) */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings_set_GradientOffset(CameraBackgroundSettings *this,float value,MethodInfo *method)

{
  fVar1 = -1.0;
  if ((-1.0 <= value) && (fVar1 = 1.0, value <= 1.0)) {
    (this->fields)._gradientOffset = value;
    return;
  }
  (this->fields)._gradientOffset = fVar1;
  return;
}


/* Void set_IsVisible(Boolean) */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings_set_IsVisible(CameraBackgroundSettings *this,bool value,MethodInfo *method)

{
  (this->fields)._isVisible = value;
  return;
}

