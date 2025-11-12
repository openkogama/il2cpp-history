
/* CameraBackgroundSettings() */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings__ctor
               (CameraBackgroundSettings *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._firstColor.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._firstColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._firstColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar1 = _UNK_?;
  (this->fields)._firstColor.a = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._secondColor.r = (float)_UNK_?;
  _UNK_? = uVar1;
  uVar3 = _UNK_?;
  (this->fields)._secondColor.g = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._secondColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._secondColor.a = (float)uVar4;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar6 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* Void set_GradientOffset(Single) */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings_set_GradientOffset
               (CameraBackgroundSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if ((_UNK_? <= value) && (fVar1 = _UNK_?, value <= _UNK_?)) {
    (this->fields)._gradientOffset = value;
    return;
  }
  (this->fields)._gradientOffset = fVar1;
  return;
}


/* Void set_IsVisible(Boolean) */

void Assembly-CSharp.dll::RTG::CameraBackgroundSettings::CameraBackgroundSettings_set_IsVisible
               (CameraBackgroundSettings *this,bool value,MethodInfo *method)

{
  (this->fields)._isVisible = value;
  return;
}

