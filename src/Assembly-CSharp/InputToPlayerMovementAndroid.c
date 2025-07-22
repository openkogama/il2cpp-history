
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovementAndroid::
     InputToPlayerMovementAndroid_HandleInputState
               (InputToPlayerMovementAndroid *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Vertical);
    func_?(&StringLiteral_Horizontal);
    cRam_? = '\x01';
  }
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
  cVar3 = func_?(5,TypeInfo__IPlayModeUI,pIVar1);
  if (cVar3 == '\0') {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar4 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
      }
      fVar5 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
      fVar6 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
              CrossPlatformInputManager_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
      (this->fields).direction.x = (float)(int)(ulonglong)(uint)fVar6;
      (this->fields).direction.y = (float)(int)((ulonglong)(uint)fVar6 >> 0x20);
      (this->fields).direction.z = fVar5;
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
      bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                        (KogamaControls__Enum_Jump,KeyState__Enum_Pressed,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        if (fromFrameUpdate == 0) goto code_?;
      }
      else {
        if (fromFrameUpdate == 0) {
          (this->fields).jumpFixedUpdate = 1;
code_?:
          bVar4 = 1;
          if ((this->fields).jumpFrameUpdate == 0) {
            bVar4 = (this->fields).jumpFixedUpdate;
          }
          (this->fields).jump = bVar4 != 0;
          (this->fields).jumpFrameUpdate = 0;
          (this->fields).jumpFixedUpdate = 0;
          return;
        }
        (this->fields).jumpFrameUpdate = 1;
      }
    }
  }
  return;
}


/* InputToPlayerMovementAndroid() */

void Assembly-CSharp.dll::InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor
               (InputToPlayerMovementAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).direction.x = (pVVar1->zeroVector).x;
  (this->fields).direction.y = fVar2;
  (this->fields).direction.z = fVar3;
  return;
}


/* Boolean get_Jump() */

bool Assembly-CSharp.dll::InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Jump
               (InputToPlayerMovementAndroid *this,MethodInfo *method)

{
  if (((this->fields).jump == 0) && ((this->fields).jumpFrameUpdate == 0)) {
    return (this->fields).jumpFixedUpdate;
  }
  return 1;
}

