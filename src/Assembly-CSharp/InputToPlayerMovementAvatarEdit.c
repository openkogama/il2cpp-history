
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::
     InputToPlayerMovementAvatarEdit_HandleInputState
               (InputToPlayerMovementAvatarEdit *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  (this->fields).movementMapState = 0;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_MoveForward,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = 2;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_MoveBackwards,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_MoveLeft,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_MoveRight,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_Jump,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 0x10;
    }
    (this->fields).frameUpdateMovementMapState = (this->fields).frameUpdateMovementMapState | uVar1;
  }
  return;
}


/* Vector3 get_Direction() */

Vector3 * Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::
          InputToPlayerMovementAvatarEdit_get_Direction
                    (Vector3 *__return_storage_ptr__,InputToPlayerMovementAvatarEdit *this,
                    MethodInfo *method)

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


/* Boolean get_Jump() */

bool Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::InputToPlayerMovementAvatarEdit_get_Jump
               (InputToPlayerMovementAvatarEdit *this,MethodInfo *method)

{
  return (byte)((uint)(this->fields).movementMapState >> 4) & 1;
}

