
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Delete
               (CollectTheItemDropOff *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (worldObjectClientManager == (MVWorldObjectClientManager *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (worldObjectClientManager,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObject *)0x0) {
    bVar2 = (*(code *)pMVar3->klass[2]._0.declaringType)(pMVar3,worldObjectClientManager,errorText);
    return bVar2;
  }
  return 0;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Destroy
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_);
    func_?(&
                    MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  (this->fields).OnPickupCollected = (Action_1_Boolean_ *)0x0;
  func_?(&(this->fields).OnPickupCollected,0);
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar2 != (IEditModeUI *)0x0) {
      pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 != (Delegate *)0x0) {
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  else {
code_?:
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
code_?:
      MVWorldObjectClient::MVWorldObjectClient_Destroy
                ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      return;
    }
    pUVar5 = (this->fields)._._._.PositionChanged;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this->fields)._._._.PositionChanged = pUVar5;
      iVar4 = func_?();
      if (iVar4 == 0) goto code_?;
    }
    func_?();
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?(&(this->fields).cullingSubscriberBase,0);
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DropWoId(Int32) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_DropWoId
               (CollectTheItemDropOff *this,int32_t instigatorWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                   );
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemCollectTheItem);
    cRam_? = '\x01';
  }
  (this->fields).sendSignal = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,instigatorWoID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      iVar3 = MVWorldObjectClientManager::
              MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                        (pMVar1,instigatorWoID,(MethodInfo *)0x0);
      if (iVar3 == -1) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar4 == (PrefabPool *)0x0) goto code_?;
        original = (pPVar4->fields).collectTheItemParticles;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar5 = (Component *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                           );
        if (pCVar5 == (Component *)0x0) goto code_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar5,(MethodInfo *)0x0);
        pTVar7 = (Transform *)pMVar2[1].fields.ownerActorNr;
        if ((pTVar7 == (Transform *)0x0) ||
           (pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xfffffff0,pTVar7,(MethodInfo *)0x0),
           pTVar6 == (Transform *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar6,*pVVar8,(MethodInfo *)0x0);
        pAVar9 = (this->fields).OnPickupCollected;
        if (pAVar9 != (Action_1_Boolean_ *)0x0) {
          CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
          (*(pAVar9->fields)._._.invoke_impl)();
        }
      }
      pLVar10 = pMVar2[1].fields.inputLinkRefs;
      if (pLVar10 != (List_1_MV_WorldObject_Link_ *)0x0) {
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      ((GameObject *)pLVar10,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          return;
        }
        pLVar10 = pMVar2[1].fields.inputLinkRefs;
        if (pLVar10 != (List_1_MV_WorldObject_Link_ *)0x0) {
          x_00 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           ((GameObject *)pLVar10,
                            MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                           );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            return;
          }
          if (x_00 != (Object_1 *)0x0) {
            pCVar5 = x_00[4].fields.m_CachedPtr;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pCVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar11 != 0) {
              return;
            }
            if (pCVar5 == (Component *)0x0) {
              return;
            }
            if ((pCVar5->klass->_1).naturalAligment <
                (TypeInfo__PickupItemCollectTheItem->_1).naturalAligment) {
              return;
            }
            if ((pCVar5->klass->_1).typeHierarchy
                [(TypeInfo__PickupItemCollectTheItem->_1).naturalAligment - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCollectTheItem) {
              return;
            }
            if (x != (Object_1 *)0x0) {
              func_?();
              iVar12 = func_?();
              if (iVar12 != 0) {
                original_00 = *(Object **)(iVar12 + 0x238);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                this_00 = (Component *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    (original_00,
                                     UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                                    );
                if (this_00 != (Component *)0x0) {
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(this_00,(MethodInfo *)0x0);
                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar5,(MethodInfo *)0x0);
                  if ((pTVar6 != (Transform *)0x0) &&
                     (pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0),
                     pTVar7 != (Transform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar7,*pVVar8,(MethodInfo *)0x0);
                    pAVar9 = (this->fields).OnPickupCollected;
                    if (pAVar9 == (Action_1_Boolean_ *)0x0) {
                      return;
                    }
                    CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
                    (*(pAVar9->fields)._._.invoke_impl)();
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
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Initialize
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    func_?(&
                    MethodInfo__CollectTheItemDropOff__OnChunkEditReset_System__Object__EditStateEventArgs_
                   );
    func_?(&MethodInfo__CollectTheItemDropOff__OnCollected_bool_);
    func_?(&MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_);
    func_?(&
                    MethodInfo__CollectTheItemDropOff__SignalCallback_bool__bool__LogicObjectManager_
                   );
    func_?(&
                    MethodInfo__CollectTheItemDropOff__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    func_?(&TypeInfo__OutputSignalTransmitter);
    func_?(&StringLiteral_DropOffModel);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).OnPickupCollected;
  pUVar2 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (pUVar2,(Object *)this,MethodInfo__CollectTheItemDropOff__OnCollected_bool_,
             (MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    (this->fields).OnPickupCollected = (Action_1_Boolean_ *)0x0;
code_?:
    func_?();
    pCVar4 = (this->fields).triggerObject;
    if (pCVar4 == (CollectTheItemDropOffObject *)0x0) goto code_?;
    this_00 = (pCVar4->fields).triggerBoxEvents;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__CollectTheItemDropOff__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (this_00,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._._._.outputConnectorObject;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar6,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    value_00.z = 1.5;
    value_00.x = 1.5;
    value_00.y = 1.5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar7,value_00,(MethodInfo *)0x0);
    pMVar8 = MVBlueprintBase::MVBlueprintBase_GetChild
                        ((MVBlueprintBase *)this,StringLiteral_DropOffModel,(MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
    if (((pMVar8->klass->_1).naturalAligment < (TypeInfo__MVCubeModelInstance->_1).naturalAligment)
       || ((MVCubeModelInstance__Class *)
           (pMVar8->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
           TypeInfo__MVCubeModelInstance)) {
      func_?();
      goto code_?;
    }
    pMVar9 = pMVar8;
    (*(code *)(pMVar8->klass->vtable).set_Visible.method)();
    pCVar4 = (this->fields).triggerObject;
    pTVar7 = (pMVar8->fields).transform;
    if ((pCVar4 == (CollectTheItemDropOffObject *)0x0) ||
       (pGVar6 = (pCVar4->fields).cullingObject, pGVar6 == (GameObject *)0x0))
    goto code_?;
    p = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (pGVar6,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              (pTVar7,p,(MethodInfo *)0x0);
    uVar10 = (this->fields).minBounds.x.inited;
    uVar11 = (this->fields).minBounds.x.field_0x7;
    value_01._7_1_ = uVar11;
    value_01.inited = uVar10;
    uVar12 = (this->fields).minBounds.x.currentCryptoKey;
    uVar13 = (this->fields).minBounds.x.hiddenValue;
    uVar14 = (this->fields).minBounds.x.fakeValue;
    value_01.fakeValue = uVar14;
    value_01.hiddenValue = uVar13;
    value_01.currentCryptoKey = uVar12;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
    uVar15 = (this->fields).minBounds.y.inited;
    uVar16 = (this->fields).minBounds.y.field_0x7;
    value_02._7_1_ = uVar16;
    value_02.inited = uVar15;
    uVar17 = (this->fields).minBounds.y.currentCryptoKey;
    uVar18 = (this->fields).minBounds.y.hiddenValue;
    uVar19 = (this->fields).minBounds.y.fakeValue;
    value_02.fakeValue = uVar19;
    value_02.hiddenValue = uVar18;
    value_02.currentCryptoKey = uVar17;
    uVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(value_02,(MethodInfo *)0x0);
    uVar21 = (this->fields).minBounds.z.inited;
    uVar22 = (this->fields).minBounds.z.field_0x7;
    value_03._7_1_ = uVar22;
    value_03.inited = uVar21;
    uVar23 = (this->fields).minBounds.z.currentCryptoKey;
    uVar24 = (this->fields).minBounds.z.hiddenValue;
    uVar25 = (this->fields).minBounds.z.fakeValue;
    value_03.fakeValue = uVar25;
    value_03.hiddenValue = uVar24;
    value_03.currentCryptoKey = uVar23;
    uVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(value_03,(MethodInfo *)0x0);
    this_08 = (IntVector *)&stack0xffffffd4;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              (this_08,0,(uint)uVar20,(uint)uVar26,(MethodInfo *)0x0);
    uVar27 = (this->fields).maxBounds.x.inited;
    uVar28 = (this->fields).maxBounds.x.field_0x7;
    value_04._7_1_ = uVar28;
    value_04.inited = uVar27;
    uVar29 = (this->fields).maxBounds.x.currentCryptoKey;
    uVar30 = (this->fields).maxBounds.x.hiddenValue;
    uVar31 = (this->fields).maxBounds.x.fakeValue;
    value_04.fakeValue = uVar31;
    value_04.hiddenValue = uVar30;
    value_04.currentCryptoKey = uVar29;
    uVar32 = CONCAT44(&UNK_?,this_08);
    uVar20 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1(value_04,(MethodInfo *)0x0);
    uVar26 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1((this->fields).maxBounds.y,(MethodInfo *)0x0);
    uVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
             ObscuredShort_op_Implicit_1((this->fields).maxBounds.z,(MethodInfo *)0x0);
    uVar34._0_2_ = 0;
    uVar34._2_2_ = 0;
    iVar35 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xffffffdc,(uint)uVar20,(uint)uVar26,(uint)uVar33,
               (MethodInfo *)0x0);
    iVar36 = (this->fields).minCubes.currentCryptoKey;
    fVar37 = (float)(this->fields).minCubes.hiddenValue;
    fVar38 = (float)(this->fields).minCubes.fakeValue;
    method_01 = *(MethodInfo **)&(this->fields).minCubes.inited;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    value.hiddenValue = (int32_t)fVar37;
    value.currentCryptoKey = iVar36;
    value.fakeValue = (int32_t)fVar38;
    value._12_4_ = method_01;
    pOVar39 = (Object__Class *)
              Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    method_00 = TypeInfo__EditableCubeModelWrapper;
    value_05 = (Object__Class *)func_?();
    pMVar40 = (MonitorData *)uVar32;
    pOVar41 = value_05;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_05,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (value_05->_0).name = (char *)pMVar9;
    func_?();
    piVar42 = &(pMVar9->fields).interactionFlags;
    *(uint *)piVar42 = (uint)*piVar42 | 0x10;
    bVar43 = cRam_? == '\0';
    *(undefined4 *)((int)&(pMVar9->fields).interactionFlags + 4) =
         *(undefined4 *)((int)&(pMVar9->fields).interactionFlags + 4);
    if (bVar43) {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pOVar44 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar44,ExceptionArgument__Enum_obj,method_01);
    if (pOVar44 == (Object *)0x0) goto code_?;
    pOVar44[1].klass = pOVar41;
    func_?();
    pOVar44[1].monitor = pMVar40;
    *(int16_t *)&pOVar44[2].klass = (int16_t)((ulonglong)uVar32 >> 0x20);
    *(undefined4 *)((int)&pOVar44[2].klass + 2) = uVar34;
    *(int16_t *)((int)&pOVar44[2].monitor + 2) = iVar35;
    pOVar44[3].klass = pOVar39;
    pcVar45 = (pOVar41->_0).name;
    this_03 = (Func_1_Object_ *)func_?();
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (this_03,pOVar44,
               MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__,
               (MethodInfo *)0x0);
    if (pcVar45 == (char *)0x0) goto code_?;
    *(Func_1_Object_ **)(pcVar45 + 0xe0) = this_03;
    func_?();
    (this->fields).editableCubeModelWrapper = (EditableCubeModelWrapper *)pOVar41;
    func_?();
    pCVar4 = (this->fields).triggerObject;
    if (pCVar4 == (CollectTheItemDropOffObject *)0x0) goto code_?;
    pGVar6 = (pMVar9->fields).gameObject;
    pCVar46 = (pCVar4->fields).blinker;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    pMVar47 = (MeshFilter__Array *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren
                        (pGVar6,
                         UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                        );
    if (pCVar46 == (CollectTheItemBlinker *)0x0) goto code_?;
    (pCVar46->fields)._.meshFilters = pMVar47;
    func_?();
    pCVar4 = (this->fields).triggerObject;
    if ((pCVar4 == (CollectTheItemDropOffObject *)0x0) ||
       (pCVar46 = (pCVar4->fields).blinker, pCVar46 == (CollectTheItemBlinker *)0x0))
    goto code_?;
    (pCVar46->fields)._.visible = 1;
    MVar48 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar48 == MVGameMode__Enum_Edit) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) goto code_?;
      pDVar3 = (Delegate *)func_?();
      pUVar2 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar3,(Delegate *)pUVar2,(MethodInfo *)0x0);
      if (pDVar3 != (Delegate *)0x0) {
        iVar49 = func_?();
        if (iVar49 == 0) goto code_?;
      }
      func_?();
      pCVar4 = (this->fields).triggerObject;
      if ((pCVar4 == (CollectTheItemDropOffObject *)0x0) ||
         (this_01 = (pCVar4->fields).greyout, this_01 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_01,(MethodInfo *)0x0);
      pEVar50 = (this->fields).editableCubeModelWrapper;
      if (pEVar50 == (EditableCubeModelWrapper *)0x0) goto code_?;
      this_02 = (pEVar50->fields).cubeModelBase;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnChunkEditReset_System__Object__EditStateEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_02 == (MVCubeModelInstance *)0x0) goto code_?;
      MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                ((MVCubeModelBase *)this_02,(EventHandler_1_EditStateEventArgs_ *)pUVar5,
                 (MethodInfo *)0x0);
    }
    bVar51 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
    if (bVar51 == 0) {
code_?:
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      pTVar7 = (this->fields)._._._.transform;
      if (pTVar7 == (Transform *)0x0) goto code_?;
      pVVar52 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffc8,pTVar7,(MethodInfo *)0x0);
      uVar34 = pVVar52->y;
      fVar37 = pVVar52->z;
      this_04 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                (this_04,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_,
                 (MethodInfo *)0x0);
      pCVar53 = TypeInfo__CullingSubscriberBase;
      this_05 = (CullingSubscriberBase *)func_?();
      position.y = (float)uVar34;
      position.x = (float)pCVar53;
      position.z = fVar37;
      CullingSubscriberBase::CullingSubscriberBase__ctor_2
                (this_05,3.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_04,
                 (MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = this_05;
      func_?();
      pUVar54 = (this->fields)._._._.PositionChanged;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar54,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (this->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
        func_?();
        this_06 = (Action_3_Int32_Int32_ByteEnum_ *)func_?();
        mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::Action_3_Int32_Int32_ByteEnum___ctor
                  (this_06,(Object *)this,
                   MethodInfo__CollectTheItemDropOff__SignalCallback_bool__bool__LogicObjectManager_
                   ,(MethodInfo *)0x0);
        pIVar55 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                            ((MVWorldObject *)this,0,
                             (Action_3_Boolean_Boolean_LogicObjectManager_ *)this_06,
                             (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar55;
        func_?();
        iVar36 = (this->fields)._._._._.id;
        this_07 = (WorldObjectClientRef_1_System_Object_ *)
                  func_?(TypeInfo__OutputSignalTransmitter);
        WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object___ctor
                  (this_07,iVar36,(MethodInfo *)0x0);
        (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_07;
        func_?();
        return;
      }
      pUVar54 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar54 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (this->fields)._._._.PositionChanged = pUVar54;
        iVar49 = func_?();
        if (iVar49 != 0) goto code_?;
      }
      goto code_?;
    }
    pAVar1 = (this->fields).OnPickupCollected;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(this->klass->vtable).get_RunTimeData.method)();
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar44 = Extensions::Extensions_GetObscuredType
                        (hashtable,StringLiteral_isActive,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    if (pOVar44 == (Object *)0x0) goto code_?;
    if ((pOVar44->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      pOVar56 = (ObscuredBool *)func_?();
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
      ObscuredBool_op_Implicit_1(*pOVar56,(MethodInfo *)0x0);
      if (pAVar1 == (Action_1_Boolean_ *)0x0) goto code_?;
      (*(pAVar1->fields)._._.invoke_impl)();
      goto code_?;
    }
  }
  else {
    pAVar1 = (Action_1_Boolean_ *)func_?();
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
      (this->fields).OnPickupCollected = pAVar1;
      iVar49 = func_?();
      if (iVar49 != 0) goto code_?;
    }
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar57 = (code *)swi(3);
  (*pcVar57)();
  return;
}


/* Void OnChunkEditReset(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnChunkEditReset
               (CollectTheItemDropOff *this,Object *sender,EditStateEventArgs *args,
               MethodInfo *method)

{
  CollectTheItemDropOff_ReInitializeVisuals(this,(MethodInfo *)0x0);
  return;
}


/* Void OnCollected(Boolean) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnCollected
               (CollectTheItemDropOff *this,bool shouldbeActiveOnCollect,MethodInfo *method)

{
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_00 = (pCVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,shouldbeActiveOnCollect,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
       (this_01 = (pCVar1->fields)._.mainCollider, this_01 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_01,shouldbeActiveOnCollect,(MethodInfo *)0x0);
      pCVar1 = (this->fields).triggerObject;
      if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
         (this_02 = (pCVar1->fields).blinker, this_02 != (CollectTheItemBlinker *)0x0)) {
        if (shouldbeActiveOnCollect != 0) {
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_02,BlinkType__Enum_DropOffCollectedItem,2.0,
                     (MethodInfo *)0x0);
        }
        MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar2 != MVGameMode__Enum_Edit) {
          shouldbeActiveOnCollect = 1;
        }
        if (shouldbeActiveOnCollect == 0) {
          pCVar1 = (this->fields).triggerObject;
          if ((pCVar1 == (CollectTheItemDropOffObject *)0x0) ||
             (this_03 = (pCVar1->fields).greyout, this_03 == (GreyOutObjectScript *)0x0))
          goto code_?;
          GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_03,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnEditModeChange
               (CollectTheItemDropOff *this,EditModeChangeArgs arg,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields).triggerObject;
  if ((pCVar2 != (CollectTheItemDropOffObject *)0x0) &&
     (pCVar3 = (pCVar2->fields).editCollider, pCVar3 != (Collider *)0x0)) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pCStack_4 = pCVar3;
    puStack_1 = (undefined1 *)(uint)(arg.playInEditor == 0);
    (*pcRam_?)();
    return;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnEnterObject
               (CollectTheItemDropOff *this,EditorStateMachine *e,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pIStack_1 = (pEStack_2->klass->vtable).OnExitObject.methodPtr;
    pEStack_3 = e;
    bVar4 = (*(code *)(pEStack_2->klass->vtable).OnEnterObject.method)();
    return bVar4;
  }
  uVar5 = func_?(&pEStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnExitObject
               (CollectTheItemDropOff *this,EditorStateMachine *e,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pIStack_1 = pEStack_2->klass[1]._0.image;
    pEStack_3 = e;
    bVar4 = (*(code *)(pEStack_2->klass->vtable).OnExitObject.method)();
    return bVar4;
  }
  uVar5 = func_?(&pEStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnPositionChanged
               (CollectTheItemDropOff *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields).cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnStateChanged
               (CollectTheItemDropOff *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
    pCVar2 = (this->fields).triggerObject;
    if ((pCVar2 != (CollectTheItemDropOffObject *)0x0) &&
       (this_00 = (pCVar2->fields).cullingObject, this_00 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReInitializeVisuals() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_ReInitializeVisuals
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_00 = (pCVar1->fields).greyout, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials(this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if (pCVar1 != (CollectTheItemDropOffObject *)0x0) {
      pEVar2 = (this->fields).editableCubeModelWrapper;
      pCVar3 = (pCVar1->fields).blinker;
      if (((pEVar2 != (EditableCubeModelWrapper *)0x0) &&
          (pMVar4 = (pEVar2->fields).cubeModelBase, pMVar4 != (MVCubeModelInstance *)0x0)) &&
         (this_01 = (pMVar4->fields)._._.gameObject, this_01 != (GameObject *)0x0)) {
        pMVar5 = (MeshFilter__Array *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren
                           (this_01,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
        if (pCVar3 != (CollectTheItemBlinker *)0x0) {
          (pCVar3->fields)._.meshFilters = pMVar5;
          func_?(&(pCVar3->fields)._.meshFilters);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Reset
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_01 = (pCVar1->fields).visualObject, this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
       (this_02 = (pCVar1->fields)._.mainCollider, this_02 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_02,1,(MethodInfo *)0x0);
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 != MVGameMode__Enum_Edit) {
        return;
      }
      pCVar1 = (this->fields).triggerObject;
      if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
         (this_03 = (pCVar1->fields).greyout, this_03 != (GreyOutObjectScript *)0x0)) {
        GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_03,(MethodInfo *)0x0);
        pAVar3 = (this->fields).OnPickupCollected;
        if (pAVar3 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar3->fields)._._.invoke_impl)();
        }
        pCVar1 = (this->fields).triggerObject;
        if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
           ((pCVar1->fields).blinker != (CollectTheItemBlinker *)0x0)) {
          uVar4 = *unaff_FS_OFFSET;
          *unaff_FS_OFFSET = &stack0xfffffff8;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                           );
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)(in_stack_5->fields).blinkers;
          if (this_00 !=
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                                );
            if (this_04 !=
                (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
              StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)&stack0xffffffe0,
                         (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)this_04,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                        );
              while( true ) {
                bVar6 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                        UInt32,System::Object]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                    *)&stack0xffffffd0,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                                  );
                if (bVar6 == 0) break;
                BlinkerBase::BlinkerBase_StopBlinking
                          (in_stack_5,BlinkType__Enum_Damage,(MethodInfo *)0x0);
              }
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffd0,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                         ,in_stack_7);
              *unaff_FS_OFFSET = uVar4;
              return;
            }
          }
          uVar4 = func_?();
          func_?(uVar4);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_SetupCulling
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_
                   );
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.transform;
  if (this_00 == (Transform *)0x0) {
    func_?();
    pCStack1 = this;
  }
  else {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar2->x;
    uStack_4 = pVVar2->y;
    fVar5 = pVVar2->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_,
               (MethodInfo *)0x0);
    this_02 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.z = fVar5;
    uStack_4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    position.x = (float)(undefined4)uVar3;
    position.y = (float)uStack_4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_02,3.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_02;
    func_?();
    pUVar6 = (this->fields)._._._.PositionChanged;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar6,(Delegate *)this_03,(MethodInfo *)0x0);
    pUVar7 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (unaff_ESI == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      pDStack8 = (Delegate *)&(this->fields)._._._.PositionChanged;
      pCStack1 = (CollectTheItemDropOff *)unaff_ESI;
      func_?();
      return;
    }
    pCStack1 =
         (CollectTheItemDropOff *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pDStack8 = unaff_ESI;
    pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    pCStack1 = (CollectTheItemDropOff *)pUVar7;
    if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this->fields)._._._.PositionChanged = pUVar6;
      pUVar7 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      pCStack1 =
           (CollectTheItemDropOff *)
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      pDStack8 = unaff_ESI;
      iVar9 = func_?();
      pCStack1 = (CollectTheItemDropOff *)pUVar7;
      if (iVar9 != 0) {
        pDStack8 = (Delegate *)&(this->fields)._._._.PositionChanged;
        pCStack1 = (CollectTheItemDropOff *)iVar9;
        func_?();
        return;
      }
    }
  }
  pDStack8 = unaff_ESI;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_SignalCallback
               (CollectTheItemDropOff *this,bool b,bool wasHot,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send
              (this_00,(this->fields).sendSignal,(MethodInfo *)0x0);
    (this->fields).sendSignal = 0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TriggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_TriggerBoxEvents_TriggerEnter
               (CollectTheItemDropOff *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemCollectTheItem);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) &&
      (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0),
      pMVar1 != (MVWorldObject *)0x0)) &&
     (this_00 = pMVar1[1].fields.inputLinkRefs, this_00 != (List_1_MV_WorldObject_Link_ *)0x0)) {
    pOVar2 = (Object_1 *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       ((GameObject *)this_00,
                        MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (pOVar2 == (Object_1 *)0x0) goto code_?;
      pOVar2 = pOVar2[4].fields.m_CachedPtr;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (((bVar3 == 0) && (pOVar2 != (Object_1 *)0x0)) &&
         (((TypeInfo__PickupItemCollectTheItem->_1).naturalAligment <=
           (pOVar2->klass->_1).naturalAligment &&
          (ppIVar4 = (pOVar2->klass->_1).typeHierarchy,
          ppIVar4[(TypeInfo__PickupItemCollectTheItem->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__PickupItemCollectTheItem)))) {
        if ((ppIVar4[(TypeInfo__PickupItemCollectTheItem->_1).naturalAligment - 1] !=
             (Il2CppClass *)TypeInfo__PickupItemCollectTheItem) || (iRam_? == 0))
        goto code_?;
        if (*(Object_1__Class **)(iRam_? + 0x100) == pOVar2[10].klass) {
          *(undefined1 *)&pOVar2[0xb].monitor = 0;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                    (this_02,iRam_?,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CollectTheItemDropOff(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff__ctor
               (CollectTheItemDropOff *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollectTheItemDropOffObject);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1._0_2_ = 0;
  uVar1._2_2_ = 0;
  uVar2._0_2_ = 0;
  uVar2._2_1_ = 0;
  uVar2._3_1_ = 0;
  uVar3._0_2_ = 0;
  uVar3._2_2_ = 0;
  uVar4._0_2_ = 0;
  uVar4._2_1_ = 0;
  uVar4._3_1_ = 0;
  OVar5.currentCryptoKey = 0;
  OVar5.hiddenValue = 0;
  OVar5.fakeValue = 0;
  OVar5.inited = 0;
  OVar5._7_1_ = 0;
  ObscuredIntVector::ObscuredIntVector__ctor_1
            ((ObscuredIntVector *)&stack0xffffffd4,-5,-4,-6,(MethodInfo *)0x0);
  (this->fields).minBounds.x.currentCryptoKey = (int16_t)uVar1;
  (this->fields).minBounds.x.hiddenValue = SUB42(uVar1,2);
  (this->fields).minBounds.x.fakeValue = (int16_t)uVar2;
  (this->fields).minBounds.x.inited = SUB41(uVar2,2);
  (this->fields).minBounds.x.field_0x7 = SUB41(uVar2,3);
  (this->fields).minBounds.y.currentCryptoKey = (int16_t)uVar3;
  (this->fields).minBounds.y.hiddenValue = SUB42(uVar3,2);
  (this->fields).minBounds.y.fakeValue = (int16_t)uVar4;
  (this->fields).minBounds.y.inited = SUB41(uVar4,2);
  (this->fields).minBounds.y.field_0x7 = SUB41(uVar4,3);
  (this->fields).minBounds.z = OVar5;
  OStack_6.currentCryptoKey = 0;
  OStack_6.hiddenValue = 0;
  OStack_6.fakeValue = 0;
  OStack_6.inited = 0;
  OStack_6._7_1_ = 0;
  OStack_7.currentCryptoKey = 0;
  OStack_7.hiddenValue = 0;
  OStack_7.fakeValue = 0;
  OStack_7.inited = 0;
  OStack_7._7_1_ = 0;
  puStack_8._0_2_ = 0;
  puStack_8._2_2_ = 0;
  iVar9 = 0;
  bVar10 = 0;
  uVar11 = 0;
  ObscuredIntVector::ObscuredIntVector__ctor_1
            ((ObscuredIntVector *)&OStack_6,7,8,6,(MethodInfo *)0x0);
  (this->fields).maxBounds.x.currentCryptoKey = OStack_6.currentCryptoKey;
  (this->fields).maxBounds.x.hiddenValue = OStack_6.hiddenValue;
  (this->fields).maxBounds.x.fakeValue = OStack_6.fakeValue;
  (this->fields).maxBounds.x.inited = OStack_6.inited;
  (this->fields).maxBounds.x.field_0x7 = OStack_6._7_1_;
  (this->fields).maxBounds.y.currentCryptoKey = OStack_7.currentCryptoKey;
  (this->fields).maxBounds.y.hiddenValue = OStack_7.hiddenValue;
  (this->fields).maxBounds.y.fakeValue = OStack_7.fakeValue;
  (this->fields).maxBounds.y.inited = OStack_7.inited;
  (this->fields).maxBounds.y.field_0x7 = OStack_7._7_1_;
  (this->fields).maxBounds.z = _puStack_34;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  stack0xffffffd0 = (ObscuredInt *)&puStack_12;
  pOVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&puStack_12,10,(MethodInfo *)0x0);
  iVar14 = pOVar13->hiddenValue;
  iVar15 = pOVar13->fakeValue;
  bVar16 = pOVar13->inited;
  uVar17 = *(undefined3 *)&pOVar13->field_0xd;
  (this->fields).minCubes.currentCryptoKey = pOVar13->currentCryptoKey;
  (this->fields).minCubes.hiddenValue = iVar14;
  (this->fields).minCubes.fakeValue = iVar15;
  (this->fields).minCubes.inited = bVar16;
  *(undefined3 *)&(this->fields).minCubes.field_0xd = uVar17;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar18 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar18 == (PrefabPool *)0x0) {
    func_?();
    pCStack_19 = extraout_EDX;
    pCStack_20 = unaff_EDI;
  }
  else {
    stack0xffffffd0 = &UNK_?;
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar18->fields).collectTheItemDropOff,
               worldObjects,(MethodInfo *)0x0);
    piVar21 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar21 = (uint)*piVar21 | 0x1000;
    piVar21 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar21 = (uint)*piVar21 | 8;
    piVar21 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar21 = (uint)*piVar21 | 0x8000;
    piVar21 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar21 = (uint)*piVar21 | 0x10000;
    piVar21 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar21 = (uint)*piVar21 & 0xffffdfff;
    pCStack_19 = (CollectTheItemDropOffObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    if (pCStack_19 == (CollectTheItemDropOffObject *)0x0) {
      (this->fields).triggerObject = (CollectTheItemDropOffObject *)0x0;
code_?:
      pCStack_20 = (CollectTheItemDropOffObject__Class *)&(this->fields).triggerObject;
      func_?();
      return;
    }
    pCStack_20 = TypeInfo__CollectTheItemDropOffObject;
    if (((TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pCStack_19->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pCStack_19->klass)->_1).typeHierarchy
        [(TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__CollectTheItemDropOffObject)) {
      (this->fields).triggerObject = pCStack_19;
      pCStack_20 = TypeInfo__CollectTheItemDropOffObject;
      if (((TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pCStack_19->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pCStack_19->klass)->_1).typeHierarchy
          [(TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__CollectTheItemDropOffObject)) goto code_?;
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Boolean get_DoOnce() */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_DoOnce
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._.blueprintData;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_doOnce,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_IsActive
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    func_?(&StringLiteral_isActive);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_isActive,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else if ((pOVar1->klass->_0).element_class ==
           (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
    pOVar2 = (ObscuredBool *)func_?();
    bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(*pOVar2,(MethodInfo *)0x0);
    return bVar3;
  }
  func_?(pOVar1);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::CollectTheItemDropOff::
          CollectTheItemDropOff_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,CollectTheItemDropOff *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 3.5;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_set_InputSignalReceiver
               (CollectTheItemDropOff *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,value);
  return;
}

