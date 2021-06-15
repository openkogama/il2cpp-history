
/* Boolean CanPickupWithoutUse(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_CanPickupWithoutUse
               (CollectTheItemCollectableInstance *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    iVar2 = MVWorldObjectClientManager::
            MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                      (pMVar1,instigator,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_00 = (DayNightCycle *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,iVar2,(MethodInfo *)0x0);
      if (this_00 == (DayNightCycle *)0x0) {
        return 0;
      }
      pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0);
      if (pCVar3 != (CelestialParam *)0x0) {
        this_01 = (UseInteratorVisualization__Array *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)pCVar3,
                             MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                            );
        if (this_01 != (UseInteratorVisualization__Array *)0x0) {
          bVar4 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
          if (((((UseInteractorHandler__Class *)this_01->klass)->_1).naturalAligment < bVar4) ||
             ((((UseInteractorHandler__Class *)this_01->klass)->_1).typeHierarchy[bVar4 - 1] !=
              (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pUVar6 = (UseInteratorVisualization__Array *)0x0;
          if (bVar5) {
            pUVar6 = this_01;
          }
          if (pUVar6 != (UseInteratorVisualization__Array *)0x0) {
            return 1;
          }
        }
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          iVar8 = func_?();
          if (iVar8 == 0) {
            return 0;
          }
          pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0);
          if (pCVar3 == (CelestialParam *)0x0) goto code_?;
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentsInChildren_29
                              ((GameObject *)pCVar3,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                              );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            return 0;
          }
        }
        if (this_01 != (UseInteratorVisualization__Array *)0x0) {
          pOVar9 = (Object_1 *)
                    GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (pOVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            return 1;
          }
          pOVar9 = (Object_1 *)
                    GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            (pOVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            iVar2 = GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)this_01,(MethodInfo *)0x0);
            if (iVar2 == 0) goto code_?;
            iVar8 = func_?();
            if (iVar8 == 5) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar7 = (*pcVar10)();
  return bVar7;
}


/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_CheckCanUse
               (CollectTheItemCollectableInstance *this,int32_t woId,
               MVInteractableBase *interactable,MethodInfo *method)

{
  if (interactable == (MVInteractableBase *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = (*(code *)(interactable->klass->vtable).__unknown_4.method)
                    (interactable,8,(interactable->klass->vtable).__unknown_5.methodPtr);
  if (cVar3 == '\0') {
    cVar3 = (*(code *)(interactable->klass->vtable).__unknown_4.method)
                      (interactable,7,(interactable->klass->vtable).__unknown_5.methodPtr);
    if ((cVar3 == '\0') && ((this->fields).isTaken == 0)) {
      bVar2 = CollectTheItemCollectableInstance_CanPickupWithoutUse(this,woId,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_Delete
               (CollectTheItemCollectableInstance *this,
               MVWorldObjectClientManager *worldObjectClientManager,String **errorText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (worldObjectClientManager,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
      pCVar2 = (this->fields).collectTheItemObject;
      if (pCVar2 != (CollectTheItemObject *)0x0) {
        pTVar3 = (pCVar2->fields).triggerBoxEvents;
        pUVar4 = (this->fields).useInteractor;
        piVar5 = (int *)&UNK_?;
        pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar6,(Object *)pUVar4,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
          pCVar2 = (this->fields).collectTheItemObject;
          if (pCVar2 != (CollectTheItemObject *)0x0) {
            pTVar3 = (pCVar2->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar6,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar3 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
              if (piVar5 == (int *)0x0) {
                return 0;
              }
              bVar1 = (**(code **)(*piVar5 + 0x318))
                                (piVar5,worldObjectClientManager,errorText,
                                 *(undefined4 *)(*piVar5 + 0x31c));
              return bVar1;
            }
          }
        }
      }
    }
    func_?(0);
    pcVar7 = (code *)swi(3);
    bVar1 = (*pcVar7)();
    return bVar1;
  }
  return 1;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_Destroy
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
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
    if (pIVar2 == (IEditModeUI *)0x0) goto code_?;
    pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_,
               MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    pDVar5 = (Delegate *)0x0;
    if ((Action_1_EditModeChangeArgs___Class *)pDVar3->klass ==
        TypeInfo__System__Action<EditModeChangeArgs>) {
      pDVar5 = pDVar3;
    }
    if (pDVar5 != (Delegate *)0x0) goto code_?;
  }
  else {
code_?:
    pUVar6 = (this->fields)._._._.PositionChanged;
    if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar6,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar7 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar7->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar6 = pUVar7;
        }
        if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      (this->fields)._._._.PositionChanged = pUVar6;
    }
    if ((this->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      iVar9 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
        pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar8,iVar9,(MethodInfo *)0x0);
        if (pMVar10 == (MVWorldObject *)0x0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar9 = CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                           (this,(MethodInfo *)0x0);
        if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
          pCVar11 = (CollectTheItemCollectable *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar8,iVar9,(MethodInfo *)0x0);
          if (pCVar11 == (CollectTheItemCollectable *)0x0) {
            return;
          }
          bVar12 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
          if (((pCVar11->klass->_1).naturalAligment < bVar12) ||
             ((CollectTheItemCollectable__Class *)(pCVar11->klass->_1).typeHierarchy[bVar12 - 1] !=
              TypeInfo__CollectTheItemCollectable)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          this_04 = (CollectTheItemCollectable *)0x0;
          if (bVar13) {
            this_04 = pCVar11;
          }
          if (this_04 == (CollectTheItemCollectable *)0x0) {
            return;
          }
          if ((this_04->fields)._._._.PositionChanged !=
              (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            pUVar4 = this_02;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_02,(Object *)this,
                       MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                       ,
                       MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                      );
            pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pUVar4,(Delegate *)this_02,(MethodInfo *)0x0);
            pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            if (pUVar7 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              if (pUVar7->klass ==
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 ) {
                pUVar6 = pUVar7;
              }
              if (pUVar6 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
              goto code_?;
            }
            (this_04->fields)._._._.PositionChanged = pUVar6;
          }
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          iVar9 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                             (this_04,(MethodInfo *)0x0);
          if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar8,iVar9,(MethodInfo *)0x0);
            iVar14 = func_?();
            if (iVar14 == 0) {
              return;
            }
            pDVar3 = *(Delegate **)(iVar14 + 0x140);
            pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar4,(Object *)this,
                       MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_,
                       MethodInfo__System__Action<bool>__Action_System__Object__void__);
            puVar15 = &UNK_?;
            pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                                (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
            pDVar3 = (Delegate *)0x0;
            if (pDVar5 == (Delegate *)0x0) {
code_?:
              *(Delegate **)(puVar15 + 0x140) = pDVar3;
              return;
            }
            if ((Action_1_Boolean___Class *)pDVar5->klass == TypeInfo__System__Action<bool>) {
              pDVar3 = pDVar5;
            }
            if (pDVar3 != (Delegate *)0x0) goto code_?;
            goto code_?;
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                               (this_01,(MethodInfo *)0x0), pMVar16 != (MVGroup *)0x0)) &&
         (pIVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pMVar16,(MethodInfo *)0x0),
         pMVar8 != (MVWorldObjectClientManager *)0x0)) {
        pMVar16 = (MVGroup *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar8,(int32_t)pIVar17,(MethodInfo *)0x0);
        if (pMVar16 == (MVGroup *)0x0) {
          this_03 = (MVGroup *)0x0;
        }
        else {
          bVar12 = (TypeInfo__MVGroup->_1).naturalAligment;
          if (((pMVar16->klass->_1).naturalAligment < bVar12) ||
             ((MVGroup__Class *)(pMVar16->klass->_1).typeHierarchy[bVar12 - 1] != TypeInfo__MVGroup))
          {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          this_03 = (MVGroup *)0x0;
          if (bVar13) {
            this_03 = pMVar16;
          }
          if (this_03 == (MVGroup *)0x0) goto code_?;
        }
        pIVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0)
        ;
        if (this_03 != (MVGroup *)0x0) {
          MVGroup::MVGroup_RemoveChild(this_03,(int32_t)pIVar17,(MethodInfo *)0x0);
          this_00 = (this->fields).cullingSubscriberBase;
          if (this_00 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
            (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
            goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean DoPickup(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_DoPickup
               (CollectTheItemCollectableInstance *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    this_00 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,instigatorWOID,(MethodInfo *)0x0);
    if (this_00 == (DayNightCycle *)0x0) {
      return 0;
    }
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0);
    if (this_01 != (CelestialParam *)0x0) {
      x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                    ((GameObject *)this_01,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 0;
      }
      if (x != (UseInteractorHandler *)0x0) {
        (*(code *)x->klass[1]._0.namespaze)();
        this_02 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                   *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        id = CollectTheItemCollectableInstance_get_OriginalInstanceID
                       ((CollectTheItemCollectableInstance *)&UNK_?,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
          pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar1,id,(MethodInfo *)0x0);
          if (pMVar3 == (MVWorldObject *)0x0) {
            return 0;
          }
          CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                    ((CollectTheItemCollectableInstance *)&UNK_?,(MethodInfo *)0x0);
          value = (CrossPlatformInputManager_VirtualButton *)func_?();
          if (this_02 !=
              (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      (this_02,StringLiteral_CollectTheItemCollectableId,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            cVar4 = (*x->klass[1]._0.gc_desc)();
            return cVar4 != '\0';
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void Enter(Int32) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_Enter
               (CollectTheItemCollectableInstance *this,int32_t instigatorWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) && ((this->fields).isTaken != 0)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      instigatorWoID =
           (int32_t)MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_00,instigatorWoID,(MethodInfo *)0x0);
      if ((DayNightCycle *)instigatorWoID == (DayNightCycle *)0x0) {
        return;
      }
      this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)instigatorWoID,(MethodInfo *)0x0);
      if (this_01 != (CelestialParam *)0x0) {
        x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                      ((GameObject *)this_01,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          return;
        }
        if (x != (UseInteractorHandler *)0x0) {
          func_?();
          goto code_?;
        }
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  bVar1 = CollectTheItemCollectableInstance_DoPickup(this,instigatorWoID,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    (this->fields).isTaken = 1;
  }
  return;
}


/* Void HandleStateChange(PickupItemState) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_HandleStateChange
               (CollectTheItemCollectableInstance *this,PickupItemState__Enum state,
               MethodInfo *method)

{
  (this->fields).currentState = state;
  if (state == PickupItemState__Enum_Listening) {
    (this->fields).isTaken = 0;
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 == (CollectTheItemObject *)0x0) ||
       (pGVar2 = (pCVar1->fields).greyOutObject, pGVar2 == (GreyOutObjectScript *)0x0)) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
  }
  else if (state == PickupItemState__Enum_Pickup) {
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (pGVar2 = (pCVar1->fields).greyOutObject, pGVar2 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
      (this->fields).isTaken = 1;
      return;
    }
    goto code_?;
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_Initialize
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  CollectTheItemCollectableInstance_SetupInstance(this,(MethodInfo *)0x0);
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    IVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                       ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,
               IVar2 & (InteractionFlags__Enum_CanEnterPlay|
                         InteractionFlags__Enum_CanEarnGamePointsMinor|
                         InteractionFlags__Enum_CanEarnGamePoints|
                         InteractionFlags__Enum_CanUseGameRank|InteractionFlags__Enum_GlobalSounds|
                         InteractionFlags__Enum_CanCloneRoot|InteractionFlags__Enum_CanUseTeam|
                         InteractionFlags__Enum_Sounds|InteractionFlags__Enum_TranslatbleXZ2D|
                         InteractionFlags__Enum_CanUseStars|InteractionFlags__Enum_CanUseLevel|
                         InteractionFlags__Enum_CanUseGameCoins|
                         InteractionFlags__Enum_CantAddChildren|InteractionFlags__Enum_IsUsable|
                         InteractionFlags__Enum_IsPreview|InteractionFlags__Enum_CanResetLogic|
                         InteractionFlags__Enum_HasSettings|InteractionFlags__Enum_CanAddToInventory
                         |InteractionFlags__Enum_CanClone|InteractionFlags__Enum_CanEdit|
                         InteractionFlags__Enum_NotTranslatbleXZ|
                         InteractionFlags__Enum_NotTranslatbleY|InteractionFlags__Enum_CanRotateZ|
                         InteractionFlags__Enum_CanRotateY|InteractionFlags__Enum_CanRotateX|
                         InteractionFlags__Enum_DontPushGroupToSelectionStack|
                         InteractionFlags__Enum_NotUserTransformable|
                         InteractionFlags__Enum_SelectionRequiresEditGroup|
                         InteractionFlags__Enum_DirectlySelectable|InteractionFlags__Enum_IsTerrain|
                        InteractionFlags__Enum_HasCubeModel),method_00);
    CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
    pCVar3 = (this->fields).collectTheItemObject;
    if ((pCVar3 != (CollectTheItemObject *)0x0) &&
       (this_01 = (pCVar3->fields).blinker, this_01 != (CollectTheItemBlinker *)0x0)) {
      GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                ((GamePassesTextBubble *)this_01,1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar4 == MVGameMode__Enum_Edit) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pIVar5 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar5 == (IEditModeUI *)0x0) goto code_?;
      pDVar6 = (Delegate *)func_?();
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                 ,MethodInfo__System__Action<EditModeChangeArgs>__Action_System__Object__void__);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
      if (pDVar6 != (Delegate *)0x0) {
        pDVar8 = (Delegate *)0x0;
        if ((Action_1_EditModeChangeArgs___Class *)pDVar6->klass ==
            TypeInfo__System__Action<EditModeChangeArgs>) {
          pDVar8 = pDVar6;
        }
        if (pDVar8 == (Delegate *)0x0) goto code_?;
      }
      func_?();
    }
    pCVar3 = (this->fields).collectTheItemObject;
    if ((pCVar3 != (CollectTheItemObject *)0x0) &&
       (this_00 = (pCVar3->fields).greyOutScriptEditMode, this_00 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_00,(MethodInfo *)0x0);
code_?:
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pCVar3 = (this->fields).collectTheItemObject;
      if (pCVar3 != (CollectTheItemObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)pCVar3,(MethodInfo *)0x0);
        pCVar3 = (this->fields).collectTheItemObject;
        if ((pCVar3 != (CollectTheItemObject *)0x0) &&
           (pTVar9 = (pCVar3->fields).triggerBoxEvents, pTVar9 != (TriggerBoxEvents *)0x0)) {
          triggerCollider =
               TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar9,(MethodInfo *)0x0);
          pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar7,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_,
                     MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                     ,
                     MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__
                    );
          pUVar10 = (UseInteractor *)func_?();
          UseInteractor::UseInteractor__ctor
                    (pUVar10,(MVWorldObjectClient *)this,(GameObject *)pUVar7,0,triggerCollider,
                     (Func_2_Int32_Boolean_ *)pUVar7,
                     (Func_3_Int32_MVInteractableBase_Boolean_ *)this_02,2.5,(MethodInfo *)0x0);
          pCVar3 = (this->fields).collectTheItemObject;
          (this->fields).useInteractor = (UseInteractor *)this_02;
          if (pCVar3 != (CollectTheItemObject *)0x0) {
            pTVar9 = (pCVar3->fields).triggerBoxEvents;
            pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar7,(Object *)this_02,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar9 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0);
              pCVar3 = (this->fields).collectTheItemObject;
              if (pCVar3 != (CollectTheItemObject *)0x0) {
                pTVar9 = (pCVar3->fields).triggerBoxEvents;
                pUVar10 = (this->fields).useInteractor;
                pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar7,(Object *)pUVar10,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,
                           MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                          );
                if (pTVar9 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar7,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializeInstanceWithData() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_InitializeInstanceWithData
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_04 = MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  pCVar1 = (CollectTheItemCollectableInstance *)0x0;
  if (this_04 != (List_1_MVWorldObjectClient_ *)0x0) {
    while( true ) {
      index = pCVar1;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if ((int)pOVar2 <= (int)index) break;
      pPVar3 = (PrefabPool *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (pPVar3 == (PrefabPool *)0x0) goto code_?;
      pMVar4 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar3,(MethodInfo *)0x0);
      pCVar5 = (this->fields).collectTheItemObject;
      if ((pCVar5 == (CollectTheItemObject *)0x0) ||
         (this_00 = (pCVar5->fields).cullingObject, this_00 == (GameObject *)0x0))
      goto code_?;
      p = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (this_00,(MethodInfo *)0x0);
      if (pMVar4 == (MVPointLightObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                ((Transform *)pMVar4,p,(MethodInfo *)0x0);
      pPVar3 = (PrefabPool *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,
                          (int32_t)index,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                         );
      if (pPVar3 == (PrefabPool *)0x0) goto code_?;
      pMVar4 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
      if (pMVar4 == (MVPointLightObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                ((Transform *)pMVar4,*pQVar6,(MethodInfo *)0x0);
      pCVar1 = (CollectTheItemCollectableInstance *)((int)&index->klass + 1);
      this = index;
    }
    pCVar5 = (this->fields).collectTheItemObject;
    if (pCVar5 != (CollectTheItemObject *)0x0) {
      this_01 = (pCVar5->fields).triggerBoxEvents;
      this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_05,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,
                 MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                );
      if (this_01 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_01,(EventHandler_1_TriggerEventArgs_ *)this_05,(MethodInfo *)0x0);
        pCVar5 = (this->fields).collectTheItemObject;
        if ((pCVar5 != (CollectTheItemObject *)0x0) &&
           (this_02 = (pCVar5->fields).greyOutObject, this_02 != (GreyOutObjectScript *)0x0)) {
          GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                    (this_02,(MethodInfo *)0x0);
          CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
          pCVar5 = (this->fields).collectTheItemObject;
          if ((pCVar5 != (CollectTheItemObject *)0x0) &&
             (this_03 = (pCVar5->fields).blinker, this_03 != (CollectTheItemBlinker *)0x0)) {
            GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
                      ((GamePassesTextBubble *)this_03,1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnCollected(Boolean) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnCollected
               (CollectTheItemCollectableInstance *this,bool shouldBeActiveOnCollect,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (this_03 = (Collider *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)pCVar1,(MethodInfo *)0x0), this_03 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_03,shouldBeActiveOnCollect,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (this_00 = (pCVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,shouldBeActiveOnCollect,(MethodInfo *)0x0);
      bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if ((MVar3 == MVGameMode__Enum_Edit) && (shouldBeActiveOnCollect == 0)) {
          pCVar1 = (this->fields).collectTheItemObject;
          if ((pCVar1 != (CollectTheItemObject *)0x0) &&
             (this_01 = (pCVar1->fields).greyOutScriptEditMode,
             this_01 != (GreyOutObjectScript *)0x0)) {
            GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_01,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
      if ((bVar2 != 0) || (shouldBeActiveOnCollect != 0)) {
        return;
      }
      pCVar1 = (this->fields).collectTheItemObject;
      if (pCVar1 != (CollectTheItemObject *)0x0) {
        this_02 = (pCVar1->fields).triggerBoxEvents;
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this,
                   MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (this_02 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (this_02,(EventHandler_1_TriggerEventArgs_ *)this_04,(MethodInfo *)0x0);
          (this->fields).isTaken = 1;
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnEditModeChange
               (CollectTheItemCollectableInstance *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (this_00 = (pCVar1->fields).editCollider, this_00 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,1,(MethodInfo *)0x0);
    if (arg.playInEditor == 0) {
      return;
    }
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
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


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnPositionChanged
               (CollectTheItemCollectableInstance *this,MVWorldObjectClient *arg0,
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

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnStateChanged
               (CollectTheItemCollectableInstance *this,CullingGroupEvent cullingEvent,
               MethodInfo *method)

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
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
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


/* Void Reset() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_Reset
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (this_00 = (pCVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if (pCVar1 != (CollectTheItemObject *)0x0) {
      this_01 = (Collider *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)pCVar1,(MethodInfo *)0x0);
      if (this_01 != (Collider *)0x0) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (this_01,1,(MethodInfo *)0x0);
        bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar3 == MVGameMode__Enum_Edit) {
            pCVar1 = (this->fields).collectTheItemObject;
            if ((pCVar1 != (CollectTheItemObject *)0x0) &&
               ((pCVar1->fields).greyOutScriptEditMode != (GreyOutObjectScript *)0x0)) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 ==
                  (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
                this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_02,(Object *)0x0,
                           MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                           ,
                           MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
                          );
                TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 =
                     (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02;
              }
              if (in_stack_4 != (GreyOutObjectScript *)0x0) {
                GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                          (in_stack_4,
                           TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0,
                           (MethodInfo *)0x0);
                (in_stack_4->fields).isGreyedIn = 1;
                return;
              }
              func_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto code_?;
          }
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean SendEnterEvent(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SendEnterEvent
               (CollectTheItemCollectableInstance *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if ((bVar1 == 0) &&
     (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar2 - (this->fields).timeCreated < _UNK_?)) {
    return 0;
  }
  if ((this->fields).currentState != 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,instigator,(MethodInfo *)0x0);
    if (this_01 == (DayNightCycle *)0x0) {
      return 0;
    }
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                    ((GameObject *)this_02,
                     MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                    );
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return 0;
      }
      if (x != (UseInteractorHandler *)0x0) {
        cVar3 = (*(code *)x->klass[1]._0.castClass)();
        if (cVar3 != '\0') {
          return 0;
        }
        cVar3 = (*(code *)x->klass[1]._0.castClass)();
        if (cVar3 != '\0') {
          return 0;
        }
        bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
        if ((bVar1 == 0) && ((this->fields).isTaken != 0)) {
          return 0;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        triggerBoxOwnerId =
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                    (this_03,(int32_t)triggerBoxOwnerId,(int32_t)this,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void SetBlinker() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetBlinker
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if (pCVar1 != (CollectTheItemObject *)0x0) {
    this_00 = (pCVar1->fields).blinker;
    this_01 = (pCVar1->fields).visualObject;
    if (this_01 != (GameObject *)0x0) {
      avatarBody = (MVBody *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_29
                             (this_01,
                              UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                             );
      if (this_00 != (CollectTheItemBlinker *)0x0) {
        AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                  ((AccessoryPreviewPopup *)this_00,avatarBody,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRotationEnabled(Boolean) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetRotationEnabled
               (CollectTheItemCollectableInstance *this,bool enableRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (pRVar2 = (pCVar1->fields).rotator, pRVar2 != (RotateLocal *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar2,enableRotation,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (pRVar2 = (pCVar1->fields).rotator, pRVar2 != (RotateLocal *)0x0)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pRVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (this_00,*pQVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupCulling
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

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
               MethodInfo__CollectTheItemCollectableInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_01 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar3;
    position.x = (float)uVar2;
    position.z = fVar4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_01,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar5,
               (MethodInfo *)0x0);
    a = (this->fields)._._._.PositionChanged;
    (this->fields).cullingSubscriberBase = this_01;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pMVar6 = (MVWorldObject__Class *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pMVar7 = (MVWorldObject__Class *)0x0;
    if (pMVar6 != (MVWorldObject__Class *)0x0) {
      if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)(pMVar6->_0).image
          == 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pMVar7 = pMVar6;
      }
      pUVar8 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pMVar7 == (MVWorldObject__Class *)0x0) goto code_?;
    }
    (this->fields)._._._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)pMVar7;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar9 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar9 != MVGameMode__Enum_Edit) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    id = CollectTheItemCollectableInstance_get_CollectTheItemCollectableID(this,(MethodInfo *)0x0);
    if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_02,id,(MethodInfo *)0x0), pMVar10 != (MVWorldObject *)0x0)) {
      pMVar7 = pMVar10[1].klass;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pMVar6 = (MVWorldObject__Class *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar7,(Delegate *)pUVar5,(MethodInfo *)0x0);
      pMVar7 = (MVWorldObject__Class *)0x0;
      if (pMVar6 == (MVWorldObject__Class *)0x0) {
code_?:
        pMVar10[1].klass = pMVar7;
        return;
      }
      if ((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)(pMVar6->_0).image
          == 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pMVar7 = pMVar6;
      }
      pUVar8 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pMVar7 != (MVWorldObject__Class *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pMVar6 = extraout_ECX;
  pUVar8 = extraout_EDX;
code_?:
  func_?(pMVar6,pUVar8);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetupGreyoutScript(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupGreyoutScript
               (CollectTheItemCollectableInstance *this,Object *sender,EditStateEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).Reset.method)
            (this,(this->klass->vtable).OnObjectLinkChanged.methodPtr);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar2 = CollectTheItemCollectableInstance_get_CollectTheItemCollectableID(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pCVar3 = (CollectTheItemCollectable *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,iVar2,(MethodInfo *)0x0);
    if (pCVar3 != (CollectTheItemCollectable *)0x0) {
      bVar4 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if (((pCVar3->klass->_1).naturalAligment < bVar4) ||
         ((CollectTheItemCollectable__Class *)(pCVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
          TypeInfo__CollectTheItemCollectable)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      this_01 = (CollectTheItemCollectable *)0x0;
      if (bVar5) {
        this_01 = pCVar3;
      }
      if (this_01 != (CollectTheItemCollectable *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar2 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                          (this_01,(MethodInfo *)0x0);
        if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pCVar6 = (CollectTheItemDropOff *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,iVar2,(MethodInfo *)0x0);
        if (pCVar6 != (CollectTheItemDropOff *)0x0) {
          bVar4 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
          if (((pCVar6->klass->_1).naturalAligment < bVar4) ||
             ((CollectTheItemDropOff__Class *)(pCVar6->klass->_1).typeHierarchy[bVar4 - 1] !=
              TypeInfo__CollectTheItemDropOff)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          this_00 = (CollectTheItemDropOff *)0x0;
          if (bVar5) {
            this_00 = pCVar6;
          }
          if (this_00 != (CollectTheItemDropOff *)0x0) {
            CollectTheItemDropOff::CollectTheItemDropOff_ReInitializeVisuals
                      (this_00,(MethodInfo *)0x0);
          }
        }
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetupInstance() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupInstance
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  CollectTheItemCollectableInstance_InitializeInstanceWithData(this,(MethodInfo *)0x0);
  CollectTheItemCollectableInstance_SetupCulling(this,(MethodInfo *)0x0);
  capacity = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                       ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_01 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
  SortedList_2_System_Single_System_Object___ctor_1
            ((SortedList_2_System_Single_System_Object_ *)this_01,(int32_t)capacity,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
            );
  if (this_01 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
    FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
              ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)&stack0xffffffc0,
               this_01,MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    uStack_1 = 0;
    while (cVar4 = func_?(), cVar4 != '\0') {
      id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&stack0xffffffd0,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                     );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (pMVar5,(int32_t)id,(MethodInfo *)0x0);
      this_02 = (DayNightCycle *)func_?();
      if (this_02 != (DayNightCycle *)0x0) {
        func_?();
        gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)gameObject,iVar6,(MethodInfo *)0x0)
        ;
      }
    }
    uStack_1 = 0xffffffff;
    func_?();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    iVar6 = CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                      (this,(MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                (pMVar5,iVar6,(MethodInfo *)0x0);
      this_03 = (CollectTheItemCollectable *)func_?();
      if (this_03 != (CollectTheItemCollectable *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar6 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                          (this_03,(MethodInfo *)0x0);
        if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                  (pMVar5,iVar6,(MethodInfo *)0x0);
        iVar7 = func_?();
        if (iVar7 != 0) {
          this_00 = (this->fields).collectTheItemObject;
          bVar8 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
          if (this_00 == (CollectTheItemObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_00,bVar8 == 0,(MethodInfo *)0x0);
          a = *(Delegate **)(iVar7 + 0x140);
          this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_04,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_,
                     MethodInfo__System__Action<bool>__Action_System__Object__void__);
          mscorlib.dll::System::Delegate::Delegate_Combine(a,(Delegate *)this_04,(MethodInfo *)0x0);
          uVar9 = func_?();
          *(undefined4 *)(iVar7 + 0x140) = uVar9;
        }
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupUseInteractor
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if (pCVar1 != (CollectTheItemObject *)0x0) {
    owner = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (pTVar2 = (pCVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Func<int,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_,
                 MethodInfo__System__Func<int,_bool>__Func_System__Object__void__);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                 ,
                 MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Func_System__Object__void__
                );
      pUVar4 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar4,(MVWorldObjectClient *)this,owner,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)pUVar3,(Func_3_Int32_MVInteractableBase_Boolean_ *)this_00
                 ,2.5,(MethodInfo *)0x0);
      pCVar1 = (this->fields).collectTheItemObject;
      (this->fields).useInteractor = pUVar4;
      if (pCVar1 != (CollectTheItemObject *)0x0) {
        pTVar2 = (pCVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)pUVar4,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,
                   MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                  );
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pCVar1 = (this->fields).collectTheItemObject;
          if (pCVar1 != (CollectTheItemObject *)0x0) {
            pTVar2 = (pCVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,
                       MethodInfo__System__EventHandler<TriggerEventArgs>__EventHandler_System__Object__void__
                      );
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* CollectTheItemCollectableInstance(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance__ctor
               (CollectTheItemCollectableInstance *this,
               Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).timeCreated = fVar1;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 == (PrefabPool *)0x0) {
    func_?();
    pCStack2 = extraout_EDX;
    pCStack3 = unaff_EDI;
  }
  else {
    prefabObject = (ObjectPrefab *)
                   InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                             ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    IVar4 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
              ((MVWorldObjectClient *)this,
               IVar4 & (InteractionFlags__Enum_CanEnterPlay|
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
               method_00);
    pCStack2 = (CollectTheItemObject *)(this->fields)._._._.component;
    if (pCStack2 == (CollectTheItemObject *)0x0) {
      (this->fields).collectTheItemObject = (CollectTheItemObject *)0x0;
      return;
    }
    bVar5 = (TypeInfo__CollectTheItemObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCStack2->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pCStack2->klass)->_1).typeHierarchy[bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__CollectTheItemObject)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pCVar7 = (CollectTheItemObject *)0x0;
    if (bVar6) {
      pCVar7 = pCStack2;
    }
    pCStack3 = TypeInfo__CollectTheItemObject;
    if (pCVar7 != (CollectTheItemObject *)0x0) {
      (this->fields).collectTheItemObject = pCVar7;
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 get_CollectTheItemCollectableID() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectableInstance::
        CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                  (CollectTheItemCollectableInstance *this,MethodInfo *method)

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
  iVar1 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,iVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObject *)0x0) {
      return *(int32_t *)(in_stack_3 + 0xc);
    }
  }
  uStack4 = 0;
  func_?();
  pcVar5 = (code *)swi(3);
  iVar1 = (*pcVar5)();
  return iVar1;
}


/* Boolean get_HasArrowIndicator() */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_get_HasArrowIndicator
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.blueprintData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_hasIndicator
                        ,
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


