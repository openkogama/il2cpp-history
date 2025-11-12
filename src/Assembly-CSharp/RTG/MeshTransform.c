
/* OBB InverseTransformOBB(OBB) */

OBB * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_InverseTransformOBB(OBB *__return_storage_ptr__,MeshTransform *this,OBB *obb,MethodInfo *method)

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
  pVVar3 = MeshTransform_InverseTransformPoint(&VStack_4,this,(Vector3 *)auStack_1,(MethodInfo *)0x0);
  uVar5 = (this->fields)._scale.x;
  uVar6 = (this->fields)._scale.y;
  auStack_1._0_4_ = (obb->_size).x;
  auStack_1._4_4_ = (obb->_size).y;
  fVar7 = (this->fields)._scale.z;
  fVar8 = (obb->_size).z;
  bVar9 = cRam_? == '\0';
  fVar10 = pVVar3->y;
  fVar11 = pVVar3->z;
  (__return_storage_ptr__->_center).x = pVVar3->x;
  (__return_storage_ptr__->_center).y = fVar10;
  (__return_storage_ptr__->_size).x = (1.0 / (float)uVar5) * (float)auStack_1._0_4_;
  (__return_storage_ptr__->_size).y = (1.0 / (float)uVar6) * (float)auStack_1._4_4_;
  (__return_storage_ptr__->_size).z = (1.0 / fVar7) * fVar8;
  (__return_storage_ptr__->_center).z = fVar11;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar12 = TypeInfo__UnityEngine__Quaternion;
  __return_storage_ptr__->_isValid = 1;
  pcVar13 = pcRam_?;
  auStack_1._0_4_ = 0.0;
  auStack_1._4_4_ = 0.0;
  stack0xffffffffffffff60 = 0;
  pQVar14 = pQVar12->static_fields;
  fVar7 = (pQVar14->identityQuaternion).y;
  fVar8 = (pQVar14->identityQuaternion).z;
  fVar11 = (pQVar14->identityQuaternion).w;
  (__return_storage_ptr__->_rotation).x = (pQVar14->identityQuaternion).x;
  (__return_storage_ptr__->_rotation).y = fVar7;
  (__return_storage_ptr__->_rotation).z = fVar8;
  (__return_storage_ptr__->_rotation).w = fVar11;
  fStack_15 = (this->fields)._rotation.x;
  fStack_16 = (this->fields)._rotation.y;
  fStack_17 = (this->fields)._rotation.z;
  fStack_18 = (this->fields)._rotation.w;
  pcVar19 = pcRam_?;
  if ((pcVar13 == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar19 = pcVar13, pcVar13 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar13 = (code *)swi(3);
    pOVar21 = (OBB *)(*pcVar13)();
    return pOVar21;
  }
  pcRam_? = pcVar19;
  (*pcVar13)(&fStack_15,auStack_1);
  fVar7 = (obb->_rotation).x;
  fVar8 = (obb->_rotation).y;
  fVar11 = (obb->_rotation).z;
  fVar10 = (obb->_rotation).w;
  (__return_storage_ptr__->_rotation).x = ((float)auStack_1._0_4_ * fVar10 + fStack_2 * fVar7 + (float)auStack_1._4_4_ * fVar11) - (float)auStack_1._8_4_ * fVar8;
  (__return_storage_ptr__->_rotation).y = (fStack_2 * fVar8 + (float)auStack_1._4_4_ * fVar10 + (float)auStack_1._8_4_ * fVar7) - (float)auStack_1._0_4_ * fVar11;
  (__return_storage_ptr__->_rotation).z = (fStack_2 * fVar11 + (float)auStack_1._8_4_ * fVar10 + (float)auStack_1._0_4_ * fVar8) - (float)auStack_1._4_4_ * fVar7;
  (__return_storage_ptr__->_rotation).w = ((fStack_2 * fVar10 - (float)auStack_1._0_4_ * fVar7) - (float)auStack_1._4_4_ * fVar8) - (float)auStack_1._8_4_ * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 InverseTransformPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_InverseTransformPoint(Vector3 *__return_storage_ptr__,MeshTransform *this,Vector3 *point,MethodInfo *method)

{
  uVar1 = (this->fields)._scale.x;
  uVar2 = (this->fields)._scale.y;
  fVar3 = (this->fields)._scale.z;
  uStack_4._0_4_ = (this->fields)._rotation.x;
  uStack_4._4_4_ = (this->fields)._rotation.y;
  fStack_5 = (this->fields)._rotation.z;
  fStack_6 = (this->fields)._rotation.w;
  uStack_7 = 0;
  uStack_8 = 0;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    pVVar11 = (Vector3 *)(*pcVar9)();
    return pVVar11;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(&uStack_4,&uStack_7);
  uVar12 = (this->fields)._position.x;
  uVar13 = (this->fields)._position.y;
  uVar14 = point->x;
  fVar15 = (float)uVar14 - (float)uVar12;
  fVar16 = point->z - (this->fields)._position.z;
  fVar17 = point->y - (float)uVar13;
  fVar18 = uStack_7._4_4_ + uStack_7._4_4_;
  fVar19 = (float)uStack_8 + (float)uStack_8;
  fVar20 = (float)uStack_7 * ((float)uStack_7 + (float)uStack_7);
  fVar21 = uStack_8._4_4_ * ((float)uStack_7 + (float)uStack_7);
  __return_storage_ptr__->x = ((1.0 - ((float)uStack_8 * fVar19 + uStack_7._4_4_ * fVar18)) * fVar15 + ((float)uStack_7 * fVar18 - uStack_8._4_4_ * fVar19) * fVar17 + (uStack_8._4_4_ * fVar18 + (float)uStack_7 * fVar19) * fVar16) * (1.0 / (float)uVar1);
  __return_storage_ptr__->y = ((1.0 - ((float)uStack_8 * fVar19 + fVar20)) * fVar17 + (uStack_8._4_4_ * fVar19 + (float)uStack_7 * fVar18) * fVar15 + (uStack_7._4_4_ * fVar19 - fVar21) * fVar16) * (1.0 / (float)uVar2);
  __return_storage_ptr__->z = (((float)uStack_7 * fVar19 - uStack_8._4_4_ * fVar18) * fVar15 + (fVar21 + uStack_7._4_4_ * fVar19) * fVar17 + (1.0 - (uStack_7._4_4_ * fVar18 + fVar20)) * fVar16) * (1.0 / fVar3);
  return __return_storage_ptr__;
}


/* Vector3 TransformPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform_TransformPoint(Vector3 *__return_storage_ptr__,MeshTransform *this,Vector3 *point,MethodInfo *method)

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
  fVar18 = (this->fields)._position.z;
  __return_storage_ptr__->x = (1.0 - (fVar6 * fVar13 + fVar5 * fVar12)) * fVar11 + (fVar4 * fVar12 - fVar7 * fVar13) * fVar10 + (fVar7 * fVar12 + fVar4 * fVar13) * fVar8 + (float)uVar16;
  __return_storage_ptr__->y = (1.0 - (fVar6 * fVar13 + fVar14)) * fVar10 + (fVar7 * fVar13 + fVar4 * fVar12) * fVar11 + (fVar5 * fVar13 - fVar15) * fVar8 + (float)uVar17;
  __return_storage_ptr__->z = (fVar4 * fVar13 - fVar7 * fVar12) * fVar11 + (fVar15 + fVar5 * fVar13) * fVar10 + (1.0 - (fVar5 * fVar12 + fVar14)) * fVar8 + fVar18;
  return __return_storage_ptr__;
}


/* MeshTransform(Vector3, Quaternion, Vector3) */

void Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform__ctor(MeshTransform *this,Vector3 *position,Quaternion *rotation,Vector3 *scale,MethodInfo *method)

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

void Assembly-CSharp.dll::RTG::MeshTransform::MeshTransform__ctor_1(MeshTransform *this,Transform *transform,MethodInfo *method)

{
  if (transform == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  uStack_8 = 0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  fStack_3 = 0.0;
  pvVar4 = (transform->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
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

