
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_Awake
               (PickupItemBazooka *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  iVar1 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Player,(MethodInfo *)0x0);
  iVar2 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Default,(MethodInfo *)0x0);
  (this->fields).layerMask = (1 << ((byte)iVar2 & 0x1f)) + (1 << ((byte)iVar1 & 0x1f));
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnFire
               (PickupItemBazooka *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 == (Transform *)0x0) {
code_?:
    func_?(0);
    pBVar2 = extraout_ECX;
    pBVar3 = extraout_EDX;
  }
  else {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,pTVar1,(MethodInfo *)0x0);
    this_00 = Bullet::Bullet_CreateBullet(PoolEnums__Enum_BazookaBullet,*pVVar4,(MethodInfo *)0x0);
    if (this_00 == (Bullet *)0x0) goto code_?;
    uStack_6 = ZEXT48(TypeInfo__Bullet__OnHitDelegate);
    pBVar2 = (this_00->fields).onHit;
    pAVar7 = (Action_1_UnityEngine_Ray___Class *)&UNK_?;
    pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar8,(Object *)this,
               MethodInfo__PickupItemBazooka__OnHit_VoxelHit__UnityEngine__Ray_,(MethodInfo *)0x0);
    pBVar2 = (Bullet_OnHitDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pBVar2,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pBVar9 = (Bullet_OnHitDelegate *)0x0;
    if (pBVar2 == (Bullet_OnHitDelegate *)0x0) {
code_?:
      (this_00->fields).onHit = pBVar9;
      if (isLocal == 0) {
        pAVar10 = (this_00->fields).onOutOfRange;
        pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__Action<UnityEngine::Ray>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar8,(Object *)this,
                   MethodInfo__PickupItemBazooka__OnHitMaxRangeRemote_UnityEngine__Ray_,
                   MethodInfo__System__Action<UnityEngine::Ray>__Action_System__Object__void__);
        pBVar2 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar10,(Delegate *)pUVar8,(MethodInfo *)0x0);
        pBVar9 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar2 != (Bullet_OnHitDelegate *)0x0) {
          pBVar3 = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
          if ((Action_1_UnityEngine_Ray___Class *)pBVar2->klass ==
              TypeInfo__System__Action<UnityEngine::Ray>) {
            pBVar9 = pBVar2;
          }
joined_?:
          TypeInfo__System__Action<UnityEngine::Ray> = (Action_1_UnityEngine_Ray___Class *)pBVar3;
          if (pBVar9 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
      }
      else {
        pBVar2 = (this_00->fields).onHitLocal;
        pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__Bullet__OnHitDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar8,(Object *)this,
                   MethodInfo__PickupItemBazooka__OnHitLocal_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar9 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar2,(Delegate *)pUVar8,(MethodInfo *)0x0);
        pBVar2 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar9 != (Bullet_OnHitDelegate *)0x0) {
          if (pBVar9->klass == TypeInfo__Bullet__OnHitDelegate) {
            pBVar2 = pBVar9;
          }
          if (pBVar2 == (Bullet_OnHitDelegate *)0x0) goto code_?;
        }
        (this_00->fields).onHitLocal = pBVar2;
        pAVar10 = (this_00->fields).onOutOfRange;
        pAVar7 = TypeInfo__System__Action<UnityEngine::Ray>;
        pUVar8 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar8,(Object *)this,
                   MethodInfo__PickupItemBazooka__OnHitMaxRangeLocal_UnityEngine__Ray_,
                   MethodInfo__System__Action<UnityEngine::Ray>__Action_System__Object__void__);
        pBVar2 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar10,(Delegate *)pUVar8,(MethodInfo *)0x0);
        pBVar9 = (Bullet_OnHitDelegate *)0x0;
        if (pBVar2 != (Bullet_OnHitDelegate *)0x0) {
          pBVar3 = (Bullet_OnHitDelegate__Class *)TypeInfo__System__Action<UnityEngine::Ray>;
          if ((Action_1_UnityEngine_Ray___Class *)pBVar2->klass ==
              TypeInfo__System__Action<UnityEngine::Ray>) {
            pBVar9 = pBVar2;
          }
          goto joined_?;
        }
      }
      (this_00->fields).onOutOfRange = (Action_1_UnityEngine_Ray_ *)pBVar9;
      pMVar11 = (this->fields)._._.owner;
      if (pMVar11 != (MVPickupOwner *)0x0) {
        pVVar4 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           (&VStack_5,(InventoryItem_ItemDescription *)pMVar11,(MethodInfo *)0x0);
        uStack_12._0_4_ = pVVar4->x;
        uStack_12._4_4_ = pVVar4->y;
        fVar13 = pVVar4->z;
        pMVar11 = (this->fields)._._.owner;
        if (pMVar11 != (MVPickupOwner *)0x0) {
          pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection
                             (&VStack_5,pMVar11,(MethodInfo *)0x0);
          uVar14 = pVVar4->x;
          iVar15 = (int32_t)pVVar4->y;
          fVar16 = pVVar4->z;
          iVar17 = 0;
          func_?(&stack0xffffffb4,(int)uStack_12,(int)((ulonglong)uStack_12 >> 0x20),fVar13,
                          uVar14);
          pMVar11 = (this->fields)._._.owner;
          if (pMVar11 != (MVPickupOwner *)0x0) {
            fVar18 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                               (pMVar11,(this->fields).rocketSpeed,(MethodInfo *)0x0);
            fVar13 = (this->fields).rocketRange;
            pMVar11 = (this->fields)._._.owner;
            uStack_12 = CONCAT44(fVar18,(undefined4)uStack_12);
            VStack_19.y = (float)(undefined4)uStack_6;
            VStack_19.z = (float)uStack_6._4_4_;
            auStack_20._0_4_ = iVar15;
            auStack_20._4_4_ = fVar16;
            iStack_21 = iVar17;
            pAStack_22 = pAVar7;
            if (pMVar11 != (MVPickupOwner *)0x0) {
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar11->klass->vtable).get_IgnoreWOIDs.method)
                                      (pMVar11,pMVar11->klass[1]._0.image);
              lineOfFire.m_Origin.y = (float)auStack_20._4_4_;
              lineOfFire.m_Origin.x = (float)auStack_20._0_4_;
              lineOfFire.m_Origin.z = (float)iStack_21;
              lineOfFire.m_Direction.x = (float)pAStack_22;
              lineOfFire.m_Direction.y = VStack_19.y;
              lineOfFire.m_Direction.z = VStack_19.z;
              Bullet::Bullet_Fire(this_00,uStack_12._4_4_,fVar13,lineOfFire,ignoreWoIDs,
                                  (MethodInfo *)0x0);
              if (isLocal == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                pTVar1 = (this->fields)._._.muzzlePoint;
                audioSource = (this->fields).aSource;
                if (pTVar1 != (Transform *)0x0) {
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_5,pTVar1,(MethodInfo *)0x0);
code_?:
                  if (this_01 != (AudioManager *)0x0) {
                    AudioManager::AudioManager_Play_2
                              (this_01,StringLiteral_rocket_fired,audioSource,*pVVar4,
                               (MethodInfo *)0x0);
                    auStack_20._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
                    auStack_20._4_4_ = (this->fields).currentAmmo.hiddenValue;
                    iStack_21 = (this->fields).currentAmmo.fakeValue;
                    pAStack_22._0_1_ = (this->fields).currentAmmo.inited;
                    pAStack_22._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable)
                                .Equals.methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                        cctor_started == 0)) {
                      func_?();
                    }
                    value.hiddenValue = auStack_20._4_4_;
                    value.currentCryptoKey = auStack_20._0_4_;
                    value.fakeValue = iStack_21;
                    value._12_4_ = pAStack_22;
                    iVar15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                            ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                    pOVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredInt::ObscuredInt_op_Implicit
                                        ((ObscuredInt *)auStack_20,iVar15 + -1,(MethodInfo *)0x0);
                    iVar15 = pOVar23->hiddenValue;
                    iVar17 = pOVar23->fakeValue;
                    bVar24 = pOVar23->inited;
                    uVar25 = *(undefined3 *)&pOVar23->field_0xd;
                    (this->fields).currentAmmo.currentCryptoKey = pOVar23->currentCryptoKey;
                    (this->fields).currentAmmo.hiddenValue = iVar15;
                    (this->fields).currentAmmo.fakeValue = iVar17;
                    (this->fields).currentAmmo.inited = bVar24;
                    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar25;
                    return;
                  }
                }
              }
              else {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                audioSource = (this->fields).aSource;
                pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if ((pCVar26 != (Camera *)0x0) &&
                   (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pCVar26,(MethodInfo *)0x0),
                   pTVar1 != (Transform *)0x0)) {
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position(&VStack_19,pTVar1,(MethodInfo *)0x0);
                  VStack_5.y = pVVar4->x;
                  VStack_5.z = pVVar4->y;
                  uStack_12 = CONCAT44(pVVar4->z,(undefined4)uStack_12);
                  pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                      ((MethodInfo *)0x0);
                  if ((pCVar26 != (Camera *)0x0) &&
                     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pCVar26,(MethodInfo *)0x0),
                     pTVar1 != (Transform *)0x0)) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_forward
                                       ((Vector3 *)(auStack_20 + 4),pTVar1,(MethodInfo *)0x0);
                    VStack_19.y = pVVar4->x;
                    VStack_19.z = pVVar4->y;
                    fVar13 = pVVar4->z;
                    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Vector3);
                    }
                    a.z = uStack_12._4_4_;
                    a.x = VStack_5.y;
                    a.y = VStack_5.z;
                    b.z = fVar13;
                    b.x = VStack_19.y;
                    b.y = VStack_19.z;
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                       ((Vector3 *)(auStack_20 + 4),a,b,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pBVar2->klass == TypeInfo__Bullet__OnHitDelegate) {
      pBVar9 = pBVar2;
    }
    pBVar3 = TypeInfo__Bullet__OnHitDelegate;
    if (pBVar9 != (Bullet_OnHitDelegate *)0x0) goto code_?;
  }
