
/* Boolean CanPickupWithoutUse(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_CanPickupWithoutUse
               (CollectTheItemCollectableInstance *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                   );
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                   );
    func_?(&TypeInfo__MVJetPack);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__VehiclePickupOwner);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (pMVar1,instigator,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      if (pMVar2 == (MVWorldObject *)0x0) {
        return 0;
      }
      pLVar3 = pMVar2[1].fields.inputLinkRefs;
      if (pLVar3 != (List_1_MV_WorldObject_Link_ *)0x0) {
        pOVar4 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           ((GameObject *)pLVar3,
                            MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                           );
        if (((pOVar4 == (Object_1 *)0x0) ||
            ((pOVar4->klass->_1).typeHierarchyDepth <
             (TypeInfo__VehiclePickupOwner->_1).typeHierarchyDepth)) ||
           ((pOVar4->klass->_1).typeHierarchy
            [(TypeInfo__VehiclePickupOwner->_1).typeHierarchyDepth - 1] !=
            (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            if ((pMVar2->klass->_1).typeHierarchyDepth <
                (TypeInfo__MVJetPack->_1).typeHierarchyDepth) {
              return 0;
            }
            if ((MVJetPack__Class *)
                (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVJetPack->_1).typeHierarchyDepth - 1]
                != TypeInfo__MVJetPack) {
              return 0;
            }
            pLVar3 = pMVar2[1].fields.inputLinkRefs;
            if (pLVar3 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
            pOVar4 = (Object_1 *)
                     Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pLVar3,
                                MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                               );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              (pOVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return 0;
            }
            if (pOVar4 == (Object_1 *)0x0) goto code_?;
            pOVar6 = (Object_1 *)pOVar4[4].monitor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              return 1;
            }
            pOVar6 = (Object_1 *)pOVar4[4].monitor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              (pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return 0;
            }
            if (pOVar4[4].monitor == (MonitorData *)0x0) goto code_?;
            iVar7 = func_?();
          }
          else {
            if (pOVar4 == (Object_1 *)0x0) goto code_?;
            pOVar6 = (Object_1 *)pOVar4[4].monitor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              return 1;
            }
            pOVar6 = (Object_1 *)pOVar4[4].monitor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              (pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              return 0;
            }
            if (pOVar4[4].monitor == (MonitorData *)0x0) goto code_?;
            iVar7 = func_?();
          }
          if (iVar7 != 5) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar5 = (*pcVar8)();
  return bVar5;
}


/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_CheckCanUse
               (CollectTheItemCollectableInstance *this,int32_t woId,
               MVInteractableBase *interactable,MethodInfo *method)

{
  if (interactable == (MVInteractableBase *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = (*(interactable->klass->vtable).__unknown_5.methodPtr)
                    (interactable,8,(interactable->klass->vtable).__unknown_5.method);
  if (cVar3 == '\0') {
    cVar3 = (*(interactable->klass->vtable).__unknown_5.methodPtr)
                      (interactable,7,(interactable->klass->vtable).__unknown_5.method);
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
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
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
        pUVar6 = (UnityAction_2_System_Object_System_Object_ *)func_?();
        if (pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar6,(Object *)pUVar4,
                     MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar3 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                      (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
            pCVar2 = (this->fields).collectTheItemObject;
            if (pCVar2 != (CollectTheItemObject *)0x0) {
              pUVar4 = (this->fields).useInteractor;
              pTVar3 = (pCVar2->fields).triggerBoxEvents;
              pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              if (pUVar6 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar6,(Object *)pUVar4,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar3 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
                  if (piVar5 == (int *)0x0) {
                    return 0;
                  }
                  bVar1 = (**(code **)(*piVar5 + 0x32c))
                                    (piVar5,worldObjectClientManager,errorText,
                                     *(undefined4 *)(*piVar5 + 0x330));
                  return bVar1;
                }
              }
            }
          }
        }
      }
    }
    func_?();
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
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_);
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                   );
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&TypeInfo__MVGroup);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar2 == (IEditModeUI *)0x0) {
code_?:
      func_?();
    }
    else {
      pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
      pUVar4 = (UnityAction_1_System_ByteEnum_ *)
               func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      if (pUVar4 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      if ((pDVar3 == (Delegate *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
        func_?();
        goto code_?;
      }
    }
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
code_?:
    if ((this->fields)._._._.PositionChanged !=
        (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      pUVar6 = (this->fields)._._._.PositionChanged;
      pUVar7 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
      if (pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar7,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (this->fields)._._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
        func_?();
        goto code_?;
      }
      pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        (this->fields)._._._.PositionChanged = pUVar6;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((((pMVar9 == (MVWorldObjectClientManager *)0x0) ||
           (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                               (pMVar9,(MethodInfo *)0x0), pMVar10 == (MVGroup *)0x0)) ||
          (pMVar8 == (MVWorldObjectClientManager *)0x0)) ||
         (pMVar10 = (MVGroup *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar8,(pMVar10->fields)._._.id,(MethodInfo *)0x0),
         pMVar10 == (MVGroup *)0x0)) goto code_?;
      if (((TypeInfo__MVGroup->_1).typeHierarchyDepth <= (pMVar10->klass->_1).typeHierarchyDepth) &&
         ((MVGroup__Class *)
          (pMVar10->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVGroup)) {
        MVGroup::MVGroup_RemoveChild(pMVar10,(this->fields)._._._._.id,(MethodInfo *)0x0);
        this_00 = (this->fields).cullingSubscriberBase;
        if (this_00 != (CullingSubscriberBase *)0x0) {
          CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
          (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
          func_?();
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    iVar11 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar8,iVar11,(MethodInfo *)0x0);
    if (pMVar12 == (MVWorldObject *)0x0) {
      return;
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    iVar11 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
    if (((pMVar9 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar9,iVar11,(MethodInfo *)0x0), pMVar12 == (MVWorldObject *)0x0)) ||
       (pMVar8 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    this_01 = (CollectTheItemCollectable *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar8,(pMVar12->fields).groupId,(MethodInfo *)0x0);
    if (this_01 == (CollectTheItemCollectable *)0x0) {
      return;
    }
    if ((this_01->klass->_1).typeHierarchyDepth <
        (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth) {
      return;
    }
    if ((CollectTheItemCollectable__Class *)
        (this_01->klass->_1).typeHierarchy
        [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
        TypeInfo__CollectTheItemCollectable) {
      return;
    }
    if ((this_01->fields)._._._.PositionChanged ==
        (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      iVar11 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                         (this_01,(MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObjectClientManager *)0x0) {
        pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar8,iVar11,(MethodInfo *)0x0);
        if (((pMVar12 == (MVWorldObject *)0x0) ||
            ((pMVar12->klass->_1).typeHierarchyDepth <
             (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth)) ||
           ((CollectTheItemDropOff__Class *)
            (pMVar12->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
            TypeInfo__CollectTheItemDropOff)) {
          return;
        }
        pDVar3 = (Delegate *)pMVar12[3].monitor;
        pUVar4 = (UnityAction_1_System_ByteEnum_ *)func_?();
        if (pUVar4 != (UnityAction_1_System_ByteEnum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_,
                     (MethodInfo *)0x0);
          pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                             (pDVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
          if (pDVar3 == (Delegate *)0x0) {
            pMVar12[3].monitor = (MonitorData *)0x0;
code_?:
            func_?();
            return;
          }
          pMVar13 = (MonitorData *)func_?();
          if (pMVar13 != (MonitorData *)0x0) {
            pMVar12[3].monitor = pMVar13;
            iVar5 = func_?();
            if (iVar5 != 0) goto code_?;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
    pUVar6 = (this_01->fields)._._._.PositionChanged;
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    if (pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar7,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar6,(Delegate *)pUVar7,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (this_01->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pUVar6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar6 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this_01->fields)._._._.PositionChanged = pUVar6;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean DoPickup(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_DoPickup
               (CollectTheItemCollectableInstance *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_CollectTheItemCollectableId);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,instigatorWOID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      return 0;
    }
    this_00 = pMVar2[1].fields.inputLinkRefs;
    if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    ((GameObject *)this_00,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 0;
      }
      if (x != (Object_1 *)0x0) {
        (*(code *)x->klass[1]._0.byval_arg.data)();
        this_01 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          id = CollectTheItemCollectableInstance_get_OriginalInstanceID(unaff_EBX,(MethodInfo *)0x0)
          ;
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar1,id,(MethodInfo *)0x0);
            if (pMVar2 == (MVWorldObject *)0x0) {
              return 0;
            }
            CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                      (unaff_EBX,(MethodInfo *)0x0);
            value = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this_01,(Object *)StringLiteral_CollectTheItemCollectableId,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            cVar4 = (*(code *)x->klass[1]._0.name)();
            return cVar4 != '\0';
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* Void Enter(Int32) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_Enter
               (CollectTheItemCollectableInstance *this,int32_t instigatorWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsPlaying((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if ((bVar1 != 0) || ((this->fields).isTaken == 0)) {
code_?:
    bVar1 = CollectTheItemCollectableInstance_DoPickup(this,instigatorWoID,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      (this->fields).isTaken = 1;
    }
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,instigatorWoID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      return;
    }
    this_00 = pMVar2[1].fields.inputLinkRefs;
    if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    ((GameObject *)this_00,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      instigatorWoID = (int32_t)&UNK_?;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
      if (x != (Object_1 *)0x0) {
        func_?();
        goto code_?;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleStateChange(PickupItemState) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_HandleStateChange
               (CollectTheItemCollectableInstance *this,PickupItemState__Enum state,
               MethodInfo *method)

{
  (this->fields).currentState = state;
  if (state != PickupItemState__Enum_Listening) {
    if (state == PickupItemState__Enum_Pickup) {
      pCVar1 = (this->fields).collectTheItemObject;
      if ((pCVar1 == (CollectTheItemObject *)0x0) ||
         (pGVar2 = (pCVar1->fields).greyOutObject, pGVar2 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
      (this->fields).isTaken = 1;
    }
    return;
  }
  pCVar1 = (this->fields).collectTheItemObject;
  (this->fields).isTaken = 0;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (pGVar2 = (pCVar1->fields).greyOutObject, pGVar2 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_Initialize
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                   );
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  CollectTheItemCollectableInstance_SetupInstance(this,(MethodInfo *)0x0);
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 & 0xfffffffe;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar2;
    CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
    pCVar4 = (this->fields).collectTheItemObject;
    if ((pCVar4 != (CollectTheItemObject *)0x0) &&
       (pCVar5 = (pCVar4->fields).blinker, pCVar5 != (CollectTheItemBlinker *)0x0)) {
      (pCVar5->fields)._.visible = 1;
      CollectTheItemCollectableInstance_SetupUseInteractor(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar6 == MVGameMode__Enum_Edit) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
          (IEditModeUI *)0x0) {
        pDVar7 = (Delegate *)func_?();
        this_01 = (UnityAction_1_System_ByteEnum_ *)func_?();
        if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (this_01,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                     ,(MethodInfo *)0x0);
          pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                             (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
          if ((pDVar7 != (Delegate *)0x0) && (iVar8 = func_?(), iVar8 == 0))
          goto code_?;
          func_?();
          goto code_?;
        }
      }
    }
    else {
code_?:
      pCVar4 = (this->fields).collectTheItemObject;
      if ((pCVar4 != (CollectTheItemObject *)0x0) &&
         (this_00 = (pCVar4->fields).greyOutScriptEditMode, this_00 != (GreyOutObjectScript *)0x0))
      {
        GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                  (this_00,(MethodInfo *)0x0);
        CollectTheItemCollectableInstance_SetupUseInteractor(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeInstanceWithData() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_InitializeInstanceWithData
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  index = 0;
  if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    for (; index < (this_02->fields)._size; index = index + 1) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,index,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
      if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pCVar2 = (this->fields).collectTheItemObject;
      if ((pCVar2 == (CollectTheItemObject *)0x0) ||
         (pTVar3 = (Transform *)(pCVar2->fields).cullingObject, pTVar3 == (Transform *)0x0))
      goto code_?;
      p = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    ((GameObject *)pTVar3,(MethodInfo *)0x0);
      if (pTVar3 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                (pTVar3,p,(MethodInfo *)0x0);
      this = (CollectTheItemCollectableInstance *)
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_;
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,index,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                        );
      if (RVar1 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pTVar3 = *(Transform **)((int)RVar1 + 0x90);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar3 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar3,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
    }
    pCVar2 = (this->fields).collectTheItemObject;
    if (pCVar2 != (CollectTheItemObject *)0x0) {
      this_00 = (pCVar2->fields).triggerBoxEvents;
      this_03 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_03,(Object *)this,
                   MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (this_00 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (this_00,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0);
          pCVar2 = (this->fields).collectTheItemObject;
          if ((pCVar2 != (CollectTheItemObject *)0x0) &&
             (this_01 = (pCVar2->fields).greyOutObject, this_01 != (GreyOutObjectScript *)0x0)) {
            GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                      (this_01,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&
                              UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                             );
              cRam_? = '\x01';
            }
            pCVar2 = (this->fields).collectTheItemObject;
            if (pCVar2 != (CollectTheItemObject *)0x0) {
              pCVar4 = (pCVar2->fields).blinker;
              source = (((this->fields).collectTheItemObject)->fields).visualObject;
              if (source != (GameObject *)0x0) {
                pMVar5 = (MeshFilter__Array *)
                         Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                   ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                   );
                if (pCVar4 != (CollectTheItemBlinker *)0x0) {
                  (pCVar4->fields)._.meshFilters = pMVar5;
                  func_?(&(pCVar4->fields)._.meshFilters,pMVar5);
                  pCVar2 = (this->fields).collectTheItemObject;
                  if ((pCVar2 != (CollectTheItemObject *)0x0) &&
                     (pCVar4 = (pCVar2->fields).blinker, pCVar4 != (CollectTheItemBlinker *)0x0)) {
                    (pCVar4->fields)._.visible = 1;
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnCollected(Boolean) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnCollected
               (CollectTheItemCollectableInstance *this,bool shouldBeActiveOnCollect,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (this_00 = (pCVar1->fields)._.mainCollider, this_00 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (this_00,shouldBeActiveOnCollect,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (this_01 = (pCVar1->fields).visualObject, this_01 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,shouldBeActiveOnCollect,(MethodInfo *)0x0);
      bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
      if (((bVar2 == 0) ||
          (MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0),
          MVar3 != MVGameMode__Enum_Edit)) || (shouldBeActiveOnCollect != 0)) {
        bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
        if ((bVar2 != 0) || (shouldBeActiveOnCollect != 0)) {
          return;
        }
        pCVar1 = (this->fields).collectTheItemObject;
        if (pCVar1 != (CollectTheItemObject *)0x0) {
          this_03 = (pCVar1->fields).triggerBoxEvents;
          this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          if ((this_04 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_04,(Object *)this,
                         MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0), this_03 != (TriggerBoxEvents *)0x0)) {
            TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                      (this_03,(EventHandler_1_TriggerEventArgs_ *)this_04,(MethodInfo *)0x0);
            (this->fields).isTaken = 1;
            return;
          }
        }
      }
      else {
        pCVar1 = (this->fields).collectTheItemObject;
        if ((pCVar1 != (CollectTheItemObject *)0x0) &&
           (this_02 = (pCVar1->fields).greyOutScriptEditMode, this_02 != (GreyOutObjectScript *)0x0)
           ) {
          GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
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
  func_?();
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
    pCVar2 = (this->fields).collectTheItemObject;
    if ((pCVar2 != (CollectTheItemObject *)0x0) &&
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


/* Void Reset() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_Reset
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (this_00 = (pCVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (this_01 = (pCVar1->fields)._.mainCollider, this_01 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (this_01,1,(MethodInfo *)0x0);
      bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
        if (MVar3 == MVGameMode__Enum_Edit) {
          pCVar1 = (this->fields).collectTheItemObject;
          if ((pCVar1 != (CollectTheItemObject *)0x0) &&
             ((pCVar1->fields).greyOutScriptEditMode != (GreyOutObjectScript *)0x0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            this_02 = (Action_1_Object_ *)func_?();
            if (this_02 != (Action_1_Object_ *)0x0) {
              mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                        (this_02,(Object *)0x0,
                         MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                         ,(MethodInfo *)0x0);
              GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                        (in_stack_4,
                         (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_02,
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
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,instigator,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return 0;
    }
    this_00 = pMVar3[1].fields.inputLinkRefs;
    if (this_00 != (List_1_MV_WorldObject_Link_ *)0x0) {
      x = (Object_1 *)
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                    ((GameObject *)this_00,
                     MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                    );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return 0;
      }
      if (x != (Object_1 *)0x0) {
        cVar4 = (*(code *)x->klass[1]._0.generic_class)();
        if (cVar4 != '\0') {
          return 0;
        }
        cVar4 = (*(code *)x->klass[1]._0.generic_class)();
        if (cVar4 != '\0') {
          return 0;
        }
        bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
        if ((bVar1 == 0) && ((this->fields).isTaken != 0)) {
          return 0;
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                    (this_02,(this->fields)._._._._.id,(int32_t)this,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Void SetBlinker() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetBlinker
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if (pCVar1 != (CollectTheItemObject *)0x0) {
    pCVar2 = (pCVar1->fields).blinker;
    source = (((this->fields).collectTheItemObject)->fields).visualObject;
    if (source != (GameObject *)0x0) {
      pMVar3 = (MeshFilter__Array *)
               Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                         );
      if (pCVar2 != (CollectTheItemBlinker *)0x0) {
        (pCVar2->fields)._.meshFilters = pMVar3;
        func_?(&(pCVar2->fields)._.meshFilters,pMVar3);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetRotationEnabled(Boolean) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetRotationEnabled
               (CollectTheItemCollectableInstance *this,bool enableRotation,MethodInfo *method)

{
  pCVar1 = (this->fields).collectTheItemObject;
  if ((pCVar1 != (CollectTheItemObject *)0x0) &&
     (pRVar2 = (pCVar1->fields).rotator, pRVar2 != (RotateLocal *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar2,enableRotation,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (pRVar2 = (pCVar1->fields).rotator, pRVar2 != (RotateLocal *)0x0)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupCulling
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

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
  if (this_00 == (Transform *)0x0) {
code_?:
    func_?();
  }
  else {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = (uint)pVVar1->y;
    fVar4 = pVVar1->z;
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                func_?();
    if (unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              ((UnityAction_1_UnityEngine_Vector2_ *)unaff_EBX,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
               ,(MethodInfo *)0x0);
    this_01 = (CullingSubscriberBase *)func_?();
    unaff_EDI = (MVWorldObject *)0x0;
    if (this_01 == (CullingSubscriberBase *)0x0) goto code_?;
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_3;
    position.y = (float)uStack_3._4_4_;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_01,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)unaff_EBX,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_01;
    func_?();
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                (this->fields)._._._.PositionChanged;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    unaff_EDI = (MVWorldObject *)0x0;
    if (pUVar5 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    unaff_EDI = (MVWorldObject *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)unaff_EBX,(Delegate *)pUVar5,(MethodInfo *)0x0);
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (unaff_EDI == (MVWorldObject *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      iVar6 = 0;
    }
    else {
      uStack_3 = CONCAT44(uStack_3._4_4_,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
      VStack_2.y = (float)&UNK_?;
      VStack_2.z = (float)unaff_EDI;
      pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
      if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
      (this->fields)._._._.PositionChanged = pUVar7;
      unaff_EBX = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      uStack_3 = CONCAT44(uStack_3._4_4_,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
      VStack_2.y = (float)&UNK_?;
      VStack_2.z = (float)unaff_EDI;
      iVar6 = func_?();
      if (iVar6 == 0) goto code_?;
    }
    uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
    VStack_2.z = (float)&(this->fields)._._._.PositionChanged;
    VStack_2.y = (float)&UNK_?;
    func_?();
    MVar8 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar8 != MVGameMode__Enum_Edit) {
      return;
    }
    unaff_EDI = (MVWorldObject *)
                MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    id = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
    if ((((unaff_EBX == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
         || (pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                ((MVWorldObjectClientManager *)unaff_EBX,id,(MethodInfo *)0x0),
            pMVar9 == (MVWorldObject *)0x0)) || (unaff_EDI == (MVWorldObject *)0x0)) ||
       (unaff_EDI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              ((MVWorldObjectClientManager *)unaff_EDI,(pMVar9->fields).groupId,
                               (MethodInfo *)0x0), unaff_EDI == (MVWorldObject *)0x0))
    goto code_?;
    pMVar10 = unaff_EDI[1].klass;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    unaff_EBX = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
    if (pUVar5 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    this = (CollectTheItemCollectableInstance *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar10,(Delegate *)pUVar5,(MethodInfo *)0x0);
    unaff_EBX = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (this == (CollectTheItemCollectableInstance *)0x0) {
      uStack_3 = (ulonglong)uStack_3._4_4_ << 0x20;
      unaff_EDI[1].klass = (MVWorldObject__Class *)0x0;
      VStack_2.z = (float)(unaff_EDI + 1);
      VStack_2.y = (float)&UNK_?;
      func_?();
      return;
    }
    uStack_3 = CONCAT44(uStack_3._4_4_,
                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                       );
    VStack_2.y = (float)&UNK_?;
    VStack_2.z = (float)this;
    pMVar10 = (MVWorldObject__Class *)func_?();
    if (pMVar10 != (MVWorldObject__Class *)0x0) {
      unaff_EDI[1].klass = pMVar10;
      unaff_EBX = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      uStack_3 = CONCAT44(uStack_3._4_4_,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
      VStack_2.y = (float)&UNK_?;
      VStack_2.z = (float)this;
      iVar6 = func_?();
      if (iVar6 != 0) {
        uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
        VStack_2.z = (float)(unaff_EDI + 1);
        VStack_2.y = (float)&UNK_?;
        func_?();
        return;
      }
    }
  }
  uStack_3 = CONCAT44(uStack_3._4_4_,unaff_EBX);
  VStack_2.y = (float)&UNK_?;
  VStack_2.z = (float)this;
  func_?();
code_?:
  uStack_3 = CONCAT44(uStack_3._4_4_,unaff_EBX);
  VStack_2.y = (float)&UNK_?;
  VStack_2.z = (float)unaff_EDI;
  func_?();
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
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    cRam_? = '\x01';
  }
  CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar2 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,iVar2,(MethodInfo *)0x0);
    if ((pMVar3 != (MVWorldObject *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      this_01 = (CollectTheItemCollectable *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,(pMVar3->fields).groupId,(MethodInfo *)0x0);
      if (this_01 != (CollectTheItemCollectable *)0x0) {
        if (((TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth <=
             (this_01->klass->_1).typeHierarchyDepth) &&
           ((CollectTheItemCollectable__Class *)
            (this_01->klass->_1).typeHierarchy
            [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          iVar2 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                            (this_01,(MethodInfo *)0x0);
          if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
          this_02 = (CollectTheItemDropOff *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar1,iVar2,(MethodInfo *)0x0);
          if (this_02 != (CollectTheItemDropOff *)0x0) {
            if (((TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth <=
                 (this_02->klass->_1).typeHierarchyDepth) &&
               ((CollectTheItemDropOff__Class *)
                (this_02->klass->_1).typeHierarchy
                [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] ==
                TypeInfo__CollectTheItemDropOff)) {
              CollectTheItemDropOff::CollectTheItemDropOff_ReInitializeVisuals
                        (this_02,(MethodInfo *)0x0);
            }
          }
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupInstance() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupInstance
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  method_00 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_);
    func_?(&TypeInfo__CollectTheItemCollectable);
    func_?(&TypeInfo__CollectTheItemDropOff);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  CollectTheItemCollectableInstance_InitializeInstanceWithData(this,(MethodInfo *)0x0);
  CollectTheItemCollectableInstance_SetupCulling(this,(MethodInfo *)0x0);
  collection = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                         ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3___ctor_1
            (this_00,(IEnumerable_1_UnityEngine_Vector3_ *)collection,
             MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
            );
  pHVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
           HashSet_1_System_Object__GetEnumerator
                     ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffd8,
                      (HashSet_1_System_Object_ *)this_00,
                      MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
  gameObject = (List_1_MV_WorldObject_Link_ *)pHVar1->_current;
  while( true ) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Int32]::
            HashSet_1_T_Enumerator_System_Int32__MoveNext
                      ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffc4,
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                      );
    if (bVar2 == 0) break;
    pLVar3 = gameObject;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar4,(int32_t)gameObject,(MethodInfo *)0x0);
    gameObject = pLVar3;
    if (pMVar5 != (MVWorldObject *)0x0) {
      if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
           (pMVar5->klass->_1).typeHierarchyDepth) &&
         ((MVCubeModelInstance__Class *)
          (pMVar5->klass->_1).typeHierarchy
          [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
          TypeInfo__MVCubeModelInstance)) {
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        gameObject = pMVar5[1].fields.inputLinkRefs;
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)gameObject,iVar6,(MethodInfo *)0x0)
        ;
      }
    }
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffffc4,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
             method_00);
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar6 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,iVar6,(MethodInfo *)0x0);
  if ((pMVar5 == (MVWorldObject *)0x0) || (pMVar4 == (MVWorldObjectClientManager *)0x0))
  goto code_?;
  this_02 = (CollectTheItemCollectable *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar4,(pMVar5->fields).groupId,(MethodInfo *)0x0);
  if (this_02 == (CollectTheItemCollectable *)0x0) goto code_?;
  if (((((this_02->klass->_1).typeHierarchyDepth <
         (TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth) ||
       ((CollectTheItemCollectable__Class *)
        (this_02->klass->_1).typeHierarchy
        [(TypeInfo__CollectTheItemCollectable->_1).typeHierarchyDepth - 1] !=
        TypeInfo__CollectTheItemCollectable)) ||
      ((this_02->fields).controller == (CollectTheItem *)0x0)) ||
     ((((this_02->fields).controller)->fields).dropOff == (CollectTheItemDropOff *)0x0))
  goto code_?;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar6 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                    (this_02,(MethodInfo *)0x0);
  if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar4,iVar6,(MethodInfo *)0x0);
  if (pMVar5 == (MVWorldObject *)0x0) goto code_?;
  if (((pMVar5->klass->_1).typeHierarchyDepth <
       (TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth) ||
     ((CollectTheItemDropOff__Class *)
      (pMVar5->klass->_1).typeHierarchy
      [(TypeInfo__CollectTheItemDropOff->_1).typeHierarchyDepth - 1] !=
      TypeInfo__CollectTheItemDropOff)) goto code_?;
  this_04 = _UNK_?;
  bVar2 = CollectTheItemCollectableInstance_get_IsOriginalInstance
                    ((CollectTheItemCollectableInstance *)&UNK_?,(MethodInfo *)0x0);
  if (this_04 == (Behaviour *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            (this_04,bVar2 == 0,(MethodInfo *)0x0);
  pDVar7 = (Delegate *)pMVar5[3].monitor;
  this_03 = (UnityAction_1_System_ByteEnum_ *)func_?();
  if (this_03 == (UnityAction_1_System_ByteEnum_ *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
  UnityAction_1_System_ByteEnum___ctor
            (this_03,(Object *)&UNK_?,
             MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_,(MethodInfo *)0x0);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar7,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pDVar7 == (Delegate *)0x0) {
    pMVar5[3].monitor = (MonitorData *)0x0;
code_?:
    func_?();
code_?:
    *unaff_FS_OFFSET = this;
    return;
  }
  pMVar8 = (MonitorData *)func_?();
  if (pMVar8 != (MonitorData *)0x0) {
    pMVar5[3].monitor = pMVar8;
    iVar9 = func_?();
    if (iVar9 != 0) goto code_?;
  }
  func_?();
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
    func_?(&
                    MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                   );
    func_?(&MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).collectTheItemObject;
  if (pCVar1 != (CollectTheItemObject *)0x0) {
    owner = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).collectTheItemObject;
    if ((pCVar1 != (CollectTheItemObject *)0x0) &&
       (pTVar2 = (pCVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) {
      triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar2,(MethodInfo *)0x0);
      this_00 = (Predicate_1_Int32Enum_ *)func_?(TypeInfo__System__Func<int,_bool>);
      if (this_00 != (Predicate_1_Int32Enum_ *)0x0) {
        mscorlib.dll::System::Predicate`1[Int32Enum]::Predicate_1_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_,
                   (MethodInfo *)0x0);
        this_01 = (Func_3_Int32_Object_Boolean_ *)
                  func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
        if (this_01 != (Func_3_Int32_Object_Boolean_ *)0x0) {
          mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                    (this_01,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                     ,(MethodInfo *)0x0);
          pUVar3 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
          if (pUVar3 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor__ctor
                      (pUVar3,(MVWorldObjectClient *)this,owner,0,triggerCollider,
                       (Func_2_Int32_Boolean_ *)this_00,
                       (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,(MethodInfo *)0x0);
            (this->fields).useInteractor = pUVar3;
            func_?(&(this->fields).useInteractor,pUVar3);
            pCVar1 = (this->fields).collectTheItemObject;
            if (pCVar1 != (CollectTheItemObject *)0x0) {
              pUVar3 = (this->fields).useInteractor;
              pTVar2 = (pCVar1->fields).triggerBoxEvents;
              pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                       func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              if (pUVar4 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar4,(Object *)pUVar3,
                           MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
                  pCVar1 = (this->fields).collectTheItemObject;
                  if (pCVar1 != (CollectTheItemObject *)0x0) {
                    pTVar2 = (pCVar1->fields).triggerBoxEvents;
                    pUVar3 = (this->fields).useInteractor;
                    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                    if (pUVar4 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                (pUVar4,(Object *)pUVar3,
                                 MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                                 ,(MethodInfo *)0x0);
                      if (pTVar2 != (TriggerBoxEvents *)0x0) {
                        TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                                  (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,
                                   (MethodInfo *)0x0);
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
  }
  func_?();
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
    func_?(&TypeInfo__CollectTheItemObject);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).timeCreated = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
    func_?();
  }
  else {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,
               (ObjectPrefab *)(pPVar2->fields).collectTheItemCollectable,worldObjects,
               (MethodInfo *)0x0);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 & 0xffffdfff;
    pCVar4 = (CollectTheItemObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    if (pCVar4 == (CollectTheItemObject *)0x0) {
      (this->fields).collectTheItemObject = (CollectTheItemObject *)0x0;
      func_?();
      return;
    }
    if (((TypeInfo__CollectTheItemObject->_1).typeHierarchyDepth <=
         (((ObjectPrefab__Class *)pCVar4->klass)->_1).typeHierarchyDepth) &&
       ((((ObjectPrefab__Class *)pCVar4->klass)->_1).typeHierarchy
        [(TypeInfo__CollectTheItemObject->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)TypeInfo__CollectTheItemObject)) {
      (this->fields).collectTheItemObject = pCVar4;
      if (((TypeInfo__CollectTheItemObject->_1).typeHierarchyDepth <=
           (((ObjectPrefab__Class *)pCVar4->klass)->_1).typeHierarchyDepth) &&
         ((((ObjectPrefab__Class *)pCVar4->klass)->_1).typeHierarchy
          [(TypeInfo__CollectTheItemObject->_1).typeHierarchyDepth - 1] ==
          (Il2CppClass *)TypeInfo__CollectTheItemObject)) {
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 get_CollectTheItemCollectableID() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectableInstance::
        CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                  (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar1 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,iVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObject *)0x0) {
      return (pMVar2->fields).groupId;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}


/* Boolean get_HasArrowIndicator() */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_get_HasArrowIndicator
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

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
                       (this_00,(Object *)StringLiteral_hasIndicator,
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


/* Boolean get_IsOriginalInstance() */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_get_IsOriginalInstance
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_OriginalId);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
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
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (cRam_? == '\0') {
    ppEVar2 = &TypeInfo__Extensions;
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,ppEVar2,uVar1);
    func_?(&StringLiteral_OriginalId);
    cRam_? = '\x01';
  }
  bVar3 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = Extensions::Extensions_GetObscuredType
                       (hashtable,StringLiteral_OriginalId,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?();
    }
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        pOVar5 = (ObscuredInt *)func_?();
        iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
        return iVar6;
      }
      func_?();
    }
    func_?();
    pcVar7 = (code *)swi(3);
    iVar6 = (*pcVar7)();
    return iVar6;
  }
  return (this->fields)._._._._.id;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_triggerBoxEvents_TriggerEnter
               (CollectTheItemCollectableInstance *this,Object *sender,TriggerEventArgs *e,
               MethodInfo *method)

