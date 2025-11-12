
/* Void HandleInputState() */

void Assembly-CSharp.dll::InputToInGameAction::InputToInGameAction_HandleInputState
               (InputToInGameAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  (this->fields).use = 0;
  (this->fields).fire = 0;
  (this->fields).drop = 0;
  (this->fields).holster = 0;
  (this->fields).ignorePickupOwner = 0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar1 = FUN_?(7);
    if (cVar1 != '\0') {
      (this->fields).isInUI = 1;
      (this->fields).wentToGameFromUI = 0;
      return;
    }
  }
  (this->fields).wentToGameFromUI = (this->fields).isInUI;
  (this->fields).isInUI = 0;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
                    (KogamaControls__Enum_Use,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    (this->fields).use = 1;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
                    (KogamaControls__Enum_DropCurrentItem,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    (this->fields).drop = 1;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
                    (KogamaControls__Enum_Holster,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    (this->fields).holster = 1;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Fire,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_Fire,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
  }
  if ((this->fields).wentToGameFromUI == 0) {
    (this->fields).fire = 1;
  }
  return;
}


/* Void set_IgnorePickupOwner(Boolean) */

void Assembly-CSharp.dll::InputToInGameAction::InputToInGameAction_set_IgnorePickupOwner
               (InputToInGameAction *this,bool value,MethodInfo *method)

{
  (this->fields).ignorePickupOwner = 1;
  return;
}

