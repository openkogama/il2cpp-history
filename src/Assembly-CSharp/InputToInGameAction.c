
/* Void HandleInputState() */

void Assembly-CSharp.dll::InputToInGameAction::InputToInGameAction_HandleInputState
               (InputToInGameAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).use = 0;
  (this->fields).fire = 0;
  (this->fields).drop = 0;
  (this->fields).holster = 0;
  (this->fields).ignorePickupOwner = 0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIVar1 == (IPlayModeUI *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
    if (cVar3 != '\0') {
      return;
    }
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Use,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    (this->fields).use = 1;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_DropCurrentItem,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    (this->fields).drop = 1;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                    (KogamaControls__Enum_Holster,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    (this->fields).holster = 1;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_Fire,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_Fire,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
  }
  (this->fields).fire = 1;
  return;
}


/* Boolean get_Holster() */

bool Assembly-CSharp.dll::InputToInGameAction::InputToInGameAction_get_Holster
               (InputToInGameAction *this,MethodInfo *method)

{
  return (this->fields).holster;
}


/* Void set_Fire(Boolean) */

void Assembly-CSharp.dll::InputToInGameAction::InputToInGameAction_set_Fire
               (InputToInGameAction *this,bool value,MethodInfo *method)

{
  (this->fields).fire = value;
  return;
}

