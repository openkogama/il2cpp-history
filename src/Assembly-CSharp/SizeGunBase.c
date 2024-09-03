
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
  this_02 = (MVWorldObjectClient *)0x0;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    uVar3._0_4_ = (pMVar2->fields).lookOrigin.x;
    uVar3._4_4_ = (pMVar2->fields).lookOrigin.y;
    fVar4 = (pMVar2->fields).lookOrigin.z;
    pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        ((Vector3 *)&stack0xffffffe4,(this->fields)._._.owner,(MethodInfo *)0x0);
    _puStack_38 = uVar3;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffe4,*pVVar5,(MethodInfo *)0x0);
    fVar6 = pVVar5->x;
    fVar7 = pVVar5->y;
    fVar8 = pVVar5->z;
    bVar9 = false;
    this_02 = (MVWorldObjectClient *)
              MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    unaff_EBX = (MVWorldObjectClient__Class *)(this->fields).audioSource;
    pTVar10 = (this->fields)._._.muzzlePoint;
    if ((pTVar10 != (Transform *)0x0) &&
       (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffe4,pTVar10,(MethodInfo *)0x0),
       this_02 != (MVWorldObjectClient *)0x0)) {
      AudioManager::AudioManager_Play_2
                ((AudioManager *)this_02,StringLiteral_Sound___SizeGunFire,(AudioSource *)unaff_EBX,
                 *pVVar5,(MethodInfo *)0x0);
      pMVar2 = (this->fields)._._.owner;
      distance = (this->fields).range;
      if (pMVar2 != (MVPickupOwner *)0x0) {
        puVar11 = puStack_12;
        fVar13 = stack0xffffffcc;
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(code *)(pMVar2->klass->vtable).get_IgnoreWOIDs.method)
                                (pMVar2,pMVar2->klass[1]._0.image);
        ray.m_Origin.y = fVar13;
        ray.m_Origin.x = (float)puVar11;
        ray.m_Origin.z = fVar4;
        ray.m_Direction.x = fVar6;
        ray.m_Direction.y = fVar7;
        ray.m_Direction.z = fVar8;
        bVar14 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&puStack_1,distance,ignoreWoIds,
                            (this->fields).layerMask,(MethodInfo *)0x0);
        if (bVar14 == 0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              ((Vector3 *)&stack0xffffffe4,(Ray *)&puStack_12,(this->fields).range,
                               (MethodInfo *)0x0);
          uVar15._0_4_ = pVVar5->x;
          uVar15._4_4_ = pVVar5->y;
          unaff_EBX = (MVWorldObjectClient__Class *)pVVar5->z;
          in_stack_16 = unaff_EBX;
code_?:
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar17 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar17->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
             (this_02 = (MVWorldObjectClient *)
                        EnumPoolManager::EnumPoolManager_Instantiate
                                  (this_00,PoolEnums__Enum_RailGunRay,
                                   RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                  ), this_02 != (MVWorldObjectClient *)0x0)) {
            unaff_EBX = (MVWorldObjectClient__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_02,(MethodInfo *)0x0);
            pTVar10 = (this->fields)._._.muzzlePoint;
            if ((pTVar10 != (Transform *)0x0) &&
               (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffe4,pTVar10,(MethodInfo *)0x0),
               unaff_EBX != (MVWorldObjectClient__Class *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        ((Transform *)unaff_EBX,*pVVar5,(MethodInfo *)0x0);
              *(undefined8 *)&(this_02->fields)._.itemId = uVar15;
              (this_02->fields)._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)in_stack_16;
              if (bVar9) {
                pLVar18 = (List_1_MV_WorldObject_ObjectLink_ *)(this->fields).hitColor.r;
                fVar6 = (this->fields).hitColor.g;
                fVar7 = (this->fields).hitColor.b;
                fVar4 = (this->fields).hitColor.a;
              }
              else {
                pLVar18 = (List_1_MV_WorldObject_ObjectLink_ *)(this->fields).missColor.r;
                fVar6 = (this->fields).missColor.g;
                fVar7 = (this->fields).missColor.b;
                fVar4 = (this->fields).missColor.a;
              }
              bVar9 = cRam_? == '\0';
              (this_02->fields)._.objectLinkRefs = pLVar18;
              (this_02->fields)._.ownerActorNr = (int32_t)fVar6;
              (this_02->fields)._.previewOwnerProfileId = (int32_t)fVar7;
              (this_02->fields)._.position.x = fVar4;
              if (bVar9) {
                func_?();
                cRam_? = '\x01';
              }
              pLVar19 = (this_02->fields)._.outputLinkRefs;
              *(undefined8 *)&(this_02->fields)._.scale.y =
                   *(undefined8 *)&(this_02->fields)._.itemId;
              (this_02->fields)._.type = (int32_t)pLVar19;
              pLVar20 = (LineRenderer *)(this_02->fields)._.position.z;
              (this_02->fields).PositionChanged =
                   (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
              if (pLVar20 != (LineRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                LineRenderer_set_positionCount(pLVar20,2,(MethodInfo *)0x0);
                unaff_EBX = (MVWorldObjectClient__Class *)(this_02->fields)._.position.z;
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_02,(MethodInfo *)0x0);
                if ((pTVar10 != (Transform *)0x0) &&
                   (pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffe4,pTVar10,(MethodInfo *)0x0),
                   unaff_EBX != (MVWorldObjectClient__Class *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                            ((LineRenderer *)unaff_EBX,1,*pVVar5,(MethodInfo *)0x0);
                  pLVar20 = (LineRenderer *)(this_02->fields)._.position.z;
                  if (pLVar20 != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                              (pLVar20,0,*(Vector3 *)&(this_02->fields)._.scale.y,(MethodInfo *)0x0);
                    this_01 = (Renderer *)(this_02->fields)._.position.z;
                    if ((this_01 != (Renderer *)0x0) &&
                       (this_05 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                  Renderer_get_material(this_01,(MethodInfo *)0x0),
                       this_05 != (Material *)0x0)) {
                      value.x = (float)(this_02->fields)._.objectLinkRefs;
                      value.y = (float)(this_02->fields)._.ownerActorNr;
                      value.z = (float)(this_02->fields)._.previewOwnerProfileId;
                      value.w = (this_02->fields)._.position.x;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                (this_05,StringLiteral__TintColor,value,(MethodInfo *)0x0);
                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)this_02,(MethodInfo *)0x0);
                      if (pTVar10 != (Transform *)0x0) {
                        stack0xffffffcc = (float)pTVar10;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition
                                  (pTVar10,*(Vector3 *)&(this_02->fields)._.itemId,(MethodInfo *)0x0
                                  );
                        if (cRam_? == '\0') {
                          func_?();
                          func_?();
                          func_?();
                          cRam_? = '\x01';
                        }
                        iVar21 = (this->fields).currentAmmo.currentCryptoKey;
                        iVar22 = (this->fields).currentAmmo.hiddenValue;
                        iVar23 = (this->fields).currentAmmo.fakeValue;
                        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        OVar24.hiddenValue = iVar22;
                        OVar24.currentCryptoKey = iVar21;
                        OVar24.fakeValue = iVar23;
                        OVar24.inited = (this->fields).currentAmmo.inited;
                        OVar24._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                        pOVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                  ::ObscuredInt::ObscuredInt_op_Decrement
                                            ((ObscuredInt *)&stack0xffffffb8,OVar24,
                                             (MethodInfo *)0x0);
                        iVar21 = pOVar25->hiddenValue;
                        iVar22 = pOVar25->fakeValue;
                        bVar14 = pOVar25->inited;
                        uVar26 = *(undefined3 *)&pOVar25->field_0xd;
                        OVar24 = *pOVar25;
                        (this->fields).currentAmmo.currentCryptoKey = pOVar25->currentCryptoKey;
                        (this->fields).currentAmmo.hiddenValue = iVar21;
                        (this->fields).currentAmmo.fakeValue = iVar22;
                        (this->fields).currentAmmo.inited = bVar14;
                        *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar26;
                        iVar21 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                 ::ObscuredInt::ObscuredInt_op_Implicit_1(OVar24,(MethodInfo *)0x0);
                        if (0 < iVar21) {
                          return;
                        }
                        cVar27 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
                        if (cVar27 != '\0') {
                          return;
                        }
                        pMVar2 = (this->fields)._._.owner;
                        if (pMVar2 != (MVPickupOwner *)0x0) {
                          x = (Object_1 *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponent_1
                                        ((Component *)pMVar2,
                                         MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                                        );
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality(x,(Object_1 *)0x0,(MethodInfo *)0x0);
                          if (bVar14 == 0) {
                            return;
                          }
                          this_02 = (MVWorldObjectClient *)0x0;
                          if (x != (Object_1 *)0x0) {
                            (**(code **)&x->klass[1]._0.byval_arg.attrs)
                                      (x,x->klass[1]._0.this_arg.data.dummy);
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
          uVar15 = CONCAT44(in_stack_28,puStack_1);
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar29 != (MVWorldObjectClientManager *)0x0) {
            this_02 = (MVWorldObjectClient *)
                      MVWorldObjectClientManager::
                      MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                                (pMVar29,in_stack_30,
                                 int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                );
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar29 != (MVWorldObjectClientManager *)0x0) {
              this_02 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar29,(int32_t)this_02,(MethodInfo *)0x0);
              pMVar2 = (this->fields)._._.owner;
              if (pMVar2 != (MVPickupOwner *)0x0) {
                if (((((pMVar2->fields)._IsLocal_k__BackingField != 0) &&
                     (this_02 != (MVWorldObjectClient *)0x0)) &&
                    (unaff_EBX = this_02->klass,
                    (TypeInfo__MVAvatar->_1).naturalAligment <= (unaff_EBX->_1).naturalAligment)) &&
                   ((MVAvatar__Class *)
                    (unaff_EBX->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] ==
                    TypeInfo__MVAvatar)) {
                  uVar31._0_2_ = 0;
                  uVar31._2_2_ = 0;
                  puVar11 = &UNK_?;
                  pMVar32 = this_02;
                  unaff_EBX = (MVWorldObjectClient__Class *)
                              MVWorldObjectClient::
                              MVWorldObjectClient_get_InteractionDataHandlerBase
                                        (this_02,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    in_stack_33 = &UNK_?;
                    in_stack_34 = TypeInfo__UnityEngine__Object;
                    func_?();
                  }
                  bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar14 != 0) {
                    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((this_03 != (MVNetworkGame *)0x0) &&
                       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (this_03,(MethodInfo *)0x0),
                       this_04 != (MVLocalPlayer *)0x0)) {
                      bVar14 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,this_02,(MethodInfo *)0x0);
                      if (bVar14 != 0) goto code_?;
                      pMVar2 = (this->fields)._._.owner;
                      puStack_1 = &stack0xffffffb4;
                      puVar35 = (undefined4 *)
                                (*(code *)(this->klass->vtable).GetPackageData.method)();
                      if (unaff_EBX != (MVWorldObjectClient__Class *)0x0) {
                        func_?(7,unaff_EBX,pMVar2,*puVar35,puVar35[1],puVar35[2],puVar35[3]
                                        ,puVar35[4],0);
                        pMVar36 = (MVWorldObjectClient__Class *)TypeInfo__IBulletImpactVisualizer;
                        pMVar2 = (this->fields)._._.owner;
                        fVar6 = (float)_puStack_38;
                        if ((pMVar2 != (MVPickupOwner *)0x0) &&
                           ((pMVar2->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
                          iVar37 = func_?(this_02,TypeInfo__IBulletImpactVisualizer);
                          unaff_EBX = (MVWorldObjectClient__Class *)
                                      TypeInfo__IBulletImpactVisualizer;
                          if (iVar37 == 0) goto code_?;
                          puVar38 = &UNK_?;
                          pMVar39 = this_02;
                          pIVar40 = TypeInfo__IBulletImpactVisualizer;
                          iVar37 = func_?(this_02,TypeInfo__IBulletImpactVisualizer);
                          pMVar36 = unaff_EBX;
                          if (iVar37 == 0) goto code_?;
                          func_?(0,TypeInfo__IBulletImpactVisualizer,iVar37,fVar6,puVar38,
                                          pMVar39,pIVar40,puVar11,pMVar32,uVar31,in_stack_33,
                                          in_stack_34,in_stack_41,in_stack_30,
                                          in_stack_42,in_stack_43,in_stack_44,
                                          pTStack_45,in_stack_46,in_stack_47,
                                          in_stack_48);
                          goto code_?;
                        }
                      }
                    }
                    goto code_?;
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
  pMVar36 = unaff_EBX;
code_?:
  func_?(this_02,pMVar36);
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
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