/* Boolean get_IsOriginalInstance() */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_get_IsOriginalInstance
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

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
  bVar1 = Extensions::Extensions_ContainsObscuredKey
                    (hashtable,StringLiteral_OriginalId,(MethodInfo *)0x0);
  return bVar1 == 0;
}


/* Int32 get_OriginalInstanceID() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectableInstance::
        CollectTheItemCollectableInstance_get_OriginalInstanceID
                  (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar2 = Extensions::Extensions_GetObscuredType
                       (hashtable,StringLiteral_OriginalId,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      func_?();
    }
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        pOVar3 = (ObscuredInt *)func_?();
        iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar3,(MethodInfo *)0x0);
        return iVar4;
      }
      func_?();
    }
    func_?();
    pcVar5 = (code *)swi(3);
    iVar4 = (*pcVar5)();
    return iVar4;
  }
  pIVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  return (int32_t)pIVar6;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_triggerBoxEvents_TriggerEnter
               (CollectTheItemCollectableInstance *this,Object *sender,TriggerEventArgs *e,
               MethodInfo *method)

{
  if (e != (TriggerEventArgs *)0x0) {
    bVar1 = CollectTheItemCollectableInstance_CanPickupWithoutUse
                      (this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      CollectTheItemCollectableInstance_SendEnterEvent
                (this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

