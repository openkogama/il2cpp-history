
/* OBB InverseTransformOBB(OBB) */

OBB * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_InverseTransformOBB
                (OBB *__return_storage_ptr__,MeshTransform *this,OBB *obb,MethodInfo *method)

{
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  (__return_storage_ptr__->_rotation).x = 0.0;
  (__return_storage_ptr__->_rotation).y = 0.0;
  (__return_storage_ptr__->_rotation).z = 0.0;
  (__return_storage_ptr__->_rotation).w = 0.0;
  auStack_1._0_4_ = (obb->_center).x;
  auStack_1._4_4_ = (obb->_center).y;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  stack0xffffffffffffff60 = CONCAT44(fStack_2,(obb->_center).z);
  pVVar3 = MeshTransform_InverseTransformPoint
                     (&VStack_4,this,(Vector3 *)auStack_1,(MethodInfo *)0x0);
  uVar5 = (this->fields)._scale.x;
  uVar6 = (this->fields)._scale.y;
  auStack_1._0_4_ = (obb->_size).x;
  auStack_1._4_4_ = (obb->_size).y;
  fVar7 = _UNK_? / (this->fields)._scale.z;
  fVar8 = _UNK_? / (float)uVar5;
  fVar9 = (obb->_size).z;
  fVar10 = _UNK_? / (float)uVar6;
  bVar11 = cRam_? == '\0';
  fVar12 = pVVar3->y;
  fVar13 = pVVar3->z;
  (__return_storage_ptr__->_center).x = pVVar3->x;
  (__return_storage_ptr__->_center).y = fVar12;
  (__return_storage_ptr__->_size).x = fVar8 * (float)auStack_1._0_4_;
  (__return_storage_ptr__->_size).y = fVar10 * (float)auStack_1._4_4_;
  (__return_storage_ptr__->_size).z = fVar7 * fVar9;
  (__return_storage_ptr__->_center).z = fVar13;
  if (bVar11) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar14 = TypeInfo__UnityEngine__Quaternion;
  __return_storage_ptr__->_isValid = 1;
  pcVar15 = pcRam_?;
  auStack_1._0_4_ = 0.0;
  auStack_1._4_4_ = 0.0;
  stack0xffffffffffffff60 = 0;
  pQVar16 = pQVar14->static_fields;
  fVar9 = (pQVar16->identityQuaternion).y;
  fVar13 = (pQVar16->identityQuaternion).z;
  fVar12 = (pQVar16->identityQuaternion).w;
  (__return_storage_ptr__->_rotation).x = (pQVar16->identityQuaternion).x;
  (__return_storage_ptr__->_rotation).y = fVar9;
  (__return_storage_ptr__->_rotation).z = fVar13;
  (__return_storage_ptr__->_rotation).w = fVar12;
  fStack_17 = (this->fields)._rotation.x;
  fStack_18 = (this->fields)._rotation.y;
  fStack_19 = (this->fields)._rotation.z;
  fStack_20 = (this->fields)._rotation.w;
  pcVar21 = pcRam_?;
  if ((pcVar15 == (code *)0x0) &&
     (pcVar15 = (code *)FUN_?(&UNK_?), pcVar21 = pcVar15, pcVar15 == (code *)0x0)) {
    uVar22 = func_?(&UNK_?);
    FUN_?(uVar22,0);
    pcVar15 = (code *)swi(3);
    pOVar23 = (OBB *)(*pcVar15)();
    return pOVar23;
  }
  pcRam_? = pcVar21;
  (*pcVar15)(&fStack_17,auStack_1);
  fVar9 = (obb->_rotation).x;
  fVar13 = (obb->_rotation).y;
  fVar12 = (obb->_rotation).z;
  fVar10 = (obb->_rotation).w;
  (__return_storage_ptr__->_rotation).x =
       ((float)auStack_1._0_4_ * fVar10 + fStack_2 * fVar9 + (float)auStack_1._4_4_ * fVar12) -
       (float)auStack_1._8_4_ * fVar13;
  (__return_storage_ptr__->_rotation).y =
       (fStack_2 * fVar13 + (float)auStack_1._4_4_ * fVar10 + (float)auStack_1._8_4_ * fVar9) -
       (float)auStack_1._0_4_ * fVar12;
  (__return_storage_ptr__->_rotation).z =
       (fStack_2 * fVar12 + (float)auStack_1._8_4_ * fVar10 + (float)auStack_1._0_4_ * fVar13) -
       (float)auStack_1._4_4_ * fVar9;
  (__return_storage_ptr__->_rotation).w =
       ((fStack_2 * fVar10 - (float)auStack_1._0_4_ * fVar9) - (float)auStack_1._4_4_ * fVar13) -
       (float)auStack_1._8_4_ * fVar12;
  return __return_storage_ptr__;
}


