
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_Awake
               (PickupItemBazooka *this,MethodInfo *method)

{
  (*(this->klass->vtable).ResetAmmo.methodPtr)(this,(this->klass->vtable).ResetAmmo.method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_layer_parameter_constant_should_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0x1000;
  bVar2 = 0;
  do {
    bVar2 = bVar2 + 1;
    uVar1 = (int)uVar1 >> 1;
  } while ((uVar1 & 1) == 0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_layer_parameter_constant_should_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).layerMask = (1 << (bVar2 & 0x1f)) + 1;
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnFire
               (PickupItemBazooka *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Ray>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Bullet__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_rocket_fired);
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
    this_00 = Bullet::Bullet_CreateBullet
                        (PoolEnums__Enum_BazookaBullet,&VStack_3,0.0,(MethodInfo *)0x0);
    uVar2 = VStack_3._0_8_;
    if (this_00 != (Bullet *)0x0) {
      pBVar7 = (this_00->fields).onHit;
      pBVar8 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate);
      BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                (pBVar8,(Object *)this,
                 MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_,(MethodInfo *)0x0)
      ;
      pBVar9 = (Bullet_OnHitDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pBVar7,(Delegate *)pBVar8,(MethodInfo *)0x0);
      pBVar7 = (Bullet_OnHitDelegate *)0x0;
      if (pBVar9 == (Bullet_OnHitDelegate *)0x0) {
        (this_00->fields).onHit = (Bullet_OnHitDelegate *)0x0;
      }
      else {
        pBVar10 = pBVar7;
        if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar10 = pBVar9;
        }
        if (pBVar10 == (Bullet_OnHitDelegate *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (this_00->fields).onHit = pBVar10;
        pBVar10 = pBVar7;
        if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
          pBVar10 = pBVar9;
        }
        if (pBVar10 == (Bullet_OnHitDelegate *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&(this_00->fields).onHit >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar15 = uVar13 == *puVar14;
          if (bVar15) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      if (isLocal == 0) {
        pAVar16 = (this_00->fields).onOutOfRange;
        pDVar17 = (Delegate *)FUN_?(TypeInfo__System__Action<UnityEngine::Ray>);
        FUN_?(pDVar17,this);
        method_00 = (MethodInfo *)0x0;
        pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar16,pDVar17,(MethodInfo *)0x0);
        pAVar18 = TypeInfo__System__Action<UnityEngine::Ray>;
        if (pDVar17 == (Delegate *)0x0) {
          (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
        }
        else {
          pAVar16 = (Action_1_UnityEngine_Ray_ *)
                    FUN_?(pDVar17,TypeInfo__System__Action<UnityEngine::Ray>);
          if (pAVar16 == (Action_1_UnityEngine_Ray_ *)0x0) {
            FUN_?(pDVar17,pAVar18);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this_00->fields).onOutOfRange = pAVar16;
          pAVar18 = TypeInfo__System__Action<UnityEngine::Ray>;
          lVar19 = FUN_?(pDVar17,TypeInfo__System__Action<UnityEngine::Ray>);
          if (lVar19 == 0) {
            FUN_?(pDVar17,pAVar18);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(this_00->fields).onOutOfRange >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          method_00 = (MethodInfo *)(ulonglong)(uVar11 & 0x3f);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (longlong)method_00;
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      else {
        pBVar9 = (this_00->fields).onHitLocal;
        pBVar8 = (BulletThrowingStar_OnHitDelegate *)FUN_?(TypeInfo__Bullet__OnHitDelegate)
        ;
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar8,(Object *)this,
                   MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar9 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar9,(Delegate *)pBVar8,(MethodInfo *)0x0);
        if (pBVar9 == (Bullet_OnHitDelegate *)0x0) {
          (this_00->fields).onHitLocal = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          pBVar10 = pBVar7;
          if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar10 = pBVar9;
          }
          if (pBVar10 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this_00->fields).onHitLocal = pBVar10;
          if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar7 = pBVar9;
          }
          if (pBVar7 == (Bullet_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(this_00->fields).onHitLocal >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
        pAVar16 = (this_00->fields).onOutOfRange;
        pDVar17 = (Delegate *)FUN_?(TypeInfo__System__Action<UnityEngine::Ray>);
        FUN_?(pDVar17,this);
        method_00 = (MethodInfo *)0x0;
        pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar16,pDVar17,(MethodInfo *)0x0);
        pAVar18 = TypeInfo__System__Action<UnityEngine::Ray>;
        if (pDVar17 == (Delegate *)0x0) {
          (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)0x0;
        }
        else {
          pAVar16 = (Action_1_UnityEngine_Ray_ *)
                    FUN_?(pDVar17,TypeInfo__System__Action<UnityEngine::Ray>);
          if (pAVar16 == (Action_1_UnityEngine_Ray_ *)0x0) {
            FUN_?(pDVar17,pAVar18);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this_00->fields).onOutOfRange = pAVar16;
          pAVar18 = TypeInfo__System__Action<UnityEngine::Ray>;
          lVar19 = FUN_?(pDVar17,TypeInfo__System__Action<UnityEngine::Ray>);
          if (lVar19 == 0) {
            FUN_?(pDVar17,pAVar18);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)&(this_00->fields).onOutOfRange >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          method_00 = (MethodInfo *)(ulonglong)(uVar11 & 0x3f);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (longlong)method_00;
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      pMVar20 = (this->fields)._._.owner;
      uVar2 = VStack_3._0_8_;
      if (pMVar20 != (MVPickupOwner *)0x0) {
        uVar21._0_4_ = (pMVar20->fields).lookOrigin.x;
        uVar21._4_4_ = (pMVar20->fields).lookOrigin.y;
        fVar22 = (pMVar20->fields).lookOrigin.z;
        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                            ((Vector3 *)&OStack_24,
                             &(((this->fields)._._.owner)->fields).lookDirection,method_00);
        aRStack_25[0].m_Origin.z = fVar22;
        VStack_4.x = pVVar23->x;
        VStack_4.y = pVVar23->y;
        fVar22 = pVVar23->z;
        VStack_3._0_8_ = VStack_4._0_8_;
        VStack_3.z = fVar22;
        aRStack_25[0].m_Origin._0_8_ = uVar21;
        fVar26 = (float)FUN_?(&VStack_3);
        if (_UNK_? < fVar26) {
          fVar27 = VStack_4.x / fVar26;
          fVar28 = VStack_4.y / fVar26;
          fVar22 = fVar22 / fVar26;
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
          fVar22 = (pVVar29->zeroVector).z;
        }
        VStack_4.y = fVar28;
        VStack_4.x = fVar27;
        pMVar20 = (this->fields)._._.owner;
        aRStack_25[0].m_Direction.x = fVar27;
        uVar2 = VStack_3._0_8_;
        if (pMVar20 != (MVPickupOwner *)0x0) {
          fVar27 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar20,(this->fields).rocketSpeed,(MethodInfo *)0x0);
          pMVar20 = (this->fields)._._.owner;
          fVar26 = (this->fields).rocketRange;
          uVar2 = VStack_3._0_8_;
          if (pMVar20 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(pMVar20->klass->vtable).get_IgnoreWOIDs.methodPtr)();
            aRStack_25[0].m_Direction.z = fVar22;
            aRStack_25[0].m_Direction.y = VStack_4.y;
            Bullet::Bullet_Fire(this_00,fVar27,fVar26,aRStack_25,ignoreWoIDs,0,(MethodInfo *)0x0);
            if (isLocal == 0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar30 = TypeInfo__MVGameControllerBase->static_fields->instance;
              uVar2 = VStack_3._0_8_;
              if (pMVar30 != (MVGameControllerBase *)0x0) {
                pTVar1 = (this->fields)._._.muzzlePoint;
                this_01 = (pMVar30->fields).audioManager;
                audioSource = (this->fields).aSource;
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
                              (this_01,StringLiteral_rocket_fired,audioSource,&VStack_3,
                               (MethodInfo *)0x0);
                    OStack_24.currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
                    OStack_24.hiddenValue = (this->fields).currentAmmo.hiddenValue;
                    OStack_24.fakeValue = (this->fields).currentAmmo.fakeValue;
                    OStack_24.inited = (this->fields).currentAmmo.inited;
                    OStack_24._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
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
                    iVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                             ObscuredInt::ObscuredInt_InternalDecrypt(&OStack_24,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    OStack_24.currentCryptoKey = 0;
                    OStack_24.hiddenValue = 0;
                    OStack_24.fakeValue = 0;
                    OStack_24.inited = 0;
                    OStack_24._13_3_ = 0;
                    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                                 field_0x1c == 0) {
                      FUN_?();
                    }
                    iVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                             ObscuredInt::ObscuredInt_Encrypt(iVar31 + -1,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                                 field_0x1c == 0) {
                      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
                    }
                    OStack_24.inited = 1;
                    OStack_24.hiddenValue = iVar32;
                    OStack_24.currentCryptoKey =
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->
                         cryptoKey;
                    bVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                       ((MethodInfo *)0x0);
                    iVar34 = 0;
                    if (bVar33 != 0) {
                      iVar34 = iVar31 + -1;
                    }
                    (this->fields).currentAmmo.currentCryptoKey = OStack_24.currentCryptoKey;
                    (this->fields).currentAmmo.hiddenValue = OStack_24.hiddenValue;
                    (this->fields).currentAmmo.fakeValue = iVar34;
                    (this->fields).currentAmmo.inited = OStack_24.inited;
                    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = OStack_24._13_3_;
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
              pMVar30 = TypeInfo__MVGameControllerBase->static_fields->instance;
              uVar2 = VStack_3._0_8_;
              if (pMVar30 != (MVGameControllerBase *)0x0) {
                this_01 = (pMVar30->fields).audioManager;
                audioSource = (this->fields).aSource;
                pCVar35 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                uVar2 = VStack_3._0_8_;
                if ((pCVar35 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar35,(MethodInfo *)0x0),
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
                  pCVar35 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  uVar2 = VStack_3._0_8_;
                  if ((pCVar35 != (Camera *)0x0) &&
                     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar35,(MethodInfo *)0x0),
                     uVar2 = VStack_3._0_8_, pTVar1 != (Transform *)0x0)) {
                    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward((Vector3 *)&OStack_24,pTVar1,(MethodInfo *)0x0)
                    ;
                    uVar2._0_4_ = pVVar23->x;
                    uVar2._4_4_ = pVVar23->y;
                    VStack_3.x = VStack_4.x + (float)uVar2;
                    if (this_01 != (AudioManager *)0x0) {
                      VStack_3.y = VStack_4.y + uVar2._4_4_;
                      VStack_3.z = VStack_4.z + pVVar23->z;
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


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHit
               (PickupItemBazooka *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    VStack_2.x = (voxelHit->point).x;
    VStack_2.y = (voxelHit->point).y;
    VStack_2.z = (voxelHit->point).z;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              ((pPVar1->fields).particleExplosion,&VStack_2,_UNK_?,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitLocal
               (PickupItemBazooka *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  pRStackX_18 = lineOfFire;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  lVar2._0_4_ = (voxelHit->point).x;
  lVar2._4_4_ = (voxelHit->point).y;
  uVar3 = *(undefined8 *)&(voxelHit->point).z;
  fStack_4 = (voxelHit->normal).y;
  fVar5 = (voxelHit->normal).z;
  uStack_6 = *(undefined8 *)&voxelHit->cubePos;
  uStack_7._0_4_ = voxelHit->face;
  uStack_7._4_1_ = voxelHit->isCubeHit;
  uStack_7._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
  uStack_8 = *(undefined8 *)&voxelHit->woId;
  pCStack_9 = voxelHit->cube;
  uStack_10 = *(undefined8 *)&voxelHit->distance;
  pCStack_11 = voxelHit->collider;
  pTStack_12 = voxelHit->transform;
  iStack_13 = voxelHit->interactionFlags;
  uStack_14 = (undefined4)uVar3;
  fStack_15 = (float)((ulonglong)uVar3 >> 0x20);
  lStack_16 = lVar2;
  fStack_17 = fVar5;
  runtimeEvent = (RuntimeEvent *)
                 FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  VStack_18.x = fStack_15;
  VStack_18.y = fStack_4;
  uVar3 = *(undefined8 *)&(voxelHit->point).z;
  (runtimeEvent->fields)._RuntimeEventType_k__BackingField = 3;
  VStack_19.z = (float)uVar3;
  VStack_18.z = fVar5;
  VStack_19._0_8_ = lVar2;
  pIVar20 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                      (&IStackX_10,&VStack_19,&VStack_18,(MethodInfo *)0x0);
  bVar21 = cRam_? == '\0';
  iVar22 = pIVar20->y;
  iVar23 = pIVar20->z;
  (runtimeEvent->fields).position.x = pIVar20->x;
  (runtimeEvent->fields).position.y = iVar22;
  (runtimeEvent->fields).position.z = iVar23;
  if (bVar21) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar24 != (MVGameControllerBase *)0x0) &&
       (pMVar25 = (pMVar24->fields).game, pMVar25 != (MVNetworkGame *)0x0)) &&
      (pWVar26 = (pMVar25->fields).worldNetwork, pWVar26 != (WorldNetwork *)0x0)) &&
     (this_00 = (RuntimeEventManager *)(pWVar26->fields)._.runtimeEventManagerNetwork,
     this_00 != (RuntimeEventManager *)0x0)) {
    bVar27 = RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                       (this_00,(ExplosionEvent *)runtimeEvent,(MethodInfo *)0x0);
    if (bVar27 != 0) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                (this_03,runtimeEvent,(MethodInfo *)0x0);
    }
    uVar28 = (voxelHit->normal).y;
    uVar29 = (voxelHit->normal).z;
    uStack_6 = *(undefined8 *)&voxelHit->cubePos;
    uStack_7._0_4_ = voxelHit->face;
    uStack_7._4_1_ = voxelHit->isCubeHit;
    uStack_7._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
    uStack_8 = *(undefined8 *)&voxelHit->woId;
    fVar30 = (voxelHit->point).x;
    fVar31 = (voxelHit->point).y;
    fVar32 = (voxelHit->point).z;
    fVar5 = (this->fields).blastRadius;
    pCStack_9 = voxelHit->cube;
    uStack_10 = *(undefined8 *)&voxelHit->distance;
    pCStack_11 = voxelHit->collider;
    pTStack_12 = voxelHit->transform;
    iStack_13 = voxelHit->interactionFlags;
    fStack_4 = (float)uVar28;
    fStack_17 = (float)uVar29;
    if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
    }
    iVar33 = (this->fields).layerMask;
    pCVar34 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
    if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar35 = (MethodInfo *)0x0;
    VStack_18.z = fVar32;
    VStack_18.x = fVar30;
    VStack_18.y = fVar31;
    iVar33 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                       (&VStack_18,fVar5,pCVar34,iVar33,(MethodInfo *)0x0);
    this_04 = (HashSet_1_System_Int32Enum_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(this_04,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    fVar30 = _UNK_?;
    fVar5 = _UNK_?;
    IStackX_10.x = 0;
    IStackX_10.y = 0;
    if (0 < iVar33) {
      lStack_36 = 0x20;
      lStack_37 = 0;
      VStack_19._0_8_ = (longlong)iVar33;
      do {
        if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
        }
        pCVar34 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
        if (pCVar34 == (Collider__Array *)0x0) goto code_?;
        if ((uint)pCVar34->max_length <= (uint)IStackX_10._0_4_) {
          FUN_?();
          pcVar38 = (code *)swi(3);
          (*pcVar38)();
          return;
        }
        this_01 = *(Component **)((longlong)pCVar34->vector + lStack_36 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar39 = (this_01->fields)._.m_CachedPtr;
        if (pvVar39 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
          pcVar38 = (code *)swi(3);
          (*pcVar38)();
          return;
        }
        pcVar38 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar38 = (code *)FUN_?(&UNK_?), pcVar38 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar38 = (code *)swi(3);
          (*pcVar38)();
          return;
        }
        pcRam_? = pcVar38;
        pvVar39 = (void *)(*pcRam_?)(pvVar39);
        pTVar40 = (Transform *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar39,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        this_05 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (pTVar40,(MethodInfo *)0x0);
        if (this_05 != (MVWorldObjectClient *)0x0) {
          if (this_04 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
          bVar27 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                   HashSet_1_System_Int32Enum__Contains
                             (this_04,(this_05->fields)._.id,
                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_)
          ;
          if (bVar27 == 0) {
            pIVar41 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_05,(MethodInfo *)0x0);
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
            if (pIVar41 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar41->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                iVar42 = (this_05->fields)._.ownerActorNr;
                pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar25 == (MVNetworkGame *)0x0) ||
                    (pMVar43 = (pMVar25->fields).playerContainer,
                    pMVar43 == (MVPlayerContainer *)0x0)) ||
                   (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (pMVar43,(MethodInfo *)0x0), pMVar44 == (MVLocalPlayer *)0x0
                   )) goto code_?;
                if (iVar42 != (pMVar44->fields)._._ActorNr_k__BackingField) {
                  pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if (((pMVar25 == (MVNetworkGame *)0x0) ||
                      (pMVar43 = (pMVar25->fields).playerContainer,
                      pMVar43 == (MVPlayerContainer *)0x0)) ||
                     (pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                          (pMVar43,(MethodInfo *)0x0),
                     pMVar44 == (MVLocalPlayer *)0x0)) goto code_?;
                  bVar27 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                     ((MVPlayer *)pMVar44,this_05,(MethodInfo *)0x0);
                  if (bVar27 != 0) goto code_?;
                }
                pCVar45 = (pIVar41->fields).closestPoint;
                uVar46 = (voxelHit->normal).y;
                uVar47 = (voxelHit->normal).z;
                uStack_6 = *(undefined8 *)&voxelHit->cubePos;
                uStack_7._0_4_ = voxelHit->face;
                uStack_7._4_1_ = voxelHit->isCubeHit;
                uStack_7._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
                uStack_8 = *(undefined8 *)&voxelHit->woId;
                pCStack_9 = voxelHit->cube;
                uStack_10 = *(undefined8 *)&voxelHit->distance;
                auVar48._0_4_ = (voxelHit->point).x;
                auVar48._4_4_ = (voxelHit->point).y;
                auVar48._8_4_ = (voxelHit->point).z;
                iStack_13 = voxelHit->interactionFlags;
                pCStack_11 = voxelHit->collider;
                pTStack_12 = voxelHit->transform;
                fStack_4 = (float)uVar46;
                fStack_17 = (float)uVar47;
                if (pCVar45 == (ClosestPointBase *)0x0) goto code_?;
                _Stack_198 = auVar48._0_8_;
                uStack_49 = auVar48._8_4_;
                puVar50 = (undefined8 *)
                          (*(pCVar45->klass->vtable).__unknown.methodPtr)
                                    (auStack_51,pCVar45,&_Stack_198,
                                     (pCVar45->klass->vtable).__unknown.method);
                uStack_52 = *puVar50;
                uStack_53 = *(undefined4 *)(puVar50 + 1);
                _Stack_178 = auVar48._0_8_;
                uStack_54 = auVar48._8_4_;
                fVar31 = (float)FUN_?(&_Stack_178);
                this_02 = (this->fields).damageFalloff;
                if (this_02 == (AnimationCurve *)0x0) goto code_?;
                fVar31 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                         AnimationCurve_Evaluate
                                   (this_02,fVar31 / (this->fields).blastRadius,(MethodInfo *)0x0);
                pIVar55 = *(Il2CppClass **)&(this->fields).baseDamage;
                pBVar56 = (this->fields).baseDamage.hiddenValueOld;
                pIVar57 = *(InvokerMethod *)&(this->fields).baseDamage.fakeValue;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                auStack_58._0_8_ = pIVar55;
                auStack_58._8_8_ = pBVar56;
                pIStack_59 = pIVar57;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                fVar32 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_InternalDecrypt
                                   ((ObscuredFloat *)auStack_58,(MethodInfo *)0x0);
                fVar32 = fVar32 * fVar31;
                if ((0.0 <= fVar32) &&
                   ((damage = fVar30, fVar30 < fVar32 || (damage = fVar32, 0.0 < fVar32)))) {
                  pTVar40 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(this_01,(MethodInfo *)0x0);
                  if (pTVar40 == (Transform *)0x0) goto code_?;
                  uVar60 = (voxelHit->normal).y;
                  uVar61 = (voxelHit->normal).z;
                  uStack_6 = *(undefined8 *)&voxelHit->cubePos;
                  method_01 = (MethodInfo *)0x0;
                  uStack_7._0_4_ = voxelHit->face;
                  uStack_7._4_1_ = voxelHit->isCubeHit;
                  uStack_7._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
                  uStack_8 = *(undefined8 *)&voxelHit->woId;
                  fVar32 = (voxelHit->point).x;
                  fVar62 = (voxelHit->point).y;
                  fVar63 = (voxelHit->point).z;
                  pCStack_9 = voxelHit->cube;
                  uStack_10 = *(undefined8 *)&voxelHit->distance;
                  pCStack_11 = voxelHit->collider;
                  pTStack_12 = voxelHit->transform;
                  iStack_13 = voxelHit->interactionFlags;
                  fStack_4 = (float)uVar60;
                  fStack_17 = (float)uVar61;
                  pVVar64 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_65,pTVar40,(MethodInfo *)0x0);
                  pIStack_66 = *(Il2CppClass **)pVVar64;
                  auStack_67._8_4_ = pVVar64->z - fVar63;
                  method_00 = (MethodInfo *)auStack_67;
                  auStack_67._0_8_ =
                       CONCAT44((float)SUB84((ulonglong)pIStack_66 >> 0x20,0) - fVar62,
                                SUB84(pIStack_66,0) - fVar32);
                  pVVar64 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      (aVStack_68,(Vector3 *)method_00,method_01);
                  uVar69 = pVVar64->x;
                  uVar70 = pVVar64->y;
                  VStack_18.z = pVVar64->z;
                  VStack_18.y = (float)uVar70 + fVar5;
                  VStack_18.x = (float)uVar69;
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                            (&VStack_18,method_00);
                  fVar32 = (this->fields).baseImpulse;
                  fVar63 = fVar32 * VStack_18.y;
                  fVar62 = VStack_18.x * fVar32;
                  fVar32 = VStack_18.z * fVar32;
                  iVar42 = (this_05->fields)._.ownerActorNr;
                  pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar25 == (MVNetworkGame *)0x0) ||
                     (pMVar43 = (pMVar25->fields).playerContainer,
                     pMVar43 == (MVPlayerContainer *)0x0)) goto code_?;
                  uVar3 = 0;
                  pMVar44 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (pMVar43,(MethodInfo *)0x0);
                  if (pMVar44 == (MVLocalPlayer *)0x0) goto code_?;
                  iVar71 = (pMVar44->fields)._._ActorNr_k__BackingField;
                  pMVar72 = (this->fields)._._.owner;
                  uVar73 = 0;
                  pIStack_66 = (Il2CppClass *)0x0;
                  pBStack_74 = (Byte__Array *)0x0;
                  fStack_75 = 0.0;
                  pIStack_76 = (InvokerMethod)CONCAT44(fVar63 * fVar31,fVar62 * fVar31);
                  fStack_77 = fVar32 * fVar31;
                  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                            ((InteractionData *)&pIStack_66,
                             (InteractionPackageType__Enum)
                             CONCAT71((int7)((ulonglong)uVar3 >> 8),0xd),damage,
                             (Vector3 *)&pIStack_76,
                             (PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)pMVar35 >> 8),2),
                             (MethodInfo *)0x0);
                  pIStack_59 = (InvokerMethod)CONCAT44(pIStack_59._4_4_,fStack_75);
                  pMVar35 = (pIVar41->klass->vtable).__unknown_1.method;
                  auStack_58._0_8_ = pIStack_66;
                  auStack_58._8_8_ = pBStack_74;
                  (*(pIVar41->klass->vtable).__unknown_1.methodPtr)
                            (pIVar41,pMVar72,auStack_58,(ulonglong)(iVar42 == iVar71),pMVar35);
                  lVar2 = FUN_?(this_05,TypeInfo__IBulletImpactVisualizer);
                  pIVar78 = TypeInfo__IBulletImpactVisualizer;
                  if (lVar2 != 0) {
                    iStack_1 = 0;
                    pMVar72 = (this->fields)._._.owner;
                    if ((pMVar72 == (MVPickupOwner *)0x0) ||
                       (pMVar79 = (pMVar72->fields)._.worldObjectParent,
                       pMVar79 == (MVWorldObjectClient *)0x0)) goto code_?;
                    iVar33 = (pMVar79->fields)._.ownerActorNr;
                    lVar2 = FUN_?(this_05,TypeInfo__IBulletImpactVisualizer);
                    pIVar80 = TypeInfo__IBulletImpactVisualizer;
                    if (lVar2 == 0) {
                      FUN_?(this_05,pIVar78);
                      pcVar38 = (code *)swi(3);
                      (*pcVar38)();
                      return;
                    }
                    lVar2 = FUN_?(this_05,TypeInfo__IBulletImpactVisualizer);
                    if (lVar2 == 0) {
                      FUN_?(this_05,pIVar80);
                      pcVar38 = (code *)swi(3);
                      (*pcVar38)();
                      return;
                    }
                    pMVar35 = (MethodInfo *)auStack_58;
                    auStack_58._0_8_ = *(undefined8 *)&pRStackX_18->m_Origin;
                    auStack_58._8_8_ = *(undefined8 *)&(pRStackX_18->m_Origin).z;
                    pIStack_59 = *(InvokerMethod *)&(pRStackX_18->m_Direction).y;
                    iStack_13 = iStack_1;
                    lStack_16 = 0;
                    uStack_14 = 0;
                    fStack_15 = 0.0;
                    fStack_4 = 0.0;
                    fStack_17 = 0.0;
                    uStack_6 = 0;
                    uStack_7 = 0;
                    uStack_8 = 0;
                    pCStack_9 = (Cube *)0x0;
                    uStack_10 = 0;
                    pCStack_11 = (Collider *)0x0;
                    pTStack_12 = (Transform *)0x0;
                    FUN_?(pMVar35,TypeInfo__IBulletImpactVisualizer,lVar2,&lStack_16,
                                  pMVar35,CONCAT44(uVar73,iVar33),0);
                  }
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__AddIfNotPresent
                            ((HashSet_1_System_Int32_ *)this_04,(this_05->fields)._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass
                             ->rgctx_data[0x15].method);
                }
              }
            }
          }
        }
code_?:
        IStackX_10._0_4_ = IStackX_10._0_4_ + 1;
        lStack_37 = lStack_37 + 1;
        lStack_36 = lStack_36 + 8;
      } while (lStack_37 < (longlong)VStack_19._0_8_);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
  return;
}


/* Void OnHitMaxRangeLocal(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeLocal
               (PickupItemBazooka *this,Ray *lineOfFire,MethodInfo *method)

{
  fVar1 = (this->fields).rocketRange;
  uStack_2 = 0;
  uStack_3._0_4_ = 0;
  uStack_3._4_1_ = 0;
  uStack_3._5_3_ = 0;
  uStack_4._0_4_ = 0;
  uStack_4._4_4_ = 0;
  pCStack_5 = (Cube *)0x0;
  uStack_6._0_4_ = 0.0;
  uStack_6._4_4_ = 0;
  pCStack_7 = (Collider *)0x0;
  pTStack_8 = (Transform *)0x0;
  uStack_9 = 0;
  pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if (pCVar10 != (Camera *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pCVar10->fields)._._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcRam_? = pcVar11;
    fVar13 = (float)(*pcRam_?)();
    if (fVar13 < fVar1) {
      pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar10 == (Camera *)0x0) goto code_?;
      uVar14 = (lineOfFire->m_Direction).x;
      uVar15 = (lineOfFire->m_Direction).y;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                         (pCVar10,(MethodInfo *)0x0);
      fVar1 = fVar1 * _UNK_?;
      uVar12._0_4_ = (lineOfFire->m_Origin).x;
      uVar12._4_4_ = (lineOfFire->m_Origin).y;
      fStack_16 = fVar1 * (float)uVar14 + (float)(undefined4)uVar12;
      fVar13 = (float)uVar15;
    }
    else {
      fVar1 = (this->fields).rocketRange;
      uVar17 = (lineOfFire->m_Direction).x;
      fVar13 = (lineOfFire->m_Direction).y;
      uVar12._0_4_ = (lineOfFire->m_Origin).x;
      uVar12._4_4_ = (lineOfFire->m_Origin).y;
      fStack_16 = fVar1 * (float)uVar17 + (float)(undefined4)uVar12;
    }
    uVar18 = uStack_2;
    fVar19 = fStack_16;
    fVar20 = fVar1 * (lineOfFire->m_Direction).z + (lineOfFire->m_Origin).z;
    fVar1 = fVar1 * fVar13 + (float)((ulonglong)uVar12 >> 0x20);
    uVar21 = (lineOfFire->m_Direction).x;
    uVar22 = (lineOfFire->m_Direction).y;
    VStack_23.normal.z = (float)((uint)(lineOfFire->m_Direction).z ^ _UNK_?);
    RStack_24.m_Direction.y = (lineOfFire->m_Direction).y;
    RStack_24.m_Direction.z = (lineOfFire->m_Direction).z;
    VStack_23.normal.x = (float)(uVar21 ^ _UNK_?);
    VStack_23.normal.y = (float)(uVar22 ^ _UNK_?);
    RStack_24.m_Origin.x = (lineOfFire->m_Origin).x;
    RStack_24.m_Origin.y = (lineOfFire->m_Origin).y;
    RStack_24._8_8_ = *(undefined8 *)&(lineOfFire->m_Origin).z;
    VStack_23.cubePos.x = (int16_t)uStack_2;
    VStack_23.cubePos.y = uStack_2._2_2_;
    VStack_23.cubePos.z = uStack_2._4_2_;
    VStack_23._30_2_ = uStack_2._6_2_;
    VStack_23.face = (int32_t)uStack_3;
    VStack_23.isCubeHit = uStack_3._4_1_;
    VStack_23._37_3_ = uStack_3._5_3_;
    VStack_23.woId = (int32_t)uStack_4;
    VStack_23._44_4_ = uStack_4._4_4_;
    VStack_23.collider = pCStack_7;
    VStack_23.transform = pTStack_8;
    VStack_23.point.x = fStack_16;
    VStack_23.cube = pCStack_5;
    VStack_23.distance = (float)uStack_6;
    VStack_23._60_4_ = uStack_6._4_4_;
    VStack_23.interactionFlags = 0;
    fStack_25 = fVar1;
    fStack_26 = fVar20;
    uStack_2 = uVar18;
    VStack_23.point.y = fVar1;
    VStack_23.point.z = fVar20;
    PickupItemBazooka_OnHitLocal(this,&VStack_23,&RStack_24,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar27 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar27 != (PrefabPool *)0x0) {
      RStack_24.m_Origin.z = fVar20;
      RStack_24.m_Origin.y = fVar1;
      RStack_24.m_Origin.x = fVar19;
      SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                ((pPVar27->fields).particleExplosion,&RStack_24.m_Origin,_UNK_?,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnHitMaxRangeRemote(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeRemote
               (PickupItemBazooka *this,Ray *lineOfFire,MethodInfo *method)

{
  fVar1 = (this->fields).rocketRange;
  uVar2 = (lineOfFire->m_Direction).x;
  uVar3 = (lineOfFire->m_Direction).y;
  aVStack_4[0].x = (lineOfFire->m_Origin).x;
  aVStack_4[0].y = (lineOfFire->m_Origin).y;
  fVar5 = (lineOfFire->m_Direction).z;
  fVar6 = fVar1 * (float)uVar2 + aVStack_4[0].x;
  fVar7 = (lineOfFire->m_Origin).z;
  fVar8 = fVar1 * (float)uVar3 + aVStack_4[0].y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar9 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar9 != (PrefabPool *)0x0) {
    aVStack_4[0].y = fVar8;
    aVStack_4[0].x = fVar6;
    aVStack_4[0].z = fVar1 * fVar5 + fVar7;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              ((pPVar9->fields).particleExplosion,aVStack_4,_UNK_?,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_ResetAmmo
               (PickupItemBazooka *this,MethodInfo *method)

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


/* PickupItemBazooka() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka__ctor
               (PickupItemBazooka *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  AVar1 = (ACTkByte4)
           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt(10,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uVar2 = 0;
  iVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar4 != 0) {
    uVar2 = 10;
  }
  (this->fields).maxAmmo.currentCryptoKey = iVar3;
  (this->fields).maxAmmo.hiddenValue = (int32_t)AVar1;
  *(Byte__Array **)&(this->fields).maxAmmo.fakeValue = (Byte__Array *)(ulonglong)CONCAT14(1,uVar2);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5._0_4_ = 0.0;
  uStack_5._4_1_ = 0;
  uStack_5._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar1,(MethodInfo *)0x0);
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar4 != 0) {
    uStack_5._0_4_ = 75.0;
    uStack_5._4_1_ = 0;
    uStack_5._5_3_ = 0;
  }
  bVar6 = iRam_? != 0;
  (this->fields).baseDamage.currentCryptoKey = 0;
  (this->fields).baseDamage.hiddenValue.b1 = 0;
  (this->fields).baseDamage.hiddenValue.b2 = 0;
  (this->fields).baseDamage.hiddenValue.b3 = 0;
  (this->fields).baseDamage.hiddenValue.b4 = 0;
  (this->fields).baseDamage.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields).baseDamage.fakeValue = (float)uStack_5;
  (this->fields).baseDamage.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields).baseDamage.field_0x15 = uStack_5._5_3_;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).baseDamage.hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).blastRadius = 10.0;
  (this->fields).baseImpulse = 1500.0;
  (this->fields).rocketSpeed = 30.0;
  (this->fields).rocketRange = 200.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar11 = _UNK_?;
  uVar12 = _UNK_?;
  uVar13 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar14 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar14 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar14;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar12;
  _UNK_? = SUB84(uVar12,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar13;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar13;
  (this->fields)._.crossHairCannotFireHigh.a = (float)uVar2;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5._0_4_ = 0.0;
  uStack_5._4_1_ = 0;
  uStack_5._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  AVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,AVar1,(MethodInfo *)0x0);
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar4 != 0) {
    uStack_5._0_4_ = 1.0;
    uStack_5._4_1_ = 0;
    uStack_5._5_3_ = 0;
  }
  bVar6 = iRam_? != 0;
  pPVar15 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar15->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar15->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar15->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar15->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uStack_5;
  (this->fields)._.fireInterval.inited = uStack_5._4_1_;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x15 = uStack_5._5_3_;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar16 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar6 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar16;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar10;
      LOCK();
      uVar8 = *puVar10;
      if (uVar9 == uVar8) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar8);
  }
  bVar6 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar17 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar18 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar19 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar20 = ppMVar18;
    if (lVar19 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar19 = lRam_?;
    }
    else {
      do {
        uVar7 = (uint)ppMVar20;
        LOCK();
        bVar6 = uVar7 != uRam_?;
        uVar21 = uVar7;
        uVar22 = uVar7 + 1;
        if (bVar6) {
          uVar21 = uRam_?;
          uVar22 = uRam_?;
        }
        uRam_? = uVar22;
        UNLOCK();
      } while ((bVar6) &&
              (ppMVar20 = (MethodInfo **)(ulonglong)uVar21, uVar7 = uVar21, uVar21 != 2));
      while (uVar7 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar7 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar19;
    puVar23 = &(pOVar17->_1).field_0x1c;
    LOCK();
    bVar6 = *(int *)puVar23 == 1;
    if (bVar6) {
      *(undefined4 *)puVar23 = 1;
    }
    uVar7 = uRam_?;
    UNLOCK();
    if (bVar6) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar7 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar24 = &(pOVar17->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar6 = *puVar24 == 1;
      if (bVar6) {
        *puVar24 = 1;
      }
      uVar7 = uRam_?;
      UNLOCK();
      if (bVar6) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar7 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar7 = GetCurrentThreadId();
        psVar25 = &(pOVar17->_1).cctor_thread;
        LOCK();
        bVar6 = (ulonglong)uVar7 == *psVar25;
        if (bVar6) {
          *psVar25 = (ulonglong)uVar7;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
        while( true ) {
          puVar23 = &(pOVar17->_1).field_0x1c;
          LOCK();
          bVar6 = *(int *)puVar23 == 1;
          if (bVar6) {
            *(undefined4 *)puVar23 = 1;
          }
          UNLOCK();
          if (bVar6) break;
          LOCK();
          lVar19._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
          lVar19._4_4_ = (pOVar17->_1).cctor_started;
          if (lVar19 == 0) {
            (pOVar17->_1).initializationExceptionGCHandle = 0;
            (pOVar17->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar19 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar7 = GetCurrentThreadId();
        LOCK();
        (pOVar17->_1).cctor_thread = (ulonglong)uVar7;
        UNLOCK();
        LOCK();
        (pOVar17->_1).cctor_finished_or_no_cctor = 1;
        uVar7 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar7 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar17->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar17);
          ppMVar20 = ppMVar18;
          pIVar26 = (Il2CppClass *)pOVar17;
code_?:
          do {
            if (ppMVar20 == (MethodInfo **)0x0) {
              FUN_?(pIVar26);
              if (pIVar26->field_count != 0) {
                ppMVar20 = pIVar26->methods;
                pMVar27 = *ppMVar20;
code_?:
                if (pMVar27 != (MethodInfo *)0x0) {
                  if ((*pMVar27->name == '.') && ((pMVar27->flags & 0x800) != 0)) {
                    ppMVar28 = ppMVar18;
                    while (ppMVar29 = ppMVar28 + 0x3052a1b1,
                          ppMVar28 = (MethodInfo **)((longlong)ppMVar28 + 1),
                          *(char *)ppMVar29 == (pMVar27->name + -1)[(longlong)ppMVar28]) {
                      if (ppMVar28 == (MethodInfo **)0x7) {
                        FUN_?(pMVar27,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar20 = ppMVar20 + 1;
              if (ppMVar20 < pIVar26->methods + pIVar26->field_count) {
                pMVar27 = *ppMVar20;
                goto code_?;
              }
            }
            pIVar26 = pIVar26->parent;
            ppMVar20 = ppMVar18;
          } while (pIVar26 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar17->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar17->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar30._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
      lVar30._4_4_ = (pOVar17->_1).cctor_started;
      if (lVar30 != 0) {
        uVar13._0_4_ = (pOVar17->_1).initializationExceptionGCHandle;
        uVar13._4_4_ = (pOVar17->_1).cctor_started;
        uVar13 = FUN_?(uVar13);
        FUN_?(uVar13,0);
        FUN_?(0,0,0,0,0);
        pcVar31 = (code *)swi(3);
        (*pcVar31)();
        return;
      }
    }
  }
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_IsAmmoDepleted
               (PickupItemBazooka *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_MaxAmmo
                  (PickupItemBazooka *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_Quantity
                  (PickupItemBazooka *this,MethodInfo *method)

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

