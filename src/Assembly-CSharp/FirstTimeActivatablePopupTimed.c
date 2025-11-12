
/* Void CreatePopup() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_CreatePopup
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_class_does_not_implement_sk);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_This_class_does_not_implement_sk,(MethodInfo *)0x0);
  pCVar1 = (this->fields).popupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (CanvasGroup *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pCVar1,
                      UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).createdPopup = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).createdPopup >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_OnDestroy
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).destroyCreatedPopup != 0) {
    this_00 = (this->fields).createdPopup;
    if (this_00 == (CanvasGroup *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_01,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)this_01,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
  }
  else {
    pAVar4 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)FUN_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
    if (pAVar4 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar4;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__FirstTimeEventManager->static_fields >> 0xc);
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


/* Void OnPop() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_OnPop
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  OVar1.m_CachedPtr = (void *)0x0;
  if (this != (FirstTimeActivatablePopupTimed *)0x0) {
    OVar1.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(OVar1.m_CachedPtr,0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_OnShow
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if ((this->fields).isShown != 0) {
    return;
  }
  (this->fields).isShown = 1;
  FirstTimeActivatablePopupTimed_CreatePopup(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePopupTimed____c__DisplayClass20_0___PushToStack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatablePopupTimed____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?();
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    *(undefined4 *)&object[1].monitor = 0;
    pLVar6 = (this->fields).pushOptions;
    if (pLVar6 != (List_1_UIPushOption_ *)0x0) {
      iVar7 = (pLVar6->fields)._size;
      if (iVar7 < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        OVar8.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
        if (OVar8.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        gcHandlePtr = (void *)(*pcRam_?)(OVar8.m_CachedPtr);
        pGVar11 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (gcHandlePtr,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__FirstTimeActivatablePopupTimed____c__DisplayClass20_0___PushToStack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar12 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar12);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar11,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar14 = (longlong)(pLVar13->fields)._size;
          uVar2 = 0;
          if (0 < lVar14) {
            lVar15 = 0;
            lVar16 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar13->fields)._size <= uVar2) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar17 = (pLVar13->fields)._items;
              if (pTVar17 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar17->max_length <= uVar2) {
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar11,(BaseEventData *)0x0,this_01,
                                  (pMVar12->field7_0x38).rgctx_data[1].method);
              if (bVar18 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar2 = uVar2 + 1;
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + 8;
            } while (lVar15 < lVar14);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (iVar7 == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pUVar19 = (pLVar6->fields)._items;
      if (pUVar19 != (UIPushOption__Enum__Array *)0x0) {
        if ((int)pUVar19->max_length == 0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(UIPushOption__Enum *)&object[1].monitor = pUVar19->vector[0];
        uVar2 = 1;
        pLVar6 = (this->fields).pushOptions;
        if (pLVar6 != (List_1_UIPushOption_ *)0x0) {
          lVar14 = 0x24;
          do {
            if ((pLVar6->fields)._size <= (int)uVar2) goto code_?;
            if (pLVar6 == (List_1_UIPushOption_ *)0x0) break;
            if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
            pUVar19 = (pLVar6->fields)._items;
            if (pUVar19 == (UIPushOption__Enum__Array *)0x0) break;
            if ((uint)pUVar19->max_length <= uVar2) goto code_?;
            uVar2 = uVar2 + 1;
            *(uint *)&object[1].monitor =
                 *(uint *)&object[1].monitor | *(uint *)((longlong)pUVar19->vector + lVar14 + -0x20);
            lVar14 = lVar14 + 4;
            pLVar6 = (this->fields).pushOptions;
          } while (pLVar6 != (List_1_UIPushOption_ *)0x0);
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ParentPopupToGameObject() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::
     FirstTimeActivatablePopupTimed_ParentPopupToGameObject
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  this_00 = (this->fields).createdPopup;
  if (this_00 != (CanvasGroup *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,0,(MethodInfo *)0x0);
      (this->fields).destroyCreatedPopup = 1;
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushToStack() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_PushToStack
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePopupTimed____c__DisplayClass20_0___PushToStack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatablePopupTimed____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?();
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    *(undefined4 *)&object[1].monitor = 0;
    pLVar6 = (this->fields).pushOptions;
    if (pLVar6 != (List_1_UIPushOption_ *)0x0) {
      iVar7 = (pLVar6->fields)._size;
      if (iVar7 < 1) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        OVar8.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
        if (OVar8.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        gcHandlePtr = (void *)(*pcRam_?)(OVar8.m_CachedPtr);
        pGVar11 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (gcHandlePtr,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__FirstTimeActivatablePopupTimed____c__DisplayClass20_0___PushToStack_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar12 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar12);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar11,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar14 = (longlong)(pLVar13->fields)._size;
          uVar2 = 0;
          if (0 < lVar14) {
            lVar15 = 0;
            lVar16 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar13->fields)._size <= uVar2) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar17 = (pLVar13->fields)._items;
              if (pTVar17 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar17->max_length <= uVar2) {
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar11,(BaseEventData *)0x0,this_01,
                                  (pMVar12->field7_0x38).rgctx_data[1].method);
              if (bVar18 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar2 = uVar2 + 1;
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + 8;
            } while (lVar15 < lVar14);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (iVar7 == 0) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pUVar19 = (pLVar6->fields)._items;
      if (pUVar19 != (UIPushOption__Enum__Array *)0x0) {
        if ((int)pUVar19->max_length == 0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(UIPushOption__Enum *)&object[1].monitor = pUVar19->vector[0];
        uVar2 = 1;
        pLVar6 = (this->fields).pushOptions;
        if (pLVar6 != (List_1_UIPushOption_ *)0x0) {
          lVar14 = 0x24;
          do {
            if ((pLVar6->fields)._size <= (int)uVar2) goto code_?;
            if (pLVar6 == (List_1_UIPushOption_ *)0x0) break;
            if ((uint)(pLVar6->fields)._size <= uVar2) goto code_?;
            pUVar19 = (pLVar6->fields)._items;
            if (pUVar19 == (UIPushOption__Enum__Array *)0x0) break;
            if ((uint)pUVar19->max_length <= uVar2) goto code_?;
            uVar2 = uVar2 + 1;
            *(uint *)&object[1].monitor =
                 *(uint *)&object[1].monitor | *(uint *)((longlong)pUVar19->vector + lVar14 + -0x20);
            lVar14 = lVar14 + 4;
            pLVar6 = (this->fields).pushOptions;
          } while (pLVar6 != (List_1_UIPushOption_ *)0x0);
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeActivatablePopupTimed::FirstTimeActivatablePopupTimed_Update
               (FirstTimeActivatablePopupTimed *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePopupTimed____c___Update_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatablePopupTimed____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isShown != 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    if ((((0.0 < fVar1) || (0.0 < fVar2)) || ((this->fields).isFading != 0)) ||
       ((this->fields).inputRequired == 0)) {
      (this->fields).isUpdating = 1;
    }
    if ((this->fields).isUpdating != 0) {
      fVar1 = (this->fields).currentTime;
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
      fVar2 = (float)(*pcRam_?)();
      fVar2 = fVar2 + fVar1;
      (this->fields).currentTime = fVar2;
      if ((this->fields).visibleDuration <= fVar2) {
        if ((this->fields).destroyCreatedPopup == 0) {
          pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__FirstTimeActivatablePopupTimed____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__FirstTimeActivatablePopupTimed____c);
          }
          this_02 = TypeInfo__FirstTimeActivatablePopupTimed____c->static_fields->__9__15_0;
          if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__FirstTimeActivatablePopupTimed____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__FirstTimeActivatablePopupTimed____c);
            }
            object = TypeInfo__FirstTimeActivatablePopupTimed____c->static_fields->__9;
            this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                       MethodInfo__FirstTimeActivatablePopupTimed____c___Update_b__15_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__FirstTimeActivatablePopupTimed____c->static_fields->__9__15_0 = this_02;
            func_?(&TypeInfo__FirstTimeActivatablePopupTimed____c->static_fields->
                                 __9__15_0);
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar6 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar6);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar5,(IList_1_UnityEngine_Transform_ *)
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                            s_InternalTransformList,(MethodInfo *)0x0);
          pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar8 = (longlong)(pLVar7->fields)._size;
            uVar9 = 0;
            if (0 < lVar8) {
              lVar10 = 0;
              lVar11 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar7->fields)._size <= uVar9) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pTVar12 = (pLVar7->fields)._items;
                if (pTVar12 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar12->max_length <= uVar9) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                this_01 = *(Component **)((longlong)pTVar12->vector + lVar11 + -0x20);
                if (this_01 == (Component *)0x0) goto code_?;
                pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject(this_01,(MethodInfo *)0x0);
                bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                        ExecuteEvents_Execute_18
                                  (pGVar5,(BaseEventData *)0x0,
                                   (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                                   (pMVar6->field7_0x38).rgctx_data[1].method);
                if (bVar13 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar9 = uVar9 + 1;
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 8;
              } while (lVar10 < lVar8);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)this,(MethodInfo *)0x0);
      }
      else if ((this->fields).visibleDuration - (this->fields).fadeTime <= fVar2) {
        this_00 = (this->fields).createdPopup;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,_UNK_? -
                             (fVar2 - ((this->fields).visibleDuration - (this->fields).fadeTime)) /
                             (this->fields).fadeTime,(MethodInfo *)0x0);
          (this->fields).isFading = 1;
          return;
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

