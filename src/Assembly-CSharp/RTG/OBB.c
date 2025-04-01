
/* Void Encapsulate(OBB) */

void Assembly-CSharp.dll::RTG::OBB::OBB_Encapsulate(OBB *this,OBB otherOBB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  boxCenter.z = otherOBB._center.z;
  boxCenter.x = otherOBB._center.x;
  boxCenter.y = otherOBB._center.y;
  boxSize.z = otherOBB._size.z;
  boxSize.x = otherOBB._size.x;
  boxSize.y = otherOBB._size.y;
  boxRotation.y = otherOBB._rotation.y;
  boxRotation.x = otherOBB._rotation.x;
  boxRotation.z = otherOBB._rotation.z;
  boxRotation.w = otherOBB._rotation.w;
  pLVar1 = BoxMath::BoxMath_CalcBoxCornerPoints(boxCenter,boxSize,boxRotation,(MethodInfo *)0x0);
  uVar2 = (this->_center).x;
  uVar3 = (this->_center).y;
  fVar4 = (this->_center).z;
  fVar5 = (this->_rotation).x;
  fVar6 = (this->_rotation).y;
  fVar7 = (this->_rotation).z;
  fVar8 = (this->_rotation).w;
  otherOBB._rotation.w = (float)uVar2;
  otherOBB._40_4_ = uVar3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pos.y = (float)otherOBB._40_4_;
  pos.x = otherOBB._rotation.w;
  pos.z = fVar4;
  q.y = fVar6;
  q.x = fVar5;
  q.z = fVar7;
  q.w = fVar8;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
            ((Matrix4x4 *)&stack0xffffff50,pos,q,
             TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                      ((Matrix4x4 *)&stack0xffffff50,(Matrix4x4 *)&stack0xffffff90,(MethodInfo *)0x0
                      );
  pLVar1 = Matrix4x4Ex::Matrix4x4Ex_TransformPoints(*pMVar9,pLVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  fVar5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  VStack_10.z = (this->_size).z;
  VStack_10.x = (this->_size).x;
  VStack_10.y = (this->_size).y;
  puVar11 = &UNK_?;
  AABB::AABB_Encapsulate_1
            ((AABB *)&VStack_10,(IEnumerable_1_UnityEngine_Vector3_ *)pLVar1,(MethodInfo *)0x0);
  fVar6 = (this->_rotation).z;
  VStack_10.z = (float)&UNK_?;
  rotation.z._1_2_ = (short)((uint)fVar6 >> 8);
  rotation._0_9_ = *(unkbyte9 *)&this->_rotation;
  rotation.z._3_1_ = (char)((uint)fVar6 >> 0x18);
  rotation.w = (this->_rotation).w;
  point.y = fVar5;
  point.x = fVar4;
  point.z = (float)puVar11;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&otherOBB._rotation.z,rotation,point,(MethodInfo *)0x0);
  uVar13 = pVVar12->x;
  uVar14 = pVVar12->y;
  fVar4 = pVVar12->z;
  uVar15 = (this->_center).x;
  uVar16 = (this->_center).y;
  fVar5 = (this->_center).z;
  (this->_center).x = (float)uVar15 + (float)uVar13;
  (this->_center).y = (float)uVar16 + (float)uVar14;
  (this->_center).z = fVar5 + fVar4;
  (this->_size).x = VStack_10.x;
  (this->_size).y = VStack_10.y;
  (this->_size).z = VStack_10.z;
  return;
}


/* List`1[UnityEngine.Vector3] GetCenterAndCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::OBB::OBB_GetCenterAndCornerPoints(OBB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = OBB_GetCornerPoints(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    uVar2._0_4_ = (this->_center).x;
    uVar2._4_4_ = (this->_center).y;
    func_?(pLVar1,uVar2,(this->_center).z,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    return pLVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector3_ *)(*pcVar3)();
  return pLVar1;
}


/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,OBB *this,Vector3 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  boxRotation = this->_rotation;
  boxCenter = this->_center;
  boxSize = this->_size;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  point_00.z = point.z;
  point_00.x = point.x;
  point_00.y = point.y;
  pVVar1 = BoxMath::BoxMath_CalcBoxPtClosestToPt
                     (&point,point_00,boxCenter,boxSize,boxRotation,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetCornerPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::OBB::OBB_GetCornerPoints(OBB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  boxRotation = this->_rotation;
  boxCenter = this->_center;
  boxSize = this->_size;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  pLVar1 = BoxMath::BoxMath_CalcBoxCornerPoints(boxCenter,boxSize,boxRotation,(MethodInfo *)0x0);
  return pLVar1;
}


/* OBB GetInvalid() */

OBB * Assembly-CSharp.dll::RTG::OBB::OBB_GetInvalid(OBB *__return_storage_ptr__,MethodInfo *method)

{
  func_?(__return_storage_ptr__,0,0x2c);
  return __return_storage_ptr__;
}


/* Vector3 GetPointFaceNormal(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_GetPointFaceNormal
                    (Vector3 *__return_storage_ptr__,OBB *this,Vector3 pointOnFace,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->zeroVector).x;
  uVar3 = (pVVar1->zeroVector).y;
  fVar4 = (pVVar1->zeroVector).z;
  q = this->_rotation;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pos.y = (float)uVar3;
  pos.x = (float)uVar2;
  pos.z = fVar4;
  pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                      ((Matrix4x4 *)&stack0xffffff84,pos,q,
                       TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  pVVar6 = Matrix4x4Ex::Matrix4x4Ex_GetNormalizedAxes(*pMVar5,(MethodInfo *)0x0);
  uVar7 = (this->_size).x;
  uVar8 = (this->_size).y;
  fVar9 = (float)uVar7 * _UNK_?;
  fVar10 = (float)uVar8 * _UNK_?;
  fVar11 = (this->_size).z * _UNK_?;
  uVar12 = (this->_center).x;
  uVar13 = (this->_center).y;
  ppVVar14 = (Vector3__Class **)(pointOnFace.x - (float)uVar12);
  fVar4 = pointOnFace.y - (float)uVar13;
  pointOnFace.z = pointOnFace.z - (this->_center).z;
  if (cRam_? == '\0') {
    ppVVar14 = &TypeInfo__UnityEngine__Vector3;
    func_?();
    cRam_? = '\x01';
  }
  uVar15 = 0;
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_16._0_4_ = (pVVar1->zeroVector).x;
  uStack_16._4_4_ = (pVVar1->zeroVector).y;
  fVar17 = (pVVar1->zeroVector).z;
  uVar18 = _UNK_?;
  puVar19 = _UNK_?;
  fVar20 = _UNK_?;
  while (pVVar6 != (Vector3__Array *)0x0) {
    if (pVVar6->max_length <= uVar15) goto code_?;
    uVar21 = pVVar6->vector[uVar15].x;
    uVar22 = pVVar6->vector[uVar15].y;
    f = (float)uVar22 * fVar4 + (float)uVar21 * (float)ppVVar14 +
        pVVar6->vector[uVar15].z * pointOnFace.z;
    fVar23 = fVar9;
    if (((uVar15 != 0) && (fVar23 = fVar10, uVar15 != 1)) && (fVar23 = fVar11, uVar15 != 2))
    goto code_?;
    if ((float)((uint)((float)((uint)f & uVar18) - fVar23) & uVar18) < (float)puVar19) {
      fVar17 = pVVar6->vector[uVar15].z;
      uStack_16._0_4_ = pVVar6->vector[uVar15].x;
      uStack_16._4_4_ = pVVar6->vector[uVar15].y;
      ppVVar14 = (Vector3__Class **)0x0;
      puVar19 = &UNK_?;
      fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Sign(f,(MethodInfo *)0x0);
      uVar18 = _UNK_?;
    }
    uVar15 = uVar15 + 1;
    if (2 < (int)uVar15) {
      pointOnFace.z = fVar17 * fVar20;
      value.y = uStack_16._4_4_ * fVar20;
      value.x = (float)uStack_16 * fVar20;
      value.z = pointOnFace.z;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&pointOnFace,value,(MethodInfo *)0x0);
      fVar9 = pVVar24->y;
      fVar4 = pVVar24->z;
      __return_storage_ptr__->x = pVVar24->x;
      __return_storage_ptr__->y = fVar9;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
code_?:
  func_?();
  this_00 = (IndexOutOfRangeException *)func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  func_?();
  func_?();
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  pVVar24 = (Vector3 *)(*pcVar25)();
  return pVVar24;
}


/* Matrix4x4 GetUnitBoxTransform() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::OBB::OBB_GetUnitBoxTransform
          (Matrix4x4 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  if (this->_isValid != 0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                       (&MStack_2,this->_center,this->_rotation,this->_size,(MethodInfo *)0x0);
    fVar3 = pMVar1->m10;
    fVar4 = pMVar1->m20;
    fVar5 = pMVar1->m30;
    __return_storage_ptr__->m00 = pMVar1->m00;
    __return_storage_ptr__->m10 = fVar3;
    __return_storage_ptr__->m20 = fVar4;
    __return_storage_ptr__->m30 = fVar5;
    fVar3 = pMVar1->m11;
    fVar4 = pMVar1->m21;
    fVar5 = pMVar1->m31;
    __return_storage_ptr__->m01 = pMVar1->m01;
    __return_storage_ptr__->m11 = fVar3;
    __return_storage_ptr__->m21 = fVar4;
    __return_storage_ptr__->m31 = fVar5;
    fVar3 = pMVar1->m12;
    fVar4 = pMVar1->m22;
    fVar5 = pMVar1->m32;
    __return_storage_ptr__->m02 = pMVar1->m02;
    __return_storage_ptr__->m12 = fVar3;
    __return_storage_ptr__->m22 = fVar4;
    __return_storage_ptr__->m32 = fVar5;
    fVar3 = pMVar1->m13;
    fVar4 = pMVar1->m23;
    fVar5 = pMVar1->m33;
    __return_storage_ptr__->m03 = pMVar1->m03;
    __return_storage_ptr__->m13 = fVar3;
    __return_storage_ptr__->m23 = fVar4;
    __return_storage_ptr__->m33 = fVar5;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Matrix4x4);
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__UnityEngine__Matrix4x4->static_fields;
  fVar3 = (pMVar6->identityMatrix).m10;
  fVar4 = (pMVar6->identityMatrix).m20;
  fVar5 = (pMVar6->identityMatrix).m30;
  __return_storage_ptr__->m00 = (pMVar6->identityMatrix).m00;
  __return_storage_ptr__->m10 = fVar3;
  __return_storage_ptr__->m20 = fVar4;
  __return_storage_ptr__->m30 = fVar5;
  fVar3 = (pMVar6->identityMatrix).m11;
  fVar4 = (pMVar6->identityMatrix).m21;
  fVar5 = (pMVar6->identityMatrix).m31;
  __return_storage_ptr__->m01 = (pMVar6->identityMatrix).m01;
  __return_storage_ptr__->m11 = fVar3;
  __return_storage_ptr__->m21 = fVar4;
  __return_storage_ptr__->m31 = fVar5;
  fVar3 = (pMVar6->identityMatrix).m12;
  fVar4 = (pMVar6->identityMatrix).m22;
  fVar5 = (pMVar6->identityMatrix).m32;
  __return_storage_ptr__->m02 = (pMVar6->identityMatrix).m02;
  __return_storage_ptr__->m12 = fVar3;
  __return_storage_ptr__->m22 = fVar4;
  __return_storage_ptr__->m32 = fVar5;
  fVar3 = (pMVar6->identityMatrix).m13;
  fVar4 = (pMVar6->identityMatrix).m23;
  fVar5 = (pMVar6->identityMatrix).m33;
  __return_storage_ptr__->m03 = (pMVar6->identityMatrix).m03;
  __return_storage_ptr__->m13 = fVar3;
  __return_storage_ptr__->m23 = fVar4;
  __return_storage_ptr__->m33 = fVar5;
  return __return_storage_ptr__;
}


/* Void Inflate(Single) */

void Assembly-CSharp.dll::RTG::OBB::OBB_Inflate(OBB *this,float amount,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_size).y;
  fVar3 = (this->_size).z;
  (this->_size).x = (float)uVar1 + amount;
  (this->_size).y = (float)uVar2 + amount;
  (this->_size).z = fVar3 + amount;
  return;
}


