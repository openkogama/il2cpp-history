
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnBulletHit
               (PickupItemCenterGun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

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
        if (*(int *)&(TypeInfo__PickupItemCenterGun->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PickupItemCenterGun);
        }
        pIVar29 = TypeInfo__IBulletImpactVisualizer;
        fVar21 = TypeInfo__PickupItemCenterGun->static_fields->damage;
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

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnFire
               (PickupItemCenterGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CenterGun_fire);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    VStack_2.z = 0.0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3,&VStack_2);
    VStack_6.x = VStack_2.x;
    VStack_6.y = VStack_2.y;
    VStack_6.z = VStack_2.z;
    this_02 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_CenterGunBullet,&VStack_6,0.0,(MethodInfo *)0x0);
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (this_00,1,(MethodInfo *)0x0);
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 != (MVPickupOwner *)0x0) {
        uVar5._0_4_ = (pMVar7->fields).lookOrigin.x;
        uVar5._4_4_ = (pMVar7->fields).lookOrigin.y;
        fVar8 = (pMVar7->fields).lookOrigin.z;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            ((Vector3 *)&OStack_10,
                             &(((this->fields)._._.owner)->fields).lookDirection,method_00);
        aRStack_11[0].m_Origin.z = fVar8;
        VStack_2.x = pVVar9->x;
        VStack_2.y = pVVar9->y;
        fVar8 = pVVar9->z;
        VStack_6._0_8_ = VStack_2._0_8_;
        VStack_6.z = fVar8;
        aRStack_11[0].m_Origin._0_8_ = uVar5;
        fVar12 = (float)FUN_?(&VStack_6);
        if (_UNK_? < fVar12) {
          fVar13 = VStack_2.x / fVar12;
          fVar14 = VStack_2.y / fVar12;
          fVar8 = fVar8 / fVar12;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar13 = (pVVar15->zeroVector).x;
          fVar14 = (pVVar15->zeroVector).y;
          fVar8 = (pVVar15->zeroVector).z;
        }
        VStack_2.y = fVar14;
        VStack_2.x = fVar13;
        aRStack_11[0].m_Direction.x = fVar13;
        if (this_02 != (Bullet *)0x0) {
          pBVar16 = (this_02->fields).onHit;
          pBVar17 = (BulletThrowingStar_OnHitDelegate *)
                    FUN_?(TypeInfo__Bullet__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar17,(Object *)this,
                     MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pBVar16 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar16,(Delegate *)pBVar17,(MethodInfo *)0x0);
          if (pBVar16 == (Bullet_OnHitDelegate *)0x0) {
            (this_02->fields).onHit = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            pBVar18 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar16->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar18 = pBVar16;
            }
            if (pBVar18 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (this_02->fields).onHit = pBVar18;
            pBVar18 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar16->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar18 = pBVar16;
            }
            if (pBVar18 == (Bullet_OnHitDelegate *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar19 = (uint)((ulonglong)&(this_02->fields).onHit >> 0xc);
            uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
            do {
              uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
              puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
              LOCK();
              bVar23 = uVar21 == *puVar22;
              if (bVar23) {
                *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
              }
              UNLOCK();
            } while (!bVar23);
          }
          if (isLocal != 0) {
            pBVar17 = (BulletThrowingStar_OnHitDelegate *)
                      FUN_?(TypeInfo__Bullet__OnHitDelegate);
            BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                      (pBVar17,(Object *)this,
                       MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                       ,(MethodInfo *)0x0);
            bVar23 = iRam_? != 0;
            (this_02->fields).onHitLocal = (Bullet_OnHitDelegate *)pBVar17;
            if (bVar23) {
              uVar19 = (uint)((ulonglong)&(this_02->fields).onHitLocal >> 0xc);
              uVar20 = (ulonglong)((uVar19 & 0x1fffff) >> 6);
              do {
                uVar21 = *(ulonglong *)(uVar20 * 8 + 0xADDR);
                puVar22 = (ulonglong *)(uVar20 * 8 + 0xADDR);
                LOCK();
                bVar23 = uVar21 == *puVar22;
                if (bVar23) {
                  *puVar22 = uVar21 | 1L << (uVar19 & 0x3f);
                }
                UNLOCK();
              } while (!bVar23);
            }
          }
          pMVar7 = (this->fields)._._.owner;
          if (pMVar7 != (MVPickupOwner *)0x0) {
            fVar13 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                              (pMVar7,(this->fields).projectileSpeed,(MethodInfo *)0x0);
            pMVar7 = (this->fields)._._.owner;
            fVar12 = (this->fields).range;
            if (pMVar7 != (MVPickupOwner *)0x0) {
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(pMVar7->klass->vtable).get_IgnoreWOIDs.methodPtr)();
              aRStack_11[0].m_Direction.z = fVar8;
              aRStack_11[0].m_Direction.y = VStack_2.y;
              Bullet::Bullet_Fire(this_02,fVar13,fVar12,aRStack_11,ignoreWoIDs,0,(MethodInfo *)0x0);
              OStack_10.currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
              OStack_10.hiddenValue = (this->fields).currentAmmo.hiddenValue;
              OStack_10.fakeValue = (this->fields).currentAmmo.fakeValue;
              OStack_10.inited = (this->fields).currentAmmo.inited;
              OStack_10._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              iVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_InternalDecrypt(&OStack_10,(MethodInfo *)0x0);
              iVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_Encrypt_1
                                 (iVar24 + -1,OStack_10.currentCryptoKey,(MethodInfo *)0x0);
              OStack_10.hiddenValue = iVar25;
              bVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                       ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                 ((MethodInfo *)0x0);
              iVar25 = OStack_10.fakeValue;
              if (bVar26 != 0) {
                iVar25 = iVar24 + -1;
              }
              OStack_10.fakeValue = iVar25;
              uVar5 = OStack_10._8_8_;
              (this->fields).currentAmmo.currentCryptoKey = OStack_10.currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = OStack_10.hiddenValue;
              (this->fields).currentAmmo.fakeValue = iVar25;
              (this->fields).currentAmmo.inited = OStack_10.inited;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = OStack_10._13_3_;
              OStack_10._8_8_ = uVar5;
              if (isLocal == 0) {
                pTVar1 = (this->fields)._._.muzzlePoint;
                if (pTVar1 == (Transform *)0x0) goto code_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_2.x = 0.0;
                VStack_2.y = 0.0;
                VStack_2.z = 0.0;
                pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
                if (pvVar3 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)(pvVar3,&VStack_2);
                VStack_6.x = VStack_2.x;
                VStack_6.y = VStack_2.y;
                fVar8 = VStack_2.z;
              }
              else {
                pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar27 == (Camera *)0x0) ||
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar27,(MethodInfo *)0x0),
                   pTVar1 == (Transform *)0x0)) goto code_?;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_2.x = 0.0;
                VStack_2.y = 0.0;
                VStack_2.z = 0.0;
                if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar5 = func_?(&UNK_?);
                  FUN_?(uVar5,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                (*pcRam_?)();
                pCVar27 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar27 == (Camera *)0x0) ||
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar27,(MethodInfo *)0x0),
                   pTVar1 == (Transform *)0x0)) goto code_?;
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&OStack_10,pTVar1,(MethodInfo *)0x0);
                uVar28 = pVVar9->x;
                uVar29 = pVVar9->y;
                VStack_6.y = VStack_2.y + (float)uVar29;
                VStack_6.x = VStack_2.x + (float)uVar28;
                fVar8 = VStack_2.z + pVVar9->z;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar30 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar30 != (MVGameControllerBase *)0x0) &&
                 (this_01 = (pMVar30->fields).audioManager, this_01 != (AudioManager *)0x0)) {
                VStack_6.z = fVar8;
                AudioManager::AudioManager_Play_2
                          (this_01,StringLiteral_CenterGun_fire,(this->fields).audioSource,
                           &VStack_6,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnLocalBulletHit
               (PickupItemCenterGun *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

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
    FUN_?(&TypeInfo__PickupItemCenterGun);
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
    if (*(int *)&(TypeInfo__PickupItemCenterGun->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PickupItemCenterGun);
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
                (this_00,&VStack_4,TypeInfo__PickupItemCenterGun->static_fields->damage,
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
                if (((pMVar2 != (MVNetworkGame *)0x0) &&
                    (this_01 = (pMVar2->fields).playerContainer,
                    this_01 != (MVPlayerContainer *)0x0)) &&
                   (this_03 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_03 != (MVLocalPlayer *)0x0
                   )) {
                  bVar7 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                  if (bVar7 != 0) {
                    return;
                  }
                  fVar8 = (this->fields).impulseStrength;
                  uVar9 = (lineOfFire->m_Direction).x;
                  uVar10 = (lineOfFire->m_Direction).y;
                  IStack_11.impulse.y = fVar8 * (lineOfFire->m_Direction).z;
                  IStack_12.interactionType = 0;
                  IStack_12.playerKilledByType = 0;
                  IStack_12._18_2_ = 0;
                  IStack_12.damage = 0.0;
                  IStack_12.impulse.x = 0.0;
                  IStack_12.impulse.y = 0.0;
                  IStack_12.impulse.z = 0.0;
                  IStack_11.impulse.x = fVar8 * (float)uVar10;
                  IStack_11.damage = fVar8 * (float)uVar9;
                  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                            (&IStack_12,
                             (InteractionPackageType__Enum)
                             CONCAT71((int7)((ulonglong)this_02 >> 8),9),0.0,(Vector3 *)&IStack_11,
                             (PlayerKilledByType__Enum)
                             CONCAT71((int7)((ulonglong)in_stack_13 >> 8),1),
                             (MethodInfo *)0x0);
                  IStack_11.interactionType = IStack_12.interactionType;
                  IStack_11.playerKilledByType = IStack_12.playerKilledByType;
                  IStack_11._18_2_ = IStack_12._18_2_;
                  IStack_11.damage = IStack_12.damage;
                  IStack_11.impulse.x = IStack_12.impulse.x;
                  IStack_11.impulse.y = IStack_12.impulse.y;
                  IStack_11.impulse.z = IStack_12.impulse.z;
                  (*(pIVar6->klass->vtable).__unknown_1.methodPtr)
                            (pIVar6,(this->fields)._._.owner,&IStack_11,0,
                             (pIVar6->klass->vtable).__unknown_1.method);
                  return;
                }
                goto code_?;
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

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_ResetAmmo
               (PickupItemCenterGun *this,MethodInfo *method)

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


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_TriggerBegin
               (PickupItemCenterGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  (this->fields)._.isFiring = 1;
  return;
}


/* PickupItemCenterGun() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemCenterGun);
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
            (aIStack_2,CONCAT31((int3)((uint)in_EDX >> 8),9),0.0,&VStack_1,
             CONCAT31((int3)((uint)in_stack_3 >> 8),1),(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemCenterGun->static_fields->damage = aIStack_2[0].damage;
  return;
}


/* PickupItemCenterGun() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun__ctor
               (PickupItemCenterGun *this,MethodInfo *method)

{
  (this->fields).projectileSpeed = 70.0;
  (this->fields).range = 100.0;
  (this->fields).impulseStrength = 700.0;
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
                while (ppMVar27 = ppMVar26 + 0x3052a1b1,
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

bool Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_IsAmmoDepleted
               (PickupItemCenterGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_MaxAmmo
                  (PickupItemCenterGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_Quantity
                  (PickupItemCenterGun *this,MethodInfo *method)

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

