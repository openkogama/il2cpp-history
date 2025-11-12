
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnBulletHit
               (PickupItemDoubleSixShooter *this,VoxelHit *voxelHit,Ray *lineOfFire,
               MethodInfo *method)

{
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  uStack_4._0_4_ = (voxelHit->point).x;
  uStack_4._4_4_ = (voxelHit->point).y;
  uVar5 = *(undefined8 *)&(voxelHit->point).z;
  uVar6 = (voxelHit->normal).y;
  uVar7 = (voxelHit->normal).z;
  uStack_8 = *(undefined8 *)&voxelHit->cubePos;
  fStack_9 = (float)uVar5;
  fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
  pCStack_11 = voxelHit->cube;
  uStack_12 = *(undefined8 *)&voxelHit->distance;
  pCStack_13 = voxelHit->collider;
  pTStack_14 = voxelHit->transform;
  iStack_15 = voxelHit->interactionFlags;
  fStack_16 = (float)uVar6;
  fStack_17 = (float)uVar7;
  if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
    iVar18 = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar3,voxelHit->woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
      pMVar19 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,iVar18,(MethodInfo *)0x0);
      lVar20 = FUN_?(pMVar19,TypeInfo__IBulletImpactVisualizer);
      if (lVar20 == 0) {
        fStack_16 = (voxelHit->normal).y;
        fVar21 = (voxelHit->normal).z;
        uStack_8 = *(undefined8 *)&voxelHit->cubePos;
        uVar5._0_4_ = (voxelHit->point).x;
        uVar5._4_4_ = (voxelHit->point).y;
        uStack_4._0_4_ = (voxelHit->point).x;
        uStack_4._4_4_ = (voxelHit->point).y;
        fVar22 = (voxelHit->point).z;
        fStack_10 = (voxelHit->normal).x;
        fStack_9 = fVar22;
        fStack_17 = fVar21;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        NStack_23._0_8_ = *(undefined8 *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
        VStack_24.y = fStack_16;
        VStack_24.x = fStack_10;
        NStack_23.value.g = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
        QStack_25.x = 0.0;
        QStack_25.y = 0.0;
        QStack_25.z = 0.0;
        QStack_25.w = 0.0;
        pcVar26 = pcRam_?;
        VStack_24.z = fVar21;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar26 = (code *)FUN_?(&UNK_?), pcVar26 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        pcRam_? = pcVar26;
        (*pcRam_?)(&VStack_24,&NStack_23,&QStack_25);
        NStack_23.hasValue = 0;
        NStack_23._1_3_ = 0;
        NStack_23.value.r = 0.0;
        NStack_23.value.g = 0.0;
        NStack_23.value.b = 0.0;
        NStack_23.value.a = 0.0;
        VStack_24._0_8_ = uVar5;
        VStack_24.z = fVar22;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_SixShooterSparks,&VStack_24,&QStack_25,(Nullable_1_Single_)0x0,
                   &NStack_23,(MethodInfo *)0x0);
        return;
      }
      pMVar27 = (this->fields)._._.owner;
      if ((pMVar27 != (MVPickupOwner *)0x0) &&
         (pMVar28 = (pMVar27->fields)._.worldObjectParent, pMVar28 != (MVWorldObjectClient *)0x0)) {
        iVar18 = (pMVar28->fields)._.ownerActorNr;
        if (*(int *)&(TypeInfo__PickupItemDoubleSixShooter->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PickupItemDoubleSixShooter);
        }
        pIVar29 = TypeInfo__IBulletImpactVisualizer;
        fVar21 = TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage;
        if (pMVar19 != (MVWorldObjectClient *)0x0) {
          lVar20 = FUN_?(pMVar19,TypeInfo__IBulletImpactVisualizer);
          pIVar30 = TypeInfo__IBulletImpactVisualizer;
          if (lVar20 == 0) {
            FUN_?(pMVar19,pIVar29);
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
          lVar20 = FUN_?(pMVar19,TypeInfo__IBulletImpactVisualizer);
          if (lVar20 != 0) {
            QStack_25.x = (lineOfFire->m_Origin).x;
            QStack_25.y = (lineOfFire->m_Origin).y;
            QStack_25._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
            uStack_31._0_4_ = (lineOfFire->m_Direction).y;
            uStack_31._4_4_ = (lineOfFire->m_Direction).z;
            uStack_4._0_4_ = (voxelHit->point).x;
            uStack_4._4_4_ = (voxelHit->point).y;
            uVar5 = *(undefined8 *)&(voxelHit->point).z;
            uVar32 = (voxelHit->normal).y;
            uVar33 = (voxelHit->normal).z;
            uStack_8 = *(undefined8 *)&voxelHit->cubePos;
            fStack_9 = (float)uVar5;
            fStack_10 = (float)((ulonglong)uVar5 >> 0x20);
            uStack_34._0_4_ = voxelHit->face;
            uStack_34._4_1_ = voxelHit->isCubeHit;
            uStack_34._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
            uStack_35 = *(undefined8 *)&voxelHit->woId;
            pCStack_11 = voxelHit->cube;
            uStack_12 = *(undefined8 *)&voxelHit->distance;
            pCStack_13 = voxelHit->collider;
            pTStack_14 = voxelHit->transform;
            iStack_15 = voxelHit->interactionFlags;
            fStack_16 = (float)uVar32;
            fStack_17 = (float)uVar33;
            FUN_?(&QStack_25,TypeInfo__IBulletImpactVisualizer,lVar20,&uStack_4,&QStack_25,
                          CONCAT44(uVar1,iVar18),fVar21);
            return;
          }
          FUN_?(pMVar19,pIVar30);
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnFire
               (PickupItemDoubleSixShooter *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RevolverRecoil);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_projectile_fire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_3._0_8_ = uVar1;
  OStack_3._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_InternalDecrypt(&OStack_3,(MethodInfo *)0x0);
  uVar5 = VStack_6._0_8_;
  if ((uVar4 & 1) == 0) {
    pTVar7 = (this->fields)._._.muzzlePoint;
    if (pTVar7 == (Transform *)0x0) goto code_?;
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
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9,&VStack_8);
    VStack_6.x = VStack_8.x;
    VStack_6.y = VStack_8.y;
    VStack_6.z = VStack_8.z;
    this_00 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_SixShooterBullet,&VStack_6,0.0,(MethodInfo *)0x0);
    pTVar7 = (this->fields)._._.muzzlePoint;
    pPVar11 = (this->fields).muzzleParticles;
    uVar5 = VStack_6._0_8_;
    if (pTVar7 == (Transform *)0x0) goto code_?;
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
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9);
    pPVar12 = (this->fields).muzzleParticles;
    uVar5 = VStack_6._0_8_;
    if ((pPVar12 == (ParticleSystem *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar12,(MethodInfo *)0x0), uVar5 = VStack_6._0_8_,
       pTVar7 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    OStack_3.currentCryptoKey = 0;
    OStack_3.hiddenValue = 0;
    OStack_3.fakeValue = 0;
    OStack_3.inited = 0;
    OStack_3._13_3_ = 0;
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9,&OStack_3);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_6.x = VStack_8.x;
    VStack_6.y = VStack_8.y;
    VStack_6.z = VStack_8.z;
    pPVar11 = (ParticleSystem *)FUN_?(pPVar11,&VStack_6);
    uVar5 = VStack_6._0_8_;
    if (pPVar11 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
              (pPVar11,1,(MethodInfo *)0x0);
    this_02 = (this->fields).animComponentL;
  }
  else {
    pTVar7 = (this->fields).muzzlePoint2;
    if (pTVar7 == (Transform *)0x0) goto code_?;
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
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9,&VStack_8);
    VStack_6.x = VStack_8.x;
    VStack_6.y = VStack_8.y;
    VStack_6.z = VStack_8.z;
    this_00 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_SixShooterBullet,&VStack_6,0.0,(MethodInfo *)0x0);
    pTVar7 = (this->fields).muzzlePoint2;
    pPVar11 = (this->fields).muzzleParticles;
    uVar5 = VStack_6._0_8_;
    if (pTVar7 == (Transform *)0x0) goto code_?;
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
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9);
    pPVar12 = (this->fields).muzzleParticles;
    uVar5 = VStack_6._0_8_;
    if ((pPVar12 == (ParticleSystem *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar12,(MethodInfo *)0x0), uVar5 = VStack_6._0_8_,
       pTVar7 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    OStack_3.currentCryptoKey = 0;
    OStack_3.hiddenValue = 0;
    OStack_3.fakeValue = 0;
    OStack_3.inited = 0;
    OStack_3._13_3_ = 0;
    pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar9,&OStack_3);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_6.x = VStack_8.x;
    VStack_6.y = VStack_8.y;
    VStack_6.z = VStack_8.z;
    pPVar11 = (ParticleSystem *)FUN_?(pPVar11,&VStack_6);
    uVar5 = VStack_6._0_8_;
    if (pPVar11 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
              (pPVar11,1,(MethodInfo *)0x0);
    this_02 = (this->fields).animComponentR;
  }
  uVar5 = VStack_6._0_8_;
  if ((this_02 != (Animation *)0x0) &&
     (UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (this_02,StringLiteral_RevolverRecoil,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0
                ), uVar5 = VStack_6._0_8_, this_00 != (Bullet *)0x0)) {
    pBVar13 = (this_00->fields).onHit;
    pBVar14 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
    BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
              (pBVar14,(Object *)this,
               MethodInfo__PickupItemDoubleSixShooter__OnBulletHit_VoxelHit__UnityEngine__Ray_,
               (MethodInfo *)0x0);
    pMVar15 = (MethodInfo *)0x0;
    pBVar13 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar13,(Delegate *)pBVar14,(MethodInfo *)0x0);
    if (pBVar13 == (Bullet_OnHitDelegate *)0x0) {
      (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
    }
    else {
      pBVar16 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar13->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar16 = pBVar13;
      }
      if (pBVar16 == (Bullet_OnHitDelegate *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this_00->fields).onHit = pBVar16;
      pBVar16 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar13->klass == TypeInfo__Bullet__OnHitDelegate) {
        pBVar16 = pBVar13;
      }
      if (pBVar16 == (Bullet_OnHitDelegate *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this_00->fields).onHit >> 0xc);
      uVar17 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      pMVar15 = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
      do {
        uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
        puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
        LOCK();
        bVar20 = uVar18 == *puVar19;
        if (bVar20) {
          *puVar19 = uVar18 | 1L << (longlong)pMVar15;
        }
        UNLOCK();
      } while (!bVar20);
    }
    if (isLocal != 0) {
      pBVar14 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
      pMVar15 = MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
      ;
      BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                (pBVar14,(Object *)this,
                 MethodInfo__PickupItemDoubleSixShooter__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                 ,(MethodInfo *)0x0);
      bVar20 = iRam_? != 0;
      (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar14;
      if (bVar20) {
        uVar4 = (uint)((ulonglong)&(this_00->fields).onHitLocal >> 0xc);
        uVar17 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        pMVar15 = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
        do {
          uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
          puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
          LOCK();
          bVar20 = uVar18 == *puVar19;
          if (bVar20) {
            *puVar19 = uVar18 | 1L << (longlong)pMVar15;
          }
          UNLOCK();
        } while (!bVar20);
      }
    }
    pMVar21 = (this->fields)._._.owner;
    uVar5 = VStack_6._0_8_;
    if (pMVar21 != (MVPickupOwner *)0x0) {
      uVar22._0_4_ = (pMVar21->fields).lookOrigin.x;
      uVar22._4_4_ = (pMVar21->fields).lookOrigin.y;
      fVar23 = (pMVar21->fields).lookOrigin.z;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                          ((Vector3 *)&OStack_3,&(((this->fields)._._.owner)->fields).lookDirection
                           ,pMVar15);
      aRStack_25[0].m_Origin.z = fVar23;
      VStack_8.x = pVVar24->x;
      VStack_8.y = pVVar24->y;
      fVar23 = pVVar24->z;
      VStack_6._0_8_ = VStack_8._0_8_;
      VStack_6.z = fVar23;
      aRStack_25[0].m_Origin._0_8_ = uVar22;
      fVar26 = (float)FUN_?(&VStack_6);
      if (_UNK_? < fVar26) {
        fVar27 = VStack_8.x / fVar26;
        fVar28 = VStack_8.y / fVar26;
        fVar23 = fVar23 / fVar26;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar27 = (pVVar29->zeroVector).x;
        fVar28 = (pVVar29->zeroVector).y;
        fVar23 = (pVVar29->zeroVector).z;
      }
      VStack_8.y = fVar28;
      VStack_8.x = fVar27;
      pMVar21 = (this->fields)._._.owner;
      aRStack_25[0].m_Direction.x = fVar27;
      uVar5 = VStack_6._0_8_;
      if (pMVar21 != (MVPickupOwner *)0x0) {
        fVar27 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                          (pMVar21,(this->fields).bulletSpeed,(MethodInfo *)0x0);
        pMVar21 = (this->fields)._._.owner;
        fVar26 = (this->fields).bulletRange;
        uVar5 = VStack_6._0_8_;
        if (pMVar21 != (MVPickupOwner *)0x0) {
          ignoreWoIDs = (HashSet_1_System_Int32_ *)
                        (*(pMVar21->klass->vtable).get_IgnoreWOIDs.methodPtr)();
          aRStack_25[0].m_Direction.z = fVar23;
          aRStack_25[0].m_Direction.y = VStack_8.y;
          Bullet::Bullet_Fire(this_00,fVar27,fVar26,aRStack_25,ignoreWoIDs,0,(MethodInfo *)0x0);
          uVar30._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
          uVar30._4_4_ = (this->fields).currentAmmo.hiddenValue;
          uVar31._0_4_ = (this->fields).currentAmmo.fakeValue;
          uVar31._4_1_ = (this->fields).currentAmmo.inited;
          uVar31._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          OStack_3._0_8_ = uVar30;
          OStack_3._8_8_ = uVar31;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          iVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_InternalDecrypt(&OStack_3,(MethodInfo *)0x0);
          iVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_Encrypt_1(iVar32 + -1,OStack_3.currentCryptoKey,(MethodInfo *)0x0);
          OStack_3.hiddenValue = iVar33;
          bVar34 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                   ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                             ((MethodInfo *)0x0);
          iVar33 = OStack_3.fakeValue;
          if (bVar34 != 0) {
            iVar33 = iVar32 + -1;
          }
          OStack_3.fakeValue = iVar33;
          uVar1 = OStack_3._8_8_;
          (this->fields).currentAmmo.currentCryptoKey = OStack_3.currentCryptoKey;
          (this->fields).currentAmmo.hiddenValue = OStack_3.hiddenValue;
          (this->fields).currentAmmo.fakeValue = iVar33;
          (this->fields).currentAmmo.inited = OStack_3.inited;
          *(undefined3 *)&(this->fields).currentAmmo.field_0xd = OStack_3._13_3_;
          OStack_3._8_8_ = uVar1;
          if (isLocal == 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
            uVar5 = VStack_6._0_8_;
            if (pMVar35 == (MVGameControllerBase *)0x0) goto code_?;
            pTVar7 = (this->fields)._._.muzzlePoint;
            this_03 = (pMVar35->fields).audioManager;
            pMVar15 = (MethodInfo *)(this->fields).fireSound;
            if (pTVar7 == (Transform *)0x0) goto code_?;
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
            pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar1 = func_?(&UNK_?);
              FUN_?(uVar1,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pvVar9,&VStack_8);
            uVar5 = VStack_6._0_8_;
            if (this_03 == (AudioManager *)0x0) goto code_?;
            VStack_6.x = VStack_8.x;
            VStack_6.y = VStack_8.y;
            VStack_6.z = VStack_8.z;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar35 = TypeInfo__MVGameControllerBase->static_fields->instance;
            uVar5 = VStack_6._0_8_;
            if (pMVar35 == (MVGameControllerBase *)0x0) goto code_?;
            this_03 = (pMVar35->fields).audioManager;
            pMVar15 = (MethodInfo *)(this->fields).fireSound;
            pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            uVar5 = VStack_6._0_8_;
            if ((pCVar36 == (Camera *)0x0) ||
               (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar36,(MethodInfo *)0x0),
               uVar5 = VStack_6._0_8_, pTVar7 == (Transform *)0x0)) goto code_?;
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
            if ((pTVar7->fields)._._.m_CachedPtr == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar1 = func_?(&UNK_?);
              FUN_?(uVar1,0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)();
            pCVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            uVar5 = VStack_6._0_8_;
            if ((pCVar36 == (Camera *)0x0) ||
               (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pCVar36,(MethodInfo *)0x0),
               uVar5 = VStack_6._0_8_, pTVar7 == (Transform *)0x0)) goto code_?;
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&OStack_3,pTVar7,(MethodInfo *)0x0);
            uVar5._0_4_ = pVVar24->x;
            uVar5._4_4_ = pVVar24->y;
            VStack_6.x = (float)uVar5 + VStack_8.x;
            if (this_03 == (AudioManager *)0x0) goto code_?;
            VStack_6.y = uVar5._4_4_ + VStack_8.y;
            VStack_6.z = pVVar24->z + VStack_8.z;
          }
          AudioManager::AudioManager_Play_2
                    (this_03,StringLiteral_projectile_fire,(AudioSource *)pMVar15,&VStack_6,
                     (MethodInfo *)0x0);
          pMVar21 = (this->fields)._._.owner;
          (this->fields)._.isFiring = 0;
          uVar5 = VStack_6._0_8_;
          if (pMVar21 != (MVPickupOwner *)0x0) {
            this_01 = (MVRigidBody *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                ((Component *)pMVar21,
                                 MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                );
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this_01 != (MVRigidBody *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((this_01->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                pMVar21 = (this->fields)._._.owner;
                uVar5 = VStack_6._0_8_;
                if (pMVar21 == (MVPickupOwner *)0x0) goto code_?;
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                    ((Vector3 *)&OStack_3,&(pMVar21->fields).lookDirection,pMVar15)
                ;
                uVar37 = pVVar24->x;
                uVar38 = pVVar24->y;
                fVar23 = (this->fields).recoilImpact;
                VStack_6.z = (float)((uint)pVVar24->z ^ _UNK_?) * fVar23;
                VStack_6.y = (float)(uVar38 ^ _UNK_?) * fVar23;
                VStack_6.x = (float)(uVar37 ^ _UNK_?) * fVar23;
                MVRigidBody::MVRigidBody_AddImpulse_1(this_01,&VStack_6,0,(MethodInfo *)0x0);
              }
            }
            return;
          }
        }
      }
    }
  }
code_?:
  VStack_6._0_8_ = uVar5;
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_OnLocalBulletHit
               (PickupItemDoubleSixShooter *this,VoxelHit *voxelHit,Ray *lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemDoubleSixShooter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pWVar3 = (pMVar2->fields).worldNetwork, pWVar3 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar3->fields)._.runtimeEventManagerNetwork;
    if (*(int *)&(TypeInfo__PickupItemDoubleSixShooter->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PickupItemDoubleSixShooter);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      VStack_4.point.x = (voxelHit->point).x;
      VStack_4.point.y = (voxelHit->point).y;
      VStack_4._8_8_ = *(undefined8 *)&(voxelHit->point).z;
      VStack_4.normal.y = (voxelHit->normal).y;
      VStack_4.normal.z = (voxelHit->normal).z;
      VStack_4.cubePos = voxelHit->cubePos;
      VStack_4._30_2_ = *(undefined2 *)&voxelHit->field_0x1e;
      VStack_4.face = voxelHit->face;
      VStack_4.isCubeHit = voxelHit->isCubeHit;
      VStack_4._37_3_ = *(undefined3 *)&voxelHit->field_0x25;
      VStack_4.woId = voxelHit->woId;
      VStack_4._44_4_ = *(undefined4 *)&voxelHit->field_0x2c;
      VStack_4.cube = voxelHit->cube;
      VStack_4.distance = voxelHit->distance;
      VStack_4._60_4_ = *(undefined4 *)&voxelHit->field_0x3c;
      VStack_4.collider = voxelHit->collider;
      VStack_4.transform = voxelHit->transform;
      VStack_4.interactionFlags = voxelHit->interactionFlags;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,&VStack_4,TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage,
                 (MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar5,voxelHit->woId,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
          this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar5,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            pIVar6 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_02,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pIVar6 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar6->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar2 == (MVNetworkGame *)0x0) ||
                    (this_01 = (pMVar2->fields).playerContainer,
                    this_01 == (MVPlayerContainer *)0x0)) ||
                   (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_03 == (MVLocalPlayer *)0x0
                   )) goto code_?;
                method_00 = (MethodInfo *)0x0;
                bVar7 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                   ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                if (bVar7 == 0) {
                  pMVar8 = (this->fields)._._.owner;
                  fVar9 = (voxelHit->point).x;
                  fVar10 = (voxelHit->point).y;
                  fVar11 = (voxelHit->point).z;
                  if ((pMVar8 == (MVPickupOwner *)0x0) ||
                     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0),
                     obj == (Transform *)0x0)) goto code_?;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  IStack_12.damage = 0.0;
                  IStack_12.impulse.x = 0.0;
                  IStack_12.impulse.y = 0.0;
                  pvVar13 = (obj->fields)._._.m_CachedPtr;
                  if (pvVar13 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pcVar14 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                    uVar15 = func_?(&UNK_?);
                    FUN_?(uVar15,0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pcRam_? = pcVar14;
                  (*pcRam_?)(pvVar13,&IStack_12);
                  IStack_12.impulse.y = fVar11 - IStack_12.impulse.y;
                  value = &IStack_12;
                  IStack_12.impulse.x = fVar10 - IStack_12.impulse.x;
                  IStack_12.damage = fVar9 - IStack_12.damage;
                  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      ((Vector3 *)&IStack_17,(Vector3 *)value,method_00);
                  pMVar8 = (this->fields)._._.owner;
                  fVar9 = (this->fields).hitImpact;
                  uVar18 = pVVar16->x;
                  uVar19 = pVVar16->y;
                  IStack_12.impulse.y = fVar9 * pVVar16->z;
                  IStack_17.interactionType = 0;
                  IStack_17.playerKilledByType = 0;
                  IStack_17._18_2_ = 0;
                  IStack_17.damage = 0.0;
                  IStack_17.impulse.x = 0.0;
                  IStack_17.impulse.y = 0.0;
                  IStack_17.impulse.z = 0.0;
                  IStack_12.impulse.x = fVar9 * (float)uVar19;
                  IStack_12.damage = fVar9 * (float)uVar18;
                  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                            (&IStack_17,
                             (InteractionPackageType__Enum)
                             CONCAT71((int7)((ulonglong)value >> 8),0x19),0.0,(Vector3 *)&IStack_12,
                             (PlayerKilledByType__Enum)
                             CONCAT71((int7)((ulonglong)in_stack_20 >> 8),0x12),
                             (MethodInfo *)0x0);
                  IStack_12.interactionType = IStack_17.interactionType;
                  IStack_12.playerKilledByType = IStack_17.playerKilledByType;
                  IStack_12._18_2_ = IStack_17._18_2_;
                  IStack_12.damage = IStack_17.damage;
                  IStack_12.impulse.x = IStack_17.impulse.x;
                  IStack_12.impulse.y = IStack_17.impulse.y;
                  IStack_12.impulse.z = IStack_17.impulse.z;
                  (*(pIVar6->klass->vtable).__unknown_1.methodPtr)
                            (pIVar6,pMVar8,&IStack_12,0,(pIVar6->klass->vtable).__unknown_1.method
                            );
                }
              }
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_ResetAmmo
               (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = (*(this->klass->vtable).get_MaxAmmo.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar4 = 0;
  if (bVar3 != 0) {
    iVar4 = value;
  }
  uStack_5 = (ulonglong)CONCAT14(1,iVar4);
  (this->fields).currentAmmo.currentCryptoKey = iVar2;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = (undefined4)uStack_5;
  (this->fields).currentAmmo.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uStack_5._5_3_;
  return;
}


/* PickupItemDoubleSixShooter() */

void Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemDoubleSixShooter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  aIStack_2[0].interactionType = 0;
  aIStack_2[0].playerKilledByType = 0;
  aIStack_2[0]._18_2_ = 0;
  aIStack_2[0].damage = 0.0;
  aIStack_2[0].impulse.x = 0.0;
  aIStack_2[0].impulse.y = 0.0;
  aIStack_2[0].impulse.z = 0.0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (aIStack_2,CONCAT31((int3)((uint)in_EDX >> 8),0x19),0.0,&VStack_1,
             CONCAT31((int3)((uint)in_stack_3 >> 8),0x12),(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemDoubleSixShooter->static_fields->baseDamage = aIStack_2[0].damage;
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_IsAmmoDepleted
               (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  if (0 < iVar4) {
    return 0;
  }
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar5 == '\0';
}


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_MaxAmmo
                  (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).maxAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).maxAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).maxAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).maxAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  UNRECOVERED_JUMPTABLE = (this->klass->vtable).CalculateMaxAmmo.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (*UNRECOVERED_JUMPTABLE)
                    (this,(ulonglong)uVar4,(this->klass->vtable).CalculateMaxAmmo.method,
                     UNRECOVERED_JUMPTABLE);
  return iVar5;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemDoubleSixShooter::PickupItemDoubleSixShooter_get_Quantity
                  (PickupItemDoubleSixShooter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar1._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar2._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar2._4_1_ = (this->fields).currentAmmo.inited;
  uVar2._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_8_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  return iVar4;
}

