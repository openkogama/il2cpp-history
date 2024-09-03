
/* Single ConvertTo2DRotation(Quaternion) */

float Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_ConvertTo2DRotation
                (Quaternion quat,MethodInfo *method)

{
  VStack_1.z = 0.0;
  fStack_2 = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_ToAxisAngleRad
            (quat,&VStack_1,&fStack_2,(MethodInfo *)0x0);
  fStack_2 = fStack_2 * _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->forwardVector).x;
  uVar5 = (pVVar3->forwardVector).y;
  if (VStack_1.y * (float)uVar5 + VStack_1.x * (float)uVar4 +
      VStack_1.z * (pVVar3->forwardVector).z < 0.0) {
    fStack_2 = (float)((uint)fStack_2 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  }
  return fStack_2;
}


/* Quaternion FromToRotation2D(Vector2, Vector2) */

Quaternion *
Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_FromToRotation2D
          (Quaternion *__return_storage_ptr__,Vector2 from,Vector2 to,MethodInfo *method)

{
  uVar1 = func_?();
  fVar2 = (float)((ulonglong)uVar1 >> 0x20);
  fVar3 = (float)uVar1;
  uVar1 = func_?();
  fVar4 = (float)((ulonglong)uVar1 >> 0x20);
  fVar5 = (float)uVar1;
  fVar6 = fVar3 * fVar5 + fVar2 * fVar4;
  if (_UNK_? - fVar6 < _UNK_?) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar3 = (pQVar7->identityQuaternion).y;
    fVar5 = (pQVar7->identityQuaternion).z;
    fVar2 = (pQVar7->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar7->identityQuaternion).x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar2;
    return __return_storage_ptr__;
  }
  if (_UNK_? <= fVar6 + _UNK_?) {
    value.y = fVar5 * 0.0 - fVar3 * 0.0;
    value.x = fVar2 * 0.0 - fVar4 * 0.0;
    value.z = fVar3 * fVar4 - fVar5 * fVar2;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
    uVar1._0_4_ = pVVar8->x;
    uVar1._4_4_ = pVVar8->y;
    fVar3 = _UNK_?;
    if (fVar6 <= _UNK_?) {
      fVar3 = fVar6;
    }
    fVar5 = pVVar8->z;
    method_00 = (MethodInfo *)0x0;
    fVar2 = _UNK_?;
    if (_UNK_? <= fVar3) {
      fVar2 = fVar3;
    }
    dVar9 = (double)fVar2;
    func_?();
    axis.z = fVar5;
    axis.x = (float)uVar1;
    axis.y = SUB84(uVar1,4);
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffec,(float)dVar9 * _UNK_?,axis,method_00);
    fVar3 = pQVar10->y;
    fVar5 = pQVar10->z;
    fVar2 = pQVar10->w;
    __return_storage_ptr__->x = pQVar10->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar2;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,180.0,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar3 = pQVar10->y;
  fVar5 = pQVar10->z;
  fVar2 = pQVar10->w;
  __return_storage_ptr__->x = pQVar10->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar2;
  return __return_storage_ptr__;
}


/* Quaternion FromToRotation3D(Vector3, Vector3, Vector3) */

