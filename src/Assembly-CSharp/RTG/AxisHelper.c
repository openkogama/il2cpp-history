
/* Vector3 GetWorldAxis(Axis) */

Vector3 * Assembly-CSharp.dll::RTG::AxisHelper::AxisHelper_GetWorldAxis
                    (Vector3 *__return_storage_ptr__,Axis__Enum axis,MethodInfo *method)

{
  if (axis == Axis__Enum_X) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->rightVector).y;
    fVar3 = (pVVar1->rightVector).z;
    __return_storage_ptr__->x = (pVVar1->rightVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  if (axis != Axis__Enum_Y) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar2 = (pVVar1->forwardVector).y;
    fVar3 = (pVVar1->forwardVector).z;
    __return_storage_ptr__->x = (pVVar1->forwardVector).x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  __return_storage_ptr__->x = (pVVar1->upVector).x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 GetWorldAxis(Axis, AxisSign) */

Vector3 * Assembly-CSharp.dll::RTG::AxisHelper::AxisHelper_GetWorldAxis_1
                    (Vector3 *__return_storage_ptr__,Axis__Enum axis,AxisSign__Enum axisSign,
                    MethodInfo *method)

{
  if (axis == Axis__Enum_X) {
    if (axisSign == AxisSign__Enum_Positive) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar1->rightVector).y;
      fVar3 = (pVVar1->rightVector).z;
      __return_storage_ptr__->x = (pVVar1->rightVector).x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4 = (pVVar1->rightVector).x;
    fVar3 = (pVVar1->rightVector).y;
    fVar2 = (pVVar1->rightVector).z;
    uVar5 = uVar4;
  }
  else if (axis == Axis__Enum_Y) {
    if (axisSign == AxisSign__Enum_Positive) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar1->upVector).y;
      fVar3 = (pVVar1->upVector).z;
      __return_storage_ptr__->x = (pVVar1->upVector).x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar1->upVector).x;
    fVar3 = (pVVar1->upVector).y;
    fVar2 = (pVVar1->upVector).z;
    uVar5 = uVar6;
  }
  else {
    if (axisSign == AxisSign__Enum_Positive) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar1->forwardVector).y;
      fVar3 = (pVVar1->forwardVector).z;
      __return_storage_ptr__->x = (pVVar1->forwardVector).x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5 = (uint)(pVVar1->forwardVector).x;
    fVar3 = (pVVar1->forwardVector).y;
    fVar2 = (pVVar1->forwardVector).z;
  }
  uVar7 = (uint)fVar3 ^ _UNK_?;
  fVar2 = (float)((uint)fVar2 ^ _UNK_?);
  __return_storage_ptr__->x = (float)(uVar5 ^ _UNK_?);
  __return_storage_ptr__->y = (float)uVar7;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}

