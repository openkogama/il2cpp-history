
/* Boolean CanPickupWithoutUse(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_CanPickupWithoutUse
               (CollectTheItemCollectableInstance *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVJetPack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                   (pMVar1,instigator,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,id,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        this_00 = (pMVar2->fields).gameObject;
        if (this_00 == (GameObject *)0x0) goto code_?;
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (this_00,
                             MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                            );
        if (pOVar3 != (Object *)0x0) {
          bVar4 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
          if ((bVar4 <= (pOVar3->klass->_1).naturalAligment) &&
             ((pOVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
              (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
            return 1;
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar3 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar3[1].klass != (Object__Class *)0x0) {
            pOVar5 = pOVar3[5].klass;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pOVar5 == (Object__Class *)0x0) {
              return 1;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pOVar5->_0).name == (char *)0x0) {
              return 1;
            }
            pOVar5 = pOVar3[5].klass;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pOVar5 != (Object__Class *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pOVar5->_0).name != (char *)0x0) {
                pOVar5 = pOVar3[5].klass;
                if (pOVar5 == (Object__Class *)0x0) goto code_?;
                pIVar6 = (pOVar5->_0).image;
                uVar7._0_4_ = pIVar6[5].typeCount;
                uVar7._4_4_ = pIVar6[5].exportedTypeCount;
                iVar8 = (*(code *)pIVar6[5].assembly)(pOVar5,uVar7);
                if (iVar8 == 5) {
                  return 1;
                }
              }
            }
          }
        }
        bVar4 = (TypeInfo__MVJetPack->_1).naturalAligment;
        if ((bVar4 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVJetPack__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            TypeInfo__MVJetPack)) {
          if ((pMVar2->fields).gameObject == (GameObject *)0x0) goto code_?;
          lVar9 = FUN_?();
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (lVar9 != 0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (*(longlong *)(lVar9 + 0x10) != 0) {
              lVar10 = *(longlong *)(lVar9 + 0x50);
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (lVar10 != 0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (*(longlong *)(lVar10 + 0x10) != 0) {
                  lVar10 = *(longlong *)(lVar9 + 0x50);
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (lVar10 == 0) {
                    return 0;
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (*(longlong *)(lVar10 + 0x10) == 0) {
                    return 0;
                  }
                  plVar11 = *(longlong **)(lVar9 + 0x50);
                  if (plVar11 != (longlong *)0x0) {
                    iVar8 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
                    if (iVar8 != 5) {
                      return 0;
                    }
                    return 1;
                  }
                  goto code_?;
                }
              }
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Boolean CheckCanUse(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_CheckCanUse
               (CollectTheItemCollectableInstance *this,int32_t woId,
               MVInteractableBase *interactable,MethodInfo *method)

{
  if (interactable == (MVInteractableBase *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  cVar3 = (*(interactable->klass->vtable).__unknown_7.methodPtr)
                    (interactable,8,(interactable->klass->vtable).__unknown_7.method);
  if (cVar3 == '\0') {
    cVar3 = (*(interactable->klass->vtable).__unknown_7.methodPtr)(interactable,7);
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
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (worldObjectClientManager != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (worldObjectClientManager,(this->fields)._._._._.groupId,(MethodInfo *)0x0)
      ;
      pCVar3 = (this->fields).collectTheItemObject;
      if (pCVar3 != (CollectTheItemObject *)0x0) {
        pTVar4 = (pCVar3->fields).triggerBoxEvents;
        pUVar5 = (this->fields).useInteractor;
        pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                 FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar6,(Object *)pUVar5,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar4 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
          pCVar3 = (this->fields).collectTheItemObject;
          if (pCVar3 != (CollectTheItemObject *)0x0) {
            pTVar4 = (pCVar3->fields).triggerBoxEvents;
            pUVar5 = (this->fields).useInteractor;
            pUVar6 = (UnityAction_2_System_Object_System_Object_ *)
                     FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar6,(Object *)pUVar5,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar4 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                        (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar6,(MethodInfo *)0x0);
              if (pMVar2 == (MVWorldObjectClient *)0x0) {
                bVar1 = 0;
              }
              else {
                bVar1 = (*(pMVar2->klass->vtable).Delete.methodPtr)
                                  (pMVar2,worldObjectClientManager,errorText,
                                   (pMVar2->klass->vtable).Delete.method);
              }
              return bVar1;
            }
          }
        }
      }
    }
    FUN_?();
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
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar1->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    pDVar2 = (Delegate *)FUN_?();
    pDVar3 = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(pDVar3,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar2,pDVar3,(MethodInfo *)0x0);
    pAVar4 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar2 != (Delegate *)0x0) &&
       (lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>), lVar5 == 0))
    {
      FUN_?(pDVar2,pAVar4);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_?();
  }
  if ((this->fields)._._._.PositionChanged !=
      (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
    pUVar7 = (this->fields)._._._.PositionChanged;
    pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar8,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pUVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
    pUVar9 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                FUN_?(pDVar2,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar2,pUVar9);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->fields)._._._.PositionChanged = pUVar7;
      pUVar9 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar5 = FUN_?();
      if (lVar5 == 0) {
        FUN_?(pDVar2,pUVar9);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
      lVar5 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar12 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((pMVar15 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (pMVar15,(MethodInfo *)0x0), pMVar16 == (MVGroup *)0x0)) ||
       (pMVar14 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar14,(pMVar16->fields)._._.id,(MethodInfo *)0x0);
    iVar18 = (this->fields)._._._._.id;
    if (pMVar17 == (MVWorldObjectClient *)0x0) goto code_?;
    bVar19 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar17->klass->_1).naturalAligment < bVar19) ||
       ((MVGroup__Class *)(pMVar17->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] !=
        TypeInfo__MVGroup)) {
      FUN_?(pMVar17);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pMVar17[1].klass == (MVWorldObjectClient__Class *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pMVar17[1].klass,iVar18,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
              );
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) goto code_?;
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar13 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar13) {
      uVar10 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      lVar5 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar12 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
  }
  pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar18 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
  if (pMVar14 == (MVWorldObjectClientManager *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar14,iVar18,(MethodInfo *)0x0);
  if (pMVar17 != (MVWorldObjectClient *)0x0) {
    pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pMVar15 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    iVar18 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
    if (((pMVar15 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar15,iVar18,(MethodInfo *)0x0),
        pMVar17 == (MVWorldObjectClient *)0x0)) || (pMVar14 == (MVWorldObjectClientManager *)0x0))
    goto code_?;
    this_01 = (CollectTheItemCollectable *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar14,(pMVar17->fields)._.groupId,(MethodInfo *)0x0);
    if (this_01 != (CollectTheItemCollectable *)0x0) {
      bVar19 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
      if ((bVar19 <= (this_01->klass->_1).naturalAligment) &&
         ((CollectTheItemCollectable__Class *)
          (this_01->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] ==
          TypeInfo__CollectTheItemCollectable)) {
        if ((this_01->fields)._._._.PositionChanged !=
            (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          pUVar7 = (this_01->fields)._._._.PositionChanged;
          pUVar8 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar8,(Object *)this,
                     MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)pUVar7,(Delegate *)pUVar8,(MethodInfo *)0x0);
          pUVar9 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          if (pDVar2 == (Delegate *)0x0) {
            (this_01->fields)._._._.PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          }
          else {
            pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                      FUN_?(pDVar2,
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                   );
            if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              FUN_?(pDVar2,pUVar9);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this_01->fields)._._._.PositionChanged = pUVar7;
            pUVar9 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
            ;
            lVar5 = FUN_?();
            if (lVar5 == 0) {
              FUN_?(pDVar2,pUVar9);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          func_?();
        }
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar18 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                          (this_01,(MethodInfo *)0x0);
        if (pMVar14 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar14,iVar18,(MethodInfo *)0x0);
        if (pMVar17 != (MVWorldObjectClient *)0x0) {
          bVar19 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
          if ((bVar19 <= (pMVar17->klass->_1).naturalAligment) &&
             ((CollectTheItemDropOff__Class *)
              (pMVar17->klass->_1).typeHierarchy[(ulonglong)bVar19 - 1] ==
              TypeInfo__CollectTheItemDropOff)) {
            pDVar2 = (Delegate *)pMVar17[1].fields._.outputLinkRefs;
            pDVar3 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
            FUN_?(pDVar3,this);
            pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                                (pDVar2,pDVar3,(MethodInfo *)0x0);
            pAVar20 = TypeInfo__System__Action<bool>;
            if (pDVar2 == (Delegate *)0x0) {
              pMVar17[1].fields._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
            }
            else {
              pLVar21 = (List_1_MV_WorldObject_Link_ *)
                        FUN_?(pDVar2,TypeInfo__System__Action<bool>);
              if (pLVar21 == (List_1_MV_WorldObject_Link_ *)0x0) {
                FUN_?(pDVar2,pAVar20);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pMVar17[1].fields._.outputLinkRefs = pLVar21;
              pAVar20 = TypeInfo__System__Action<bool>;
              lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<bool>);
              if (lVar5 == 0) {
                FUN_?(pDVar2,pAVar20);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            func_?(&pMVar17[1].fields._.outputLinkRefs);
          }
        }
      }
    }
  }
  return;
}


/* Boolean DoPickup(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_DoPickup
               (CollectTheItemCollectableInstance *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (pMVar1,instigatorWOID,(MethodInfo *)0x0);
  if (pMVar4 != (MVWorldObjectClient *)0x0) {
    this_00 = (pMVar4->fields).gameObject;
    if (this_00 == (GameObject *)0x0) goto code_?;
    pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_00,
                        MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                       );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar5 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar5[1].klass != (Object__Class *)0x0) {
        pOVar6 = pOVar5->klass;
        uVar7._0_2_ = pOVar6[1]._0.byval_arg.attrs;
        uVar7._2_1_ = pOVar6[1]._0.byval_arg.type;
        uVar7._3_5_ = *(undefined5 *)&pOVar6[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar6[1]._0.byval_arg.data)(pOVar5,uVar7);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        id = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
          pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar1,id,(MethodInfo *)0x0);
          if (pMVar4 == (MVWorldObjectClient *)0x0) {
            return 0;
          }
          aiStackX_10[0] =
               CollectTheItemCollectableInstance_get_CollectTheItemCollectableID
                         (this,(MethodInfo *)0x0);
          value = (Object *)FUN_?(uRam_?,aiStackX_10);
          if (this_01 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                        ->klass->rgctx_data[0x22].method;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_CollectTheItemCollectableId,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00)
            ;
            cVar8 = (*(code *)pOVar5->klass[1]._0.name)
                              (pOVar5,0x3d,0,this_01,(ulonglong)method_00 & 0xffffffff00000000,
                               pOVar5->klass[1]._0.namespaze);
            return cVar8 != '\0';
          }
        }
        goto code_?;
      }
    }
  }
  return 0;
}


/* Void Enter(Int32) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_Enter
               (CollectTheItemCollectableInstance *this,int32_t instigatorWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    cVar2 = (*(pMVar1->klass->vtable).__unknown_1.methodPtr)();
    if (cVar2 == '\0') {
      return;
    }
    bVar3 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
    if ((bVar3 != 0) || ((this->fields).isTaken == 0)) {
code_?:
      bVar3 = CollectTheItemCollectableInstance_DoPickup(this,instigatorWoID,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        (this->fields).isTaken = 1;
      }
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_01,instigatorWoID,(MethodInfo *)0x0);
      if (pMVar4 == (MVWorldObjectClient *)0x0) {
        return;
      }
      this_00 = (pMVar4->fields).gameObject;
      if (this_00 != (GameObject *)0x0) {
        pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (this_00,
                            MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                           );
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar5 == (Object *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar5[1].klass == (Object__Class *)0x0) {
          return;
        }
        pOVar6 = pOVar5->klass;
        uVar7._0_2_ = pOVar6[1]._0.byval_arg.attrs;
        uVar7._2_1_ = pOVar6[1]._0.byval_arg.type;
        uVar7._3_5_ = *(undefined5 *)&pOVar6[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar6[1]._0.byval_arg.data)(pOVar5,uVar7);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
               ,(MethodInfo *)0x0);
    GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
              (pGVar2,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,
               (MethodInfo *)0x0);
    (pGVar2->fields).isGreyedIn = 1;
    return;
  }
code_?:
  FUN_?();
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
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__OnEditModeChange_EditModeChangeArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  CollectTheItemCollectableInstance_SetupInstance(this,(MethodInfo *)0x0);
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    piVar2 = &(this->fields)._._._.interactionFlags;
    *piVar2 = *piVar2 & 0xfffffffffffffffe;
    CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Func<int,_bool>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UseInteractor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pCVar3 = (this->fields).collectTheItemObject;
    if (pCVar3 != (CollectTheItemObject *)0x0) {
      owner = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pCVar3,(MethodInfo *)0x0);
      pCVar3 = (this->fields).collectTheItemObject;
      if ((pCVar3 != (CollectTheItemObject *)0x0) &&
         (pTVar4 = (pCVar3->fields).triggerBoxEvents, pTVar4 != (TriggerBoxEvents *)0x0)) {
        triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar4,(MethodInfo *)0x0);
        useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
        FUN_?(useFunction,this,
                      MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_);
        checkCanUseFunction =
             (Func_3_Int32_MVInteractableBase_Boolean_ *)
             FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
        FUN_?(checkCanUseFunction,this,
                      MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                     );
        pUVar5 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
        UseInteractor::UseInteractor__ctor
                  (pUVar5,(MVWorldObjectClient *)this,owner,0,triggerCollider,useFunction,
                   checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
        bVar6 = iRam_? != 0;
        (this->fields).useInteractor = pUVar5;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        pCVar3 = (this->fields).collectTheItemObject;
        if (pCVar3 != (CollectTheItemObject *)0x0) {
          pTVar4 = (pCVar3->fields).triggerBoxEvents;
          pUVar5 = (this->fields).useInteractor;
          pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar11,(Object *)pUVar5,
                     MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar4 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar11,(MethodInfo *)0x0);
            pCVar3 = (this->fields).collectTheItemObject;
            if (pCVar3 != (CollectTheItemObject *)0x0) {
              pTVar4 = (pCVar3->fields).triggerBoxEvents;
              pUVar5 = (this->fields).useInteractor;
              pUVar11 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar11,(Object *)pUVar5,
                         MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                         ,(MethodInfo *)0x0);
              if (pTVar4 != (TriggerBoxEvents *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppEVar12 = &(pTVar4->fields).TriggerExit;
                a = (pTVar4->fields).TriggerExit;
                do {
                  pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,(Delegate *)pUVar11,(MethodInfo *)0x0);
                  pEVar14 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                  if (pDVar13 == (Delegate *)0x0) {
                    pEVar15 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                  }
                  else {
                    pEVar15 = (EventHandler_1_TriggerEventArgs_ *)
                              FUN_?(pDVar13,TypeInfo__System__EventHandler<TriggerEventArgs>
                                           );
                    if (pEVar15 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                      FUN_?(pDVar13,pEVar14);
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                  }
                  LOCK();
                  pEVar17 = *ppEVar12;
                  bVar6 = a == pEVar17;
                  if (bVar6) {
                    *ppEVar12 = pEVar15;
                    pEVar17 = a;
                  }
                  UNLOCK();
                  pEVar15 = a;
                  if (!bVar6) {
                    pEVar15 = pEVar17;
                  }
                  if (iRam_? != 0) {
                    uVar7 = (uint)((ulonglong)ppEVar12 >> 0xc);
                    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
                    do {
                      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                      LOCK();
                      bVar6 = uVar9 == *puVar10;
                      if (bVar6) {
                        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar6);
                  }
                  bVar6 = pEVar15 != a;
                  a = pEVar15;
                } while (bVar6);
                return;
              }
            }
          }
        }
      }
    }
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar18 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar18 != (GameSessionData *)0x0) {
    if ((pGVar18->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
          (IEditModeUI *)0x0) goto code_?;
      pDVar13 = (Delegate *)FUN_?();
      b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
      FUN_?(b,this);
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar13,b,(MethodInfo *)0x0);
      pAVar19 = TypeInfo__System__Action<EditModeChangeArgs>;
      if ((pDVar13 != (Delegate *)0x0) &&
         (lVar20 = FUN_?(pDVar13,TypeInfo__System__Action<EditModeChangeArgs>), lVar20 == 0)
         ) {
        FUN_?(pDVar13,pAVar19);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      FUN_?();
    }
    pCVar3 = (this->fields).collectTheItemObject;
    if ((pCVar3 != (CollectTheItemObject *)0x0) &&
       (this_00 = (pCVar3->fields).greyOutScriptEditMode, this_00 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                (this_00,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeInstanceWithData() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_InitializeInstanceWithData
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  uVar2 = 0;
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    lVar3 = 0x20;
    for (; (int)uVar2 < (pLVar1->fields)._size; uVar2 = uVar2 + 1) {
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pMVar5 = (pLVar1->fields)._items;
      if (pMVar5 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if ((uint)pMVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pMVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) goto code_?;
      pCVar7 = (this->fields).collectTheItemObject;
      this_00 = *(Transform **)(lVar6 + 0xd8);
      if ((pCVar7 == (CollectTheItemObject *)0x0) ||
         (pGVar8 = (pCVar7->fields).cullingObject, pGVar8 == (GameObject *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pGVar8->fields)._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      pvVar9 = (void *)(*pcRam_?)(pvVar9);
      parent = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar9,
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
      if (this_00 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,1,(MethodInfo *)0x0);
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pMVar5 = (pLVar1->fields)._items;
      if (pMVar5 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if ((uint)pMVar5->max_length <= uVar2) goto code_?;
      lVar6 = *(longlong *)((longlong)pMVar5->vector + lVar3 + -0x20);
      if (lVar6 == 0) goto code_?;
      obj = *(Object **)(lVar6 + 0xd8);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Object *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj[1].klass == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)();
      lVar3 = lVar3 + 8;
    }
    pCVar7 = (this->fields).collectTheItemObject;
    if (pCVar7 != (CollectTheItemObject *)0x0) {
      this_01 = (pCVar7->fields).triggerBoxEvents;
      this_03 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_03,(Object *)this,
                 MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 ,(MethodInfo *)0x0);
      if (this_01 != (TriggerBoxEvents *)0x0) {
        TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                  (this_01,(EventHandler_1_TriggerEventArgs_ *)this_03,(MethodInfo *)0x0);
        pCVar7 = (this->fields).collectTheItemObject;
        if ((pCVar7 != (CollectTheItemObject *)0x0) &&
           (this_02 = (pCVar7->fields).greyOutObject, this_02 != (GreyOutObjectScript *)0x0)) {
          GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
                    (this_02,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = 
          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
          ;
          pCVar7 = (this->fields).collectTheItemObject;
          if (pCVar7 != (CollectTheItemObject *)0x0) {
            pGVar8 = (pCVar7->fields).visualObject;
            pCVar12 = (pCVar7->fields).blinker;
            if (pGVar8 != (GameObject *)0x0) {
              if ((
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                             );
              }
              pMVar13 = (MeshFilter__Array *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren_4
                                  (pGVar8,0,((pMVar11->field7_0x38).rgctx_data)->method);
              if (pCVar12 != (CollectTheItemBlinker *)0x0) {
                bVar14 = iRam_? != 0;
                (pCVar12->fields)._.meshFilters = pMVar13;
                if (bVar14) {
                  uVar2 = (uint)((ulonglong)&(pCVar12->fields)._.meshFilters >> 0xc);
                  puVar15 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar16 = *puVar15;
                    LOCK();
                    uVar17 = *puVar15;
                    if (uVar16 == uVar17) {
                      *puVar15 = uVar16 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar16 != uVar17);
                }
                return;
              }
            }
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnCollected(Boolean) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnCollected
               (CollectTheItemCollectableInstance *this,bool shouldBeActiveOnCollect,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
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
      if (bVar2 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar3 == (GameSessionData *)0x0) goto code_?;
        if (((pGVar3->fields).gameMode == 0) && (shouldBeActiveOnCollect == 0)) {
          pCVar1 = (this->fields).collectTheItemObject;
          if ((pCVar1 != (CollectTheItemObject *)0x0) &&
             (this_02 = (pCVar1->fields).greyOutScriptEditMode,
             this_02 != (GreyOutObjectScript *)0x0)) {
            GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_02,(MethodInfo *)0x0);
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
        this_03 = (pCVar1->fields).triggerBoxEvents;
        this_04 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_04,(Object *)this,
                   MethodInfo__CollectTheItemCollectableInstance__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (this_03 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (this_03,(EventHandler_1_TriggerEventArgs_ *)this_04,(MethodInfo *)0x0);
          (this->fields).isTaken = 1;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
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
     (pCVar2 = (pCVar1->fields).editCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,1,(MethodInfo *)0x0);
    if (arg.playInEditor != 0) {
      pCVar1 = (this->fields).collectTheItemObject;
      if ((pCVar1 == (CollectTheItemObject *)0x0) ||
         (pCVar2 = (pCVar1->fields).editCollider, pCVar2 == (Collider *)0x0))
      goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnPositionChanged
               (CollectTheItemCollectableInstance *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (pCVar1 = (this->fields).cullingSubscriberBase, pCVar1 != (CullingSubscriberBase *)0x0)) {
    fVar2 = (positionChangedEventArgs->fields).NewPos.x;
    fVar3 = (positionChangedEventArgs->fields).NewPos.y;
    fVar4 = (positionChangedEventArgs->fields).NewPos.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar5 != (BoundingSphere__Array *)0x0) {
      uVar6 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar6 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar6].position.x = fVar2;
        pBVar5->vector[(int)uVar6].position.y = fVar3;
        pBVar5->vector[(int)uVar6].position.z = fVar4;
        return;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_OnStateChanged
               (CollectTheItemCollectableInstance *this,CullingGroupEvent cullingEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = (this->fields).collectTheItemObject;
    if ((pCVar2 != (CollectTheItemObject *)0x0) &&
       (obj = (pCVar2->fields).cullingObject, obj != (GameObject *)0x0)) {
      bVar3 = CullingApiWrapper::CullingApiWrapper_Visible
                        (cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,bVar3,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (obj->fields)._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,bVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::CollectTheItemCollectableInstance_Reset
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
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
      if (bVar2 == 0) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar3 != (GameSessionData *)0x0) {
        if ((pGVar3->fields).gameMode != 0) {
          return;
        }
        pCVar1 = (this->fields).collectTheItemObject;
        if ((pCVar1 != (CollectTheItemObject *)0x0) &&
           (this_02 = (pCVar1->fields).greyOutScriptEditMode, this_02 != (GreyOutObjectScript *)0x0)
           ) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_03 = (UnityAction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_03,(Object *)0x0,
                     MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                     ,(MethodInfo *)0x0);
          GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
                    (this_02,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_03,
                     (MethodInfo *)0x0);
          (this_02->fields).isGreyedIn = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean SendEnterEvent(Int32) */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SendEnterEvent
               (CollectTheItemCollectableInstance *this,int32_t instigator,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    if (fVar4 - (this->fields).timeCreated < _UNK_?) {
      return 0;
    }
  }
  if ((this->fields).currentState == 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,instigator,(MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObjectClient *)0x0) {
      this_00 = (pMVar5->fields).gameObject;
      if (this_00 == (GameObject *)0x0) goto code_?;
      pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (this_00,
                          MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                         );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar6 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((((pOVar6[1].klass != (Object__Class *)0x0) &&
             (cVar7 = (*(code *)pOVar6->klass[1]._0.fields)(pOVar6,7,pOVar6->klass[1]._0.events),
             cVar7 == '\0')) &&
            (cVar7 = (*(code *)pOVar6->klass[1]._0.fields)(pOVar6,8,pOVar6->klass[1]._0.events),
            cVar7 == '\0')) &&
           ((bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance
                               (this,(MethodInfo *)0x0), bVar1 != 0 || ((this->fields).isTaken == 0)
            ))) {
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                      (this_02,(this->fields)._._._._.id,instigator,(MethodInfo *)0x0);
            return 1;
          }
          goto code_?;
        }
      }
    }
  }
  return 0;
}