{
  if (e == (TriggerEventArgs *)0x0) goto code_?;
  bVar1 = CollectTheItemCollectableInstance_CanPickupWithoutUse
                    (this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    id = (e->fields).instigatorWOID;
    if (cRam_? == '\0') {
      func_?(&
                      MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
    if (((bVar1 != 0) ||
        (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
        _UNK_? <= fVar2 - (this->fields).timeCreated)) && ((this->fields).currentState == 0))
    {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,id,(MethodInfo *)0x0);
      if (pMVar4 != (MVWorldObject *)0x0) {
        this_00 = pMVar4[1].fields.inputLinkRefs;
        if (this_00 == (List_1_MV_WorldObject_Link_ *)0x0) goto code_?;
        x = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      ((GameObject *)this_00,
                       MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                      );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          (x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (x == (Object_1 *)0x0) goto code_?;
          cVar5 = (*(code *)x->klass[1]._0.generic_class)();
          if (((cVar5 == '\0') && (cVar5 = (*(code *)x->klass[1]._0.generic_class)(), cVar5 == '\0')
              ) && ((bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance
                                       (this,(MethodInfo *)0x0), bVar1 != 0 ||
                    ((this->fields).isTaken == 0)))) {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                      (this_02,(this->fields)._._._._.id,id,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  return;
}

