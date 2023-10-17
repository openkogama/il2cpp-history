
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_Awake
               (PickupItemSlapGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_FirstPersonTransform);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    pTVar3 = (this->fields)._._.firstPersonTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_00 = (GameObject *)func_?();
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar3,p,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            (this->fields)._._.firstPersonTransform = pTVar3;
            func_?();
            return;
          }
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Vector3 ComputeImpulseDirection(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                    (Vector3 *__return_storage_ptr__,PickupItemSlapGun *this,Ray lineOfFire,
                    MethodInfo *method)

{
  pRVar1 = mscorlib.dll::System::Collections::Generic::
           Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
           RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
           Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                     ((Regex_CachedCodeEntryKey *)&stack0xffffffe4,
                      (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)&lineOfFire,(MethodInfo *)0x0);
  uVar2 = pRVar1->_options;
  uVar3 = pRVar1->_cultureKey;
  value.y = (float)uVar3 + _UNK_?;
  value.x = (float)uVar2;
  value.z = (float)pRVar1->_pattern;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffe4,value,(MethodInfo *)0x0);
  fVar5 = pVVar4->y;
  fVar6 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemSlapGun *this,Ray lineOfFire,
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


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_OnFire
               (PickupItemSlapGun *this,bool isLocal,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    func_?(&
                    ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemSlapGun);
    func_?(&StringLiteral_Sound___slapGunFire);
    cRam_? = '\x01';
  }
  pMVar2 = (MVWorldObjectClient *)0x0;
  pMVar3 = (MVPickupOwner *)0x0;
  pMVar4 = (MVWorldObjectClient *)0x0;
  pMVar5 = (MVPickupOwner *)0x0;
  uVar6._0_4_ = (String *)0x0;
  uVar6._4_4_ = (String *)0x0;
  pTVar7 = (this->fields)._._.muzzlePoint;
  if (pTVar7 != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_9,pTVar7,(MethodInfo *)0x0);
    uStack_10._0_4_ = (String *)pVVar8->x;
    uStack_10._4_4_ = (String *)pVVar8->y;
    unaff_EDI = (MVWorldObjectClient *)pVVar8->z;
    pMVar11 = (this->fields)._._.owner;
    if (pMVar11 != (MVPickupOwner *)0x0) {
      pVVar8 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_9,pMVar11,(MethodInfo *)0x0);
      pPVar12 = (ProgressBar *)pVVar8->y;
      pTVar13 = (Text *)pVVar8->z;
      method_00 = (MVWorldObjectClient *)0x0;
      VVar14.z = (float)unaff_EDI;
      VVar14.x = (float)(String *)uStack_10;
      VVar14.y = (float)uStack_10._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                ((Ray *)&stack0xffffff94,VVar14,*pVVar8,(MethodInfo *)0x0);
      unaff_EBX = (MVWorldObjectClient *)(this->fields).slapSounds;
      unaff_EDI = (MVWorldObjectClient *)(this->fields).audioSource;
      if (unaff_EBX != (MVWorldObjectClient *)0x0) {
        uVar15 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                           (0,(unaff_EBX->fields)._.groupId + -1,(MethodInfo *)0x0);
        pMVar16 = unaff_EBX;
        if ((uint)(unaff_EBX->fields)._.groupId <= uVar15) goto code_?;
        if (unaff_EDI != (MVWorldObjectClient *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                    ((AudioSource *)unaff_EDI,(AudioClip *)(&(unaff_EBX->fields)._.itemId)[uVar15],
                     (MethodInfo *)0x0);
          unaff_EDI = (MVWorldObjectClient *)
                      MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
          ;
          unaff_EBX = (MVWorldObjectClient *)(this->fields).audioSource;
          if (unaff_EBX != (MVWorldObjectClient *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)unaff_EBX,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_9,pTVar7,(MethodInfo *)0x0);
              if (unaff_EDI != (MVWorldObjectClient *)0x0) {
                AudioManager::AudioManager_Play_2
                          ((AudioManager *)unaff_EDI,StringLiteral_Sound___slapGunFire,
                           (AudioSource *)unaff_EBX,*pVVar8,(MethodInfo *)0x0);
                pMVar11 = (this->fields)._._.owner;
                if (pMVar11 != (MVPickupOwner *)0x0) {
                  pMVar17 = pMVar2;
                  pMVar18 = pMVar3;
                  pMVar19 = pMVar4;
                  pMVar20 = pMVar5;
                  if ((pMVar11->fields)._IsLocal_k__BackingField != 0) {
                    uStack_10._0_4_ = (String *)0x0;
                    uStack_10._4_4_ = (String *)0x0;
                    fVar21 = (this->fields).maxRange;
                    ignoreWoIds = (HashSet_1_System_Int32_ *)
                                  (*(pMVar11->klass->vtable).get_IgnoreWOIDs.methodPtr)();
                    ray_00.m_Origin.y = (float)pMVar3;
                    ray_00.m_Origin.x = (float)pMVar2;
                    ray_00.m_Origin.z = (float)pMVar4;
                    ray_00.m_Direction.x = (float)pMVar5;
                    ray_00.m_Direction.y = (float)(String *)uStack_10;
                    ray_00.m_Direction.z = (float)SUB84(uStack_10,4);
                    this_01 = (List_1_GameTierProgressBar_TierProgressData_ *)
                              CollisionDetection::CollisionDetection_MVSphereCastAll
                                        (ray_00,2.0,fVar21,ignoreWoIds,(this->fields).layerMask,
                                         (MethodInfo *)0x0);
                    this = (PickupItemSlapGun *)0x0;
                    if (this_01 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                    goto code_?;
                    for (; (int)this < (this_01->fields)._size;
                        this = (PickupItemSlapGun *)((int)&this->klass + 1)) {
                      pGVar22 = mscorlib.dll::System::Collections::Generic::
                                List`1[GameTierProgressBar+TierProgressData]::
                                List_1_GameTierProgressBar_TierProgressData__get_Item
                                          ((GameTierProgressBar_TierProgressData *)&stack0xfffffeec,
                                           this_01,(int32_t)this,
                                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                          );
                      pTVar13 = pGVar22->progressText;
                      pGVar23 = pGVar22->progressDivider;
                      pGVar24 = pGVar22->progressBarTextBubble;
                      pGVar25 = pGVar22->avatarHead;
                      pRVar26 = pGVar22->avatarHeadImage;
                      pGVar27 = pGVar22->avatarHeadUI;
                      pPVar28 = pGVar22->disabledProgressBar;
                      pGVar29 = pGVar22->disabledProgressDivider;
                      pGVar30 = pGVar22->disabledBarTextBubble;
                      id = pGVar22->tierIconTempUnlock;
                      pGVar31 = pGVar22->tierIconNumber;
                      pPVar32 = pGVar22->endResultProgressBar;
                      pGVar33 = pGVar22->tempProgress;
                      pGVar34 = pGVar22->disabledTempProgress;
                      pGVar35 = pGVar22->freeTryTextBubble;
                      uStack_10._0_4_ = (String *)pGVar22->hoverInputHandler;
                      uStack_10._4_4_ = (String *)pGVar22->LockedTierIcon;
                      pMVar36 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (((pMVar36 == (MVNetworkGame *)0x0) ||
                          (pWVar37 = (pMVar36->fields).worldNetwork, pWVar37 == (WorldNetwork *)0x0))
                         || (this_00 = (RuntimeEventManager *)
                                       (pWVar37->fields)._.runtimeEventManagerNetwork,
                            this_00 == (RuntimeEventManager *)0x0)) goto code_?;
                      pPVar12 = (ProgressBar *)(pPVar1->fields).slapStrength;
                      voxelHit.point.y = (float)pGVar23;
                      voxelHit.point.x = (float)pTVar13;
                      voxelHit.point.z = (float)pGVar24;
                      voxelHit.normal.x = (float)pGVar25;
                      voxelHit.normal.y = (float)pRVar26;
                      voxelHit.normal.z = (float)pGVar27;
                      voxelHit.cubePos._0_4_ = pPVar28;
                      voxelHit._28_4_ = pGVar29;
                      voxelHit.face = (int32_t)pGVar30;
                      voxelHit._36_4_ = id;
                      voxelHit.woId = (int32_t)pGVar31;
                      voxelHit.cube = (Cube *)pPVar32;
                      voxelHit.distance = (float)pGVar33;
                      voxelHit.collider = (Collider *)pGVar34;
                      voxelHit.transform = (Transform *)pGVar35;
                      voxelHit._60_4_ = (String *)uStack_10;
                      voxelHit.interactionFlags._0_4_ = SUB84(uStack_10,4);
                      voxelHit.interactionFlags._4_4_ = pPVar12;
                      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                                (this_00,voxelHit,0.0,(MethodInfo *)method_00);
                      method_00 = (MVWorldObjectClient *)0x0;
                      pTVar13 = (Text *)&UNK_?;
                      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                          ((MethodInfo *)0x0);
                      if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
                      unaff_EDI = (MVWorldObjectClient *)
                                  MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObject
                                            (this_02,(int32_t)id,(MethodInfo *)0x0);
                      this_06 = (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                 *)auStack_38;
                      uVar39 = 0;
                      __return_storage_ptr__ = (Regex_CachedCodeEntryKey *)&stack0xffffff34;
                      puVar40 = &UNK_?;
                      auStack_38._0_4_ = pMVar17;
                      auStack_38._4_4_ = pMVar18;
                      pMStack_41 = pMVar19;
                      pMStack_42 = pMVar20;
                      _pMStack_24 = uVar6;
                      pRVar43 = mscorlib.dll::System::Collections::Generic::
                                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System
                                ::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]
                                ::
                                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                                          (__return_storage_ptr__,this_06,(MethodInfo *)0x0);
                      fVar44 = (float)pRVar43->_options;
                      uVar45 = pRVar43->_cultureKey;
                      pSVar46 = pRVar43->_pattern;
                      fVar47 = (float)uVar45 + _UNK_?;
                      uVar48 = 0;
                      VStack_9.y = fVar47;
                      VStack_9.x = fVar44;
                      pVVar8 = (Vector3 *)&puStack_49;
                      value.y = fVar47;
                      value.x = fVar44;
                      value.z = (float)pSVar46;
                      pVVar50 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                          (pVVar8,value,(MethodInfo *)0x0);
                      fVar21 = (pPVar1->fields).slapStrength;
                      fVar51 = pVVar50->z;
                      if (unaff_EDI == (MVWorldObjectClient *)0x0) goto code_?;
                      unaff_EBX = (MVWorldObjectClient *)
                                  MVWorldObjectClient::
                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                            (unaff_EDI,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      uVar52 = 0;
                      uVar53 = 0;
                      bVar54 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_op_Inequality
                                         ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar54 != 0) {
                        pMVar36 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (pMVar36 == (MVNetworkGame *)0x0) goto code_?;
                        this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar36,(MethodInfo *)0x0);
                        if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
                        pMVar18 = (MVPickupOwner *)0x0;
                        pMVar17 = unaff_EDI;
                        bVar54 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                           ((MVPlayer *)this_03,unaff_EDI,(MethodInfo *)0x0);
                        if (bVar54 == 0) {
                          pMStack_55 = (pPVar1->fields)._._.owner;
                          impulse.y = (float)uVar52;
                          impulse.x = (float)uVar53;
                          impulse.z = fVar51 * fVar21;
                          pIVar56 = SlapGunHitPackage::SlapGunHitPackage_Create
                                              ((InteractionData *)(auStack_38 + 4),impulse,
                                               (MethodInfo *)0x0);
                          if (unaff_EBX == (MVWorldObjectClient *)0x0) goto code_?;
                          fVar21 = pIVar56->damage;
                          fVar51 = (pIVar56->impulse).x;
                          uVar6._0_4_ = (String *)pIVar56->damage;
                          uVar6._4_4_ = (String *)(pIVar56->impulse).x;
                          fVar57 = (pIVar56->impulse).y;
                          fVar58 = (pIVar56->impulse).z;
                          uVar53._0_1_ = pIVar56->interactionType;
                          uVar53._1_1_ = pIVar56->playerKilledByType;
                          uVar53._2_2_ = *(undefined2 *)&pIVar56->field_0x12;
                          pMVar18 = (MVPickupOwner *)0x7;
                          pMVar19 = unaff_EBX;
                          pMVar20 = pMStack_55;
                          func_?();
                          pMVar17 = (MVWorldObjectClient *)TypeInfo__IBulletImpactVisualizer;
                          iVar59 = func_?();
                          if (iVar59 != 0) {
                            pMVar3 = (pPVar1->fields)._._.owner;
                            pMStack_60 = pMVar20;
                            pMStack_61 = pMVar19;
                            pMStack_41 = pMVar17;
                            pMStack_42 = pMVar18;
                            if ((pMVar3 == (MVPickupOwner *)0x0) ||
                               (pMVar2 = (pMVar3->fields)._.worldObjectParent,
                               pMVar2 == (MVWorldObjectClient *)0x0)) goto code_?;
                            iVar62 = (pMVar2->fields)._.ownerActorNr;
                            if ((TypeInfo__PickupItemSlapGun->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__PickupItemSlapGun);
                            }
                            pMVar16 = (MVWorldObjectClient *)TypeInfo__IBulletImpactVisualizer;
                            pMStack_55 = (MVPickupOwner *)
                                         TypeInfo__PickupItemSlapGun->static_fields->damage;
                            iVar59 = func_?(unaff_EDI,TypeInfo__IBulletImpactVisualizer);
                            unaff_EBX = (MVWorldObjectClient *)TypeInfo__IBulletImpactVisualizer;
                            if (iVar59 == 0) goto code_?;
                            iVar59 = func_?(unaff_EDI,TypeInfo__IBulletImpactVisualizer);
                            pMVar16 = unaff_EBX;
                            if (iVar59 == 0) goto code_?;
                            func_?(0,TypeInfo__IBulletImpactVisualizer,iVar59,&UNK_?
                                            ,pVVar8,fVar44,fVar47,puVar40,__return_storage_ptr__,
                                            this_06,uVar39,pSVar46,uVar48,id,pGVar31,fVar57,fVar58,
                                            uVar53,0,(String *)uStack_10,SUB84(uStack_10,4),pMStack_41
                                            ,pMStack_42,pMStack_61,pMStack_60,fVar21,fVar51,iVar62,
                                            pMStack_55);
                          }
                        }
                      }
                    }
                  }
                  auStack_38._0_4_ = pMVar17;
                  auStack_38._4_4_ = pMVar18;
                  pMStack_41 = pMVar19;
                  pMStack_42 = pMVar20;
                  uStack_10 = uVar6;
                  if (cRam_? == '\0') {
                    _pMStack_24 = uVar6;
                    func_?(&
                                    MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                                   );
                    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
                    func_?(&StringLiteral_Default);
                    uStack_10._0_4_ = (String *)pMStack_61;
                    uStack_10._4_4_ = (String *)pMStack_60;
                    cRam_? = '\x01';
                  }
                  pMVar3 = pMStack_42;
                  pMVar2 = pMStack_41;
                  uVar48 = auStack_38._4_4_;
                  uVar39 = auStack_38._0_4_;
                  _pMStack_24 = uStack_10;
                  func_?(&stack0xfffffeec,0,0x48);
                  fVar21 = (pPVar1->fields).maxRange;
                  this_04 = (HashSet_1_UnityEngine_Vector3_ *)
                            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                  unaff_EDI = (MVWorldObjectClient *)0x0;
                  if (this_04 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
                    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
                    HashSet_1_UnityEngine_Vector3___ctor
                              (this_04,
                               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
                    iVar62 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                             LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
                    ray.m_Origin.y = (float)uVar48;
                    ray.m_Origin.x = (float)uVar39;
                    ray.m_Origin.z = (float)pMVar2;
                    ray.m_Direction.x = (float)pMVar3;
                    ray.m_Direction.y = (float)(String *)uStack_10;
                    ray.m_Direction.z = (float)SUB84(uStack_10,4);
                    unaff_EBX = method_00;
                    bVar54 = CollisionDetection::CollisionDetection_MVHit_1
                                       (ray,(VoxelHit *)&stack0xfffffeec,fVar21,
                                        (HashSet_1_System_Int32_ *)this_04,
                                        1 << ((byte)iVar62 & 0x1f),(MethodInfo *)0x0);
                    if (bVar54 == 0) {
                      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                          ((Vector3 *)&puStack_49,(Ray *)auStack_38,
                                           (pPVar1->fields).maxRange,(MethodInfo *)0x0);
                      uStack_10._0_4_ = (String *)pVVar8->x;
                      uStack_10._4_4_ = (String *)pVVar8->y;
                      unaff_EBX = (MVWorldObjectClient *)pVVar8->z;
                    }
                    else {
                      uStack_10._4_4_ = (String *)pTVar13;
                      uStack_10._0_4_ = (String *)pPVar12;
                    }
                    pTVar7 = (pPVar1->fields)._._.muzzlePoint;
                    unaff_EDI = (MVWorldObjectClient *)(pPVar1->fields).impulseRayPrefab;
                    if (pTVar7 != (Transform *)0x0) {
                      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&puStack_49,pTVar7,(MethodInfo *)0x0);
                      VVar14 = *pVVar8;
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__UnityEngine__Quaternion);
                        cRam_? = '\x01';
                      }
                      pQVar63 = TypeInfo__UnityEngine__Quaternion->static_fields;
                      pMStack_41 = (MVWorldObjectClient *)(pQVar63->identityQuaternion).x;
                      pMStack_42 = (MVPickupOwner *)(pQVar63->identityQuaternion).y;
                      pMStack_61 = (MVWorldObjectClient *)(pQVar63->identityQuaternion).z;
                      pMStack_60 = (MVPickupOwner *)(pQVar63->identityQuaternion).w;
                      pMVar2 = (MVWorldObjectClient *)(pQVar63->identityQuaternion).z;
                      pMVar3 = (MVPickupOwner *)(pQVar63->identityQuaternion).w;
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Object);
                        pMVar2 = pMStack_61;
                        pMVar3 = pMStack_60;
                      }
                      rotation.y = (float)pMStack_42;
                      rotation.x = (float)pMStack_41;
                      rotation.z = (float)pMVar2;
                      rotation.w = (float)pMVar3;
                      this_05 = (ImpulseRay *)
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_7
                                          ((Object *)unaff_EDI,VVar14,rotation,
                                           ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                                          );
                      unaff_EDI = (MVWorldObjectClient *)0x0;
                      if (this_05 != (ImpulseRay *)0x0) {
                        target.z = (float)unaff_EBX;
                        target.x = (float)(String *)uStack_10;
                        target.y = (float)uStack_10._4_4_;
                        ImpulseRay::ImpulseRay_Initialize(this_05,target,(MethodInfo *)0x0);
                        (this_05->fields).radius = 1.2;
                        fVar21 = (pPVar1->fields).slapColor.g;
                        fVar44 = (pPVar1->fields).slapColor.b;
                        fVar51 = (pPVar1->fields).slapColor.a;
                        (this_05->fields).startColor.r = (pPVar1->fields).slapColor.r;
                        (this_05->fields).startColor.g = fVar21;
                        (this_05->fields).startColor.b = fVar44;
                        (this_05->fields).startColor.a = fVar51;
                        return;
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
  }
code_?:
  func_?();
  pMVar16 = unaff_EBX;
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,pMVar16);
  pcVar64 = (code *)swi(3);
  (*pcVar64)();
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemSlapGun);
    cRam_? = '\x01';
  }
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  pIVar2 = SlapGunHitPackage::SlapGunHitPackage_Create
                     (&IStack_1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  TypeInfo__PickupItemSlapGun->static_fields->damage = pIVar2->damage;
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__ctor
               (PickupItemSlapGun *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields).maxRange = 50.0;
  (this->fields).slapStrength = 500.0;
  (this->fields).slapColor.r = fVar4;
  (this->fields).slapColor.g = fVar3;
  (this->fields).slapColor.b = fVar2;
  (this->fields).slapColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = fVar4;
  (this->fields)._.crossHairCannotFireLow.b = fVar3;
  (this->fields)._.crossHairCannotFireLow.a = fVar2;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = fVar4;
  (this->fields)._.crossHairCannotFireHigh.b = fVar3;
  (this->fields)._.crossHairCannotFireHigh.a = fVar2;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = _UNK_?;
  (this->fields)._.crossHairCanFire.g = fVar4;
  (this->fields)._.crossHairCanFire.b = fVar3;
  (this->fields)._.crossHairCanFire.a = fVar2;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_6,1.0,(MethodInfo *)0x0);
  AVar7 = pOVar5->hiddenValue;
  pBVar8 = pOVar5->hiddenValueOld;
  fVar4 = pOVar5->fakeValue;
  bVar9 = pOVar5->inited;
  uVar10 = *(undefined3 *)&pOVar5->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar5->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar7;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar8;
  (this->fields)._.fireInterval.fakeValue = fVar4;
  (this->fields)._.fireInterval.inited = bVar9;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar10;
  func_?(&(this->fields)._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}

