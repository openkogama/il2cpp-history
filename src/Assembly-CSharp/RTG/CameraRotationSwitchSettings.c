
/* CameraRotationSwitchSettings() */

void Assembly-CSharp.dll::RTG::CameraRotationSwitchSettings::CameraRotationSwitchSettings__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraRotationSwitchSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__RTG__CameraRotationSwitchSettings->static_fields->_minConstantDuration = 0.1;
  return;
}


/* CameraRotationSwitchSettings() */

void Assembly-CSharp.dll::RTG::CameraRotationSwitchSettings::CameraRotationSwitchSettings__ctor
               (CameraRotationSwitchSettings *this,MethodInfo *method)

{
  (this->fields)._switchMode = 1;
  (this->fields)._constantSwitchDurationInSeconds = 0.3;
  (this->fields)._smoothValue = 8.0;
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


/* Void set_ConstantSwitchDurationInSeconds(Single) */

void Assembly-CSharp.dll::RTG::CameraRotationSwitchSettings::
     CameraRotationSwitchSettings_set_ConstantSwitchDurationInSeconds
               (CameraRotationSwitchSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraRotationSwitchSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__CameraRotationSwitchSettings->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__CameraRotationSwitchSettings);
  }
  fVar1 = TypeInfo__RTG__CameraRotationSwitchSettings->static_fields->_minConstantDuration;
  if (value <= fVar1) {
    value = fVar1;
  }
  (this->fields)._constantSwitchDurationInSeconds = value;
  return;
}