Quaternion *
Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_FromToRotation3D
          (Quaternion *__return_storage_ptr__,Vector3 from,Vector3 to,Vector3 perp180,
          MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xfffffff0,from,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  value_00.y = to.y;
  value_00.x = to.x;
  value_00.z = to.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xfffffff0,value_00,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  to.z = pVVar1->z;
  fVar7 = (float)uVar3 * (float)uVar6 + (float)uVar2 * (float)uVar5 + fVar4 * to.z;
  to.x = (float)uVar5;
  to.y = (float)uVar6;
  if (_UNK_? - fVar7 < _UNK_?) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar8->identityQuaternion).y;
    fVar7 = (pQVar8->identityQuaternion).z;
    fVar9 = (pQVar8->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar8->identityQuaternion).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar7;
    __return_storage_ptr__->w = fVar9;
    return __return_storage_ptr__;
  }
  if (_UNK_? <= fVar7 + _UNK_?) {
    uVar10 = pVVar1->x;
    uVar11 = pVVar1->y;
    pQVar12 = (Quaternion *)((float)uVar3 * to.z - fVar4 * (float)uVar11);
    fVar7 = (float)uVar2 * to.z;
    to.z = (float)uVar2 * (float)uVar11 - (float)uVar3 * (float)uVar10;
    value.y = fVar4 * (float)uVar10 - fVar7;
    value.x = (float)pQVar12;
    value.z = to.z;
    to.x = (float)uVar10;
    to.y = (float)uVar11;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&to,value,(MethodInfo *)0x0);
    uVar13 = pVVar1->x;
    uVar14 = pVVar1->y;
    fVar4 = _UNK_?;
    if (0.0 <= _UNK_?) {
      fVar4 = 0.0;
    }
    fVar7 = pVVar1->z;
    fVar9 = _UNK_?;
    if (_UNK_? <= fVar4) {
      fVar9 = fVar4;
    }
    dVar15 = (double)fVar9;
    to.x = (float)&UNK_?;
    to.y = (float)uVar13;
    to.z = (float)uVar14;
    func_?();
    to.x = (float)dVar15 * _UNK_?;
    axis.y = to.z;
    axis.x = to.y;
    axis.z = fVar7;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffec,to.x,axis,(MethodInfo *)0x0);
    fVar4 = pQVar16->y;
    fVar7 = pQVar16->z;
    fVar9 = pQVar16->w;
    pQVar12->x = pQVar16->x;
    pQVar12->y = fVar4;
    pQVar12->z = fVar7;
    pQVar12->w = fVar9;
    return pQVar12;
  }
  __return_storage_ptr__ = (Quaternion *)perp180.x;
  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffec,180.0,perp180,(MethodInfo *)0x0);
  fVar4 = pQVar12->y;
  fVar7 = pQVar12->z;
  fVar9 = pQVar12->w;
  __return_storage_ptr__->x = pQVar12->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar7;
  __return_storage_ptr__->w = fVar9;
  return __return_storage_ptr__;
}


/* Quaternion GetRelativeRotation(Quaternion, Quaternion) */

Quaternion *
Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_GetRelativeRotation
          (Quaternion *__return_storage_ptr__,Quaternion from,Quaternion to,MethodInfo *method)

{
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Inverse
                     (aQStack_2,from,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  fVar7 = pQVar1->x;
  fVar8 = pQVar1->x;
  __return_storage_ptr__->x = (to.x * fVar6 + to.w * fVar3 + to.z * fVar4) - to.y * fVar5;
  __return_storage_ptr__->y = (to.y * fVar6 + to.w * fVar4 + to.x * fVar5) - to.z * fVar7;
  __return_storage_ptr__->z = (to.w * fVar5 + to.z * fVar6 + to.y * fVar8) - to.x * fVar4;
  __return_storage_ptr__->w = ((to.w * fVar6 - to.x * fVar3) - to.y * fVar4) - to.z * fVar5;
  return __return_storage_ptr__;
}


/* Single Length(Quaternion) */

float Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_Length
                (Quaternion quat,MethodInfo *method)

{
  dVar1 = (double)(quat.x * quat.x + quat.y * quat.y + quat.z * quat.z + quat.w * quat.w);
  if (0.0 <= dVar1) {
    return (float)SQRT(dVar1);
  }
  func_?();
  return (float)dVar1;
}


/* Quaternion Normalize(Quaternion) */

Quaternion *
Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_Normalize
          (Quaternion *__return_storage_ptr__,Quaternion quat,MethodInfo *method)

{
  dVar1 = (double)(quat.y * quat.y + quat.x * quat.x + quat.z * quat.z + quat.w * quat.w);
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if (_UNK_? <= (float)dVar1) {
    fVar2 = _UNK_? / (float)dVar1;
    __return_storage_ptr__->x = fVar2 * quat.x;
    __return_storage_ptr__->y = fVar2 * quat.y;
    __return_storage_ptr__->z = fVar2 * quat.z;
    __return_storage_ptr__->w = fVar2 * quat.w;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = quat.x;
  __return_storage_ptr__->y = quat.y;
  __return_storage_ptr__->z = quat.z;
  __return_storage_ptr__->w = quat.w;
  return __return_storage_ptr__;
}


/* Void RotatePoints(Quaternion, List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_RotatePoints
               (Quaternion quat,List_1_UnityEngine_Vector3_ *points,Vector3 pivot,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  for (; index < (points->fields)._size; index = index + 1) {
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffc0,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)points,index,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                       );
    uVar3 = pVVar2->alias;
    uVar4 = pVVar2->path;
    point.y = (float)uVar4 - pivot.y;
    point.x = (float)uVar3 - pivot.x;
    point.z = (float)pVVar2->asset - pivot.z;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffb4,quat,point,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    value.FirstAxisSign = (int32_t)(pivot.y + (float)uVar7);
    value.Quadrant = (int32_t)(pivot.x + (float)uVar6);
    value.SecondAxisSign = (int32_t)(pivot.z + pVVar5->z);
    mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
    List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__set_Item
              ((List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)points,index,value,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
              );
  }
  return;
}

