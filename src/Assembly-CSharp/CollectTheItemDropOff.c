
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
  if (pMVar3 == (MVWorldObject *)0x0) {
    return 0;
  }
  bVar2 = (*(code *)pMVar3->klass[2]._0.byval_arg.data)(pMVar3,worldObjectClientManager,errorText);
  return bVar2;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Destroy
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).OnPickupCollected = (Action_1_Boolean_ *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
    if (pIVar2 != (IEditModeUI *)0x0) {
      source = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_,
                 MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         (source,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if ((Action_1_EditModeChangeArgs___Class *)pUVar4->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pUVar5 = pUVar4;
        }
        pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                 TypeInfo__System__Action<EditModeChangeArgs>;
        if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      func_?(3,TypeInfo__IEditModeUI,pIVar2,pUVar5);
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
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUVar4 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUVar4->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar5 = pUVar4;
      }
      pUVar6 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (this->fields)._._._.PositionChanged = pUVar5;
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      goto code_?;
    }
  }
  func_?(0);
  pUVar4 = extraout_ECX;
  pUVar6 = extraout_EDX;
code_?:
  func_?(pUVar4,pUVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void DropWoId(Int32) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_DropWoId
               (CollectTheItemDropOff *this,int32_t instigatorWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).sendSignal = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pPVar2 = (PrefabPool *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,instigatorWoID,(MethodInfo *)0x0);
    if (pPVar2 == (PrefabPool *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      iVar3 = MVWorldObjectClientManager::
              MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                        (pMVar1,instigatorWoID,(MethodInfo *)0x0);
      if (iVar3 == -1) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_00 == (PrefabPool *)0x0) goto code_?;
        pXVar4 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_CollectTheItemParticles(this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar4,
                            UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                           );
        if (pXVar4 == (XpBoostParticlePreviewer *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar4,(MethodInfo *)0x0);
        this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar2,(MethodInfo *)0x0);
        if ((this_01 == (MVPointLightObject *)0x0) ||
           (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xfffffff0,(Transform *)this_01,(MethodInfo *)0x0),
           pTVar5 == (Transform *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar5,*pVVar6,(MethodInfo *)0x0);
        pAVar7 = (Action_1_UIPushOption_ *)(this->fields).OnPickupCollected;
        if (pAVar7 != (Action_1_UIPushOption_ *)0x0) {
          bVar8 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (pAVar7,(uint)(bVar8 == 0),MethodInfo__System__Action<bool>__Invoke_bool_);
        }
      }
      pCVar9 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pPVar2,(MethodInfo *)0x0);
      if (pCVar9 != (CelestialParam *)0x0) {
        x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                      ((GameObject *)pCVar9,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          return;
        }
        pCVar9 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)pPVar2,(MethodInfo *)0x0);
        if (pCVar9 != (CelestialParam *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              ((GameObject *)pCVar9,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                              );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            return;
          }
          if (this_02 != (UseInteratorVisualization__Array *)0x0) {
            x_00 = (Object_1 *)
                   GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)this_02,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              return;
            }
            iVar10 = func_?();
            if (iVar10 == 0) {
              return;
            }
            if (x != (UseInteractorHandler *)0x0) {
              func_?();
              this_03 = (Component_1 *)func_?();
              if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
                func_?();
              }
              pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
              if (pPVar2 != (PrefabPool *)0x0) {
                pXVar4 = (XpBoostParticlePreviewer *)
                         PrefabPool::PrefabPool_get_CollectTheItemParticles
                                   (pPVar2,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                   (pXVar4,
                                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                                   );
                if ((((pXVar4 != (XpBoostParticlePreviewer *)0x0) &&
                     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)pXVar4,(MethodInfo *)0x0),
                     this_03 != (Component_1 *)0x0)) &&
                    (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform(this_03,(MethodInfo *)0x0),
                    this_04 != (Transform *)0x0)) &&
                   (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_position
                                       ((Vector3 *)&stack0xfffffff0,this_04,(MethodInfo *)0x0),
                   pTVar5 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar5,*pVVar6,(MethodInfo *)0x0);
                  pAVar7 = (Action_1_UIPushOption_ *)(this->fields).OnPickupCollected;
                  if (pAVar7 != (Action_1_UIPushOption_ *)0x0) {
                    bVar8 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
                    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                              (pAVar7,(uint)(bVar8 == 0),
                               MethodInfo__System__Action<bool>__Invoke_bool_);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Initialize
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).OnPickupCollected;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__CollectTheItemDropOff__OnCollected_bool_,
             MethodInfo__System__Action<bool>__Action_System__Object__void__);
  pAVar3 = (Action_1_Boolean_ *)
            mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_1_Boolean_ *)0x0;
  if (pAVar3 == (Action_1_Boolean_ *)0x0) {
code_?:
    (this->fields).OnPickupCollected = pAVar1;
    pCVar4 = (this->fields).triggerObject;
    if (pCVar4 == (CollectTheItemDropOffObject *)0x0) goto code_?;
    this_00 = (pCVar4->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__CollectTheItemDropOff__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,
               MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
              );
    if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (this_00,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._._._.outputConnectorObject;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar5,(MethodInfo *)0x0);
    fVar7 = 1.5;
    fVar8 = 1.5;
    fVar9 = 1.5;
    func_?(&stack0xffffffdc);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    value_00.y = fVar8;
    value_00.x = fVar9;
    value_00.z = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar6,value_00,(MethodInfo *)0x0);
    pPVar10 = (PrefabPool *)
              MVBlueprintBase::MVBlueprintBase_GetChild
                        ((MVBlueprintBase *)this,StringLiteral_DropOffModel,(MethodInfo *)0x0);
    if (pPVar10 == (PrefabPool *)0x0) goto code_?;
    bVar11 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((((MVWorldObjectClient__Class *)pPVar10->klass)->_1).naturalAligment < bVar11) ||
       ((MVCubeModelInstance__Class *)
        (((MVWorldObjectClient__Class *)pPVar10->klass)->_1).typeHierarchy[bVar11 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    pPVar13 = (PrefabPool *)0x0;
    if (bVar12) {
      pPVar13 = pPVar10;
    }
    if (pPVar13 == (PrefabPool *)0x0) {
      func_?();
      goto code_?;
    }
    pPVar10 = pPVar13;
    (*(code *)pPVar13->klass[3]._1.thread_static_fields_size)(pPVar13);
    pMVar14 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar13,(MethodInfo *)0x0);
    pCVar4 = (this->fields).triggerObject;
    if ((pCVar4 == (CollectTheItemDropOffObject *)0x0) ||
       (pGVar5 = (pCVar4->fields).cullingObject, pGVar5 == (GameObject *)0x0))
    goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar5,(MethodInfo *)0x0);
    if (pMVar14 == (MVPointLightObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
              ((Transform *)pMVar14,pTVar6,(MethodInfo *)0x0);
    value_01 = (this->fields).minBounds.x;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).cctor_started == 0)) {
      func_?();
    }
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1(value_01,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minBounds.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).minBounds.z,(MethodInfo *)0x0);
    uVar15 = 0;
    iVar16 = 0;
    func_?();
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxBounds.x,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxBounds.y,(MethodInfo *)0x0);
    Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::
    ObscuredShort_op_Implicit_1((this->fields).maxBounds.z,(MethodInfo *)0x0);
    uVar17 = 0;
    iVar18 = 0;
    func_?();
    iVar19 = (this->fields).minCubes.currentCryptoKey;
    iVar20 = (this->fields).minCubes.hiddenValue;
    iVar21 = (this->fields).minCubes.fakeValue;
    uVar22 = *(undefined4 *)&(this->fields).minCubes.inited;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?();
    }
    value.hiddenValue = iVar20;
    value.currentCryptoKey = iVar19;
    value.fakeValue = iVar21;
    value._12_4_ = uVar22;
    iVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    this_04 = (EditableCubeModelWrapper *)func_?();
    min.z = iVar16;
    min.x = (short)uVar15;
    min.y = (short)((uint)uVar15 >> 0x10);
    max.z = iVar18;
    max.x = (short)uVar17;
    max.y = (short)((uint)uVar17 >> 0x10);
    pPVar13 = pPVar10;
    EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
              (this_04,(MVCubeModelInstance *)pPVar10,min,max,iVar19,(MethodInfo *)0x0);
    (this->fields).editableCubeModelWrapper = this_04;
    pCVar4 = (this->fields).triggerObject;
    if (pCVar4 == (CollectTheItemDropOffObject *)0x0) goto code_?;
    pCVar23 = (pCVar4->fields).blinker;
    this_05 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)pPVar10,(MethodInfo *)0x0);
    if (this_05 == (CelestialParam *)0x0) goto code_?;
    avatarBody = (MVBody *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)this_05,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
    if (pCVar23 == (CollectTheItemBlinker *)0x0) goto code_?;
    AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
              ((AccessoryPreviewPopup *)pCVar23,avatarBody,(MethodInfo *)0x0);
    pCVar4 = (this->fields).triggerObject;
    if ((pCVar4 == (CollectTheItemDropOffObject *)0x0) ||
       (pCVar23 = (pCVar4->fields).blinker, pCVar23 == (CollectTheItemBlinker *)0x0))
    goto code_?;
    GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
              ((GamePassesTextBubble *)pCVar23,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar24 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar24 == MVGameMode__Enum_Edit) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pPVar13 = (PrefabPool *)
                MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pPVar13 == (PrefabPool *)0x0) goto code_?;
      pDVar25 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pPVar13);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_,
                 MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pDVar25 = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar25,(Delegate *)pUVar2,(MethodInfo *)0x0);
      if (pDVar25 != (Delegate *)0x0) {
        pDVar26 = (Delegate *)0x0;
        if ((Action_1_EditModeChangeArgs___Class *)pDVar25->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pDVar26 = pDVar25;
        }
        if (pDVar26 == (Delegate *)0x0) goto code_?;
      }
      func_?(3,TypeInfo__IEditModeUI);
      pCVar4 = (this->fields).triggerObject;
      if ((pCVar4 == (CollectTheItemDropOffObject *)0x0) ||
         (this_01 = (pCVar4->fields).greyout, this_01 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_01,(MethodInfo *)0x0);
      this_02 = (Collection_1_VoxelHit_ *)(this->fields).editableCubeModelWrapper;
      if (this_02 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      this_06 = (MVCubeModelBase *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnChunkEditReset_System__Object__EditStateEventArgs_
                 ,
                 MethodInfo__System__EventHandler<EditStateEventArgs>__EventHandler_System__Object__void__
                );
      if (this_06 == (MVCubeModelBase *)0x0) goto code_?;
      MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                (this_06,(EventHandler_1_EditStateEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    }
    bVar27 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
    if (bVar27 == 0) {
code_?:
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pMVar14 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)this,(MethodInfo *)0x0);
      if (pMVar14 == (MVPointLightObject *)0x0) goto code_?;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffdc,(Transform *)pMVar14,(MethodInfo *)0x0);
      uVar22 = pVVar28->x;
      uVar29 = pVVar28->y;
      fVar9 = pVVar28->z;
      uVar30 = (undefined2)uVar29;
      uVar31 = (undefined2)((uint)uVar29 >> 0x10);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_,
                 MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                );
      this_07 = (CullingSubscriberBase *)func_?();
      position.y = (float)(int)(CONCAT26(uVar31,CONCAT24(uVar30,uVar22)) >> 0x20);
      position.x = (float)uVar22;
      position.z._0_2_ = SUB42(fVar9,0);
      position.z._2_2_ = (short)((uint)fVar9 >> 0x10);
      CullingSubscriberBase::CullingSubscriberBase__ctor_2
                (this_07,3.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar2,
                 (MethodInfo *)0x0);
      pUVar32 = (this->fields)._._._.PositionChanged;
      (this->fields).cullingSubscriberBase = this_07;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar33 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar32,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pUVar32 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar33 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
        (this->fields)._._._.PositionChanged = pUVar32;
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__CollectTheItemDropOff__SignalCallback_bool__bool__LogicObjectManager_
                   ,
                   MethodInfo__System__Action<bool,_bool,_LogicObjectManager>__Action_System__Object__void__
                  );
        pIVar34 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                            ((MVWorldObject *)this,0,
                             (Action_3_Boolean_Boolean_LogicObjectManager_ *)pUVar2,
                             (MethodInfo *)0x0);
        (this->fields)._InputSignalReceiver_k__BackingField = pIVar34;
        woId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        this_08 = (WorldObjectClientRef_1_MVWorldObjectClient_ *)func_?();
        WorldObjectClientRef`1[MVWorldObjectClient]::
        WorldObjectClientRef_1_MVWorldObjectClient___ctor(this_08,(int32_t)woId,(MethodInfo *)0x0);
        (this->fields).outputSignalTransmitter = (OutputSignalTransmitter *)this_08;
        return;
      }
      if (pUVar33->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar32 = pUVar33;
      }
      if (pUVar32 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      goto code_?;
    }
    this_03 = (Action_1_UIPushOption_ *)(this->fields).OnPickupCollected;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(this->klass->vtable).get_RunTimeData.method)
                          (this,(this->klass->vtable).set_RunTimeData.methodPtr);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    pOVar35 = Extensions::Extensions_GetObscuredType
                        (hashtable,StringLiteral_isActive,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?();
    }
    if (pOVar35 == (Object *)0x0) goto code_?;
    if ((pOVar35->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      pOVar36 = (ObscuredBool *)func_?();
      bVar27 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_op_Implicit_1(*pOVar36,(MethodInfo *)0x0);
      if (this_03 == (Action_1_UIPushOption_ *)0x0) goto code_?;
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this_03,CONCAT31((int3)((uint)pPVar13 >> 8),bVar27),
                 MethodInfo__System__Action<bool>__Invoke_bool_);
      goto code_?;
    }
  }
  else {
    if (pAVar3->klass == TypeInfo__System__Action<bool>) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 != (Action_1_Boolean_ *)0x0) goto code_?;
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_00 = (pCVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,shouldbeActiveOnCollect,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if (pCVar1 != (CollectTheItemDropOffObject *)0x0) {
      this_03 = (Collider *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)pCVar1,(MethodInfo *)0x0);
      if (this_03 != (Collider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (this_03,shouldbeActiveOnCollect,(MethodInfo *)0x0);
        pCVar1 = (this->fields).triggerObject;
        if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
           (this_01 = (pCVar1->fields).blinker, this_01 != (CollectTheItemBlinker *)0x0)) {
          if (shouldbeActiveOnCollect != 0) {
            BlinkerBase::BlinkerBase_StartBlinking
                      ((BlinkerBase *)this_01,BlinkType__Enum_DropOffCollectedItem,2.0,
                       (MethodInfo *)0x0);
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if ((MVar2 == MVGameMode__Enum_Edit) && (shouldbeActiveOnCollect == 0)) {
            pCVar1 = (this->fields).triggerObject;
            if ((pCVar1 == (CollectTheItemDropOffObject *)0x0) ||
               (this_02 = (pCVar1->fields).greyout, this_02 == (GreyOutObjectScript *)0x0))
            goto code_?;
            GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_02,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnDataUpdate
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  woID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            ((int32_t)woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
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
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        func_?(uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
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
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    bVar2 = (*(code *)(pEVar1->klass->vtable).OnEnterObject.method)
                      (pEVar1,e,(pEVar1->klass->vtable).OnExitObject.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnExitObject
               (CollectTheItemDropOff *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
    bVar2 = (*(code *)(pEVar1->klass->vtable).OnExitObject.method)
                      (pEVar1,e,pEVar1->klass[1]._0.image);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnStateChanged
               (CollectTheItemDropOff *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
       (this_01 = (pCVar1->fields).cullingObject, this_01 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReInitializeVisuals() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_ReInitializeVisuals
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_00 = (pCVar1->fields).greyout, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials(this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if (pCVar1 != (CollectTheItemDropOffObject *)0x0) {
      this_01 = (pCVar1->fields).blinker;
      this_02 = (Collection_1_VoxelHit_ *)(this->fields).editableCubeModelWrapper;
      if (this_02 != (Collection_1_VoxelHit_ *)0x0) {
        this_03 = (DayNightCycle *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
        if (this_03 != (DayNightCycle *)0x0) {
          this_04 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_03,(MethodInfo *)0x0);
          if (this_04 != (CelestialParam *)0x0) {
            avatarBody = (MVBody *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponentsInChildren_29
                                   ((GameObject *)this_04,
                                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                   );
            if (this_01 != (CollectTheItemBlinker *)0x0) {
              AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                        ((AccessoryPreviewPopup *)this_01,avatarBody,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Reset
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
     (this_01 = (pCVar1->fields).visualObject, this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
       (this_05 = (Collider *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pCVar1,(MethodInfo *)0x0), this_05 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_05,1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 != MVGameMode__Enum_Edit) {
        return;
      }
      pCVar1 = (this->fields).triggerObject;
      if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
         (this_02 = (pCVar1->fields).greyout, this_02 != (GreyOutObjectScript *)0x0)) {
        GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_02,(MethodInfo *)0x0);
        this_03 = (Action_1_UIPushOption_ *)(this->fields).OnPickupCollected;
        if (this_03 != (Action_1_UIPushOption_ *)0x0) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_03,UIPushOption__Enum_Blocking,
                     MethodInfo__System__Action<bool>__Invoke_bool_);
        }
        pCVar1 = (this->fields).triggerObject;
        if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) &&
           ((pCVar1->fields).blinker != (CollectTheItemBlinker *)0x0)) {
          uStack3 = 0xffffffff;
          puStack4 = &DAT_?;
          puStack5 = (undefined *)*unaff_FS_OFFSET;
          *unaff_FS_OFFSET = &stack0x00000030;
          puStack6 = &stack0xfffffff0;
          puVar7 = &stack0xfffffff0;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
            puVar7 = puStack6;
          }
          puStack6 = puVar7;
          iStack8 = 0;
          func_?();
          this_00 = (in_stack_9->fields).blinkers;
          puStack6 = &stack0xfffffff0;
          if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
             (puStack6 = &stack0xfffffff0,
             this_04 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[WinningConditionType,System::Object]::
                       Dictionary_2_WinningConditionType_System_Object__get_Keys
                                 ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__
                                 ),
             this_04 !=
             (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0)) {
            pDVar10 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]
                     ::
                     Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                 *)&stack0xfffffffc,
                                (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                 *)this_04,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__
                               );
            iStack8 = (pDVar10->host_enumerator).next;
            uStack3 = 0;
            while (cVar11 = func_?(), cVar11 != '\0') {
              type = func_?();
              BlinkerBase::BlinkerBase_StopBlinking(in_stack_9,type,(MethodInfo *)0x0);
            }
            uStack3 = 0xffffffff;
            func_?();
            *unaff_FS_OFFSET = puStack5;
            return;
          }
          func_?(0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
  puStack4 = (undefined *)0x0;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_SetupCulling
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (MVPointLightObject *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,(Transform *)this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_01 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar3;
    position.x = (float)uVar2;
    position.z = fVar4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_01,3.5,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar5,
               (MethodInfo *)0x0);
    pUVar6 = (this->fields)._._._.PositionChanged;
    (this->fields).cullingSubscriberBase = this_01;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUStack7 =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar6,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUStack7 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUStack7->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar6 = pUStack7;
      }
      pUStack8 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (this->fields)._._._.PositionChanged = pUVar6;
    return;
  }
  func_?();
  pUStack7 = extraout_ECX;
  pUStack8 = extraout_EDX;
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  OStack_5.currentCryptoKey = 0;
  OStack_5.hiddenValue = 0;
  OStack_5.fakeValue = 0;
  OStack_5.inited = 0;
  OStack_5._7_1_ = 0;
  func_?(&uStack_1,0xfffffffb,0xfffffffc,0xfffffffa,0);
  (this->fields).minBounds.x.currentCryptoKey = (undefined2)uStack_1;
  (this->fields).minBounds.x.hiddenValue = uStack_1._2_2_;
  (this->fields).minBounds.x.fakeValue = (undefined2)uStack_2;
  (this->fields).minBounds.x.inited = uStack_2._2_1_;
  (this->fields).minBounds.x.field_0x7 = uStack_2._3_1_;
  (this->fields).minBounds.y.currentCryptoKey = (undefined2)uStack_3;
  (this->fields).minBounds.y.hiddenValue = uStack_3._2_2_;
  (this->fields).minBounds.y.fakeValue = (undefined2)uStack_4;
  (this->fields).minBounds.y.inited = uStack_4._2_1_;
  (this->fields).minBounds.y.field_0x7 = uStack_4._3_1_;
  (this->fields).minBounds.z = OStack_5;
  uVar6 = 0;
  uVar7 = 0;
  func_?(&stack0xffffffbc,7,8,6,0);
  (this->fields).maxBounds.x.currentCryptoKey = (short)uVar6;
  (this->fields).maxBounds.x.hiddenValue = (short)((uint)uVar6 >> 0x10);
  (this->fields).maxBounds.x.fakeValue = (short)uVar7;
  (this->fields).maxBounds.x.inited = (char)((uint)uVar7 >> 0x10);
  (this->fields).maxBounds.x.field_0x7 = (char)((uint)uVar7 >> 0x18);
  (this->fields).maxBounds.y.currentCryptoKey = 0;
  (this->fields).maxBounds.y.hiddenValue = 0;
  (this->fields).maxBounds.y.fakeValue = 0;
  (this->fields).maxBounds.y.inited = 0;
  (this->fields).maxBounds.y.field_0x7 = 0;
  (this->fields).maxBounds.z.currentCryptoKey = 0;
  (this->fields).maxBounds.z.hiddenValue = 0;
  (this->fields).maxBounds.z.fakeValue = 0;
  (this->fields).maxBounds.z.inited = 0;
  (this->fields).maxBounds.z.field_0x7 = 0;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&puStack_9,10,(MethodInfo *)0x0);
  iVar10 = pOVar8->hiddenValue;
  iVar11 = pOVar8->fakeValue;
  bVar12 = pOVar8->inited;
  uVar13 = *(undefined3 *)&pOVar8->field_0xd;
  (this->fields).minCubes.currentCryptoKey = pOVar8->currentCryptoKey;
  (this->fields).minCubes.hiddenValue = iVar10;
  (this->fields).minCubes.fakeValue = iVar11;
  (this->fields).minCubes.inited = bVar12;
  *(undefined3 *)&(this->fields).minCubes.field_0xd = uVar13;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?();
    pCStack14 = extraout_EDX;
    pCStack15 = unaff_EDI;
  }
  else {
    prefabObject = (ObjectPrefab *)
                   UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                   TweenRunner`1[T]+<Start>c__Iterator0[ColorTween]::
                   TweenRunner_1_T_Start_c_Iterator0_ColorTween__System_Collections_IEnumerator_get_Current
                             ((TweenRunner_1_T_Start_c_Iterator0_ColorTween_ *)this_00,
                              (MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar16 | InteractionFlags__Enum_CanEdit,method_00);
    IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar16 | InteractionFlags__Enum_DirectlySelectable,
               method_01);
    IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar16 | InteractionFlags__Enum_HasSettings,method_02);
    IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,IVar16 | InteractionFlags__Enum_CanResetLogic,method_03);
    IVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,
               IVar16 & (InteractionFlags__Enum_CanEnterPlay|
                        InteractionFlags__Enum_CanEarnGamePointsMinor|
                        InteractionFlags__Enum_CanEarnGamePoints|
                        InteractionFlags__Enum_CanUseGameRank|InteractionFlags__Enum_GlobalSounds|
                        InteractionFlags__Enum_CanCloneRoot|InteractionFlags__Enum_CanUseTeam|
                        InteractionFlags__Enum_Sounds|InteractionFlags__Enum_TranslatbleXZ2D|
                        InteractionFlags__Enum_CanUseStars|InteractionFlags__Enum_CanUseLevel|
                        InteractionFlags__Enum_CanUseGameCoins|
                        InteractionFlags__Enum_CantAddChildren|InteractionFlags__Enum_IsUsable|
                        InteractionFlags__Enum_IsPreview|InteractionFlags__Enum_CanResetLogic|
                        InteractionFlags__Enum_HasSettings|InteractionFlags__Enum_CanAddToInventory|
                        InteractionFlags__Enum_CanEdit|InteractionFlags__Enum_NotTranslatbleXZ|
                        InteractionFlags__Enum_NotTranslatbleY|InteractionFlags__Enum_CanRotateZ|
                        InteractionFlags__Enum_CanRotateY|InteractionFlags__Enum_CanRotateX|
                        InteractionFlags__Enum_DontPushGroupToSelectionStack|
                        InteractionFlags__Enum_NotUserTransformable|
                        InteractionFlags__Enum_SelectionRequiresEditGroup|
                        InteractionFlags__Enum_DirectlySelectable|InteractionFlags__Enum_IsTerrain|
                        InteractionFlags__Enum_HasCubeModel|InteractionFlags__Enum_Selectable),
               method_04);
    pCStack14 = (CollectTheItemDropOffObject *)(this->fields)._._._.component;
    if (pCStack14 == (CollectTheItemDropOffObject *)0x0) {
      (this->fields).triggerObject = (CollectTheItemDropOffObject *)0x0;
      return;
    }
    bVar17 = (TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCStack14->klass)->_1).naturalAligment < bVar17) ||
       ((((ObjectPrefab__Class *)pCStack14->klass)->_1).typeHierarchy[bVar17 - 1] !=
        (Il2CppClass *)TypeInfo__CollectTheItemDropOffObject)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pCVar19 = (CollectTheItemDropOffObject *)0x0;
    if (bVar18) {
      pCVar19 = pCStack14;
    }
    pCStack15 = TypeInfo__CollectTheItemDropOffObject;
    if (pCVar19 != (CollectTheItemDropOffObject *)0x0) {
      (this->fields).triggerObject = pCVar19;
      return;
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Boolean get_DoOnce() */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_DoOnce
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.blueprintData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_doOnce,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar2 = (bool *)func_?();
        return *pbVar2;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_IsActive
               (CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Extensions->_1).cctor_started == 0)) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_isActive,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
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
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  func_?(__return_storage_ptr__,0x40600000,0,0,0);
  return __return_storage_ptr__;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_set_InputSignalReceiver
               (CollectTheItemDropOff *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_triggerBoxEvents_TriggerEnter
               (CollectTheItemDropOff *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) &&
      (this_01 = (DayNightCycle *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0),
      this_01 != (DayNightCycle *)0x0)) &&
     (this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
     this_02 != (CelestialParam *)0x0)) {
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_29
                        ((GameObject *)this_02,
                         MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (this_03 != (UseInteratorVisualization__Array *)0x0) {
      x = (Object_1 *)
          GamePointGainEffect::GamePointGainEffect_get_ID
                    ((GamePointGainEffect *)this_03,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      iVar2 = func_?();
      if (iVar2 == 0) {
        return;
      }
      this_04 = (AvatarMotor *)func_?();
      pUVar3 = this_03[1].vector[0x15];
      if ((this_04 != (AvatarMotor *)0x0) &&
         (pCVar4 = DesktopEditModeController::DesktopEditModeController_get_ClientShopRepository
                             ((DesktopEditModeController *)this_04,(MethodInfo *)0x0),
         pUVar3 != (UseInteratorVisualization *)0x0)) {
        if ((ClientShopRepository *)pUVar3[4].fields.pivot.z != pCVar4) {
          return;
        }
        AvatarMotor::AvatarMotor_set_IsMovementLocked(this_04,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        triggerBoxOwnerId =
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0);
        if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                    (this_05,(int32_t)triggerBoxOwnerId,(e->fields).instigatorWOID,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

