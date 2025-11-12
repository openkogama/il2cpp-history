
/* Vector3 CalculateRootPosition(GameObject, Vector3, Vector3, Quaternion) */

Vector3 * Assembly-CSharp.dll::RTG::ObjectPositionCalculator::
          ObjectPositionCalculator_CalculateRootPosition
                    (Vector3 *__return_storage_ptr__,GameObject *root,Vector3 *desiredOBBCenter,
                    Vector3 *desiredWorldScale,Quaternion *desiredWorldRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectPositionCalculator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectPositionCalculator->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__ObjectPositionCalculator);
  }
  pOVar1 = TypeInfo__RTG__ObjectPositionCalculator->static_fields;
  uVar2._0_4_ = (pOVar1->_boundsQConfig).ObjectTypes;
  uVar2._4_4_ = (pOVar1->_boundsQConfig).NoVolumeSize.x;
  uVar3._0_4_ = (pOVar1->_boundsQConfig).NoVolumeSize.y;
  uVar3._4_4_ = (pOVar1->_boundsQConfig).NoVolumeSize.z;
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_4._0_8_ = uVar2;
  OStack_4.NoVolumeSize._4_8_ = uVar3;
  pAVar5 = ObjectBounds::ObjectBounds_CalcHierarchyModelAABB
                      (aAStack_6,root,&OStack_4,(MethodInfo *)0x0);
  uVar7._0_4_ = (pAVar5->_size).x;
  uVar7._4_4_ = (pAVar5->_size).y;
  uVar2 = *(undefined8 *)&(pAVar5->_size).z;
  uVar8._0_4_ = (pAVar5->_center).y;
  uVar8._4_4_ = (pAVar5->_center).z;
  AStack_9._size._0_8_ = uVar7;
  AStack_9._8_8_ = uVar2;
  AStack_9._center._4_8_ = uVar8;
  if (pAVar5->_isValid == 0) {
    uStack_10 = 0;
    OStack_11._size.x = 0.0;
    OStack_11._size.y = 0.0;
    OStack_11._size.z = 0.0;
    OStack_11._center.x = 0.0;
    OStack_11._center.y = 0.0;
    OStack_11._center.z = 0.0;
    OStack_11._rotation.x = 0.0;
    OStack_11._rotation.y = 0.0;
    if (root == (GameObject *)0x0) goto DAT_?;
  }
  else {
    uVar12._0_1_ = pAVar5->_isValid;
    uVar12._1_3_ = *(undefined3 *)&pAVar5->field_0x19;
    if (root == (GameObject *)0x0) goto DAT_?;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (root,(MethodInfo *)0x0);
    OStack_11._size.x = 0.0;
    OStack_11._size.y = 0.0;
    OStack_11._size.z = 0.0;
    OStack_11._center.x = 0.0;
    OStack_11._center.y = 0.0;
    OStack_11._center.z = 0.0;
    OStack_11._rotation.x = 0.0;
    OStack_11._rotation.y = 0.0;
    AStack_9._size._0_8_ = uVar7;
    AStack_9._8_8_ = uVar2;
    AStack_9._center._4_8_ = uVar8;
    AStack_9._24_4_ = uVar12;
    OBB::OBB__ctor_7(&OStack_11,&AStack_9,pTVar13,(MethodInfo *)0x0);
  }
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (root,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar15._0_4_ = (pVVar14->zeroVector).x;
  uVar15._4_4_ = (pVVar14->zeroVector).y;
  fVar16 = (pVVar14->zeroVector).z;
  if (pTVar13 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    OStack_4.ObjectTypes = 0;
    OStack_4.NoVolumeSize.x = 0.0;
    OStack_4.NoVolumeSize.y = 0.0;
    OStack_4.NoVolumeSize.z = 0.0;
    pvVar17 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(pvVar17);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_20 = 0;
    fStack_21 = 0.0;
    pvVar17 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(pvVar17,&uStack_20);
    uStack_22 = uStack_20;
    uStack_23 = fStack_21;
    aAStack_6[0]._size.x = (float)OStack_4.ObjectTypes;
    aAStack_6[0]._size.y = OStack_4.NoVolumeSize.x;
    aAStack_6[0]._size.z = OStack_4.NoVolumeSize.y;
    aAStack_6[0]._center.x = OStack_4.NoVolumeSize.z;
    MStack_24.m00 = 0.0;
    MStack_24.m10 = 0.0;
    MStack_24.m20 = 0.0;
    MStack_24.m30 = 0.0;
    MStack_24.m01 = 0.0;
    MStack_24.m11 = 0.0;
    MStack_24.m21 = 0.0;
    MStack_24.m31 = 0.0;
    MStack_24.m02 = 0.0;
    MStack_24.m12 = 0.0;
    MStack_24.m22 = 0.0;
    MStack_24.m32 = 0.0;
    MStack_24.m03 = 0.0;
    MStack_24.m13 = 0.0;
    MStack_24.m23 = 0.0;
    MStack_24.m33 = 0.0;
    pcVar18 = pcRam_?;
    uStack_25 = uVar15;
    fStack_26 = fVar16;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(&uStack_25,aAStack_6,&uStack_22,&MStack_24);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fStack_21 = desiredWorldScale->z;
    uStack_20._0_4_ = desiredWorldScale->x;
    uStack_20._4_4_ = desiredWorldScale->y;
    AStack_9._size.x = desiredWorldRotation->x;
    AStack_9._size.y = desiredWorldRotation->y;
    AStack_9._size.z = desiredWorldRotation->z;
    AStack_9._center.x = desiredWorldRotation->w;
    pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
    OStack_4.ObjectTypes = (int32_t)(pVVar14->zeroVector).x;
    OStack_4.NoVolumeSize.x = (pVVar14->zeroVector).y;
    OStack_4.NoVolumeSize.y = (pVVar14->zeroVector).z;
    MStack_27.m00 = 0.0;
    MStack_27.m10 = 0.0;
    MStack_27.m20 = 0.0;
    MStack_27.m30 = 0.0;
    MStack_27.m01 = 0.0;
    MStack_27.m11 = 0.0;
    MStack_27.m21 = 0.0;
    MStack_27.m31 = 0.0;
    MStack_27.m02 = 0.0;
    MStack_27.m12 = 0.0;
    MStack_27.m22 = 0.0;
    MStack_27.m32 = 0.0;
    MStack_27.m03 = 0.0;
    MStack_27.m13 = 0.0;
    MStack_27.m23 = 0.0;
    MStack_27.m33 = 0.0;
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(&OStack_4,&AStack_9,&uStack_20);
    MStack_28.m00 = MStack_24.m00;
    MStack_28.m10 = MStack_24.m10;
    MStack_28.m20 = MStack_24.m20;
    MStack_28.m30 = MStack_24.m30;
    MStack_28.m01 = MStack_24.m01;
    MStack_28.m11 = MStack_24.m11;
    MStack_28.m21 = MStack_24.m21;
    MStack_28.m31 = MStack_24.m31;
    MStack_28.m02 = MStack_24.m02;
    MStack_28.m12 = MStack_24.m12;
    MStack_28.m22 = MStack_24.m22;
    MStack_28.m32 = MStack_24.m32;
    MStack_28.m03 = MStack_24.m03;
    MStack_28.m13 = MStack_24.m13;
    MStack_28.m23 = MStack_24.m23;
    MStack_28.m33 = MStack_24.m33;
    MStack_24.m00 = 0.0;
    MStack_24.m10 = 0.0;
    MStack_24.m20 = 0.0;
    MStack_24.m30 = 0.0;
    MStack_24.m01 = 0.0;
    MStack_24.m11 = 0.0;
    MStack_24.m21 = 0.0;
    MStack_24.m31 = 0.0;
    MStack_24.m02 = 0.0;
    MStack_24.m12 = 0.0;
    MStack_24.m22 = 0.0;
    MStack_24.m32 = 0.0;
    MStack_24.m03 = 0.0;
    MStack_24.m13 = 0.0;
    MStack_24.m23 = 0.0;
    MStack_24.m33 = 0.0;
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(&MStack_28,&MStack_24);
    MStack_28.m00 = MStack_24.m00;
    MStack_28.m10 = MStack_24.m10;
    MStack_28.m20 = MStack_24.m20;
    MStack_28.m30 = MStack_24.m30;
    MStack_28.m01 = MStack_24.m01;
    MStack_28.m11 = MStack_24.m11;
    MStack_28.m21 = MStack_24.m21;
    MStack_28.m31 = MStack_24.m31;
    MStack_28.m02 = MStack_24.m02;
    MStack_28.m12 = MStack_24.m12;
    MStack_28.m22 = MStack_24.m22;
    MStack_28.m32 = MStack_24.m32;
    MStack_28.m03 = MStack_24.m03;
    MStack_28.m13 = MStack_24.m13;
    MStack_28.m23 = MStack_24.m23;
    MStack_28.m33 = MStack_24.m33;
    MStack_24.m00 = MStack_27.m00;
    MStack_24.m10 = MStack_27.m10;
    MStack_24.m20 = MStack_27.m20;
    MStack_24.m30 = MStack_27.m30;
    MStack_24.m01 = MStack_27.m01;
    MStack_24.m11 = MStack_27.m11;
    MStack_24.m21 = MStack_27.m21;
    MStack_24.m31 = MStack_27.m31;
    MStack_24.m02 = MStack_27.m02;
    MStack_24.m12 = MStack_27.m12;
    MStack_24.m22 = MStack_27.m22;
    MStack_24.m32 = MStack_27.m32;
    MStack_24.m03 = MStack_27.m03;
    MStack_24.m13 = MStack_27.m13;
    MStack_24.m23 = MStack_27.m23;
    MStack_24.m33 = MStack_27.m33;
    pMVar29 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        (&MStack_27,&MStack_24,&MStack_28,(MethodInfo *)0x0);
    MStack_28.m03 = pMVar29->m03;
    MStack_28.m13 = pMVar29->m13;
    MStack_28.m23 = pMVar29->m23;
    MStack_28.m33 = pMVar29->m33;
    fVar16 = pMVar29->m00;
    fVar30 = pMVar29->m10;
    fVar31 = pMVar29->m20;
    fVar32 = pMVar29->m01;
    fVar33 = pMVar29->m11;
    fVar34 = pMVar29->m21;
    fVar35 = pMVar29->m02;
    fVar36 = pMVar29->m12;
    fVar37 = pMVar29->m22;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_20 = 0;
    fStack_21 = 0.0;
    pvVar17 = (pTVar13->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcVar18 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar18 = (code *)swi(3);
      pVVar19 = (Vector3 *)(*pcVar18)();
      return pVVar19;
    }
    pcRam_? = pcVar18;
    (*pcRam_?)(pvVar17,&uStack_20);
    uStack_20._4_4_ = uStack_20._4_4_ - OStack_11._center.y;
    uStack_20._0_4_ = (float)uStack_20 - OStack_11._center.x;
    fStack_21 = fStack_21 - OStack_11._center.z;
    uVar38 = desiredOBBCenter->x;
    uVar39 = desiredOBBCenter->y;
    fVar40 = desiredOBBCenter->z;
    __return_storage_ptr__->x =
         fVar32 * uStack_20._4_4_ + fVar16 * (float)uStack_20 + fVar35 * fStack_21 + (float)uVar38;
    __return_storage_ptr__->y =
         fVar33 * uStack_20._4_4_ + fVar30 * (float)uStack_20 + fVar36 * fStack_21 + (float)uVar39
    ;
    __return_storage_ptr__->z =
         fVar34 * uStack_20._4_4_ + fVar31 * (float)uStack_20 + fVar37 * fStack_21 + fVar40;
    return __return_storage_ptr__;
  }
DAT_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  pVVar19 = (Vector3 *)(*pcVar18)();
  return pVVar19;
}


/* ObjectPositionCalculator() */

void Assembly-CSharp.dll::RTG::ObjectPositionCalculator::ObjectPositionCalculator__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectPositionCalculator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  pOVar4 = TypeInfo__RTG__ObjectPositionCalculator->static_fields;
  (pOVar4->_boundsQConfig).NoVolumeSize.x = (pVVar1->zeroVector).x;
  (pOVar4->_boundsQConfig).NoVolumeSize.y = fVar2;
  (pOVar4->_boundsQConfig).NoVolumeSize.z = fVar3;
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  (TypeInfo__RTG__ObjectPositionCalculator->static_fields->_boundsQConfig).ObjectTypes =
       TypeInfo__RTG__GameObjectTypeHelper->static_fields->_allCombined;
  return;
}

