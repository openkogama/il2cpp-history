
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovement::InputToPlayerMovement_HandleInputState
               (InputToPlayerMovement *this,bool fromFrameUpdate,MethodInfo *method)

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
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar3 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
  if (cVar3 == '\0') {
    uVar4 = 0;
    (this->fields).movementMapState = 0;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar5 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
    if (bVar5 == 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_MoveForward,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = 2;
      }
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_MoveBackwards,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_MoveLeft,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_MoveRight,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_Jump,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        uVar4 = uVar4 | 0x10;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
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


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::InputToPlayerMovement::InputToPlayerMovement_get_Direction
                    (Vector3 *__return_storage_ptr__,InputToPlayerMovement *this,MethodInfo *method)

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
                     ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  uStack_2._0_4_ = pVVar1->x;
  uStack_2._4_4_ = pVVar1->y;
  fVar3 = pVVar1->z;
  VVar4 = *pVVar1;
  if (((this->fields).movementMapState & 2) != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,VVar4,*pVVar1,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar1->x;
    uStack_2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
  }
  if (((this->fields).movementMapState & 8) != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    VVar4.z = fVar3;
    VVar4.x = (float)(int)uStack_2;
    VVar4.y = (float)(int)((ulonglong)uStack_2 >> 0x20);
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe8,VVar4,*pVVar1,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar1->x;
    uStack_2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
  }
  if (((this->fields).movementMapState & 1) != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    a.z = fVar3;
    a.x = (float)(undefined4)uStack_2;
    a.y = (float)uStack_2._4_4_;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe8,a,*pVVar1,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar1->x;
    uStack_2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
  }
  if (((this->fields).movementMapState & 4) != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    a_00.z = fVar3;
    a_00.x = (float)(undefined4)uStack_2;
    a_00.y = (float)uStack_2._4_4_;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffe8,a_00,*pVVar1,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar1->x;
    uStack_2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
  }
  __return_storage_ptr__->x = (float)(int)uStack_2;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uStack_2 >> 0x20);
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}

