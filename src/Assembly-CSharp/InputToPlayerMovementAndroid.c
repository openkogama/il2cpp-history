
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovementAndroid::
     InputToPlayerMovementAndroid_HandleInputState
               (InputToPlayerMovementAndroid *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 == (IPlayModeUI *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = func_?(3,TypeInfo__IPlayModeUI);
  if (cVar3 != '\0') {
    return;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar4 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->vtable)
              .Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
      cctor_started == 0)) {
    func_?();
  }
  fVar5 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
          CrossPlatformInputManager_GetAxis(StringLiteral_Vertical,(MethodInfo *)0x0);
  UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
  CrossPlatformInputManager_GetAxis(StringLiteral_Horizontal,(MethodInfo *)0x0);
  uVar6 = CONCAT44(fVar5,&stack0xffffffe8);
  func_?();
  (this->fields).direction.x = (float)(int)uVar6;
  (this->fields).direction.y = (float)(int)((ulonglong)uVar6 >> 0x20);
  (this->fields).direction.z = 0.0;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                    (KogamaControls__Enum_Jump,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (fromFrameUpdate == 0) {
      (this->fields).jumpFixedUpdate = 1;
      goto code_?;
    }
    (this->fields).jumpFrameUpdate = 1;
  }
  if (fromFrameUpdate != 0) {
    return;
  }
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


/* InputToPlayerMovementAndroid() */

void Assembly-CSharp.dll::InputToPlayerMovementAndroid::InputToPlayerMovementAndroid__ctor
               (InputToPlayerMovementAndroid *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).direction.x = pVVar1->x;
  (this->fields).direction.y = fVar2;
  (this->fields).direction.z = fVar3;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,in_stack_4);
  return;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::InputToPlayerMovementAndroid::
          InputToPlayerMovementAndroid_get_Direction
                    (Vector3 *__return_storage_ptr__,InputToPlayerMovementAndroid *this,
                    MethodInfo *method)

{
  fVar1 = (this->fields).direction.y;
  fVar2 = (this->fields).direction.z;
  __return_storage_ptr__->x = (this->fields).direction.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_Jump() */

bool Assembly-CSharp.dll::InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Jump
               (InputToPlayerMovementAndroid *this,MethodInfo *method)

{
  if (((this->fields).jump == 0) && ((this->fields).jumpFrameUpdate == 0)) {
    return (this->fields).jumpFixedUpdate != 0;
  }
  return 1;
}

