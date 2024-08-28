
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
                  (this_00,(this->fields).maxVolume * fVar2,(MethodInfo *)0x0);
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
  func_?();
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uStack_2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uStack_2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fVar3 = (pMVar1->fields).lookOrigin.z;
    pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_5,pMVar1,(MethodInfo *)0x0);
    uStack_6 = uStack_2;
    fStack_7 = fVar3;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_5,*pVVar4,(MethodInfo *)0x0);
    uVar8 = pVVar4->x;
    uVar9 = pVVar4->y;
    fStack_10 = pVVar4->z;
    fStack_11 = (float)uStack_6;
    VStack_12.x = uStack_6._4_4_;
    VStack_12.y = fStack_7;
    VStack_12.z = (float)uVar8;
    auStack_13._0_4_ = (float)uStack_6;
    auStack_13._4_4_ = uStack_6._4_4_;
    fStack_14 = fStack_7;
    fStack_15 = (float)uVar8;
    uStack_16._4_4_ = fStack_10;
    uStack_16._0_4_ = (float)uVar9;
    fStack_17 = (float)uVar8;
    fStack_18 = (float)uVar9;
    if (cRam_? == '\0') {
      uStack_2 = uStack_16;
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
      fStack_11 = (float)auStack_13._0_4_;
      VStack_12.x = (float)auStack_13._4_4_;
      VStack_12.y = fStack_14;
      VStack_12.z = fStack_15;
    }
    auStack_13._0_4_ = fStack_11;
    auStack_13._4_4_ = VStack_12.x;
    fStack_14 = VStack_12.y;
    fStack_15 = VStack_12.z;
    uStack_2 = uStack_16;
    func_?();
    pMStack_19 = (MVWorldObjectClientManager *)(this->fields).maxRange;
    pHVar20 = (HashSet_1_System_Int32_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (pHVar20,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    ray.m_Origin.y = VStack_12.x;
    ray.m_Origin.x = fStack_11;
    ray.m_Origin.z = VStack_12.y;
    ray.m_Direction.x = VStack_12.z;
    ray.m_Direction.y = (float)uStack_2;
    ray.m_Direction.z = SUB84(uStack_2,4);
    bVar22 = CollisionDetection::CollisionDetection_MVHit_1
                       (ray,(VoxelHit *)auStack_23,(float)pMStack_19,pHVar20,
                        1 << ((byte)iVar21 & 0x1f),(MethodInfo *)0x0);
    if (bVar22 == 0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                          (&VStack_5,(Ray *)auStack_13,(this->fields).maxRange,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar4->x;
      uStack_2._4_4_ = pVVar4->y;
      pGStack_24 = (GameObject *)pVVar4->z;
    }
    else {
      uStack_2 = CONCAT44(auStack_23._4_4_,auStack_23._0_4_);
      pGStack_24 = (GameObject *)auStack_23._8_4_;
    }
    pMVar1 = (this->fields)._.owner;
    unaff_ESI = (RegexCharClass_SingleRange)this;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
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
        pIStack_25 = (IBulletImpactVisualizer__Class *)(this->fields).radius;
        pMVar1 = (this->fields)._.owner;
        pMStack_19 = (MVWorldObjectClientManager *)(this->fields).maxRange;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        pHVar20 = (HashSet_1_System_Int32_ *)
                  (*(code *)(pMVar1->klass->vtable).get_IgnoreWOIDs.method)
                            (pMVar1,pMVar1->klass[1]._0.image);
        iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Player,(MethodInfo *)0x0);
        ray_00.m_Origin.z = fStack_7;
        ray_00.m_Origin.x = (float)uStack_6;
        ray_00.m_Origin.y = uStack_6._4_4_;
        ray_00.m_Direction.x = fStack_17;
        ray_00.m_Direction.y = fStack_18;
        ray_00.m_Direction.z = fStack_10;
        pIStack_25 = (IBulletImpactVisualizer__Class *)
                    CollisionDetection::CollisionDetection_MVSphereCastAll
                              (ray_00,(float)pIStack_25,(float)pMStack_19,pHVar20,
                               1 << ((byte)iVar21 & 0x1f),(MethodInfo *)0x0);
        unaff_ESI.First = 0;
        unaff_ESI.Last = 0;
        if (pIStack_25 == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
        for (; (int)unaff_ESI < (int)(pIStack_25->_0).namespaze;
            unaff_ESI = (RegexCharClass_SingleRange)((int)unaff_ESI + 1)) {
          pMStack_19 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pGVar26 = mscorlib.dll::System::Collections::Generic::
                    List`1[GameTierProgressBar+TierProgressData]::
                    List_1_GameTierProgressBar_TierProgressData__get_Item
                              ((GameTierProgressBar_TierProgressData *)&stack0xfffffeb4,
                               (List_1_GameTierProgressBar_TierProgressData_ *)pIStack_25,
                               (int32_t)unaff_ESI,
                               MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                              );
          auStack_23._0_4_ = pGVar26->progressBar;
          auStack_23._4_4_ = pGVar26->progressText;
          auStack_23._8_4_ = pGVar26->progressDivider;
          auStack_23._12_4_ = pGVar26->progressBarTextBubble;
          auStack_23._16_4_ = pGVar26->avatarHead;
          auStack_23._20_4_ = pGVar26->avatarHeadImage;
          auStack_23._24_4_ = pGVar26->avatarHeadUI;
          pPStack_27 = pGVar26->disabledProgressBar;
          pGStack_28 = pGVar26->disabledProgressDivider;
          pGStack_29 = pGVar26->disabledBarTextBubble;
          pGStack_30 = pGVar26->tierIconTempUnlock;
          pCStack_31 = (Cube *)pGVar26->tierIconNumber;
          pPStack_32 = pGVar26->endResultProgressBar;
          pCStack_33 = (Collider *)pGVar26->tempProgress;
          pTStack_34 = (Transform *)pGVar26->disabledTempProgress;
          pGStack_35 = pGVar26->freeTryTextBubble;
          pHStack_36 = pGVar26->hoverInputHandler;
          pCStack_37 = pGVar26->LockedTierIcon;
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
          unaff_ESI = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_02,(int32_t)pMStack_19,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
          if (unaff_ESI == (RegexCharClass_SingleRange)0x0) goto code_?;
          pIStack_25 = (IBulletImpactVisualizer__Class *)
                      MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                ((MVWorldObjectClient *)unaff_ESI,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)pIStack_25,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar39 == (MVNetworkGame *)0x0) goto code_?;
            this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar39,(MethodInfo *)0x0);
            if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
            bVar22 = MVPlayer::MVPlayer_IsOnSameTeam_1
                               ((MVPlayer *)this_03,(MVWorldObjectClient *)unaff_ESI,
                                (MethodInfo *)0x0);
            if (bVar22 == 0) {
              lineOfFire.m_Origin.z = fStack_7;
              lineOfFire.m_Origin.x = (float)uStack_6;
              lineOfFire.m_Origin.y = uStack_6._4_4_;
              lineOfFire.m_Direction.x = fStack_17;
              lineOfFire.m_Direction.y = fStack_18;
              lineOfFire.m_Direction.z = fStack_10;
              pVVar4 = PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                                  (&VStack_12,(PickupItemSlapGun *)this,lineOfFire,(MethodInfo *)0x0
                                  );
              uStack_40._0_4_ = pVVar4->x;
              uStack_40._4_4_ = pVVar4->y;
              fStack_41 = pVVar4->z;
              VStack_5.z = fStack_41 * impulseMagnitude;
              pMStack_42 = (this->fields)._.owner;
              impulse_00.y = (float)uStack_40._4_4_ * impulseMagnitude;
              impulse_00.x = (float)(undefined4)uStack_40 * impulseMagnitude;
              impulse_00.z = VStack_5.z;
              pIVar43 = ImpulseHitPackage::ImpulseHitPackage_Create
                                  ((InteractionData *)(auStack_13 + 4),impulse_00,(MethodInfo *)0x0)
              ;
              if (pIStack_25 == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
              fVar3 = pIVar43->damage;
              fVar44 = (pIVar43->impulse).x;
              fVar45 = (pIVar43->impulse).y;
              fVar46 = (pIVar43->impulse).z;
              uVar47._0_1_ = pIVar43->interactionType;
              uVar47._1_1_ = pIVar43->playerKilledByType;
              uVar47._2_2_ = *(undefined2 *)&pIVar43->field_0x12;
              pIVar48 = pIStack_25;
              pMVar1 = pMStack_42;
              func_?();
              iVar49 = func_?();
              if (iVar49 != 0) {
                func_?();
                pMVar50 = (this->fields)._.owner;
                if ((pMVar50 == (MVPickupOwner *)0x0) ||
                   (pMVar51 = (pMVar50->fields)._.worldObjectParent,
                   pMVar51 == (MVWorldObjectClient *)0x0)) goto code_?;
                pMStack_42 = (MVPickupOwner *)(pMVar51->fields)._.ownerActorNr;
                pIStack_25 = TypeInfo__IBulletImpactVisualizer;
                iVar49 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                if (iVar49 == 0) goto code_?;
                pIStack_25 = TypeInfo__IBulletImpactVisualizer;
                iVar49 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                if (iVar49 == 0) goto code_?;
                func_?(0,TypeInfo__IBulletImpactVisualizer,iVar49,pIVar48,pMVar1,fVar3,
                                fVar44,fVar45,fVar46,uVar47,0,uStack_52,uStack_53,uStack_54,uStack_55
                                ,uStack_56,uStack_57,uStack_58,uStack_59,uStack_60,uStack_61,
                                (float)uStack_6,uStack_6._4_4_,fStack_7,fStack_17,
                                CONCAT44(fStack_10,fStack_18),pMStack_42,0);
              }
            }
          }
        }
        pMVar1 = (this->fields)._.owner;
        unaff_ESI = (RegexCharClass_SingleRange)this;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        pTVar62 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar1,(MethodInfo *)0x0);
        if (pTVar62 == (Transform *)0x0) goto code_?;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_12,pTVar62,(MethodInfo *)0x0);
        VStack_5.x = pVVar4->x;
        VStack_5.y = pVVar4->y;
        VStack_5.z = pVVar4->z;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar63 = TypeInfo__UnityEngine__Vector3->static_fields;
        uStack_40._0_4_ = (pVVar63->upVector).x;
        uStack_40._4_4_ = (pVVar63->upVector).y;
        fStack_41 = (pVVar63->upVector).z;
        VStack_5.z = VStack_5.z + fStack_41 * _UNK_?;
        fVar64 = (float10)func_?((int)uStack_2,(int)((ulonglong)uStack_2 >> 0x20),
                                          pGStack_24,
                                          VStack_5.x + (float)(undefined4)uStack_40 * _UNK_?
                                         );
        if ((float)fVar64 < _UNK_?) {
          fVar3 = (float)fVar64 * _UNK_?;
          if (fVar3 <= _UNK_?) {
            fVar3 = _UNK_?;
          }
          fVar3 = recoilMagnitude / fVar3;
          if (_UNK_? < impulseMagnitude) {
            pMVar39 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar39 == (MVNetworkGame *)0x0) ||
               (pWVar65 = (pMVar39->fields).worldNetwork, pWVar65 == (WorldNetwork *)0x0))
            goto code_?;
            this_00 = (RuntimeEventManager *)(pWVar65->fields)._.runtimeEventManagerNetwork;
            this_04 = (ExplosionEvent *)
                      func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
            worldPosition.z = (float)pGStack_24;
            worldPosition.x = (float)(undefined4)uStack_2;
            worldPosition.y = (float)uStack_2._4_4_;
            MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
            ExplosionEvent__ctor_2
                      (this_04,RuntimeEventType__Enum_ImpulseGunImpact,worldPosition,
                       (MethodInfo *)0x0);
            if (this_00 == (RuntimeEventManager *)0x0) goto code_?;
            RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                      (this_00,this_04,(MethodInfo *)0x0);
          }
          VStack_5.z = (float)((uint)fStack_10 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               ) * fVar3;
          VStack_5.y = (float)((uint)fStack_18 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               ) * fVar3;
          VStack_5.x = (float)((uint)fStack_17 ^
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               ) * fVar3;
          pMVar1 = (this->fields)._.owner;
          if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
          this_05 = (MVRigidBody *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)pMVar1,
                               MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)this_05,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar22 != 0) {
            if (this_05 == (MVRigidBody *)0x0) goto code_?;
            impulse.z = VStack_5.z;
            impulse.x = VStack_5.x;
            impulse.y = VStack_5.y;
            MVRigidBody::MVRigidBody_AddImpulse_1(this_05,impulse,1,(MethodInfo *)0x0);
          }
        }
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar66 = TypeInfo__PrefabPool->static_fields->instance;
      unaff_ESI = (RegexCharClass_SingleRange)this;
      if ((pPVar66 != (PrefabPool *)0x0) &&
         (this_01 = (pPVar66->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) {
        this_06 = (ImpulseRay *)
                  EnumPoolManager::EnumPoolManager_Instantiate
                            (this_01,PoolEnums__Enum_ImpulseGunRay,
                             ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_
                            );
        if (this_06 != (ImpulseRay *)0x0) {
          this_07 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_06,(MethodInfo *)0x0);
          pTVar62 = (this->fields)._.muzzlePoint;
          if (pTVar62 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_12,pTVar62,(MethodInfo *)0x0);
            if (this_07 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_07,*pVVar4,(MethodInfo *)0x0);
              (this_06->fields).radius = (this->fields).radius;
              fVar3 = (this->fields).missColor.g;
              fVar44 = (this->fields).missColor.b;
              fVar45 = (this->fields).missColor.a;
              (this_06->fields).startColor.r = (this->fields).missColor.r;
              (this_06->fields).startColor.g = fVar3;
              (this_06->fields).startColor.b = fVar44;
              (this_06->fields).startColor.a = fVar45;
              target.z = (float)pGStack_24;
              target.x = (float)(undefined4)uStack_2;
              target.y = (float)uStack_2._4_4_;
              ImpulseRay::ImpulseRay_Initialize(this_06,target,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,pIStack_25);
  pcVar67 = (code *)swi(3);
  (*pcVar67)();
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
                (this,(pMVar5->fields)._.id,(this->fields).hitImpulse * fVar3,
                 (this->fields).recoilImpulse * fVar3,(MethodInfo *)0x0);
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

