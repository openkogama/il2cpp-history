
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
  func_?(&stack0xffffff64,0,0x48);
  pMVar1 = (this->fields)._._.owner;
  this_02 = (MVWorldObjectClient *)0x0;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    VStack_2.x = (pMVar1->fields).lookOrigin.x;
    VStack_2.y = (pMVar1->fields).lookOrigin.y;
    pSVar3 = (SizeGunBase *)(pMVar1->fields).lookOrigin.z;
    pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        (&VStack_5,(this->fields)._._.owner,(MethodInfo *)0x0);
    RStack_6.m_Origin.x = VStack_2.x;
    RStack_6.m_Origin.y = VStack_2.y;
    RStack_6.m_Origin.z = (float)pSVar3;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_5,*pVVar4,(MethodInfo *)0x0);
    uVar7 = pVVar4->x;
    uVar8 = pVVar4->y;
    RStack_6.m_Direction.z = pVVar4->z;
    bVar9 = false;
    RStack_6.m_Direction.x = (float)uVar7;
    RStack_6.m_Direction.y = (float)uVar8;
    this_02 = (MVWorldObjectClient *)
              MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
    unaff_EBX = (MVWorldObjectClient__Class *)(this->fields).audioSource;
    pTVar10 = (this->fields)._._.muzzlePoint;
    if ((pTVar10 != (Transform *)0x0) &&
       (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_5,pTVar10,(MethodInfo *)0x0),
       this_02 != (MVWorldObjectClient *)0x0)) {
      AudioManager::AudioManager_Play_2
                ((AudioManager *)this_02,StringLiteral_Sound___SizeGunFire,(AudioSource *)unaff_EBX,
                 *pVVar4,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.owner;
      fStack_11 = RStack_6.m_Origin.x;
      VStack_5.x = RStack_6.m_Origin.y;
      VStack_5.z = RStack_6.m_Direction.x;
      VStack_5.y = RStack_6.m_Origin.z;
      VStack_2.y = RStack_6.m_Direction.z;
      VStack_2.x = RStack_6.m_Direction.y;
      VStack_2.z = (this->fields).range;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        ignoreWoIds = (HashSet_1_System_Int32_ *)
                      (*(code *)(pMVar1->klass->vtable).get_IgnoreWOIDs.method)
                                (pMVar1,pMVar1->klass[1]._0.image);
        ray.m_Origin.y = VStack_5.x;
        ray.m_Origin.x = fStack_11;
        ray.m_Origin.z = VStack_5.y;
        ray.m_Direction.x = VStack_5.z;
        ray.m_Direction.y = VStack_2.x;
        ray.m_Direction.z = VStack_2.y;
        bVar12 = CollisionDetection::CollisionDetection_MVHit_1
                           (ray,(VoxelHit *)&stack0xffffff64,VStack_2.z,ignoreWoIds,
                            (this->fields).layerMask,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                              (&VStack_5,&RStack_6,(this->fields).range,(MethodInfo *)0x0);
          VStack_2.x = pVVar4->x;
          VStack_2.y = pVVar4->y;
          unaff_EBX = (MVWorldObjectClient__Class *)pVVar4->z;
          VStack_2.z = (float)unaff_EBX;
code_?:
          if (cRam_? == '\0') {
            func_?(&TypeInfo__PrefabPool);
            cRam_? = '\x01';
          }
          pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
          if (((pPVar13 != (PrefabPool *)0x0) &&
              (this_00 = (pPVar13->fields).enumPoolManager, this_00 != (EnumPoolManager *)0x0)) &&
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
               (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_5,pTVar10,(MethodInfo *)0x0),
               unaff_EBX != (MVWorldObjectClient__Class *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        ((Transform *)unaff_EBX,*pVVar4,(MethodInfo *)0x0);
              *(undefined8 *)&(this_02->fields)._.itemId = VStack_2._0_8_;
              (this_02->fields)._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)VStack_2.z;
              if (bVar9) {
                pLVar14 = (List_1_MV_WorldObject_ObjectLink_ *)(this->fields).hitColor.r;
                fVar15 = (this->fields).hitColor.g;
                fVar16 = (this->fields).hitColor.b;
                fVar17 = (this->fields).hitColor.a;
              }
              else {
                pLVar14 = (List_1_MV_WorldObject_ObjectLink_ *)(this->fields).missColor.r;
                fVar15 = (this->fields).missColor.g;
                fVar16 = (this->fields).missColor.b;
                fVar17 = (this->fields).missColor.a;
              }
              bVar9 = cRam_? == '\0';
              (this_02->fields)._.objectLinkRefs = pLVar14;
              (this_02->fields)._.ownerActorNr = (int32_t)fVar15;
              (this_02->fields)._.previewOwnerProfileId = (int32_t)fVar16;
              (this_02->fields)._.position.x = fVar17;
              if (bVar9) {
                func_?(&StringLiteral__TintColor);
                cRam_? = '\x01';
              }
              pLVar18 = (this_02->fields)._.outputLinkRefs;
              *(undefined8 *)&(this_02->fields)._.scale.y =
                   *(undefined8 *)&(this_02->fields)._.itemId;
              (this_02->fields)._.type = (int32_t)pLVar18;
              pLVar19 = (LineRenderer *)(this_02->fields)._.position.z;
              (this_02->fields).PositionChanged =
                   (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
              if (pLVar19 != (LineRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                LineRenderer_set_positionCount(pLVar19,2,(MethodInfo *)0x0);
                unaff_EBX = (MVWorldObjectClient__Class *)(this_02->fields)._.position.z;
                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_02,(MethodInfo *)0x0);
                if ((pTVar10 != (Transform *)0x0) &&
                   (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition(&VStack_5,pTVar10,(MethodInfo *)0x0),
                   unaff_EBX != (MVWorldObjectClient__Class *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                            ((LineRenderer *)unaff_EBX,1,*pVVar4,(MethodInfo *)0x0);
                  pLVar19 = (LineRenderer *)(this_02->fields)._.position.z;
                  if (pLVar19 != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                              (pLVar19,0,*(Vector3 *)&(this_02->fields)._.scale.y,(MethodInfo *)0x0);
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
                        iVar20 = (this->fields).currentAmmo.currentCryptoKey;
                        iVar21 = (this->fields).currentAmmo.hiddenValue;
                        iVar22 = (this->fields).currentAmmo.fakeValue;
                        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        OVar23.hiddenValue = iVar21;
                        OVar23.currentCryptoKey = iVar20;
                        OVar23.fakeValue = iVar22;
                        OVar23.inited = (this->fields).currentAmmo.inited;
                        OVar23._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                        pOVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                  ::ObscuredInt::ObscuredInt_op_Decrement
                                            ((ObscuredInt *)&stack0xffffffb8,OVar23,(MethodInfo *)0x0
                                            );
                        iVar20 = pOVar24->hiddenValue;
                        iVar21 = pOVar24->fakeValue;
                        bVar12 = pOVar24->inited;
                        uVar25 = *(undefined3 *)&pOVar24->field_0xd;
                        OVar23 = *pOVar24;
                        (this->fields).currentAmmo.currentCryptoKey = pOVar24->currentCryptoKey;
                        (this->fields).currentAmmo.hiddenValue = iVar20;
                        (this->fields).currentAmmo.fakeValue = iVar21;
                        (this->fields).currentAmmo.inited = bVar12;
                        *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar25;
                        iVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes
                                 ::ObscuredInt::ObscuredInt_op_Implicit_1(OVar23,(MethodInfo *)0x0);
                        if (0 < iVar20) {
                          return;
                        }
                        RStack_6.m_Direction.x =
                             (float)(this->klass->vtable).get_HasPercentageAmmo.methodPtr;
                        RStack_6.m_Origin.z = (float)this;
                        RStack_6.m_Origin.y = (float)&UNK_?;
                        cVar26 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)();
                        if (cVar26 != '\0') {
                          return;
                        }
                        pMVar1 = (this->fields)._._.owner;
                        if (pMVar1 != (MVPickupOwner *)0x0) {
                          x = (Object_1 *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_GetComponent_1
                                        ((Component *)pMVar1,
                                         MVEquipable_MethodInfo__UnityEngine__Component__GetComponent<MVEquipable>__
                                        );
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__UnityEngine__Object);
                          }
                          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality(x,(Object_1 *)0x0,(MethodInfo *)0x0);
                          if (bVar12 == 0) {
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
          VStack_2.y = in_stack_27;
          VStack_2.x = in_stack_28;
          VStack_2.z = (float)in_stack_29;
          pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
            this_02 = (MVWorldObjectClient *)
                      MVWorldObjectClientManager::
                      MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                                (pMVar30,in_stack_31,
                                 int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                                );
            pMVar30 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar30 != (MVWorldObjectClientManager *)0x0) {
              this_02 = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar30,(int32_t)this_02,(MethodInfo *)0x0);
              pMVar1 = (this->fields)._._.owner;
              if (pMVar1 != (MVPickupOwner *)0x0) {
                if (((((pMVar1->fields)._IsLocal_k__BackingField != 0) &&
                     (this_02 != (MVWorldObjectClient *)0x0)) &&
                    (unaff_EBX = this_02->klass,
                    (TypeInfo__MVAvatar->_1).naturalAligment <= (unaff_EBX->_1).naturalAligment)) &&
                   ((MVAvatar__Class *)
                    (unaff_EBX->_1).typeHierarchy[(TypeInfo__MVAvatar->_1).naturalAligment - 1] ==
                    TypeInfo__MVAvatar)) {
                  unaff_EBX = (MVWorldObjectClient__Class *)
                              MVWorldObjectClient::
                              MVWorldObjectClient_get_InteractionDataHandlerBase
                                        (this_02,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                     ((Object_1 *)unaff_EBX,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar12 != 0) {
                    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    if ((this_03 != (MVNetworkGame *)0x0) &&
                       (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                            (this_03,(MethodInfo *)0x0),
                       this_04 != (MVLocalPlayer *)0x0)) {
                      bVar12 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                         ((MVPlayer *)this_04,this_02,(MethodInfo *)0x0);
                      if (bVar12 != 0) goto code_?;
                      pMVar1 = (this->fields)._._.owner;
                      uVar32 = CONCAT44(this,&stack0xffffffb4);
                      puVar33 = (undefined4 *)
                                (*(code *)(this->klass->vtable).GetPackageData.method)
                                          (&stack0xffffffb4,this,this->klass[1]._0.image);
                      if (unaff_EBX != (MVWorldObjectClient__Class *)0x0) {
                        func_?(7,unaff_EBX,pMVar1,*puVar33,puVar33[1],puVar33[2],puVar33[3]
                                        ,puVar33[4],0);
                        fVar15 = RStack_6.m_Direction.y;
                        pMVar34 = (MVWorldObjectClient__Class *)TypeInfo__IBulletImpactVisualizer;
                        pMVar1 = (this->fields)._._.owner;
                        VStack_5.z = in_stack_35;
                        VStack_5.y = in_stack_36;
                        if ((pMVar1 != (MVPickupOwner *)0x0) &&
                           (pMVar37 = (pMVar1->fields)._.worldObjectParent,
                           pMVar37 != (MVWorldObjectClient *)0x0)) {
                          iVar20 = (pMVar37->fields)._.ownerActorNr;
                          fVar16 = RStack_6.m_Origin.x;
                          fVar17 = RStack_6.m_Origin.y;
                          pSVar3 = (SizeGunBase *)RStack_6.m_Origin.z;
                          pIVar38 = (Il2CppMethodPointer)RStack_6.m_Direction.x;
                          fVar39 = RStack_6.m_Direction.z;
                          iVar40 = func_?(this_02,TypeInfo__IBulletImpactVisualizer,uVar32,
                                                   in_stack_41,in_stack_42,
                                                   in_stack_31,in_stack_43,fStack_44,
                                                   fStack_45,IStack_46._0_4_,stack0xffffff80,
                                                   in_stack_28,in_stack_27,
                                                   in_stack_29,in_stack_47,
                                                   RStack_6.m_Origin.x,RStack_6.m_Origin.y,
                                                   RStack_6.m_Origin.z,RStack_6.m_Direction.x);
                          unaff_EBX = (MVWorldObjectClient__Class *)
                                      TypeInfo__IBulletImpactVisualizer;
                          if ((iVar40 == 0) ||
                             (iVar40 = func_?(this_02,TypeInfo__IBulletImpactVisualizer),
                             pMVar34 = unaff_EBX, iVar40 == 0)) goto code_?;
                          func_?(0,TypeInfo__IBulletImpactVisualizer,iVar40,
                                          in_stack_28,in_stack_27,in_stack_29,
                                          in_stack_47,fStack_44,fStack_45,IStack_46._0_4_,
                                          stack0xffffff40,in_stack_41,in_stack_42,
                                          in_stack_31,in_stack_43,in_stack_48,
                                          in_stack_49,in_stack_50,in_stack_51,
                                          VStack_5.y,VStack_5.z,fVar16,fVar17,pSVar3,pIVar38,
                                          CONCAT44(fVar39,fVar15),iVar20,0);
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
  pMVar34 = unaff_EBX;
code_?:
  func_?(this_02,pMVar34);
  pcVar52 = (code *)swi(3);
  (*pcVar52)();
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
                    (this,(this->klass->vtable).get_HasPercentageAmmo.methodPtr);
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

