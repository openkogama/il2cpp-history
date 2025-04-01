
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
    ppTVar3 = &(this->fields)._._.firstPersonTransform;
    pTVar4 = *ppTVar3;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      this_00 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)0x0,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar4,p,(MethodInfo *)0x0);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            *ppTVar3 = pTVar4;
            func_?();
            return;
          }
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
  value.z = lineOfFire.m_Direction.z;
  value.x = lineOfFire.m_Direction.x;
  value.y = lineOfFire.m_Direction.y + _UNK_?;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&lineOfFire.m_Direction,value,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
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
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  pTVar5 = (this->fields)._._.muzzlePoint;
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_7,pTVar5,(MethodInfo *)0x0);
    fStack_8 = pVVar6->x;
    fStack_9 = pVVar6->y;
    unaff_ESI = (MVWorldObjectClient *)pVVar6->z;
    pMVar10 = (this->fields)._._.owner;
    if (pMVar10 != (MVPickupOwner *)0x0) {
      pVVar6 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_7,pMVar10,(MethodInfo *)0x0);
      puStack_11 = (undefined *)fStack_8;
      fStack_12 = fStack_9;
      pPVar13 = (ProgressBar *)pVVar6->y;
      pTVar14 = (Text *)pVVar6->z;
      method_00 = (IBulletImpactVisualizer__Class *)0x0;
      pMStack_15 = unaff_ESI;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          (&VStack_7,*pVVar6,(MethodInfo *)0x0);
      uVar16 = pVVar6->x;
      uVar17 = pVVar6->y;
      fVar18 = pVVar6->z;
      unaff_ESI = (MVWorldObjectClient *)(this->fields).slapSounds;
      unaff_EBX = (IBulletImpactVisualizer__Class *)(this->fields).audioSource;
      fStack_2 = (float)uVar16;
      fStack_3 = (float)uVar17;
      fStack_4 = fVar18;
      if (unaff_ESI != (MVWorldObjectClient *)0x0) {
        uVar19 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                           (0,(unaff_ESI->fields)._.groupId + -1,(MethodInfo *)0x0);
        pIVar20 = unaff_EBX;
        if ((uint)(unaff_ESI->fields)._.groupId <= uVar19) goto code_?;
        if (unaff_EBX != (IBulletImpactVisualizer__Class *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                    ((AudioSource *)unaff_EBX,(AudioClip *)(&(unaff_ESI->fields)._.itemId)[uVar19],
                     (MethodInfo *)0x0);
          unaff_EBX = (IBulletImpactVisualizer__Class *)
                      MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0)
          ;
          unaff_ESI = (MVWorldObjectClient *)(this->fields).audioSource;
          if (unaff_ESI != (MVWorldObjectClient *)0x0) {
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)unaff_ESI,(MethodInfo *)0x0);
            if (pTVar5 != (Transform *)0x0) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_7,pTVar5,(MethodInfo *)0x0);
              if (unaff_EBX != (IBulletImpactVisualizer__Class *)0x0) {
                AudioManager::AudioManager_Play_2
                          ((AudioManager *)unaff_EBX,StringLiteral_Sound___slapGunFire,
                           (AudioSource *)unaff_ESI,*pVVar6,(MethodInfo *)0x0);
                pMVar10 = (this->fields)._._.owner;
                if (pMVar10 != (MVPickupOwner *)0x0) {
                  fStack_9 = fStack_4;
                  fStack_8 = fStack_3;
                  fStack_21 = fStack_12;
                  pMStack_22 = pMStack_15;
                  fStack_23 = fStack_2;
                  puVar24 = puStack_11;
                  if ((pMVar10->fields)._IsLocal_k__BackingField != 0) {
                    fVar25 = (this->fields).maxRange;
                    pHVar26 = (HashSet_1_System_Int32_ *)
                              (*(code *)(pMVar10->klass->vtable).get_IgnoreWOIDs.method)();
                    ray_00.m_Origin.z = (float)pMStack_15;
                    ray_00.m_Origin.x = (float)puStack_11;
                    ray_00.m_Origin.y = fStack_12;
                    ray_00.m_Direction.x = fStack_2;
                    ray_00.m_Direction.y = fStack_3;
                    ray_00.m_Direction.z = fStack_4;
                    this_01 = (List_1_GameTierProgressBar_TierProgressData_ *)
                              CollisionDetection::CollisionDetection_MVSphereCastAll
                                        (ray_00,2.0,fVar25,pHVar26,(this->fields).layerMask,
                                         (MethodInfo *)0x0);
                    this = (PickupItemSlapGun *)0x0;
                    if (this_01 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                    goto code_?;
                    for (; (int)this < (this_01->fields)._size;
                        this = (PickupItemSlapGun *)((int)&this->klass + 1)) {
                      pGVar27 = mscorlib.dll::System::Collections::Generic::
                                List`1[GameTierProgressBar+TierProgressData]::
                                List_1_GameTierProgressBar_TierProgressData__get_Item
                                          ((GameTierProgressBar_TierProgressData *)&stack0xfffffedc,
                                           this_01,(int32_t)this,
                                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                          );
                      pTVar14 = pGVar27->progressText;
                      pGVar28 = pGVar27->progressDivider;
                      pGVar29 = pGVar27->progressBarTextBubble;
                      pGVar30 = pGVar27->avatarHead;
                      pRVar31 = pGVar27->avatarHeadImage;
                      pGVar32 = pGVar27->avatarHeadUI;
                      pPVar33 = pGVar27->disabledProgressBar;
                      pGVar34 = pGVar27->disabledProgressDivider;
                      pGVar35 = pGVar27->disabledBarTextBubble;
                      id = pGVar27->tierIconTempUnlock;
                      pGVar36 = pGVar27->tierIconNumber;
                      pPVar37 = pGVar27->endResultProgressBar;
                      pGVar38 = pGVar27->tempProgress;
                      pGVar39 = pGVar27->disabledTempProgress;
                      pGVar40 = pGVar27->freeTryTextBubble;
                      uVar41 = pGVar27->hoverInputHandler;
                      uVar42 = pGVar27->LockedTierIcon;
                      pMVar43 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (((pMVar43 == (MVNetworkGame *)0x0) ||
                          (pWVar44 = (pMVar43->fields).worldNetwork, pWVar44 == (WorldNetwork *)0x0)
                          ) || (this_00 = (RuntimeEventManager *)
                                          (pWVar44->fields)._.runtimeEventManagerNetwork,
                               this_00 == (RuntimeEventManager *)0x0)) goto code_?;
                      pPVar13 = (ProgressBar *)(pPVar1->fields).slapStrength;
                      voxelHit.point.y = (float)pGVar28;
                      voxelHit.point.x = (float)pTVar14;
                      voxelHit.point.z = (float)pGVar29;
                      voxelHit.normal.x = (float)pGVar30;
                      voxelHit.normal.y = (float)pRVar31;
                      voxelHit.normal.z = (float)pGVar32;
                      voxelHit.cubePos._0_4_ = pPVar33;
                      voxelHit._28_4_ = pGVar34;
                      voxelHit.face = (int32_t)pGVar35;
                      voxelHit._36_4_ = id;
                      voxelHit.woId = (int32_t)pGVar36;
                      voxelHit.cube = (Cube *)pPVar37;
                      voxelHit.distance = (float)pGVar38;
                      voxelHit.collider = (Collider *)pGVar39;
                      voxelHit.transform = (Transform *)pGVar40;
                      voxelHit._60_4_ = uVar41;
                      voxelHit.interactionFlags._0_4_ = uVar42;
                      voxelHit.interactionFlags._4_4_ = pPVar13;
                      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                                (this_00,voxelHit,0.0,(MethodInfo *)method_00);
                      method_00 = (IBulletImpactVisualizer__Class *)0x0;
                      pTVar14 = (Text *)&UNK_?;
                      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                          ((MethodInfo *)0x0);
                      if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
                      unaff_ESI = (MVWorldObjectClient *)
                                  MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObject
                                            (this_02,(int32_t)id,(MethodInfo *)0x0);
                      fVar45 = fStack_3 + _UNK_?;
                      uVar46 = 0;
                      VStack_7.y = fVar45;
                      VStack_7.x = (float)uVar16;
                      pVVar6 = (Vector3 *)&stack0xffffff7c;
                      puVar47 = &UNK_?;
                      value.y = fVar45;
                      value.x = (float)uVar16;
                      value.z = fVar18;
                      fVar48 = (float)uVar16;
                      fVar49 = fVar18;
                      pVVar50 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                          (pVVar6,value,(MethodInfo *)0x0);
                      uVar51 = pVVar50->x;
                      uVar52 = pVVar50->y;
                      fVar25 = (pPVar1->fields).slapStrength;
                      fVar53 = pVVar50->z;
                      if (unaff_ESI == (MVWorldObjectClient *)0x0) goto code_?;
                      unaff_EBX = (IBulletImpactVisualizer__Class *)
                                  MVWorldObjectClient::
                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                            (unaff_ESI,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar54 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_op_Inequality
                                         ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar54 != 0) {
                        pMVar43 = MVGameControllerBase::MVGameControllerBase_get_Game
                                            ((MethodInfo *)0x0);
                        if (pMVar43 == (MVNetworkGame *)0x0) goto code_?;
                        this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar43,(MethodInfo *)0x0);
                        if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
                        bVar54 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                           ((MVPlayer *)this_03,unaff_ESI,(MethodInfo *)0x0);
                        if (bVar54 == 0) {
                          pMStack_55 = (pPVar1->fields)._._.owner;
                          impulse.y = (float)uVar52 * fVar25;
                          impulse.x = (float)uVar51 * fVar25;
                          impulse.z = fVar53 * fVar25;
                          pIVar56 = SlapGunHitPackage::SlapGunHitPackage_Create
                                              ((InteractionData *)&stack0xffffff58,impulse,
                                               (MethodInfo *)0x0);
                          if (unaff_EBX == (IBulletImpactVisualizer__Class *)0x0)
                          goto code_?;
                          puVar24 = (undefined *)pIVar56->damage;
                          fStack_21 = (pIVar56->impulse).x;
                          pMStack_22 = (MVWorldObjectClient *)(pIVar56->impulse).y;
                          fStack_23 = (pIVar56->impulse).z;
                          uVar57._0_1_ = pIVar56->interactionType;
                          uVar57._1_1_ = pIVar56->playerKilledByType;
                          uVar57._2_2_ = *(undefined2 *)&pIVar56->field_0x12;
                          func_?();
                          puVar58 = &UNK_?;
                          pMVar59 = unaff_ESI;
                          pIVar60 = TypeInfo__IBulletImpactVisualizer;
                          iVar61 = func_?();
                          if (iVar61 != 0) {
                            pMVar10 = (pPVar1->fields)._._.owner;
                            if ((pMVar10 == (MVPickupOwner *)0x0) ||
                               (pMVar62 = (pMVar10->fields)._.worldObjectParent,
                               pMVar62 == (MVWorldObjectClient *)0x0)) goto code_?;
                            iVar63 = (pMVar62->fields)._.ownerActorNr;
                            if ((TypeInfo__PickupItemSlapGun->_1).cctor_finished_or_no_cctor == 0) {
                              func_?(TypeInfo__PickupItemSlapGun);
                            }
                            pIVar20 = TypeInfo__IBulletImpactVisualizer;
                            pMStack_55 = (MVPickupOwner *)
                                        TypeInfo__PickupItemSlapGun->static_fields->damage;
                            iVar61 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                            unaff_EBX = TypeInfo__IBulletImpactVisualizer;
                            if (iVar61 == 0) goto code_?;
                            iVar61 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
                            pIVar20 = unaff_EBX;
                            if (iVar61 == 0) goto code_?;
                            func_?(0,TypeInfo__IBulletImpactVisualizer,iVar61,fVar49,uVar46
                                            ,pGVar28,pGVar29,puVar47,pVVar6,fVar48,fVar45,
                                            &UNK_?,puVar58,pMVar59,pIVar60,pPVar37,pGVar38,
                                            pGVar39,&UNK_?,uVar57,0,puStack_11,fStack_12,
                                            pMStack_15,fStack_2,fStack_3,fStack_4,iVar63,
                                            pMStack_55);
                          }
                        }
                      }
                    }
                  }
                  uVar64._4_4_ = fStack_4;
                  uVar64._0_4_ = fStack_3;
                  unaff_EBX = method_00;
                  puStack_65 = puStack_11;
                  if (cRam_? == '\0') {
                    fStack_21 = fStack_12;
                    pMStack_22 = pMStack_15;
                    fStack_23 = fStack_2;
                    func_?(&
                                    MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                                   );
                    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
                    func_?(&StringLiteral_Default);
                    cRam_? = '\x01';
                    unaff_EBX = method_00;
                    puVar24 = puStack_65;
                    _fStack_10 = uVar64;
                  }
                  func_?(&stack0xfffffedc,0,0x48);
                  fVar18 = (pPVar1->fields).maxRange;
                  pHVar26 = (HashSet_1_System_Int32_ *)
                            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32___ctor
                            (pHVar26,
                             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
                  iVar63 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                     (StringLiteral_Default,(MethodInfo *)0x0);
                  ray.m_Origin.y = fStack_21;
                  ray.m_Origin.x = (float)puVar24;
                  ray.m_Origin.z = (float)pMStack_22;
                  ray.m_Direction.x = fStack_23;
                  ray.m_Direction.y = (float)_fStack_10;
                  ray.m_Direction.z = SUB84(_fStack_10,4);
                  bVar54 = CollisionDetection::CollisionDetection_MVHit_1
                                     (ray,(VoxelHit *)&stack0xfffffedc,fVar18,pHVar26,
                                      1 << ((byte)iVar63 & 0x1f),(MethodInfo *)0x0);
                  if (bVar54 == 0) {
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                                        ((Vector3 *)&stack0xffffff7c,(Ray *)&puStack_65,
                                         (pPVar1->fields).maxRange,(MethodInfo *)0x0);
                    fStack_8 = pVVar6->x;
                    fStack_9 = pVVar6->y;
                    unaff_EBX = (IBulletImpactVisualizer__Class *)pVVar6->z;
                  }
                  else {
                    fStack_9 = (float)pTVar14;
                    fStack_8 = (float)pPVar13;
                  }
                  pTVar5 = (pPVar1->fields)._._.muzzlePoint;
                  unaff_ESI = (MVWorldObjectClient *)(pPVar1->fields).impulseRayPrefab;
                  if (pTVar5 != (Transform *)0x0) {
                    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffff7c,pTVar5,(MethodInfo *)0x0);
                    VVar66 = *pVVar6;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__UnityEngine__Quaternion);
                      cRam_? = '\x01';
                    }
                    pQVar67 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    fVar18 = (pQVar67->identityQuaternion).x;
                    fVar25 = (pQVar67->identityQuaternion).y;
                    fVar53 = (pQVar67->identityQuaternion).z;
                    fVar48 = (pQVar67->identityQuaternion).w;
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?(TypeInfo__UnityEngine__Object);
                    }
                    rotation.y = fVar25;
                    rotation.x = fVar18;
                    rotation.z = fVar53;
                    rotation.w = fVar48;
                    this_04 = (ImpulseRay *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_7
                                        ((Object *)unaff_ESI,VVar66,rotation,
                                         ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                                        );
                    unaff_ESI = (MVWorldObjectClient *)0x0;
                    if (this_04 != (ImpulseRay *)0x0) {
                      VVar66.z = (float)unaff_EBX;
                      VVar66.x = fStack_8;
                      VVar66.y = fStack_9;
                      ImpulseRay::ImpulseRay_Initialize(this_04,VVar66,(MethodInfo *)0x0);
                      (this_04->fields).radius = 1.2;
                      fVar18 = (pPVar1->fields).slapColor.g;
                      fVar25 = (pPVar1->fields).slapColor.b;
                      fVar53 = (pPVar1->fields).slapColor.a;
                      (this_04->fields).startColor.r = (pPVar1->fields).slapColor.r;
                      (this_04->fields).startColor.g = fVar18;
                      (this_04->fields).startColor.b = fVar25;
                      (this_04->fields).startColor.a = fVar53;
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
code_?:
  func_?();
  pIVar20 = unaff_EBX;
code_?:
  func_?();
code_?:
  func_?(unaff_ESI,pIVar20);
  pcVar68 = (code *)swi(3);
  (*pcVar68)();
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    func_?(&TypeInfo__PickupItemSlapGun);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pIVar2 = SlapGunHitPackage::SlapGunHitPackage_Create
                     ((InteractionData *)auStack_3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  fStack_4 = pIVar2->damage;
  fStack_5 = (pIVar2->impulse).x;
  fStack_6 = (pIVar2->impulse).y;
  fStack_7 = (pIVar2->impulse).z;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    auStack_3._16_4_ = TypeInfo__MV__WorldObject__InteractionData;
    auStack_3._12_4_ = &UNK_?;
    func_?();
  }
  TypeInfo__PickupItemSlapGun->static_fields->damage = fStack_4;
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

