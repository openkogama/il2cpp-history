
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::
     InputToPlayerMovementAvatarEdit_HandleInputState
               (InputToPlayerMovementAvatarEdit *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  (this->fields).movementMapState = 0;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar2 == 0) {
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveForward,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = 2;
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveBackwards,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 8;
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveLeft,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 1;
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveRight,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      uVar1 = uVar1 | 4;
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_Jump,KeyState__Enum_Pressed,(MethodInfo *)0x0);
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
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->zeroVector).x;
  uVar5 = (pVVar3->zeroVector).y;
  fVar6 = (pVVar3->zeroVector).z;
  __return_storage_ptr__->x = (float)uVar4;
  __return_storage_ptr__->y = (float)uVar5;
  iVar7 = (this->fields).movementMapState;
  __return_storage_ptr__->z = fVar6;
  cVar8 = cRam_?;
  if ((iVar7 & 2) != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      pVVar2 = TypeInfo__UnityEngine__Vector3;
    }
    cVar8 = cRam_?;
    pVVar3 = pVVar2->static_fields;
    uVar9 = (pVVar3->forwardVector).x;
    uVar10 = (pVVar3->forwardVector).y;
    fVar11 = (pVVar3->forwardVector).z;
    __return_storage_ptr__->x = (float)uVar9 + (float)uVar4;
    __return_storage_ptr__->y = (float)uVar10 + (float)uVar5;
    __return_storage_ptr__->z = fVar11 + fVar6;
  }
  if (((this->fields).movementMapState & 8) != 0) {
    uVar12 = __return_storage_ptr__->x;
    uVar13 = __return_storage_ptr__->y;
    fVar6 = __return_storage_ptr__->z;
    if (cVar8 == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      pVVar2 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar3 = pVVar2->static_fields;
    uVar14 = (pVVar3->forwardVector).x;
    uVar15 = (pVVar3->forwardVector).y;
    fVar11 = (pVVar3->forwardVector).z;
    __return_storage_ptr__->x = (float)uVar12 - (float)uVar14;
    __return_storage_ptr__->y = (float)uVar13 - (float)uVar15;
    __return_storage_ptr__->z = fVar6 - fVar11;
  }
  cVar8 = cRam_?;
  if (((this->fields).movementMapState & 1) != 0) {
    uVar16 = __return_storage_ptr__->x;
    uVar17 = __return_storage_ptr__->y;
    fVar6 = __return_storage_ptr__->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      pVVar2 = TypeInfo__UnityEngine__Vector3;
    }
    cVar8 = cRam_?;
    pVVar3 = pVVar2->static_fields;
    uVar18 = (pVVar3->rightVector).x;
    uVar19 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    __return_storage_ptr__->x = (float)uVar16 - (float)uVar18;
    __return_storage_ptr__->y = (float)uVar17 - (float)uVar19;
    __return_storage_ptr__->z = fVar6 - fVar11;
  }
  if (((this->fields).movementMapState & 4) != 0) {
    uVar20 = __return_storage_ptr__->x;
    uVar21 = __return_storage_ptr__->y;
    fVar6 = __return_storage_ptr__->z;
    if (cVar8 == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      pVVar2 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar3 = pVVar2->static_fields;
    uVar22 = (pVVar3->rightVector).x;
    uVar23 = (pVVar3->rightVector).y;
    fVar11 = (pVVar3->rightVector).z;
    __return_storage_ptr__->x = (float)uVar22 + (float)uVar20;
    __return_storage_ptr__->y = (float)uVar23 + (float)uVar21;
    __return_storage_ptr__->z = fVar11 + fVar6;
  }
  return __return_storage_ptr__;
}


/* Boolean get_Jump() */

bool Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::InputToPlayerMovementAvatarEdit_get_Jump
               (InputToPlayerMovementAvatarEdit *this,MethodInfo *method)

{
  return ((this->fields).movementMapState & 0x10) != 0;
}