code_?:
  func_?(pBVar2,pBVar3);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHit
               (PickupItemBazooka *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(this_00,(MethodInfo *)0x0);
    position.y = voxelHit.point.x;
    position.x = (float)in_stack_1;
    position.z = voxelHit.point.y;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              (particlePrefab,position,10.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnHitLocal(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitLocal
               (PickupItemBazooka *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  func_?(&uStack_6,0,0x48);
  this_02 = (ExplosionEvent *)
            func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
  worldPosition.y = voxelHit.point.x;
  worldPosition.x = (float)in_stack_7;
  worldPosition.z = voxelHit.point.y;
  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
            (this_02,RuntimeEventType__Enum_Bazooka,worldPosition,voxelHit._8_12_,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar8 != (MVNetworkGame *)0x0) &&
      (this_03 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                  *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar8,(MethodInfo *)0x0)
      , this_03 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0)) &&
     (this_04 = (RuntimeEventManager *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_03,(MethodInfo *)0x0), this_04 != (RuntimeEventManager *)0x0)) {
    RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_04,this_02,(MethodInfo *)0x0);
    fVar9 = (this->fields).blastRadius;
    uStack_10 = CONCAT44(fVar9,(undefined4)uStack_10);
    if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
      func_?();
      fVar9 = (float)uStack_10._4_4_;
    }
    position.y = voxelHit.point.x;
    position.x = (float)in_stack_7;
    position.z = voxelHit.point.y;
    iVar11 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                      (position,fVar9,
                       TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer,
                       (this->fields).layerMask,(MethodInfo *)0x0);
    iStack_12 = iVar11;
    this_05 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    pHStack_13 = this_05;
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_05,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    iStack_14 = 0;
    if (0 < iVar11) {
      do {
        if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000
             ) != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer ==
            (Collider__Array *)0x0) goto code_?;
        this_06 = (Component_1 *)func_?();
        uStack_15 = CONCAT44(this_06,(undefined4)uStack_15);
        if (this_06 == (Component_1 *)0x0) goto code_?;
        pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           (this_06,(MethodInfo *)0x0);
        this_07 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (pTVar16,(MethodInfo *)0x0);
        if (this_07 != (MVWorldObjectClient *)0x0) {
          item = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_07,(MethodInfo *)0x0);
          if (this_05 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)
          goto code_?;
          bVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
                  NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                            ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)this_05,
                             (NativeAdType__Enum)item,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
          if (bVar17 == 0) {
            this_08 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_07,(MethodInfo *)0x0);
            pIStack_18 = this_08;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              VStack_19.y = (float)TypeInfo__UnityEngine__Object;
              VStack_19.x = (float)&UNK_?;
              func_?();
            }
            bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)this_08,(Object_1 *)0x0,(MethodInfo *)0x0);
            this_05 = pHStack_13;
            if (bVar17 != 0) {
              pOVar20 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                       TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                       TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                 ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_07,
                                  (MethodInfo *)0x0);
              uStack_10 = CONCAT44(pOVar20,(undefined4)uStack_10);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar8 == (MVNetworkGame *)0x0) ||
                 (pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
                 pMVar21 == (MVLocalPlayer *)0x0)) goto code_?;
              pSVar22 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar21,
                                  (MethodInfo *)0x0);
              if (uStack_10._4_4_ != pSVar22) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar8 == (MVNetworkGame *)0x0) ||
                   (pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
                   pMVar21 == (MVLocalPlayer *)0x0)) goto code_?;
                bVar17 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)pMVar21,this_07,(MethodInfo *)0x0);
                this_05 = pHStack_13;
                if (bVar17 != 0) goto code_?;
              }
              if (this_08 == (InteractionDataHandlerBase *)0x0) goto code_?;
              from.y = voxelHit.point.x;
              from.x = (float)in_stack_7;
              from.z = voxelHit.point.y;
              pVVar23 = InteractionDataHandlerBase::InteractionDataHandlerBase_GetClosestPoint
                                 (&VStack_19,this_08,from,(MethodInfo *)0x0);
              uStack_10._0_4_ = pVVar23->x;
              uStack_10._4_4_ = (String *)pVVar23->y;
              fVar9 = pVVar23->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a.y = voxelHit.point.x;
              a.x = (float)in_stack_7;
              a.z = voxelHit.point.y;
              b.z = fVar9;
              b.x = (float)(undefined4)uStack_10;
              b.y = (float)uStack_10._4_4_;
              fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                                 (a,b,(MethodInfo *)0x0);
              this_00 = (this->fields).damageFalloff;
              uStack_10 = CONCAT44(fVar9,(undefined4)uStack_10);
              if (this_00 == (AnimationCurve *)0x0) goto code_?;
              pOStack_24 = (Object *)
                           UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     (this_00,fVar9 / (this->fields).blastRadius,(MethodInfo *)0x0)
              ;
              iStack_25 = (this->fields).baseDamage.currentCryptoKey;
              AStack_26 = (this->fields).baseDamage.hiddenValue;
              pBVar27 = (this->fields).baseDamage.hiddenValueOld;
              fVar9 = (this->fields).baseDamage.fakeValue;
              uStack_28._0_4_ = (this->fields).baseDamage.hiddenValueOld;
              uStack_28._4_4_ = (this->fields).baseDamage.fakeValue;
              if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).
                          Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started
                  == 0)) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                pBVar27 = (Byte__Array *)uStack_28;
                fVar9 = uStack_28._4_4_;
              }
              value.hiddenValue = AStack_26;
              value.currentCryptoKey = iStack_25;
              value.hiddenValueOld = pBVar27;
              value.fakeValue = fVar9;
              value.inited = (this->fields).baseDamage.inited;
              value._17_3_ = *(undefined3 *)&(this->fields).baseDamage.field_0x11;
              fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              uStack_10._4_4_ = (String *)fVar9;
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?();
              }
              fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                 ((float)uStack_10._4_4_ * (float)pOStack_24,0.0,3.4028235e+38,
                                  (MethodInfo *)0x0);
              uStack_10 = CONCAT44(fVar9,(undefined4)uStack_10);
              this_05 = pHStack_13;
              if (0.0 < fVar9) {
                pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform(uStack_15._4_4_,(MethodInfo *)0x0);
                if (pTVar16 == (Transform *)0x0) goto code_?;
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)&puStack_29,pTVar16,(MethodInfo *)0x0);
                uStack_15._0_4_ = pVVar23->x;
                uStack_15._4_4_ = (Component_1 *)pVVar23->y;
                fVar9 = pVVar23->z;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a_01.z = fVar9;
                a_01.x = (float)(undefined4)uStack_15;
                a_01.y = (float)uStack_15._4_4_;
                b_00.y = voxelHit.point.x;
                b_00.x = (float)in_stack_7;
                b_00.z = voxelHit.point.y;
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                   ((Vector3 *)&stack0xffffff44,a_01,b_00,(MethodInfo *)0x0);
                uStack_4._0_4_ = pVVar23->x;
                uStack_4._4_4_ = pVVar23->y;
                fStack_5 = pVVar23->z;
                puVar30 = (undefined8 *)func_?();
                fStack_3 = (float)((ulonglong)*puVar30 >> 0x20);
                fStack_1 = *(float *)(puVar30 + 1);
                fStack_3 = fStack_3 + _UNK_?;
                uStack_2 = (undefined4)*puVar30;
                func_?();
                a_00.y = fStack_3;
                a_00.x = (float)uStack_2;
                a_00.z = fStack_1;
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   ((Vector3 *)&stack0xffffff2c,a_00,(this->fields).baseImpulse,
                                    (MethodInfo *)0x0);
                pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   ((Vector3 *)&stack0xffffff20,*pVVar23,(float)pOStack_24,
                                    (MethodInfo *)0x0);
                uStack_28._0_4_ = (Byte__Array *)pVVar23->x;
                uStack_28._4_4_ = pVVar23->y;
                uStack_15 = CONCAT44(pVVar23->z,(undefined4)uStack_15);
                pOStack_24 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_07,
                                        (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?();
                }
                pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar8 == (MVNetworkGame *)0x0) ||
                   (pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
                   pMVar21 == (MVLocalPlayer *)0x0)) goto code_?;
                ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                NamedThemeAttribute_1_UnityEngine_Color__get_Name
                          ((NamedThemeAttribute_1_UnityEngine_Color_ *)pMVar21,(MethodInfo *)0x0);
                impulse.z = (float)uStack_15._4_4_;
                impulse.x = (float)(Byte__Array *)uStack_28;
                impulse.y = uStack_28._4_4_;
                pIVar31 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                    ((InteractionData *)&stack0xffffff0c,(float)uStack_10._4_4_,
                                     impulse,PlayerKilledByType__Enum_BazookaGun,(MethodInfo *)0x0);
                puStack_29 = (undefined *)(pIVar31->impulse).z;
                func_?();
                iVar32 = func_?();
                if (iVar32 != 0) {
                  func_?();
                  this_01 = (this->fields)._._.owner;
                  if ((this_01 == (MVPickupOwner *)0x0) ||
                     (this_09 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                System.dll::System::Collections::Generic::
                                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                ::Single,System::Object]::
                                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                            *)this_01,(MethodInfo *)0x0),
                     this_09 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0))
                  goto code_?;
                  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                  TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                  TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                            (this_09,(MethodInfo *)0x0);
                  iVar32 = func_?();
                  if (iVar32 == 0) goto code_?;
                  uVar33 = func_?(this_07,TypeInfo__IBulletImpactVisualizer,uStack_6,
                                           uStack_34,uStack_35,uStack_36,uStack_37,uStack_38,
                                           uStack_39,uStack_40,uStack_41,uStack_42,uStack_43,
                                           uStack_44,uStack_45,uStack_46,uStack_47);
                  func_?(0,TypeInfo__IBulletImpactVisualizer,uVar33);
                }
                item_00 = (UnityWebRequest *)
                          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                          Collection_1_VoxelHit__get_Items
                                    ((Collection_1_VoxelHit_ *)this_07,(MethodInfo *)0x0);
                this_05 = pHStack_13;
                System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
                UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                          ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHStack_13,item_00,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
              }
            }
          }
        }
