
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Awake
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  pPVar3 = this->klass;
  (this->fields).hitLayerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  (*(code *)(pPVar3->vtable).ResetAmmo.method)
            (this,(pPVar3->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  (this->fields).toFieldOfView = (this->fields).targetFieldOfView;
  return;
}


/* Void DoChargingAnimation() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_DoChargingAnimation
               (PickupItemRailGun *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).chargeCurve;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 == (AnimationCurve *)0x0) goto code_?;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                    (this_00,(fVar2 - (this->fields).chargeBeginTime) /
                             (this->fields).curveChargeLength,(MethodInfo *)0x0);
  this_01 = (this->fields).chargeAudioSource;
  (this->fields).currentCharge = fVar2;
  if (this_01 == (AudioSource *)0x0) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
            (this_01,fVar2 + _UNK_?,(MethodInfo *)0x0);
  this_02 = (this->fields)._._.owner;
  if (this_02 == (MVPickupOwner *)0x0) goto code_?;
  this = (PickupItemRailGun *)0x0;
  bVar3 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_02,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((pPVar1->fields).canDoFOVZoom == 0) goto code_?;
  }
  else {
    if ((pPVar1->fields).canDoFOVZoom == 0) {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      method = (MethodInfo *)&UNK_?;
      pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar4,
                          (MethodInfo *)0x0);
      if (pOVar5 == (Object *)0x0) goto code_?;
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      this = (PickupItemRailGun *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar4,
                        (MethodInfo *)0x0);
      fVar2 = (pPVar1->fields).initialFOV;
      b = (pPVar1->fields).toFieldOfView;
      t = (pPVar1->fields).currentCharge;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      method = (MethodInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         (fVar2,b,t,(MethodInfo *)0x0);
      if (this == (PickupItemRailGun *)0x0) goto code_?;
      pMVar4 = (MainCameraManager *)0x0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              ((Camera *)this,(float)method,(MethodInfo *)pMVar4);
  }
  this_03 = (pPVar1->fields).chargeParticles;
  if (this_03 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_set_time
              (this_03,(pPVar1->fields).currentCharge,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Fire() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_Fire
               (PickupItemRailGun *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  func_?(&fStack_7,0,0x48);
  pMVar8 = (this->fields)._._.owner;
  if (pMVar8 != (MVPickupOwner *)0x0) {
    pVVar9 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                        (&VStack_10,(InventoryItem_ItemDescription *)pMVar8,(MethodInfo *)0x0);
    uStack_11._0_4_ = pVVar9->x;
    uStack_11._4_4_ = pVVar9->y;
    unaff_EDI = (MVWorldObjectClient *)pVVar9->z;
    pMVar8 = (this->fields)._._.owner;
    if (pMVar8 != (MVPickupOwner *)0x0) {
      pVVar9 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_10,pMVar8,(MethodInfo *)0x0);
      uVar12 = pVVar9->x;
      uVar13 = pVVar9->y;
      func_?(&uStack_2,(int)uStack_11,(int)((ulonglong)uStack_11 >> 0x20),unaff_EDI,uVar12,
                      uVar13,pVVar9->z,0);
      uVar14 = uStack_5;
      uVar15 = uStack_4;
      uVar16 = uStack_3;
      uVar17 = uStack_2;
      pMVar8 = (this->fields)._._.owner;
      unaff_EBX = (IBulletImpactVisualizer__Class *)0x0;
      uStack_11 = uStack_6;
      fVar18 = (this->fields).range;
      if (pMVar8 != (MVPickupOwner *)0x0) {
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(code *)(pMVar8->klass->vtable).get_IgnoreWOIDs.method)
                                (pMVar8,pMVar8->klass[1]._0.image);
        ray.m_Origin.y = (float)uVar16;
        ray.m_Origin.x = (float)uVar17;
        ray.m_Origin.z = (float)uVar15;
        ray.m_Direction.x = (float)uVar14;
        ray.m_Direction.y = (float)(undefined4)uStack_11;
        ray.m_Direction.z = (float)uStack_11._4_4_;
        bVar19 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&fStack_7,fVar18,ignoreWoIds,
                            (this->fields).hitLayerMask,(MethodInfo *)0x0);
        if (bVar19 == 0) {
          pfVar20 = (float *)func_?(&VStack_10,&uStack_2,(this->fields).range,0);
          fStack_21 = *pfVar20;
          fStack_22 = pfVar20[1];
          this = (PickupItemRailGun *)pfVar20[2];
code_?:
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?(TypeInfo__PrefabPool);
          }
          this_04 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (this_04 != (PrefabPool *)0x0) {
            this_05 = (EnumPoolManager *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04
                                 ,(MethodInfo *)0x0);
            if (this_05 != (EnumPoolManager *)0x0) {
              unaff_EDI = (MVWorldObjectClient *)
                          EnumPoolManager::EnumPoolManager_Instantiate_18
                                    (this_05,PoolEnums__Enum_RailGunRay,
                                     RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                    );
              if (unaff_EDI != (MVWorldObjectClient *)0x0) {
                (unaff_EDI->fields)._.groupId = (int32_t)fStack_21;
                (unaff_EDI->fields)._.itemId = (int32_t)fStack_22;
                *(PickupItemRailGun **)&(unaff_EDI->fields)._.inputState = this;
                if ((char)unaff_EBX == '\0') {
                  pLVar23 = (List_1_MV_WorldObject_Link_ *)(pPVar1->fields).missColor.r;
                  pLVar24 = (List_1_MV_WorldObject_ObjectLink_ *)(pPVar1->fields).missColor.g;
                  fVar18 = (pPVar1->fields).missColor.b;
                  fVar25 = (pPVar1->fields).missColor.a;
                }
                else {
                  pLVar23 = (List_1_MV_WorldObject_Link_ *)(pPVar1->fields).hitColor.r;
                  pLVar24 = (List_1_MV_WorldObject_ObjectLink_ *)(pPVar1->fields).hitColor.g;
                  fVar18 = (pPVar1->fields).hitColor.b;
                  fVar25 = (pPVar1->fields).hitColor.a;
                }
                (unaff_EDI->fields)._.inputLinkRefs = pLVar23;
                (unaff_EDI->fields)._.objectLinkRefs = pLVar24;
                (unaff_EDI->fields)._.ownerActorNr = (int32_t)fVar18;
                (unaff_EDI->fields)._.previewOwnerProfileId = (int32_t)fVar25;
                unaff_EBX = (IBulletImpactVisualizer__Class *)
                            UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)unaff_EDI,(MethodInfo *)0x0);
                pTVar26 = (pPVar1->fields)._._.muzzlePoint;
                if (pTVar26 != (Transform *)0x0) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_10,pTVar26,(MethodInfo *)0x0);
                  if (unaff_EBX != (IBulletImpactVisualizer__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              ((Transform *)unaff_EBX,*pVVar9,(MethodInfo *)0x0);
                    RailRay::RailRay_Reset((RailRay *)unaff_EDI,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
        else {
          fStack_21 = fStack_7;
          fStack_22 = fStack_27;
          this = pPStack_28;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar29 != (MVWorldObjectClientManager *)0x0) {
            unaff_EDI = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                                  (pMVar29,iStack_30,
                                   int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                  );
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar29 != (MVWorldObjectClientManager *)0x0) {
              unaff_EDI = (MVWorldObjectClient *)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar29,(int32_t)unaff_EDI,(MethodInfo *)0x0);
              if (unaff_EDI == (MVWorldObjectClient *)0x0) goto code_?;
              pMVar8 = (pPVar1->fields)._._.owner;
              if (pMVar8 != (MVPickupOwner *)0x0) {
                bVar19 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar8,(MethodInfo *)0x0);
                if (bVar19 == 0) goto code_?;
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                pMVar31 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if (pMVar31 != (MVNetworkGame *)0x0) {
                  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)CloudyTheme::CloudyTheme_get_Identifier
                                         ((CloudyTheme *)pMVar31,(MethodInfo *)0x0);
                  if (this_00 !=
                      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                       *)0x0) {
                    this_01 = (RuntimeEventManager *)
                              System.dll::System::Collections::Generic::
                              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                              ::Single,System::Object]::
                              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                        (this_00,(MethodInfo *)0x0);
                    uVar17 = uStack_32;
                    pTVar26 = pTStack_33;
                    fVar34 = fStack_35;
                    pPVar36 = pPStack_28;
                    fVar25 = fStack_27;
                    fStack_37 = *(float *)&(pPVar1->fields).baseDamage.inited;
                    uStack_11 = CONCAT44(in_stack_38,puStack_39);
                    iStack_40 = (pPVar1->fields).baseDamage.currentCryptoKey;
                    VStack_10.x = *(float *)&(pPVar1->fields).baseDamage.hiddenValue;
                    pBVar41 = (pPVar1->fields).baseDamage.hiddenValueOld;
                    fVar18 = (pPVar1->fields).baseDamage.fakeValue;
                    VStack_10.y = (float)(pPVar1->fields).baseDamage.hiddenValueOld;
                    VStack_10.z = (pPVar1->fields).baseDamage.fakeValue;
                    fVar42 = fStack_43;
                    pCVar44 = pCStack_45;
                    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->
                                vtable).Equals.methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                        cctor_started == 0)) {
                      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                      pBVar41 = (Byte__Array *)VStack_10.y;
                      fVar18 = VStack_10.z;
                    }
                    value_00.hiddenValue = (ACTkByte4)VStack_10.x;
                    value_00.currentCryptoKey = iStack_40;
                    value_00.hiddenValueOld = pBVar41;
                    value_00.fakeValue = fVar18;
                    value_00._16_4_ = fStack_37;
                    fStack_37 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredFloat::ObscuredFloat_op_Implicit_1
                                         (value_00,(MethodInfo *)0x0);
                    unaff_EBX = (IBulletImpactVisualizer__Class *)0x0;
                    if (this_01 != (RuntimeEventManager *)0x0) {
                      voxelHit.point.y = (float)pPVar36;
                      voxelHit.point.x = fVar25;
                      voxelHit.point.z = fVar34;
                      voxelHit.normal.x = fStack_46;
                      voxelHit.normal.y = fStack_47;
                      voxelHit.normal.z = (float)IStack_48._0_4_;
                      voxelHit.cubePos.x = IStack_48.z;
                      voxelHit.cubePos.y = uStack_49;
                      voxelHit._28_4_ = iStack_50;
                      voxelHit.face = uStack_51;
                      voxelHit._36_4_ = iStack_30;
                      voxelHit.woId = (int32_t)pCStack_52;
                      voxelHit.cube = (Cube *)fVar42;
                      voxelHit.distance = (float)pCVar44;
                      voxelHit.collider = (Collider *)pTVar26;
                      voxelHit.transform = (Transform *)uVar17;
                      voxelHit._60_4_ = (int)uStack_11;
                      voxelHit.interactionFlags._0_4_ = (int)((ulonglong)uStack_11 >> 0x20);
                      voxelHit.interactionFlags._4_4_ = fStack_37;
                      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                                (this_01,voxelHit,0.0,in_stack_53);
                      unaff_EBX = (IBulletImpactVisualizer__Class *)
                                  MVWorldObjectClient::
                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                            (unaff_EDI,(MethodInfo *)0x0);
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?();
                      }
                      in_stack_38 = unaff_EBX;
                      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                               Object_1_op_Inequality
                                         ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar19 == 0) goto code_?;
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pMVar31 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (pMVar31 != (MVNetworkGame *)0x0) {
                        this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (pMVar31,(MethodInfo *)0x0);
                        if (this_02 != (MVLocalPlayer *)0x0) {
                          bVar19 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                             ((MVPlayer *)this_02,unaff_EDI,(MethodInfo *)0x0);
                          if (bVar19 == 0) {
                            pIVar54 = RailgunHitPackage::RailgunHitPackage_Create
                                                ((InteractionData *)&stack0xffffff1c,
                                                 (MethodInfo *)0x0);
                            if (unaff_EBX == (IBulletImpactVisualizer__Class *)0x0)
                            goto code_?;
                            uVar17._0_1_ = pIVar54->interactionType;
                            uVar17._1_1_ = pIVar54->playerKilledByType;
                            uVar17._2_2_ = *(undefined2 *)&pIVar54->field_0x12;
                            func_?(7,unaff_EBX,(pPVar1->fields)._._.owner,pIVar54->damage,
                                            (pIVar54->impulse).x,(pIVar54->impulse).y,
                                            (pIVar54->impulse).z,uVar17,0);
                          }
code_?:
                          iVar55 = func_?(unaff_EDI,TypeInfo__IBulletImpactVisualizer);
                          uVar56 = uStack_6;
                          uVar14 = uStack_5;
                          uVar15 = uStack_4;
                          uVar16 = uStack_3;
                          uVar17 = uStack_2;
                          if (iVar55 == 0) {
code_?:
                            unaff_EBX = (IBulletImpactVisualizer__Class *)0x1;
                            goto code_?;
                          }
                          pMVar8 = (pPVar1->fields)._._.owner;
                          VStack_10.z = (float)in_stack_38;
                          VStack_10.y = (float)puStack_39;
                          if (pMVar8 != (MVPickupOwner *)0x0) {
                            this_03 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                      System.dll::System::Collections::Generic::
                                      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                      ::Single,System::Object]::
                                      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)pMVar8,(MethodInfo *)0x0);
                            if (this_03 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
                              pOVar57 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                        TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                        TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                                  (this_03,(MethodInfo *)0x0);
                              iVar58 = (pPVar1->fields).baseDamage.currentCryptoKey;
                              AVar59 = (pPVar1->fields).baseDamage.hiddenValue;
                              pBVar41 = (pPVar1->fields).baseDamage.hiddenValueOld;
                              fVar18 = (pPVar1->fields).baseDamage.fakeValue;
                              uStack_11 = CONCAT44(pOVar57,(undefined4)uStack_11);
                              fVar25 = fStack_43;
                              pCVar44 = pCStack_45;
                              if ((((uint)(
                                          TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                          ->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                                 ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1)
                                  .cctor_started == 0)) {
                                func_?(
                                               TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat
                                               );
                                fVar25 = fStack_43;
                                pCVar44 = pCStack_45;
                              }
                              value.hiddenValue = AVar59;
                              value.currentCryptoKey = iVar58;
                              value.hiddenValueOld = pBVar41;
                              value.fakeValue = fVar18;
                              value.inited = (pPVar1->fields).baseDamage.inited;
                              value._17_3_ = *(undefined3 *)&(pPVar1->fields).baseDamage.field_0x11;
                              fStack_37 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::
                                         ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit_1
                                                   (value,(MethodInfo *)0x0);
                              unaff_EBX = TypeInfo__IBulletImpactVisualizer;
                              iVar55 = func_?(unaff_EDI,TypeInfo__IBulletImpactVisualizer);
                              pIVar60 = TypeInfo__IBulletImpactVisualizer;
                              if (iVar55 == 0) goto code_?;
                              iVar55 = func_?(unaff_EDI,TypeInfo__IBulletImpactVisualizer);
                              unaff_EBX = pIVar60;
                              if (iVar55 == 0) goto code_?;
                              func_?(0,TypeInfo__IBulletImpactVisualizer,iVar55,fStack_7,
                                              fStack_27,pPStack_28,fStack_35,(int)uVar56,
                                              (int)((ulonglong)uVar56 >> 0x20),uStack_11._4_4_,
                                              fStack_37,uVar17,uVar16,uVar15,uVar14,fVar25,pCVar44,
                                              pTStack_33,uStack_32,VStack_10.y,VStack_10.z);
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
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar61 = (code *)swi(3);
  (*pcVar61)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PickupItemWithDelay::PickupItemWithDelay_OnEquip((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = (Camera *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                         (MethodInfo *)0x0);
    if (this_01 != (Camera *)0x0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                        (this_01,(MethodInfo *)0x0);
      (this->fields).initialFOV = fVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.owner;
  (this->fields)._.isFiring = 0;
  if (this_00 != (MVPickupOwner *)0x0) {
    bVar1 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    (this->fields).isCharging = 0;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_01 != (MainCameraManager *)0x0) &&
       (this_02 = (Camera *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                             (MethodInfo *)0x0), this_02 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                (this_02,(this->fields).initialFOV,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_ResetAmmo
               (PickupItemRailGun *this,MethodInfo *method)

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


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerBegin
               (PickupItemRailGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isFiring == 0) {
    (this->fields)._.isFiring = 1;
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Got_TriggerStart__but_were_firin,(MethodInfo *)0x0);
  }
  (this->fields).isCharging = 1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).chargeBeginTime = fVar1;
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_TriggerEnd
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields).isCharging;
  (this->fields)._.isFiring = 0;
  if (bVar1 != 0) {
    pfVar2 = &(this->fields).currentCharge;
    if (*pfVar2 <= _UNK_? && _UNK_? != *pfVar2) {
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                  (pAVar3,(MethodInfo *)0x0);
        pAVar3 = (this->fields).chargeAudioSource;
        if (pAVar3 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar3,0,(MethodInfo *)0x0);
          (this->fields).isCharging = 0;
          return;
        }
      }
      goto code_?;
    }
    pAVar3 = (this->fields).releaseSound;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                       ((Object_1 *)pAVar3,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                (pAVar3,(MethodInfo *)0x0);
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                (pAVar3,0,(MethodInfo *)0x0);
      pAVar3 = (this->fields).chargeAudioSource;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                (pAVar3,_UNK_? - (this->fields).currentCharge * _UNK_?,
                 (MethodInfo *)0x0);
      pMVar4 = (this->fields)._._.owner;
      if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
      bVar1 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar4,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        pTVar5 = (this->fields)._._.muzzlePoint;
        if (pTVar5 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe4,pTVar5,(MethodInfo *)0x0);
      }
      else {
        pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar7 == (Camera *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar7,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffff0,pTVar5,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar6->x;
        uVar8._4_4_ = pVVar6->y;
        fVar9 = pVVar6->z;
        pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if (pCVar7 == (Camera *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar7,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
        uVar10._0_4_ = pVVar6->x;
        uVar10._4_4_ = pVVar6->y;
        fVar11 = pVVar6->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a.z = fVar9;
        a.x = (float)uVar8;
        a.y = SUB84(uVar8,4);
        b.z = fVar11;
        b.x = (float)(int)uVar10;
        b.y = (float)(int)((ulonglong)uVar10 >> 0x20);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
      }
      fVar9 = pVVar6->x;
      fVar11 = pVVar6->y;
      uVar10._0_4_ = pVVar6->z;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      if (this_00 == (AudioManager *)0x0) goto code_?;
      position.y = fVar11;
      position.x = fVar9;
      position.z = (float)uVar10;
      AudioManager::AudioManager_Play_2
                (this_00,StringLiteral_RailShot,(this->fields).releaseSound,position,
                 (MethodInfo *)0x0);
    }
    (this->fields).missColor.a = 1.0;
    (this->fields).hitColor.a = 1.0;
    PickupItemRailGun_Fire(this,(MethodInfo *)0x0);
    iVar12 = (this->fields).currentAmmo.currentCryptoKey;
    fVar9 = (float)(this->fields).currentAmmo.hiddenValue;
    uVar10._0_4_ = (float)(this->fields).currentAmmo.fakeValue;
    uVar10._4_4_ = *(float *)&(this->fields).currentAmmo.inited;
    (this->fields).isCharging = 0;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?();
    }
    OVar13.hiddenValue = (int32_t)fVar9;
    OVar13.currentCryptoKey = iVar12;
    OVar13.fakeValue = (int32_t)(float)uVar10;
    OVar13._12_4_ = uVar10._4_4_;
    iVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(OVar13,(MethodInfo *)0x0);
    pOVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffd4,iVar12 + -1,(MethodInfo *)0x0)
    ;
    iVar12 = pOVar14->hiddenValue;
    iVar15 = pOVar14->fakeValue;
    bVar1 = pOVar14->inited;
    uVar16 = *(undefined3 *)&pOVar14->field_0xd;
    OVar13 = *pOVar14;
    (this->fields).currentAmmo.currentCryptoKey = pOVar14->currentCryptoKey;
    (this->fields).currentAmmo.hiddenValue = iVar12;
    (this->fields).currentAmmo.fakeValue = iVar15;
    (this->fields).currentAmmo.inited = bVar1;
    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar16;
    iVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(OVar13,(MethodInfo *)0x0);
    if (iVar12 == 0) {
      cVar17 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
      if (cVar17 == '\0') {
        pMVar4 = (this->fields)._._.owner;
        if (pMVar4 == (MVPickupOwner *)0x0) {
code_?:
          func_?(0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                      ((Component_1 *)pMVar4,
                       MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          if (x == (MVInteractableBase *)0x0) goto code_?;
          func_?(6,x);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isCharging == 0) {
    pPVar1 = (this->fields).chargeParticles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar1 = (this->fields).chargeParticles;
        if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar1,(MethodInfo *)0x0);
      }
      this_00 = (this->fields)._._.owner;
      if (this_00 != (MVPickupOwner *)0x0) {
        bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_00,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((this_01 == (MainCameraManager *)0x0) ||
             (this_02 = (Camera *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_01,(MethodInfo *)0x0), this_02 == (Camera *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                    (this_02,(this->fields).initialFOV,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  else {
    PickupItemRailGun_DoChargingAnimation(this,(MethodInfo *)0x0);
    pAVar3 = (this->fields).chargeAudioSource;
    if (pAVar3 != (AudioSource *)0x0) {
      bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pAVar3 = (this->fields).chargeAudioSource;
        if (pAVar3 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar3,(MethodInfo *)0x0);
      }
      pPVar1 = (this->fields).chargeParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_get_isPlaying(pPVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        if ((this->fields).chargeParticles != (ParticleSystem *)0x0) {
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)func_?(), pcVar4 == (code *)0x0)) {
            func_?();
            func_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          uStack5 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)();
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PickupItemRailGun() */

void Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun__ctor
               (PickupItemRailGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).range = 300.0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffcc,0xf,(MethodInfo *)0x0);
  iVar2 = pOVar1->currentCryptoKey;
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).targetFieldOfView = 25.0;
  (this->fields).maxAmmo.currentCryptoKey = iVar2;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffc8,25.0,(MethodInfo *)0x0);
  AVar8 = pOVar7->hiddenValue;
  pBVar9 = pOVar7->hiddenValueOld;
  fVar10 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0x11;
  (this->fields).baseDamage.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).baseDamage.hiddenValue = AVar8;
  (this->fields).baseDamage.hiddenValueOld = pBVar9;
  (this->fields).baseDamage.fakeValue = fVar10;
  (this->fields).baseDamage.inited = bVar5;
  *(undefined3 *)&(this->fields).baseDamage.field_0x11 = uVar6;
  func_?();
  (this->fields).hitColor.r = 0.0;
  (this->fields).hitColor.g = 0.0;
  (this->fields).hitColor.b = 0.0;
  (this->fields).hitColor.a = 0.0;
  func_?();
  (this->fields).missColor.r = 0.0;
  (this->fields).missColor.g = 0.0;
  (this->fields).missColor.b = 0.0;
  (this->fields).missColor.a = 0.0;
  (this->fields).curveChargeLength = 5.0;
  (this->fields).canDoFOVZoom = 1;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
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
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                       (&CStack_3,(this->fields)._.crossHairCannotFireLow,
                        (this->fields)._.crossHairCannotFireHigh,fVar1,(MethodInfo *)0x0);
    fVar1 = pCVar2->g;
    fVar4 = pCVar2->b;
    fVar5 = pCVar2->a;
    __return_storage_ptr__->r = pCVar2->r;
    __return_storage_ptr__->g = fVar1;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  fVar1 = (this->fields)._.crossHairCanFire.g;
  fVar4 = (this->fields)._.crossHairCanFire.b;
  fVar5 = (this->fields)._.crossHairCanFire.a;
  __return_storage_ptr__->r = (this->fields)._.crossHairCanFire.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_IsAmmoDepleted
               (PickupItemRailGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemRailGun::PickupItemRailGun_get_Quantity
                  (PickupItemRailGun *this,MethodInfo *method)

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

