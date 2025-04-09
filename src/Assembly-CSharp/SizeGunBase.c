
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
    fVar2 = (pMVar1->fields).lookOrigin.x;
    fVar3 = (pMVar1->fields).lookOrigin.y;
    fVar4 = (pMVar1->fields).lookOrigin.z;
    pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        ((Vector3 *)&stack0xffffffe8,pMVar1,(MethodInfo *)0x0);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffe8,*pVVar5,(MethodInfo *)0x0);
    fVar6 = pVVar5->x;
    fVar7 = pVVar5->y;
    fVar8 = pVVar5->z;
    bVar9 = false;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    audioSource = (this->fields).audioSource;
    pTVar10 = (this->fields)._._.muzzlePoint;
    if ((pTVar10 != (Transform *)0x0) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe8,pTVar10,(MethodInfo *)0x0),
       this_01 != (AudioManager *)0x0)) {
      fVar11 = pVVar5->x;
      AudioManager::AudioManager_Play_2
                (this_01,StringLiteral_Sound___SizeGunFire,audioSource,*pVVar5,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.owner;
      fStack_12 = (this->fields).range;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        pHStack_13 = (HashSet_1_System_Int32_ *)
                     (*(code *)(pMVar1->klass->vtable).get_IgnoreWOIDs.method)();
        fVar14 = 0.0;
        pCVar15 = (Component__Class *)(this->fields).layerMask;
        ray.m_Origin.y = fVar3;
        ray.m_Origin.x = fVar2;
        ray.m_Origin.z = fVar4;
        ray.m_Direction.x = fVar6;
        ray.m_Direction.y = fVar7;
        ray.m_Direction.z = fVar8;
        bVar16 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&stack0xffffff1c,fStack_12,pHStack_13,(int32_t)pCVar15,
                            (MethodInfo *)0x0);
        if (bVar16 == 0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              ((Vector3 *)&stack0xffffffe8,(Ray *)&stack0xffffffc8,
                               (this->fields).range,(MethodInfo *)0x0);
          fStack_12 = pVVar5->x;
          pHStack_13 = (HashSet_1_System_Int32_ *)pVVar5->y;
          pCVar17 = (Component__Class *)pVVar5->z;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar18 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar18 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar18->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
             (this_05 = (Component *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_00,PoolEnums__Enum_RailGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_05 != (Component *)0x0)) {
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (this_05,(MethodInfo *)0x0);
            pTVar10 = (this->fields)._._.muzzlePoint;
            if ((pTVar10 != (Transform *)0x0) &&
               (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffe8,pTVar10,(MethodInfo *)0x0),
               this_06 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_06,*pVVar5,(MethodInfo *)0x0);
              this_05[1].monitor = (MonitorData *)fStack_12;
              this_05[1].fields = (Component__Fields)pHStack_13;
              this_05[2].klass = pCVar17;
              if (bVar9) {
                pvVar19 = (void *)(this->fields).hitColor.r;
                pCVar15 = (Component__Class *)(this->fields).hitColor.g;
                pMVar20 = (MonitorData *)(this->fields).hitColor.b;
                pvVar21 = (void *)(this->fields).hitColor.a;
              }
              else {
                pvVar19 = (void *)(this->fields).missColor.r;
                pCVar15 = (Component__Class *)(this->fields).missColor.g;
                pMVar20 = (MonitorData *)(this->fields).missColor.b;
                pvVar21 = (void *)(this->fields).missColor.a;
              }
              bVar9 = cRam_? == '\0';
              this_05[2].fields._.m_CachedPtr = pvVar19;
              this_05[3].klass = pCVar15;
              this_05[3].monitor = pMVar20;
              this_05[3].fields._.m_CachedPtr = pvVar21;
              if (bVar9) {
                func_?();
                cRam_? = '\x01';
              }
              CVar22._.m_CachedPtr = this_05[1].fields._;
              pCVar15 = this_05[2].klass;
              this_05[6].monitor = this_05[1].monitor;
              this_05[6].fields = (Component__Fields)CVar22._.m_CachedPtr;
              this_05[7].klass = pCVar15;
              pLVar23 = (LineRenderer *)this_05[4].monitor;
              this_05[9].klass = (Component__Class *)0x0;
              if (pLVar23 != (LineRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                LineRenderer_set_positionCount(pLVar23,2,(MethodInfo *)0x0);
                pLVar23 = (LineRenderer *)this_05[4].monitor;
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_05,(MethodInfo *)0x0);
                if ((pTVar10 != (Transform *)0x0) &&
                   (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffe8,pTVar10,(MethodInfo *)0x0),
                   pLVar23 != (LineRenderer *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                            (pLVar23,1,*pVVar5,(MethodInfo *)0x0);
                  if ((LineRenderer *)this_05[4].monitor != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                              ((LineRenderer *)this_05[4].monitor,0,*(Vector3 *)&this_05[6].monitor,
                               (MethodInfo *)0x0);
                    if (((Renderer *)this_05[4].monitor != (Renderer *)0x0) &&
                       (this_07 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                  Renderer_get_material
                                            ((Renderer *)this_05[4].monitor,(MethodInfo *)0x0),
                       this_07 != (Material *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                (this_07,StringLiteral__TintColor,*(Vector4 *)&this_05[2].fields,
                                 (MethodInfo *)0x0);
                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform(this_05,(MethodInfo *)0x0);
                      if (pTVar10 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition
                                  (pTVar10,*(Vector3 *)&this_05[1].monitor,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          func_?();
                          func_?();
                          func_?();
                          cRam_? = '\x01';
                        }
                        iVar24 = (this->fields).currentAmmo.currentCryptoKey;
                        iVar25 = (this->fields).currentAmmo.hiddenValue;
                        iVar26 = (this->fields).currentAmmo.fakeValue;
                        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        OVar27.hiddenValue = iVar25;
                        OVar27.currentCryptoKey = iVar24;
                        OVar27.fakeValue = iVar26;
                        OVar27.inited = (this->fields).currentAmmo.inited;
                        OVar27._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                        pOVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                  ::ObscuredInt::ObscuredInt_op_Decrement
                                            ((ObscuredInt *)&stack0xffffffa8,OVar27,
                                             (MethodInfo *)0x0);
                        iVar24 = pOVar28->hiddenValue;
                        iVar25 = pOVar28->fakeValue;
                        bVar16 = pOVar28->inited;
                        uVar29 = *(undefined3 *)&pOVar28->field_0xd;
                        OVar27 = *pOVar28;
                        (this->fields).currentAmmo.currentCryptoKey = pOVar28->currentCryptoKey;
                        (this->fields).currentAmmo.hiddenValue = iVar24;
                        (this->fields).currentAmmo.fakeValue = iVar25;
                        (this->fields).currentAmmo.inited = bVar16;
                        *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar29;
                        iVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                 ::ObscuredInt::ObscuredInt_op_Implicit_1(OVar27,(MethodInfo *)0x0);
                        if (0 < iVar24) {
                          return;
                        }
                        cVar30 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
                        if (cVar30 != '\0') {
                          return;
                        }
                        pMVar1 = (this->fields)._._.owner;
                        if (pMVar1 != (MVPickupOwner *)0x0) {
                          x_00 = (Object_1 *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_GetComponent_1
                                           ((Component *)pMVar1,
                                            MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                                           );
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality(x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
                          if (bVar16 == 0) {
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
                }
              }
            }
          }
        }
        else {
          fVar2 = fStack_12;
          pHVar31 = pHStack_13;
          pCVar17 = pCVar15;
          pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
            iVar24 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                               (pMVar32,in_stack_33,
                                int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                               );
            pMVar32 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar32 != (MVWorldObjectClientManager *)0x0) {
              this_02 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar32,iVar24,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._._.owner;
              if (pMVar1 != (MVPickupOwner *)0x0) {
                if (((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
                   (this_02 != (MVWorldObjectClient *)0x0)) {
                  bVar34 = (TypeInfo__MVAvatar->_1).naturalAligment;
                  if ((bVar34 <= (this_02->klass->_1).naturalAligment) &&
                     ((MVAvatar__Class *)(this_02->klass->_1).typeHierarchy[bVar34 - 1] ==
                      TypeInfo__MVAvatar)) {
                    x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  (this_02,(MethodInfo *)0x0);
                    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                    if (bVar16 != 0) {
                      this_03 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if ((this_03 != (MVNetworkGame *)0x0) &&
                         (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                              (this_03,(MethodInfo *)0x0),
                         this_04 != (MVLocalPlayer *)0x0)) {
                        bVar16 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                           ((MVPlayer *)this_04,this_02,(MethodInfo *)0x0);
                        if (bVar16 != 0) goto code_?;
                        pMVar1 = (this->fields)._._.owner;
                        (*(code *)(this->klass->vtable).GetPackageData.method)();
                        if (x != (InteractionDataHandlerBase *)0x0) {
                          uVar35._0_2_ = 7;
                          uVar35._2_2_ = 0;
                          puVar36 = &UNK_?;
                          func_?();
                          pMVar37 = (this->fields)._._.owner;
                          if ((pMVar37 != (MVPickupOwner *)0x0) &&
                             ((pMVar37->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
                            iVar38 = func_?();
                            if ((iVar38 == 0) || (iVar38 = func_?(), iVar38 == 0))
                            goto code_?;
                            func_?(0,TypeInfo__IBulletImpactVisualizer,iVar38,fVar2,pHVar31
                                            ,pCVar15,fVar14,audioSource,fVar11,puVar36,uVar35,x,
                                            pMVar1);
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
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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

