
/* Void Awake() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Awake
               (PlaymodeCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffset.x;
  fVar2 = (this->fields).lookAtOffset.y;
  (this->fields).distance = (this->fields).distanceToAvatar;
  fVar3 = (this->fields).lookAtOffset.z;
  (this->fields).currentLookAtOffset.x = fVar1;
  (this->fields).currentLookAtOffset.y = fVar2;
  (this->fields).currentLookAtOffset.z = fVar3;
  return;
}


/* Void CameraCollision() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_CameraCollision
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_within_line_segment);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).lookAtTransform;
  aVStack_2[0].interactionFlags = 0;
  aVStack_2[0].point.x = 0.0;
  aVStack_2[0].point.y = 0.0;
  aVStack_2[0].point.z = 0.0;
  aVStack_2[0].normal.x = 0.0;
  aVStack_2[0].normal.y = 0.0;
  aVStack_2[0].normal.z = 0.0;
  aVStack_2[0].cubePos.x = 0;
  aVStack_2[0].cubePos.y = 0;
  aVStack_2[0].cubePos.z = 0;
  aVStack_2[0]._30_2_ = 0;
  aVStack_2[0].face = 0;
  aVStack_2[0].isCubeHit = 0;
  aVStack_2[0]._37_3_ = 0;
  aVStack_2[0].woId = 0;
  aVStack_2[0]._44_4_ = 0;
  aVStack_2[0].cube = (Cube *)0x0;
  aVStack_2[0].distance = 0.0;
  aVStack_2[0]._60_4_ = 0;
  aVStack_2[0].collider = (Collider *)0x0;
  aVStack_2[0].transform = (Transform *)0x0;
  if (pTVar1 == (Transform *)0x0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
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
  VStack_4.x = 0.0;
  VStack_4.y = 0.0;
  VStack_4.z = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  RStack_7.m_Origin.x = (this->fields).avatarHeadOffset.x;
  RStack_7.m_Origin.y = (this->fields).avatarHeadOffset.y;
  fVar8 = VStack_4.x + RStack_7.m_Origin.x;
  fVar9 = VStack_4.z + (this->fields).avatarHeadOffset.z;
  fVar10 = VStack_4.y + RStack_7.m_Origin.y;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto DAT_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_11 = 0;
  fStack_12 = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar5);
  fVar13 = (float)uStack_11 - fVar8;
  fVar14 = uStack_11._4_4_ - fVar10;
  fVar15 = fStack_12 - fVar9;
  VStack_4.y = fVar14;
  VStack_4.x = fVar13;
  VStack_4.z = fVar15;
  fVar16 = (float)FUN_?(&VStack_4);
  RStack_7.m_Origin.z = fVar15;
  RStack_7.m_Origin.y = fVar14;
  RStack_7.m_Origin.x = fVar13;
  fVar17 = (float)FUN_?(&RStack_7);
  fVar18 = _UNK_?;
  if (_UNK_? < fVar17) {
    fVar15 = fVar15 / fVar17;
    VStack_4.y = fVar14 / fVar17;
    VStack_4.x = fVar13 / fVar17;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_4.x = (pVVar19->zeroVector).x;
    VStack_4.y = (pVVar19->zeroVector).y;
    fVar15 = (pVVar19->zeroVector).z;
  }
  fVar13 = VStack_4.x;
  fVar14 = VStack_4.y;
  RStack_7.m_Origin.x = VStack_4.x;
  RStack_7.m_Origin.y = VStack_4.y;
  RStack_7.m_Origin.z = fVar15;
  fStack_20 = fVar8;
  fStack_21 = fVar10;
  fStack_22 = fVar9;
  fVar17 = (float)FUN_?(&RStack_7);
  if (fVar18 < fVar17) {
    fVar18 = fVar13 / fVar17;
    fVar23 = fVar14 / fVar17;
    fVar17 = fVar15 / fVar17;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar18 = (pVVar19->zeroVector).x;
    fVar23 = (pVVar19->zeroVector).y;
    fVar17 = (pVVar19->zeroVector).z;
  }
  VStack_4.y = fVar23;
  VStack_4.x = fVar18;
  fStack_24 = fVar18;
  fStack_25 = fVar23;
  fStack_26 = fVar17;
  iVar27 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  RStack_7.m_Direction.z = fStack_26;
  RStack_7.m_Direction.y = fStack_25;
  RStack_7.m_Origin.y = fStack_21;
  RStack_7.m_Origin.x = fStack_20;
  RStack_7.m_Direction.x = fStack_24;
  RStack_7.m_Origin.z = fStack_22;
  bVar28 = CollisionDetection::CollisionDetection_MVSphereCast
                    (&RStack_7,(this->fields)._._.cameraRadius,aVStack_2,fVar16,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar27 & 0x1f),(MethodInfo *)0x0);
  if (bVar28 == 0) {
    return;
  }
  if (aVStack_2[0].distance < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
    return;
  }
  fVar18 = 0.0;
  RStack_7.m_Origin.x = 0.0;
  RStack_7.m_Origin.y = 0.0;
  fVar23 = 0.0;
  fVar16 = 0.0;
  fVar13 = ((float)uStack_11 + fVar13) - fVar8;
  fVar14 = (uStack_11._4_4_ + fVar14) - fVar10;
  fVar29 = (fStack_12 + fVar15) - fVar9;
  fVar15 = fVar14 * fVar14 + fVar13 * fVar13 + fVar29 * fVar29;
  if (_UNK_? <= fVar15) {
    fVar15 = ((aVStack_2[0].point.y - fVar10) * fVar14 +
              (aVStack_2[0].point.x - fVar8) * fVar13 +
             (aVStack_2[0].point.z - fVar9) * fVar29) / fVar15;
    if ((0.0 <= fVar15) && (fVar15 <= _UNK_?)) {
      fVar13 = fVar15 * fVar13 + fVar8;
      fVar16 = fVar15 * fVar14 + fVar10;
      fVar18 = fVar15 * fVar29 + fVar9;
      RStack_7.m_Origin.y = fVar16;
      RStack_7.m_Origin.x = fVar13;
      fStack_12 = aVStack_2[0].point.z - fVar18;
      uStack_11 = CONCAT44(aVStack_2[0].point.y - fVar16,aVStack_2[0].point.x - fVar13);
      fVar16 = (float)FUN_?(&uStack_11);
      goto code_?;
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
  pOVar30 = (Object *)FUN_?(uRam_?);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar30,(MethodInfo *)0x0);
  pOVar30 = (Object *)FUN_?(uRam_?);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar30,(MethodInfo *)0x0);
code_?:
  fVar15 = (this->fields)._._.cameraRadius;
  if (fVar16 < fVar15) {
    fVar23 = fVar15 * fVar15 - fVar16 * fVar16;
    if (fVar23 < 0.0) {
      fVar23 = (float)FUN_?(fVar23);
    }
    else {
      fVar23 = SQRT(fVar23);
    }
  }
  fVar15 = (this->fields).distance;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    RStack_7.m_Origin.y = RStack_7.m_Origin.y - VStack_4.y * fVar23;
    RStack_7.m_Origin.x = RStack_7.m_Origin.x - VStack_4.x * fVar23;
    RStack_7.m_Origin.z = fVar18 - fVar17 * fVar23;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar5);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_4.x = 0.0;
      VStack_4.y = 0.0;
      VStack_4.z = 0.0;
      pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar5 != (void *)0x0) {
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar5,&VStack_4);
        RStack_7.m_Origin.y = fVar10 - VStack_4.y;
        RStack_7.m_Origin.x = fVar8 - VStack_4.x;
        RStack_7.m_Origin.z = fVar9 - VStack_4.z;
        fVar18 = (float)FUN_?(&RStack_7);
        uVar31 = (this->fields).currentLookAt.x;
        uVar32 = (this->fields).currentLookAt.y;
        (this->fields).distance = fVar18;
        fVar18 = fVar18 / fVar15;
        fVar9 = ((this->fields).currentLookAt.z - fVar9) * fVar18 + fVar9;
        fVar10 = ((float)uVar32 - fVar10) * fVar18 + fVar10;
        fVar8 = ((float)uVar31 - fVar8) * fVar18 + fVar8;
        (this->fields).currentLookAt.x = fVar8;
        (this->fields).currentLookAt.y = fVar10;
        (this->fields).actualLookAt.x = fVar8;
        (this->fields).actualLookAt.y = fVar10;
        (this->fields).currentLookAt.z = fVar9;
        (this->fields).actualLookAt.z = fVar9;
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Enter
               (PlaymodeCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).lookAtTransform = pTVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).lookAtTransform >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (longlong)method;
        }
        UNLOCK();
      } while (!bVar3);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_01 != (MainCameraManager *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      VStack_8.z = 0.0;
      pvVar9 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      fVar12 = VStack_8.z;
      uVar11 = VStack_8._0_8_;
      (this->fields).currentLookAt.x = VStack_8.x;
      (this->fields).currentLookAt.y = VStack_8.y;
      (this->fields).currentLookAt.z = VStack_8.z;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      VStack_8._0_8_ = uVar11;
      VStack_8.z = fVar12;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      QStack_13.x = 0.0;
      QStack_13.y = 0.0;
      QStack_13.z = 0.0;
      QStack_13.w = 0.0;
      pvVar9 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      aQStack_14[0].x = QStack_13.x;
      aQStack_14[0].y = QStack_13.y;
      aQStack_14[0].z = QStack_13.z;
      aQStack_14[0].w = QStack_13.w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      pTVar2 = (this->fields).lookAtTransform;
      if ((pTVar2 == (Transform *)0x0) ||
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar2,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0)) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
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
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      VStack_8.z = 0.0;
      pvVar9 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9,&VStack_8);
      pTVar15 = (this->fields).targetRot;
      (this->fields).prevLookAtTransformPos.x = VStack_8.x;
      (this->fields).prevLookAtTransformPos.y = VStack_8.y;
      (this->fields).prevLookAtTransformPos.z = VStack_8.z;
      if (pTVar15 != (TargetRotation *)0x0) {
        aQStack_14[0].x = QStack_13.x;
        aQStack_14[0].y = QStack_13.y;
        aQStack_14[0].z = QStack_13.z;
        aQStack_14[0].w = QStack_13.w;
        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                           (&VStack_8,aQStack_14,method);
        fVar12 = pVVar16->y;
        (pTVar15->fields).eulerAngles.x = pVVar16->x;
        (pTVar15->fields).eulerAngles.y = fVar12;
        (pTVar15->fields).eulerAngles.z = 0.0;
        (this->fields).distance = (this->fields).distanceToAvatar;
        this_02 = (HashSet_1_System_Int32_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        FUN_?(this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        pMVar1 = (this->fields).avatarLocal;
        if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_02 != (HashSet_1_System_Int32_ *)0x0)) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__AddIfNotPresent
                    (this_02,(pMVar1->fields)._._._._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                     rgctx_data[0x15].method);
          bVar3 = iRam_? != 0;
          (this->fields).ignoreAvatarId = this_02;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).ignoreAvatarId >> 0xc);
            uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
              puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Initialize
               (PlaymodeCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarCameraDistTransparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarLocal = avatarLocal;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarLocal >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  fVar6 = (this->fields).avatarHeadOffset.x;
  fVar7 = (this->fields).avatarHeadOffset.y;
  fVar8 = (this->fields).avatarHeadOffset.z;
  pAVar9 = (AvatarCameraDistTransparency *)FUN_?(TypeInfo__AvatarCameraDistTransparency);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (pAVar9->fields).camMoveTowardsOffset.x = fVar6;
  (pAVar9->fields).camMoveTowardsOffset.y = fVar7;
  (pAVar9->fields).camMoveTowardsOffset.z = fVar8;
  (pAVar9->fields).fadeStartBase = 4.0;
  (pAVar9->fields).fadeEndBase = 2.0;
  (pAVar9->fields).prevDist = -1.0;
  (pAVar9->fields).fadeStartDistance = 4.0;
  (pAVar9->fields).fadeEndDistance = 1.0;
  (this->fields).avatarCameraDistTransparency = pAVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarCameraDistTransparency >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Reset
               (PlaymodeCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  auStack_3._0_4_ = 0.0;
  auStack_3._4_4_ = 0.0;
  stack0xffffffffffffffd0 = 0;
  pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar4);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    fStack_6 = (float)auStack_3._0_4_;
    fStack_7 = (float)auStack_3._4_4_;
    fStack_8 = (float)auStack_3._8_4_;
    fStack_9 = fStack_10;
    fVar11 = (float)auStack_3._0_4_;
    fVar12 = (float)auStack_3._4_4_;
    fVar13 = (float)auStack_3._8_4_;
    fVar14 = fStack_10;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      fVar11 = (float)auStack_3._0_4_;
      fVar12 = (float)auStack_3._4_4_;
      fVar13 = (float)auStack_3._8_4_;
      fVar14 = fStack_10;
    }
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4,&fStack_6);
    pTVar15 = (this->fields).targetRot;
    if (pTVar15 != (TargetRotation *)0x0) {
      QStack_16.y = fVar12;
      QStack_16.x = fVar11;
      QStack_16.z = fVar13;
      QStack_16.w = fVar14;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                         ((Vector3 *)auStack_3,&QStack_16,in_R8);
      fVar11 = pVVar17->y;
      (pTVar15->fields).eulerAngles.x = pVVar17->x;
      (pTVar15->fields).eulerAngles.y = fVar11;
      (pTVar15->fields).eulerAngles.z = 0.0;
      pTVar1 = (this->fields).lookAtTransform;
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        QStack_16.x = 0.0;
        QStack_16.y = 0.0;
        QStack_16.z = 0.0;
        pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar4,&QStack_16);
        auStack_3._0_4_ = (this->fields).avatarHeadOffset.x;
        auStack_3._4_4_ = (this->fields).avatarHeadOffset.y;
        fVar11 = (this->fields).avatarHeadOffset.z;
        (this->fields).currentLookAt.x = QStack_16.x + (float)auStack_3._0_4_;
        (this->fields).currentLookAt.y = QStack_16.y + (float)auStack_3._4_4_;
        (this->fields).currentLookAt.z = QStack_16.z + fVar11;
        pPVar18 = (this->fields).smoothLookAt;
        if (pPVar18 != (PlaymodeCamera_SmoothLookAt *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar19 = (pPVar18->fields).prevVelocities;
          if (pQVar19 != (Queue_1_UnityEngine_Vector3_ *)0x0) {
            if ((pQVar19->fields)._size != 0) {
              (pQVar19->fields)._size = 0;
            }
            piVar20 = &(pQVar19->fields)._version;
            *piVar20 = *piVar20 + 1;
            (pQVar19->fields)._head = 0;
            (pQVar19->fields)._tail = 0;
            return;
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdateCamera
               (PlaymodeCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  uStack_1 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  lVar2 = (ulonglong)(uint)(this->fields).height << 0x20;
  (this->fields).avatarHeadOffset.x = (float)(int)lVar2;
  (this->fields).avatarHeadOffset.y = (float)(int)((ulonglong)lVar2 >> 0x20);
  (this->fields).avatarHeadOffset.z = 0.0;
  fStack_3 = unaff_XMM10_Dc;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_5.x = 0.0;
    QStack_5.y = 0.0;
    QStack_5.z = 0.0;
    QStack_5.w = 0.0;
    pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,&QStack_5);
    this_00 = (this->fields).targetRot;
    if (this_00 != (TargetRotation *)0x0) {
      auStack_9._0_4_ = QStack_5.x;
      auStack_9._4_4_ = QStack_5.y;
      uStack_10._0_4_ = QStack_5.z;
      uStack_10._4_4_ = QStack_5.w;
      pQVar11 = TargetRotation::TargetRotation_GetLerpRotation
                          (&QStack_5,this_00,(Quaternion *)auStack_9,(MethodInfo *)0x0);
      fVar12 = pQVar11->x;
      fVar13 = pQVar11->y;
      auStack_9._0_4_ = pQVar11->x;
      auStack_9._4_4_ = pQVar11->y;
      fVar14 = pQVar11->z;
      fVar15 = pQVar11->w;
      uStack_10._0_4_ = pQVar11->z;
      uStack_10._4_4_ = pQVar11->w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6);
      fVar16 = (this->fields).distance;
      fVar17 = (this->fields).distanceToAvatar;
      fVar18 = (this->fields).targetDistanceStrength;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      fVar19 = (float)(*pcRam_?)();
      fVar19 = fVar19 * fVar18;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      else if (_UNK_? < fVar19) {
        fVar19 = _UNK_?;
      }
      (this->fields).distance = (fVar17 - fVar16) * fVar19 + fVar16;
      PlaymodeCamera_UpdatePosition(this,(MethodInfo *)0x0);
      (*(this->klass->vtable).CameraCollision.methodPtr)(this);
      fVar16 = (float)((uint)((this->fields).actualLookAt.y - (this->fields).lookAtPos.y) &
                      _UNK_?);
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
      pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,&uStack_20);
      fVar19 = fStack_21;
      uVar22 = (this->fields).currentLookAt.x;
      uVar23 = (this->fields).currentLookAt.y;
      fVar17 = (float)uStack_20;
      fVar18 = uStack_20._4_4_;
      uVar24 = (this->fields).lookAtPos.x;
      uVar25 = (this->fields).lookAtPos.y;
      uStack_26 = CONCAT44(uStack_26._4_4_,(this->fields).lookAtPos.z - fStack_21);
      QStack_5.z = (this->fields).currentLookAt.z - fStack_21;
      uStack_27 = CONCAT44((float)uVar25 - uStack_20._4_4_,(float)uVar24 - (float)uStack_20);
      QStack_5.y = (float)uVar23 - uStack_20._4_4_;
      QStack_5.x = (float)uVar22 - (float)uStack_20;
      auStack_9._0_4_ = 0.0;
      auStack_9._4_4_ = 0.0;
      uStack_10._0_4_ = 0.0;
      uStack_10._4_4_ = 0.0;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(&QStack_5,&uStack_27);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        fVar17 = (float)uStack_20;
        fVar18 = uStack_20._4_4_;
        fVar19 = fStack_21;
      }
      pQVar28 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uVar8._0_4_ = (pQVar28->identityQuaternion).x;
      uVar8._4_4_ = (pQVar28->identityQuaternion).y;
      uVar29._0_4_ = (pQVar28->identityQuaternion).z;
      uVar29._4_4_ = (pQVar28->identityQuaternion).w;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      fVar30 = (float)(*pcRam_?)();
      fVar31 = (this->fields).followRotationSpeed;
      uStack_27 = 0;
      uStack_26 = 0;
      pcVar7 = pcRam_?;
      QStack_5._0_8_ = uVar8;
      QStack_5._8_8_ = uVar29;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(&QStack_5,auStack_9,fVar30 * fVar31 * fVar16 * fVar16,&uStack_27);
      QStack_5.x = (this->fields)._.shakeOffset.x;
      QStack_5.y = (this->fields)._.shakeOffset.y;
      if (targetTransform != (ProtectedTransform *)0x0) {
        QStack_5.y = fVar18 + QStack_5.y;
        QStack_5.x = fVar17 + QStack_5.x;
        QStack_5.z = fVar19 + (this->fields)._.shakeOffset.z;
        ProtectedTransform::ProtectedTransform_set_position
                  (targetTransform,(Vector3 *)&QStack_5,(MethodInfo *)0x0);
        auStack_9._4_4_ =
             (uStack_27._4_4_ * fVar15 + uStack_26._4_4_ * fVar13 + (float)uStack_26 * fVar12) -
             (float)uStack_27 * fVar14;
        auStack_9._0_4_ =
             ((float)uStack_27 * fVar15 + uStack_26._4_4_ * fVar12 + uStack_27._4_4_ * fVar14) -
             (float)uStack_26 * fVar13;
        uStack_10._4_4_ =
             ((uStack_26._4_4_ * fVar15 - (float)uStack_27 * fVar12) - uStack_27._4_4_ * fVar13) -
             (float)uStack_26 * fVar14;
        uStack_10._0_4_ =
             ((float)uStack_26 * fVar15 + uStack_26._4_4_ * fVar14 + (float)uStack_27 * fVar13) -
             uStack_27._4_4_ * fVar12;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,(Quaternion *)auStack_9,(MethodInfo *)0x0);
        pAVar32 = (this->fields).avatarCameraDistTransparency;
        if (pAVar32 != (AvatarCameraDistTransparency *)0x0) {
          pMVar33 = (this->fields).avatarLocal;
          pSVar34 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar34 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar35 = (pSVar34->fields).SpawnRoleModeTypeWrapper,
             pSVar35 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar36 = (pSVar35->fields).spawnRoleType;
            if ((pSVar36 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar37 = (pSVar36->fields).subscribableVariable,
               pSVar37 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar37->fields)._.value & 4) != 0) {
                return;
              }
              if (((pMVar33 != (MVAvatarLocal *)0x0) &&
                  (pMVar38 = (pMVar33->fields)._.body, pMVar38 != (MVBody *)0x0)) &&
                 (pTVar4 = (pMVar38->fields)._._._.transform, pTVar4 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_1 = 0;
                fStack_3 = 0.0;
                if ((pTVar4->fields)._._.m_CachedPtr == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if (pcRam_? == (code *)0x0) {
                  pcVar7 = (code *)FUN_?(&UNK_?);
                  if (pcVar7 == (code *)0x0) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                pcRam_? = pcVar7;
                (*pcRam_?)();
                uVar39 = (pAVar32->fields).camMoveTowardsOffset.x;
                uVar40 = (pAVar32->fields).camMoveTowardsOffset.y;
                fVar13 = (float)uStack_1 + (float)uVar39;
                fVar14 = fStack_3 + (pAVar32->fields).camMoveTowardsOffset.z;
                fVar12 = uStack_1._4_4_ + (float)uVar40;
                this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_02 != (MainCameraManager *)0x0) {
                  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_02,(MethodInfo *)0x0);
                  if (pTVar4 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_1 = 0;
                    fStack_3 = 0.0;
                    pvVar6 = (pTVar4->fields)._._.m_CachedPtr;
                    if (pvVar6 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0)
                      ;
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    pcVar7 = pcRam_?;
                    if (pcRam_? == (code *)0x0) {
                      pcVar7 = (code *)FUN_?(&UNK_?);
                      if (pcVar7 == (code *)0x0) {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    pcRam_? = pcVar7;
                    (*pcRam_?)(pvVar6,&uStack_1);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Math);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    fVar13 = fVar13 - (float)uStack_1;
                    fVar12 = fVar12 - uStack_1._4_4_;
                    fVar14 = fVar14 - fStack_3;
                    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    dVar41 = (double)(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
                    if (dVar41 < 0.0) {
                      dVar41 = (double)FUN_?();
                    }
                    else {
                      auVar42._8_8_ = 0;
                      auVar42._0_8_ = dVar41;
                      auVar42 = sqrtpd(ZEXT816(0),auVar42);
                      dVar41 = auVar42._0_8_;
                    }
                    fVar12 = (float)dVar41;
                    if (_UNK_? <
                        (float)((uint)(fVar12 - (pAVar32->fields).prevDist) & _UNK_?)) {
                      (pAVar32->fields).prevDist = fVar12;
                      fVar12 = (fVar12 - (pAVar32->fields).fadeEndDistance) /
                               ((pAVar32->fields).fadeStartDistance -
                               (pAVar32->fields).fadeEndDistance);
                      if (fVar12 < 0.0) {
                        fVar12 = 0.0;
                      }
                      else if (_UNK_? < fVar12) {
                        fVar12 = _UNK_?;
                      }
                      if ((pMVar33->fields)._.isHidden == 0) {
                        pAVar43 = (pMVar33->fields)._.avatar;
                        if ((pAVar43 == (Avatar *)0x0) ||
                           (this_01 = (pAVar43->fields).avatarFader, this_01 == (AvatarFader *)0x0))
                        goto code_?;
                        AvatarFader::AvatarFader_SetTransparency(this_01,fVar12,(MethodInfo *)0x0);
                      }
                    }
                    return;
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdatePosition
               (PlaymodeCamera *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    VStack_1.z = 0.0;
    pvVar2 = (this_01->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2);
    pTVar5 = (this->fields).lookAtTransform;
    if (pTVar5 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_6 = 0;
      fStack_7 = 0.0;
      pvVar2 = (pTVar5->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      uVar8 = (this->fields).prevLookAtTransformPos.x;
      uVar9 = (this->fields).prevLookAtTransformPos.y;
      VStack_10.x = ((float)uStack_6 - (float)uVar8) + VStack_1.x;
      VStack_10.z = (fStack_7 - (this->fields).prevLookAtTransformPos.z) + VStack_1.z;
      VStack_10.y = (uStack_6._4_4_ - (float)uVar9) + VStack_1.y;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (this_01->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      fVar11 = (this->fields).distanceToAvatar;
      fVar12 = 0.0;
      if (fVar11 != 0.0) {
        fVar12 = (this->fields).distance / fVar11;
      }
      fVar12 = fVar12 * (this->fields).lookAtScaleCorrection;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aQStack_13[0].x = 0.0;
      aQStack_13[0].y = 0.0;
      aQStack_13[0].z = 0.0;
      aQStack_13[0].w = 0.0;
      pvVar2 = (this_01->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2,aQStack_13);
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          (&VStack_1,aQStack_13,in_R8);
      VStack_10._0_8_ = (ulonglong)(uint)(pVVar14->y * _UNK_?) << 0x20;
      VStack_10.z = 0.0;
      aQStack_13[0].x = 0.0;
      aQStack_13[0].y = 0.0;
      aQStack_13[0].z = 0.0;
      aQStack_13[0].w = 0.0;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(&VStack_10);
      pTVar5 = (this->fields).lookAtTransform;
      if (pTVar5 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_6 = 0;
        fStack_7 = 0.0;
        pvVar2 = (pTVar5->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2,&uStack_6);
        fVar15 = fStack_7;
        uVar16 = (this->fields).currentLookAtOffset.x;
        uVar17 = (this->fields).currentLookAtOffset.y;
        VStack_10.x = (this->fields).avatarHeadOffset.x;
        VStack_10.y = (this->fields).avatarHeadOffset.y;
        fVar18 = (float)uVar16 * fVar12 + VStack_10.x;
        fVar19 = (float)uVar17 * fVar12 + VStack_10.y;
        fVar20 = (this->fields).currentLookAtOffset.z * fVar12 + (this->fields).avatarHeadOffset.z;
        fVar21 = aQStack_13[0].y + aQStack_13[0].y;
        fVar22 = aQStack_13[0].z + aQStack_13[0].z;
        fVar23 = aQStack_13[0].x * (aQStack_13[0].x + aQStack_13[0].x);
        fVar24 = aQStack_13[0].w * (aQStack_13[0].x + aQStack_13[0].x);
        fVar11 = (float)uStack_6;
        fVar25 = uStack_6._4_4_;
        fVar26 = (_UNK_? - (aQStack_13[0].z * fVar22 + aQStack_13[0].y * fVar21)) * fVar18 +
                 (aQStack_13[0].x * fVar21 - aQStack_13[0].w * fVar22) * fVar19 +
                 (aQStack_13[0].w * fVar21 + aQStack_13[0].x * fVar22) * fVar20 + (float)uStack_6;
        fVar27 = (_UNK_? - (aQStack_13[0].z * fVar22 + fVar23)) * fVar19 +
                 (aQStack_13[0].w * fVar22 + aQStack_13[0].x * fVar21) * fVar18 +
                 (aQStack_13[0].y * fVar22 - fVar24) * fVar20 + uStack_6._4_4_;
        fVar22 = (fVar24 + aQStack_13[0].y * fVar22) * fVar19 +
                 (aQStack_13[0].x * fVar22 - aQStack_13[0].w * fVar21) * fVar18 +
                 (_UNK_? - (aQStack_13[0].y * fVar21 + fVar23)) * fVar20 + fStack_7;
        pMVar28 = (this->fields).avatarLocal;
        this_00 = (this->fields).smoothLookAt;
        (this->fields).lookAtPos.x = fVar26;
        (this->fields).lookAtPos.y = fVar27;
        (this->fields).currentLookAt.x = fVar26;
        (this->fields).currentLookAt.y = fVar27;
        (this->fields).lookAtPos.z = fVar22;
        (this->fields).currentLookAt.z = fVar22;
        if ((pMVar28 != (MVAvatarLocal *)0x0) &&
           (puVar29 = (undefined8 *)
                      (*(pMVar28->klass->vtable).get_VelocityRelative.methodPtr)
                                (&VStack_1,pMVar28,
                                 (pMVar28->klass->vtable).get_VelocityRelative.method),
           this_00 != (PlaymodeCamera_SmoothLookAt *)0x0)) {
          VStack_10._0_8_ = *puVar29;
          VStack_10.z = *(float *)(puVar29 + 1);
          pVVar14 = PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                              ((Vector3 *)aQStack_13,this_00,&VStack_10,(MethodInfo *)0x0);
          uVar30 = (this->fields).currentLookAt.x;
          uVar31 = (this->fields).currentLookAt.y;
          uVar32 = pVVar14->x;
          uVar33 = pVVar14->y;
          fVar27 = (this->fields).currentLookAt.z - pVVar14->z;
          uVar34 = (this->fields).avatarHeadOffset.x;
          uVar35 = (this->fields).avatarHeadOffset.y;
          fVar15 = fVar15 + (this->fields).avatarHeadOffset.z;
          fVar11 = fVar11 + (float)uVar34;
          (this->fields).currentLookAt.x = (float)uVar30 - (float)uVar32;
          (this->fields).currentLookAt.y = (float)uVar31 - (float)uVar33;
          fVar25 = fVar25 + (float)uVar35;
          (this->fields).currentLookAt.z = fVar27;
          fVar21 = (((float)uVar30 - (float)uVar32) - fVar11) * fVar12;
          fVar22 = (((float)uVar31 - (float)uVar33) - fVar25) * fVar12;
          fVar12 = (fVar27 - fVar15) * fVar12;
          VStack_10.y = fVar22;
          VStack_10.x = fVar21;
          VStack_10.z = fVar12;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_1.x = 0.0;
          VStack_1.y = 0.0;
          VStack_1.z = 0.0;
          pvVar2 = (this_01->fields)._._.m_CachedPtr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar2,&VStack_1);
          fVar23 = VStack_1.x - fVar11;
          fVar19 = VStack_1.y - fVar25;
          fVar27 = VStack_1.z - fVar15;
          fVar26 = (float)FUN_?(&VStack_10);
          VStack_10.z = fVar12;
          fVar24 = (float)FUN_?(&VStack_10);
          if (_UNK_? < fVar24) {
            VStack_1.x = fVar21 / fVar24;
            fVar20 = fVar12 / fVar24;
            VStack_1.y = fVar22 / fVar24;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar36 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_1.x = (pVVar36->zeroVector).x;
            VStack_1.y = (pVVar36->zeroVector).y;
            fVar20 = (pVVar36->zeroVector).z;
          }
          VStack_10.y = fVar19;
          VStack_10.x = fVar23;
          VStack_10.z = fVar27;
          fVar24 = (float)FUN_?(&VStack_10);
          if (_UNK_? < fVar24) {
            fVar27 = fVar27 / fVar24;
            VStack_10.y = fVar19 / fVar24;
            VStack_10.x = fVar23 / fVar24;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar36 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_10.x = (pVVar36->zeroVector).x;
            VStack_10.y = (pVVar36->zeroVector).y;
            fVar27 = (pVVar36->zeroVector).z;
          }
          fVar25 = fVar25 + fVar22;
          fVar11 = fVar11 + fVar21;
          fVar15 = fVar15 + fVar12;
          fVar12 = (this->fields).distance;
          (this->fields).actualLookAt.x = fVar11;
          (this->fields).actualLookAt.y = fVar25;
          (this->fields).currentLookAt.x = fVar11;
          (this->fields).currentLookAt.y = fVar25;
          (this->fields).actualLookAt.z = fVar15;
          (this->fields).currentLookAt.z = fVar15;
          fVar12 = (fVar12 * fVar12 + fVar26 * fVar26) -
                   (VStack_10.y * VStack_1.y + VStack_10.x * VStack_1.x + fVar27 * fVar20) *
                   (fVar12 + fVar12) * fVar26;
          if (fVar12 < 0.0) {
            fVar12 = (float)FUN_?();
          }
          else {
            fVar12 = SQRT(fVar12);
          }
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)aQStack_13,this_01,(MethodInfo *)0x0);
          uVar37 = pVVar14->x;
          uVar38 = pVVar14->y;
          VStack_10.z = fVar15 - fVar12 * pVVar14->z;
          VStack_10.y = fVar25 - fVar12 * (float)uVar38;
          VStack_10.x = fVar11 - fVar12 * (float)uVar37;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar2 = (this_01->fields)._._.m_CachedPtr;
          if (pvVar2 != (void *)0x0) {
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar2,&VStack_10);
            pMVar28 = (this->fields).avatarLocal;
            if (pMVar28 != (MVAvatarLocal *)0x0) {
              puVar29 = (undefined8 *)
                        (*(pMVar28->klass->vtable).get_VelocityRelative.methodPtr)(aQStack_13);
              VStack_10._0_8_ = *puVar29;
              VStack_10.z = *(float *)(puVar29 + 1);
              fVar11 = (float)FUN_?(&VStack_10);
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
                        ((MVPlaymodeCameraBase *)this,fVar11,(MethodInfo *)0x0);
              (this->fields).prevLookAtTransformPos.x = (float)uStack_6;
              (this->fields).prevLookAtTransformPos.y = uStack_6._4_4_;
              (this->fields).prevLookAtTransformPos.z = fStack_7;
              return;
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PlaymodeCamera() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera__ctor
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlaymodeCamera__SmoothLookAt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  fVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = (ulonglong)_UNK_?;
  (this->fields).shoulderOffset.x = (float)(int)uVar5;
  (this->fields).shoulderOffset.y = (float)(int)(uVar5 >> 0x20);
  (this->fields).avatarHeadOffset.x = (float)(int)((ulonglong)uVar4 << 0x20);
  (this->fields).avatarHeadOffset.y = (float)(int)(((ulonglong)uVar4 << 0x20) >> 0x20);
  (this->fields).lookAtOffset.x = (float)(int)((ulonglong)uVar3 << 0x20);
  (this->fields).lookAtOffset.y = (float)(int)(((ulonglong)uVar3 << 0x20) >> 0x20);
  (this->fields).lookAtOffset.z = 0.0;
  (this->fields).shoulderOffset.z = fVar2;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).distanceToAvatar = 5.0;
  (this->fields).height = 1.5;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  (this->fields).targetDistanceStrength = 2.0;
  (this->fields).followRotationSpeed = 2.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields).currentLookAt.x = (pVVar6->zeroVector).x;
  (this->fields).currentLookAt.y = fVar7;
  (this->fields).currentLookAt.z = fVar2;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields).actualLookAt.x = (pVVar6->zeroVector).x;
  (this->fields).actualLookAt.y = fVar7;
  (this->fields).actualLookAt.z = fVar2;
  (this->fields).distance = 2.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields).lookAtPos.x = (pVVar6->zeroVector).x;
  (this->fields).lookAtPos.y = fVar7;
  (this->fields).lookAtPos.z = fVar2;
  (this->fields).mouseSensitivity = 0.25;
  (this->fields).lookAtScaleCorrection = 1.0;
  pPVar8 = (PlaymodeCamera_SmoothLookAt *)FUN_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar9 = (Queue_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  FUN_?(pQVar9);
  iVar10 = iRam_?;
  (pPVar8->fields).prevVelocities = pQVar9;
  if (iVar10 != 0) {
    uVar4 = (uint)((ulonglong)&pPVar8->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar13);
  }
  (this->fields).smoothLookAt = pPVar8;
  if (iVar10 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).smoothLookAt >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar13 = uVar11 == *puVar12;
      if (bVar13) {
        *puVar12 = uVar11 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar13);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields).prevLookAtTransformPos.x = (pVVar6->zeroVector).x;
  (this->fields).prevLookAtTransformPos.y = fVar7;
  (this->fields).prevLookAtTransformPos.z = fVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar13 = cRam_? == '\0';
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar6->zeroVector).y;
  fVar2 = (pVVar6->zeroVector).z;
  (this->fields)._.shakeOffset.x = (pVVar6->zeroVector).x;
  (this->fields)._.shakeOffset.y = fVar7;
  (this->fields)._.shakeOffset.z = fVar2;
  (this->fields)._.shakeMaxFactor = 1.0;
  (this->fields)._.shakeTimeFactor = 6.3;
  (this->fields)._.shakeStrengthFadeSpeed = 1.0;
  (this->fields)._._.cameraRadius = 0.3;
  if (bVar13) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar14 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar15 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar16 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar17 = ppMVar15;
    if (lVar16 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar16 = lRam_?;
    }
    else {
      do {
        uVar4 = (uint)ppMVar17;
        LOCK();
        bVar13 = uVar4 != uRam_?;
        uVar3 = uVar4;
        uVar18 = uVar4 + 1;
        if (bVar13) {
          uVar3 = uRam_?;
          uVar18 = uRam_?;
        }
        uRam_? = uVar18;
        UNLOCK();
      } while ((bVar13) &&
              (ppMVar17 = (MethodInfo **)(ulonglong)uVar3, uVar4 = uVar3, uVar3 != 2));
      while (uVar4 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar4 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar16;
    puVar19 = &(pOVar14->_1).field_0x1c;
    LOCK();
    bVar13 = *(int *)puVar19 == 1;
    if (bVar13) {
      *(undefined4 *)puVar19 = 1;
    }
    uVar4 = uRam_?;
    UNLOCK();
    if (bVar13) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar4 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar20 = &(pOVar14->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar13 = *puVar20 == 1;
      if (bVar13) {
        *puVar20 = 1;
      }
      uVar4 = uRam_?;
      UNLOCK();
      if (bVar13) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar4 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar4 = GetCurrentThreadId();
        psVar21 = &(pOVar14->_1).cctor_thread;
        LOCK();
        bVar13 = (ulonglong)uVar4 == *psVar21;
        if (bVar13) {
          *psVar21 = (ulonglong)uVar4;
        }
        UNLOCK();
        if (bVar13) {
          return;
        }
        while( true ) {
          puVar19 = &(pOVar14->_1).field_0x1c;
          LOCK();
          bVar13 = *(int *)puVar19 == 1;
          if (bVar13) {
            *(undefined4 *)puVar19 = 1;
          }
          UNLOCK();
          if (bVar13) break;
          LOCK();
          lVar16._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
          lVar16._4_4_ = (pOVar14->_1).cctor_started;
          if (lVar16 == 0) {
            (pOVar14->_1).initializationExceptionGCHandle = 0;
            (pOVar14->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar16 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar4 = GetCurrentThreadId();
        LOCK();
        (pOVar14->_1).cctor_thread = (ulonglong)uVar4;
        UNLOCK();
        LOCK();
        (pOVar14->_1).cctor_finished_or_no_cctor = 1;
        uVar4 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar4 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar14->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar14);
          ppMVar17 = ppMVar15;
          pIVar22 = (Il2CppClass *)pOVar14;
code_?:
          do {
            if (ppMVar17 == (MethodInfo **)0x0) {
              FUN_?(pIVar22);
              if (pIVar22->field_count != 0) {
                ppMVar17 = pIVar22->methods;
                pMVar23 = *ppMVar17;
code_?:
                if (pMVar23 != (MethodInfo *)0x0) {
                  if ((*pMVar23->name == '.') && ((pMVar23->flags & 0x800) != 0)) {
                    ppMVar24 = ppMVar15;
                    while (ppMVar25 = ppMVar24 + 0x3052af3c,
                          ppMVar24 = (MethodInfo **)((longlong)ppMVar24 + 1),
                          *(char *)ppMVar25 == (pMVar23->name + -1)[(longlong)ppMVar24]) {
                      if (ppMVar24 == (MethodInfo **)0x7) {
                        FUN_?(pMVar23,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar17 = ppMVar17 + 1;
              if (ppMVar17 < pIVar22->methods + pIVar22->field_count) {
                pMVar23 = *ppMVar17;
                goto code_?;
              }
            }
            pIVar22 = pIVar22->parent;
            ppMVar17 = ppMVar15;
          } while (pIVar22 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar14->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar14->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar26._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
      lVar26._4_4_ = (pOVar14->_1).cctor_started;
      if (lVar26 != 0) {
        uVar27._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
        uVar27._4_4_ = (pOVar14->_1).cctor_started;
        uVar27 = FUN_?(uVar27);
        FUN_?(uVar27,0);
        FUN_?(0,0,0,0,0);
        pcVar28 = (code *)swi(3);
        (*pcVar28)();
        return;
      }
    }
  }
  return;
}

