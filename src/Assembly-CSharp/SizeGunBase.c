
/* Void Awake() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_Awake(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  pSVar3 = this->klass;
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  (*(code *)(pSVar3->vtable).ResetAmmo.method)
            (this,(pSVar3->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  return;
}


/* InteractionData GetPackageData() */

InteractionData *
Assembly-CSharp.dll::SizeGunBase::SizeGunBase_GetPackageData
          (InteractionData *__return_storage_ptr__,SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_This_function_shouldn_t_get_call,(MethodInfo *)0x0);
  pIVar1 = MouseGunHitPackage::MouseGunHitPackage_Create(&IStack_2,(MethodInfo *)0x0);
  fVar3 = (pIVar1->impulse).x;
  fVar4 = (pIVar1->impulse).y;
  fVar5 = (pIVar1->impulse).z;
  uVar6 = pIVar1->interactionType;
  uVar7 = pIVar1->playerKilledByType;
  uVar8 = *(undefined2 *)&pIVar1->field_0x12;
  __return_storage_ptr__->damage = pIVar1->damage;
  (__return_storage_ptr__->impulse).x = fVar3;
  (__return_storage_ptr__->impulse).y = fVar4;
  (__return_storage_ptr__->impulse).z = fVar5;
  __return_storage_ptr__->interactionType = uVar6;
  __return_storage_ptr__->playerKilledByType = uVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar8;
  return __return_storage_ptr__;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_OnFire
               (SizeGunBase *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  func_?(&stack0xffffff18,0,0x48);
  pMVar6 = (this->fields)._._.owner;
  if (pMVar6 != (MVPickupOwner *)0x0) {
    pVVar7 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                        (&VStack_8,(InventoryItem_ItemDescription *)pMVar6,(MethodInfo *)0x0);
    uStack_9._0_4_ = pVVar7->x;
    uStack_9._4_4_ = pVVar7->y;
    fVar10 = pVVar7->z;
    pMVar6 = (this->fields)._._.owner;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_8,pMVar6,(MethodInfo *)0x0);
      uVar11._0_4_ = pVVar7->x;
      uVar11._4_4_ = pVVar7->y;
      fVar12 = pVVar7->z;
      fVar13 = 0.0;
      func_?(&fStack_1,(int)uStack_9,(int)((ulonglong)uStack_9 >> 0x20),fVar10,uVar11);
      fVar10 = (float)((ulonglong)uVar11 >> 0x20);
      bVar14 = false;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      pTVar15 = (this->fields)._._.muzzlePoint;
      audioSource = (this->fields).audioSource;
      if (pTVar15 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_8,pTVar15,(MethodInfo *)0x0);
        if (this_00 != (AudioManager *)0x0) {
          AudioManager::AudioManager_Play_2
                    (this_00,StringLiteral_Sound___SizeGunFire,audioSource,*pVVar7,
                     (MethodInfo *)0x0);
          pMVar6 = (this->fields)._._.owner;
          fStack_16 = fStack_1;
          fStack_17 = fStack_2;
          fStack_18 = fStack_3;
          fStack_19 = fStack_4;
          uStack_9 = uStack_5;
          fStack_20 = (this->fields).range;
          if (pMVar6 != (MVPickupOwner *)0x0) {
            ignoreWoIds = (HashSet_1_System_Int32_ *)
                          (*(code *)(pMVar6->klass->vtable).get_IgnoreWOIDs.method)(pMVar6);
            ray.m_Origin.y = fStack_17;
            ray.m_Origin.x = fStack_16;
            ray.m_Origin.z = fStack_18;
            ray.m_Direction.x = fStack_19;
            ray.m_Direction.y = (float)(int)uStack_9;
            ray.m_Direction.z = (float)((ulonglong)uStack_9 >> 0x20);
            bVar21 = CollisionDetection::CollisionDetection_MVHit_1
                               (ray,(VoxelHit *)&stack0xffffff18,fStack_20,ignoreWoIds,
                                (this->fields).layerMask,(MethodInfo *)0x0);
            if (bVar21 == 0) {
              pfVar22 = (float *)func_?(&VStack_8,&fStack_1,(this->fields).range,0);
              fStack_16 = *pfVar22;
              fStack_17 = pfVar22[1];
              fStack_20 = pfVar22[2];
              fStack_18 = 0.0;
              fStack_19 = 0.0;
            }
            else {
              fStack_16 = fVar10;
              fStack_17 = fVar12;
              fStack_18 = fVar13;
              fStack_19 = in_stack_23;
              fStack_20 = fVar13;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar24 == (MVWorldObjectClientManager *)0x0) goto code_?;
              iVar25 = MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                                 (pMVar24,in_stack_26,
                                  int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                 );
              pMVar24 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar24 == (MVWorldObjectClientManager *)0x0) goto code_?;
              this_01 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar24,iVar25,(MethodInfo *)0x0);
              pMVar6 = (this->fields)._._.owner;
              if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
              bVar21 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar6,(MethodInfo *)0x0);
              if ((bVar21 != 0) && (this_01 != (MVWorldObjectClient *)0x0)) {
                iVar27 = func_?();
                if (iVar27 != 0) {
                  x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_01,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                    func_?();
                  }
                  fVar12 = 0.0;
                  fVar10 = 0.0;
                  bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar21 != 0) {
                    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                      in_stack_28 = TypeInfo__MVGameControllerBase;
                      func_?();
                    }
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if (this_02 == (MVNetworkGame *)0x0) goto code_?;
                    this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (this_02,(MethodInfo *)0x0);
                    if (this_03 == (MVLocalPlayer *)0x0) goto code_?;
                    bVar21 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                       ((MVPlayer *)this_03,this_01,(MethodInfo *)0x0);
                    if (bVar21 == 0) {
                      pMVar6 = (this->fields)._._.owner;
                      puVar29 = auStack_30;
                      pIVar31 = this->klass[1]._0.image;
                      pSVar32 = this;
                      puVar33 = (undefined4 *)
                                (*(code *)(this->klass->vtable).GetPackageData.method)();
                      if (x == (InteractionDataHandlerBase *)0x0) goto code_?;
                      (*(code *)(x->klass->vtable).__unknown_1.method)
                                (x,pMVar6,*puVar33,puVar33[1],puVar33[2],puVar33[3],puVar33[4],0,
                                 (x->klass->vtable).OnValidate.methodPtr);
                      uVar11 = uStack_5;
                      fVar34 = fStack_4;
                      fVar35 = fStack_3;
                      fVar36 = fStack_2;
                      fVar13 = fStack_1;
                      pMVar6 = (this->fields)._._.owner;
                      OStack_37.fakeValue = (int32_t)pTStack_38;
                      VStack_8.z = in_stack_39;
                      VStack_8.y = in_stack_40;
                      OStack_37.currentCryptoKey = (int32_t)in_stack_41;
                      OStack_37.hiddenValue = (int32_t)in_stack_42;
                      OStack_37._12_4_ = in_stack_43;
                      if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
                      this_04 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                System.dll::System::Collections::Generic::
                                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                ::Single,System::Object]::
                                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                            *)pMVar6,(MethodInfo *)0x0);
                      if (this_04 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)
                      goto code_?;
                      pOVar44 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                          (this_04,(MethodInfo *)0x0);
                      uStack_9 = CONCAT44(pOVar44,(undefined4)uStack_9);
                      iVar27 = func_?(this_01,TypeInfo__IBulletImpactVisualizer);
                      if (iVar27 == 0) goto code_?;
                      piVar45 = (int *)func_?(this_01,TypeInfo__IBulletImpactVisualizer);
                      uVar46 = 0;
                      uVar47 = *(ushort *)(*piVar45 + 0xb6);
                      if (uVar47 != 0) {
                        iVar27 = *(int *)(*piVar45 + 0x58);
                        do {
                          if (*(IBulletImpactVisualizer__Class **)(iVar27 + (uint)uVar46 * 8) ==
                              TypeInfo__IBulletImpactVisualizer) {
                            puVar33 = (undefined4 *)
                                      (*piVar45 +
                                      (*(int *)(iVar27 + 4 + (uint)uVar46 * 8) + 0x18) * 8);
                            goto code_?;
                          }
                          uVar46 = uVar46 + 1;
                        } while (uVar46 < uVar47);
                      }
                      puVar33 = (undefined4 *)
                                func_?(piVar45,TypeInfo__IBulletImpactVisualizer,0);
