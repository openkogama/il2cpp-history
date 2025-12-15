
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Awake
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  pPVar3 = this->klass;
  (this->fields).hitLayerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  (*(pPVar3->vtable).ResetAmmo.methodPtr)(this,(pPVar3->vtable).ResetAmmo.method);
  (this->fields).toFieldOfView = (this->fields).targetFieldOfView;
  return;
}


/* Void DoChargingAnimation() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_DoChargingAnimation
               (PickupItemRailGun *this,MethodInfo *method)

{
  obj = (this->fields).chargeCurve;
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
  if (obj == (AnimationCurve *)0x0) goto DAT_?;
  pvVar4 = (obj->fields).m_Ptr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar5 = (this->fields).chargeBeginTime;
  fVar6 = (this->fields).curveChargeLength;
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
  fVar3 = (float)(*pcRam_?)(pvVar4,(fVar3 - fVar5) / fVar6);
  this_00 = (this->fields).chargeAudioSource;
  (this->fields).currentCharge = fVar3;
  if (this_00 == (AudioSource *)0x0) goto DAT_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (this_00,fVar3 + _UNK_?,(MethodInfo *)0x0);
  pMVar7 = (this->fields)._._.owner;
  if (pMVar7 == (MVPickupOwner *)0x0) goto DAT_?;
  if ((pMVar7->fields)._IsLocal_k__BackingField == 0) {
    if ((this->fields).canDoFOVZoom == 0) goto code_?;
  }
  else {
    if ((this->fields).canDoFOVZoom == 0) {
code_?:
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar8 == (MainCameraManager *)0x0) ||
         (this_01 = (pMVar8->fields).mainCamera, this_01 == (Camera *)0x0)) goto DAT_?;
      fVar3 = (this->fields).initialFOV;
    }
    else {
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar8 == (MainCameraManager *)0x0) goto DAT_?;
      fVar5 = (this->fields).currentCharge;
      this_01 = (pMVar8->fields).mainCamera;
      fVar3 = (this->fields).initialFOV;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (_UNK_? < fVar5) {
        fVar5 = _UNK_?;
      }
      if (this_01 == (Camera *)0x0) goto DAT_?;
      fVar3 = ((this->fields).toFieldOfView - fVar3) * fVar5 + fVar3;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (this_01,fVar3,(MethodInfo *)0x0);
  }
  obj_00 = (this->fields).chargeParticles;
  if (obj_00 != (ParticleSystem *)0x0) {
    fVar3 = (this->fields).currentCharge;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                    ,fVar3,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj_00 == (ParticleSystem *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar4 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,fVar3);
    return;
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Fire() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Fire
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.interactionFlags = 0;
  pMVar2 = (this->fields)._._.owner;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    uVar3._0_4_ = (int32_t)(pMVar2->fields).lookOrigin.x;
    uVar3._4_4_ = (ACTkByte4)(pMVar2->fields).lookOrigin.y;
    fVar4 = (pMVar2->fields).lookOrigin.z;
    auStack_5 = (undefined1  [8])uVar3;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        ((Vector3 *)&OStack_7,&(pMVar2->fields).lookDirection,in_R8);
    VStack_8.x = pVVar6->x;
    VStack_8.y = pVVar6->y;
    fVar9 = pVVar6->z;
    VStack_8.z = fVar9;
    auStack_10._0_8_ = uVar3;
    auStack_10._8_4_ = fVar4;
    VStack_11._0_8_ = VStack_8._0_8_;
    fVar12 = (float)FUN_?(&VStack_8);
    if (_UNK_? < fVar12) {
      VStack_8.x = VStack_11.x / fVar12;
      fVar9 = fVar9 / fVar12;
      VStack_8.y = VStack_11.y / fVar12;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_8.x = (pVVar13->zeroVector).x;
      VStack_8.y = (pVVar13->zeroVector).y;
      fVar9 = (pVVar13->zeroVector).z;
    }
    pMVar2 = (this->fields)._._.owner;
    bVar14 = false;
    fVar12 = (this->fields).range;
    fStack_15 = VStack_8.x;
    fStack_16 = VStack_8.y;
    fStack_17 = fVar9;
    if (pMVar2 != (MVPickupOwner *)0x0) {
      ignoreWoIds = (HashSet_1_System_Int32_ *)
                    (*(pMVar2->klass->vtable).get_IgnoreWOIDs.methodPtr)
                              (pMVar2,(pMVar2->klass->vtable).get_IgnoreWOIDs.method);
      uVar3 = auStack_10._0_8_;
      layerMask = (this->fields).hitLayerMask;
      OStack_7._16_8_ = CONCAT44(fStack_17,fStack_16);
      pBVar18 = (Byte__Array *)CONCAT44(fStack_15,auStack_10._8_4_);
      uVar19 = 0;
      OStack_7.currentCryptoKey = auStack_10._0_4_;
      OStack_7.hiddenValue.b1 = auStack_10[4];
      OStack_7.hiddenValue.b2 = auStack_10[5];
      OStack_7.hiddenValue.b3 = auStack_10[6];
      OStack_7.hiddenValue.b4 = auStack_10[7];
      OStack_7.hiddenValueOld = pBVar18;
      auStack_10._0_8_ = uVar3;
      bVar20 = CollisionDetection::CollisionDetection_MVHit_1
                         ((Ray *)&OStack_7,&VStack_1,fVar12,ignoreWoIds,layerMask,
                          (MethodInfo *)0x0);
      if (bVar20 == 0) {
        fVar21 = (this->fields).range;
        fVar12 = VStack_8.x * fVar21 + (float)auStack_5._0_4_;
        fVar22 = VStack_8.y * fVar21 + (float)auStack_5._4_4_;
        fVar4 = fVar9 * fVar21 + fVar4;
      }
      else {
        fVar12 = VStack_1.point.x;
        fVar22 = VStack_1.point.y;
        fVar4 = VStack_1.point.z;
        pMVar23 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        aVStack_24[0].point.x = VStack_1.point.x;
        aVStack_24[0].point.y = VStack_1.point.y;
        aVStack_24[0].point.z = VStack_1.point.z;
        aVStack_24[0].normal.x = VStack_1.normal.x;
        aVStack_24[0].cube = VStack_1.cube;
        aVStack_24[0].distance = VStack_1.distance;
        aVStack_24[0]._60_4_ = VStack_1._60_4_;
        aVStack_24[0].normal.y = VStack_1.normal.y;
        aVStack_24[0].normal.z = VStack_1.normal.z;
        aVStack_24[0].cubePos = VStack_1.cubePos;
        aVStack_24[0]._30_2_ = VStack_1._30_2_;
        aVStack_24[0].interactionFlags = VStack_1.interactionFlags;
        aVStack_24[0].collider = VStack_1.collider;
        aVStack_24[0].transform = VStack_1.transform;
        if (pMVar23 == (MVWorldObjectClientManager *)0x0) goto code_?;
        iVar25 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                           (pMVar23,VStack_1.woId,
                            int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                           );
        pMVar23 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar23 == (MVWorldObjectClientManager *)0x0) goto code_?;
        this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar23,iVar25,(MethodInfo *)0x0);
        if (this_03 != (MVWorldObjectClient *)0x0) {
          pMVar2 = (this->fields)._._.owner;
          if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
          if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
            pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            iVar27 = VStack_1.interactionFlags;
            pTVar28 = VStack_1.transform;
            pCVar29 = VStack_1.collider;
            uVar30 = VStack_1._56_8_;
            pCVar31 = VStack_1.cube;
            uVar32 = VStack_1._40_8_;
            uVar33 = VStack_1._32_8_;
            uVar34 = VStack_1._24_8_;
            uVar35 = VStack_1.normal._4_8_;
            uVar36 = VStack_1._8_8_;
            uVar37 = VStack_1.point._0_8_;
            if ((pMVar26 == (MVNetworkGame *)0x0) ||
               (pWVar38 = (pMVar26->fields).worldNetwork, pWVar38 == (WorldNetwork *)0x0))
            goto code_?;
            this_00 = (RuntimeEventManager *)(pWVar38->fields)._.runtimeEventManagerNetwork;
            uVar39._0_4_ = (this->fields).baseDamage.currentCryptoKey;
            uVar39._4_4_ = (this->fields).baseDamage.hiddenValue;
            pBVar40 = (this->fields).baseDamage.hiddenValueOld;
            uVar41._0_4_ = (this->fields).baseDamage.fakeValue;
            uVar41._4_1_ = (this->fields).baseDamage.inited;
            uVar41._5_3_ = *(undefined3 *)&(this->fields).baseDamage.field_0x15;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            OStack_7._0_8_ = uVar39;
            OStack_7.hiddenValueOld = pBVar40;
            OStack_7._16_8_ = uVar41;
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
            fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_InternalDecrypt(&OStack_7,(MethodInfo *)0x0);
            uVar42 = VStack_1._56_8_;
            uVar43 = VStack_1._40_8_;
            uVar44 = VStack_1._32_8_;
            uVar45 = VStack_1._24_8_;
            uVar46 = VStack_1.normal._4_8_;
            uVar47 = VStack_1._8_8_;
            uVar39 = VStack_1.point._0_8_;
            if (this_00 == (RuntimeEventManager *)0x0) goto code_?;
            VStack_1.point.x = (float)uVar37;
            VStack_1.point.y = SUB84(uVar37,4);
            aVStack_24[0].point.x = VStack_1.point.x;
            aVStack_24[0].point.y = VStack_1.point.y;
            VStack_1.point.z = (float)uVar36;
            VStack_1.normal.x = SUB84(uVar36,4);
            aVStack_24[0].point.z = VStack_1.point.z;
            aVStack_24[0].normal.x = VStack_1.normal.x;
            VStack_1.normal.y = (float)uVar35;
            VStack_1.normal.z = SUB84(uVar35,4);
            aVStack_24[0].normal.y = VStack_1.normal.y;
            aVStack_24[0].normal.z = VStack_1.normal.z;
            VStack_1.cubePos = SUB86(uVar34,0);
            VStack_1._30_2_ = SUB82(uVar34,6);
            aVStack_24[0].cubePos = VStack_1.cubePos;
            aVStack_24[0]._30_2_ = VStack_1._30_2_;
            VStack_1.face = (int32_t)uVar33;
            VStack_1.isCubeHit = SUB81(uVar33,4);
            VStack_1._37_3_ = SUB83(uVar33,5);
            aVStack_24[0].face = VStack_1.face;
            aVStack_24[0].isCubeHit = VStack_1.isCubeHit;
            aVStack_24[0]._37_3_ = VStack_1._37_3_;
            VStack_1.woId = (int32_t)uVar32;
            VStack_1._44_4_ = SUB84(uVar32,4);
            aVStack_24[0].woId = VStack_1.woId;
            aVStack_24[0]._44_4_ = VStack_1._44_4_;
            aVStack_24[0].cube = pCVar31;
            VStack_1.distance = (float)uVar30;
            VStack_1._60_4_ = SUB84(uVar30,4);
            aVStack_24[0].distance = VStack_1.distance;
            aVStack_24[0]._60_4_ = VStack_1._60_4_;
            aVStack_24[0].collider = pCVar29;
            aVStack_24[0].transform = pTVar28;
            aVStack_24[0].interactionFlags = iVar27;
            VStack_1.point._0_8_ = uVar39;
            VStack_1._8_8_ = uVar47;
            VStack_1.normal._4_8_ = uVar46;
            VStack_1._24_8_ = uVar45;
            VStack_1._32_8_ = uVar44;
            VStack_1._40_8_ = uVar43;
            VStack_1._56_8_ = uVar42;
            RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                      (this_00,aVStack_24,fVar9,(MethodInfo *)0x0);
            pIVar48 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_03,(MethodInfo *)0x0);
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
            if (pIVar48 != (InteractionDataHandlerBase *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pIVar48->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (((pMVar26 == (MVNetworkGame *)0x0) ||
                    (this_01 = (pMVar26->fields).playerContainer,
                    this_01 == (MVPlayerContainer *)0x0)) ||
                   (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                        (this_01,(MethodInfo *)0x0), this_04 == (MVLocalPlayer *)0x0
                   )) goto code_?;
                pMVar49 = this_03;
                bVar20 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                   ((MVPlayer *)this_04,this_03,(MethodInfo *)0x0);
                if (bVar20 == 0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uVar19 = 0;
                  OStack_7._16_8_ = OStack_7._16_8_ & 0xffffffff00000000;
                  OStack_7.currentCryptoKey = 0;
                  OStack_7.hiddenValue.b1 = 0;
                  OStack_7.hiddenValue.b2 = 0;
                  OStack_7.hiddenValue.b3 = 0;
                  OStack_7.hiddenValue.b4 = 0;
                  OStack_7.hiddenValueOld = (Byte__Array *)0x0;
                  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
                  auStack_5._0_4_ = (pVVar13->zeroVector).x;
                  auStack_5._4_4_ = (pVVar13->zeroVector).y;
                  pBStack_50 = (Byte__Array *)CONCAT44(pBStack_50._4_4_,(pVVar13->zeroVector).z);
                  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                            ((InteractionData *)&OStack_7,
                             (InteractionPackageType__Enum)
                             CONCAT71((int7)((ulonglong)pMVar49 >> 8),4),0.0,(Vector3 *)auStack_5,
                             layerMask & 0xffffff00,(MethodInfo *)0x0);
                  uVar37 = OStack_7._0_8_;
                  fStack_51 = OStack_7.fakeValue;
                  auStack_5._0_4_ = OStack_7.currentCryptoKey;
                  auStack_5[4] = OStack_7.hiddenValue.b1;
                  auStack_5[5] = OStack_7.hiddenValue.b2;
                  auStack_5[6] = OStack_7.hiddenValue.b3;
                  auStack_5[7] = OStack_7.hiddenValue.b4;
                  pBStack_50 = OStack_7.hiddenValueOld;
                  OStack_7._0_8_ = uVar37;
                  (*(pIVar48->klass->vtable).__unknown_1.methodPtr)
                            (pIVar48,(this->fields)._._.owner,auStack_5,0,
                             (pIVar48->klass->vtable).__unknown_1.method);
                }
              }
            }
          }
          lVar52 = FUN_?(this_03);
          iVar27 = VStack_1.interactionFlags;
          pTVar28 = VStack_1.transform;
          pCVar29 = VStack_1.collider;
          uVar30 = VStack_1._56_8_;
          pCVar31 = VStack_1.cube;
          uVar32 = VStack_1._40_8_;
          uVar33 = VStack_1._32_8_;
          uVar34 = VStack_1._24_8_;
          uVar35 = VStack_1.normal._4_8_;
          uVar36 = VStack_1._8_8_;
          uVar37 = VStack_1.point._0_8_;
          if (lVar52 != 0) {
            pMVar2 = (this->fields)._._.owner;
            if ((pMVar2 == (MVPickupOwner *)0x0) ||
               (pMVar49 = (pMVar2->fields)._.worldObjectParent,
               pMVar49 == (MVWorldObjectClient *)0x0)) goto code_?;
            iVar25 = (pMVar49->fields)._.ownerActorNr;
            uVar46._0_4_ = (this->fields).baseDamage.currentCryptoKey;
            uVar46._4_4_ = (this->fields).baseDamage.hiddenValue;
            pBVar40 = (this->fields).baseDamage.hiddenValueOld;
            uVar47._0_4_ = (this->fields).baseDamage.fakeValue;
            uVar47._4_1_ = (this->fields).baseDamage.inited;
            uVar47._5_3_ = *(undefined3 *)&(this->fields).baseDamage.field_0x15;
            if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                         field_0x1c == 0) {
              FUN_?();
            }
            OStack_7._0_8_ = uVar46;
            OStack_7.hiddenValueOld = pBVar40;
            OStack_7._16_8_ = uVar47;
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
            fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredFloat::ObscuredFloat_InternalDecrypt(&OStack_7,(MethodInfo *)0x0);
            pIVar53 = TypeInfo__IBulletImpactVisualizer;
            lVar52 = FUN_?(this_03,TypeInfo__IBulletImpactVisualizer);
            pIVar54 = TypeInfo__IBulletImpactVisualizer;
            if (lVar52 == 0) {
              FUN_?(this_03,pIVar53);
              pcVar55 = (code *)swi(3);
              (*pcVar55)();
              return;
            }
            lVar52 = FUN_?(this_03,TypeInfo__IBulletImpactVisualizer);
            uVar56 = auStack_10._0_8_;
            uVar42 = VStack_1._56_8_;
            uVar43 = VStack_1._40_8_;
            uVar44 = VStack_1._32_8_;
            uVar45 = VStack_1._24_8_;
            uVar46 = VStack_1.normal._4_8_;
            uVar47 = VStack_1._8_8_;
            uVar39 = VStack_1.point._0_8_;
            if (lVar52 == 0) {
              FUN_?(this_03,pIVar54);
              pcVar55 = (code *)swi(3);
              (*pcVar55)();
              return;
            }
            OStack_7._16_8_ = CONCAT44(fStack_17,fStack_16);
            auStack_10._0_4_ = (undefined4)uVar3;
            auStack_10._4_4_ = SUB84(uVar3,4);
            OStack_7.currentCryptoKey = auStack_10._0_4_;
            OStack_7.hiddenValue.b1 = auStack_10[4];
            OStack_7.hiddenValue.b2 = auStack_10[5];
            OStack_7.hiddenValue.b3 = auStack_10[6];
            OStack_7.hiddenValue.b4 = auStack_10[7];
            VStack_1.point.x = (float)uVar37;
            VStack_1.point.y = SUB84(uVar37,4);
            aVStack_24[0].point.x = VStack_1.point.x;
            aVStack_24[0].point.y = VStack_1.point.y;
            VStack_1.point.z = (float)uVar36;
            VStack_1.normal.x = SUB84(uVar36,4);
            aVStack_24[0].point.z = VStack_1.point.z;
            aVStack_24[0].normal.x = VStack_1.normal.x;
            VStack_1.normal.y = (float)uVar35;
            VStack_1.normal.z = SUB84(uVar35,4);
            aVStack_24[0].normal.y = VStack_1.normal.y;
            aVStack_24[0].normal.z = VStack_1.normal.z;
            VStack_1.cubePos = SUB86(uVar34,0);
            VStack_1._30_2_ = SUB82(uVar34,6);
            aVStack_24[0].cubePos = VStack_1.cubePos;
            aVStack_24[0]._30_2_ = VStack_1._30_2_;
            VStack_1.face = (int32_t)uVar33;
            VStack_1.isCubeHit = SUB81(uVar33,4);
            VStack_1._37_3_ = SUB83(uVar33,5);
            aVStack_24[0].face = VStack_1.face;
            aVStack_24[0].isCubeHit = VStack_1.isCubeHit;
            aVStack_24[0]._37_3_ = VStack_1._37_3_;
            VStack_1.woId = (int32_t)uVar32;
            VStack_1._44_4_ = SUB84(uVar32,4);
            aVStack_24[0].woId = VStack_1.woId;
            aVStack_24[0]._44_4_ = VStack_1._44_4_;
            aVStack_24[0].cube = pCVar31;
            VStack_1.distance = (float)uVar30;
            VStack_1._60_4_ = SUB84(uVar30,4);
            aVStack_24[0].distance = VStack_1.distance;
            aVStack_24[0]._60_4_ = VStack_1._60_4_;
            aVStack_24[0].collider = pCVar29;
            aVStack_24[0].transform = pTVar28;
            aVStack_24[0].interactionFlags = iVar27;
            OStack_7.hiddenValueOld = pBVar18;
            VStack_1.point._0_8_ = uVar39;
            VStack_1._8_8_ = uVar47;
            VStack_1.normal._4_8_ = uVar46;
            VStack_1._24_8_ = uVar45;
            VStack_1._32_8_ = uVar44;
            VStack_1._40_8_ = uVar43;
            VStack_1._56_8_ = uVar42;
            auStack_10._0_8_ = uVar56;
            FUN_?(&OStack_7,TypeInfo__IBulletImpactVisualizer,lVar52,aVStack_24,
                          &OStack_7,CONCAT44(uVar19,iVar25),fVar9);
          }
        }
        bVar14 = true;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar57 = TypeInfo__PrefabPool->static_fields->instance;
      if (((pPVar57 != (PrefabPool *)0x0) &&
          (this_02 = (pPVar57->fields).enumPoolManager, this_02 != (EnumPoolManager *)0x0)) &&
         (this_05 = (RailRay *)
                    EnumPoolManager::EnumPoolManager_Instantiate
                              (this_02,PoolEnums__Enum_RailGunRay,
                               RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_)
         , this_05 != (RailRay *)0x0)) {
        (this_05->fields).target.x = fVar12;
        (this_05->fields).target.y = fVar22;
        (this_05->fields).target.z = fVar4;
        if (bVar14) {
          uVar37._0_4_ = (this->fields).hitColor.r;
          uVar37._4_4_ = (this->fields).hitColor.g;
          uVar36._0_4_ = (this->fields).hitColor.b;
          uVar36._4_4_ = (this->fields).hitColor.a;
        }
        else {
          uVar37._0_4_ = (this->fields).missColor.r;
          uVar37._4_4_ = (this->fields).missColor.g;
          uVar36._0_4_ = (this->fields).missColor.b;
          uVar36._4_4_ = (this->fields).missColor.a;
        }
        (this_05->fields).startColor.r = (float)(int)uVar37;
        (this_05->fields).startColor.g = (float)(int)((ulonglong)uVar37 >> 0x20);
        (this_05->fields).startColor.b = (float)(int)uVar36;
        (this_05->fields).startColor.a = (float)(int)((ulonglong)uVar36 >> 0x20);
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_05,(MethodInfo *)0x0);
        pTVar28 = (this->fields)._._.muzzlePoint;
        if (pTVar28 != (Transform *)0x0) {
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
          pvVar58 = (pTVar28->fields)._._.m_CachedPtr;
          if (pvVar58 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar28,(MethodInfo *)0x0);
            pcVar55 = (code *)swi(3);
            (*pcVar55)();
            return;
          }
          pcVar55 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar55 = (code *)FUN_?(&UNK_?), pcVar55 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar55 = (code *)swi(3);
            (*pcVar55)();
            return;
          }
          pcRam_? = pcVar55;
          (*pcRam_?)(pvVar58);
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar55 = (code *)swi(3);
            (*pcVar55)();
            return;
          }
          auStack_5._0_4_ = VStack_8.x;
          auStack_5._4_4_ = VStack_8.y;
          pBStack_50 = (Byte__Array *)CONCAT44(pBStack_50._4_4_,VStack_8.z);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar58 = (obj->fields)._._.m_CachedPtr;
          if (pvVar58 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar55 = (code *)swi(3);
            (*pcVar55)();
            return;
          }
          pcVar55 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar55 = (code *)FUN_?(&UNK_?), pcVar55 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar55 = (code *)swi(3);
            (*pcVar55)();
            return;
          }
          pcRam_? = pcVar55;
          (*pcRam_?)(pvVar58);
          RailRay::RailRay_Reset(this_05,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnEnterVehicleWithWeapon
               (PickupItemRailGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 1;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnEquip
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (obj = (pMVar1->fields).mainCamera, obj != (Camera *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
    fVar5 = (float)(*pcRam_?)(pvVar2);
    (this->fields).initialFOV = fVar5;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnLeaveVehicleWithWeapon
               (PickupItemRailGun *this,MethodInfo *method)

{
  (this->fields).canDoFOVZoom = 0;
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_OnUnequip
               (PickupItemRailGun *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._._.owner;
  (this->fields)._.isFiring = 0;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    if ((pMVar1->fields)._IsLocal_k__BackingField == 0) {
      return;
    }
    (this->fields).isCharging = 0;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar2 != (MainCameraManager *)0x0) &&
       (obj = (pMVar2->fields).mainCamera, obj != (Camera *)0x0)) {
      fVar3 = (this->fields).initialFOV;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                      ,fVar3,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Camera *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,fVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_ResetAmmo
               (PickupItemRailGun *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerBegin
               (PickupItemRailGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  PickupItemWithDelay::PickupItemWithDelay_TriggerBegin
            ((PickupItemWithDelay *)this,instigatorActorNr,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  (this->fields).isCharging = 1;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).chargeBeginTime = fVar4;
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerEnd
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RailShot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItemWithDelay::PickupItemWithDelay_TriggerEnd((PickupItemWithDelay *)this,(MethodInfo *)0x0)
  ;
  if ((this->fields).isCharging != 0) {
    pfVar1 = &(this->fields).currentCharge;
    if (*pfVar1 <= _UNK_? && _UNK_? != *pfVar1) {
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                  (pAVar2,(MethodInfo *)0x0);
        pAVar2 = (this->fields).chargeAudioSource;
        if (pAVar2 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar2,0,(MethodInfo *)0x0);
          (this->fields).isCharging = 0;
          return;
        }
      }
      goto code_?;
    }
    pAVar2 = (this->fields).releaseSound;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pAVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar2,(MethodInfo *)0x0);
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).chargeAudioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar2,_UNK_? - (this->fields).currentCharge * _UNK_?,
                 (MethodInfo *)0x0);
      pMVar4 = (this->fields)._._.owner;
      if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
      if ((pMVar4->fields)._IsLocal_k__BackingField == 0) {
        pTVar5 = (this->fields)._._.muzzlePoint;
        if (pTVar5 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)aOStack_7,pTVar5,(MethodInfo *)0x0);
        VStack_8.x = pVVar6->x;
        VStack_8.y = pVVar6->y;
        fVar9 = pVVar6->z;
      }
      else {
        pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((pCVar10 == (Camera *)0x0) ||
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar10,(MethodInfo *)0x0),
           pTVar5 == (Transform *)0x0)) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)aOStack_7,pTVar5,(MethodInfo *)0x0);
        VStack_8.x = pVVar6->x;
        VStack_8.y = pVVar6->y;
        fVar9 = pVVar6->z;
        pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((pCVar10 == (Camera *)0x0) ||
           (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar10,(MethodInfo *)0x0),
           pTVar5 == (Transform *)0x0)) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)aOStack_7,pTVar5,(MethodInfo *)0x0);
        uVar11 = pVVar6->x;
        uVar12 = pVVar6->y;
        fVar9 = fVar9 + pVVar6->z;
        VStack_8.y = VStack_8.y + (float)uVar12;
        VStack_8.x = VStack_8.x + (float)uVar11;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      if (this_00 == (AudioManager *)0x0) goto code_?;
      VStack_8.z = fVar9;
      AudioManager::AudioManager_Play_2
                (this_00,StringLiteral_RailShot,(this->fields).releaseSound,&VStack_8,
                 (MethodInfo *)0x0);
    }
    (this->fields).missColor.a = 1.0;
    (this->fields).hitColor.a = 1.0;
    PickupItemRailGun_Fire(this,(MethodInfo *)0x0);
    aOStack_7[0].currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
    aOStack_7[0].hiddenValue = (this->fields).currentAmmo.hiddenValue;
    aOStack_7[0].fakeValue = (this->fields).currentAmmo.fakeValue;
    aOStack_7[0].inited = (this->fields).currentAmmo.inited;
    aOStack_7[0]._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
    (this->fields).isCharging = 0;
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
    iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_7[0].currentCryptoKey = 0;
    aOStack_7[0].hiddenValue = 0;
    aOStack_7[0].fakeValue = 0;
    aOStack_7[0].inited = 0;
    aOStack_7[0]._13_3_ = 0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_Encrypt(iVar13 + -1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    aOStack_7[0].inited = 1;
    aOStack_7[0].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
    aOStack_7[0].hiddenValue = iVar14;
    bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    iVar15 = 0;
    if (bVar3 != 0) {
      iVar15 = iVar13 + -1;
    }
    bVar16 = cRam_? == '\0';
    (this->fields).currentAmmo.currentCryptoKey = aOStack_7[0].currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = aOStack_7[0].hiddenValue;
    (this->fields).currentAmmo.fakeValue = iVar15;
    (this->fields).currentAmmo.inited = aOStack_7[0].inited;
    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = aOStack_7[0]._13_3_;
    aOStack_7[0].fakeValue = iVar15;
    if (bVar16) {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
    if ((iVar13 == 0) &&
       (cVar17 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                           (this,(this->klass->vtable).get_HasUnlimitedAmmo.method), cVar17 == '\0')
       ) {
      pMVar4 = (this->fields)._._.owner;
      if (pMVar4 == (MVPickupOwner *)0x0) {
code_?:
        FUN_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)pMVar4,
                           MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
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
      if (pOVar19 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar19[1].klass != (Object__Class *)0x0) {
          pOVar20 = pOVar19->klass;
          uVar21._0_2_ = pOVar20[1]._0.byval_arg.attrs;
          uVar21._2_1_ = pOVar20[1]._0.byval_arg.type;
          uVar21._3_5_ = *(undefined5 *)&pOVar20[1]._0.byval_arg.field_0xb;
          (*(code *)pOVar20[1]._0.byval_arg.data)(pOVar19,uVar21);
        }
      }
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Update
               (PickupItemRailGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    pPVar1 = (this->fields).chargeParticles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar1 = (this->fields).chargeParticles;
        if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                  (pPVar1,1,(MethodInfo *)0x0);
      }
      pMVar3 = (this->fields)._._.owner;
      if (pMVar3 != (MVPickupOwner *)0x0) {
        if ((pMVar3->fields)._IsLocal_k__BackingField == 0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if ((pMVar4 != (MainCameraManager *)0x0) &&
           (obj = (pMVar4->fields).mainCamera, obj != (Camera *)0x0)) {
          fVar5 = (this->fields).initialFOV;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                          ,fVar5,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (Camera *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pvVar7 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar7,fVar5);
          return;
        }
      }
    }
  }
  else {
    PickupItemRailGun_DoChargingAnimation(this,(MethodInfo *)0x0);
    pAVar9 = (this->fields).chargeAudioSource;
    if (pAVar9 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar9,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pAVar9 = (this->fields).chargeAudioSource;
        if (pAVar9 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar9,(MethodInfo *)0x0);
      }
      pPVar1 = (this->fields).chargeParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        pPVar1 = (this->fields).chargeParticles;
        if (pPVar1 != (ParticleSystem *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                          ,1,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pPVar1 == (ParticleSystem *)0x0) {
            FUN_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pvVar7 = (pPVar1->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar7,1);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PickupItemRailGun() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun__ctor
               (PickupItemRailGun *this,MethodInfo *method)

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
  (this->fields).range = 300.0;
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
           ObscuredInt_Encrypt(0xf,(MethodInfo *)0x0);
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
    uVar2 = 0xf;
  }
  (this->fields).targetFieldOfView = 25.0;
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
    uStack_5._0_4_ = 25.0;
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
  uVar11 = _UNK_?;
  uVar12 = _UNK_?;
  uVar13 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields).hitColor.r = (float)_UNK_?;
  uVar14 = _UNK_?;
  (this->fields).hitColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar11;
  _UNK_? = SUB84(uVar11,4);
  uVar2 = _UNK_?;
  (this->fields).hitColor.b = (float)_UNK_?;
  _UNK_? = uVar14;
  (this->fields).hitColor.a = (float)uVar2;
  (this->fields).curveChargeLength = 5.0;
  uVar11 = _UNK_?;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar2 = _UNK_?;
  (this->fields).missColor.r = (float)_UNK_?;
  _UNK_? = uVar11;
  uVar13 = _UNK_?;
  (this->fields).missColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar12;
  _UNK_? = SUB84(uVar12,4);
  uVar2 = _UNK_?;
  (this->fields).missColor.b = (float)_UNK_?;
  _UNK_? = uVar13;
  (this->fields).missColor.a = (float)uVar2;
  (this->fields).canDoFOVZoom = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar14 = _UNK_?;
  uVar12 = _UNK_?;
  uVar13 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar11 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar11;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar11 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar13;
  _UNK_? = SUB84(uVar13,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar11;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar12;
  _UNK_? = SUB84(uVar12,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar13;
  uVar13 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar14;
  _UNK_? = SUB84(uVar14,4);
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


/* Single get_ChargeState() */

float Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_ChargeState
                (PickupItemRailGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    return 0.0;
  }
  return (this->fields).currentCharge;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItemRailGun *this,MethodInfo *method)

{
  fVar1 = (this->fields).currentCharge;
  if (fVar1 < _UNK_?) {
    fVar2 = (this->fields)._.crossHairCannotFireHigh.g;
    fVar3 = (this->fields)._.crossHairCannotFireHigh.b;
    fVar4 = (this->fields)._.crossHairCannotFireHigh.a;
    fVar5 = (this->fields)._.crossHairCannotFireLow.r;
    fVar6 = (this->fields)._.crossHairCannotFireLow.g;
    fVar7 = (this->fields)._.crossHairCannotFireLow.b;
    fVar8 = (this->fields)._.crossHairCannotFireLow.a;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
    }
    else if (_UNK_? < fVar1) {
      fVar1 = _UNK_?;
    }
    __return_storage_ptr__->r = ((this->fields)._.crossHairCannotFireHigh.r - fVar5) * fVar1 + fVar5
    ;
    __return_storage_ptr__->g = (fVar2 - fVar6) * fVar1 + fVar6;
    __return_storage_ptr__->b = (fVar3 - fVar7) * fVar1 + fVar7;
    __return_storage_ptr__->a = (fVar4 - fVar8) * fVar1 + fVar8;
    return __return_storage_ptr__;
  }
  fVar1 = (this->fields)._.crossHairCanFire.g;
  fVar2 = (this->fields)._.crossHairCanFire.b;
  fVar3 = (this->fields)._.crossHairCanFire.a;
  __return_storage_ptr__->r = (this->fields)._.crossHairCanFire.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_IsAmmoDepleted
               (PickupItemRailGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_MaxAmmo
                  (PickupItemRailGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_Quantity
                  (PickupItemRailGun *this,MethodInfo *method)

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

