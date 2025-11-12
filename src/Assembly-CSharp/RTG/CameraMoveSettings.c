
/* CameraMoveSettings() */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraMoveSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__RTG__CameraMoveSettings->static_fields->_minMoveSpeed = 0.1;
  return;
}


/* CameraMoveSettings() */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings__ctor
               (CameraMoveSettings *this,MethodInfo *method)

{
  (this->fields)._moveSpeed = 6.0;
  (this->fields)._accelerationRate = 15.0;
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


/* Void set_MoveSpeed(Single) */

void Assembly-CSharp.dll::RTG::CameraMoveSettings::CameraMoveSettings_set_MoveSpeed
               (CameraMoveSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraMoveSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__CameraMoveSettings->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__CameraMoveSettings);
  }
  fVar1 = TypeInfo__RTG__CameraMoveSettings->static_fields->_minMoveSpeed;
  if (fVar1 <= value) {
    fVar1 = value;
  }
  (this->fields)._moveSpeed = fVar1;
  return;
}

