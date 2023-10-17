
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
    if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
    pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    if (this_01 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    if ((pDVar3 == (Delegate *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
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
    if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
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
code_?:
    func_?();
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
  this_00 = this;
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
        if ((this->fields).OnPickupCollected != (Action_1_Boolean_ *)0x0) {
          pAVar9 = (this->fields).OnPickupCollected;
          CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
          (*(pAVar9->fields)._._.invoke_impl)();
        }
      }
      pLVar10 = pMVar2[1].fields.inputLinkRefs;
      if (pLVar10 != (List_1_MV_WorldObject_Link_ *)0x0) {
        x = (CollectTheItemDropOff *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      ((GameObject *)pLVar10,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        this = x;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          this = (CollectTheItemDropOff *)&UNK_?;
          func_?();
        }
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          return;
        }
        pLVar10 = pMVar2[1].fields.inputLinkRefs;
        if (pLVar10 != (List_1_MV_WorldObject_Link_ *)0x0) {
          pOVar12 = (Object_1 *)
                    Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                              ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pLVar10,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (pOVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            return;
          }
          if (pOVar12 != (Object_1 *)0x0) {
            pOVar12 = (Object_1 *)pOVar12[4].monitor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (pOVar12,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar11 != 0) {
              return;
            }
            if (pOVar12 == (Object_1 *)0x0) {
              return;
            }
            if ((pOVar12->klass->_1).typeHierarchyDepth <
                (TypeInfo__PickupItemCollectTheItem->_1).typeHierarchyDepth) {
              return;
            }
            if ((pOVar12->klass->_1).typeHierarchy
                [(TypeInfo__PickupItemCollectTheItem->_1).typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__PickupItemCollectTheItem) {
              return;
            }
            if (this != (CollectTheItemDropOff *)0x0) {
              func_?();
              pCVar5 = (Component *)func_?();
              iVar13 = func_?();
              if (iVar13 != 0) {
                original_00 = *(Object **)(iVar13 + 0x224);
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                this_01 = (Component *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    (original_00,
                                     UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                                    );
                if ((((this_01 != (Component *)0x0) &&
                     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform(this_01,(MethodInfo *)0x0),
                     pCVar5 != (Component *)0x0)) &&
                    (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform(pCVar5,(MethodInfo *)0x0),
                    pTVar6 != (Transform *)0x0)) &&
                   (pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0),
                   pTVar7 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar7,*pVVar8,(MethodInfo *)0x0);
                  if ((this_00->fields).OnPickupCollected != (Action_1_Boolean_ *)0x0) {
                    pAVar9 = (this_00->fields).OnPickupCollected;
                    CollectTheItemDropOff_get_DoOnce(this_00,(MethodInfo *)0x0);
                    (*(pAVar9->fields)._._.invoke_impl)();
                    return;
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
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Initialize
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  this_01 = this;
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
                    MethodInfo__CollectTheItemDropOff__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
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
  this_02 = (Action_1_Boolean___Class *)(this->fields).OnPickupCollected;
  pUVar1 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
  if (pUVar1 != (UnityAction_1_System_ByteEnum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (pUVar1,(Object *)this,MethodInfo__CollectTheItemDropOff__OnCollected_bool_,
               (MethodInfo *)0x0);
    pAVar2 = (Action_1_Boolean___Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)this_02,(Delegate *)pUVar1,(MethodInfo *)0x0);
    this_02 = TypeInfo__System__Action<bool>;
    if (pAVar2 == (Action_1_Boolean___Class *)0x0) {
      (this->fields).OnPickupCollected = (Action_1_Boolean_ *)0x0;
      pAStack_3 = (Action_1_Boolean___Class *)0x0;
code_?:
      pAStack_4 = (Action_1_Boolean___Class *)&(this->fields).OnPickupCollected;
      func_?();
      pCVar5 = (this->fields).triggerObject;
      if (pCVar5 != (CollectTheItemDropOffObject *)0x0) {
        this_02 = (Action_1_Boolean___Class *)(pCVar5->fields).triggerBoxEvents;
        pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        if (pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__CollectTheItemDropOff__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (this_02 != (Action_1_Boolean___Class *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      ((TriggerBoxEvents *)this_02,(EventHandler_1_TriggerEventArgs_ *)pUVar6,
                       (MethodInfo *)0x0);
            pGVar7 = (this->fields)._._._.outputConnectorObject;
            if (pGVar7 != (GameObject *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                value_00.z = 1.5;
                value_00.x = 1.5;
                value_00.y = 1.5;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar8,value_00,(MethodInfo *)0x0);
                this_02 = (Action_1_Boolean___Class *)
                          MVBlueprintBase::MVBlueprintBase_GetChild
                                    ((MVBlueprintBase *)this,StringLiteral_DropOffModel,
                                     (MethodInfo *)0x0);
                if (this_02 != (Action_1_Boolean___Class *)0x0) {
                  pMVar9 = (MVCubeModelBase__Class *)(this_02->_0).image;
                  pMVar10 = TypeInfo__MVCubeModelInstance;
                  if (((pMVar9->_1).typeHierarchyDepth <
                       (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
                     ((MVCubeModelInstance__Class *)
                      (pMVar9->_1).typeHierarchy
                      [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
                      TypeInfo__MVCubeModelInstance)) goto code_?;
                  pMVar9 = (MVCubeModelBase__Class *)(this_02->_0).image;
                  pAStack_11 = this_02;
                  (*(pMVar9->vtable).set_Visible.methodPtr)
                            (this_02,1,(pMVar9->vtable).set_Visible.method);
                  pCVar5 = (this->fields).triggerObject;
                  pTVar8 = (Transform *)(this_02->_1).static_fields_size;
                  if ((pCVar5 != (CollectTheItemDropOffObject *)0x0) &&
                     (pGVar7 = (pCVar5->fields).cullingObject, pGVar7 != (GameObject *)0x0)) {
                    p = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                    if (pTVar8 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                                (pTVar8,p,(MethodInfo *)0x0);
                      value_01 = (this->fields).minBounds.x;
                      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort
                                       );
                      }
                      uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredShort::ObscuredShort_op_Implicit_1
                                         (value_01,(MethodInfo *)0x0);
                      uVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredShort::ObscuredShort_op_Implicit_1
                                         ((this->fields).minBounds.y,(MethodInfo *)0x0);
                      uVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredShort::ObscuredShort_op_Implicit_1
                                         ((this->fields).minBounds.z,(MethodInfo *)0x0);
                      pAStack_4 = (Action_1_Boolean___Class *)0x0;
                      pAStack_3 = (Action_1_Boolean___Class *)((uint)pAStack_3 & 0xffff0000);
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                ((IntVector *)&pAStack_4,(uint)uVar12,(uint)uVar13,(uint)uVar14,
                                 (MethodInfo *)0x0);
                      pOVar15 = &(this->fields).maxBounds;
                      pMVar16 = *(MethodInfo **)&pOVar15->x;
                      uVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredShort::ObscuredShort_op_Implicit_1
                                         (pOVar15->x,(MethodInfo *)0x0);
                      uVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredShort::ObscuredShort_op_Implicit_1
                                         ((this->fields).maxBounds.y,(MethodInfo *)0x0);
                      uVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredShort::ObscuredShort_op_Implicit_1
                                         ((this->fields).maxBounds.z,(MethodInfo *)0x0);
                      IStack_17.x = 0;
                      IStack_17.y = 0;
                      IStack_17.z = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                (&IStack_17,(uint)uVar12,(uint)uVar13,(uint)uVar14,(MethodInfo *)0x0
                                );
                      iVar18 = (this->fields).minCubes.currentCryptoKey;
                      iVar19 = (this->fields).minCubes.hiddenValue;
                      iVar20 = (this->fields).minCubes.fakeValue;
                      uVar21 = *(undefined4 *)&(this->fields).minCubes.inited;
                      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                          cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      value.hiddenValue = iVar19;
                      value.currentCryptoKey = iVar18;
                      value.fakeValue = iVar20;
                      value._12_4_ = uVar21;
                      _Stack_1c.__klassIndex =
                           Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                      pEVar22 = (EditableCubeModelWrapper *)func_?();
                      this_02 = (Action_1_Boolean___Class *)0x0;
                      pEStack_23 = pEVar22;
                      if (pEVar22 != (EditableCubeModelWrapper *)0x0) {
                        uStack_24._0_2_ = IStack_17.x;
                        uStack_24._2_2_ = IStack_17.y;
                        uStack_25 = (undefined *)CONCAT22(IStack_17.z,(undefined2)uStack_25);
                        uStack_24._4_4_ = pAStack_4;
                        iVar26 = (int16_t)pAStack_3;
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                  ((Object *)pEVar22,ExceptionArgument__Enum_obj,pMVar16);
                        pAVar2 = pAStack_11;
                        (pEVar22->fields).cubeModelBase = (MVCubeModelInstance *)pAStack_11;
                        func_?(&pEVar22->fields,pAStack_11);
                        uVar27._0_1_ = (pAVar2->_1).naturalAligment;
                        uVar27._1_1_ = (pAVar2->_1).packingSize;
                        uVar27._2_2_ = *(undefined2 *)&(pAVar2->_1).field_0x56;
                        uVar27 = uVar27 | 0x10;
                        (pAVar2->_1).naturalAligment = (char)uVar27;
                        (pAVar2->_1).packingSize = (char)(uVar27 >> 8);
                        *(short *)&(pAVar2->_1).field_0x56 = (short)(uVar27 >> 0x10);
                        bVar28 = cRam_? == '\0';
                        (pAVar2->vtable).Equals.methodPtr = (pAVar2->vtable).Equals.methodPtr;
                        if (bVar28) {
                          func_?(&TypeInfo__System__Func<IModelingConstraint>);
                          func_?(&
                                          MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__
                                         );
                          func_?(&TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0)
                          ;
                          cRam_? = '\x01';
                        }
                        pMVar16 = (MethodInfo *)&UNK_?;
                        this_02 = (Action_1_Boolean___Class *)
                                  func_?(
                                                 TypeInfo__EditableCubeModelWrapper____c__DisplayClass7_0
                                                 );
                        if (this_02 != (Action_1_Boolean___Class *)0x0) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                    ((Object *)this_02,ExceptionArgument__Enum_obj,pMVar16);
                          (((MVCubeModelBase__Fields *)&(this_02->_0).name)->_)._.id =
                               (int32_t)pEStack_23;
                          func_?((MVCubeModelBase__Fields *)&(this_02->_0).name,pEStack_23);
                          (this_02->_0).namespaze = (char *)uStack_24._4_4_;
                          *(int16_t *)&(this_02->_0).byval_arg.data = iVar26;
                          *(undefined4 *)((int)&(this_02->_0).byval_arg.data + 2) =
                               (undefined4)uStack_24;
                          *(undefined2 *)&(this_02->_0).byval_arg.type = uStack_25._2_2_;
                          (this_02->_0).this_arg.data = _Stack_1c;
                          pMVar29 = (pEStack_23->fields).cubeModelBase;
                          this._1_1_ = (undefined1)((uint)pMVar29 >> 8);
                          this._2_2_ = (undefined2)((uint)pMVar29 >> 0x10);
                          _Stack_1c.dummy =
                               (void *)func_?(TypeInfo__System__Func<IModelingConstraint>);
                          if (_Stack_1c.dummy != (void *)0x0) {
                            mscorlib.dll::System::Reflection::
                            RuntimePropertyInfo+StaticGetter`1[System::Object]::
                            RuntimePropertyInfo_StaticGetter_1_System_Object___ctor
                                      ((RuntimePropertyInfo_StaticGetter_1_System_Object_ *)
                                       _Stack_1c.typeHandle,(Object *)this_02,
                                       MethodInfo__EditableCubeModelWrapper____c__DisplayClass7_0___SetConstraints_b__0__
                                       ,(MethodInfo *)0x0);
                            if (pMVar29 != (MVCubeModelInstance *)0x0) {
                              (pMVar29->fields)._._ModelingConstraintBuilder_k__BackingField =
                                   (Func_1_IModelingConstraint_ *)_Stack_1c;
                              func_?(&(pMVar29->fields)._.
                                               _ModelingConstraintBuilder_k__BackingField,
                                              _Stack_1c.dummy);
                              (this_01->fields).editableCubeModelWrapper = pEStack_23;
                              func_?(&(this_01->fields).editableCubeModelWrapper,pEStack_23)
                              ;
                              pCVar5 = (this_01->fields).triggerObject;
                              this_02 = (Action_1_Boolean___Class *)0x0;
                              if (pCVar5 != (CollectTheItemDropOffObject *)0x0) {
                                source = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
                                         (pAVar2->_1).element_size;
                                this_02 = (Action_1_Boolean___Class *)(pCVar5->fields).blinker;
                                if (source != (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)0x0) {
                                  pLVar30 = (List_1_MV_WorldObject_Link_ *)
                                            Newtonsoft::Json::Linq::LinqExtensions::
                                            LinqExtensions_Values_2
                                                      (source,
                                                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                                  );
                                  if (this_02 != (Action_1_Boolean___Class *)0x0) {
                                    (this_02->_0).this_arg.data.typeHandle =
                                         (Il2CppMetadataTypeHandle)pLVar30;
                                    func_?(&(this_02->_0).this_arg,pLVar30);
                                    pCVar5 = (this_01->fields).triggerObject;
                                    if ((pCVar5 != (CollectTheItemDropOffObject *)0x0) &&
                                       (pCVar31 = (pCVar5->fields).blinker,
                                       pCVar31 != (CollectTheItemBlinker *)0x0)) {
                                      (pCVar31->fields)._.visible = 1;
                                      MVar32 = MVGameControllerBase::
                                               MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                                      if (MVar32 == MVGameMode__Enum_Edit) {
                                        if (cRam_? == '\0') {
                                          func_?(&TypeInfo__MVGameControllerBase);
                                          cRam_? = '\x01';
                                        }
                                        pAVar2 = (Action_1_Boolean___Class *)
                                                  TypeInfo__MVGameControllerBase->static_fields->
                                                  _EditModeUI_k__BackingField;
                                        if (pAVar2 != (Action_1_Boolean___Class *)0x0) {
                                          a = (Delegate *)
                                              func_?(2,TypeInfo__IEditModeUI,pAVar2);
                                          pUVar1 = (UnityAction_1_System_ByteEnum_ *)
                                                    func_?(
                                                  TypeInfo__System__Action<EditModeChangeArgs>);
                                          this_02 = (Action_1_Boolean___Class *)0x0;
                                          if (pUVar1 != (UnityAction_1_System_ByteEnum_ *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`1[System::ByteEnum]::
                                            UnityAction_1_System_ByteEnum___ctor
                                                      (pUVar1,(Object *)this_01,
                                                                                                              
                                                  MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_
                                                  ,(MethodInfo *)0x0);
                                            this_02 = (Action_1_Boolean___Class *)
                                                      mscorlib.dll::System::Delegate::
                                                      Delegate_Combine(a,(Delegate *)pUVar1,
                                                                       (MethodInfo *)0x0);
                                            this._0_1_ = SUB41(
                                                  TypeInfo__System__Action<EditModeChangeArgs>,0);
                                            this._1_1_ = (undefined1)
                                                         ((uint)
                                                  TypeInfo__System__Action<EditModeChangeArgs> >> 8)
                                            ;
                                            this._2_2_ = (undefined2)
                                                         ((uint)
                                                  TypeInfo__System__Action<EditModeChangeArgs> >>
                                                  0x10);
                                            if (this_02 == (Action_1_Boolean___Class *)0x0) {
                                              pAStack_3 = (Action_1_Boolean___Class *)0x0;
                                            }
                                            else {
                                              pAStack_3 = (Action_1_Boolean___Class *)
                                                                                                                      
                                                  TypeInfo__System__Action<EditModeChangeArgs>;
                                              pAStack_4 = this_02;
                                              pAStack_3 = (Action_1_Boolean___Class *)
                                                           func_?();
                                              if (pAStack_3 == (Action_1_Boolean___Class *)0x0)
                                              goto code_?;
                                            }
                                            pAStack_4 = pAVar2;
                                            func_?(3,TypeInfo__IEditModeUI);
                                            pCVar5 = (this_01->fields).triggerObject;
                                            if ((pCVar5 != (CollectTheItemDropOffObject *)0x0) &&
                                               (this_00 = (pCVar5->fields).greyout,
                                               this_00 != (GreyOutObjectScript *)0x0)) {
                                              GreyOutObjectScript::
                                              GreyOutObjectScript_InitializeOriginalMaterials
                                                        (this_00,(MethodInfo *)0x0);
                                              pEVar22 = (this_01->fields).editableCubeModelWrapper;
                                              if (pEVar22 != (EditableCubeModelWrapper *)0x0) {
                                                this_02 = (Action_1_Boolean___Class *)
                                                          (pEVar22->fields).cubeModelBase;
                                                pUVar6 = (
                                                  UnityAction_2_System_Object_System_Object_ *)
                                                  func_?(
                                                  TypeInfo__System__EventHandler<EditStateEventArgs>
                                                  );
                                                if (pUVar6 !=
                                                    (UnityAction_2_System_Object_System_Object_ *)
                                                    0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[System::Object,System::Object]::
                                                  UnityAction_2_System_Object_System_Object___ctor
                                                            (pUVar6,(Object *)this_01,
                                                                                                                          
                                                  MethodInfo__CollectTheItemDropOff__OnChunkEditReset_System__Object__EditStateEventArgs_
                                                  ,(MethodInfo *)0x0);
                                                  if (this_02 != (Action_1_Boolean___Class *)0x0) {
                                                    MVCubeModelBase::
                                                    MVCubeModelBase_add_BeingEditedChanged
                                                              ((MVCubeModelBase *)this_02,
                                                               (EventHandler_1_EditStateEventArgs_ *
                                                               )pUVar6,(MethodInfo *)0x0);
                                                    goto code_?;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
code_?:
                                        bVar33 = CollectTheItemDropOff_get_DoOnce
                                                           (this_01,(MethodInfo *)0x0);
                                        if (bVar33 == 0) {
code_?:
                                          CollectTheItemDropOff_SetupCulling
                                                    (this_01,(MethodInfo *)0x0);
                                          this_03 = (Action_3_Boolean_Boolean_Object_ *)
                                                    func_?(
                                                  TypeInfo__System__Action<bool,_bool,_LogicObjectManager>
                                                  );
                                          if (this_03 != (Action_3_Boolean_Boolean_Object_ *)0x0) {
                                            mscorlib.dll::System::Action`3[Boolean,Boolean,Object]::
                                            Action_3_Boolean_Boolean_Object___ctor
                                                      (this_03,(Object *)this_01,
                                                                                                              
                                                  MethodInfo__CollectTheItemDropOff__SignalCallback_bool__bool__LogicObjectManager_
                                                  ,(MethodInfo *)0x0);
                                            pIVar34 = LogicClientsideFactory::
                                                                                                            
                                                  LogicClientsideFactory_CreateInputSignalReceiver
                                                            ((MVWorldObject *)this_01,0,
                                                             (
                                                  Action_3_Boolean_Boolean_LogicObjectManager_ *)
                                                  this_03,(MethodInfo *)0x0);
                                            (this_01->fields)._InputSignalReceiver_k__BackingField =
                                                 pIVar34;
                                            func_?(&(this_01->fields).
                                                             _InputSignalReceiver_k__BackingField,
                                                            pIVar34);
                                            this_02 = (Action_1_Boolean___Class *)
                                                      (this_01->fields)._._._._.id;
                                            this_04 = (WorldObjectClientRef_1_System_Object_ *)
                                                      func_?(
                                                  TypeInfo__OutputSignalTransmitter);
                                            if (this_04 !=
                                                (WorldObjectClientRef_1_System_Object_ *)0x0) {
                                              WorldObjectClientRef`1[System::Object]::
                                              WorldObjectClientRef_1_System_Object___ctor
                                                        (this_04,(int32_t)this_02,(MethodInfo *)0x0)
                                              ;
                                              (this_01->fields).outputSignalTransmitter =
                                                   (OutputSignalTransmitter *)this_04;
                                              func_?(&(this_01->fields).
                                                               outputSignalTransmitter,this_04);
                                              return;
                                            }
                                          }
                                        }
                                        else {
                                          this_02 = (Action_1_Boolean___Class *)
                                                    (this_01->fields).OnPickupCollected;
                                          if (cRam_? == '\0') {
                                            func_?(&TypeInfo__Extensions);
                                            func_?(&
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool
                                                  );
                                            func_?(&StringLiteral_isActive);
                                            cRam_? = '\x01';
                                          }
                                          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                                                      (*(this_01->klass->vtable).get_RunTimeData.
                                                        methodPtr)(this_01,(this_01->klass->vtable).
                                                                           get_RunTimeData.method);
                                          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor
                                              == 0) {
                                            func_?(TypeInfo__Extensions);
                                          }
                                          pAVar2 = (Action_1_Boolean___Class *)
                                                    Extensions::Extensions_GetObscuredType
                                                              (hashtable,StringLiteral_isActive,
                                                               (MethodInfo *)0x0);
                                          if ((
                                              TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool
                                              ->_1).cctor_finished_or_no_cctor == 0) {
                                            func_?(
                                                  TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool
                                                  );
                                          }
                                          if (pAVar2 != (Action_1_Boolean___Class *)0x0) {
                                            pOVar35 = 
                                            TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool
                                            ;
                                            if ((((MVCubeModelBase__Class *)(pAVar2->_0).image)->_0
                                                ).element_class !=
                                                (
                                                TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool
                                                ->_0).element_class) goto code_?;
                                            pOVar36 = (ObscuredBool *)func_?(pAVar2);
                                            bVar33 = Assembly-CSharp-firstpass.dll::CodeStage::
                                                     AntiCheat::ObscuredTypes::ObscuredBool::
                                                     ObscuredBool_op_Implicit_1
                                                               (*pOVar36,(MethodInfo *)0x0);
                                            if (this_02 != (Action_1_Boolean___Class *)0x0) {
                                              (*(code *)(this_02->_0).namespaze)
                                                        ((this_02->_0).element_class,
                                                         CONCAT22(this._2_2_,
                                                                  CONCAT11(this._1_1_,bVar33)),
                                                         *(void **)&(this_02->_0).byval_arg.attrs);
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
                }
              }
            }
          }
        }
      }
    }
    else {
      pAStack_3 = TypeInfo__System__Action<bool>;
      pAStack_4 = pAVar2;
      pAVar37 = (Action_1_Boolean_ *)func_?();
      if (pAVar37 != (Action_1_Boolean_ *)0x0) {
        (this->fields).OnPickupCollected = pAVar37;
        this_02 = TypeInfo__System__Action<bool>;
        pAStack_3 = TypeInfo__System__Action<bool>;
        pAStack_4 = pAVar2;
        pAStack_3 = (Action_1_Boolean___Class *)func_?();
        if (pAStack_3 != (Action_1_Boolean___Class *)0x0) goto code_?;
      }
      pAStack_4 = pAVar2;
      pAStack_3 = this_02;
      func_?();
code_?:
      pAStack_3 = (Action_1_Boolean___Class *)CONCAT22(this._2_2_,CONCAT11(this._1_1_,this._0_1_));
      pAStack_4 = this_02;
      func_?();
      pOVar35 = extraout_ECX;
code_?:
      func_?(pAVar2,pOVar35);
    }
  }
  func_?();
  pMVar10 = extraout_EDX;
code_?:
  func_?(this_02,pMVar10);
  pcVar38 = (code *)swi(3);
  (*pcVar38)();
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
        if ((MVar2 == MVGameMode__Enum_Edit) && (shouldbeActiveOnCollect == 0)) {
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
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_00 = (pCVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,1,(MethodInfo *)0x0);
    if (arg.playInEditor == 0) {
      return;
    }
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
       ((pCVar1->fields).editCollider != (Collider *)0x0)) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnEnterObject
               (CollectTheItemDropOff *this,EditorStateMachine *e,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pMStack_1 = (pEStack_2->klass->vtable).OnEnterObject.method;
    pEStack_3 = e;
    bVar4 = (*(pEStack_2->klass->vtable).OnEnterObject.methodPtr)();
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
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pEStack_2 = (this->fields).editableCubeModelWrapper;
  if (pEStack_2 != (EditableCubeModelWrapper *)0x0) {
    pMStack_1 = (pEStack_2->klass->vtable).OnExitObject.method;
    pEStack_3 = e;
    bVar4 = (*(pEStack_2->klass->vtable).OnExitObject.methodPtr)();
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
         (source = (pMVar4->fields)._._.gameObject, source != (GameObject *)0x0)) {
        pMVar5 = (MeshFilter__Array *)
                 Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        if ((this->fields).OnPickupCollected != (Action_1_Boolean_ *)0x0) {
          (*(((this->fields).OnPickupCollected)->fields)._._.invoke_impl)();
        }
        pCVar1 = (this->fields).triggerObject;
        if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
           ((pCVar1->fields).blinker != (CollectTheItemBlinker *)0x0)) {
          uVar3 = *unaff_FS_OFFSET;
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
          this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)(in_stack_4->fields).blinkers;
          if (this_00 !=
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) {
            this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                      RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                                );
            if (this_04 !=
                (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
              Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)&stack0xffffffe0,
                         (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)this_04,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                        );
              while( true ) {
                bVar5 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                        Int32Enum,System::Single]::
                        Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                                  ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                    *)&stack0xffffffd0,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                                  );
                if (bVar5 == 0) break;
                BlinkerBase::BlinkerBase_StopBlinking
                          (in_stack_4,BlinkType__Enum_Damage,(MethodInfo *)0x0);
              }
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&stack0xffffffd0,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                         ,in_stack_6);
              *unaff_FS_OFFSET = uVar3;
              return;
            }
          }
          uVar3 = func_?();
          func_?(uVar3);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_SetupCulling
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.transform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = (uint)pVVar1->y;
    fVar4 = pVVar1->z;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?();
    if (unaff_EBX != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
      UnityAction_1_UnityEngine_Vector2___ctor
                ((UnityAction_1_UnityEngine_Vector2_ *)unaff_EBX,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_,
                 (MethodInfo *)0x0);
      this_01 = (CullingSubscriberBase *)func_?();
      unaff_EDI = (Delegate *)0x0;
      if (this_01 != (CullingSubscriberBase *)0x0) {
        position.z = fVar4;
        position.x = (float)(undefined4)uStack_3;
        position.y = (float)uStack_3._4_4_;
        CullingSubscriberBase::CullingSubscriberBase__ctor_2
                  (this_01,3.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)unaff_EBX,
                   (MethodInfo *)0x0);
        (this->fields).cullingSubscriberBase = this_01;
        func_?();
        unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                    (this->fields)._._._.PositionChanged;
        this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        unaff_EDI = (Delegate *)0x0;
        if (this_02 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          unaff_EDI = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)unaff_EBX,(Delegate *)this_02,(MethodInfo *)0x0);
          unaff_EBX = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (unaff_EDI == (Delegate *)0x0) {
            uStack_3 = (ulonglong)uStack_3._4_4_ << 0x20;
            (this->fields)._._._.PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            VStack_2.z = (float)&(this->fields)._._._.PositionChanged;
            VStack_2.y = (float)&UNK_?;
            func_?();
            return;
          }
          uStack_3 = CONCAT44(uStack_3._4_4_,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
          VStack_2.y = (float)&UNK_?;
          VStack_2.z = (float)unaff_EDI;
          pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
          if (pUVar5 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            (this->fields)._._._.PositionChanged = pUVar5;
            unaff_EBX = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            uStack_3 = CONCAT44(uStack_3._4_4_,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
            VStack_2.y = (float)&UNK_?;
            VStack_2.z = (float)unaff_EDI;
            iVar6 = func_?();
            if (iVar6 != 0) {
              uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
              VStack_2.z = (float)&(this->fields)._._._.PositionChanged;
              VStack_2.y = (float)&UNK_?;
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  uStack_3 = CONCAT44(uStack_3._4_4_,unaff_EBX);
  VStack_2.y = (float)&UNK_?;
  VStack_2.z = (float)unaff_EDI;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    if (((TypeInfo__CollectTheItemDropOffObject->_1).typeHierarchyDepth <=
         (((ObjectPrefab__Class *)pCStack_19->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pCStack_19->klass)->_1).typeHierarchy
        [(TypeInfo__CollectTheItemDropOffObject->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__CollectTheItemDropOffObject)) {
      (this->fields).triggerObject = pCStack_19;
      pCStack_20 = TypeInfo__CollectTheItemDropOffObject;
      if (((TypeInfo__CollectTheItemDropOffObject->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pCStack_19->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pCStack_19->klass)->_1).typeHierarchy
          [(TypeInfo__CollectTheItemDropOffObject->_1).typeHierarchyDepth - 1] ==
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
  this_00 = (this->fields)._.blueprintData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_doOnce,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
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
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
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


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_triggerBoxEvents_TriggerEnter
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) &&
      (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0),
      pMVar1 != (MVWorldObject *)0x0)) &&
     (source = pMVar1[1].fields.inputLinkRefs, source != (List_1_MV_WorldObject_Link_ *)0x0)) {
    pOVar2 = (Object_1 *)
             Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                        MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                       );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if (pOVar2 == (Object_1 *)0x0) goto code_?;
      pOVar2 = (Object_1 *)pOVar2[4].monitor;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (((bVar3 == 0) && (pOVar2 != (Object_1 *)0x0)) &&
         (((TypeInfo__PickupItemCollectTheItem->_1).typeHierarchyDepth <=
           (pOVar2->klass->_1).typeHierarchyDepth &&
          (ppIVar4 = (pOVar2->klass->_1).typeHierarchy,
          ppIVar4[(TypeInfo__PickupItemCollectTheItem->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__PickupItemCollectTheItem)))) {
        if ((ppIVar4[(TypeInfo__PickupItemCollectTheItem->_1).typeHierarchyDepth - 1] !=
             (Il2CppClass *)TypeInfo__PickupItemCollectTheItem) || (iRam_? == 0))
        goto code_?;
        if (*(Object_1__Class **)(iRam_? + 0x100) == pOVar2[9].klass) {
          *(undefined1 *)&pOVar2[10].monitor = 0;
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                    (this_01,iRam_?,(e->fields).instigatorWOID,(MethodInfo *)0x0);
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

