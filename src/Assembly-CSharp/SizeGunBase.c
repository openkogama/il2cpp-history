
/* Void Awake() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_Awake(SizeGunBase *this,MethodInfo *method)

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
  pSVar3 = this->klass;
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pSVar3->vtable).ResetAmmo.methodPtr)(this,(pSVar3->vtable).ResetAmmo.method);
  return;
}


/* InteractionData GetPackageData() */

InteractionData *
Assembly-CSharp.dll::SizeGunBase::SizeGunBase_GetPackageData
          (InteractionData *__return_storage_ptr__,SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_function_shouldn_t_get_call);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar1 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_This_function_shouldn_t_get_call,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  IStack_2.interactionType = 0;
  IStack_2.playerKilledByType = 0;
  IStack_2._18_2_ = 0;
  IStack_2.damage = 0.0;
  IStack_2.impulse.x = 0.0;
  IStack_2.impulse.y = 0.0;
  IStack_2.impulse.z = 0.0;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_2,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),0x10),
             0.0,&VStack_4,in_stack_5 & 0xffffff00,(MethodInfo *)0x0);
  __return_storage_ptr__->damage = IStack_2.damage;
  (__return_storage_ptr__->impulse).x = IStack_2.impulse.x;
  (__return_storage_ptr__->impulse).y = IStack_2.impulse.y;
  (__return_storage_ptr__->impulse).z = IStack_2.impulse.z;
  __return_storage_ptr__->interactionType = IStack_2.interactionType;
  __return_storage_ptr__->playerKilledByType = IStack_2.playerKilledByType;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = IStack_2._18_2_;
  return __return_storage_ptr__;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_OnFire
               (SizeGunBase *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_,
                  CONCAT71(in_register_00000011,isLocal));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
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
    FUN_?(&StringLiteral_Sound___SizeGunFire);
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
    uVar3._0_4_ = (pMVar2->fields).lookOrigin.x;
    uVar3._4_4_ = (pMVar2->fields).lookOrigin.y;
    fVar4 = (pMVar2->fields).lookOrigin.z;
    auStack_5._0_8_ = uVar3;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        (&RStack_7.m_Origin,&(pMVar2->fields).lookDirection,method);
    VStack_8.x = pVVar6->x;
    VStack_8.y = pVVar6->y;
    fVar9 = pVVar6->z;
    VStack_10._0_8_ = VStack_8._0_8_;
    VStack_10.z = fVar9;
    VStack_11._0_8_ = uVar3;
    VStack_11.z = fVar4;
    fVar12 = (float)FUN_?(&VStack_10);
    if (_UNK_? < fVar12) {
      VStack_10.x = VStack_8.x / fVar12;
      fVar9 = fVar9 / fVar12;
      VStack_10.y = VStack_8.y / fVar12;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_10.x = (pVVar13->zeroVector).x;
      VStack_10.y = (pVVar13->zeroVector).y;
      fVar9 = (pVVar13->zeroVector).z;
    }
    bVar14 = false;
    fStack_15 = VStack_10.x;
    fStack_16 = VStack_10.y;
    fStack_17 = fVar9;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar18 != (MVGameControllerBase *)0x0) {
      this_00 = (pMVar18->fields).audioManager;
      pTVar19 = (this->fields)._._.muzzlePoint;
      audioSource = (this->fields).audioSource;
      if (pTVar19 != (Transform *)0x0) {
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
        pvVar20 = (pTVar19->fields)._._.m_CachedPtr;
        if (pvVar20 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar19,(MethodInfo *)0x0);
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        pcVar21 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        pcRam_? = pcVar21;
        (*pcRam_?)(pvVar20,&VStack_8);
        if (this_00 != (AudioManager *)0x0) {
          RStack_7.m_Origin.x = VStack_8.x;
          RStack_7.m_Origin.y = VStack_8.y;
          RStack_7.m_Origin.z = VStack_8.z;
          AudioManager::AudioManager_Play_2
                    (this_00,StringLiteral_Sound___SizeGunFire,audioSource,&RStack_7.m_Origin,
                     (MethodInfo *)0x0);
          pMVar2 = (this->fields)._._.owner;
          fVar12 = (this->fields).range;
          if (pMVar2 != (MVPickupOwner *)0x0) {
            ignoreWoIds = (HashSet_1_System_Int32_ *)
                          (*(pMVar2->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                    (pMVar2,(pMVar2->klass->vtable).get_IgnoreWOIDs.method);
            fVar22 = fStack_17;
            fVar23 = fStack_16;
            fVar24 = fStack_15;
            fVar25 = VStack_11.z;
            uVar3 = VStack_11._0_8_;
            RStack_7.m_Direction.x = fStack_15;
            RStack_7.m_Origin.z = VStack_11.z;
            uVar26 = 0;
            RStack_7.m_Direction.z = fStack_17;
            RStack_7.m_Direction.y = fStack_16;
            RStack_7.m_Origin.x = VStack_11.x;
            RStack_7.m_Origin.y = VStack_11.y;
            bVar27 = CollisionDetection::CollisionDetection_MVHit_1
                               (&RStack_7,&VStack_1,fVar12,ignoreWoIds,(this->fields).layerMask,
                                (MethodInfo *)0x0);
            if (bVar27 == 0) {
              fVar25 = (this->fields).range;
              fVar12 = VStack_10.x * fVar25 + (float)auStack_5._0_4_;
              fVar28 = VStack_10.y * fVar25 + (float)auStack_5._4_4_;
              fVar4 = fVar9 * fVar25 + fVar4;
            }
            else {
              fVar12 = VStack_1.point.x;
              fVar28 = VStack_1.point.y;
              fVar4 = VStack_1.point.z;
              pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              aVStack_30[0].x = VStack_1.point.x;
              aVStack_30[0].y = VStack_1.point.y;
              aVStack_30[0].z = VStack_1.point.z;
              aVStack_30[1].x = VStack_1.normal.x;
              pCStack_31 = VStack_1.cube;
              fStack_32 = VStack_1.distance;
              uStack_33 = VStack_1._60_4_;
              aVStack_30[1].y = VStack_1.normal.y;
              aVStack_30[1].z = VStack_1.normal.z;
              aVStack_30[2]._0_8_ = VStack_1._24_8_;
              iStack_34 = VStack_1.interactionFlags;
              pCStack_35 = VStack_1.collider;
              pTStack_36 = VStack_1.transform;
              if (pMVar29 == (MVWorldObjectClientManager *)0x0) goto code_?;
              iVar37 = MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                                 (pMVar29,VStack_1.woId,
                                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                 );
              pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar29 == (MVWorldObjectClientManager *)0x0) goto code_?;
              this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar29,iVar37,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._._.owner;
              if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
              if (((pMVar2->fields)._IsLocal_k__BackingField != 0) &&
                 (this_03 != (MVWorldObjectClient *)0x0)) {
                bVar38 = (TypeInfo__MVAvatar->_1).naturalAligment;
                if ((bVar38 <= (this_03->klass->_1).naturalAligment) &&
                   ((MVAvatar__Class *)(this_03->klass->_1).typeHierarchy[(ulonglong)bVar38 - 1] ==
                    TypeInfo__MVAvatar)) {
                  pIVar39 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
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
                  if (pIVar39 != (InteractionDataHandlerBase *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pIVar39->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                      pMVar40 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (((pMVar40 == (MVNetworkGame *)0x0) ||
                          (this_01 = (pMVar40->fields).playerContainer,
                          this_01 == (MVPlayerContainer *)0x0)) ||
                         (this_04 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                              (this_01,(MethodInfo *)0x0),
                         this_04 == (MVLocalPlayer *)0x0)) goto code_?;
                      bVar27 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,this_03,(MethodInfo *)0x0);
                      if (bVar27 == 0) {
                        pMVar2 = (this->fields)._._.owner;
                        puVar41 = (undefined8 *)
                                  (*(this->klass->vtable).GetPackageData.methodPtr)
                                            (&RStack_7,this,
                                             (this->klass->vtable).GetPackageData.method);
                        auStack_5._0_8_ = *puVar41;
                        auStack_5._8_8_ = puVar41[1];
                        uStack_42 = *(undefined4 *)(puVar41 + 2);
                        (*(pIVar39->klass->vtable).__unknown_1.methodPtr)
                                  (pIVar39,pMVar2,auStack_5,0,
                                   (pIVar39->klass->vtable).__unknown_1.method);
                        iVar43 = VStack_1.interactionFlags;
                        pTVar19 = VStack_1.transform;
                        pCVar44 = VStack_1.collider;
                        uVar45 = VStack_1._56_8_;
                        pCVar46 = VStack_1.cube;
                        uVar47 = VStack_1._40_8_;
                        uVar48 = VStack_1._32_8_;
                        uVar49 = VStack_1._24_8_;
                        uVar50 = VStack_1.normal._4_8_;
                        uVar51 = VStack_1._8_8_;
                        uVar52 = VStack_1.point._0_8_;
                        pIVar53 = TypeInfo__IBulletImpactVisualizer;
                        pMVar2 = (this->fields)._._.owner;
                        if ((pMVar2 == (MVPickupOwner *)0x0) ||
                           (pMVar54 = (pMVar2->fields)._.worldObjectParent,
                           pMVar54 == (MVWorldObjectClient *)0x0)) goto code_?;
                        iVar37 = (pMVar54->fields)._.ownerActorNr;
                        lVar55 = FUN_?(this_03,TypeInfo__IBulletImpactVisualizer);
                        pIVar56 = TypeInfo__IBulletImpactVisualizer;
                        if (lVar55 == 0) {
                          FUN_?(this_03,pIVar53);
                          pcVar21 = (code *)swi(3);
                          (*pcVar21)();
                          return;
                        }
                        lVar55 = FUN_?(this_03,TypeInfo__IBulletImpactVisualizer);
                        uVar57 = VStack_1._56_8_;
                        uVar58 = VStack_1._40_8_;
                        uVar59 = VStack_1.normal._4_8_;
                        uVar60 = VStack_1._8_8_;
                        uVar61 = VStack_1.point._0_8_;
                        if (lVar55 == 0) {
                          FUN_?(this_03,pIVar56);
                          pcVar21 = (code *)swi(3);
                          (*pcVar21)();
                          return;
                        }
                        VStack_1.point.x = (float)uVar52;
                        VStack_1.point.y = SUB84(uVar52,4);
                        aVStack_30[0].x = VStack_1.point.x;
                        aVStack_30[0].y = VStack_1.point.y;
                        VStack_1.point.z = (float)uVar51;
                        VStack_1.normal.x = SUB84(uVar51,4);
                        aVStack_30[0].z = VStack_1.point.z;
                        aVStack_30[1].x = VStack_1.normal.x;
                        VStack_1.normal.y = (float)uVar50;
                        VStack_1.normal.z = SUB84(uVar50,4);
                        aVStack_30[1].y = VStack_1.normal.y;
                        aVStack_30[1].z = VStack_1.normal.z;
                        aVStack_30[2]._0_8_ = uVar49;
                        aVStack_30._32_8_ = uVar48;
                        VStack_1.woId = (int32_t)uVar47;
                        VStack_1._44_4_ = SUB84(uVar47,4);
                        aVStack_30[3].y = (float)VStack_1.woId;
                        aVStack_30[3].z = (float)VStack_1._44_4_;
                        pCStack_31 = pCVar46;
                        VStack_1.distance = (float)uVar45;
                        VStack_1._60_4_ = SUB84(uVar45,4);
                        fStack_32 = VStack_1.distance;
                        uStack_33 = VStack_1._60_4_;
                        pCStack_35 = pCVar44;
                        pTStack_36 = pTVar19;
                        iStack_34 = iVar43;
                        VStack_11._0_8_ = uVar3;
                        VStack_11.z = fVar25;
                        fStack_15 = fVar24;
                        fStack_16 = fVar23;
                        fStack_17 = fVar22;
                        VStack_1.point._0_8_ = uVar61;
                        VStack_1._8_8_ = uVar60;
                        VStack_1.normal._4_8_ = uVar59;
                        VStack_1._40_8_ = uVar58;
                        VStack_1._56_8_ = uVar57;
                        FUN_?(&VStack_11,TypeInfo__IBulletImpactVisualizer,lVar55,
                                      aVStack_30,&VStack_11,CONCAT44(uVar26,iVar37),0);
                      }
                    }
                  }
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
            pPVar62 = TypeInfo__PrefabPool->static_fields->instance;
            if (((pPVar62 != (PrefabPool *)0x0) &&
                (this_02 = (pPVar62->fields).enumPoolManager, this_02 != (EnumPoolManager *)0x0)) &&
               (this_05 = (RailRay *)
                          EnumPoolManager::EnumPoolManager_Instantiate
                                    (this_02,PoolEnums__Enum_RailGunRay,
                                     RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                    ), this_05 != (RailRay *)0x0)) {
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_05,(MethodInfo *)0x0);
              pTVar19 = (this->fields)._._.muzzlePoint;
              if (pTVar19 != (Transform *)0x0) {
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
                pvVar20 = (pTVar19->fields)._._.m_CachedPtr;
                if (pvVar20 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar19,(MethodInfo *)0x0);
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
                pcVar21 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
                pcRam_? = pcVar21;
                (*pcRam_?)(pvVar20);
                if (obj == (Transform *)0x0) {
                  FUN_?();
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
                auStack_5._0_4_ = VStack_8.x;
                auStack_5._4_4_ = VStack_8.y;
                auStack_5._8_4_ = VStack_8.z;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar20 = (obj->fields)._._.m_CachedPtr;
                if (pvVar20 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
                pcVar21 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar21 = (code *)swi(3);
                  (*pcVar21)();
                  return;
                }
                pcRam_? = pcVar21;
                (*pcRam_?)(pvVar20);
                (this_05->fields).target.x = fVar12;
                (this_05->fields).target.y = fVar28;
                (this_05->fields).target.z = fVar4;
                if (bVar14) {
                  uVar52._0_4_ = (this->fields).hitColor.r;
                  uVar52._4_4_ = (this->fields).hitColor.g;
                  uVar51._0_4_ = (this->fields).hitColor.b;
                  uVar51._4_4_ = (this->fields).hitColor.a;
                }
                else {
                  uVar52._0_4_ = (this->fields).missColor.r;
                  uVar52._4_4_ = (this->fields).missColor.g;
                  uVar51._0_4_ = (this->fields).missColor.b;
                  uVar51._4_4_ = (this->fields).missColor.a;
                }
                (this_05->fields).startColor.r = (float)(int)uVar52;
                (this_05->fields).startColor.g = (float)(int)((ulonglong)uVar52 >> 0x20);
                (this_05->fields).startColor.b = (float)(int)uVar51;
                (this_05->fields).startColor.a = (float)(int)((ulonglong)uVar51 >> 0x20);
                RailRay::RailRay_Reset(this_05,(MethodInfo *)0x0);
                SizeGunBase_ReduceAmmo(this,(MethodInfo *)0x0);
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void ReduceAmmo() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_ReduceAmmo(SizeGunBase *this,MethodInfo *method)

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
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_Encrypt_1(iVar4 + -1,aOStack_3[0].currentCryptoKey,(MethodInfo *)0x0);
  aOStack_3[0].hiddenValue = iVar5;
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar7 = aOStack_3[0].fakeValue;
  if (bVar6 != 0) {
    iVar7 = iVar4 + -1;
  }
  bVar8 = cRam_? == '\0';
  (this->fields).currentAmmo.currentCryptoKey = aOStack_3[0].currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = aOStack_3[0].hiddenValue;
  (this->fields).currentAmmo.fakeValue = iVar7;
  (this->fields).currentAmmo.inited = aOStack_3[0].inited;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = aOStack_3[0]._13_3_;
  aOStack_3[0].fakeValue = iVar7;
  if (bVar8) {
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
  if (iVar4 < 1) {
    cVar9 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                      (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
    if (cVar9 == '\0') {
      this_00 = (this->fields)._._.owner;
      if (this_00 == (MVPickupOwner *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pOVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this_00,
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
      if (pOVar11 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar11[1].klass != (Object__Class *)0x0) {
          pOVar12 = pOVar11->klass;
          uVar13._0_2_ = pOVar12[1]._0.byval_arg.attrs;
          uVar13._2_1_ = pOVar12[1]._0.byval_arg.type;
          uVar13._3_5_ = *(undefined5 *)&pOVar12[1]._0.byval_arg.field_0xb;
          (*(code *)pOVar12[1]._0.byval_arg.data)(pOVar11,uVar13);
        }
      }
    }
  }
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_ResetAmmo(SizeGunBase *this,MethodInfo *method)

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


/* SizeGunBase() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase__ctor(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
  uStack_1._4_4_ =
       Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
       ObscuredInt_Encrypt(5,(MethodInfo *)0x0);
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
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  if (bVar3 != 0) {
    uVar2 = 5;
  }
  uStack_6 = (ulonglong)CONCAT14(1,uVar2);
  *(undefined8 *)&(this->fields).maxAmmo = uStack_1;
  (this->fields).maxAmmo.fakeValue = (undefined4)uStack_6;
  uVar7 = _UNK_?;
  (this->fields).maxAmmo.inited = uStack_6._4_1_;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uStack_6._5_3_;
  uVar2 = _UNK_?;
  (this->fields).missColor.r = (float)_UNK_?;
  uVar8 = _UNK_?;
  (this->fields).missColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields).missColor.b = (float)_UNK_?;
  _UNK_? = uVar8;
  uVar7 = _UNK_?;
  (this->fields).missColor.a = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields).hitColor.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (this->fields).hitColor.g = (float)uVar2;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar2 = _UNK_?;
  (this->fields).hitColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields).hitColor.a = (float)uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar8 = _UNK_?;
  uVar7 = _UNK_?;
  uVar5 = _UNK_?;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.b = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.a = (float)uVar2;
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = (float)_UNK_?;
  uVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.g = (float)uVar2;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCanFire.b = (float)_UNK_?;
  _UNK_? = uVar4;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCanFire.a = (float)uVar2;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = (float)uVar2;
  _UNK_? = (undefined4)uVar8;
  _UNK_? = SUB84(uVar8,4);
  uVar2 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.b = (float)_UNK_?;
  _UNK_? = uVar5;
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
  pSVar10 = &this->fields;
  (this->fields)._.fireInterval.currentCryptoKey = 0;
  (pSVar10->_).fireInterval.hiddenValue.b1 = 0;
  (pSVar10->_).fireInterval.hiddenValue.b2 = 0;
  (pSVar10->_).fireInterval.hiddenValue.b3 = 0;
  (pSVar10->_).fireInterval.hiddenValue.b4 = 0;
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
                    while (ppMVar28 = ppMVar27 + 0x3052af3c,
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
        uVar5._0_4_ = (pOVar16->_1).initializationExceptionGCHandle;
        uVar5._4_4_ = (pOVar16->_1).cctor_started;
        uVar5 = FUN_?(uVar5);
        FUN_?(uVar5,0);
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

bool Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_IsAmmoDepleted
               (SizeGunBase *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_MaxAmmo
                  (SizeGunBase *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_Quantity
                  (SizeGunBase *this,MethodInfo *method)

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

