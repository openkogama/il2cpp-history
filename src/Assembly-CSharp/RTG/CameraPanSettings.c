
/* CameraPanSettings() */

void Assembly-CSharp.dll::RTG::CameraPanSettings::CameraPanSettings__ctor
               (CameraPanSettings *this,MethodInfo *method)

{
  (this->fields)._standardPanSensitivity = 1.0;
  (this->fields)._smoothPanSensitivity = 0.7;
  (this->fields)._smoothValue = 4.0;
  (this->fields)._isPanningEnabled = 1;
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


/* Single get_Sensitivity() */

float Assembly-CSharp.dll::RTG::CameraPanSettings::CameraPanSettings_get_Sensitivity
                (CameraPanSettings *this,MethodInfo *method)

{
  if ((this->fields)._panMode == 0) {
    return (this->fields)._standardPanSensitivity;
  }
  return (this->fields)._smoothPanSensitivity;
}

