
/* Void Awake() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_Awake(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Player);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_This_function_shouldn_t_get_call);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    func_?(&RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_);
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&TypeInfo__MVAvatar);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Sound___SizeGunFire);
    cRam_? = '\x01';
  }
  func_?(&puStack_1,0,0x48);
  pMVar2 = (this->fields)._._.owner;
  this_01 = (MVWorldObjectClient *)0x0;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    VStack_3.x = (pMVar2->fields).lookOrigin.x;
    VStack_3.y = (pMVar2->fields).lookOrigin.y;
    fVar4 = (pMVar2->fields).lookOrigin.z;
    pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_6,(this->fields)._._.owner,(MethodInfo *)0x0);
    RStack_7.m_Origin.x = VStack_3.x;
    RStack_7.m_Origin.y = VStack_3.y;
    RStack_7.m_Origin.z = fVar4;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_6,*pVVar5,(MethodInfo *)0x0);
    uVar8 = pVVar5->x;
    uVar9 = pVVar5->y;
    RStack_7.m_Direction.z = pVVar5->z;
    bVar10 = false;
    RStack_7.m_Direction.x = (float)uVar8;
    RStack_7.m_Direction.y = (float)uVar9;
    this_01 = (MVWorldObjectClient *)
              MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    unaff_EBX = (MVWorldObjectClient__Class *)(this->fields).audioSource;
    pTVar11 = (this->fields)._._.muzzlePoint;
    if ((pTVar11 != (Transform *)0x0) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_6,pTVar11,(MethodInfo *)0x0),
       this_01 != (MVWorldObjectClient *)0x0)) {
      AudioManager::AudioManager_Play_2
                ((AudioManager *)this_01,StringLiteral_Sound___SizeGunFire,(AudioSource *)unaff_EBX,
                 *pVVar5,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._._.owner;
      fStack_12 = RStack_7.m_Origin.x;
      VStack_6.x = RStack_7.m_Origin.y;
      VStack_6.z = RStack_7.m_Direction.x;
      VStack_6.y = RStack_7.m_Origin.z;
      VStack_3.y = RStack_7.m_Direction.z;
      VStack_3.x = RStack_7.m_Direction.y;
      VStack_3.z = (this->fields).range;
      if (pMVar2 != (MVPickupOwner *)0x0) {
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(code *)(pMVar2->klass->vtable).get_IgnoreWOIDs.method)
                                (pMVar2,pMVar2->klass[1]._0.image);
        ray.m_Origin.y = VStack_6.x;
        ray.m_Origin.x = fStack_12;
        ray.m_Origin.z = VStack_6.y;
        ray.m_Direction.x = VStack_6.z;
        ray.m_Direction.y = VStack_3.x;
        ray.m_Direction.z = VStack_3.y;
        bVar13 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&puStack_1,VStack_3.z,ignoreWoIds,
                            (this->fields).layerMask,(MethodInfo *)0x0);
        if (bVar13 == 0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              (&VStack_6,&RStack_7,(this->fields).range,(MethodInfo *)0x0);
          VStack_3.x = pVVar5->x;
          VStack_3.y = pVVar5->y;
          unaff_EBX = (MVWorldObjectClient__Class *)pVVar5->z;
          VStack_3.z = (float)unaff_EBX;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar14 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar14->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
             (this_01 = (MVWorldObjectClient *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_00,PoolEnums__Enum_RailGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_01 != (MVWorldObjectClient *)0x0)) {
            unaff_EBX = (MVWorldObjectClient__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_01,(MethodInfo *)0x0);
            pTVar11 = (this->fields)._._.muzzlePoint;
            if ((pTVar11 != (Transform *)0x0) &&
               (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_6,pTVar11,(MethodInfo *)0x0),
               unaff_EBX != (MVWorldObjectClient__Class *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        ((Transform *)unaff_EBX,*pVVar5,(MethodInfo *)0x0);
              *(undefined8 *)&(this_01->fields)._.itemId = VStack_3._0_8_;
              (this_01->fields)._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)VStack_3.z;
              if (bVar10) {
                pLVar15 = (List_1_MV_WorldObject_ObjectLink_ *)(this->fields).hitColor.r;
                fVar4 = (this->fields).hitColor.g;
                fVar16 = (this->fields).hitColor.b;
                fVar17 = (this->fields).hitColor.a;
              }
              else {
                pLVar15 = (List_1_MV_WorldObject_ObjectLink_ *)(this->fields).missColor.r;
                fVar4 = (this->fields).missColor.g;
                fVar16 = (this->fields).missColor.b;
                fVar17 = (this->fields).missColor.a;
              }
              (this_01->fields)._.objectLinkRefs = pLVar15;
              (this_01->fields)._.ownerActorNr = (int32_t)fVar4;
              (this_01->fields)._.previewOwnerProfileId = (int32_t)fVar16;
              (this_01->fields)._.position.x = fVar17;
              RailRay::RailRay_Reset((RailRay *)this_01,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              auStack_18._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
              auStack_18._4_4_ = (this->fields).currentAmmo.hiddenValue;
              auStack_18._8_4_ = (this->fields).currentAmmo.fakeValue;
              auStack_18[0xc] = (this->fields).currentAmmo.inited;
              auStack_18._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              OVar19.hiddenValue = auStack_18._4_4_;
              OVar19.currentCryptoKey = auStack_18._0_4_;
              OVar19.fakeValue = auStack_18._8_4_;
              OVar19._12_4_ = auStack_18._12_4_;
              pOVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)auStack_18,OVar19,(MethodInfo *)0x0);
              iVar21 = pOVar20->hiddenValue;
              iVar22 = pOVar20->fakeValue;
              bVar13 = pOVar20->inited;
              uVar23 = *(undefined3 *)&pOVar20->field_0xd;
              OVar19 = *pOVar20;
              (this->fields).currentAmmo.currentCryptoKey = pOVar20->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar21;
              (this->fields).currentAmmo.fakeValue = iVar22;
              (this->fields).currentAmmo.inited = bVar13;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar23;
              iVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit_1(OVar19,(MethodInfo *)0x0);
              if (0 < iVar21) {
                return;
              }
              RStack_7.m_Origin.x = (float)(this->klass->vtable).get_CanUnequip.methodPtr;
              auStack_18._12_4_ = this;
              auStack_18._8_4_ = &UNK_?;
              cVar24 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
              if (cVar24 != '\0') {
                return;
              }
              pMVar2 = (this->fields)._._.owner;
              if (pMVar2 != (MVPickupOwner *)0x0) {
                x = (Object_1 *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)pMVar2,
                               MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                              );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar13 == 0) {
                  return;
                }
                this_01 = (MVWorldObjectClient *)0x0;
                if (x != (Object_1 *)0x0) {
                  (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,x->klass[1]._0.this_arg.data.dummy)
                  ;
                  return;
                }
              }
            }
          }
        }
        else {
          VStack_3.y = in_stack_25;
          VStack_3.x = (float)puStack_1;
          VStack_3.z = (float)in_stack_26;
          pMVar27 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar27 != (MVWorldObjectClientManager *)0x0) {
            this_01 = (MVWorldObjectClient *)
                      MVWorldObjectClientManager::
                      MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                                (pMVar27,in_stack_28,
                                 int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                );
            pMVar27 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar27 != (MVWorldObjectClientManager *)0x0) {
              this_01 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar27,(int32_t)this_01,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._._.owner;
              if (pMVar2 != (MVPickupOwner *)0x0) {
                if (((((pMVar2->fields)._IsLocal_k__BackingField != 0) &&
                     (this_01 != (MVWorldObjectClient *)0x0)) &&
                    (unaff_EBX = this_01->klass,
                    (TypeInfo__MVAvatar->_1).naturalAligment <= (unaff_EBX->_1).naturalAligment)) &&
                   ((MVAvatar__Class *)
                    (unaff_EBX->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] ==
                    TypeInfo__MVAvatar)) {
                  uVar29._0_2_ = 0;
                  uVar29._2_2_ = 0;
                  puVar30 = &UNK_?;
                  pMVar31 = this_01;
                  unaff_EBX = (MVWorldObjectClient__Class *)
                              MVWorldObjectClient::
                              MVWorldObjectClient_get_InteractionDataHandlerBase
                                        (this_01,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    pOStack_32 = TypeInfo__UnityEngine__Object;
                    in_stack_33 = &UNK_?;
                    func_?();
                  }
                  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar13 != 0) {
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((this_02 != (MVNetworkGame *)0x0) &&
                       (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (this_02,(MethodInfo *)0x0),
                       this_03 != (MVLocalPlayer *)0x0)) {
                      bVar13 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_03,this_01,(MethodInfo *)0x0);
                      if (bVar13 != 0) goto code_?;
                      pMVar2 = (this->fields)._._.owner;
                      puStack_1 = &stack0xffffffb4;
                      puVar34 = (undefined4 *)
                                (*(code *)(this->klass->vtable).GetPackageData.method)();
                      if (unaff_EBX != (MVWorldObjectClient__Class *)0x0) {
                        func_?(7,unaff_EBX,pMVar2,*puVar34,puVar34[1],puVar34[2],puVar34[3]
                                        ,puVar34[4],0);
                        pMVar35 = (MVWorldObjectClient__Class *)TypeInfo__IBulletImpactVisualizer;
                        pMVar2 = (this->fields)._._.owner;
                        auStack_18._12_4_ = pSStack_36;
                        VStack_6.z = in_stack_37;
                        VStack_6.y = in_stack_38;
                        fVar4 = RStack_7.m_Origin.x;
                        auStack_18._0_4_ = in_stack_39;
                        auStack_18._4_4_ = in_stack_40;
                        auStack_18._8_4_ = in_stack_41;
                        if ((pMVar2 != (MVPickupOwner *)0x0) &&
                           ((pMVar2->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
                          iVar42 = func_?(this_01,TypeInfo__IBulletImpactVisualizer);
                          unaff_EBX = (MVWorldObjectClient__Class *)
                                      TypeInfo__IBulletImpactVisualizer;
                          if (iVar42 == 0) goto code_?;
                          puVar43 = &UNK_?;
                          pMVar44 = this_01;
                          pIVar45 = TypeInfo__IBulletImpactVisualizer;
                          iVar42 = func_?(this_01,TypeInfo__IBulletImpactVisualizer);
                          pMVar35 = unaff_EBX;
                          if (iVar42 == 0) goto code_?;
                          func_?(0,TypeInfo__IBulletImpactVisualizer,iVar42,fVar4,puVar43,
                                          pMVar44,pIVar45,puVar30,pMVar31,uVar29,in_stack_33,
                                          pOStack_32,in_stack_46,in_stack_28,
                                          in_stack_47,auStack_18._0_4_,auStack_18._4_4_,
                                          auStack_18._8_4_,auStack_18._12_4_,VStack_6.y,VStack_6.z
                                         );
                          goto code_?;
                        }
                      }
                    }
                    goto code_?;
                  }
                }
code_?:
                bVar10 = true;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMVar35 = unaff_EBX;
code_?:
  func_?(this_01,pMVar35);
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* Void ReduceAmmo() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_ReduceAmmo(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentAmmo.currentCryptoKey;
  iVar2 = (this->fields).currentAmmo.hiddenValue;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4._0_1_ = (this->fields).currentAmmo.inited;
  uVar4._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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
        _Stack00000024.dummy = &UNK_?;
        func_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                    ((Component *)this_00,
                     MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (x == (Object_1 *)0x0) goto code_?;
        _Stack00000024 = x->klass[1]._0.this_arg.data;
        pOStack11 = x;
        (**(code **)&x->klass[1]._0.byval_arg.attrs)();
      }
    }
  }
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase_ResetAmmo(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  iVar1 = (*(code *)(this->klass->vtable).get_MaxAmmo.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_3,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar2->hiddenValue;
  iVar4 = pOVar2->fakeValue;
  bVar5 = pOVar2->inited;
  uVar6 = *(undefined3 *)&pOVar2->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar2->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = iVar4;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* SizeGunBase() */

void Assembly-CSharp.dll::SizeGunBase::SizeGunBase__ctor(SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  (this->fields).range = 300.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,5,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  fVar7 = _UNK_?;
  fVar8 = _UNK_?;
  fVar9 = _UNK_?;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  (this->fields).hitColor.r = _UNK_?;
  (this->fields).hitColor.g = fVar9;
  (this->fields).hitColor.b = fVar8;
  (this->fields).hitColor.a = fVar7;
  fVar7 = _UNK_?;
  fVar8 = _UNK_?;
  fVar9 = _UNK_?;
  (this->fields).missColor.r = _UNK_?;
  (this->fields).missColor.g = fVar9;
  (this->fields).missColor.b = fVar8;
  (this->fields).missColor.a = fVar7;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_IsAmmoDepleted
               (SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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


/* Int32 get_MaxAmmo() */

int32_t Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_MaxAmmo
                  (SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).maxAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar1 = (*(code *)(this->klass->vtable).CalculateMaxAmmo.method)
                    (this,iVar1,(this->klass->vtable).UpdateWithDirection.methodPtr);
  return iVar1;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::SizeGunBase::SizeGunBase_get_Quantity
                  (SizeGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

