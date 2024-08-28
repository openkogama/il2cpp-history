
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovement::InputToPlayerMovement_HandleInputState
               (InputToPlayerMovement *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 == (IPlayModeUI *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
  if (cVar3 == '\0') {
    uVar4 = 0;
    (this->fields).movementMapState = 0;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar5 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
    if (bVar5 == 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_MoveForward,KeyState__Enum_Pressed,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = 2;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_MoveBackwards,KeyState__Enum_Pressed,(MethodInfo *)0x0
                        );
      if (bVar5 != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_MoveLeft,KeyState__Enum_Pressed,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_MoveRight,KeyState__Enum_Pressed,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVInputWrapper);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_Jump,KeyState__Enum_Pressed,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 0x10;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar1 == (IPlayModeUI *)0x0) goto code_?;
      cVar3 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
      if (cVar3 == '\0') {
        uVar4 = (this->fields).frameUpdateMovementMapState | uVar4;
        if (fromFrameUpdate != 0) {
          (this->fields).frameUpdateMovementMapState = uVar4;
          return;
        }
        piVar6 = &(this->fields).movementMapState;
        *piVar6 = *piVar6 | uVar4;
        (this->fields).frameUpdateMovementMapState = 0;
      }
    }
  }
  return;
}

