
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovementAndroid::
     InputToPlayerMovementAndroid_HandleInputState
               (InputToPlayerMovementAndroid *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vertical);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
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
    cVar1 = FUN_?(7);
    if (cVar1 == '\0') {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
      if (bVar2 == 0) {
        if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     _1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = StringLiteral_Vertical;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     _1).field_0x1c == 0) {
          FUN_?();
        }
        fVar4 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_GetAxis_1(pSVar3,0,(MethodInfo *)0x0);
        pSVar3 = StringLiteral_Horizontal;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                     _1).field_0x1c == 0) {
          FUN_?();
        }
        fVar5 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
                CrossPlatformInputManager_GetAxis_1(pSVar3,0,(MethodInfo *)0x0);
        (this->fields).direction.x = (float)(int)(ulonglong)(uint)fVar5;
        (this->fields).direction.y = (float)(int)((ulonglong)(uint)fVar5 >> 0x20);
        (this->fields).direction.z = fVar4;
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
        if (bVar2 == 0) {
          if (fromFrameUpdate != 0) {
            return;
          }
        }
        else {
          if (fromFrameUpdate != 0) {
            (this->fields).jumpFrameUpdate = 1;
            return;
          }
          (this->fields).jumpFixedUpdate = 1;
        }
        bVar2 = 1;
        if ((this->fields).jumpFrameUpdate == 0) {
          bVar2 = (this->fields).jumpFixedUpdate;
        }
        (this->fields).jump = bVar2 != 0;
        (this->fields).jumpFrameUpdate = 0;
        (this->fields).jumpFixedUpdate = 0;
        return;
      }
    }
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* InputToPlayerMovementAndroid() */

void Assembly-CSharp.dll::InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor
               (InputToPlayerMovementAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
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

