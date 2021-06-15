
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnBulletHit
               (PickupItemShotgun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe8,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,(MethodInfo *)0x0);
        return;
      }
      this_00 = (this->fields)._._.owner;
      if (this_00 != (MVPickupOwner *)0x0) {
        this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)this_00,(MethodInfo *)0x0);
        if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                    (this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__PickupItemShotgun->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PickupItemShotgun->_1).cctor_started == 0)) {
            func_?();
          }
          if (pMVar2 != (MVWorldObject *)0x0) {
            iVar3 = func_?();
            if (iVar3 != 0) {
              iVar3 = func_?();
              if (iVar3 != 0) {
                func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,in_stack_5,
                                voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x
                                ,voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                                voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                                voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform
                                ,voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                                lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                                lineOfFire.m_Direction.x,lineOfFire.m_Direction.y);
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnFire
               (PickupItemShotgun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  auStack_5._0_4_ = 0.0;
  auStack_5._4_4_ = 0.0;
  pMVar6 = (this->fields)._._.owner;
  if (pMVar6 != (MVPickupOwner *)0x0) {
    pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)auStack_8,pMVar6,(MethodInfo *)0x0);
    uStack_9._0_4_ = pVVar7->x;
    uStack_9._4_4_ = pVVar7->y;
    fVar10 = pVVar7->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)auStack_8,(MethodInfo *)0x0);
    uStack_11._0_4_ = pVVar7->x;
    uStack_11._4_4_ = pVVar7->y;
    fVar12 = pVVar7->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    forward.z = fVar10;
    forward.x = (float)(undefined4)uStack_9;
    forward.y = uStack_9._4_4_;
    upwards.z = fVar12;
    upwards.x = (float)(undefined4)uStack_11;
    upwards.y = uStack_11._4_4_;
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                        ((Quaternion *)auStack_14,forward,upwards,(MethodInfo *)0x0);
    fStack_15 = pQVar13->x;
    VStack_16.x = pQVar13->y;
    VStack_16.y = pQVar13->z;
    VStack_16.z = pQVar13->w;
    auStack_14._0_4_ = pQVar13->x;
    auStack_14._4_4_ = pQVar13->y;
    fStack_17 = pQVar13->z;
    fStack_18 = pQVar13->w;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                       ((Vector3 *)auStack_8,(MethodInfo *)0x0);
    rotation.y = (float)auStack_14._4_4_;
    rotation.x = (float)auStack_14._0_4_;
    rotation.z = fStack_17;
    rotation.w = fStack_18;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)auStack_8,rotation,*pVVar7,(MethodInfo *)0x0);
    auStack_5._8_4_ = pVVar7->x;
    auStack_5._12_4_ = pVVar7->y;
    fStack_19 = pVVar7->z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)auStack_8,(MethodInfo *)0x0);
    rotation_00.y = VStack_16.x;
    rotation_00.x = fStack_15;
    rotation_00.z = VStack_16.y;
    rotation_00.w = VStack_16.z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)auStack_8,rotation_00,*pVVar7,(MethodInfo *)0x0);
    uStack_20._0_4_ = pVVar7->x;
    uStack_20._4_4_ = pVVar7->y;
    uStack_9 = CONCAT44(pVVar7->z,(undefined4)uStack_9);
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      iStack_21 = 0;
      do {
        iVar22 = iStack_21;
        pMVar6 = (this->fields)._._.owner;
        if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
        pVVar7 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           (&VStack_23,(InventoryItem_ItemDescription *)pMVar6,(MethodInfo *)0x0);
        auStack_8._4_4_ = pVVar7->x;
        auStack_8._8_4_ = pVVar7->y;
        uStack_11 = CONCAT44(pVVar7->z,(undefined4)uStack_11);
        pMVar6 = (this->fields)._._.owner;
        if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
        pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_24,pMVar6,(MethodInfo *)0x0)
        ;
        uStack_25._0_4_ = pVVar7->x;
        uStack_25._4_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        if ((((uint)(TypeInfo__PickupItemShotgun->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PickupItemShotgun->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__PickupItemShotgun->static_fields->offsetsX == (Single__Array *)0x0)
        goto code_?;
        fVar26 = (float10)func_?(iVar22);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fStack_19;
        a.x = (float)auStack_5._8_4_;
        a.y = (float)auStack_5._12_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_27,a,(float)fVar26,(MethodInfo *)0x0);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           (&VStack_28,*pVVar7,(this->fields).spread,(MethodInfo *)0x0);
        a_00.z = fVar10;
        a_00.x = (float)(undefined4)uStack_25;
        a_00.y = (float)uStack_25._4_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffff44,a_00,*pVVar7,(MethodInfo *)0x0);
        uStack_25._0_4_ = pVVar7->x;
        uStack_25._4_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        if (TypeInfo__PickupItemShotgun->static_fields->offsetsY == (Single__Array *)0x0)
        goto code_?;
        fVar26 = (float10)func_?(iVar22);
        a_01.z = uStack_9._4_4_;
        a_01.x = (float)(undefined4)uStack_20;
        a_01.y = (float)uStack_20._4_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffff38,a_01,(float)fVar26,(MethodInfo *)0x0);
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffff2c,*pVVar7,(this->fields).spread,
                            (MethodInfo *)0x0);
        a_03.z = fVar10;
        a_03.x = (float)(undefined4)uStack_25;
        a_03.y = (float)uStack_25._4_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_16,a_03,*pVVar7,(MethodInfo *)0x0);
        VStack_27.x = pVVar7->x;
        VStack_27.y = pVVar7->y;
        VStack_27.z = pVVar7->z;
        VStack_24.x = 0.0;
        VStack_28.x = (float)auStack_8._4_4_;
        VStack_28.y = (float)auStack_8._8_4_;
        VStack_28.z = uStack_11._4_4_;
        func_?();
        pTVar29 = (this->fields)._._.muzzlePoint;
        if (pTVar29 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_14 + 4),pTVar29,(MethodInfo *)0x0);
        this_01 = Bullet::Bullet_CreateBullet
                            (PoolEnums__Enum_ShotgunBullet,*pVVar7,(MethodInfo *)0x0);
        if (this_01 == (Bullet *)0x0) goto code_?;
        pBVar30 = (this_01->fields).onHit;
        pUVar31 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__Bullet__OnHitDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar31,(Object *)this,
                   MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pDVar32 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pBVar30,(Delegate *)pUVar31,(MethodInfo *)0x0);
        pBVar30 = (Bullet_OnHitDelegate *)func_?(pDVar32,TypeInfo__Bullet__OnHitDelegate);
        (this_01->fields).onHit = pBVar30;
        if (isLocal != 0) {
          pBVar30 = (this_01->fields).onHitLocal;
          pUVar31 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__Bullet__OnHitDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar31,(Object *)this,
                     MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pDVar32 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar30,(Delegate *)pUVar31,(MethodInfo *)0x0);
          pBVar30 = (Bullet_OnHitDelegate *)func_?(pDVar32,TypeInfo__Bullet__OnHitDelegate)
          ;
          (this_01->fields).onHitLocal = pBVar30;
        }
        pMVar6 = (this->fields)._._.owner;
        if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
        fVar12 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                           (pMVar6,(this->fields).bulletSpeed,(MethodInfo *)0x0);
        fVar10 = (this->fields).maxRange;
        pMVar6 = (this->fields)._._.owner;
        uStack_11 = CONCAT44(fVar12,(undefined4)uStack_11);
        uStack_33 = uStack_1;
        uStack_34 = uStack_2;
        uStack_25 = CONCAT44(uStack_4,uStack_3);
        auStack_8._4_8_ = auStack_5._0_8_;
        if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
        ignoreWoIDs = (HashSet_1_System_Int32_ *)func_?(7,pMVar6);
        lineOfFire.m_Origin.y = (float)uStack_34;
        lineOfFire.m_Origin.x = (float)uStack_33;
        lineOfFire.m_Origin.z = (float)(undefined4)uStack_25;
        lineOfFire.m_Direction.x = (float)uStack_25._4_4_;
        lineOfFire.m_Direction.y = (float)auStack_8._4_8_;
        lineOfFire.m_Direction.z = SUB84(auStack_8._4_8_,4);
        Bullet::Bullet_Fire(this_01,uStack_11._4_4_,fVar10,lineOfFire,ignoreWoIDs,(MethodInfo *)0x0);
        iStack_21 = iStack_21 + 1;
      } while (iStack_21 < 5);
      auStack_14._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
      auStack_14._4_4_ = (this->fields).currentAmmo.hiddenValue;
      fStack_17 = (float)(this->fields).currentAmmo.fakeValue;
      fStack_18 = *(float *)&(this->fields).currentAmmo.inited;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      input.hiddenValue = auStack_14._4_4_;
      input.currentCryptoKey = auStack_14._0_4_;
      input.fakeValue = (int32_t)fStack_17;
      input._12_4_ = fStack_18;
      pOVar35 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Decrement((ObscuredInt *)auStack_14,input,(MethodInfo *)0x0);
      iVar36 = pOVar35->hiddenValue;
      iVar37 = pOVar35->fakeValue;
      bVar38 = pOVar35->inited;
      uVar39 = *(undefined3 *)&pOVar35->field_0xd;
      (this->fields).currentAmmo.currentCryptoKey = pOVar35->currentCryptoKey;
      (this->fields).currentAmmo.hiddenValue = iVar36;
      (this->fields).currentAmmo.fakeValue = iVar37;
      (this->fields).currentAmmo.inited = bVar38;
      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar39;
      if (isLocal == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        pTVar29 = (this->fields)._._.muzzlePoint;
        audioSource = (this->fields).audioSource;
        if (pTVar29 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_14 + 4),pTVar29,(MethodInfo *)0x0);
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        audioSource = (this->fields).audioSource;
        pCVar40 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar40 == (Camera *)0x0) goto code_?;
        pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar40,(MethodInfo *)0x0);
        if (pTVar29 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_14 + 4),pTVar29,(MethodInfo *)0x0);
        uStack_20._0_4_ = pVVar7->x;
        uStack_20._4_4_ = pVVar7->y;
        uStack_11 = CONCAT44(pVVar7->z,(undefined4)uStack_11);
        pCVar40 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar40 == (Camera *)0x0) goto code_?;
        pTVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar40,(MethodInfo *)0x0);
        if (pTVar29 == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)(auStack_14 + 4),pTVar29,(MethodInfo *)0x0);
        auStack_8._4_4_ = pVVar7->x;
        auStack_8._8_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_02.z = uStack_11._4_4_;
        a_02.x = (float)(undefined4)uStack_20;
        a_02.y = (float)uStack_20._4_4_;
        b.z = fVar10;
        b.x = (float)auStack_8._4_4_;
        b.y = (float)auStack_8._8_4_;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)(auStack_14 + 4),a_02,b,(MethodInfo *)0x0);
      }
      if (this_02 != (AudioManager *)0x0) {
        AudioManager::AudioManager_Play_2
                  (this_02,StringLiteral_shotgun_fire,audioSource,*pVVar7,(MethodInfo *)0x0);
        (this->fields)._.isFiring = 0;
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnLocalBulletHit
               (PickupItemShotgun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)pMVar1,(MethodInfo *)0x0),
     this_00 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    this_01 = (RuntimeEventManager *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PickupItemShotgun->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PickupItemShotgun->_1).cctor_started == 0)) {
      func_?();
    }
    if (this_01 != (RuntimeEventManager *)0x0) {
      voxelHit_00.point.y = voxelHit.point.y;
      voxelHit_00.point.x = voxelHit.point.x;
      voxelHit_00.point.z = voxelHit.point.z;
      voxelHit_00.normal.x = voxelHit.normal.x;
      voxelHit_00.normal.y = voxelHit.normal.y;
      voxelHit_00.normal.z = voxelHit.normal.z;
      voxelHit_00.cubePos.x = voxelHit.cubePos.x;
      voxelHit_00.cubePos.y = voxelHit.cubePos.y;
      voxelHit_00.cubePos.z = voxelHit.cubePos.z;
      voxelHit_00._30_2_ = voxelHit._30_2_;
      voxelHit_00.face = voxelHit.face;
      voxelHit_00.isCubeHit = voxelHit.isCubeHit;
      voxelHit_00._37_3_ = voxelHit._37_3_;
      voxelHit_00.woId = voxelHit.woId;
      voxelHit_00.cube = voxelHit.cube;
      voxelHit_00.distance = voxelHit.distance;
      voxelHit_00.collider = voxelHit.collider;
      voxelHit_00.transform = voxelHit.transform;
      voxelHit_00._60_4_ = voxelHit._60_4_;
      voxelHit_00.interactionFlags._0_4_ = (undefined4)voxelHit.interactionFlags;
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemShotgun->static_fields->hitDamage;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_01,voxelHit_00,0.0,in_stack_2);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      uVar4 = voxelHit._36_4_;
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        voxelHit.distance =
             (float)
             int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
        ;
        voxelHit.cube = (Cube *)voxelHit._36_4_;
        voxelHit._36_4_ = &UNK_?;
        voxelHit.woId = (int32_t)pMVar3;
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                       (pMVar3,uVar4,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        voxelHit.distance = 0.0;
        voxelHit.cube = (Cube *)&UNK_?;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          voxelHit.interactionFlags._0_4_ = 0;
          voxelHit.collider = (Collider *)&UNK_?;
          voxelHit.transform = (Transform *)pMVar3;
          voxelHit._60_4_ = id;
          this_02 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,id,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClient *)0x0) {
            voxelHit.interactionFlags._4_4_ = &UNK_?;
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_02,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_03 != (MVLocalPlayer *)0x0)) {
                bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_03,this_02,(MethodInfo *)0x0);
                if (bVar5 != 0) {
                  return;
                }
                pVVar6 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                                   ((Vector3 *)&stack0xffffffe4,
                                    (InputToPlayerMovementAndroid *)
                                    ((int)&voxelHit.interactionFlags + 4),(MethodInfo *)0x0);
                a = *pVVar6;
                d = (this->fields).impulseStrength;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   ((Vector3 *)&stack0xffffffe4,a,d,(MethodInfo *)0x0);
                pIVar7 = ShotgunHitPackage::ShotgunHitPackage_Create
                                   ((InteractionData *)&stack0xffffffdc,*pVVar6,(MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  uVar4._0_1_ = pIVar7->interactionType;
                  uVar4._1_1_ = pIVar7->playerKilledByType;
                  uVar4._2_2_ = *(undefined2 *)&pIVar7->field_0x12;
                  (*(code *)(x->klass->vtable).__unknown_1.method)
                            (x,(this->fields)._._.owner,pIVar7->damage,(pIVar7->impulse).x,
                             (pIVar7->impulse).y,(pIVar7->impulse).z,uVar4);
                  return;
                }
              }
              goto code_?;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_ResetAmmo
               (PickupItemShotgun *this,MethodInfo *method)

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


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  func_?(&uStack_3,0,0,0,0);
  impulse.z = fStack_2;
  impulse.x = (float)(undefined4)uStack_3;
  impulse.y = (float)uStack_3._4_4_;
  pIVar8 = ShotgunHitPackage::ShotgunHitPackage_Create(&IStack_9,impulse,(MethodInfo *)0x0);
  fStack_4 = pIVar8->damage;
  fStack_5 = (pIVar8->impulse).x;
  fStack_6 = (pIVar8->impulse).y;
  fStack_7 = (pIVar8->impulse).z;
  uStack_1._0_1_ = pIVar8->interactionType;
  uStack_1._1_1_ = pIVar8->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
  fVar10 = (float10)func_?(&fStack_4,0);
  fStack_11 = (float)fVar10;
  TypeInfo__PickupItemShotgun->static_fields->hitDamage = fStack_11;
  pSVar12 = (Single__Array *)func_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar12,__field_E80567F7D25EDB4B89421071D1BAC660E79DD772_Field,
             (MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->offsetsX = pSVar12;
  pSVar12 = (Single__Array *)func_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar12,__field_F5B13E731396C7753C9658C812EF590154B412D0_Field,
             (MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->offsetsY = pSVar12;
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__ctor
               (PickupItemShotgun *this,MethodInfo *method)

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
           ObscuredInt_op_Implicit(&OStack_2,0x18,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  (this->fields).spread = 0.1;
  (this->fields).impulseStrength = 700.0;
  (this->fields).maxRange = 50.0;
  (this->fields).bulletSpeed = 100.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_IsAmmoDepleted
               (PickupItemShotgun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_Quantity
                  (PickupItemShotgun *this,MethodInfo *method)

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

