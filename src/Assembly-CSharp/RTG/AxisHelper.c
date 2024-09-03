
/* Vector3 GetWorldAxis(Axis) */

Vector3 * Assembly-CSharp.dll::RTG::AxisHelper::AxisHelper_GetWorldAxis(Vector3 *__return_storage_ptr__,Axis__Enum axis,MethodInfo *method)

{
  if (axis == Axis__Enum_X) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
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
      func_?(&TypeInfo__UnityEngine__Vector3);
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
    func_?(&TypeInfo__UnityEngine__Vector3);
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

Vector3 * Assembly-CSharp.dll::RTG::AxisHelper::AxisHelper_GetWorldAxis_1(Vector3 *__return_storage_ptr__,Axis__Enum axis,AxisSign__Enum axisSign,MethodInfo *method)

{
  if (axis == Axis__Enum_X) {
    if (axisSign == AxisSign__Enum_Positive) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
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
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar4._0_4_ = (pVVar1->rightVector).x;
    uVar4._4_4_ = (pVVar1->rightVector).y;
    fVar3 = (pVVar1->rightVector).z;
  }
  else {
    if (axis == Axis__Enum_Y) {
      pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_6,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar5->x;
      uVar4._4_4_ = pVVar5->y;
      if (axisSign == AxisSign__Enum_Positive) {
        fVar3 = pVVar5->z;
        __return_storage_ptr__->x = (float)(undefined4)uVar4;
        __return_storage_ptr__->y = (float)uVar4._4_4_;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
    }
    else {
      if (axisSign == AxisSign__Enum_Positive) {
        pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_7,(MethodInfo *)0x0);
        fVar2 = pVVar5->y;
        fVar3 = pVVar5->z;
        __return_storage_ptr__->x = pVVar5->x;
        __return_storage_ptr__->y = fVar2;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
      pVVar5 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_6,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar5->x;
      uVar4._4_4_ = pVVar5->y;
    }
    fVar3 = pVVar5->z;
  }
  __return_storage_ptr__->x = (float)(int)(uVar4 ^ 0x8000000080000000);
  __return_storage_ptr__->y = (float)(int)((uVar4 ^ 0x8000000080000000) >> 0x20);
  __return_storage_ptr__->z = -fVar3;
  return __return_storage_ptr__;
}