code_?:
                      (*(code *)*puVar33)(piVar45,puVar29,pSVar32,pIVar31,fVar10,fVar12,
                                          in_stack_48,puStack_49,in_stack_28,
                                          in_stack_50,in_stack_51,in_stack_26,
                                          in_stack_52,OStack_37.currentCryptoKey,
                                          OStack_37.hiddenValue,OStack_37.fakeValue,OStack_37._12_4_
                                          ,VStack_8.y,VStack_8.z,fVar13,fVar36,fVar35,fVar34,
                                          (int)uVar11,(int)((ulonglong)uVar11 >> 0x20),
                                          uStack_9._4_4_,0,puVar33[1]);
                    }
                  }
                }
              }
              bVar14 = true;
            }
            if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
              func_?();
            }
            this_05 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
            if (this_05 != (PrefabPool *)0x0) {
              this_06 = (EnumPoolManager *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   this_05,(MethodInfo *)0x0);
              if (this_06 != (EnumPoolManager *)0x0) {
                this_07 = (RailRay *)
                          EnumPoolManager::EnumPoolManager_Instantiate_18
                                    (this_06,PoolEnums__Enum_RailGunRay,
                                     RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                    );
                if (this_07 != (RailRay *)0x0) {
                  this_08 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this_07,(MethodInfo *)0x0);
                  pTVar15 = (this->fields)._._.muzzlePoint;
                  if (pTVar15 != (Transform *)0x0) {
                    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_8,pTVar15,(MethodInfo *)0x0);
                    if (this_08 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(this_08,*pVVar7,(MethodInfo *)0x0);
                      (this_07->fields).target.x = fStack_16;
                      (this_07->fields).target.y = fStack_17;
                      (this_07->fields).target.z = fStack_20;
                      if (bVar14) {
                        fVar10 = (this->fields).hitColor.r;
                        fVar12 = (this->fields).hitColor.g;
                        fVar13 = (this->fields).hitColor.b;
                        fVar36 = (this->fields).hitColor.a;
                      }
                      else {
                        fVar10 = (this->fields).missColor.r;
                        fVar12 = (this->fields).missColor.g;
                        fVar13 = (this->fields).missColor.b;
                        fVar36 = (this->fields).missColor.a;
                      }
                      (this_07->fields).startColor.r = fVar10;
                      (this_07->fields).startColor.g = fVar12;
                      (this_07->fields).startColor.b = fVar13;
                      (this_07->fields).startColor.a = fVar36;
                      RailRay::RailRay_Reset(this_07,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      OStack_37.currentCryptoKey = (this->fields).currentAmmo.currentCryptoKey;
                      OStack_37.hiddenValue = (this->fields).currentAmmo.hiddenValue;
                      OStack_37.fakeValue = (this->fields).currentAmmo.fakeValue;
                      OStack_37.inited = (this->fields).currentAmmo.inited;
                      OStack_37._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                                  vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                          cctor_started == 0)) {
                        func_?();
                      }
                      OVar53.hiddenValue = OStack_37.hiddenValue;
                      OVar53.currentCryptoKey = OStack_37.currentCryptoKey;
                      OVar53.fakeValue = OStack_37.fakeValue;
                      OVar53.inited = OStack_37.inited;
                      OVar53._13_3_ = OStack_37._13_3_;
                      pOVar54 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredInt::ObscuredInt_op_Decrement
                                          (&OStack_37,OVar53,(MethodInfo *)0x0);
                      iVar25 = pOVar54->hiddenValue;
                      iVar55 = pOVar54->fakeValue;
                      bVar21 = pOVar54->inited;
                      uVar56 = *(undefined3 *)&pOVar54->field_0xd;
                      OVar53 = *pOVar54;
                      (this->fields).currentAmmo.currentCryptoKey = pOVar54->currentCryptoKey;
                      (this->fields).currentAmmo.hiddenValue = iVar25;
                      (this->fields).currentAmmo.fakeValue = iVar55;
                      (this->fields).currentAmmo.inited = bVar21;
                      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar56;
                      iVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredInt::ObscuredInt_op_Implicit_1(OVar53,(MethodInfo *)0x0);
                      if (iVar25 < 1) {
                        cVar57 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
                        if (cVar57 == '\0') {
                          pMVar6 = (this->fields)._._.owner;
                          if (pMVar6 == (MVPickupOwner *)0x0) goto code_?;
                          x_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_GetComponent_58
                                           ((Component_1 *)pMVar6,
                                            MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                                           );
                          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality
                                             ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
                          if (bVar21 != 0) {
                            if (x_00 == (MVInteractableBase *)0x0) goto code_?;
                            (*(code *)(x_00->klass->vtable).__unknown_1.method)
                                      (x_00,(x_00->klass->vtable).__unknown_2.methodPtr);
                          }
                        }
                      }
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
  func_?(0);
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* Void ReduceAmmo() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_ReduceAmmo(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentAmmo.currentCryptoKey;
  iVar2 = (this->fields).currentAmmo.hiddenValue;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4._0_1_ = (this->fields).currentAmmo.inited;
  uVar4._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  OVar5.hiddenValue = iVar2;
  OVar5.currentCryptoKey = iVar1;
  OVar5.fakeValue = iVar3;
  OVar5.inited = (bool)uVar4;
  OVar5._13_3_ = SUB43(uVar4,1);
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Decrement((ObscuredInt *)&stack0xffffffec,OVar5,(MethodInfo *)0x0);
  iVar1 = pOVar6->hiddenValue;
  iVar2 = pOVar6->fakeValue;
  bVar7 = pOVar6->inited;
  uVar8 = *(undefined3 *)&pOVar6->field_0xd;
  OVar5 = *pOVar6;
  (this->fields).currentAmmo.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = iVar2;
  (this->fields).currentAmmo.inited = bVar7;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar8;
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(OVar5,(MethodInfo *)0x0);
  if (iVar1 < 1) {
    cVar9 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
    if (cVar9 == '\0') {
      this_00 = (this->fields)._._.owner;
      if (this_00 == (MVPickupOwner *)0x0) {
code_?:
        pIStack10 = (Il2CppMethodPointer)0x0;
        func_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      x = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                    ((Component_1 *)this_00,
                     MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (x == (MVInteractableBase *)0x0) goto code_?;
        pIStack10 = (x->klass->vtable).__unknown_2.methodPtr;
        pMStack12 = x;
        (*(code *)(x->klass->vtable).__unknown_1.method)();
      }
    }
  }
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_ResetAmmo(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  pOVar1 = (ObscuredInt__Class *)(this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    func_?();
  }
  value.hiddenValue = iVar2;
  value.currentCryptoKey = (int32_t)pOVar1;
  value.fakeValue = iVar3;
  value.inited = (this->fields).maxAmmo.inited;
  value._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)(this,iVar2);
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar4->hiddenValue;
  iVar3 = pOVar4->fakeValue;
  bVar5 = pOVar4->inited;
  uVar6 = *(undefined3 *)&pOVar4->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar3;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* SizeGunBase() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase__ctor(SizeGunBase *this,MethodInfo *method)

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
           ObscuredInt_op_Implicit(&OStack_2,5,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  OStack_2.hiddenValue = 0;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  OStack_2.currentCryptoKey = 0x3f666666;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  fStack_10 = 0.0;
  func_?(&fStack_7,0x3e4ccccd,0x3e99999a);
  (this->fields).hitColor.r = fStack_7;
  (this->fields).hitColor.g = fStack_8;
  (this->fields).hitColor.b = fStack_9;
  (this->fields).hitColor.a = fStack_10;
  OStack_2.hiddenValue = 0;
  fStack_11 = 0.0;
  fStack_12 = 0.0;
  fStack_13 = 0.0;
  fStack_14 = 0.0;
  OStack_2.currentCryptoKey = 0x3e4ccccd;
  func_?(&fStack_11,0x3f666666,0x3e99999a);
  (this->fields).missColor.r = fStack_11;
  (this->fields).missColor.g = fStack_12;
  (this->fields).missColor.b = fStack_13;
  (this->fields).missColor.a = fStack_14;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_IsAmmoDepleted
               (SizeGunBase *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_Quantity
                  (SizeGunBase *this,MethodInfo *method)

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

