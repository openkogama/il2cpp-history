
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Awake
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  this_00 = (this->fields).audioSource;
  if (this_00 != (AudioSource *)0x0) {
    fVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_volume
                      (this_00,(MethodInfo *)0x0);
    (this->fields).maxVolume = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoChargingAnimation() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_DoChargingAnimation
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  pAVar1 = (this->fields).chargeCurve;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar1,fVar2 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
    pAVar1 = (this->fields).shakeCurve;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pAVar1 != (AnimationCurve *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar1,(fVar3 - (this->fields).chargeBeginTime) *
                                 (this->fields).shakeFrequency * fVar2,(MethodInfo *)0x0);
      fVar3 = fVar3 / (this->fields).shakePower;
      this_00 = (this->fields).audioSource;
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,fVar2 * (this->fields).maxVolume,(MethodInfo *)0x0);
        pTVar4 = (this->fields).modelTransform;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar6 = (pVVar5->zeroVector).x;
        uVar7 = (pVVar5->zeroVector).y;
        uVar8 = (this->fields).shakeDirection.x;
        uVar9 = (this->fields).shakeDirection.y;
        fVar10 = (float)uVar7 + (float)uVar9 * fVar3;
        if (pTVar4 != (Transform *)0x0) {
          value.y = fVar10;
          value.x = (float)uVar6 + (float)uVar8 * fVar3;
          value.z = (pVVar5->zeroVector).z + (this->fields).shakeDirection.z * fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar4,value,(MethodInfo *)0x0);
          pTVar4 = (this->fields).chargeObject;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar2 = fVar10 * _UNK_? + fVar2;
          uVar11 = (pVVar5->oneVector).x;
          uVar12 = (pVVar5->oneVector).y;
          if (pTVar4 != (Transform *)0x0) {
            value_00.y = (float)uVar12 * fVar2;
            value_00.x = (float)uVar11 * fVar2;
            value_00.z = (pVVar5->oneVector).z * fVar2;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar4,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemImpulseGun *this,Ray lineOfFire,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff98,0,0x48);
  fVar1 = lineOfFire.m_Direction.x;
  fVar2 = lineOfFire.m_Origin.z;
  fVar3 = lineOfFire.m_Origin.y;
  fVar4 = lineOfFire.m_Origin.x;
  VStack_5.y = lineOfFire.m_Direction.y;
  VStack_5.z = lineOfFire.m_Direction.z;
  fVar6 = (this->fields).maxRange;
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  layerMask = (float)(1 << ((byte)iVar7 & 0x1f));
  fVar8 = 0.0;
  ray.m_Origin.y = fVar3;
  ray.m_Origin.x = fVar4;
  ray.m_Origin.z = fVar2;
  ray.m_Direction.x = fVar1;
  ray.m_Direction.y = VStack_5.y;
  ray.m_Direction.z = VStack_5.z;
  bVar9 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,(VoxelHit *)&stack0xffffff98,fVar6,this_00,(int32_t)layerMask,
                     (MethodInfo *)0x0);
  if (bVar9 != 0) {
    __return_storage_ptr__->x = layerMask;
    __return_storage_ptr__->y = fVar8;
    __return_storage_ptr__->z = fStack_10;
    return __return_storage_ptr__;
  }
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                     (&VStack_5,&lineOfFire,(this->fields).maxRange,(MethodInfo *)0x0);
  fVar4 = pVVar11->y;
  fVar6 = pVVar11->z;
  __return_storage_ptr__->x = pVVar11->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Void Fire(Int32, Single, Single) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Fire
               (PickupItemImpulseGun *this,int32_t avatarId,float impulseMagnitude,
               float recoilMagnitude,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_);
    func_?();
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  func_?();
  pMVar4 = (this->fields)._.owner;
  this_01.First = 0;
  this_01.Last = 0;
  if (pMVar4 != (MVPickupOwner *)0x0) {
    uStack_5._0_4_ = (pMVar4->fields).lookOrigin.x;
    uStack_5._4_4_ = (pMVar4->fields).lookOrigin.y;
    fVar6 = (pMVar4->fields).lookOrigin.z;
    pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_8,(this->fields)._.owner,(MethodInfo *)0x0);
    uStack_9 = uStack_5;
    fStack_10 = fVar6;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_8,*pVVar7,(MethodInfo *)0x0);
    uVar11 = pVVar7->x;
    uVar12 = pVVar7->y;
    fStack_1 = pVVar7->z;
    fStack_13 = (float)uStack_9;
    VStack_14.x = uStack_9._4_4_;
    VStack_14.y = fStack_10;
    VStack_14.z = (float)uVar11;
    auStack_15._0_4_ = (float)uStack_9;
    auStack_15._4_4_ = uStack_9._4_4_;
    fStack_16 = fStack_10;
    fStack_17 = (float)uVar11;
    uStack_18._4_4_ = fStack_1;
    uStack_18._0_4_ = (float)uVar12;
    fStack_2 = (float)uVar11;
    fStack_3 = (float)uVar12;
    if (cRam_? == '\0') {
      uStack_5 = uStack_18;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
      fStack_13 = (float)auStack_15._0_4_;
      VStack_14.x = (float)auStack_15._4_4_;
      VStack_14.y = fStack_16;
      VStack_14.z = fStack_17;
    }
    auStack_15._0_4_ = fStack_13;
    auStack_15._4_4_ = VStack_14.x;
    fStack_16 = VStack_14.y;
    fStack_17 = VStack_14.z;
    uStack_5 = uStack_18;
    func_?();
    pMStack_19 = (MVWorldObjectClientManager *)(this->fields).maxRange;
    this_01 = (RegexCharClass_SingleRange)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              ((HashSet_1_System_Int32_ *)this_01,
               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    iVar20 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    ray.m_Origin.y = VStack_14.x;
    ray.m_Origin.x = fStack_13;
    ray.m_Origin.z = VStack_14.y;
    ray.m_Direction.x = VStack_14.z;
    ray.m_Direction.y = (float)uStack_5;
    ray.m_Direction.z = SUB84(uStack_5,4);
    bVar21 = CollisionDetection::CollisionDetection_MVHit_1
                       (ray,(VoxelHit *)&stack0xffffff44,(float)pMStack_19,
                        (HashSet_1_System_Int32_ *)this_01,1 << ((byte)iVar20 & 0x1f),
                        (MethodInfo *)0x0);
    if (bVar21 == 0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (&VStack_8,(Ray *)auStack_15,(this->fields).maxRange,(MethodInfo *)0x0);
      uStack_5._0_4_ = pVVar7->x;
      uStack_5._4_4_ = pVVar7->y;
      fStack_22 = pVVar7->z;
    }
    else {
      uStack_5 = CONCAT44(in_stack_23,in_stack_24);
      fStack_22 = in_stack_25;
    }
    pMVar4 = (this->fields)._.owner;
    if (pMVar4 != (MVPickupOwner *)0x0) {
      if ((pMVar4->fields)._IsLocal_k__BackingField != 0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__
                         );
          func_?();
          func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
          func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
          func_?(&StringLiteral_Player);
          cRam_? = '\x01';
        }
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>)
        ;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
        pIStack_26 = (IBulletImpactVisualizer__Class *)(this->fields).radius;
        pMVar4 = (this->fields)._.owner;
        pMStack_19 = (MVWorldObjectClientManager *)(this->fields).maxRange;
        if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(code *)(pMVar4->klass->vtable).get_IgnoreWOIDs.method)
                                (pMVar4,pMVar4->klass[1]._0.image);
        iVar20 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        ray_00.m_Origin.z = fStack_10;
        ray_00.m_Origin.x = (float)uStack_9;
        ray_00.m_Origin.y = uStack_9._4_4_;
        ray_00.m_Direction.x = fStack_2;
        ray_00.m_Direction.y = fStack_3;
        ray_00.m_Direction.z = fStack_1;
        pIStack_26 = (IBulletImpactVisualizer__Class *)
                    CollisionDetection::CollisionDetection_MVSphereCastAll
                              (ray_00,(float)pIStack_26,(float)pMStack_19,ignoreWoIds,
                               1 << ((byte)iVar20 & 0x1f),(MethodInfo *)0x0);
        this_01.First = 0;
        this_01.Last = 0;
        if (pIStack_26 == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
        for (; (int)this_01 < (int)(pIStack_26->_0).namespaze;
            this_01 = (RegexCharClass_SingleRange)((int)this_01 + 1)) {
          pMStack_19 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pGVar27 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xfffffefc,
                               (List_1_GameTierProgressBar_TierProgressData_ *)pIStack_26,
                               (int32_t)this_01,
                               MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                              );
          pGStack_28 = pGVar27->disabledProgressDivider;
          pGStack_29 = pGVar27->disabledBarTextBubble;
          pGStack_30 = pGVar27->tierIconTempUnlock;
          pCStack_31 = (Cube *)pGVar27->tierIconNumber;
          pPStack_32 = pGVar27->endResultProgressBar;
          pCStack_33 = (Collider *)pGVar27->tempProgress;
          pTStack_34 = (Transform *)pGVar27->disabledTempProgress;
          pGStack_35 = pGVar27->freeTryTextBubble;
          pHStack_36 = pGVar27->hoverInputHandler;
          pCStack_37 = pGVar27->LockedTierIcon;
          if (pMStack_19 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar38 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMStack_19,(int32_t)pGStack_30,(MethodInfo *)0x0);
          if (pMVar38 != (MVWorldObject *)0x0) {
            if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            goto code_?;
            func_?();
          }
        }
        pMStack_19 = (MVWorldObjectClientManager *)0x0;
        if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        for (; (int)pMStack_19 < (this_02->fields)._size;
            pMStack_19 = (MVWorldObjectClientManager *)((int)&pMStack_19->klass + 1)) {
          this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_02,(int32_t)pMStack_19,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
          if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
          pIStack_26 = (IBulletImpactVisualizer__Class *)
                      MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                ((MVWorldObjectClient *)this_01,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pIStack_26,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar21 != 0) {
            pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar39 == (MVNetworkGame *)0x0) ||
               (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar39,(MethodInfo *)0x0),
               this_03 == (MVLocalPlayer *)0x0)) goto code_?;
            bVar21 = MVPlayer::MVPlayer_IsOnSameTeam_1
                               ((MVPlayer *)this_03,(MVWorldObjectClient *)this_01,(MethodInfo *)0x0
                               );
            if (bVar21 == 0) {
              lineOfFire.m_Origin.z = fStack_10;
              lineOfFire.m_Origin.x = (float)uStack_9;
              lineOfFire.m_Origin.y = uStack_9._4_4_;
              lineOfFire.m_Direction.x = fStack_2;
              lineOfFire.m_Direction.y = fStack_3;
              lineOfFire.m_Direction.z = fStack_1;
              pVVar7 = PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                                  (&VStack_14,(PickupItemSlapGun *)this,lineOfFire,(MethodInfo *)0x0
                                  );
              uStack_40._0_4_ = pVVar7->x;
              uStack_40._4_4_ = pVVar7->y;
              fStack_41 = pVVar7->z;
              VStack_8.z = fStack_41 * impulseMagnitude;
              pMStack_42 = (this->fields)._.owner;
              impulse_00.y = (float)uStack_40._4_4_ * impulseMagnitude;
              impulse_00.x = (float)(undefined4)uStack_40 * impulseMagnitude;
              impulse_00.z = VStack_8.z;
              pIVar43 = ImpulseHitPackage::ImpulseHitPackage_Create
                                  ((InteractionData *)(auStack_15 + 4),impulse_00,(MethodInfo *)0x0)
              ;
              if (pIStack_26 == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
              fVar6 = pIVar43->damage;
              fVar44 = (pIVar43->impulse).x;
              fVar45 = (pIVar43->impulse).y;
              fVar46 = (pIVar43->impulse).z;
              uVar47._0_1_ = pIVar43->interactionType;
              uVar47._1_1_ = pIVar43->playerKilledByType;
              uVar47._2_2_ = *(undefined2 *)&pIVar43->field_0x12;
              pIVar48 = pIStack_26;
              pMVar4 = pMStack_42;
              func_?();
              iVar49 = func_?();
              if (iVar49 != 0) {
                func_?();
                pMVar50 = (this->fields)._.owner;
                if ((pMVar50 == (MVPickupOwner *)0x0) ||
                   (pMVar51 = (pMVar50->fields)._.worldObjectParent,
                   pMVar51 == (MVWorldObjectClient *)0x0)) goto code_?;
                pMStack_42 = (MVPickupOwner *)(pMVar51->fields)._.ownerActorNr;
                pIStack_26 = TypeInfo__IBulletImpactVisualizer;
                iVar49 = func_?(this_01,TypeInfo__IBulletImpactVisualizer);
                if (iVar49 == 0) goto code_?;
                pIStack_26 = TypeInfo__IBulletImpactVisualizer;
                iVar49 = func_?(this_01,TypeInfo__IBulletImpactVisualizer);
                if (iVar49 == 0) goto code_?;
                func_?(0,TypeInfo__IBulletImpactVisualizer,iVar49,pIVar48,pMVar4,fVar6,
                                fVar44,fVar45,fVar46,uVar47,0,pGStack_28,pGStack_29,pGStack_30,
                                pCStack_31,pPStack_32,pCStack_33,pTStack_34,pGStack_35,pHStack_36,
                                pCStack_37,(float)uStack_9,uStack_9._4_4_,fStack_10,fStack_2,
                                CONCAT44(fStack_1,fStack_3),pMStack_42,0);
              }
            }
          }
        }
        pMVar4 = (this->fields)._.owner;
        if ((pMVar4 == (MVPickupOwner *)0x0) ||
           (pTVar52 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pMVar4,(MethodInfo *)0x0),
           pTVar52 == (Transform *)0x0)) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_14,pTVar52,(MethodInfo *)0x0);
        VStack_8.x = pVVar7->x;
        VStack_8.y = pVVar7->y;
        VStack_8.z = pVVar7->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar53 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_40._0_4_ = (pVVar53->upVector).x;
        uStack_40._4_4_ = (pVVar53->upVector).y;
        fStack_41 = (pVVar53->upVector).z;
        VStack_8.z = VStack_8.z + fStack_41 * _UNK_?;
        fVar54 = (float10)func_?((int)uStack_5,(int)((ulonglong)uStack_5 >> 0x20),
                                          fStack_22,
                                          VStack_8.x + (float)(undefined4)uStack_40 * _UNK_?
                                         );
        if ((float)fVar54 < _UNK_?) {
          fVar6 = (float)fVar54 * _UNK_?;
          if (fVar6 <= _UNK_?) {
            fVar6 = _UNK_?;
          }
          fVar6 = recoilMagnitude / fVar6;
          if (_UNK_? < impulseMagnitude) {
            pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar39 == (MVNetworkGame *)0x0) ||
               (pWVar55 = (pMVar39->fields).worldNetwork, pWVar55 == (WorldNetwork *)0x0))
            goto code_?;
            this_01 = (RegexCharClass_SingleRange)(pWVar55->fields)._.runtimeEventManagerNetwork;
            this_04 = (ExplosionEvent *)
                      func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
            worldPosition.z = fStack_22;
            worldPosition.x = (float)(undefined4)uStack_5;
            worldPosition.y = (float)uStack_5._4_4_;
            MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
            ExplosionEvent__ctor_2
                      (this_04,RuntimeEventType__Enum_ImpulseGunImpact,worldPosition,
                       (MethodInfo *)0x0);
            if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
            RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                      ((RuntimeEventManager *)this_01,this_04,(MethodInfo *)0x0);
          }
          VStack_8.z = (float)((uint)fStack_1 ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ) * fVar6;
          VStack_8.y = (float)((uint)fStack_3 ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ) * fVar6;
          VStack_8.x = (float)((uint)fStack_2 ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ) * fVar6;
          pMVar4 = (this->fields)._.owner;
          if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
          this_01 = (RegexCharClass_SingleRange)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)pMVar4,
                               MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar21 != 0) {
            if (this_01 == (RegexCharClass_SingleRange)0x0) goto code_?;
            impulse.z = VStack_8.z;
            impulse.x = VStack_8.x;
            impulse.y = VStack_8.y;
            MVRigidBody::MVRigidBody_AddImpulse_1
                      ((MVRigidBody *)this_01,impulse,1,(MethodInfo *)0x0);
          }
        }
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar56 = TypeInfo__PrefabPool->static_fields->instance;
      if (((pPVar56 != (PrefabPool *)0x0) &&
          (this_00 = (pPVar56->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
         (this_01 = (RegexCharClass_SingleRange)
                    EnumPoolManager::EnumPoolManager_Instantiate
                              (this_00,PoolEnums__Enum_ImpulseGunRay,
                               ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_
                              ), this_01 != (RegexCharClass_SingleRange)0x0)) {
        this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
        pTVar52 = (this->fields)._.muzzlePoint;
        if ((pTVar52 != (Transform *)0x0) &&
           (pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_14,pTVar52,(MethodInfo *)0x0), this_05 != (Transform *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_05,*pVVar7,(MethodInfo *)0x0);
          *(float *)((int)this_01 + 0x14) = (this->fields).radius;
          fVar6 = (this->fields).missColor.g;
          fVar44 = (this->fields).missColor.b;
          fVar45 = (this->fields).missColor.a;
          *(float *)((int)this_01 + 0x18) = (this->fields).missColor.r;
          *(float *)((int)this_01 + 0x1c) = fVar6;
          *(float *)((int)this_01 + 0x20) = fVar44;
          *(float *)((int)this_01 + 0x24) = fVar45;
          target.z = fStack_22;
          target.x = (float)(undefined4)uStack_5;
          target.y = (float)uStack_5._4_4_;
          ImpulseRay::ImpulseRay_Initialize((ImpulseRay *)this_01,target,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(this_01,pIStack_26);
  pcVar57 = (code *)swi(3);
  (*pcVar57)();
  return;
}


/* List`1[MVWorldObjectClient] SphereCastAgainstWorldObjects(Ray) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_SphereCastAgainstWorldObjects
          (PickupItemImpulseGun *this,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVWorldObjectClient_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  fStack_2 = (this->fields).radius;
  pMVar3 = (this->fields)._.owner;
  distance = (this->fields).maxRange;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    ignoreWoIds = (HashSet_1_System_Int32_ *)
                  (*(code *)(pMVar3->klass->vtable).get_IgnoreWOIDs.method)
                            (pMVar3,pMVar3->klass[1]._0.image);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    this_00 = (List_1_GameTierProgressBar_TierProgressData_ *)
              CollisionDetection::CollisionDetection_MVSphereCastAll
                        (lineOfFire,fStack_2,distance,ignoreWoIds,1 << ((byte)iVar4 & 0x1f),
                         (MethodInfo *)0x0);
    index = 0;
    if (this_00 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      do {
        if ((this_00->fields)._size <= index) {
          return pLVar1;
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pGVar5 = mscorlib.dll::System::Collections::Generic::
                 List`1[GameTierProgressBar+TierProgressData]::
                 List_1_GameTierProgressBar_TierProgressData__get_Item
                           (&GStack_6,this_00,index,
                            MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_)
        ;
        pPStack_7 = pGVar5->progressBar;
        pTStack_8 = pGVar5->progressText;
        pGStack_9 = pGVar5->progressDivider;
        pGStack_10 = pGVar5->progressBarTextBubble;
        pGStack_11 = pGVar5->avatarHead;
        pRStack_12 = pGVar5->avatarHeadImage;
        pGStack_13 = pGVar5->avatarHeadUI;
        pPStack_14 = pGVar5->disabledProgressBar;
        pGStack_15 = pGVar5->disabledProgressDivider;
        pGStack_16 = pGVar5->disabledBarTextBubble;
        pGStack_17 = pGVar5->tierIconTempUnlock;
        pGStack_18 = pGVar5->tierIconNumber;
        pPStack_19 = pGVar5->endResultProgressBar;
        pGStack_20 = pGVar5->tempProgress;
        pGStack_21 = pGVar5->disabledTempProgress;
        pGStack_22 = pGVar5->freeTryTextBubble;
        uStack_23._0_4_ = pGVar5->hoverInputHandler;
        uStack_23._4_4_ = pGVar5->LockedTierIcon;
        if (this_01 == (MVWorldObjectClientManager *)0x0) break;
        pMVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,(int32_t)pGStack_17,(MethodInfo *)0x0);
        if (pMVar24 != (MVWorldObject *)0x0) {
          if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) break;
          func_?(pLVar1,pMVar24,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                         );
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar25)();
  return pLVar1;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_TriggerBegin
               (PickupItemImpulseGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  exists = (this->fields).chargeSound;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 == 0) goto code_?;
  pAVar2 = (this->fields).audioSource;
  if (pAVar2 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (pAVar2,(this->fields).chargeSound,(MethodInfo *)0x0);
    pAVar2 = (this->fields).audioSource;
    if (pAVar2 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,1,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        bVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar2,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pAVar2 = (this->fields).audioSource;
          if (pAVar2 == (AudioSource *)0x0) goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                    (pAVar2,(MethodInfo *)0x0);
        }
code_?:
        (this->fields).isCharging = 1;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).chargeBeginTime = fVar3;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_TriggerEnd
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).isCharging == 0) {
    return;
  }
  exists = (this->fields).releaseSound;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pAVar2 = (this->fields).audioSource;
    if ((pAVar2 == (AudioSource *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar2,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                (pAVar2,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar2,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).audioSource;
      if (pAVar2 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot
                (pAVar2,(this->fields).releaseSound,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).chargeCurve;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar3 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
    pMVar4 = (this->fields)._.owner;
    (this->fields).missColor.a = fVar3;
    (this->fields).hitColor.a = fVar3;
    if ((pMVar4 != (MVPickupOwner *)0x0) &&
       (pMVar5 = (pMVar4->fields)._.worldObjectParent, pMVar5 != (MVWorldObjectClient *)0x0)) {
      PickupItemImpulseGun_Fire
                (this,(pMVar5->fields)._.id,fVar3 * (this->fields).hitImpulse,
                 fVar3 * (this->fields).recoilImpulse,(MethodInfo *)0x0);
      (this->fields).isCharging = 0;
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Update
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  pTVar1 = (this->fields).chargeObject;
  if ((this->fields).isCharging == 0) {
    if ((pTVar1 != (Transform *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pTVar1 = (this->fields).chargeObject;
      if ((pTVar1 != (Transform *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).modelTransform;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if ((pTVar1 != (Transform *)0x0) &&
          (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
  {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pTVar1 = (this->fields).chargeObject;
      if ((pTVar1 == (Transform *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      in_stack_4 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
    }
    PickupItemImpulseGun_DoChargingAnimation(this,(MethodInfo *)0x0);
    this_00 = (this->fields).audioSource;
    if (this_00 != (AudioSource *)0x0) {
      bVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (this_00,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return;
      }
      if ((this->fields).audioSource != (AudioSource *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?();
        }
        (*pcRam_?)(in_stack_4,0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PickupItemImpulseGun() */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun__ctor
               (PickupItemImpulseGun *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).hitColor.r = _UNK_?;
  (this->fields).hitColor.g = fVar3;
  (this->fields).hitColor.b = fVar2;
  (this->fields).hitColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).missColor.r = _UNK_?;
  (this->fields).missColor.g = fVar3;
  (this->fields).missColor.b = fVar2;
  (this->fields).missColor.a = fVar1;
  (this->fields).hitImpulse = 2400.0;
  uVar4 = _UNK_?;
  (this->fields).shakeDirection.x = (float)_UNK_?;
  (this->fields).shakeDirection.y = (float)uVar4;
  (this->fields).recoilImpulse = 1600.0;
  (this->fields).maxRange = 50.0;
  (this->fields).chargingRate = 100.0;
  (this->fields).radius = 1.2;
  (this->fields).shakeFrequency = 1.0;
  (this->fields).shakePower = 1.0;
  (this->fields).shakeDirection.z = 1.0;
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* Single get_ChargeState() */

float Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_get_ChargeState
                (PickupItemImpulseGun *this,MethodInfo *method)

{
  if ((this->fields).isCharging == 0) {
    return 0.0;
  }
  this_00 = (this->fields).chargeCurve;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar1 - (this->fields).chargeBeginTime,(MethodInfo *)0x0);
    return fVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}

