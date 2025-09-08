
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
  uVar2 = func_?();
  fVar3 = (float)((ulonglong)uVar2 >> 0x20);
  fVar4 = (float)uVar2;
  fVar5 = (float)uVar1 * fVar4 + SUB84(uVar1,4) * fVar3;
  if (_UNK_? - fVar5 < _UNK_?) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar6 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar4 = (pQVar6->identityQuaternion).y;
    fVar3 = (pQVar6->identityQuaternion).z;
    fVar5 = (pQVar6->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar6->identityQuaternion).x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  if (_UNK_? <= fVar5 + _UNK_?) {
    fVar5 = MathEx::MathEx_SafeAcos(fVar5,(MethodInfo *)0x0);
    value.y = fVar4 * 0.0 - (float)uVar1 * 0.0;
    value.x = SUB84(uVar1,4) * 0.0 - fVar3 * 0.0;
    value.z = (float)uVar1 * fVar3 - fVar4 * SUB84(uVar1,4);
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffec,fVar5 * _UNK_?,*pVVar7,
                        (MethodInfo *)0x0);
    fRam00000000 = pQVar8->x;
    fRam00000004 = pQVar8->y;
    fRam00000008 = pQVar8->z;
    fRam0000000c = pQVar8->w;
    return (Quaternion *)0x0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,180.0,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar4 = pQVar8->y;
  fVar3 = pQVar8->z;
  fVar5 = pQVar8->w;
  __return_storage_ptr__->x = pQVar8->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Quaternion FromToRotation3D(Vector3, Vector3, Vector3) */

Quaternion *
Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_FromToRotation3D
          (Quaternion *__return_storage_ptr__,Vector3 from,Vector3 to,Vector3 perp180,
          MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffec,from,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  from.z = pVVar1->z;
  from.x = (float)uVar2;
  from.y = (float)uVar3;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe0,to,(MethodInfo *)0x0);
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  fVar7 = from.y * (float)uVar5 + from.x * (float)uVar4 + from.z * fVar6;
  if (_UNK_? - fVar7 < _UNK_?) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fVar6 = (pQVar8->identityQuaternion).y;
    fVar7 = (pQVar8->identityQuaternion).z;
    fVar9 = (pQVar8->identityQuaternion).w;
    __return_storage_ptr__->x = (pQVar8->identityQuaternion).x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar7;
    __return_storage_ptr__->w = fVar9;
    return __return_storage_ptr__;
  }
  if (_UNK_? <= fVar7 + _UNK_?) {
    MathEx::MathEx_SafeAcos(fVar7,(MethodInfo *)0x0);
    fVar7 = (float)uVar5 * from.z;
    fVar9 = fVar6 * from.x;
    fVar10 = (float)uVar4 * from.z;
    from.z = (float)uVar5 * from.x - (float)uVar4 * from.y;
    from.x = 0.0;
    __return_storage_ptr__ = (Quaternion *)from.z;
    fVar11 = fVar10 - fVar9;
    pVVar1 = &from;
    value.x = fVar6 * from.y - fVar7;
    value = (Vector3)CONCAT84(uVar12,value.x);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (pVVar1,value,(MethodInfo *)0x0);
    uVar14 = pVVar13->x;
    from.y = (float)pVVar1 * _UNK_?;
    from.x = (float)&stack0xffffffdc;
    from.z = (float)uVar14;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)from.x,from.y,*pVVar13,(MethodInfo *)0x0);
    _UNK_? = pQVar15->x;
    _UNK_? = pQVar15->y;
    _UNK_? = pQVar15->z;
    _UNK_? = pQVar15->w;
    return (Quaternion *)&UNK_?;
  }
  pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                      ((Quaternion *)&stack0xffffffdc,180.0,perp180,(MethodInfo *)0x0);
  fVar6 = pQVar15->y;
  fVar7 = pQVar15->z;
  fVar9 = pQVar15->w;
  __return_storage_ptr__->x = pQVar15->x;
  __return_storage_ptr__->y = fVar6;
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
  __return_storage_ptr__->x = (to.w * fVar3 + to.x * fVar6 + to.z * fVar4) - to.y * fVar5;
  __return_storage_ptr__->y = (to.y * fVar6 + to.w * fVar4 + to.x * fVar5) - to.z * fVar7;
  __return_storage_ptr__->z = (to.w * fVar5 + to.z * fVar6 + to.y * fVar8) - to.x * fVar4;
  __return_storage_ptr__->w = ((to.w * fVar6 - to.x * fVar3) - to.y * fVar4) - to.z * fVar5;
  return __return_storage_ptr__;
}


/* Single Length(Quaternion) */

float Assembly-CSharp.dll::RTG::QuaternionEx::QuaternionEx_Length
                (Quaternion quat,MethodInfo *method)

{
  dVar1 = (double)(quat.y * quat.y + quat.x * quat.x + quat.z * quat.z + quat.w * quat.w);
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