/* Vector3 InverseTransformPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_InverseTransformPoint
                    (Vector3 *__return_storage_ptr__,MeshTransform *this,Vector3 *point,
                    MethodInfo *method)

{
  fVar1 = _UNK_?;
  uVar2 = (this->fields)._scale.x;
  uVar3 = (this->fields)._scale.y;
  fVar4 = _UNK_? / (float)uVar2;
  fVar5 = _UNK_? / (this->fields)._scale.z;
  fVar6 = _UNK_? / (float)uVar3;
  uStack_7._0_4_ = (this->fields)._rotation.x;
  uStack_7._4_4_ = (this->fields)._rotation.y;
  fStack_8 = (this->fields)._rotation.z;
  fStack_9 = (this->fields)._rotation.w;
  uStack_10 = 0;
  uStack_11 = 0;
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar12 = (code *)swi(3);
    pVVar14 = (Vector3 *)(*pcVar12)();
    return pVVar14;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(&uStack_7,&uStack_10);
  uVar15 = (this->fields)._position.x;
  uVar16 = (this->fields)._position.y;
  uVar17 = point->x;
  fVar18 = (float)uVar17 - (float)uVar15;
  fVar19 = point->z - (this->fields)._position.z;
  fVar20 = point->y - (float)uVar16;
  fVar21 = uStack_10._4_4_ + uStack_10._4_4_;
  fVar22 = (float)uStack_11 + (float)uStack_11;
  fVar23 = (float)uStack_10 * ((float)uStack_10 + (float)uStack_10);
  fVar24 = uStack_11._4_4_ * ((float)uStack_10 + (float)uStack_10);
  __return_storage_ptr__->x =
       ((fVar1 - ((float)uStack_11 * fVar22 + uStack_10._4_4_ * fVar21)) * fVar18 +
        ((float)uStack_10 * fVar21 - uStack_11._4_4_ * fVar22) * fVar20 +
       (uStack_11._4_4_ * fVar21 + (float)uStack_10 * fVar22) * fVar19) * fVar4;
  __return_storage_ptr__->y =
       ((fVar1 - ((float)uStack_11 * fVar22 + fVar23)) * fVar20 +
        (uStack_11._4_4_ * fVar22 + (float)uStack_10 * fVar21) * fVar18 +
       (uStack_10._4_4_ * fVar22 - fVar24) * fVar19) * fVar6;
  __return_storage_ptr__->z =
       (((float)uStack_10 * fVar22 - uStack_11._4_4_ * fVar21) * fVar18 +
        (fVar24 + uStack_10._4_4_ * fVar22) * fVar20 +
       (fVar1 - (uStack_10._4_4_ * fVar21 + fVar23)) * fVar19) * fVar5;
  return __return_storage_ptr__;
}


/* Vector3 TransformPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_TransformPoint
                    (Vector3 *__return_storage_ptr__,MeshTransform *this,Vector3 *point,
                    MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = (this->fields)._scale.y;
  fVar4 = (this->fields)._rotation.x;
  fVar5 = (this->fields)._rotation.y;
  fVar6 = (this->fields)._rotation.z;
  fVar7 = (this->fields)._rotation.w;
  fVar8 = (this->fields)._scale.z * point->z;
  uVar9 = (this->fields)._scale.x;
  fVar10 = (float)uVar3 * (float)uVar2;
  fVar11 = (float)uVar9 * (float)uVar1;
  fVar12 = fVar5 + fVar5;
  fVar13 = fVar6 + fVar6;
  fVar14 = fVar4 * (fVar4 + fVar4);
  fVar15 = fVar7 * (fVar4 + fVar4);
  uVar16 = (this->fields)._position.x;
  uVar17 = (this->fields)._position.y;
  fVar18 = _UNK_? - (fVar6 * fVar13 + fVar14);
  fVar19 = _UNK_? - (fVar5 * fVar12 + fVar14);
  fVar14 = (this->fields)._position.z;
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar13 + fVar5 * fVar12)) * fVar11 +
       (fVar4 * fVar12 - fVar7 * fVar13) * fVar10 + (fVar7 * fVar12 + fVar4 * fVar13) * fVar8 +
       (float)uVar16;
  __return_storage_ptr__->y =
       fVar18 * fVar10 + (fVar7 * fVar13 + fVar4 * fVar12) * fVar11 +
       (fVar5 * fVar13 - fVar15) * fVar8 + (float)uVar17;
  __return_storage_ptr__->z =
       (fVar4 * fVar13 - fVar7 * fVar12) * fVar11 + (fVar15 + fVar5 * fVar13) * fVar10 +
       fVar19 * fVar8 + fVar14;
  return __return_storage_ptr__;
}


/* MeshTransform(Vector3, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform__ctor
               (MeshTransform *this,Vector3 *position,Quaternion *rotation,Vector3 *scale,
               MethodInfo *method)

{
  fVar1 = position->y;
  fVar2 = position->z;
  (this->fields)._position.x = position->x;
  (this->fields)._position.y = fVar1;
  fVar1 = rotation->x;
  fVar3 = rotation->y;
  fVar4 = rotation->z;
  fVar5 = rotation->w;
  (this->fields)._position.z = fVar2;
  fVar2 = scale->z;
  (this->fields)._rotation.x = fVar1;
  (this->fields)._rotation.y = fVar3;
  (this->fields)._rotation.z = fVar4;
  (this->fields)._rotation.w = fVar5;
  fVar1 = scale->y;
  (this->fields)._scale.x = scale->x;
  (this->fields)._scale.y = fVar1;
  (this->fields)._scale.z = fVar2;
  return;
}


/* MeshTransform(Transform) */

void Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform__ctor_1
               (MeshTransform *this,Transform *transform,MethodInfo *method)

{
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  bVar6 = cRam_? == '\0';
  (this->fields)._position.x = (float)(undefined4)uStack_2;
  (this->fields)._position.y = (float)uStack_2._4_4_;
  (this->fields)._position.z = fStack_3;
  if (bVar6) {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  uStack_8 = 0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  bVar6 = cRam_? == '\0';
  (this->fields)._rotation.x = (float)uStack_7;
  (this->fields)._rotation.y = uStack_7._4_4_;
  (this->fields)._rotation.z = (float)uStack_8;
  (this->fields)._rotation.w = uStack_8._4_4_;
  if (bVar6) {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  (this->fields)._scale.x = (float)(undefined4)uStack_2;
  (this->fields)._scale.y = (float)uStack_2._4_4_;
  (this->fields)._scale.z = fStack_3;
  return;
}

