
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
  func_?(&stack0xffffff14,0,0x48);
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    VStack_2.x = (pMVar1->fields).lookOrigin.x;
    VStack_2.y = (pMVar1->fields).lookOrigin.y;
    pIVar3 = (Il2CppMethodPointer)(pMVar1->fields).lookOrigin.z;
    pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_5,pMVar1,(MethodInfo *)0x0);
    RStack_6.m_Origin.x = VStack_2.x;
    RStack_6.m_Origin.y = VStack_2.y;
    RStack_6.m_Origin.z = (float)pIVar3;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_5,*pVVar4,(MethodInfo *)0x0);
    uVar7 = pVVar4->x;
    uVar8 = pVVar4->y;
    RStack_6.m_Direction.z = pVVar4->z;
    bVar9 = false;
    RStack_6.m_Direction.x = (float)uVar7;
    RStack_6.m_Direction.y = (float)uVar8;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    audioSource = (this->fields).audioSource;
    pTVar10 = (this->fields)._._.muzzlePoint;
    if ((pTVar10 != (Transform *)0x0) &&
       (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_5,pTVar10,(MethodInfo *)0x0), this_01 != (AudioManager *)0x0))
    {
      fVar11 = pVVar4->x;
      AudioManager::AudioManager_Play_2
                (this_01,StringLiteral_Sound___SizeGunFire,audioSource,*pVVar4,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.owner;
      pIStack_12 = (Il2CppMethodPointer)RStack_6.m_Origin.x;
      pHStack_13 = (HashSet_1_System_Int32_ *)RStack_6.m_Origin.y;
      pIStack_14 = (Il2CppMethodPointer)RStack_6.m_Origin.z;
      fStack_15 = RStack_6.m_Direction.x;
      VStack_2.y = RStack_6.m_Direction.z;
      VStack_2.x = RStack_6.m_Direction.y;
      VStack_2.z = (this->fields).range;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(code *)(pMVar1->klass->vtable).get_IgnoreWOIDs.method)();
        fVar16 = 0.0;
        pIVar3 = (Il2CppMethodPointer)(this->fields).layerMask;
        ray.m_Origin.y = (float)pHStack_13;
        ray.m_Origin.x = (float)pIStack_12;
        ray.m_Origin.z = (float)pIStack_14;
        ray.m_Direction.x = fStack_15;
        ray.m_Direction.y = VStack_2.x;
        ray.m_Direction.z = VStack_2.y;
        pIVar17 = (Il2CppMethodPointer)VStack_2.z;
        bVar18 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&stack0xffffff14,VStack_2.z,ignoreWoIds,
                            (int32_t)pIVar3,(MethodInfo *)0x0);
        if (bVar18 == 0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              (&VStack_5,&RStack_6,(this->fields).range,(MethodInfo *)0x0);
          pIStack_12 = (Il2CppMethodPointer)pVVar4->x;
          pHStack_13 = (HashSet_1_System_Int32_ *)pVVar4->y;
          VStack_2.z = pVVar4->z;
          pIStack_14 = (Il2CppMethodPointer)0x0;
          fStack_15 = 0.0;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar19 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar19 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar19->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
             (this_04 = (RailRay *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_00,PoolEnums__Enum_RailGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_04 != (RailRay *)0x0)) {
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_04,(MethodInfo *)0x0);
            pTVar10 = (this->fields)._._.muzzlePoint;
            if ((pTVar10 != (Transform *)0x0) &&
               (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_5,pTVar10,(MethodInfo *)0x0),
               this_05 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_05,*pVVar4,(MethodInfo *)0x0);
              (this_04->fields).target.x = (float)pIStack_12;
              (this_04->fields).target.y = (float)pHStack_13;
              (this_04->fields).target.z = VStack_2.z;
              if (bVar9) {
                fVar11 = (this->fields).hitColor.r;
                fVar16 = (this->fields).hitColor.g;
                fVar20 = (this->fields).hitColor.b;
                fVar21 = (this->fields).hitColor.a;
              }
              else {
                fVar11 = (this->fields).missColor.r;
                fVar16 = (this->fields).missColor.g;
                fVar20 = (this->fields).missColor.b;
                fVar21 = (this->fields).missColor.a;
              }
              (this_04->fields).startColor.r = fVar11;
              (this_04->fields).startColor.g = fVar16;
              (this_04->fields).startColor.b = fVar20;
              (this_04->fields).startColor.a = fVar21;
              RailRay::RailRay_Reset(this_04,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              auStack_22._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
              auStack_22._4_4_ = (this->fields).currentAmmo.hiddenValue;
              auStack_22._8_4_ = (this->fields).currentAmmo.fakeValue;
              auStack_22[0xc] = (this->fields).currentAmmo.inited;
              auStack_22._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              OVar23.hiddenValue = auStack_22._4_4_;
              OVar23.currentCryptoKey = auStack_22._0_4_;
              OVar23.fakeValue = auStack_22._8_4_;
              OVar23._12_4_ = auStack_22._12_4_;
              pOVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)auStack_22,OVar23,(MethodInfo *)0x0);
              iVar25 = pOVar24->hiddenValue;
              iVar26 = pOVar24->fakeValue;
              bVar18 = pOVar24->inited;
              uVar27 = *(undefined3 *)&pOVar24->field_0xd;
              OVar23 = *pOVar24;
              (this->fields).currentAmmo.currentCryptoKey = pOVar24->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar25;
              (this->fields).currentAmmo.fakeValue = iVar26;
              (this->fields).currentAmmo.inited = bVar18;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar27;
              iVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredInt::ObscuredInt_op_Implicit_1(OVar23,(MethodInfo *)0x0);
              if (0 < iVar25) {
                return;
              }
              pIStack_12 = (this->klass->vtable).get_CanUnequip.methodPtr;
              auStack_22._12_4_ = this;
              auStack_22._8_4_ = &UNK_?;
              cVar28 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
              if (cVar28 != '\0') {
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
                bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                   (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar18 == 0) {
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
          pIStack_12 = pIVar17;
          pHStack_13 = ignoreWoIds;
          pIStack_14 = pIVar3;
          fStack_15 = fVar16;
          VStack_2.z = (float)pIVar3;
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar29 != (MVWorldObjectClientManager *)0x0) {
            iVar25 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                               (pMVar29,in_stack_30,
                                int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                               );
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar29 != (MVWorldObjectClientManager *)0x0) {
              pMVar31 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar29,iVar25,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._._.owner;
              if (pMVar1 != (MVPickupOwner *)0x0) {
                if (((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
                   (pMVar31 != (MVWorldObjectClient *)0x0)) {
                  bVar32 = (TypeInfo__MVAvatar->_1).naturalAligment;
                  if ((bVar32 <= (pMVar31->klass->_1).naturalAligment) &&
                     ((MVAvatar__Class *)(pMVar31->klass->_1).typeHierarchy[bVar32 - 1] ==
                      TypeInfo__MVAvatar)) {
                    x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  (pMVar31,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar18 != 0) {
                      this_02 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if ((this_02 != (MVNetworkGame *)0x0) &&
                         (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                              (this_02,(MethodInfo *)0x0),
                         this_03 != (MVLocalPlayer *)0x0)) {
                        bVar18 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                           ((MVPlayer *)this_03,pMVar31,(MethodInfo *)0x0);
                        if (bVar18 != 0) goto code_?;
                        pMVar1 = (this->fields)._._.owner;
                        pSVar33 = this;
                        puVar34 = (undefined4 *)
                                  (*(code *)(this->klass->vtable).GetPackageData.method)();
                        if (x != (InteractionDataHandlerBase *)0x0) {
                          uVar35 = *puVar34;
                          iVar25 = puVar34[1];
                          auStack_22._0_4_ =
                               (undefined4)((ulonglong)*(undefined8 *)(puVar34 + 2) >> 0x20);
                          pCVar36 = (Collider *)puVar34[4];
                          pSVar37 = (SizeGunBase *)(x->klass->vtable).OnValidate.methodPtr;
                          pTVar10 = (Transform *)0x0;
                          puVar38 = &UNK_?;
                          (*(code *)(x->klass->vtable).__unknown_1.method)();
                          pMVar39 = (this->fields)._._.owner;
                          VStack_5.z = (float)pSVar33;
                          VStack_5.y = (float)&stack0xffffffa4;
                          auStack_22._4_4_ = pCVar36;
                          auStack_22._8_4_ = pTVar10;
                          auStack_22._12_4_ = pSVar37;
                          if ((pMVar39 != (MVPickupOwner *)0x0) &&
                             (pMVar31 = (pMVar39->fields)._.worldObjectParent,
                             pMVar31 != (MVWorldObjectClient *)0x0)) {
                            VStack_2.y = (float)(pMVar31->fields)._.ownerActorNr;
                            iVar40 = func_?();
                            if ((iVar40 == 0) ||
                               (piVar41 = (int *)func_?(), piVar41 == (int *)0x0))
                            goto code_?;
                            iStack_42 = *piVar41;
                            uVar43 = 0;
                            if (*(ushort *)(iStack_42 + 0xb6) != 0) {
                              do {
                                if (*(IBulletImpactVisualizer__Class **)
                                     (*(int *)(iStack_42 + 0x58) + (uint)uVar43 * 8) ==
                                    TypeInfo__IBulletImpactVisualizer) {
                                  puVar34 = (undefined4 *)
                                            (iStack_42 +
                                            (*(int *)(*(int *)(iStack_42 + 0x58) + 4 +
                                                     (uint)uVar43 * 8) + 0x18) * 8);
                                  goto code_?;
                                }
                                uVar43 = uVar43 + 1;
                              } while (uVar43 < *(ushort *)(iStack_42 + 0xb6));
                            }
                            puVar34 = (undefined4 *)func_?();
code_?:
                            (*(code *)*puVar34)(piVar41,pIVar17,ignoreWoIds,pIVar3,fVar16,
                                                audioSource,fVar11,puVar38,x,pMVar1,uVar35,iVar25);
                            goto code_?;
                          }
                        }
                      }
                      goto code_?;
                    }
                  }
                }
code_?:
                bVar9 = true;
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
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
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

