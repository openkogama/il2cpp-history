
/* Void HandleInputState() */

void Assembly-CSharp.dll::InputToInGameAction::InputToInGameAction_HandleInputState
               (InputToInGameAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  (this->fields).use = 0;
  (this->fields).fire = 0;
  (this->fields).drop = 0;
  (this->fields).holster = 0;
  (this->fields).ignorePickupOwner = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar1 == (IPlayModeUI *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
    if (cVar3 != '\0') {
      return;
    }
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
                    (KogamaControls__Enum_Use,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    (this->fields).use = 1;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
                    (KogamaControls__Enum_DropCurrentItem,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    (this->fields).drop = 1;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
                    (KogamaControls__Enum_Holster,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    (this->fields).holster = 1;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Fire,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_Fire,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
  }
  (this->fields).fire = 1;
  return;
}

