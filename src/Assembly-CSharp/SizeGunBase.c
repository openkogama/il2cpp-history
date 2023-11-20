
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
  func_?(&stack0xffffff1c,0,0x48);
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    fStack_2 = (pMVar1->fields).lookOrigin.x;
    fStack_3 = (pMVar1->fields).lookOrigin.y;
    fVar4 = (pMVar1->fields).lookOrigin.z;
    pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_6,(this->fields)._._.owner,(MethodInfo *)0x0);
    RStack_7.m_Origin.x = fStack_2;
    RStack_7.m_Origin.y = fStack_3;
    RStack_7.m_Origin.z = fVar4;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_6,*pVVar5,(MethodInfo *)0x0);
    uVar8 = pVVar5->x;
    uVar9 = pVVar5->y;
    RStack_7.m_Direction.z = pVVar5->z;
    bVar10 = false;
    RStack_7.m_Direction.x = (float)uVar8;
    RStack_7.m_Direction.y = (float)uVar9;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    audioSource = (this->fields).audioSource;
    pTVar11 = (this->fields)._._.muzzlePoint;
    if ((pTVar11 != (Transform *)0x0) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_6,pTVar11,(MethodInfo *)0x0), this_01 != (AudioManager *)0x0))
    {
      fVar4 = pVVar5->x;
      AudioManager::AudioManager_Play_2
                (this_01,StringLiteral_Sound___SizeGunFire,audioSource,*pVVar5,(MethodInfo *)0x0);
      fVar12 = RStack_7.m_Direction.x;
      fVar13 = RStack_7.m_Origin.z;
      uVar14 = RStack_7.m_Origin._0_8_;
      pMVar1 = (this->fields)._._.owner;
      uStack_15 = CONCAT44(RStack_7.m_Direction.z,RStack_7.m_Direction.y);
      fStack_3 = (this->fields).range;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        pHStack_16 = (HashSet_1_System_Int32_ *)
                     (*(code *)(pMVar1->klass->vtable).get_IgnoreWOIDs.method)();
        uVar17 = RStack_7.m_Origin._0_8_;
        fVar18 = 0.0;
        fVar19 = (float)(this->fields).layerMask;
        ray.m_Origin.z = fVar13;
        RStack_7.m_Origin.x = (float)uVar14;
        RStack_7.m_Origin.y = SUB84(uVar14,4);
        ray.m_Origin.x = RStack_7.m_Origin.x;
        ray.m_Origin.y = RStack_7.m_Origin.y;
        ray.m_Direction.x = fVar12;
        ray.m_Direction.y = (float)(int)uStack_15;
        ray.m_Direction.z = (float)((ulonglong)uStack_15 >> 0x20);
        fStack_20 = fStack_3;
        RStack_7.m_Origin._0_8_ = uVar17;
        bVar21 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&stack0xffffff1c,fStack_3,pHStack_16,(int32_t)fVar19,
                            (MethodInfo *)0x0);
        if (bVar21 == 0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              (&VStack_6,&RStack_7,(this->fields).range,(MethodInfo *)0x0);
          fStack_20 = pVVar5->x;
          pHStack_16 = (HashSet_1_System_Int32_ *)pVVar5->y;
          fStack_3 = pVVar5->z;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar22 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar22 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar22->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
             (this_05 = (RailRay *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_00,PoolEnums__Enum_RailGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_05 != (RailRay *)0x0)) {
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_05,(MethodInfo *)0x0);
            pTVar11 = (this->fields)._._.muzzlePoint;
            if ((pTVar11 != (Transform *)0x0) &&
               (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_6,pTVar11,(MethodInfo *)0x0),
               this_06 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_06,*pVVar5,(MethodInfo *)0x0);
              (this_05->fields).target.x = fStack_20;
              (this_05->fields).target.y = (float)pHStack_16;
              (this_05->fields).target.z = fStack_3;
              if (bVar10) {
                fVar4 = (this->fields).hitColor.r;
                fVar13 = (this->fields).hitColor.g;
                fVar12 = (this->fields).hitColor.b;
                fVar19 = (this->fields).hitColor.a;
              }
              else {
                fVar4 = (this->fields).missColor.r;
                fVar13 = (this->fields).missColor.g;
                fVar12 = (this->fields).missColor.b;
                fVar19 = (this->fields).missColor.a;
              }
              (this_05->fields).startColor.r = fVar4;
              (this_05->fields).startColor.g = fVar13;
              (this_05->fields).startColor.b = fVar12;
              (this_05->fields).startColor.a = fVar19;
              RailRay::RailRay_Reset(this_05,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              iVar23 = (this->fields).currentAmmo.currentCryptoKey;
              iVar24 = (this->fields).currentAmmo.hiddenValue;
              iVar25 = (this->fields).currentAmmo.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              OVar26.hiddenValue = iVar24;
              OVar26.currentCryptoKey = iVar23;
              OVar26.fakeValue = iVar25;
              OVar26.inited = (this->fields).currentAmmo.inited;
              OVar26._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              pOVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)&stack0xffffffa8,OVar26,(MethodInfo *)0x0);
              iVar23 = pOVar27->hiddenValue;
              iVar24 = pOVar27->fakeValue;
              bVar21 = pOVar27->inited;
              uVar28 = *(undefined3 *)&pOVar27->field_0xd;
              OVar26 = *pOVar27;
              (this->fields).currentAmmo.currentCryptoKey = pOVar27->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar23;
              (this->fields).currentAmmo.fakeValue = iVar24;
              (this->fields).currentAmmo.inited = bVar21;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar28;
              iVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit_1(OVar26,(MethodInfo *)0x0);
              if (0 < iVar23) {
                return;
              }
              cVar29 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
              if (cVar29 != '\0') {
                return;
              }
              pMVar1 = (this->fields)._._.owner;
              if (pMVar1 != (MVPickupOwner *)0x0) {
                x_00 = (Object_1 *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)pMVar1,
                                  MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                                 );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar21 == 0) {
                  return;
                }
                if (x_00 != (Object_1 *)0x0) {
                  (**(code **)&x_00->klass[1]._0.byval_arg.attrs)();
                  return;
                }
              }
            }
          }
        }
        else {
          fStack_3 = fVar19;
          fVar13 = fStack_20;
          pHVar30 = pHStack_16;
          pMVar31 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar31 != (MVWorldObjectClientManager *)0x0) {
            iVar23 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                               (pMVar31,in_stack_32,
                                int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                               );
            pMVar31 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar31 != (MVWorldObjectClientManager *)0x0) {
              this_02 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar31,iVar23,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._._.owner;
              if (pMVar1 != (MVPickupOwner *)0x0) {
                if (((((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
                     (this_02 != (MVWorldObjectClient *)0x0)) &&
                    ((TypeInfo__MVAvatar->_1).naturalAligment <=
                     (this_02->klass->_1).naturalAligment)) &&
                   ((MVAvatar__Class *)
                    (this_02->klass->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1]
                    == TypeInfo__MVAvatar)) {
                  x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_02,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar21 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar21 != 0) {
                    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((this_03 != (MVNetworkGame *)0x0) &&
                       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (this_03,(MethodInfo *)0x0),
                       this_04 != (MVLocalPlayer *)0x0)) {
                      bVar21 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,this_02,(MethodInfo *)0x0);
                      if (bVar21 != 0) goto code_?;
                      pMVar1 = (this->fields)._._.owner;
                      pSVar33 = this;
                      (*(code *)(this->klass->vtable).GetPackageData.method)();
                      if (x != (InteractionDataHandlerBase *)0x0) {
                        uVar34._0_2_ = 7;
                        uVar34._2_2_ = 0;
                        puVar35 = &UNK_?;
                        func_?();
                        pMVar36 = (this->fields)._._.owner;
                        VStack_6.z = (float)pSVar33;
                        VStack_6.y = (float)&stack0xffffffa4;
                        uStack_15 = CONCAT44(RStack_7.m_Direction.z,RStack_7.m_Direction.y);
                        if ((pMVar36 != (MVPickupOwner *)0x0) &&
                           ((pMVar36->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
                          iVar37 = func_?();
                          if ((iVar37 == 0) || (iVar37 = func_?(), iVar37 == 0))
                          goto code_?;
                          func_?(0,TypeInfo__IBulletImpactVisualizer,iVar37,fVar13,pHVar30,
                                          fVar19,fVar18,audioSource,fVar4,puVar35,uVar34,x,pMVar1);
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
code_?:
  func_?();
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pOVar1 = (ObscuredInt__Class *)(this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
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