/* Boolean IntersectsOBB(OBB) */

bool Assembly-CSharp.dll::RTG::OBB::OBB_IntersectsOBB(OBB *this,OBB otherOBB,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  center0 = this->_center;
  size0 = this->_size;
  rotation0 = this->_rotation;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  bVar1 = BoxMath::BoxMath_BoxIntersectsBox
                    (center0,size0,rotation0,otherOBB._center,otherOBB._size,otherOBB._rotation,
                     (MethodInfo *)0x0);
  return bVar1;
}


/* Boolean IntersectsSphere(Sphere) */

bool Assembly-CSharp.dll::RTG::OBB::OBB_IntersectsSphere(OBB *this,Sphere sphere,MethodInfo *method)

{
  pVVar1 = OBB_GetClosestPoint((Vector3 *)&puStack_2,this,sphere._center,(MethodInfo *)0x0);
  bVar3 = Sphere::Sphere_ContainsPoint(&sphere,*pVVar1,(MethodInfo *)0x0);
  return bVar3;
}


/* OBB(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor
               (OBB *this,Vector3 center,Vector3 size,MethodInfo *method)

{
  (this->_center).x = center.x;
  (this->_center).y = center.y;
  (this->_center).z = center.z;
  (this->_size).x = size.x;
  (this->_size).y = size.y;
  (this->_size).z = size.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  this->_isValid = 1;
  (this->_rotation).x = fVar2;
  (this->_rotation).y = fVar3;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar5;
  return;
}


/* OBB(Vector3, Vector3, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_1
               (OBB *this,Vector3 center,Vector3 size,Quaternion rotation,MethodInfo *method)

{
  (this->_center).x = center.x;
  (this->_center).y = center.y;
  (this->_size).x = size.x;
  (this->_size).y = size.y;
  (this->_center).z = center.z;
  (this->_size).z = size.z;
  (this->_rotation).x = rotation.x;
  (this->_rotation).y = rotation.y;
  (this->_rotation).z = rotation.z;
  (this->_rotation).w = rotation.w;
  this->_isValid = 1;
  return;
}


/* OBB(Vector3, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_2
               (OBB *this,Vector3 center,Quaternion rotation,MethodInfo *method)

{
  (this->_center).x = center.x;
  (this->_center).y = center.y;
  (this->_center).z = center.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_size).x = (pVVar1->zeroVector).x;
  (this->_size).y = fVar2;
  (this->_size).z = fVar3;
  this->_isValid = 1;
  (this->_rotation).x = rotation.x;
  (this->_rotation).y = rotation.y;
  (this->_rotation).z = rotation.z;
  (this->_rotation).w = rotation.w;
  return;
}


/* OBB(Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_3(OBB *this,Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_center).x = (pVVar1->zeroVector).x;
  (this->_center).y = fVar2;
  (this->_center).z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->_size).x = (pVVar1->zeroVector).x;
  (this->_size).y = fVar2;
  (this->_size).z = fVar3;
  this->_isValid = 1;
  (this->_rotation).x = rotation.x;
  (this->_rotation).y = rotation.y;
  (this->_rotation).z = rotation.z;
  (this->_rotation).w = rotation.w;
  return;
}


/* OBB(Bounds, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_4
               (OBB *this,Bounds bounds,Quaternion rotation,MethodInfo *method)

{
  fVar1 = _UNK_?;
  (this->_center).x = bounds.m_Center.x;
  (this->_center).y = bounds.m_Center.y;
  (this->_center).z = bounds.m_Center.z;
  (this->_size).x = bounds.m_Extents.x * fVar1;
  (this->_size).y = bounds.m_Extents.y * fVar1;
  (this->_size).z = bounds.m_Extents.z * fVar1;
  (this->_rotation).x = rotation.x;
  (this->_rotation).y = rotation.y;
  (this->_rotation).z = rotation.z;
  (this->_rotation).w = rotation.w;
  this->_isValid = 1;
  return;
}


/* OBB(AABB) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_5(OBB *this,AABB aabb,MethodInfo *method)

{
  (this->_center).x = aabb._center.x;
  (this->_center).y = aabb._center.y;
  (this->_center).z = aabb._center.z;
  (this->_size).x = aabb._size.x;
  (this->_size).y = aabb._size.y;
  (this->_size).z = aabb._size.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar2 = (pQVar1->identityQuaternion).x;
  fVar3 = (pQVar1->identityQuaternion).y;
  fVar4 = (pQVar1->identityQuaternion).z;
  fVar5 = (pQVar1->identityQuaternion).w;
  this->_isValid = 1;
  (this->_rotation).x = fVar2;
  (this->_rotation).y = fVar3;
  (this->_rotation).z = fVar4;
  (this->_rotation).w = fVar5;
  return;
}


/* OBB(AABB, Quaternion) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_6
               (OBB *this,AABB aabb,Quaternion rotation,MethodInfo *method)

{
  (this->_center).x = aabb._center.x;
  (this->_center).y = aabb._center.y;
  (this->_size).x = aabb._size.x;
  (this->_size).y = aabb._size.y;
  (this->_center).z = aabb._center.z;
  (this->_size).z = aabb._size.z;
  (this->_rotation).x = rotation.x;
  (this->_rotation).y = rotation.y;
  (this->_rotation).z = rotation.z;
  (this->_rotation).w = rotation.w;
  this->_isValid = 1;
  return;
}


/* OBB(AABB, Transform) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_7
               (OBB *this,AABB modelSpaceAABB,Transform *worldTransform,MethodInfo *method)

{
  if (worldTransform != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xffffffe4,worldTransform,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->_size).x = modelSpaceAABB._size.x * (float)uVar2;
    (this->_size).y = modelSpaceAABB._size.y * (float)uVar3;
    (this->_size).z = modelSpaceAABB._size.z * fVar4;
    position.z = modelSpaceAABB._center.z;
    position.x = modelSpaceAABB._center.x;
    position.y = modelSpaceAABB._center.y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                       ((Vector3 *)&modelSpaceAABB._center.y,worldTransform,position,
                        (MethodInfo *)0x0);
    fVar5 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->_center).x = pVVar1->x;
    (this->_center).y = fVar5;
    (this->_center).z = fVar4;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&modelSpaceAABB._center,worldTransform,(MethodInfo *)0x0);
    fVar4 = pQVar6->x;
    fVar5 = pQVar6->y;
    fVar7 = pQVar6->z;
    fVar8 = pQVar6->w;
    this->_isValid = 1;
    (this->_rotation).x = fVar4;
    (this->_rotation).y = fVar5;
    (this->_rotation).z = fVar7;
    (this->_rotation).w = fVar8;
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* OBB(OBB) */

