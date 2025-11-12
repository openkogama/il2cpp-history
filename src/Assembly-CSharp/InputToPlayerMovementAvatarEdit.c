
/* Void HandleInputState(Boolean) */

void Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::
     InputToPlayerMovementAvatarEdit_HandleInputState
               (InputToPlayerMovementAvatarEdit *this,bool fromFrameUpdate,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).movementMapState = 0;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
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
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveForward,KeyState__Enum_Pressed,(MethodInfo *)0x0);
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
                      (KogamaControls__Enum_MoveBackwards,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    uVar3 = (uint)bVar1 * 2 | 8;
    if (bVar2 == 0) {
      uVar3 = (uint)bVar1 * 2;
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
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveLeft,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    uVar4 = uVar3 | 1;
    if (bVar1 == 0) {
      uVar4 = uVar3;
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
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_MoveRight,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    uVar3 = uVar4 | 4;
    if (bVar1 == 0) {
      uVar3 = uVar4;
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
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_Jump,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    uVar4 = (this->fields).frameUpdateMovementMapState;
    uVar5 = uVar3 | 0x10;
    if (bVar1 == 0) {
      uVar5 = uVar3;
    }
    if (fromFrameUpdate == 0) {
      (this->fields).frameUpdateMovementMapState = 0;
      (this->fields).movementMapState = uVar5 | (this->fields).movementMapState | uVar4;
      return;
    }
    (this->fields).frameUpdateMovementMapState = uVar5 | uVar4;
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
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar2 = cRam_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3;
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  iVar5 = (this->fields).movementMapState;
  uVar6 = (pVVar4->zeroVector).x;
  uVar7 = (pVVar4->zeroVector).y;
  fVar8 = (pVVar4->zeroVector).z;
  __return_storage_ptr__->x = (float)uVar6;
  __return_storage_ptr__->y = (float)uVar7;
  __return_storage_ptr__->z = fVar8;
  if ((iVar5 & 2) != 0) {
    if (cVar2 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cVar2 = '\x01';
      cRam_? = '\x01';
      pVVar3 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar4 = pVVar3->static_fields;
    uVar9 = (pVVar4->forwardVector).x;
    uVar10 = (pVVar4->forwardVector).y;
    fVar11 = (pVVar4->forwardVector).z;
    __return_storage_ptr__->x = (float)uVar6 + (float)uVar9;
    __return_storage_ptr__->y = (float)uVar7 + (float)uVar10;
    __return_storage_ptr__->z = fVar8 + fVar11;
  }
  if (((this->fields).movementMapState & 8) != 0) {
    uVar12 = __return_storage_ptr__->x;
    uVar13 = __return_storage_ptr__->y;
    fVar8 = __return_storage_ptr__->z;
    if (cVar2 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pVVar3 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar4 = pVVar3->static_fields;
    uVar14 = (pVVar4->forwardVector).x;
    uVar15 = (pVVar4->forwardVector).y;
    fVar11 = (pVVar4->forwardVector).z;
    __return_storage_ptr__->x = (float)uVar12 - (float)uVar14;
    __return_storage_ptr__->y = (float)uVar13 - (float)uVar15;
    __return_storage_ptr__->z = fVar8 - fVar11;
  }
  cVar2 = cRam_?;
  if (((this->fields).movementMapState & 1) != 0) {
    uVar16 = __return_storage_ptr__->x;
    uVar17 = __return_storage_ptr__->y;
    fVar8 = __return_storage_ptr__->z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pVVar3 = TypeInfo__UnityEngine__Vector3;
    }
    cVar2 = cRam_?;
    pVVar4 = pVVar3->static_fields;
    uVar18 = (pVVar4->rightVector).x;
    uVar19 = (pVVar4->rightVector).y;
    fVar11 = (pVVar4->rightVector).z;
    __return_storage_ptr__->x = (float)uVar16 - (float)uVar18;
    __return_storage_ptr__->y = (float)uVar17 - (float)uVar19;
    __return_storage_ptr__->z = fVar8 - fVar11;
  }
  if (((this->fields).movementMapState & 4) != 0) {
    uVar20 = __return_storage_ptr__->x;
    uVar21 = __return_storage_ptr__->y;
    fVar8 = __return_storage_ptr__->z;
    if (cVar2 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      pVVar3 = TypeInfo__UnityEngine__Vector3;
    }
    pVVar4 = pVVar3->static_fields;
    uVar22 = (pVVar4->rightVector).x;
    uVar23 = (pVVar4->rightVector).y;
    fVar11 = (pVVar4->rightVector).z;
    __return_storage_ptr__->x = (float)uVar20 + (float)uVar22;
    __return_storage_ptr__->y = (float)uVar21 + (float)uVar23;
    __return_storage_ptr__->z = fVar8 + fVar11;
  }
  return __return_storage_ptr__;
}


/* Boolean get_Jump() */

bool Assembly-CSharp.dll::InputToPlayerMovementAvatarEdit::InputToPlayerMovementAvatarEdit_get_Jump
               (InputToPlayerMovementAvatarEdit *this,MethodInfo *method)

{
  return ((this->fields).movementMapState & 0x10) != 0;
}

