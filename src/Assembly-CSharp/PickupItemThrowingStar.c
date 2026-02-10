
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_Awake
               (PickupItemThrowingStar *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).ResetAmmo.methodPtr)(this,(this->klass->vtable).ResetAmmo.method);
  return;
}


/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnBulletHit
               (PickupItemThrowingStar *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

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
                  (PoolEnums__Enum_NormalBulletSparks,&VStack_24,&QStack_25,(Nullable_1_Single_)0x0,
                   &NStack_23,(MethodInfo *)0x0);
        return;
      }
      pMVar27 = (this->fields)._._.owner;
      if ((pMVar27 != (MVPickupOwner *)0x0) &&
         (pMVar28 = (pMVar27->fields)._.worldObjectParent, pMVar28 != (MVWorldObjectClient *)0x0)) {
        iVar18 = (pMVar28->fields)._.ownerActorNr;
        if (*(int *)&(TypeInfo__PickupItemThrowingStar->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PickupItemThrowingStar);
        }
        pIVar29 = TypeInfo__IBulletImpactVisualizer;
        fVar21 = TypeInfo__PickupItemThrowingStar->static_fields->damage;
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

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnFire
               (PickupItemThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BulletThrowingStar__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_projectile_fire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  uVar2 = VStack_3._0_8_;
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
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&VStack_4);
    VStack_3.x = VStack_4.x;
    VStack_3.y = VStack_4.y;
    VStack_3.z = VStack_4.z;
    this_00 = BulletThrowingStar::BulletThrowingStar_CreateBullet
                        (PoolEnums__Enum_ThrowingStarBullet,&VStack_3,(MethodInfo *)0x0);
    uVar2 = VStack_3._0_8_;
    if (this_00 != (BulletThrowingStar *)0x0) {
      pBVar7 = (this_00->fields).onHit;
      pBVar8 = (BulletThrowingStar_OnHitDelegate *)
                FUN_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
      BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                (pBVar8,(Object *)this,
                 MethodInfo__PickupItemThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                 (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pBVar7 = (BulletThrowingStar_OnHitDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBVar7,(Delegate *)pBVar8,(MethodInfo *)0x0);
      if (pBVar7 == (BulletThrowingStar_OnHitDelegate *)0x0) {
        (this_00->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
      }
      else {
        pBVar8 = (BulletThrowingStar_OnHitDelegate *)0x0;
        if (pBVar7->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
          pBVar8 = pBVar7;
        }
        if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (this_00->fields).onHit = pBVar8;
        pBVar8 = (BulletThrowingStar_OnHitDelegate *)0x0;
        if (pBVar7->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
          pBVar8 = pBVar7;
        }
        if (pBVar8 == (BulletThrowingStar_OnHitDelegate *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(this_00->fields).onHit >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        method_00 = (MethodInfo *)(ulonglong)(uVar9 & 0x3f);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (longlong)method_00;
          }
          UNLOCK();
        } while (!bVar13);
      }
      if (isLocal != 0) {
        pBVar7 = (BulletThrowingStar_OnHitDelegate *)
                  FUN_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
        method_00 = MethodInfo__PickupItemThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
        ;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar7,(Object *)this,
                   MethodInfo__PickupItemThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        bVar13 = iRam_? != 0;
        (this_00->fields).onHitLocal = pBVar7;
        if (bVar13) {
          uVar9 = (uint)((ulonglong)&(this_00->fields).onHitLocal >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          method_00 = (MethodInfo *)(ulonglong)(uVar9 & 0x3f);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar13 = uVar11 == *puVar12;
            if (bVar13) {
              *puVar12 = uVar11 | 1L << (longlong)method_00;
            }
            UNLOCK();
          } while (!bVar13);
        }
      }
      pMVar14 = (this->fields)._._.owner;
      uVar2 = VStack_3._0_8_;
      if (pMVar14 != (MVPickupOwner *)0x0) {
        uVar15._0_4_ = (pMVar14->fields).lookOrigin.x;
        uVar15._4_4_ = (pMVar14->fields).lookOrigin.y;
        fVar16 = (pMVar14->fields).lookOrigin.z;
        pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            ((Vector3 *)&OStack_18,
                             &(((this->fields)._._.owner)->fields).lookDirection,method_00);
        aRStack_19[0].m_Origin.z = fVar16;
        VStack_4.x = pVVar17->x;
        VStack_4.y = pVVar17->y;
        fVar16 = pVVar17->z;
        VStack_3._0_8_ = VStack_4._0_8_;
        VStack_3.z = fVar16;
        aRStack_19[0].m_Origin._0_8_ = uVar15;
        fVar20 = (float)FUN_?(&VStack_3);
        if (_UNK_? < fVar20) {
          fVar21 = VStack_4.x / fVar20;
          fVar22 = VStack_4.y / fVar20;
          fVar16 = fVar16 / fVar20;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar21 = (pVVar23->zeroVector).x;
          fVar22 = (pVVar23->zeroVector).y;
          fVar16 = (pVVar23->zeroVector).z;
        }
        VStack_4.y = fVar22;
        VStack_4.x = fVar21;
        pMVar14 = (this->fields)._._.owner;
        aRStack_19[0].m_Direction.x = fVar21;
        uVar2 = VStack_3._0_8_;
        if (pMVar14 != (MVPickupOwner *)0x0) {
          fVar21 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar14,(this->fields).bulletSpeed,(MethodInfo *)0x0);
          pMVar14 = (this->fields)._._.owner;
          fVar20 = (this->fields).bulletRangeStraight;
          uVar2 = VStack_3._0_8_;
          if (pMVar14 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(pMVar14->klass->vtable).get_IgnoreWOIDs.methodPtr)();
            aRStack_19[0].m_Direction.z = fVar16;
            aRStack_19[0].m_Direction.y = VStack_4.y;
            BulletThrowingStar::BulletThrowingStar_Fire
                      (this_00,fVar21,fVar20,aRStack_19,ignoreWoIDs,(this->fields).bulletRangeFall,
                       (this->fields).bulletFallRate,(MethodInfo *)0x0);
            OStack_18.currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
            OStack_18.hiddenValue = (this->fields).currentAmmo.hiddenValue;
            OStack_18.fakeValue = (this->fields).currentAmmo.fakeValue;
            OStack_18.inited = (this->fields).currentAmmo.inited;
            OStack_18._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c
                == 0) {
              FUN_?();
            }
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
            iVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_InternalDecrypt(&OStack_18,(MethodInfo *)0x0);
            iVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_Encrypt_1
                               (iVar24 + -1,OStack_18.currentCryptoKey,(MethodInfo *)0x0);
            OStack_18.hiddenValue = iVar25;
            bVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                     ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                               ((MethodInfo *)0x0);
            iVar25 = OStack_18.fakeValue;
            if (bVar26 != 0) {
              iVar25 = iVar24 + -1;
            }
            OStack_18.fakeValue = iVar25;
            uVar2 = OStack_18._8_8_;
            (this->fields).currentAmmo.currentCryptoKey = OStack_18.currentCryptoKey;
            (this->fields).currentAmmo.hiddenValue = OStack_18.hiddenValue;
            (this->fields).currentAmmo.fakeValue = iVar25;
            (this->fields).currentAmmo.inited = OStack_18.inited;
            *(undefined3 *)&(this->fields).currentAmmo.field_0xd = OStack_18._13_3_;
            OStack_18._8_8_ = uVar2;
            if (isLocal == 0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar27 = TypeInfo__MVGameControllerBase->static_fields->instance;
              uVar2 = VStack_3._0_8_;
              if (pMVar27 != (MVGameControllerBase *)0x0) {
                pTVar1 = (this->fields)._._.muzzlePoint;
                this_01 = (pMVar27->fields).audioManager;
                audioSource = (this->fields).fireSound;
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
                  if (pvVar5 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar2 = func_?(&UNK_?);
                    FUN_?(uVar2,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)(pvVar5,&VStack_4);
                  uVar2 = VStack_3._0_8_;
                  if (this_01 != (AudioManager *)0x0) {
                    VStack_3.x = VStack_4.x;
                    VStack_3.y = VStack_4.y;
                    VStack_3.z = VStack_4.z;
code_?:
                    AudioManager::AudioManager_Play_2
                              (this_01,StringLiteral_projectile_fire,audioSource,&VStack_3,
                               (MethodInfo *)0x0);
                    (this->fields)._.isFiring = 0;
                    return;
                  }
                }
              }
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar27 = TypeInfo__MVGameControllerBase->static_fields->instance;
              uVar2 = VStack_3._0_8_;
              if (pMVar27 != (MVGameControllerBase *)0x0) {
                this_01 = (pMVar27->fields).audioManager;
                audioSource = (this->fields).fireSound;
                pCVar28 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                uVar2 = VStack_3._0_8_;
                if ((pCVar28 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar28,(MethodInfo *)0x0),
                   uVar2 = VStack_3._0_8_, pTVar1 != (Transform *)0x0)) {
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
                  if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar2 = func_?(&UNK_?);
                    FUN_?(uVar2,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)();
                  pCVar28 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  uVar2 = VStack_3._0_8_;
                  if ((pCVar28 != (Camera *)0x0) &&
                     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar28,(MethodInfo *)0x0),
                     uVar2 = VStack_3._0_8_, pTVar1 != (Transform *)0x0)) {
                    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward((Vector3 *)&OStack_18,pTVar1,(MethodInfo *)0x0)
                    ;
                    uVar2._0_4_ = pVVar17->x;
                    uVar2._4_4_ = pVVar17->y;
                    VStack_3.x = VStack_4.x + (float)uVar2;
                    if (this_01 != (AudioManager *)0x0) {
                      VStack_3.y = VStack_4.y + uVar2._4_4_;
                      VStack_3.z = VStack_4.z + pVVar17->z;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  VStack_3._0_8_ = uVar2;
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_OnLocalBulletHit
               (PickupItemThrowingStar *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit->woId,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                           (this_01,(MethodInfo *)0x0);
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
        if (pIVar2 != (InteractionDataHandlerBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pIVar2->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar3 != (MVNetworkGame *)0x0) &&
                (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), this_02 != (MVLocalPlayer *)0x0)
               ) {
              bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                return;
              }
              pMVar5 = (this->fields)._._.owner;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              aIStack_6[0].interactionType = 0;
              aIStack_6[0].playerKilledByType = 0;
              aIStack_6[0]._18_2_ = 0;
              aIStack_6[0].damage = 0.0;
              aIStack_6[0].impulse.x = 0.0;
              aIStack_6[0].impulse.y = 0.0;
              aIStack_6[0].impulse.z = 0.0;
              pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
              IStack_8.damage = (pVVar7->zeroVector).x;
              IStack_8.impulse.x = (pVVar7->zeroVector).y;
              IStack_8.impulse.y = (pVVar7->zeroVector).z;
              MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                        (aIStack_6,
                         (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)this_01 >> 8),0xf)
                         ,0.0,(Vector3 *)&IStack_8,
                         (PlayerKilledByType__Enum)
                         CONCAT71((int7)((ulonglong)in_stack_9 >> 8),0x13),
                         (MethodInfo *)0x0);
              IStack_8.interactionType = aIStack_6[0].interactionType;
              IStack_8.playerKilledByType = aIStack_6[0].playerKilledByType;
              IStack_8._18_2_ = aIStack_6[0]._18_2_;
              IStack_8.damage = aIStack_6[0].damage;
              IStack_8.impulse.x = aIStack_6[0].impulse.x;
              IStack_8.impulse.y = aIStack_6[0].impulse.y;
              IStack_8.impulse.z = aIStack_6[0].impulse.z;
              (*(pIVar2->klass->vtable).__unknown_1.methodPtr)
                        (pIVar2,pMVar5,&IStack_8,0,(pIVar2->klass->vtable).__unknown_1.method);
              return;
            }
            goto code_?;
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_ResetAmmo
               (PickupItemThrowingStar *this,MethodInfo *method)

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


/* PickupItemThrowingStar() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemThrowingStar);
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
  aIStack_1[0].interactionType = 0;
  aIStack_1[0].playerKilledByType = 0;
  aIStack_1[0]._18_2_ = 0;
  aIStack_1[0].damage = 0.0;
  aIStack_1[0].impulse.x = 0.0;
  aIStack_1[0].impulse.y = 0.0;
  aIStack_1[0].impulse.z = 0.0;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_3.x = (pVVar2->zeroVector).x;
  VStack_3.y = (pVVar2->zeroVector).y;
  VStack_3.z = (pVVar2->zeroVector).z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (aIStack_1,CONCAT31((int3)((uint)in_EDX >> 8),0xf),0.0,&VStack_3,
             CONCAT31((int3)((uint)in_stack_4 >> 8),0x13),(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemThrowingStar->static_fields->damage = aIStack_1[0].damage;
  return;
}


/* PickupItemThrowingStar() */

void Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar__ctor
               (PickupItemThrowingStar *this,MethodInfo *method)

{
  (this->fields).bulletRangeStraight = 50.0;
  (this->fields).bulletRangeFall = 50.0;
  (this->fields).bulletFallRate = 0.1;
  (this->fields).bulletSpeed = 80.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar4;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar4;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar3._0_4_ = 0.0;
  uVar3._4_1_ = 0;
  uVar3._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar6 != 0) {
    uVar3._0_4_ = 1.0;
    uVar3._4_1_ = 0;
    uVar3._5_3_ = 0;
  }
  bVar7 = iRam_? != 0;
  pPVar8 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar8->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar8->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uVar3;
  (this->fields)._.fireInterval.inited = SUB81(uVar3,4);
  *(int3 *)&(this->fields)._.fireInterval.field_0x15 = SUB83(uVar3,5);
  if (bVar7) {
    uVar9 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar11 == *puVar12;
      if (bVar7) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar7 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar13;
  if (bVar7) {
    uVar9 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar11 = *puVar12;
      LOCK();
      uVar10 = *puVar12;
      if (uVar11 == uVar10) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar11 != uVar10);
  }
  bVar7 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar7) {
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar16 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar17 = ppMVar15;
  if (lVar16 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar16 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar17;
      LOCK();
      bVar7 = uVar9 != uRam_?;
      uVar18 = uVar9;
      uVar19 = uVar9 + 1;
      if (bVar7) {
        uVar18 = uRam_?;
        uVar19 = uRam_?;
      }
      uRam_? = uVar19;
      UNLOCK();
    } while ((bVar7) && (ppMVar17 = (MethodInfo **)(ulonglong)uVar18, uVar9 = uVar18, uVar18 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar16;
  puVar20 = &(pOVar14->_1).field_0x1c;
  LOCK();
  bVar7 = *(int *)puVar20 == 1;
  if (bVar7) {
    *(undefined4 *)puVar20 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar21 = &(pOVar14->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar7 = *puVar21 == 1;
  if (bVar7) {
    *puVar21 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar7) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar22 = &(pOVar14->_1).cctor_thread;
    LOCK();
    bVar7 = (ulonglong)uVar9 == *psVar22;
    if (bVar7) {
      *psVar22 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar7) {
      return;
    }
    while( true ) {
      puVar20 = &(pOVar14->_1).field_0x1c;
      LOCK();
      bVar7 = *(int *)puVar20 == 1;
      if (bVar7) {
        *(undefined4 *)puVar20 = 1;
      }
      UNLOCK();
      if (bVar7) break;
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
code_?:
    lVar23._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
    lVar23._4_4_ = (pOVar14->_1).cctor_started;
    if (lVar23 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar14->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar14->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar14->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar14);
      ppMVar17 = ppMVar15;
      pIVar24 = (Il2CppClass *)pOVar14;
code_?:
      do {
        if (ppMVar17 == (MethodInfo **)0x0) {
          FUN_?(pIVar24);
          if (pIVar24->field_count != 0) {
            ppMVar17 = pIVar24->methods;
            pMVar25 = *ppMVar17;
code_?:
            if (pMVar25 != (MethodInfo *)0x0) {
              if ((*pMVar25->name == '.') && ((pMVar25->flags & 0x800) != 0)) {
                ppMVar26 = ppMVar15;
                while (ppMVar27 = ppMVar26 + 0x3052aacd,
                      ppMVar26 = (MethodInfo **)((longlong)ppMVar26 + 1),
                      *(char *)ppMVar27 == (pMVar25->name + -1)[(longlong)ppMVar26]) {
                  if (ppMVar26 == (MethodInfo **)0x7) {
                    FUN_?(pMVar25,0,0,alStackX_10);
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
          if (ppMVar17 < pIVar24->methods + pIVar24->field_count) {
            pMVar25 = *ppMVar17;
            goto code_?;
          }
        }
        pIVar24 = pIVar24->parent;
        ppMVar17 = ppMVar15;
      } while (pIVar24 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar14->_1).cctor_thread = 0;
    uVar10 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar14->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_28 = 0;
    uStack_29 = _UNK_?;
    uStack_30 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar14->_0).byval_arg,0,0);
    pppppppuVar23 = &pppppppuStack_78;
    if (0xf < uStack_30) {
      pppppppuVar23 = pppppppuStack_78;
    }
    FUN_?(&pppppppuStack_58,&UNK_?,pppppppuVar23);
    if (uStack_30 < 0x10) {
code_?:
      lVar16 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar23 = &pppppppuStack_58;
      if (0xf < uStack_31) {
        pppppppuVar23 = pppppppuStack_58;
      }
      uStack_29 = uVar3;
      uStack_30 = uVar10;
      lVar23 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar23);
      if (lVar16 != 0) {
        *(longlong *)(lVar23 + 0x28U) = lVar16;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar23 + 0x28U >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar12;
            LOCK();
            uVar10 = *puVar12;
            if (uVar11 == uVar10) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar11 != uVar10);
        }
      }
      FUN_?(pOVar14,lVar23);
      if (0xf < uStack_31) {
        pppppppuVar23 = pppppppuStack_58;
        if ((0xfff < uStack_31 + 1) &&
           (pppppppuVar23 = (undefined8 *******)pppppppuStack_58[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_58 + (-8 - (longlong)pppppppuVar23))))
        goto code_?;
        func_?(pppppppuVar23);
      }
      goto code_?;
    }
    pppppppuVar23 = pppppppuStack_78;
    if ((uStack_30 + 1 < 0x1000) ||
       (pppppppuVar23 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar23)) < 0x20)) {
      func_?(pppppppuVar23);
      uVar3 = _UNK_?;
      uVar10 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar5._0_4_ = (pOVar14->_1).initializationExceptionGCHandle;
  uVar5._4_4_ = (pOVar14->_1).cctor_started;
  uVar3 = FUN_?(uVar5);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_IsAmmoDepleted
               (PickupItemThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_MaxAmmo
                  (PickupItemThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemThrowingStar::PickupItemThrowingStar_get_Quantity
                  (PickupItemThrowingStar *this,MethodInfo *method)

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