code_?:
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < iStack_12);
    }
    return;
  }
code_?:
  func_?();
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* Void OnHitMaxRangeLocal(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeLocal
               (PickupItemBazooka *this,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  fVar5 = (this->fields).rocketRange;
  pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  if (pCVar6 != (Camera *)0x0) {
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                       (pCVar6,(MethodInfo *)0x0);
    uStack_8 = CONCAT44(fVar7,(undefined4)uStack_8);
    if (fVar7 < fVar5) {
      puVar9 = (undefined8 *)func_?(&stack0xffffffdc,&lineOfFire,0);
      uStack_8 = *puVar9;
      fVar5 = *(float *)(puVar9 + 1);
      pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xffffffdc,(InputToPlayerMovementAndroid *)&lineOfFire,
                           (MethodInfo *)0x0);
      uVar11 = pVVar10->x;
      uVar12 = pVVar10->y;
      fVar7 = pVVar10->z;
      pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar6 == (Camera *)0x0) goto code_?;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                         (pCVar6,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_00.y = (float)uVar12;
      a_00.x = (float)uVar11;
      a_00.z = fVar7;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffffdc,a_00,fVar13 * _UNK_?,(MethodInfo *)0x0
                          );
      uVar14 = pVVar10->x;
      uVar15 = pVVar10->y;
      uVar16 = uStack_8;
      uVar17 = uVar14;
      uVar18 = uVar15;
    }
    else {
      puVar9 = (undefined8 *)func_?(auStack_19,&lineOfFire,0);
      fVar5 = *(float *)(puVar9 + 1);
      uVar11 = (undefined4)*puVar9;
      uVar12 = (undefined4)((ulonglong)*puVar9 >> 0x20);
      pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xffffffdc,(InputToPlayerMovementAndroid *)&lineOfFire,
                           (MethodInfo *)0x0);
      fVar7 = (this->fields).rocketRange;
      uStack_8._0_4_ = pVVar10->x;
      uStack_8._4_4_ = pVVar10->y;
      fVar13 = pVVar10->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar13;
      a.x = (float)(undefined4)uStack_8;
      a.y = (float)uStack_8._4_4_;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffffdc,a,fVar7,(MethodInfo *)0x0);
      uVar17 = pVVar10->x;
      uVar18 = pVVar10->y;
      uVar16 = CONCAT44(uVar12,uVar11);
    }
    a_01.z = fVar5;
    a_01.x = (float)(int)uVar16;
    a_01.y = (float)(int)((ulonglong)uVar16 >> 0x20);
    b.y = (float)uVar18;
    b.x = (float)uVar17;
    b.z = pVVar10->z;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffdc,a_01,b,(MethodInfo *)0x0);
    uVar16._0_4_ = pVVar10->x;
    uVar16._4_4_ = pVVar10->y;
    fVar5 = pVVar10->z;
    puVar20 = &UNK_?;
    fVar13 = fVar5;
    uStack_8 = uVar16;
    pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                        ((Vector3 *)&stack0xffffffdc,(InputToPlayerMovementAndroid *)&lineOfFire,
                         (MethodInfo *)0x0);
    uVar21._0_4_ = pVVar10->x;
    uVar21._4_4_ = (MethodInfo *)pVVar10->y;
    fVar7 = pVVar10->z;
    method_00 = uVar21._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
      method_00 = uVar21._4_4_;
    }
    uVar11 = (undefined4)uVar21;
    uVar12 = (undefined4)((ulonglong)uVar21 >> 0x20);
    pVVar10 = (Vector3 *)&stack0xffffffdc;
    puVar22 = &UNK_?;
    a_02.z = fVar7;
    a_02.x = (float)(int)uVar21;
    a_02.y = (float)(int)((ulonglong)uVar21 >> 0x20);
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (pVVar10,a_02,(MethodInfo *)0x0);
    uVar24 = pVVar23->x;
    uVar25 = pVVar23->y;
    voxelHit.point.y = fVar13;
    voxelHit.point.x = (float)uVar16._4_4_;
    voxelHit.point.z = (float)uVar24;
    voxelHit.normal.x = (float)uVar25;
    voxelHit.normal.y = pVVar23->z;
    voxelHit.normal.z = (float)uVar1;
    voxelHit.cubePos.x = (short)uVar2;
    voxelHit.cubePos.y = (short)((uint)uVar2 >> 0x10);
    voxelHit._28_4_ = uVar3;
    voxelHit.face = uVar4;
    voxelHit._36_4_ = puVar20;
    voxelHit.woId = (int32_t)puVar22;
    voxelHit.cube = (Cube *)pVVar10;
    voxelHit.distance = (float)uVar11;
    voxelHit.collider = (Collider *)uVar12;
    voxelHit.transform = (Transform *)lineOfFire.m_Origin.x;
    voxelHit._60_4_ = lineOfFire.m_Origin.y;
    voxelHit.interactionFlags._0_4_ = lineOfFire.m_Origin.z;
    voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
    lineOfFire_00.m_Origin.y = lineOfFire.m_Origin.z;
    lineOfFire_00.m_Origin.x = lineOfFire.m_Origin.y;
    lineOfFire_00.m_Origin.z = lineOfFire.m_Direction.x;
    lineOfFire_00.m_Direction.x = lineOfFire.m_Direction.y;
    lineOfFire_00.m_Direction.y = lineOfFire.m_Direction.z;
    lineOfFire_00.m_Direction.z = 0.0;
    PickupItemBazooka_OnHitLocal(this,voxelHit,lineOfFire_00,method_00);
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_00 != (PrefabPool *)0x0) {
      particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(this_00,(MethodInfo *)0x0);
      position.z = fVar5;
      position.x = (float)(undefined4)uStack_8;
      position.y = (float)uStack_8._4_4_;
      SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                (particlePrefab,position,10.0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void OnHitMaxRangeRemote(Ray) */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_OnHitMaxRangeRemote
               (PickupItemBazooka *this,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(&stack0xfffffff0,&lineOfFire,0);
  fVar2 = *(float *)(iVar1 + 8);
  pVVar3 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     ((Vector3 *)&stack0xffffffdc,(InputToPlayerMovementAndroid *)&lineOfFire,
                      (MethodInfo *)0x0);
  uVar4._0_4_ = pVVar3->x;
  uVar4._4_4_ = pVVar3->y;
  fVar5 = pVVar3->z;
  fVar6 = (this->fields).rocketRange;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar5;
  a.x = (float)(int)uVar4;
  a.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffdc,a,fVar6,(MethodInfo *)0x0);
  uVar7 = pVVar3->x;
  uVar8 = pVVar3->y;
  a_00.y = (float)uVar8;
  a_00.x = (float)uVar7;
  a_00.z = fVar2;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xffffffdc,a_00,*pVVar3,(MethodInfo *)0x0);
  fVar6 = pVVar3->z;
  pVVar3 = (Vector3 *)&stack0xffffffdc;
  puVar9 = &UNK_?;
  pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     (pVVar3,(InputToPlayerMovementAndroid *)&lineOfFire,(MethodInfo *)0x0);
  lineOfFire.m_Direction.x = pVVar10->x;
  lineOfFire.m_Direction.y = pVVar10->y;
  lineOfFire.m_Direction.z = pVVar10->z;
  lineOfFire.m_Origin.z = (float)&stack0xffffffdc;
  lineOfFire.m_Origin.y = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
            ((Vector3 *)lineOfFire.m_Origin.z,*pVVar10,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    particlePrefab = PrefabPool::PrefabPool_get_ParticleExplosion(this_00,(MethodInfo *)0x0);
    position.y = (float)pVVar3;
    position.x = (float)puVar9;
    position.z = fVar6;
    SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
              (particlePrefab,position,10.0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_ResetAmmo
               (PickupItemBazooka *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).maxAmmo.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).maxAmmo.hiddenValue;
  OStack_1.fakeValue = (this->fields).maxAmmo.fakeValue;
  OStack_1.inited = (this->fields).maxAmmo.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = OStack_1.hiddenValue;
  value.currentCryptoKey = OStack_1.currentCryptoKey;
  value.fakeValue = OStack_1.fakeValue;
  value.inited = OStack_1.inited;
  value._13_3_ = OStack_1._13_3_;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,iVar2,(this->klass->vtable).UpdateWithDirection.methodPtr);
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_1,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar3->hiddenValue;
  iVar4 = pOVar3->fakeValue;
  bVar5 = pOVar3->inited;
  uVar6 = *(undefined3 *)&pOVar3->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar3->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar4;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* PickupItemBazooka() */

void Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka__ctor
               (PickupItemBazooka *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,10,(MethodInfo *)0x0);
  iVar2 = pOVar1->hiddenValue;
  iVar3 = pOVar1->fakeValue;
  bVar4 = pOVar1->inited;
  uVar5 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar2;
  (this->fields).maxAmmo.fakeValue = iVar3;
  (this->fields).maxAmmo.inited = bVar4;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar5;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,75.0,(MethodInfo *)0x0);
  iVar2 = pOVar6->currentCryptoKey;
  AVar7 = pOVar6->hiddenValue;
  pBVar8 = pOVar6->hiddenValueOld;
  fVar9 = pOVar6->fakeValue;
  bVar4 = pOVar6->inited;
  uVar5 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields).blastRadius = 10.0;
  (this->fields).baseDamage.currentCryptoKey = iVar2;
  (this->fields).baseDamage.hiddenValue = AVar7;
  (this->fields).baseDamage.hiddenValueOld = pBVar8;
  (this->fields).baseDamage.fakeValue = fVar9;
  (this->fields).baseDamage.inited = bVar4;
  *(undefined3 *)&(this->fields).baseDamage.field_0x11 = uVar5;
  (this->fields).baseImpulse = 1500.0;
  (this->fields).rocketSpeed = 30.0;
  (this->fields).rocketRange = 200.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_IsAmmoDepleted
               (PickupItemBazooka *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar3;
  value._12_4_ = uVar4;
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (0 < iVar3) {
    return 0;
  }
  cVar5 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemBazooka::PickupItemBazooka_get_Quantity
                  (PickupItemBazooka *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