/* Void SetBlinker() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetBlinker
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
  ;
  pCVar2 = (this->fields).collectTheItemObject;
  if (pCVar2 != (CollectTheItemObject *)0x0) {
    this_00 = (pCVar2->fields).visualObject;
    pCVar3 = (pCVar2->fields).blinker;
    if (this_00 != (GameObject *)0x0) {
      if ((
          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                     );
      }
      pMVar4 = (MeshFilter__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (this_00,0,((pMVar1->field7_0x38).rgctx_data)->method);
      if (pCVar3 != (CollectTheItemBlinker *)0x0) {
        bVar5 = iRam_? != 0;
        (pCVar3->fields)._.meshFilters = pMVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(pCVar3->fields)._.meshFilters >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pRVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fStack_5 = (pQVar3->identityQuaternion).x;
      fStack_6 = (pQVar3->identityQuaternion).y;
      fStack_7 = (pQVar3->identityQuaternion).z;
      fStack_8 = (pQVar3->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (obj->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar9,&fStack_5);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__OnStateChanged_UnityEngine__CullingGroupEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields)._._._.transform;
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    VStack_1.z = 0.0;
    pvVar2 = (obj->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,&VStack_1);
    callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    FUN_?(callback,this);
    this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
    VStack_5.z = VStack_1.z;
    VStack_5.x = VStack_1.x;
    VStack_5.y = VStack_1.y;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (this_00,TypeRef__System__Activator__T._0_4_,&VStack_5,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = this_00;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pUVar11 = (this->fields)._._._.PositionChanged;
    pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar12,(Object *)this,
               MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar11,(Delegate *)pUVar12,(MethodInfo *)0x0);
    pUVar14 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar13 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                FUN_?(pDVar13,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar13,pUVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields)._._._.PositionChanged = pUVar11;
      pUVar14 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar15 = FUN_?();
      if (lVar15 == 0) {
        FUN_?(pDVar13,pUVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar16 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar16 != (GameSessionData *)0x0) {
      if ((pGVar16->fields).gameMode == 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        id = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
        if ((((this_02 == (MVWorldObjectClientManager *)0x0) ||
             (pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                 (this_02,id,(MethodInfo *)0x0),
             pMVar17 == (MVWorldObjectClient *)0x0)) ||
            (this_01 == (MVWorldObjectClientManager *)0x0)) ||
           (pMVar17 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_01,(pMVar17->fields)._.groupId,(MethodInfo *)0x0),
           pMVar17 == (MVWorldObjectClient *)0x0)) goto code_?;
        pUVar11 = (pMVar17->fields).PositionChanged;
        pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar12,(Object *)this,
                   MethodInfo__CollectTheItemCollectableInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar11,(Delegate *)pUVar12,(MethodInfo *)0x0);
        pUVar14 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pDVar13 == (Delegate *)0x0) {
          (pMVar17->fields).PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        }
        else {
          pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                    FUN_?(pDVar13,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            FUN_?(pDVar13,pUVar14);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (pMVar17->fields).PositionChanged = pUVar11;
          pUVar14 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          lVar15 = FUN_?(pDVar13,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
          if (lVar15 == 0) {
            FUN_?(pDVar13,pUVar14);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&(pMVar17->fields).PositionChanged >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupGreyoutScript(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupGreyoutScript
               (CollectTheItemCollectableInstance *this,Object *sender,EditStateEventArgs *args,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CollectTheItemCollectableInstance_SetBlinker(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).Reset.methodPtr)();
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  iVar2 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,iVar2,(MethodInfo *)0x0);
    if ((pMVar3 != (MVWorldObjectClient *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) {
      this_01 = (CollectTheItemCollectable *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,(pMVar3->fields)._.groupId,(MethodInfo *)0x0);
      if (this_01 != (CollectTheItemCollectable *)0x0) {
        bVar4 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
        if ((bVar4 <= (this_01->klass->_1).naturalAligment) &&
           ((CollectTheItemCollectable__Class *)
            (this_01->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
            TypeInfo__CollectTheItemCollectable)) {
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          iVar2 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                            (this_01,(MethodInfo *)0x0);
          if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
          this_02 = (CollectTheItemDropOff *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar1,iVar2,(MethodInfo *)0x0);
          if (this_02 != (CollectTheItemDropOff *)0x0) {
            bVar4 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
            if ((bVar4 <= (this_02->klass->_1).naturalAligment) &&
               ((CollectTheItemDropOff__Class *)
                (this_02->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupInstance() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupInstance
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemCollectableInstance__OnCollected_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemCollectable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CollectTheItemCollectableInstance_InitializeInstanceWithData(this,(MethodInfo *)0x0);
  CollectTheItemCollectableInstance_SetupCulling(this,(MethodInfo *)0x0);
  collection = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                         ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  this_00 = (HashSet_1_System_Int32_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
  ;
  comparer = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
             EqualityComparer_1_System_Int32__get_Default
                       (MethodInfo__System__Collections__Generic__HashSet<int>__HashSet_System__Collections__Generic__IEnumerable<int>_
                        ->klass->rgctx_data->method);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor_4
            (this_00,(IEnumerable_1_System_Int32_ *)collection,
             (IEqualityComparer_1_System_Int32_ *)comparer,pMVar1->klass->rgctx_data[8].method);
  if (this_00 != (HashSet_1_System_Int32_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pMVar8 = (MVWorldObjectClientManagerNetwork *)0x0;
    ppHStack_9 = (HashSet_1_System_Int32_ **)((ulonglong)(uint)(this_00->fields)._version << 0x20);
    uStack_10 = 0;
    lStack_11 = (longlong)ppHStack_9;
    uStack_12 = 0;
    uStack_3 = 0;
    ppHStack_9 = &pHStack_13;
    pHStack_13 = this_00;
    while (cVar14 = FUN_?(&pHStack_13), cVar14 != '\0') {
      iVar15 = (int32_t)uStack_12;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar16 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar17 = (pMVar16->fields).game;
      if (pMVar17 == (MVNetworkGame *)0x0) goto code_?;
      if (((pMVar17->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar18 = (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar18 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      apCStackX_18[0] = (CollectTheItemCollectable *)0x0;
      pDVar19 = (pMVar18->fields)._.worldObjects;
      if (pDVar19 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,iVar15,(Object **)apCStackX_18,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pCVar20 = apCStackX_18[0];
      if (apCStackX_18[0] != (CollectTheItemCollectable *)0x0) {
        pCVar21 = apCStackX_18[0]->klass;
        bVar22 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        if (((bVar22 <= (pCVar21->_1).naturalAligment) &&
            ((MVCubeModelInstance__Class *)(pCVar21->_1).typeHierarchy[(ulonglong)bVar22 - 1] ==
             TypeInfo__MVCubeModelInstance)) &&
           (apCStackX_18[0] != (CollectTheItemCollectable *)0x0)) {
          (*(pCVar21->vtable).set_Visible.methodPtr)(apCStackX_18[0]);
          gameObject = (pCVar20->fields)._._._.gameObject;
          iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively_4(gameObject,iVar15,(MethodInfo *)0x0);
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar16 != (MVGameControllerBase *)0x0) &&
       (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) {
      if ((pMVar17->fields).worldNetwork != (WorldNetwork *)0x0) {
        pMVar8 = (((pMVar17->fields).worldNetwork)->fields)._.worldObjectClientManager;
      }
      pMVar23 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      iVar15 = CollectTheItemCollectableInstance_get_OriginalInstanceID(this,(MethodInfo *)0x0);
      if (((pMVar23 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar23,iVar15,(MethodInfo *)0x0),
          pMVar24 != (MVWorldObjectClient *)0x0)) &&
         (iVar15 = (pMVar24->fields)._.groupId, pMVar8 != (MVWorldObjectClientManagerNetwork *)0x0)
         ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        apCStackX_18[0] = (CollectTheItemCollectable *)0x0;
        pDVar19 = (pMVar8->fields)._.worldObjects;
        if (pDVar19 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar25 = (code *)swi(3);
          (*pcVar25)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,iVar15,(Object **)apCStackX_18
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        pCVar20 = apCStackX_18[0];
        if (apCStackX_18[0] != (CollectTheItemCollectable *)0x0) {
          bVar22 = (TypeInfo__CollectTheItemCollectable->_1).naturalAligment;
          if ((((bVar22 <= (apCStackX_18[0]->klass->_1).naturalAligment) &&
               ((CollectTheItemCollectable__Class *)
                (apCStackX_18[0]->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] ==
                TypeInfo__CollectTheItemCollectable)) &&
              (apCStackX_18[0] != (CollectTheItemCollectable *)0x0)) &&
             (((apCStackX_18[0]->fields).controller != (CollectTheItem *)0x0 &&
              ((((apCStackX_18[0]->fields).controller)->fields).dropOff !=
               (CollectTheItemDropOff *)0x0)))) {
            pMVar23 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            iVar15 = CollectTheItemCollectable::CollectTheItemCollectable_get_DropOffId
                               (pCVar20,(MethodInfo *)0x0);
            if (pMVar23 == (MVWorldObjectClientManager *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            apCStackX_18[0] = (CollectTheItemCollectable *)0x0;
            pDVar19 = (pMVar23->fields).worldObjects;
            if (pDVar19 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
              FUN_?();
              pcVar25 = (code *)swi(3);
              (*pcVar25)();
              return;
            }
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar19,iVar15,
                       (Object **)apCStackX_18,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            pCVar20 = apCStackX_18[0];
            if (apCStackX_18[0] != (CollectTheItemCollectable *)0x0) {
              bVar22 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
              if (((bVar22 <= (apCStackX_18[0]->klass->_1).naturalAligment) &&
                  ((CollectTheItemDropOff__Class *)
                   (apCStackX_18[0]->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] ==
                   TypeInfo__CollectTheItemDropOff)) &&
                 (apCStackX_18[0] != (CollectTheItemCollectable *)0x0)) {
                pCVar26 = (this->fields).collectTheItemObject;
                bVar27 = CollectTheItemCollectableInstance_get_IsOriginalInstance
                                   (this,(MethodInfo *)0x0);
                if (pCVar26 != (CollectTheItemObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pCVar26,bVar27 ^ 1,(MethodInfo *)0x0);
                  pCVar26 = (this->fields).collectTheItemObject;
                  if (pCVar26 != (CollectTheItemObject *)0x0) {
                    pCVar28 = (pCVar26->fields).blinker;
                    bVar27 = CollectTheItemCollectableInstance_get_IsOriginalInstance
                                       (this,(MethodInfo *)0x0);
                    if (pCVar28 != (CollectTheItemBlinker *)0x0) {
                      (pCVar28->fields)._.visible = bVar27 ^ 1;
                      pAVar29 = (pCVar20->fields).OnCollectTheItemDestroyed;
                      pDVar30 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
                      FUN_?(pDVar30,this);
                      pDVar30 = mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pAVar29,pDVar30,(MethodInfo *)0x0);
                      pAVar31 = TypeInfo__System__Action<bool>;
                      if (pDVar30 == (Delegate *)0x0) {
                        (pCVar20->fields).OnCollectTheItemDestroyed = (Action *)0x0;
                      }
                      else {
                        pAVar29 = (Action *)FUN_?(pDVar30,TypeInfo__System__Action<bool>);
                        if (pAVar29 == (Action *)0x0) {
                          FUN_?(pDVar30,pAVar31);
                          pcVar25 = (code *)swi(3);
                          (*pcVar25)();
                          return;
                        }
                        (pCVar20->fields).OnCollectTheItemDestroyed = pAVar29;
                        pAVar31 = TypeInfo__System__Action<bool>;
                        lVar4 = FUN_?(pDVar30,TypeInfo__System__Action<bool>);
                        if (lVar4 == 0) {
                          FUN_?(pDVar30,pAVar31);
                          pcVar25 = (code *)swi(3);
                          (*pcVar25)();
                          return;
                        }
                      }
                      if (iRam_? == 0) {
                        return;
                      }
                      uVar2 = (uint)((ulonglong)&(pCVar20->fields).OnCollectTheItemDestroyed >> 0xc
                                     );
                      lVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                        LOCK();
                        bVar7 = uVar5 == *puVar6;
                        if (bVar7) {
                          *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar7);
                      return;
                    }
                  }
                }
                goto code_?;
              }
            }
          }
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void SetupUseInteractor() */

void Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_SetupUseInteractor
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
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
      useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
      FUN_?(useFunction,this,
                    MethodInfo__CollectTheItemCollectableInstance__SendEnterEvent_int_);
      checkCanUseFunction =
           (Func_3_Int32_MVInteractableBase_Boolean_ *)
           FUN_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      FUN_?(checkCanUseFunction,this,
                    MethodInfo__CollectTheItemCollectableInstance__CheckCanUse_int__MVInteractableBase_
                   );
      pUVar3 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar3,(MVWorldObjectClient *)this,owner,0,triggerCollider,useFunction,
                 checkCanUseFunction,_UNK_?,0,1,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields).useInteractor = pUVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pCVar1 = (this->fields).collectTheItemObject;
      if (pCVar1 != (CollectTheItemObject *)0x0) {
        pTVar2 = (pCVar1->fields).triggerBoxEvents;
        pUVar3 = (this->fields).useInteractor;
        pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar9,(Object *)pUVar3,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar9,(MethodInfo *)0x0);
          pCVar1 = (this->fields).collectTheItemObject;
          if (pCVar1 != (CollectTheItemObject *)0x0) {
            pTVar2 = (pCVar1->fields).triggerBoxEvents;
            pUVar3 = (this->fields).useInteractor;
            pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar9,(Object *)pUVar3,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              ppEVar10 = &(pTVar2->fields).TriggerExit;
              a = (pTVar2->fields).TriggerExit;
              do {
                pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)a,(Delegate *)pUVar9,(MethodInfo *)0x0);
                pEVar12 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                if (pDVar11 == (Delegate *)0x0) {
                  pEVar13 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                }
                else {
                  pEVar13 = (EventHandler_1_TriggerEventArgs_ *)
                           FUN_?(pDVar11,TypeInfo__System__EventHandler<TriggerEventArgs>);
                  if (pEVar13 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                    FUN_?(pDVar11,pEVar12);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                LOCK();
                pEVar15 = *ppEVar10;
                bVar4 = a == pEVar15;
                if (bVar4) {
                  *ppEVar10 = pEVar13;
                  pEVar15 = a;
                }
                UNLOCK();
                pEVar13 = a;
                if (!bVar4) {
                  pEVar13 = pEVar15;
                }
                if (iRam_? != 0) {
                  uVar5 = (uint)((ulonglong)ppEVar10 >> 0xc);
                  uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                  do {
                    uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                    puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                    LOCK();
                    bVar4 = uVar7 == *puVar8;
                    if (bVar4) {
                      *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar4);
                }
                bVar4 = pEVar13 != a;
                a = pEVar13;
              } while (bVar4);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    FUN_?(&TypeInfo__CollectTheItemObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  bVar4 = cRam_? == '\0';
  (this->fields).timeCreated = fVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar5 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,
               (ObjectPrefab *)(pPVar5->fields).collectTheItemCollectable,worldObjects,
               (MethodInfo *)0x0);
    piVar6 = &(this->fields)._._._.interactionFlags;
    *piVar6 = *piVar6 & 0xffffffffffffdfff;
    pCVar7 = (CollectTheItemObject *)(this->fields)._._._.component;
    if (pCVar7 == (CollectTheItemObject *)0x0) {
      (this->fields).collectTheItemObject = (CollectTheItemObject *)0x0;
    }
    else {
      bVar8 = (TypeInfo__CollectTheItemObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pCVar7->klass)->_1).naturalAligment < bVar8) ||
         ((((ObjectPrefab__Class *)pCVar7->klass)->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)TypeInfo__CollectTheItemObject)) {
        FUN_?(pCVar7);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (this->fields).collectTheItemObject = pCVar7;
      bVar8 = (TypeInfo__CollectTheItemObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pCVar7->klass)->_1).naturalAligment < bVar8) ||
         ((((ObjectPrefab__Class *)pCVar7->klass)->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
          (Il2CppClass *)TypeInfo__CollectTheItemObject)) {
        FUN_?(pCVar7);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(this->fields).collectTheItemObject >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar11 == *puVar12;
        if (bVar4) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,iVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      return (pMVar2->fields)._.groupId;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hasIndicator);
    LOCK();
    UNLOCK();
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
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsOriginalInstance() */

