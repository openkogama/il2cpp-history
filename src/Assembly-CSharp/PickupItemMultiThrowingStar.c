
/* Void DoFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_DoFire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).throwingStarsFired < (this->fields).numStars) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if ((this->fields).fireTime + (this->fields).fireSpacingDelay <= fVar3) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar3 = (float)(*pcRam_?)();
      (this->fields).fireTime = fVar3;
      PickupItemMultiThrowingStar_Fire(this,isLocal,(MethodInfo *)0x0);
    }
  }
  uVar2._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar2._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar4._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar4._4_1_ = (this->fields).currentAmmo.inited;
  uVar4._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_5[0]._0_8_ = uVar2;
  aOStack_5[0]._8_8_ = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  if ((iVar6 < 1) &&
     (cVar7 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                        (this,(this->klass->vtable).get_HasUnlimitedAmmo.method), cVar7 == '\0')) {
    pMVar8 = (this->fields)._._.owner;
    if ((pMVar8 == (MVPickupOwner *)0x0) ||
       ((pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0 ||
        (this_00 = (pMVar9->fields).gameObject, this_00 == (GameObject *)0x0)))) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
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
    if (pOVar10 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar10[1].klass != (Object__Class *)0x0) {
        pOVar11 = pOVar10->klass;
        uVar12._0_2_ = pOVar11[1]._0.byval_arg.attrs;
        uVar12._2_1_ = pOVar11[1]._0.byval_arg.type;
        uVar12._3_5_ = *(undefined5 *)&pOVar11[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar11[1]._0.byval_arg.data)(pOVar10,uVar12);
      }
    }
  }
  return;
}


/* Void Fire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_Fire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BulletThrowingStar__OnHitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupItemMultiThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickupItemMultiThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                 );
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
    method_00 = (MethodInfo *)0x0;
    VStack_3.x = VStack_4.x;
    VStack_3.y = VStack_4.y;
    VStack_3.z = VStack_4.z;
    this_00 = BulletThrowingStar::BulletThrowingStar_CreateBullet
                        (PoolEnums__Enum_MultiThrowingStarBullet,&VStack_3,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._._.owner;
    uVar2 = VStack_3._0_8_;
    if (pMVar7 != (MVPickupOwner *)0x0) {
      uVar8._0_4_ = (pMVar7->fields).lookOrigin.x;
      uVar8._4_4_ = (pMVar7->fields).lookOrigin.y;
      fVar9 = (pMVar7->fields).lookOrigin.z;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                          ((Vector3 *)&OStack_11,&(((this->fields)._._.owner)->fields).lookDirection
                           ,method_00);
      aRStack_12[0].m_Origin.z = fVar9;
      VStack_4.x = pVVar10->x;
      VStack_4.y = pVVar10->y;
      fVar9 = pVVar10->z;
      VStack_3._0_8_ = VStack_4._0_8_;
      VStack_3.z = fVar9;
      aRStack_12[0].m_Origin._0_8_ = uVar8;
      fVar13 = (float)FUN_?(&VStack_3);
      if (_UNK_? < fVar13) {
        fVar14 = VStack_4.x / fVar13;
        fVar15 = VStack_4.y / fVar13;
        fVar9 = fVar9 / fVar13;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar14 = (pVVar16->zeroVector).x;
        fVar15 = (pVVar16->zeroVector).y;
        fVar9 = (pVVar16->zeroVector).z;
      }
      VStack_4.y = fVar15;
      VStack_4.x = fVar14;
      aRStack_12[0].m_Direction.x = fVar14;
      uVar2 = VStack_3._0_8_;
      if (this_00 != (BulletThrowingStar *)0x0) {
        pBVar17 = (this_00->fields).onHit;
        pBVar18 = (BulletThrowingStar_OnHitDelegate *)
                  FUN_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar18,(Object *)this,
                   MethodInfo__PickupItemMultiThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar17 = (BulletThrowingStar_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar17,(Delegate *)pBVar18,(MethodInfo *)0x0);
        if (pBVar17 == (BulletThrowingStar_OnHitDelegate *)0x0) {
          (this_00->fields).onHit = (BulletThrowingStar_OnHitDelegate *)0x0;
        }
        else {
          pBVar18 = (BulletThrowingStar_OnHitDelegate *)0x0;
          if (pBVar17->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
            pBVar18 = pBVar17;
          }
          if (pBVar18 == (BulletThrowingStar_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (this_00->fields).onHit = pBVar18;
          pBVar18 = (BulletThrowingStar_OnHitDelegate *)0x0;
          if (pBVar17->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
            pBVar18 = pBVar17;
          }
          if (pBVar18 == (BulletThrowingStar_OnHitDelegate *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar19 = (uint)((ulonglong)&(this_00->fields).onHit >> 0xc);
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
                    FUN_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar17,(Object *)this,
                     MethodInfo__PickupItemMultiThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                     ,(MethodInfo *)0x0);
          bVar23 = iRam_? != 0;
          (this_00->fields).onHitLocal = pBVar17;
          if (bVar23) {
            uVar19 = (uint)((ulonglong)&(this_00->fields).onHitLocal >> 0xc);
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
        uVar2 = VStack_3._0_8_;
        if (pMVar7 != (MVPickupOwner *)0x0) {
          fVar14 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                            (pMVar7,(this->fields).bulletSpeed,(MethodInfo *)0x0);
          pMVar7 = (this->fields)._._.owner;
          fVar13 = (this->fields).bulletRangeStraight;
          uVar2 = VStack_3._0_8_;
          if (pMVar7 != (MVPickupOwner *)0x0) {
            ignoreWoIDs = (HashSet_1_System_Int32_ *)
                          (*(pMVar7->klass->vtable).get_IgnoreWOIDs.methodPtr)();
            aRStack_12[0].m_Direction.z = fVar9;
            aRStack_12[0].m_Direction.y = VStack_4.y;
            BulletThrowingStar::BulletThrowingStar_Fire
                      (this_00,fVar14,fVar13,aRStack_12,ignoreWoIDs,(this->fields).bulletRangeFall,
                       (this->fields).bulletFallRate,(MethodInfo *)0x0);
            if (isLocal == 0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
              uVar2 = VStack_3._0_8_;
              if (pMVar24 != (MVGameControllerBase *)0x0) {
                pTVar1 = (this->fields)._._.muzzlePoint;
                this_01 = (pMVar24->fields).audioManager;
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
                    piVar25 = &(this->fields).throwingStarsFired;
                    *piVar25 = *piVar25 + 1;
                    OStack_11.currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
                    OStack_11.hiddenValue = (this->fields).currentAmmo.hiddenValue;
                    OStack_11.fakeValue = (this->fields).currentAmmo.fakeValue;
                    OStack_11.inited = (this->fields).currentAmmo.inited;
                    OStack_11._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
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
                    iVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                             ObscuredInt::ObscuredInt_InternalDecrypt(&OStack_11,(MethodInfo *)0x0);
                    iVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                             ObscuredInt::ObscuredInt_Encrypt_1
                                       (iVar26 + -1,OStack_11.currentCryptoKey,(MethodInfo *)0x0);
                    OStack_11.hiddenValue = iVar27;
                    bVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                             ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                                       ((MethodInfo *)0x0);
                    iVar27 = OStack_11.fakeValue;
                    if (bVar28 != 0) {
                      iVar27 = iVar26 + -1;
                    }
                    iVar29 = (this->fields).numStars;
                    (this->fields).currentAmmo.currentCryptoKey = OStack_11.currentCryptoKey;
                    (this->fields).currentAmmo.hiddenValue = OStack_11.hiddenValue;
                    (this->fields).currentAmmo.fakeValue = iVar27;
                    (this->fields).currentAmmo.inited = OStack_11.inited;
                    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = OStack_11._13_3_;
                    if (iVar29 <= (this->fields).throwingStarsFired) {
                      (this->fields)._.isFiring = 0;
                      (this->fields).throwingStarsFired = 0;
                    }
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
              pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
              uVar2 = VStack_3._0_8_;
              if (pMVar24 != (MVGameControllerBase *)0x0) {
                this_01 = (pMVar24->fields).audioManager;
                audioSource = (this->fields).fireSound;
                pCVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                uVar2 = VStack_3._0_8_;
                if ((pCVar30 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0),
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
                  pCVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  uVar2 = VStack_3._0_8_;
                  if ((pCVar30 != (Camera *)0x0) &&
                     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar30,(MethodInfo *)0x0),
                     uVar2 = VStack_3._0_8_, pTVar1 != (Transform *)0x0)) {
                    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_forward((Vector3 *)&OStack_11,pTVar1,(MethodInfo *)0x0)
                    ;
                    uVar2._0_4_ = pVVar10->x;
                    uVar2._4_4_ = pVVar10->y;
                    VStack_3.x = VStack_4.x + (float)uVar2;
                    if (this_01 != (AudioManager *)0x0) {
                      VStack_3.y = VStack_4.y + uVar2._4_4_;
                      VStack_3.z = VStack_4.z + pVVar10->z;
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


/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnBulletHit
               (PickupItemMultiThrowingStar *this,VoxelHit *voxelHit,Ray *lineOfFire,
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
                  (PoolEnums__Enum_NormalBulletSparks,&VStack_24,&QStack_25,(Nullable_1_Single_)0x0,
                   &NStack_23,(MethodInfo *)0x0);
        return;
      }
      pMVar27 = (this->fields)._._.owner;
      if ((pMVar27 != (MVPickupOwner *)0x0) &&
         (pMVar28 = (pMVar27->fields)._.worldObjectParent, pMVar28 != (MVWorldObjectClient *)0x0)) {
        iVar18 = (pMVar28->fields)._.ownerActorNr;
        if (*(int *)&(TypeInfo__PickupItemMultiThrowingStar->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PickupItemMultiThrowingStar);
        }
        pIVar29 = TypeInfo__IBulletImpactVisualizer;
        fVar21 = TypeInfo__PickupItemMultiThrowingStar->static_fields->baseDamage;
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

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnFire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  (this->fields).isLocal = isLocal;
  pMVar1 = (this->fields)._._.owner;
  if ((pMVar1 != (MVPickupOwner *)0x0) &&
     (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).TriggerBegin.methodPtr)
              (this,(ulonglong)(uint)(pMVar2->fields)._.id,(this->klass->vtable).TriggerBegin.method
              );
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnHolstered
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_OnLeaveVehicleWithWeapon
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if ((this->fields).numStars <= (this->fields).throwingStarsFired) {
    (this->fields)._.isFiring = 0;
  }
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnLocalBulletHit
               (PickupItemMultiThrowingStar *this,VoxelHit *voxelHit,Ray *lineOfFire,
               MethodInfo *method)

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
            if (((pMVar3 == (MVNetworkGame *)0x0) ||
                (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0))
               || (this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), this_02 == (MVLocalPlayer *)0x0)
               ) goto code_?;
            method_00 = (MethodInfo *)0x0;
            bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_02,this_01,(MethodInfo *)0x0)
            ;
            if (bVar4 == 0) {
              pMVar5 = (this->fields)._._.owner;
              fVar6 = (voxelHit->point).x;
              fVar7 = (voxelHit->point).y;
              fVar8 = (voxelHit->point).z;
              if ((pMVar5 == (MVPickupOwner *)0x0) ||
                 (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar5,(MethodInfo *)0x0), obj == (Transform *)0x0))
              goto code_?;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              IStack_9.damage = 0.0;
              IStack_9.impulse.x = 0.0;
              IStack_9.impulse.y = 0.0;
              pvVar10 = (obj->fields)._._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar10,&IStack_9);
              IStack_9.impulse.y = fVar8 - IStack_9.impulse.y;
              value = &IStack_9;
              IStack_9.impulse.x = fVar7 - IStack_9.impulse.x;
              IStack_9.damage = fVar6 - IStack_9.damage;
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)aIStack_13,(Vector3 *)value,method_00);
              pMVar5 = (this->fields)._._.owner;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              aIStack_13[0].interactionType = 0;
              aIStack_13[0].playerKilledByType = 0;
              aIStack_13[0]._18_2_ = 0;
              aIStack_13[0].damage = 0.0;
              aIStack_13[0].impulse.x = 0.0;
              aIStack_13[0].impulse.y = 0.0;
              aIStack_13[0].impulse.z = 0.0;
              pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
              IStack_9.damage = (pVVar14->zeroVector).x;
              IStack_9.impulse.x = (pVVar14->zeroVector).y;
              IStack_9.impulse.y = (pVVar14->zeroVector).z;
              MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                        (aIStack_13,
                         (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)value >> 8),0x18),
                         0.0,(Vector3 *)&IStack_9,
                         (PlayerKilledByType__Enum)
                         CONCAT71((int7)((ulonglong)in_stack_15 >> 8),0x14),
                         (MethodInfo *)0x0);
              IStack_9.interactionType = aIStack_13[0].interactionType;
              IStack_9.playerKilledByType = aIStack_13[0].playerKilledByType;
              IStack_9._18_2_ = aIStack_13[0]._18_2_;
              IStack_9.damage = aIStack_13[0].damage;
              IStack_9.impulse.x = aIStack_13[0].impulse.x;
              IStack_9.impulse.y = aIStack_13[0].impulse.y;
              IStack_9.impulse.z = aIStack_13[0].impulse.z;
              (*(pIVar2->klass->vtable).__unknown_1.methodPtr)
                        (pIVar2,pMVar5,&IStack_9,0,(pIVar2->klass->vtable).__unknown_1.method);
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_ResetAmmo
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerBegin
               (PickupItemMultiThrowingStar *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,CONCAT44(in_register_00000014,instigator));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  if ((this->fields)._.isFiring == 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?,0), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((this->fields).fireTime + (this->fields).fireRate < fVar3) {
      (this->fields)._.isFiring = 1;
      (this->fields).throwingStarsFired = 0;
      pcVar4 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar4;
      fVar3 = (float)(*pcVar1)();
      (this->fields).fireTime = fVar3;
    }
  }
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerEnd
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    return;
  }
  if ((this->fields)._.isFiring == 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?,0,in_R8,in_R9,unaff_RBX),
       pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((this->fields).fireTime + (this->fields).fireRate < fVar3) {
      (this->fields)._.isFiring = 1;
      (this->fields).throwingStarsFired = 0;
      pcVar4 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar4;
      fVar3 = (float)(*pcVar1)();
      (this->fields).fireTime = fVar3;
    }
  }
  return;
}


/* Void TriggerFire() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerFire
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring == 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((this->fields).fireTime + (this->fields).fireRate < fVar3) {
      (this->fields)._.isFiring = 1;
      (this->fields).throwingStarsFired = 0;
      pcVar4 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar4;
      fVar3 = (float)(*pcVar1)();
      (this->fields).fireTime = fVar3;
    }
  }
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_UpdateControllerUpdate
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring != 0) {
    PickupItemWithDelay::PickupItemWithDelay_Fire((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  }
  if ((this->fields)._.isFiring == 0) {
    return;
  }
  isLocal = (this->fields).isLocal;
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).throwingStarsFired < (this->fields).numStars) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if ((this->fields).fireTime + (this->fields).fireSpacingDelay <= fVar3) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar3 = (float)(*pcRam_?)();
      (this->fields).fireTime = fVar3;
      PickupItemMultiThrowingStar_Fire(this,isLocal,(MethodInfo *)0x0);
    }
  }
  uVar2._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
  uVar2._4_4_ = (this->fields).currentAmmo.hiddenValue;
  uVar4._0_4_ = (this->fields).currentAmmo.fakeValue;
  uVar4._4_1_ = (this->fields).currentAmmo.inited;
  uVar4._5_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_5[0]._0_8_ = uVar2;
  aOStack_5[0]._8_8_ = uVar4;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_InternalDecrypt(aOStack_5,(MethodInfo *)0x0);
  if ((iVar6 < 1) &&
     (cVar7 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                        (this,(this->klass->vtable).get_HasUnlimitedAmmo.method), cVar7 == '\0')) {
    pMVar8 = (this->fields)._._.owner;
    if ((pMVar8 == (MVPickupOwner *)0x0) ||
       ((pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0 ||
        (this_00 = (pMVar9->fields).gameObject, this_00 == (GameObject *)0x0)))) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
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
    if (pOVar10 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar10[1].klass != (Object__Class *)0x0) {
        pOVar11 = pOVar10->klass;
        uVar12._0_2_ = pOVar11[1]._0.byval_arg.attrs;
        uVar12._2_1_ = pOVar11[1]._0.byval_arg.type;
        uVar12._3_5_ = *(undefined5 *)&pOVar11[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar11[1]._0.byval_arg.data)(pOVar10,uVar12);
      }
    }
  }
  return;
}


/* PickupItemMultiThrowingStar() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickupItemMultiThrowingStar);
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
            (aIStack_1,CONCAT31((int3)((uint)in_EDX >> 8),0x18),0.0,&VStack_3,
             CONCAT31((int3)((uint)in_stack_4 >> 8),0x14),(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__PickupItemMultiThrowingStar->static_fields->baseDamage = aIStack_1[0].damage;
  return;
}


/* PickupItemMultiThrowingStar() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar__ctor
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  uStack_1._4_4_ =
       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
       ObscuredInt_Encrypt(0x96,(MethodInfo *)0x0);
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
  uStack_1._0_4_ =
       (float)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uVar2 = 0x96;
  }
  uStack_4 = (ulonglong)CONCAT14(1,uVar2);
  (this->fields).bulletRangeStraight = 50.0;
  (this->fields).bulletRangeFall = 50.0;
  *(undefined8 *)&(this->fields).maxAmmo = uStack_1;
  (this->fields).maxAmmo.fakeValue = (undefined4)uStack_4;
  (this->fields).maxAmmo.inited = uStack_4._4_1_;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uStack_4._5_3_;
  (this->fields).bulletFallRate = 0.1;
  (this->fields).bulletSpeed = 80.0;
  (this->fields).numStars = 5;
  (this->fields).fireSpacingDelay = 0.1;
  (this->fields).fireRate = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar5 = _UNK_?;
  uVar6 = _UNK_?;
  uVar7 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar7 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar7 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar6;
  _UNK_? = SUB84(uVar6,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar7 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar7;
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
  uStack_1._0_4_ = 0.0;
  uStack_1._4_1_ = 0;
  uStack_1._5_3_ = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor((ObscuredFloat *)&stack0xffffffffffffffd8,value,(MethodInfo *)0x0);
  bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
           ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar3 != 0) {
    uStack_1._0_4_ = 1.0;
    uStack_1._4_1_ = 0;
    uStack_1._5_3_ = 0;
  }
  bVar9 = iRam_? != 0;
  pPVar10 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pPVar10->_).fireInterval.hiddenValue.b1 = 0;
  (pPVar10->_).fireInterval.hiddenValue.b2 = 0;
  (pPVar10->_).fireInterval.hiddenValue.b3 = 0;
  (pPVar10->_).fireInterval.hiddenValue.b4 = 0;
  (this->fields)._.fireInterval.hiddenValueOld = (Byte__Array *)0x0;
  (this->fields)._.fireInterval.fakeValue = (float)uStack_1;
  (this->fields)._.fireInterval.inited = uStack_1._4_1_;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x15 = uStack_1._5_3_;
  if (bVar9) {
    uVar11 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar13 == *puVar14;
      if (bVar9) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar15 = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,0);
  bVar9 = iRam_? != 0;
  (this->fields)._._.meshRenderers = pMVar15;
  if (bVar9) {
    uVar11 = (uint)((ulonglong)&(this->fields)._._.meshRenderers >> 0xc);
    puVar14 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar13 = *puVar14;
      LOCK();
      uVar12 = *puVar14;
      if (uVar13 == uVar12) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (uVar13 != uVar12);
  }
  bVar9 = cRam_? == '\0';
  (this->fields)._._._AbleToFire_k__BackingField = 1;
  if (bVar9) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar16 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar17 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    lVar18 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar19 = ppMVar17;
    if (lVar18 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar18 = lRam_?;
    }
    else {
      do {
        uVar11 = (uint)ppMVar19;
        LOCK();
        bVar9 = uVar11 != uRam_?;
        uVar20 = uVar11;
        uVar21 = uVar11 + 1;
        if (bVar9) {
          uVar20 = uRam_?;
          uVar21 = uRam_?;
        }
        uRam_? = uVar21;
        UNLOCK();
      } while ((bVar9) &&
              (ppMVar19 = (MethodInfo **)(ulonglong)uVar20, uVar11 = uVar20, uVar20 != 2));
      while (uVar11 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar11 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar18;
    puVar22 = &(pOVar16->_1).field_0x1c;
    LOCK();
    bVar9 = *(int *)puVar22 == 1;
    if (bVar9) {
      *(undefined4 *)puVar22 = 1;
    }
    uVar11 = uRam_?;
    UNLOCK();
    if (bVar9) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar11 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar23 = &(pOVar16->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar9 = *puVar23 == 1;
      if (bVar9) {
        *puVar23 = 1;
      }
      uVar11 = uRam_?;
      UNLOCK();
      if (bVar9) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar11 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar11 = GetCurrentThreadId();
        psVar24 = &(pOVar16->_1).cctor_thread;
        LOCK();
        bVar9 = (ulonglong)uVar11 == *psVar24;
        if (bVar9) {
          *psVar24 = (ulonglong)uVar11;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
        while( true ) {
          puVar22 = &(pOVar16->_1).field_0x1c;
          LOCK();
          bVar9 = *(int *)puVar22 == 1;
          if (bVar9) {
            *(undefined4 *)puVar22 = 1;
          }
          UNLOCK();
          if (bVar9) break;
          LOCK();
          lVar18._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
          lVar18._4_4_ = (pOVar16->_1).cctor_started;
          if (lVar18 == 0) {
            (pOVar16->_1).initializationExceptionGCHandle = 0;
            (pOVar16->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar18 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar11 = GetCurrentThreadId();
        LOCK();
        (pOVar16->_1).cctor_thread = (ulonglong)uVar11;
        UNLOCK();
        LOCK();
        (pOVar16->_1).cctor_finished_or_no_cctor = 1;
        uVar11 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar11 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pOVar16->_1).field_0x6e & 4) != 0) {
          FUN_?(pOVar16);
          ppMVar19 = ppMVar17;
          pIVar25 = (Il2CppClass *)pOVar16;
code_?:
          do {
            if (ppMVar19 == (MethodInfo **)0x0) {
              FUN_?(pIVar25);
              if (pIVar25->field_count != 0) {
                ppMVar19 = pIVar25->methods;
                pMVar26 = *ppMVar19;
code_?:
                if (pMVar26 != (MethodInfo *)0x0) {
                  if ((*pMVar26->name == '.') && ((pMVar26->flags & 0x800) != 0)) {
                    ppMVar27 = ppMVar17;
                    while (ppMVar28 = ppMVar27 + 0x3052a1b1,
                          ppMVar27 = (MethodInfo **)((longlong)ppMVar27 + 1),
                          *(char *)ppMVar28 == (pMVar26->name + -1)[(longlong)ppMVar27]) {
                      if (ppMVar27 == (MethodInfo **)0x7) {
                        FUN_?(pMVar26,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar19 = ppMVar19 + 1;
              if (ppMVar19 < pIVar25->methods + pIVar25->field_count) {
                pMVar26 = *ppMVar19;
                goto code_?;
              }
            }
            pIVar25 = pIVar25->parent;
            ppMVar19 = ppMVar17;
          } while (pIVar25 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pOVar16->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pOVar16->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar29._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
      lVar29._4_4_ = (pOVar16->_1).cctor_started;
      if (lVar29 != 0) {
        uVar7._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
        uVar7._4_4_ = (pOVar16->_1).cctor_started;
        uVar7 = FUN_?(uVar7);
        FUN_?(uVar7,0);
        FUN_?(0,0,0,0,0);
        pcVar30 = (code *)swi(3);
        (*pcVar30)();
        return;
      }
    }
  }
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_get_IsAmmoDepleted
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_get_MaxAmmo
                  (PickupItemMultiThrowingStar *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_get_Quantity
                  (PickupItemMultiThrowingStar *this,MethodInfo *method)

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

