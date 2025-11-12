
/* CameraOrbitSettings() */

void Assembly-CSharp.dll::RTG::CameraOrbitSettings::CameraOrbitSettings__ctor
               (CameraOrbitSettings *this,MethodInfo *method)

{
  (this->fields)._standardOrbitSensitivity = 5.0;
  (this->fields)._smoothOrbitSensitivity = 5.0;
  (this->fields)._smoothValue = 8.0;
  (this->fields)._isOrbitEnabled = 1;
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


/* Single get_OrbitSensitivity() */

float Assembly-CSharp.dll::RTG::CameraOrbitSettings::CameraOrbitSettings_get_OrbitSensitivity
                (CameraOrbitSettings *this,MethodInfo *method)

{
  if ((this->fields)._orbitMode == 1) {
    return (this->fields)._smoothOrbitSensitivity;
  }
  return (this->fields)._standardOrbitSensitivity;
}

