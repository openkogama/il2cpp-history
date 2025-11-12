
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovement::InputToPlayerMovement_HandleInputState
               (InputToPlayerMovement *this,bool fromFrameUpdate,MethodInfo *method)

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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    cVar1 = FUN_?(7,TypeInfo__IPlayModeUI);
    if (cVar1 == '\0') {
      (this->fields).movementMapState = 0;
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
      if (bVar2 == 0) {
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
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KogamaControls__Enum_MoveForward,KeyState__Enum_Pressed,(MethodInfo *)0x0
                          );
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
                          (KogamaControls__Enum_MoveBackwards,KeyState__Enum_Pressed,
                           (MethodInfo *)0x0);
        uVar4 = (uint)bVar2 * 2 | 8;
        if (bVar3 == 0) {
          uVar4 = (uint)bVar2 * 2;
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
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KogamaControls__Enum_MoveLeft,KeyState__Enum_Pressed,(MethodInfo *)0x0);
        uVar5 = uVar4 | 1;
        if (bVar2 == 0) {
          uVar5 = uVar4;
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
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KogamaControls__Enum_MoveRight,KeyState__Enum_Pressed,(MethodInfo *)0x0);
        uVar4 = uVar5 | 4;
        if (bVar2 == 0) {
          uVar4 = uVar5;
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
        bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                          (KogamaControls__Enum_Jump,KeyState__Enum_Pressed,(MethodInfo *)0x0);
        uVar5 = uVar4 | 0x10;
        if (bVar2 == 0) {
          uVar5 = uVar4;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
            (IPlayModeUI *)0x0) goto code_?;
        cVar1 = FUN_?(7,TypeInfo__IPlayModeUI);
        if (cVar1 == '\0') {
          uVar4 = (this->fields).frameUpdateMovementMapState;
          if (fromFrameUpdate != 0) {
            (this->fields).frameUpdateMovementMapState = uVar4 | uVar5;
            return;
          }
          (this->fields).frameUpdateMovementMapState = 0;
          (this->fields).movementMapState = uVar4 | (this->fields).movementMapState | uVar5;
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

