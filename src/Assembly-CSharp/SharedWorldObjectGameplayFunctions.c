
/* Boolean DoParticleEffect(Vector3) */

bool Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions::
     SharedWorldObjectGameplayFunctions_DoParticleEffect(Vector3 *position,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    uVar8 = position->x;
    uVar9 = position->y;
    fVar10 = position->z - 0.0;
    fVar11 = (float)uVar9 - 0.0;
    fVar12 = (float)uVar8 - 0.0;
    fVar13 = (float)FUN_?();
    if (_UNK_? < fVar13) {
      fVar14 = fVar11 / fVar13;
      fStackX_8 = fVar10 / fVar13;
      uStack_15 = CONCAT44(fVar11,fVar12 / fVar13);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_15._0_4_ = (pVVar16->zeroVector).x;
      uStack_15._4_4_ = (pVVar16->zeroVector).y;
      fStackX_8 = (pVVar16->zeroVector).z;
      fVar14 = (float)uStack_15._4_4_;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar1 != (MainCameraManager *)0x0) &&
        (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar17 = (pVVar16->forwardVector).x;
      uVar18 = (pVVar16->forwardVector).y;
      fVar13 = (pVVar16->forwardVector).z;
      if (((_UNK_? - 0.0) * (float)uVar18 + (float)uVar17 * 0.0 + fVar13 * 0.0) * fVar14 +
          ((_UNK_? - 0.0) * (float)uVar17 + (float)uVar18 * 0.0 + fVar13 * 0.0) *
          (float)uStack_15 +
          ((float)uVar17 * 0.0 + (float)uVar18 * 0.0 + (_UNK_? - 0.0) * fVar13) * fStackX_8 <=
          0.0) {
        return 0;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar1 != (MainCameraManager *)0x0) &&
         (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) {
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                           (pCVar2,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if ((pMVar1 != (MainCameraManager *)0x0) &&
           (pCVar2 = (pMVar1->fields).mainCamera, pCVar2 != (Camera *)0x0)) {
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                             (pCVar2,(MethodInfo *)0x0);
          return fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10 < fVar14 * fVar13;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void DustEfffect(ParticleSystem, Vector3, Single) */

void Assembly-CSharp.dll::SharedWorldObjectGameplayFunctions::
     SharedWorldObjectGameplayFunctions_DustEfffect
               (ParticleSystem *particlePrefab,Vector3 *position,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = position->x;
  VStack_1.y = position->y;
  VStack_1.z = position->z;
  bVar2 = SharedWorldObjectGameplayFunctions_DoParticleEffect(&VStack_1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar4._0_4_ = (pQVar3->identityQuaternion).x;
    uVar4._4_4_ = (pQVar3->identityQuaternion).y;
    uVar5._0_4_ = (pQVar3->identityQuaternion).z;
    uVar5._4_4_ = (pQVar3->identityQuaternion).w;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_1.x = position->x;
    VStack_1.y = position->y;
    VStack_1.z = position->z;
    uStack_6 = uVar4;
    uStack_7 = uVar5;
    alStackX_10[0] = FUN_?(particlePrefab,&VStack_1,&uStack_6);
    if (alStackX_10[0] == 0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)alStackX_10 >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    pcVar8 = pcRam_?;
    alStack_14[0] = alStackX_10[0];
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(alStack_14,radius);
  }
  return;
}

