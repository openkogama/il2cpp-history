
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
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
                      (ray,(VoxelHit *)&stack0xffffff98,fVar6,(HashSet_1_System_Int32_ *)this_00,
                       (int32_t)layerMask,(MethodInfo *)0x0);
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
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar12)();
  return pVVar11;
}


/* Void Fire(Int32, Single, Single) */

void Assembly-CSharp.dll::PickupItemImpulseGun::PickupItemImpulseGun_Fire
               (PickupItemImpulseGun *this,int32_t avatarId,float impulseMagnitude,
               float recoilMagnitude,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
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
  DStack_1._dictionary =
       (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentKey._options = 0;
  DStack_1._currentKey._cultureKey = (String *)0x0;
  DStack_1._currentKey._pattern = (String *)0x0;
  func_?(&stack0xfffffef0,0,0x48);
  pMVar2 = (this->fields)._.owner;
  this_02.First = 0;
  this_02.Last = 0;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    uStack_3._0_4_ = (String *)(pMVar2->fields).lookOrigin.x;
    uStack_3._4_4_ = (String *)(pMVar2->fields).lookOrigin.y;
    fVar4 = (pMVar2->fields).lookOrigin.z;
    pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_6,(this->fields)._.owner,(MethodInfo *)0x0);
    origin.z = fVar4;
    origin.x = (float)(String *)uStack_3;
    origin.y = (float)uStack_3._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              ((Ray *)&DStack_1,origin,*pVVar5,(MethodInfo *)0x0);
    pDStack_7 = DStack_1._dictionary;
    RStack_8._options = DStack_1._index;
    RStack_8._cultureKey = (String *)DStack_1._version;
    RStack_8._pattern = (String *)DStack_1._currentKey._options;
    auStack_9._0_4_ = DStack_1._dictionary;
    auStack_9._4_4_ = DStack_1._index;
    pDStack_10 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)DStack_1._version;
    pSStack_11 = (String *)DStack_1._currentKey._options;
    uStack_3._0_4_ = DStack_1._currentKey._cultureKey;
    uStack_3._4_4_ = DStack_1._currentKey._pattern;
    pDStack_12 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)DStack_1._currentKey._cultureKey;
    pSStack_13 = DStack_1._currentKey._pattern;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      uStack_3._0_4_ = (String *)pDStack_12;
      uStack_3._4_4_ = pSStack_13;
      cRam_? = '\x01';
      pDStack_7 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)auStack_9._0_4_;
      RStack_8._options = auStack_9._4_4_;
      RStack_8._cultureKey = (String *)pDStack_10;
      RStack_8._pattern = pSStack_11;
    }
    auStack_9._0_4_ = pDStack_7;
    auStack_9._4_4_ = RStack_8._options;
    pDStack_10 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)RStack_8._cultureKey;
    pSStack_11 = RStack_8._pattern;
    _pDStack_70 = uStack_3;
    func_?();
    pLStack_14 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).maxRange;
    this_02 = (RegexCharClass_SingleRange)func_?();
    if (this_02 != (RegexCharClass_SingleRange)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                ((HashSet_1_UnityEngine_Vector3_ *)this_02,
                 MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Origin.y = (float)RStack_8._options;
      ray.m_Origin.x = (float)pDStack_7;
      ray.m_Origin.z = (float)RStack_8._cultureKey;
      ray.m_Direction.x = (float)RStack_8._pattern;
      ray.m_Direction.y = (float)(String *)uStack_3;
      ray.m_Direction.z = (float)SUB84(uStack_3,4);
      bVar16 = CollisionDetection::CollisionDetection_MVHit_1
                         (ray,(VoxelHit *)auStack_17,(float)pLStack_14,
                          (HashSet_1_System_Int32_ *)this_02,1 << ((byte)iVar15 & 0x1f),
                          (MethodInfo *)0x0);
      if (bVar16 == 0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&VStack_6,(Ray *)auStack_9,(this->fields).maxRange,(MethodInfo *)0x0)
        ;
        uStack_3._0_4_ = (String *)pVVar5->x;
        uStack_3._4_4_ = (String *)pVVar5->y;
        pGStack_18 = (GameObject *)pVVar5->z;
      }
      else {
        uStack_3._4_4_ = (String *)auStack_17._4_4_;
        uStack_3._0_4_ = (String *)auStack_17._0_4_;
        pGStack_18 = (GameObject *)auStack_17._8_4_;
      }
      pMVar2 = (this->fields)._.owner;
      if (pMVar2 != (MVPickupOwner *)0x0) {
        if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
          pDStack_7 = DStack_1._dictionary;
          RStack_8._options = DStack_1._index;
          RStack_8._cultureKey = (String *)DStack_1._version;
          RStack_8._pattern = (String *)DStack_1._currentKey._options;
          pSStack_19 = DStack_1._currentKey._cultureKey;
          pSStack_20 = DStack_1._currentKey._pattern;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__
                           );
            func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
            func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                           );
            func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
            func_?(&StringLiteral_Player);
            cRam_? = '\x01';
          }
          pLStack_14 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       func_?(
                                      TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>
                                      );
          if (pLStack_14 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
             ) goto code_?;
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pLStack_14,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
          pMStack_21 = (MVWorldObjectClientManager *)(this->fields).radius;
          pMVar2 = (this->fields)._.owner;
          pIStack_22 = (IBulletImpactVisualizer__Class *)(this->fields).maxRange;
          if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
          ignoreWoIds = (HashSet_1_System_Int32_ *)
                        (*(pMVar2->klass->vtable).get_IgnoreWOIDs.methodPtr)
                                  (pMVar2,(pMVar2->klass->vtable).get_IgnoreWOIDs.method);
          iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          ray_00.m_Origin.y = (float)RStack_8._options;
          ray_00.m_Origin.x = (float)pDStack_7;
          ray_00.m_Origin.z = (float)RStack_8._cultureKey;
          ray_00.m_Direction.x = (float)RStack_8._pattern;
          ray_00.m_Direction.y = (float)pSStack_19;
          ray_00.m_Direction.z = (float)pSStack_20;
          pIStack_22 = (IBulletImpactVisualizer__Class *)
                      CollisionDetection::CollisionDetection_MVSphereCastAll
                                (ray_00,(float)pMStack_21,(float)pIStack_22,ignoreWoIds,
                                 1 << ((byte)iVar15 & 0x1f),(MethodInfo *)0x0);
          this_02.First = 0;
          this_02.Last = 0;
          if (pIStack_22 == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
          for (; (int)this_02 < (int)(pIStack_22->_0).namespaze;
              this_02 = (RegexCharClass_SingleRange)((int)this_02 + 1)) {
            pMStack_21 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pGVar23 = mscorlib.dll::System::Collections::Generic::
                      List`1[GameTierProgressBar+TierProgressData]::
                      List_1_GameTierProgressBar_TierProgressData__get_Item
                                ((GameTierProgressBar_TierProgressData *)&stack0xfffffea8,
                                 (List_1_GameTierProgressBar_TierProgressData_ *)pIStack_22,
                                 (int32_t)this_02,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                );
            auStack_17._0_4_ = pGVar23->progressBar;
            auStack_17._4_4_ = pGVar23->progressText;
            auStack_17._8_4_ = pGVar23->progressDivider;
            auStack_17._12_4_ = pGVar23->progressBarTextBubble;
            auStack_17._16_4_ = pGVar23->avatarHead;
            auStack_17._20_4_ = pGVar23->avatarHeadImage;
            auStack_17._24_4_ = pGVar23->avatarHeadUI;
            pPStack_24 = pGVar23->disabledProgressBar;
            pGStack_25 = pGVar23->disabledProgressDivider;
            pGStack_26 = pGVar23->disabledBarTextBubble;
            pGStack_27 = pGVar23->tierIconTempUnlock;
            pCStack_28 = (Cube *)pGVar23->tierIconNumber;
            pPStack_29 = pGVar23->endResultProgressBar;
            pCStack_30 = (Collider *)pGVar23->tempProgress;
            pTStack_31 = (Transform *)pGVar23->disabledTempProgress;
            pGStack_32 = pGVar23->freeTryTextBubble;
            pHStack_33 = pGVar23->hoverInputHandler;
            pCStack_34 = pGVar23->LockedTierIcon;
            if (pMStack_21 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar35 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMStack_21,(int32_t)pGStack_27,(MethodInfo *)0x0);
            if (pMVar35 != (MVWorldObject *)0x0) {
              func_?();
            }
          }
          for (index = 0; index < (pLStack_14->fields)._size; index = index + 1) {
            this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLStack_14,index,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
            if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
            pIStack_22 = (IBulletImpactVisualizer__Class *)
                        MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  ((MVWorldObjectClient *)this_02,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                               ((Object_1 *)pIStack_22,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar16 != 0) {
              pMVar36 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar36 == (MVNetworkGame *)0x0) ||
                 (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar36,(MethodInfo *)0x0),
                 this_03 == (MVLocalPlayer *)0x0)) goto code_?;
              bVar16 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                 ((MVPlayer *)this_03,(MVWorldObjectClient *)this_02,
                                  (MethodInfo *)0x0);
              if (bVar16 == 0) {
                lineOfFire.m_Origin.y = (float)DStack_1._index;
                lineOfFire.m_Origin.x = (float)DStack_1._dictionary;
                lineOfFire.m_Origin.z = (float)DStack_1._version;
                lineOfFire.m_Direction.x = (float)DStack_1._currentKey._options;
                lineOfFire.m_Direction.y = (float)DStack_1._currentKey._cultureKey;
                lineOfFire.m_Direction.z = (float)DStack_1._currentKey._pattern;
                pVVar5 = PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                                    ((Vector3 *)&RStack_8,(PickupItemSlapGun *)this,lineOfFire,
                                     (MethodInfo *)0x0);
                uStack_37._0_4_ = pVVar5->x;
                uStack_37._4_4_ = pVVar5->y;
                fStack_38 = pVVar5->z;
                VStack_6.z = fStack_38 * impulseMagnitude;
                pMStack_21 = (MVWorldObjectClientManager *)(this->fields)._.owner;
                impulse_00.y = (float)uStack_37._4_4_ * impulseMagnitude;
                impulse_00.x = (float)(undefined4)uStack_37 * impulseMagnitude;
                impulse_00.z = VStack_6.z;
                pIVar39 = ImpulseHitPackage::ImpulseHitPackage_Create
                                    ((InteractionData *)(auStack_9 + 4),impulse_00,
                                     (MethodInfo *)0x0);
                if (pIStack_22 == (IBulletImpactVisualizer__Class *)0x0) goto code_?;
                fVar4 = pIVar39->damage;
                fVar40 = (pIVar39->impulse).x;
                fVar41 = (pIVar39->impulse).y;
                fVar42 = (pIVar39->impulse).z;
                uVar43._0_1_ = pIVar39->interactionType;
                uVar43._1_1_ = pIVar39->playerKilledByType;
                uVar43._2_2_ = *(undefined2 *)&pIVar39->field_0x12;
                pIVar44 = pIStack_22;
                pMVar45 = pMStack_21;
                func_?();
                iVar46 = func_?();
                if (iVar46 != 0) {
                  func_?(&stack0xfffffef0,0,0x48);
                  pDStack_10 = DStack_1._dictionary;
                  pSStack_11 = (String *)DStack_1._index;
                  pSStack_13 = (String *)DStack_1._currentKey._options;
                  pDStack_12 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                *)DStack_1._version;
                  pMVar2 = (this->fields)._.owner;
                  pSStack_19 = DStack_1._currentKey._cultureKey;
                  pSStack_20 = DStack_1._currentKey._pattern;
                  if ((pMVar2 == (MVPickupOwner *)0x0) ||
                     (pMVar47 = (pMVar2->fields)._.worldObjectParent,
                     pMVar47 == (MVWorldObjectClient *)0x0)) goto code_?;
                  pMStack_21 = (MVWorldObjectClientManager *)(pMVar47->fields)._.ownerActorNr;
                  pIStack_22 = TypeInfo__IBulletImpactVisualizer;
                  iVar46 = func_?(this_02,TypeInfo__IBulletImpactVisualizer);
                  if (iVar46 == 0) goto code_?;
                  pIStack_22 = TypeInfo__IBulletImpactVisualizer;
                  iVar46 = func_?(this_02,TypeInfo__IBulletImpactVisualizer);
                  if (iVar46 == 0) goto code_?;
                  func_?(0,TypeInfo__IBulletImpactVisualizer,iVar46,pIVar44,pMVar45,fVar4,
                                  fVar40,fVar41,fVar42,uVar43,0,uStack_48,uStack_49,uStack_50,
                                  uStack_51,uStack_52,uStack_53,uStack_54,uStack_55,uStack_56,
                                  uStack_57,pDStack_10,pSStack_11,pDStack_12,pSStack_13,pSStack_19,
                                  pSStack_20,pMStack_21,0);
                }
              }
            }
          }
          pMVar2 = (this->fields)._.owner;
          if ((pMVar2 == (MVPickupOwner *)0x0) ||
             (pTVar58 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar2,(MethodInfo *)0x0),
             pTVar58 == (Transform *)0x0)) goto code_?;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&RStack_8,pTVar58,(MethodInfo *)0x0);
          uVar59 = pVVar5->x;
          uVar60 = pVVar5->y;
          pSStack_20 = (String *)pVVar5->z;
          fStack_61 = (float)uVar59;
          pSStack_19 = (String *)uVar60;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar62 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_37._0_4_ = (pVVar62->upVector).x;
          uStack_37._4_4_ = (pVVar62->upVector).y;
          fStack_38 = (pVVar62->upVector).z;
          VStack_6.z = (float)pSStack_20 + fStack_38 * _UNK_?;
          fVar63 = (float10)func_?((String *)uStack_3,SUB84(uStack_3,4),pGStack_18,
                                            fStack_61 + (float)(undefined4)uStack_37 * _UNK_?
                                           );
          if ((float)fVar63 < _UNK_?) {
            fVar4 = (float)fVar63 * _UNK_?;
            if (fVar4 <= _UNK_?) {
              fVar4 = _UNK_?;
            }
            fVar4 = recoilMagnitude / fVar4;
            if (_UNK_? < impulseMagnitude) {
              pMVar36 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar36 == (MVNetworkGame *)0x0) ||
                 (pWVar64 = (pMVar36->fields).worldNetwork, pWVar64 == (WorldNetwork *)0x0))
              goto code_?;
              this_00 = (RuntimeEventManager *)(pWVar64->fields)._.runtimeEventManagerNetwork;
              this_02 = (RegexCharClass_SingleRange)
                        func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
              if ((this_02 == (RegexCharClass_SingleRange)0x0) ||
                 (worldPosition.z = (float)pGStack_18, worldPosition.x = (float)(String *)uStack_3,
                 worldPosition.y = (float)uStack_3._4_4_,
                 MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
                 ExplosionEvent__ctor_3
                           ((ExplosionEvent *)this_02,RuntimeEventType__Enum_ImpulseGunImpact,
                            worldPosition,(MethodInfo *)0x0), this_00 == (RuntimeEventManager *)0x0)
                 ) goto code_?;
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                        (this_00,(ExplosionEvent *)this_02,(MethodInfo *)0x0);
            }
            pRVar65 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                (&RStack_8,&DStack_1,(MethodInfo *)0x0);
            uVar66 = pRVar65->_options;
            uVar67 = pRVar65->_cultureKey;
            fStack_38 = (float)((uint)pRVar65->_pattern ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               ) * fVar4;
            uStack_37 = CONCAT44((float)(uVar67 ^ 
                                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                        ) * fVar4,
                                 (float)(uVar66 ^ 
                                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                        ) * fVar4);
            pMVar2 = (this->fields)._.owner;
            if (pMVar2 == (MVPickupOwner *)0x0) goto code_?;
            this_02 = (RegexCharClass_SingleRange)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                ((Component *)pMVar2,
                                 MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                               ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar16 != 0) {
              if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
              impulse.z = fStack_38;
              impulse.x = (float)(undefined4)uStack_37;
              impulse.y = (float)uStack_37._4_4_;
              MVRigidBody::MVRigidBody_AddImpulse_1
                        ((MVRigidBody *)this_02,impulse,1,(MethodInfo *)0x0);
            }
          }
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar68 = TypeInfo__PrefabPool->static_fields->instance;
        if (((pPVar68 != (PrefabPool *)0x0) &&
            (this_01 = (pPVar68->fields).enumPoolManager, this_01 != (EnumPoolManager *)0x0)) &&
           (this_02 = (RegexCharClass_SingleRange)
                      EnumPoolManager::EnumPoolManager_Instantiate
                                (this_01,PoolEnums__Enum_ImpulseGunRay,
                                 ImpulseRay_MethodInfo__EnumPoolManager__Instantiate<ImpulseRay>_PoolEnums_
                                ), this_02 != (RegexCharClass_SingleRange)0x0)) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_02,(MethodInfo *)0x0);
          pTVar58 = (this->fields)._.muzzlePoint;
          if ((pTVar58 != (Transform *)0x0) &&
             (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&RStack_8,pTVar58,(MethodInfo *)0x0),
             this_04 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_04,*pVVar5,(MethodInfo *)0x0);
            *(float *)((int)this_02 + 0x10) = (this->fields).radius;
            fVar4 = (this->fields).missColor.g;
            fVar40 = (this->fields).missColor.b;
            fVar41 = (this->fields).missColor.a;
            *(float *)((int)this_02 + 0x14) = (this->fields).missColor.r;
            *(float *)((int)this_02 + 0x18) = fVar4;
            *(float *)((int)this_02 + 0x1c) = fVar40;
            *(float *)((int)this_02 + 0x20) = fVar41;
            target.z = (float)pGStack_18;
            target.x = (float)(String *)uStack_3;
            target.y = (float)uStack_3._4_4_;
            ImpulseRay::ImpulseRay_Initialize((ImpulseRay *)this_02,target,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?(this_02,pIStack_22);
  pcVar69 = (code *)swi(3);
  (*pcVar69)();
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
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    fStack_2 = (this->fields).radius;
    pMVar3 = (this->fields)._.owner;
    pLStack_4 = (List_1_GameTierProgressBar_TierProgressData_ *)(this->fields).maxRange;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      ignoreWoIds = (HashSet_1_System_Int32_ *)
                    (*(pMVar3->klass->vtable).get_IgnoreWOIDs.methodPtr)
                              (pMVar3,(pMVar3->klass->vtable).get_IgnoreWOIDs.method);
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Player,(MethodInfo *)0x0);
      pLStack_4 = (List_1_GameTierProgressBar_TierProgressData_ *)
                  CollisionDetection::CollisionDetection_MVSphereCastAll
                            (lineOfFire,fStack_2,(float)pLStack_4,ignoreWoIds,
                             1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
      index = 0;
      if (pLStack_4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        while( true ) {
          if ((pLStack_4->fields)._size <= index) {
            return pLVar1;
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pGVar6 = mscorlib.dll::System::Collections::Generic::
                   List`1[GameTierProgressBar+TierProgressData]::
                   List_1_GameTierProgressBar_TierProgressData__get_Item
                             (&GStack_7,pLStack_4,index,
                              MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                             );
          pPStack_8 = pGVar6->progressBar;
          pTStack_9 = pGVar6->progressText;
          pGStack_10 = pGVar6->progressDivider;
          pGStack_11 = pGVar6->progressBarTextBubble;
          pGStack_12 = pGVar6->avatarHead;
          pRStack_13 = pGVar6->avatarHeadImage;
          pGStack_14 = pGVar6->avatarHeadUI;
          pPStack_15 = pGVar6->disabledProgressBar;
          pGStack_16 = pGVar6->disabledProgressDivider;
          pGStack_17 = pGVar6->disabledBarTextBubble;
          pGStack_18 = pGVar6->tierIconTempUnlock;
          pGStack_19 = pGVar6->tierIconNumber;
          pPStack_20 = pGVar6->endResultProgressBar;
          pGStack_21 = pGVar6->tempProgress;
          pGStack_22 = pGVar6->disabledTempProgress;
          pGStack_23 = pGVar6->freeTryTextBubble;
          uStack_24._0_4_ = pGVar6->hoverInputHandler;
          uStack_24._4_4_ = pGVar6->LockedTierIcon;
          if (this_00 == (MVWorldObjectClientManager *)0x0) break;
          pMVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_00,(int32_t)pGStack_18,(MethodInfo *)0x0);
          if (pMVar25 != (MVWorldObject *)0x0) {
            GStack_7.progressText =
                 (Text *)
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
            ;
            GStack_7.progressBar = (ProgressBar *)pMVar25;
            func_?(pLVar1);
          }
          index = index + 1;
        }
      }
    }
  }
  func_?();
  pcVar26 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar26)();
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

