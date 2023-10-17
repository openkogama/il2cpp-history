
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
  (*(pSVar3->vtable).ResetAmmo.methodPtr)(this,(pSVar3->vtable).ResetAmmo.method);
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
  RStack_1.m_Origin.x = 0.0;
  RStack_1.m_Origin.y = 0.0;
  RStack_1.m_Origin.z = 0.0;
  RStack_1.m_Direction.x = 0.0;
  RStack_1.m_Direction.y = 0.0;
  RStack_1.m_Direction.z = 0.0;
  func_?(&stack0xffffff1c,0,0x48);
  pMVar2 = (this->fields)._._.owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    uStack_3._0_4_ = (pMVar2->fields).lookOrigin.x;
    uStack_3._4_4_ = (pMVar2->fields).lookOrigin.y;
    fVar4 = (pMVar2->fields).lookOrigin.z;
    pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_6,(this->fields)._._.owner,(MethodInfo *)0x0);
    origin.z = fVar4;
    origin.x = (float)(undefined4)uStack_3;
    origin.y = uStack_3._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              (&RStack_1,origin,*pVVar5,(MethodInfo *)0x0);
    bVar7 = false;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    audioSource = (this->fields).audioSource;
    pTVar8 = (this->fields)._._.muzzlePoint;
    if ((pTVar8 != (Transform *)0x0) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_6,pTVar8,(MethodInfo *)0x0), this_01 != (AudioManager *)0x0))
    {
      fVar4 = pVVar5->z;
      AudioManager::AudioManager_Play_2
                (this_01,StringLiteral_Sound___SizeGunFire,audioSource,*pVVar5,(MethodInfo *)0x0);
      fVar9 = RStack_1.m_Direction.x;
      fVar10 = RStack_1.m_Origin.z;
      fVar11 = RStack_1.m_Origin.y;
      pMVar2 = (this->fields)._._.owner;
      fStack_12 = RStack_1.m_Direction.y;
      fStack_13 = RStack_1.m_Direction.z;
      uStack_3 = CONCAT44((this->fields).range,(undefined4)uStack_3);
      if (pMVar2 != (MVPickupOwner *)0x0) {
        pSVar14 = (SizeGunBase *)RStack_1.m_Origin.x;
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(pMVar2->klass->vtable).get_IgnoreWOIDs.methodPtr)();
        uVar15._0_2_ = 0;
        uVar15._2_2_ = 0;
        layerMask = (float)(this->fields).layerMask;
        voxelHit = (VoxelHit *)&stack0xffffff1c;
        fVar16 = (float)_fStack_14;
        fStack_17 = SUB84(_fStack_14,4);
        ray.m_Origin.y = fVar11;
        ray.m_Origin.x = (float)pSVar14;
        ray.m_Origin.z = fVar10;
        ray.m_Direction.x = fVar9;
        ray.m_Direction.y = fVar16;
        ray.m_Direction.z = fStack_17;
        fVar11 = uStack_3._4_4_;
        bVar18 = CollisionDetection::CollisionDetection_MVHit_1
                          (ray,voxelHit,uStack_3._4_4_,ignoreWoIds,(int32_t)layerMask,
                           (MethodInfo *)0x0);
        if (bVar18 == 0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              (&VStack_6,&RStack_1,(this->fields).range,(MethodInfo *)0x0);
          fVar10 = pVVar5->x;
          fStack_17 = pVVar5->y;
          uStack_3 = CONCAT44(pVVar5->z,(undefined4)uStack_3);
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar19 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar19 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar19->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
             (this_05 = (RailRay *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_00,PoolEnums__Enum_RailGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_05 != (RailRay *)0x0)) {
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_05,(MethodInfo *)0x0);
            pTVar8 = (this->fields)._._.muzzlePoint;
            if ((pTVar8 != (Transform *)0x0) &&
               (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_6,pTVar8,(MethodInfo *)0x0),
               this_06 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_06,*pVVar5,(MethodInfo *)0x0);
              (this_05->fields).target.x = fVar10;
              (this_05->fields).target.y = fStack_17;
              (this_05->fields).target.z = uStack_3._4_4_;
              if (bVar7) {
                fVar4 = (this->fields).hitColor.r;
                fVar11 = (this->fields).hitColor.g;
                fVar10 = (this->fields).hitColor.b;
                fVar9 = (this->fields).hitColor.a;
              }
              else {
                fVar4 = (this->fields).missColor.r;
                fVar11 = (this->fields).missColor.g;
                fVar10 = (this->fields).missColor.b;
                fVar9 = (this->fields).missColor.a;
              }
              (this_05->fields).startColor.r = fVar4;
              (this_05->fields).startColor.g = fVar11;
              (this_05->fields).startColor.b = fVar10;
              (this_05->fields).startColor.a = fVar9;
              RailRay::RailRay_Reset(this_05,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              iVar20 = (this->fields).currentAmmo.currentCryptoKey;
              iVar21 = (this->fields).currentAmmo.hiddenValue;
              iVar22 = (this->fields).currentAmmo.fakeValue;
              uVar23._0_1_ = (this->fields).currentAmmo.inited;
              uVar23._1_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              OVar24.hiddenValue = iVar21;
              OVar24.currentCryptoKey = iVar20;
              OVar24.fakeValue = iVar22;
              OVar24.inited = (bool)uVar23;
              OVar24._13_3_ = SUB43(uVar23,1);
              pOVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)&stack0xffffffa8,OVar24,(MethodInfo *)0x0);
              iVar20 = pOVar25->hiddenValue;
              iVar21 = pOVar25->fakeValue;
              bVar18 = pOVar25->inited;
              uVar26 = *(undefined3 *)&pOVar25->field_0xd;
              OVar24 = *pOVar25;
              (this->fields).currentAmmo.currentCryptoKey = pOVar25->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar20;
              (this->fields).currentAmmo.fakeValue = iVar21;
              (this->fields).currentAmmo.inited = bVar18;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar26;
              iVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit_1(OVar24,(MethodInfo *)0x0);
              if (0 < iVar20) {
                return;
              }
              RStack_1.m_Origin.y = (float)(this->klass->vtable).get_HasUnlimitedAmmo.method;
              RStack_1.m_Origin.x = (float)this;
              cVar27 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)();
              if (cVar27 != '\0') {
                return;
              }
              pMVar2 = (this->fields)._._.owner;
              if (pMVar2 != (MVPickupOwner *)0x0) {
                x_00 = (Object_1 *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                 ((Component *)pMVar2,
                                  MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                                 );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar18 == 0) {
                  return;
                }
                if (x_00 != (Object_1 *)0x0) {
                  (*(code *)x_00->klass[1]._0.byval_arg.data)();
                  return;
                }
              }
            }
          }
        }
        else {
          uStack_3 = CONCAT44(voxelHit,(undefined4)uStack_3);
          fVar9 = fStack_17;
          fVar10 = fVar16;
          pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar28 != (MVWorldObjectClientManager *)0x0) {
            iVar20 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                               (pMVar28,(int32_t)fVar4,
                                int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                               );
            pMVar28 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar28 != (MVWorldObjectClientManager *)0x0) {
              this_02 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar28,iVar20,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._._.owner;
              if (pMVar2 != (MVPickupOwner *)0x0) {
                if (((((pMVar2->fields)._IsLocal_k__BackingField != 0) &&
                     (this_02 != (MVWorldObjectClient *)0x0)) &&
                    ((TypeInfo__MVAvatar->_1).typeHierarchyDepth <=
                     (this_02->klass->_1).typeHierarchyDepth)) &&
                   ((MVAvatar__Class *)
                    (this_02->klass->_1).typeHierarchy
                    [(TypeInfo__MVAvatar->_1).typeHierarchyDepth - 1] == TypeInfo__MVAvatar)) {
                  x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                (this_02,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar18 != 0) {
                    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((this_03 != (MVNetworkGame *)0x0) &&
                       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (this_03,(MethodInfo *)0x0),
                       this_04 != (MVLocalPlayer *)0x0)) {
                      bVar18 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                        ((MVPlayer *)this_04,this_02,(MethodInfo *)0x0);
                      if (bVar18 != 0) goto code_?;
                      iVar29 = (*(this->klass->vtable).GetPackageData.methodPtr)();
                      if (x != (InteractionDataHandlerBase *)0x0) {
                        fVar30 = *(float *)(iVar29 + 0xc);
                        fVar4 = *(float *)(iVar29 + 0x10);
                        func_?();
                        pMVar2 = (this->fields)._._.owner;
                        VStack_6.z = fVar4;
                        VStack_6.y = fVar30;
                        fStack_12 = RStack_1.m_Direction.y;
                        fStack_13 = RStack_1.m_Direction.z;
                        if ((pMVar2 != (MVPickupOwner *)0x0) &&
                           ((pMVar2->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
                          iVar29 = func_?();
                          if ((iVar29 == 0) || (iVar29 = func_?(), iVar29 == 0))
                          goto code_?;
                          func_?(0,TypeInfo__IBulletImpactVisualizer,iVar29,fVar16,fVar9,
                                          voxelHit,fVar11,ignoreWoIds,layerMask,uVar15);
                          goto code_?;
                        }
                      }
                    }
                    goto code_?;
                  }
                }
code_?:
                bVar7 = true;
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
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
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
    cVar9 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)();
    if (cVar9 == '\0') {
      this_00 = (this->fields)._._.owner;
      if (this_00 == (MVPickupOwner *)0x0) {
code_?:
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
        pOVar11 = x->klass;
        puStack12._0_2_ = pOVar11[1]._0.byval_arg.attrs;
        puStack12._2_1_ = pOVar11[1]._0.byval_arg.type;
        puStack12._3_1_ = pOVar11[1]._0.byval_arg.field_0x7;
        pOStack13 = x;
        (*(code *)pOVar11[1]._0.byval_arg.data)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  iVar2 = (*(this->klass->vtable).GetAmmoMultiplier.methodPtr)(this,iVar2);
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
  cVar5 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
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