void Assembly-CSharp.dll::RTG::OBB::OBB__ctor_8(OBB *this,OBB copy,MethodInfo *method)

{
  OVar1 = copy;
  (this->_size).x = copy._size.x;
  (this->_size).y = copy._size.y;
  (this->_size).z = copy._size.z;
  (this->_center).x = copy._center.x;
  (this->_center).y = copy._center.y;
  (this->_center).z = copy._center.z;
  copy._isValid = OVar1._isValid;
  (this->_rotation).x = copy._rotation.x;
  (this->_rotation).y = copy._rotation.y;
  (this->_rotation).z = copy._rotation.z;
  (this->_rotation).w = copy._rotation.w;
  this->_isValid = copy._isValid;
  return;
}


/* Vector3 get_Extents() */

Vector3 * Assembly-CSharp.dll::RTG::OBB::OBB_get_Extents
                    (Vector3 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  uVar1 = (this->_size).x;
  uVar2 = (this->_size).y;
  fVar3 = (this->_size).z * _UNK_?;
  fVar4 = (float)uVar2 * _UNK_?;
  __return_storage_ptr__->x = (float)uVar1 * _UNK_?;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}


/* Matrix4x4 get_RotationMatrix() */

Matrix4x4 *
Assembly-CSharp.dll::RTG::OBB::OBB_get_RotationMatrix
          (Matrix4x4 *__return_storage_ptr__,OBB *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->zeroVector).x;
  uStack_2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  fStack_4 = (this->_rotation).x;
  fStack_5 = (this->_rotation).y;
  fStack_6 = (this->_rotation).z;
  fStack_7 = (this->_rotation).w;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pos.z = fVar3;
  pos.x = (float)(undefined4)uStack_2;
  pos.y = (float)uStack_2._4_4_;
  q.y = fStack_5;
  q.x = fStack_4;
  q.z = fStack_6;
  q.w = fStack_7;
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     (&MStack_9,pos,q,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                      (MethodInfo *)0x0);
  fVar3 = pMVar8->m10;
  fVar10 = pMVar8->m20;
  fVar11 = pMVar8->m30;
  __return_storage_ptr__->m00 = pMVar8->m00;
  __return_storage_ptr__->m10 = fVar3;
  __return_storage_ptr__->m20 = fVar10;
  __return_storage_ptr__->m30 = fVar11;
  fVar3 = pMVar8->m11;
  fVar10 = pMVar8->m21;
  fVar11 = pMVar8->m31;
  __return_storage_ptr__->m01 = pMVar8->m01;
  __return_storage_ptr__->m11 = fVar3;
  __return_storage_ptr__->m21 = fVar10;
  __return_storage_ptr__->m31 = fVar11;
  fVar3 = pMVar8->m12;
  fVar10 = pMVar8->m22;
  fVar11 = pMVar8->m32;
  __return_storage_ptr__->m02 = pMVar8->m02;
  __return_storage_ptr__->m12 = fVar3;
  __return_storage_ptr__->m22 = fVar10;
  __return_storage_ptr__->m32 = fVar11;
  fVar3 = pMVar8->m13;
  fVar10 = pMVar8->m23;
  fVar11 = pMVar8->m33;
  __return_storage_ptr__->m03 = pMVar8->m03;
  __return_storage_ptr__->m13 = fVar3;
  __return_storage_ptr__->m23 = fVar10;
  __return_storage_ptr__->m33 = fVar11;
  return __return_storage_ptr__;
}