bool Assembly-CSharp.dll::CollectTheItemCollectableInstance::
     CollectTheItemCollectableInstance_get_IsOriginalInstance
               (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OriginalId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = Extensions::Extensions_ContainsObscuredKey
                    (hashtable,StringLiteral_OriginalId,(MethodInfo *)0x0);
  return bVar1 ^ 1;
}


/* Int32 get_OriginalInstanceID() */

int32_t Assembly-CSharp.dll::CollectTheItemCollectableInstance::
        CollectTheItemCollectableInstance_get_OriginalInstanceID
                  (CollectTheItemCollectableInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OriginalId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = CollectTheItemCollectableInstance_get_IsOriginalInstance(this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (this->fields)._._._._.id;
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = Extensions::Extensions_GetObscuredType
                     (hashtable,StringLiteral_OriginalId,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      OStack_3.currentCryptoKey = *(int32_t *)&pOVar2[1].klass;
      OStack_3.hiddenValue = *(int32_t *)((longlong)&pOVar2[1].klass + 4);
      OStack_3.fakeValue = *(int32_t *)&pOVar2[1].monitor;
      OStack_3._12_4_ = *(undefined4 *)((longlong)&pOVar2[1].monitor + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
              ObscuredInt_InternalDecrypt(&OStack_3,(MethodInfo *)0x0);
      return iVar4;
    }
    FUN_?(pOVar2,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    pcVar5 = (code *)swi(3);
    iVar4 = (*pcVar5)();
    return iVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

