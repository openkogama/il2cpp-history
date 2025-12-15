
/* Void AddMenuButtonForFlag(InteractionFlags, String, UnityAction) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddMenuButtonForFlag
               (ContextMenuController *this,InteractionFlags__Enum flag,String *buttonText,
               UnityAction *onClickCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ContextMenuController____c___AddMenuButtonForFlag_b__15_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  canHaveButtonCheck = TypeInfo__ContextMenuController____c->static_fields->__9__15_0;
  if (canHaveButtonCheck == (Func_1_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar1 = TypeInfo__ContextMenuController____c->static_fields->__9;
    canHaveButtonCheck = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
    FUN_?(canHaveButtonCheck,pCVar1,
                  MethodInfo__ContextMenuController____c___AddMenuButtonForFlag_b__15_0__);
    TypeInfo__ContextMenuController____c->static_fields->__9__15_0 = canHaveButtonCheck;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__15_0 >>
                    0xc);
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
  }
  if (this == (ContextMenuController *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ContextMenuController_AddMenuButtonForFlag_1
            (this,flag,buttonText,onClickCallback,canHaveButtonCheck,(MethodInfo *)0x0);
  return;
}


/* Void AddMenuButtonForFlag(InteractionFlags, String, UnityAction, Func`1[Boolean]) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddMenuButtonForFlag_1
               (ContextMenuController *this,InteractionFlags__Enum flag,String *buttonText,
               UnityAction *onClickCallback,Func_1_Boolean_ *canHaveButtonCheck,MethodInfo *method)

{
  uVar1 = CONCAT44(in_register_00000014,flag);
  pMVar2 = (this->fields).selectedWorldObject;
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    if (((pMVar2->fields).interactionFlags & uVar1) != uVar1) {
      return;
    }
    if (canHaveButtonCheck != (Func_1_Boolean_ *)0x0) {
      cVar3 = (*(canHaveButtonCheck->fields)._._.invoke_impl)
                        ((canHaveButtonCheck->fields)._._.method_code,
                         (canHaveButtonCheck->fields)._._.method);
      if (cVar3 == '\0') {
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        bVar5 = 0;
        if ((pMVar4->fields)._Region_k__BackingField == 4) {
          bVar6 = true;
        }
        else {
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
          bVar6 = (pMVar4->fields)._Region_k__BackingField == 3;
        }
        pMVar2 = (this->fields).selectedWorldObject;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          if (((pMVar2->fields).eliteRequiredFlags & uVar1) == uVar1) {
            bVar7 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
            bVar5 = bVar7 ^ 1;
          }
          this_00 = (this->fields).currentContextMenu;
          if ((bVar6 & bVar5) == 0) {
            if (this_00 != (ContextMenu *)0x0) {
              ContextMenu::ContextMenu_AddButton
                        (this_00,buttonText,onClickCallback,(MethodInfo *)0x0);
              return;
            }
          }
          else if (this_00 != (ContextMenu *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            original = (this_00->fields).contextMenuLockedButtonPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_01 = (Component *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                                );
            if ((this_01 != (Component *)0x0) &&
               (plVar8 = this_01[1].fields._.m_CachedPtr, plVar8 != (longlong *)0x0)) {
              (**(code **)(*plVar8 + 0x5e8))();
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_01,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if (this_02 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_02,parent,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddToInventory() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddToInventory
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ContextMenuController___AddToInventory_b__38_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___AddToInventory_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c___AddToInventory_b__38_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_01 = TypeInfo__ContextMenuController____c->static_fields->__9__38_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    pCVar2 = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pCVar2,
               MethodInfo__ContextMenuController____c___AddToInventory_b__38_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__38_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__38_0 >>
                     0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_02 = TypeInfo__ContextMenuController____c->static_fields->__9__38_1;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    pCVar2 = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)pCVar2,
               MethodInfo__ContextMenuController____c___AddToInventory_b__38_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__38_1 = this_02;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__38_1 >>
                     0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__ContextMenuController___AddToInventory_b__38_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_03,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean CanClone() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CanClone
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 == (EditorStateMachine *)0x0) ||
      (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) ||
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pHStack_8 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_9 = 0;
    HStack_10._8_8_ = pHStack_8;
    HStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_8 = &HStack_10;
    HStack_10._set = (HashSet_1_System_Object_ *)pHVar2;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        (&HStack_10,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 1;
      }
      if (HStack_10._current == (Object *)0x0) break;
      if (((*(uint *)&HStack_10._current[0x11].monitor >> 0xd & 1) == 0) ||
         ((*(uint *)&HStack_10._current[0x11].monitor >> 0x11 & 1) != 0)) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Boolean CanCloneRoot() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CanCloneRoot
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 == (EditorStateMachine *)0x0) ||
      (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) ||
     (pHVar2 = SelectionController::SelectionController_get_SelectedWOs(this_00,(MethodInfo *)0x0),
     pHVar2 == (HashSet_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pHStack_8 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_9 = 0;
    HStack_10._8_8_ = pHStack_8;
    HStack_10._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_8 = &HStack_10;
    HStack_10._set = (HashSet_1_System_Object_ *)pHVar2;
    while( true ) {
      bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::Object]
              ::HashSet_1_T_Enumerator_System_Object__MoveNext
                        (&HStack_10,
                         MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar11 == 0) {
        return 1;
      }
      if (HStack_10._current == (Object *)0x0) break;
      if (((*(uint *)&HStack_10._current[0x11].monitor >> 0x1a & 1) == 0) ||
         ((*(uint *)&HStack_10._current[0x11].monitor >> 0x11 & 1) != 0)) {
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar11 = (*pcVar12)();
  return bVar11;
}


/* Void Clone() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Clone
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ContextMenuController___Clone_b__36_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___Clone_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_01 = TypeInfo__ContextMenuController____c->static_fields->__9__36_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ContextMenuController____c___Clone_b__36_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__36_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__36_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__ContextMenuController___Clone_b__36_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
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
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_02,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CloneRoot
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___CloneRoot_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c__DisplayClass37_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c__DisplayClass37_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__ContextMenuController____c__DisplayClass37_0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_01 = TypeInfo__ContextMenuController____c->static_fields->__9__37_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ContextMenuController____c___CloneRoot_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__37_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__37_0 >>
                     0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
     (pOVar7 = (Object__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                         (this_02,(this->fields).woID,(MethodInfo *)0x0), object_00 == (Object *)0x0
     )) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar6 = iRam_? != 0;
  object_00[1].klass = pOVar7;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,object_00,
             MethodInfo__ContextMenuController____c__DisplayClass37_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar10->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_03,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Delete() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Delete
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___Delete_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c__DisplayClass43_0___Delete_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c__DisplayClass43_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__ContextMenuController____c__DisplayClass43_0);
  pEVar1 = (this->fields).editorStateMachine;
  if (((pEVar1 != (EditorStateMachine *)0x0) &&
      (this_00 = (pEVar1->fields).selectionController, this_00 != (SelectionController *)0x0)) &&
     (SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0),
     object_00 != (Object *)0x0)) {
    bVar2 = iRam_? != 0;
    object_00[1].klass = (Object__Class *)::StringLiteral__;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar7,(this->fields).woID,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar8 != (MVWorldObjectClient *)0x0) {
        cVar9 = (*(pMVar8->klass->vtable).Delete.methodPtr)(pMVar8,pMVar7,object_00 + 1);
        if (cVar9 == '\0') {
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,object_00,
                     MethodInfo__ContextMenuController____c__DisplayClass43_0___Delete_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          pMVar11 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
            pMVar11 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ;
          }
        }
        else {
          pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ContextMenuController____c);
          }
          this_02 = TypeInfo__ContextMenuController____c->static_fields->__9__43_1;
          if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ContextMenuController____c);
            }
            object = TypeInfo__ContextMenuController____c->static_fields->__9;
            this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                       MethodInfo__ContextMenuController____c___Delete_b__43_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__ContextMenuController____c->static_fields->__9__43_1 = this_02;
            if (iRam_? != 0) {
              uVar3 = (uint)((ulonglong)
                              &TypeInfo__ContextMenuController____c->static_fields->__9__43_1 >> 0xc
                             );
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
          }
          pMVar11 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
            pMVar11 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ;
          }
        }
        if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
          if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar11);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar10,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar4 = (longlong)(pLVar12->fields)._size;
          uVar3 = 0;
          if (0 < lVar4) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar12->fields)._size <= uVar3) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar16 = (pLVar12->fields)._items;
              if (pTVar16 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar16->max_length <= uVar3) {
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar16->vector + lVar14 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar17 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                      ExecuteEvents_Execute_18
                                (pGVar10,(BaseEventData *)0x0,
                                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                                 (pMVar11->field7_0x38).rgctx_data[1].method);
              if (bVar17 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar3 = uVar3 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar4);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void DeleteLink(Int32, Boolean) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_DeleteLink
               (ContextMenuController *this,int32_t linkID,bool isObjectLink,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___DeleteLink_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (isObjectLink == 0) {
    if (pMVar1 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_RemoveLink__Link_not_found);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = (pMVar1->fields).networkGame;
    if (((pMVar3 == (MVNetworkGame *)0x0) ||
        (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 == (WorldNetwork *)0x0)) ||
       (this_00 = (pWVar4->fields).links, this_00 == (Links *)0x0)) goto code_?;
    bVar5 = Links::Links_Contains(this_00,linkID,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pDVar6 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = linkID;
      pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
      if (pDVar6 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pMVar8 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method;
      uVar9 = CONCAT71((int7)((ulonglong)pMVar8 >> 8),0x3a);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (pDVar6,0x3a,pOVar7,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),pMVar8);
      pPVar10 = (pMVar1->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar10 == (PhotonPeer *)0x0) goto code_?;
      (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),10),pDVar6,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar10->klass->vtable).SendOperation.method);
      goto code_?;
    }
    message = StringLiteral_RemoveLink__Link_not_found;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_RemoveLink__Link_not_found;
    }
  }
  else {
    if (pMVar1 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_RemoveObjectLink__ObjectLink_not);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = (pMVar1->fields).networkGame;
    if (((pMVar3 == (MVNetworkGame *)0x0) ||
        (pWVar4 = (pMVar3->fields).worldNetwork, pWVar4 == (WorldNetwork *)0x0)) ||
       (this_01 = (pWVar4->fields).objectLinks, this_01 == (ObjectLinks *)0x0))
    goto code_?;
    bVar5 = ObjectLinks::ObjectLinks_Contains(this_01,linkID,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pDVar6 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar6,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = linkID;
      pOVar7 = (Object *)FUN_?(uRam_?,aiStackX_18);
      if (pDVar6 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        pMVar8 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method;
        uVar9 = CONCAT71((int7)((ulonglong)pMVar8 >> 8),0x3a);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar6,0x3a,pOVar7,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),pMVar8);
        pPVar10 = (pMVar1->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar10 != (PhotonPeer *)0x0) {
          (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                    (pPVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),0x1f),pDVar6,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar10->klass->vtable).SendOperation.method);
          goto code_?;
        }
      }
      goto code_?;
    }
    message = StringLiteral_RemoveObjectLink__ObjectLink_not;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_RemoveObjectLink__ObjectLink_not;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)message,(MethodInfo *)0x0);
code_?:
  pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_03 = TypeInfo__ContextMenuController____c->static_fields->__9__19_0;
  if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__ContextMenuController____c___DeleteLink_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__19_0 = this_03;
    if (iRam_? != 0) {
      uVar12 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__19_0 >>
                     0xc);
      puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar14 = *puVar13;
        LOCK();
        uVar15 = *puVar13;
        if (uVar14 == uVar15) {
          *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (uVar14 != uVar15);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
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
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar11,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar17 = (longlong)(pLVar16->fields)._size;
    uVar12 = 0;
    if (0 < lVar17) {
      lVar18 = 0;
      lVar19 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar16 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar16 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar16->fields)._size <= uVar12) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar20 = (pLVar16->fields)._items;
        if (pTVar20 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar20->max_length <= uVar12) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_02 = *(Component **)((longlong)pTVar20->vector + lVar19 + -0x20);
        if (this_02 == (Component *)0x0) goto code_?;
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_02,(MethodInfo *)0x0);
        bVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar11,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                            (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar5 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_02,(MethodInfo *)0x0);
          return;
        }
        uVar12 = uVar12 + 1;
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + 8;
      } while (lVar18 < lVar17);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterCubeEdit() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterCubeEdit
               (ContextMenuController *this,MethodInfo *method)

{
  pEVar1 = (this->fields).editorStateMachine;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    (pEVar1->fields)._MuzzleEditMode_k__BackingField = 0;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,(this->fields).woID,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        UNRECOVERED_JUMPTABLE = (pMVar2->klass->vtable).OnEnterObject.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pMVar2,(this->fields).editorStateMachine,
                   (pMVar2->klass->vtable).OnEnterObject.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnterMuzzleEdit() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterMuzzleEdit
               (ContextMenuController *this,MethodInfo *method)

{
  pEVar1 = (this->fields).editorStateMachine;
  if (pEVar1 != (EditorStateMachine *)0x0) {
    bVar2 = cRam_? == '\0';
    (pEVar1->fields)._MuzzleEditMode_k__BackingField = 1;
    if (bVar2) {
      FUN_?(&TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__Assets__Scripts__IngameController__CubeModeling__MuzzleEditController->static_fields->
    InMuzzleEdit = 1;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,(this->fields).woID,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        UNRECOVERED_JUMPTABLE = (pMVar3->klass->vtable).OnEnterObject.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pMVar3,(this->fields).editorStateMachine,
                   (pMVar3->klass->vtable).OnEnterObject.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void EnterPlay() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterPlay
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVLocalPlayerBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c___EnterPlay_b__39_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        method_00 = pMVar2->klass;
        bVar3 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if ((bVar3 <= (method_00->_1).naturalAligment) &&
           ((MVAvatarSpawnRoleCreator__Class *)(method_00->_1).typeHierarchy[(ulonglong)bVar3 - 1]
            == TypeInfo__MVAvatarSpawnRoleCreator)) {
          MVTriggerBox::MVTriggerBox_OnExit
                    ((MVTriggerBox *)0x0,(MVPlayer *)TypeInfo__MVAvatarSpawnRoleCreator,
                     (MethodInfo *)method_00);
          if (extraout_RAX == (longlong *)0x0) goto code_?;
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX + 0x130) < bVar3) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX + 200) + -8 + (longlong)(ulonglong)bVar3 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX,TypeInfo__MVLocalPlayerBuilder);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar5 = extraout_RAX[0x20];
          lVar6 = extraout_RAX[0x21];
          iVar7 = (this->fields).woID;
          MVTriggerBox::MVTriggerBox_OnExit
                    ((MVTriggerBox *)0x0,(MVPlayer *)(ulonglong)bVar3,
                     (MethodInfo *)TypeInfo__MVLocalPlayerBuilder);
          if (extraout_RAX_00 == (longlong *)0x0) goto code_?;
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar3) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar3 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar3 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
          if ((*(byte *)(*extraout_RAX_00 + 0x130) < bVar3) ||
             (*(MVLocalPlayerBuilder__Class **)
               (*(longlong *)(*extraout_RAX_00 + 200) + -8 + (ulonglong)bVar3 * 8) !=
              TypeInfo__MVLocalPlayerBuilder)) {
            FUN_?(extraout_RAX_00,TypeInfo__MVLocalPlayerBuilder);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          extraout_RAX_00[0x20] = CONCAT44(iVar7,(int)lVar5);
          *(int *)(extraout_RAX_00 + 0x21) = (int)lVar6;
          if (this_01 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
          bVar3 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
          if (((this_01->klass->_1).naturalAligment < bVar3) ||
             ((MVAvatarSpawnRoleCreator__Class *)
              (this_01->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              TypeInfo__MVAvatarSpawnRoleCreator)) {
            FUN_?(this_01,TypeInfo__MVAvatarSpawnRoleCreator);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          GVar8 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                             (this_01,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar9 == (PlayerPlanetData *)0x0) goto code_?;
          if ((pPVar9->fields).gamePassTier < (byte)GVar8) {
            this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                      (this_02,GVar8 & 0xff,(MethodInfo *)0x0);
          }
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar10 != (MVGameControllerBase *)0x0) &&
           (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
          (pGVar12 = (pMVar11->fields).GameEventManager, pGVar12 != (GameEventManager *)0x0)) &&
         ((pGVar13 = (pGVar12->fields).GameState, pGVar13 != (GameEventManager_GameStateManager *)0x0
          && (pAVar14 = (pGVar13->fields).OnDisableLobbyState, pAVar14 != (Action *)0x0)))) {
        (*(pAVar14->fields)._._.invoke_impl)((pAVar14->fields)._._.method_code);
        pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ContextMenuController____c);
        }
        this_03 = TypeInfo__ContextMenuController____c->static_fields->__9__39_0;
        if (this_03 == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
          if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ContextMenuController____c);
          }
          object = TypeInfo__ContextMenuController____c->static_fields->__9;
          this_03 = (ExecuteEvents_EventFunction_1_IEditModeController_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                     MethodInfo__ContextMenuController____c___EnterPlay_b__39_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ContextMenuController____c->static_fields->__9__39_0 = this_03;
          if (iRam_? != 0) {
            uVar16 = (uint)((ulonglong)
                            &TypeInfo__ContextMenuController____c->static_fields->__9__39_0 >> 0xc);
            puVar17 = (ulonglong *)((ulonglong)((uVar16 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar18 = *puVar17;
              LOCK();
              uVar19 = *puVar17;
              if (uVar18 == uVar19) {
                *puVar17 = uVar18 | 1L << (uVar16 & 0x3f);
              }
              UNLOCK();
            } while (uVar18 != uVar19);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar20 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
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
          if ((pMVar20->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar20);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar15,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar21 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                  s_InternalTransformList;
        if (pLVar21 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar5 = (longlong)(pLVar21->fields)._size;
          uVar16 = 0;
          if (0 < lVar5) {
            lVar22 = 0;
            lVar6 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar21 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList;
              if (pLVar21 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar21->fields)._size <= uVar16) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar23 = (pLVar21->fields)._items;
              if (pTVar23 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar23->max_length <= uVar16) {
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar23->vector + lVar6 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar24 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar15,(BaseEventData *)0x0,
                                  (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                                  (pMVar20->field7_0x38).rgctx_data[1].method);
              if (bVar24 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar16 = uVar16 + 1;
              lVar22 = lVar22 + 1;
              lVar6 = lVar6 + 8;
            } while (lVar22 < lVar5);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Initialize
               (ContextMenuController *this,EditorStateMachine *editorStateMachine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ContextMenuController__OnFailedToAddItem__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).editorStateMachine = editorStateMachine;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
       (IEditModeUI *)0x0) || (lVar3 = FUN_?(), lVar3 == 0)) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pDVar7 = *(Delegate **)(lVar3 + 0x10);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ContextMenuController__OnFailedToAddItem__,
             (MethodInfo *)0x0);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar7,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar7 == (Delegate *)0x0) {
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  else {
    pDVar8 = (Delegate *)0x0;
    if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
      pDVar8 = pDVar7;
    }
    if (pDVar8 == (Delegate *)0x0) {
      FUN_?(pDVar7,TypeInfo__System__Action);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(Delegate **)(lVar3 + 0x10) = pDVar8;
    pDVar8 = (Delegate *)0x0;
    if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
      pDVar8 = pDVar7;
    }
    if (pDVar8 == (Delegate *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)(lVar3 + 0x10U >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Boolean IsPendingPrototypeSelected() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_IsPendingPrototypeSelected
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).selectedWorldObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
        ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
         TypeInfo__MVCubeModelBase)) && (pMVar1[1].klass != (MVWorldObjectClient__Class *)0x0)) {
      if (*(int *)((longlong)&((pMVar1[1].klass)->_0).castClass + 4) == 1) {
        return 1;
      }
      uVar3 = ((pMVar1[1].klass)->_0).byval_arg.field_0xb;
      return (byte)uVar3 >> 7;
    }
  }
  return 0;
}


/* Void ItemImageUploaded(Int32) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ItemImageUploaded
               (ContextMenuController *this,int32_t woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (this_00 != (MaterialLoader *)0x0) {
      bVar4 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_20[0] = woId;
      value = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar5 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),method_00);
        pPVar6 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)uVar5 >> 8),0x27),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnClosedStandaloneError(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnClosedStandaloneError
               (ContextMenuController *this,bool confirmed,ConfirmationPopup *popup,
               MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___OnClosedStandaloneError_b__40_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (confirmed == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    this_00 = TypeInfo__ContextMenuController____c->static_fields->__9__40_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ContextMenuController____c);
      }
      object = TypeInfo__ContextMenuController____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__ContextMenuController____c___OnClosedStandaloneError_b__40_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContextMenuController____c->static_fields->__9__40_0 = this_00;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__40_0
                       >> 0xc);
        puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar3 = *puVar2;
          LOCK();
          uVar4 = *puVar2;
          if (uVar3 == uVar4) {
            *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar3 != uVar4);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  iVar5 = (this->fields).woID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     (pMVar8 = (pMVar7->fields).operationRequests, pMVar8 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (this_01 != (MaterialLoader *)0x0) {
      bVar9 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_01,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        return;
      }
      this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_10[0] = iVar5;
      value = (Object *)FUN_?(uRam_?,aiStackX_10);
      if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar10 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_02,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),method_00);
        pPVar11 = (pMVar8->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar11 != (PhotonPeer *)0x0) {
          (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                    (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x27),this_02,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar11->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnFailedToAddItem() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnFailedToAddItem
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___OnFailedToAddItem_b__42_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_01 = TypeInfo__ContextMenuController____c->static_fields->__9__42_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ContextMenuController____c___OnFailedToAddItem_b__42_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__42_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__42_0 >>
                     0xc);
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
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PopGizmos() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_PopGizmos
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___PopGizmos_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_01 = TypeInfo__ContextMenuController____c->static_fields->__9__18_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__ContextMenuController____c___PopGizmos_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__18_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__18_0 >>
                     0xc);
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
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetLogic() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ResetLogic
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ResetLogic_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_00 = TypeInfo__ContextMenuController____c->static_fields->__9__35_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__ContextMenuController____c___ResetLogic_b__35_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__35_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__35_0 >>
                     0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar5 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 != (MVGameControllerBase *)0x0) &&
     (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
    pMVar8 = (pMVar7->fields).operationRequests;
    iVar9 = (this->fields).woID;
    if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = iVar9;
      value = (Object *)FUN_?(uRam_?,aiStackX_18);
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar10 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x16);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_01,0x16,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar5 >> 8),2),method_00);
        pPVar11 = (pMVar8->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar11 != (PhotonPeer *)0x0) {
          (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                    (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x18),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar11->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowChangeScaleDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowChangeScaleDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowChangeScaleDialog_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_02 = TypeInfo__ContextMenuController____c->static_fields->__9__34_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowChangeScaleDialog_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__34_0 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__34_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 == (SettingsFactory *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  worldId = (this->fields).woID;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,worldId,0);
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
    FUN_?(&
                  CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsFactory____c__DisplayClass64_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__SettingsFactory____c__DisplayClass64_0);
  original = (this_00->fields).changeScaleSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar7 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       CubeModelPopup_MethodInfo__UnityEngine__Object__Instantiate<CubeModelPopup>_CubeModelPopup_
                      );
  if (object_00 != (Object *)0x0) {
    bVar8 = iRam_? != 0;
    object_00[1].klass = pOVar7;
    if (bVar8) {
      uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
    if (object_00[1].klass != (Object__Class *)0x0) {
      CubeModelPopup::CubeModelPopup_Initialize
                ((CubeModelPopup *)object_00[1].klass,0x15,worldId,(MethodInfo *)0x0);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_03,object_00,
                 MethodInfo__SettingsFactory____c__DisplayClass64_0___CreateChangeScaleSettings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = 
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
        if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar9);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar1,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar11 = (longlong)(pLVar10->fields)._size;
        uVar2 = 0;
        if (0 < lVar11) {
          lVar12 = 0;
          lVar13 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar10->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar14 = (pLVar10->fields)._items;
            if (pTVar14 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar14->max_length <= uVar2) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_01,(MethodInfo *)0x0);
            bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar1,(BaseEventData *)0x0,this_03,
                               (pMVar9->field7_0x38).rgctx_data[1].method);
            if (bVar15 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar12 = lVar12 + 1;
            lVar13 = lVar13 + 8;
          } while (lVar12 < lVar11);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowContextMenu(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowContextMenu
               (ContextMenuController *this,int32_t woID,Vector3 *worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__AddToInventory__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__CanCloneRoot__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__CanClone__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__CloneRoot__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__Clone__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__Delete__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__EnterCubeEdit__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__EnterMuzzleEdit__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__EnterPlay__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ResetLogic__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowChangeScaleDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowGameCoinsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowGamePointsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowGameRankDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowGlobalSoundsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowInfoDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowLevelsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowMinorGamePointsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowRespawnDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowRewardedAdDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowSettingsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowSoundsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowStarsDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController__ShowTeamDialog__);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__System__Func<bool>);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&
                  ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__0__
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__1__
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__2__
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__3__
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&
                  MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__ContextMenuController____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Game_Tier);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Settings);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Stars);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Team);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Global_Sounds);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Rewarded_ad);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Levels);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Respawn);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Crystals);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Play);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Game_Coins);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Info);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Delete);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Edit_Model);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Clone);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Change_Scale);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Add_To_Inventory);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Edit_Muzzle);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Sounds);
    LOCK();
    UNLOCK();
    uStackY_50 = &UNK_?;
    FUN_?(&StringLiteral_Reset_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackY_50 = &UNK_?;
  object = (Object *)FUN_?(TypeInfo__ContextMenuController____c__DisplayClass12_0);
  if (object == (Object *)0x0) goto code_?;
  bVar1 = iRam_? != 0;
  object[1].monitor = (MonitorData *)this;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pCVar6 = (this->fields).contextMenuPrefab;
  (this->fields).woID = woID;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    uStackY_50 = &UNK_?;
    FUN_?();
  }
  uStackY_50 = &UNK_?;
  pCVar6 = (ContextMenu *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pCVar6,
                       ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                      );
  bVar1 = iRam_? != 0;
  (this->fields).currentContextMenu = pCVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).currentContextMenu >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uStackY_50 = &UNK_?;
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
  uStackY_50 = &UNK_?;
  pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar7,woID,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).selectedWorldObject = pMVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).selectedWorldObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar8 = (this->fields).selectedWorldObject;
  if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
  uStackY_50 = &UNK_?;
  (*(pMVar8->klass->vtable).OnContextMenu.methodPtr)
            (pMVar8,(pMVar8->klass->vtable).OnContextMenu.method);
  pMVar8 = (this->fields).selectedWorldObject;
  if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
  bVar1 = cRam_? == '\0';
  *(byte *)&object[1].klass = (byte)((uint)(pMVar8->fields).interactionFlags >> 0x11) & 1;
  if (bVar1) {
    uStackY_50 = &UNK_?;
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = (this->fields).selectedWorldObject;
  if (pMVar8 == (MVWorldObjectClient *)0x0) {
code_?:
    bVar9 = 0;
  }
  else {
    bVar9 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((((pMVar8->klass->_1).naturalAligment < bVar9) ||
        ((MVCubeModelBase__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
         TypeInfo__MVCubeModelBase)) || (pMVar8[1].klass == (MVWorldObjectClient__Class *)0x0))
    goto code_?;
    if (*(int *)((longlong)&((pMVar8[1].klass)->_0).castClass + 4) == 1) {
      bVar9 = 1;
    }
    else {
      uVar10 = ((pMVar8[1].klass)->_0).byval_arg.field_0xb;
      bVar9 = (byte)uVar10 >> 7;
    }
  }
  *(byte *)((longlong)&object[1].klass + 1) = bVar9;
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Stars,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowStarsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseStars,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Team,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowTeamDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseTeam,pSVar11,(UnityAction *)pNVar12,(MethodInfo *)0x0
            );
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Game_Coins,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowGameCoinsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseGameCoins,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Levels,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowLevelsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseLevel,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Rewarded_ad,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowRewardedAdDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanChangeScale,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Game_Tier,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowGameRankDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseGameRank,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Settings,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowSettingsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_HasSettings,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Sounds,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowSoundsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_Sounds,pSVar11,(UnityAction *)pNVar12,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Global_Sounds,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowGlobalSoundsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_GlobalSounds,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Edit_Model,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__EnterCubeEdit__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pFVar13 = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  uStackY_50 = &UNK_?;
  FUN_?(pFVar13,object,
                MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__0__);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanEdit,pSVar11,(UnityAction *)pNVar12,pFVar13,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Edit_Muzzle,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__EnterMuzzleEdit__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pFVar13 = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  uStackY_50 = &UNK_?;
  FUN_?(pFVar13,object,
                MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__1__);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanChangeScale,pSVar11,(UnityAction *)pNVar12,pFVar13,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Change_Scale,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowChangeScaleDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pFVar13 = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  uStackY_50 = &UNK_?;
  FUN_?(pFVar13,object,
                MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__2__);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanChangeScale,pSVar11,(UnityAction *)pNVar12,pFVar13,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Reset_Logic,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ResetLogic__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanResetLogic,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Play,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__EnterPlay__,(MethodInfo *)0x0
            );
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanEnterPlay,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Crystals,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowGamePointsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanEarnGamePoints,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Crystals,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowMinorGamePointsDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanEarnGamePointsMinor,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Respawn,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowRespawnDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanChangeScale,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Clone,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__Clone__,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pFVar13 = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  uStackY_50 = &UNK_?;
  FUN_?(pFVar13,this,MethodInfo__ContextMenuController__CanClone__);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanClone,pSVar11,(UnityAction *)pNVar12,pFVar13,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Clone,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__CloneRoot__,(MethodInfo *)0x0
            );
  uStackY_50 = &UNK_?;
  pFVar13 = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  uStackY_50 = &UNK_?;
  FUN_?(pFVar13,this,MethodInfo__ContextMenuController__CanCloneRoot__);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanCloneRoot,pSVar11,(UnityAction *)pNVar12,pFVar13,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Info,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__ShowInfoDialog__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanChangeScale,pSVar11,(UnityAction *)pNVar12,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Add_To_Inventory,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__AddToInventory__,
             (MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pFVar13 = (Func_1_Boolean_ *)FUN_?(TypeInfo__System__Func<bool>);
  uStackY_50 = &UNK_?;
  FUN_?(pFVar13,object,
                MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__3__);
  uStackY_50 = &UNK_?;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanAddToInventory,pSVar11,(UnityAction *)pNVar12,pFVar13,
             (MethodInfo *)0x0);
  pCVar6 = (this->fields).currentContextMenu;
  uStackY_50 = &UNK_?;
  pSVar11 = TM::TM__(StringLiteral_Delete,(MethodInfo *)0x0);
  uStackY_50 = &UNK_?;
  pNVar12 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uStackY_50 = &UNK_?;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar12,(Object *)this,MethodInfo__ContextMenuController__Delete__,(MethodInfo *)0x0);
  if (pCVar6 != (ContextMenu *)0x0) {
    uStackY_50 = &UNK_?;
    ContextMenu::ContextMenu_AddButton(pCVar6,pSVar11,(UnityAction *)pNVar12,(MethodInfo *)0x0);
    uStackY_50 = &UNK_?;
    ContextMenuController_PopGizmos(this,(MethodInfo *)0x0);
    uStackY_50 = &UNK_?;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    uStackY_50 = &UNK_?;
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    uStackY_50 = &UNK_?;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__ContextMenuController____c__DisplayClass12_0___ShowContextMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      uStackY_50 = &UNK_?;
      FUN_?();
    }
    uStackY_50 = &UNK_?;
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pMVar8 = (this->fields).selectedWorldObject;
    if (pMVar8 != (MVWorldObjectClient *)0x0) {
      pCVar6 = (this->fields).currentContextMenu;
      woID_00 = (pMVar8->fields)._.id;
      if (pCVar6 != (ContextMenu *)0x0) {
        if (cRam_? == '\0') {
          uStackY_50 = &UNK_?;
          FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
          LOCK();
          UNLOCK();
          uStackY_50 = &UNK_?;
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (pCVar6->fields).woID = woID_00;
        uStackY_50 = &UNK_?;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        uStackY_50 = &UNK_?;
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
        uStackY_50 = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_01,(Object *)pCVar6,
                   MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
          uStackY_50 = &UNK_?;
          MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                    (pMVar7,woID_00,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
                     (MethodInfo *)0x0);
          fVar14 = worldPos->y;
          fVar15 = worldPos->z;
          (pCVar6->fields).worldPosition.x = worldPos->x;
          (pCVar6->fields).worldPosition.y = fVar14;
          (pCVar6->fields).worldPosition.z = fVar15;
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((pMVar16 != (MainCameraManager *)0x0) &&
             (obj = (pMVar16->fields).mainCamera, obj != (Camera *)0x0)) {
            uStackY_78._0_4_ = (pCVar6->fields).worldPosition.x;
            uStackY_78._4_4_ = (pCVar6->fields).worldPosition.y;
            uStackY_70 = CONCAT44(uStackY_70._4_4_,(pCVar6->fields).worldPosition.z);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStackY_98 = 0;
            uStackY_90 = 0;
            pvVar17 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcVar18 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pcRam_? = pcVar18;
            (*pcRam_?)(pvVar17,&uStackY_78,2,&uStackY_98);
            uVar20 = uStackY_90;
            pRVar21 = (pCVar6->fields).rectTransform;
            uStackY_68 = uStackY_98;
            if (pRVar21 != (RectTransform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStackY_88 = 0;
              uStackY_80 = 0;
              pvVar17 = (pRVar21->fields)._._._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar21,(MethodInfo *)0x0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcVar18 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcRam_? = pcVar18;
              (*pcRam_?)(pvVar17);
              pRVar21 = (pCVar6->fields).rectTransform;
              if (pRVar21 != (RectTransform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStackY_78 = 0;
                uStackY_70 = 0;
                pvVar17 = (pRVar21->fields)._._._.m_CachedPtr;
                if (pvVar17 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar21,(MethodInfo *)0x0);
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                pcVar18 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                  uVar19 = func_?(&UNK_?);
                  FUN_?(uVar19,0);
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                pcRam_? = pcVar18;
                (*pcRam_?)(pvVar17);
                pRVar21 = (pCVar6->fields).rectTransform;
                if (pRVar21 != (RectTransform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStackY_58 = 0;
                  uStackY_50 = (undefined *)0x0;
                  pvVar17 = (pRVar21->fields)._._._.m_CachedPtr;
                  if (pvVar17 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar21,(MethodInfo *)0x0);
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  pcVar18 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                    uVar19 = func_?(&UNK_?);
                    FUN_?(uVar19,0);
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  pcRam_? = pcVar18;
                  (*pcRam_?)(pvVar17);
                  fVar15 = _UNK_?;
                  fVar14 = (float)uStackY_70 * (float)uStackY_88 + _UNK_?;
                  fVar22 = uStackY_50._4_4_ * (float)uStackY_88 + _UNK_?;
                  pcVar18 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                    uVar19 = func_?(&UNK_?);
                    FUN_?(uVar19,0);
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  pcRam_? = pcVar18;
                  iVar23 = (*pcRam_?)();
                  pcVar18 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                    uVar19 = func_?(&UNK_?);
                    FUN_?(uVar19,0);
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  pcRam_? = pcVar18;
                  fVar24 = (float)iVar23 - fVar15;
                  iVar23 = (*pcRam_?)();
                  fVar15 = (float)iVar23 - fVar15;
                  if ((fVar14 <= (float)uStackY_98) &&
                     (fVar14 = (float)uStackY_98, fVar24 < (float)uStackY_98)) {
                    fVar14 = fVar24;
                  }
                  if ((fVar22 <= uStackY_68._4_4_) &&
                     (fVar22 = uStackY_68._4_4_, fVar15 < uStackY_68._4_4_)) {
                    fVar22 = fVar15;
                  }
                  pRVar21 = (pCVar6->fields).rectTransform;
                  if ((pRVar21 != (RectTransform *)0x0) &&
                     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pRVar21,(MethodInfo *)0x0),
                     obj_00 != (Transform *)0x0)) {
                    uStackY_78 = CONCAT44(fVar22,fVar14);
                    uStackY_70 = CONCAT44(uStackY_70._4_4_,uVar20);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar17 = (obj_00->fields)._._.m_CachedPtr;
                    if (pvVar17 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                      pcVar18 = (code *)swi(3);
                      (*pcVar18)();
                      return;
                    }
                    pcVar18 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                      uVar19 = func_?(&UNK_?);
                      FUN_?(uVar19,0);
                      pcVar18 = (code *)swi(3);
                      (*pcVar18)();
                      return;
                    }
                    pcRam_? = pcVar18;
                    (*pcRam_?)(pvVar17,&uStackY_78);
                    return;
                  }
                  FUN_?();
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
              }
            }
          }
          FUN_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
      }
    }
  }
code_?:
  uStackY_50 = &UNK_?;
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ShowContextMenuLink(Int32, Boolean, Vector3) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowContextMenuLink
               (ContextMenuController *this,int32_t linkID,bool isObjectLink,Vector3 *worldPos,
               MethodInfo *method)

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
    FUN_?(&
                  ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c__DisplayClass17_0___ShowContextMenuLink_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ContextMenuController____c__DisplayClass17_0___ShowContextMenuLink_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Delete);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ContextMenuController____c__DisplayClass17_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    *(int32_t *)&object[1].monitor = linkID;
    *(bool *)((longlong)&object[1].monitor + 4) = isObjectLink;
    original = (this->fields).contextMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar6 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                        );
    bVar1 = iRam_? != 0;
    object[2].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 2) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pOVar6 = object[2].klass;
    buttonText = TM::TM__(StringLiteral_Delete,(MethodInfo *)0x0);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,object,
               MethodInfo__ContextMenuController____c__DisplayClass17_0___ShowContextMenuLink_b__0__
               ,(MethodInfo *)0x0);
    if (pOVar6 != (Object__Class *)0x0) {
      ContextMenu::ContextMenu_AddButton
                ((ContextMenu *)pOVar6,buttonText,(UnityAction *)this_00,(MethodInfo *)0x0);
      ContextMenuController_PopGizmos(this,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__ContextMenuController____c__DisplayClass17_0___ShowContextMenuLink_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar6 = object[2].klass;
      if (pOVar6 != (Object__Class *)0x0) {
        fVar7 = worldPos->z;
        *(undefined8 *)((longlong)&(pOVar6->_0).byval_arg.data + 4) = *(undefined8 *)worldPos;
        *(float *)&(pOVar6->_0).byval_arg.field_0xc = fVar7;
        *(undefined1 *)&(pOVar6->_0).byval_arg.data = 1;
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if ((pMVar8 != (MainCameraManager *)0x0) &&
           (obj = (pMVar8->fields).mainCamera, obj != (Camera *)0x0)) {
          uStack_9 = *(undefined8 *)((longlong)&(pOVar6->_0).byval_arg.data + 4);
          uStack_10 = CONCAT44(uStack_10._4_4_,*(undefined4 *)&(pOVar6->_0).byval_arg.field_0xc);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_11 = 0;
          uStack_12 = 0;
          pvVar13 = (obj->fields)._._._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcVar14 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pcRam_? = pcVar14;
          (*pcRam_?)(pvVar13,&uStack_9,2,&uStack_11);
          uVar16 = uStack_12;
          pIVar17 = (pOVar6->_0).castClass;
          uStack_18 = uStack_11;
          if (pIVar17 != (Il2CppClass *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_19 = 0;
            uStack_20 = 0;
            pcVar21 = pIVar17->name;
            if (pcVar21 == (char *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcVar14 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pcRam_? = pcVar14;
            (*pcRam_?)(pcVar21);
            pIVar17 = (pOVar6->_0).castClass;
            if (pIVar17 != (Il2CppClass *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_9 = 0;
              uStack_10 = 0;
              pcVar21 = pIVar17->name;
              if (pcVar21 == (char *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcVar14 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pcRam_? = pcVar14;
              (*pcRam_?)(pcVar21);
              pIVar17 = (pOVar6->_0).castClass;
              if (pIVar17 != (Il2CppClass *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_22 = 0;
                uStack_23 = 0;
                pcVar21 = pIVar17->name;
                if (pcVar21 == (char *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcVar14 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcRam_? = pcVar14;
                (*pcRam_?)(pcVar21);
                fVar7 = _UNK_?;
                fVar24 = (float)uStack_10 * (float)uStack_19 + _UNK_?;
                fVar25 = uStack_23._4_4_ * (float)uStack_19 + _UNK_?;
                pcVar14 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcRam_? = pcVar14;
                iVar26 = (*pcRam_?)();
                pcVar14 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcRam_? = pcVar14;
                fVar27 = (float)iVar26 - fVar7;
                iVar26 = (*pcRam_?)();
                fVar7 = (float)iVar26 - fVar7;
                if ((fVar24 <= (float)uStack_11) &&
                   (fVar24 = (float)uStack_11, fVar27 < (float)uStack_11)) {
                  fVar24 = fVar27;
                }
                if ((fVar25 <= uStack_18._4_4_) &&
                   (fVar25 = uStack_18._4_4_, fVar7 < uStack_18._4_4_)) {
                  fVar25 = fVar7;
                }
                pIVar17 = (pOVar6->_0).castClass;
                if ((pIVar17 != (Il2CppClass *)0x0) &&
                   (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pIVar17,(MethodInfo *)0x0),
                   obj_00 != (Transform *)0x0)) {
                  uStack_9 = CONCAT44(fVar25,fVar24);
                  uStack_10 = CONCAT44(uStack_10._4_4_,uVar16);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar13 = (obj_00->fields)._._.m_CachedPtr;
                  if (pvVar13 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pcVar14 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
                    uVar15 = func_?(&UNK_?);
                    FUN_?(uVar15,0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pcRam_? = pcVar14;
                  (*pcRam_?)(pvVar13,&uStack_9);
                  return;
                }
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ShowGameCoinsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGameCoinsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowGameCoinsDialog_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_00 = TypeInfo__ContextMenuController____c->static_fields->__9__26_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGameCoinsDialog_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__26_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__26_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).settingsFactory != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                    ,(this->fields).woID,1,0,unaff_RDI);
      LOCK();
      UNLOCK();
      FUN_?(&
                    GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)_UNK_? + 0xADDR))
              ((code *)((ulonglong)_UNK_? + 0xADDR));
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowGamePointsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGamePointsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowGamePointsDialog_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_03 = TypeInfo__ContextMenuController____c->static_fields->__9__22_0;
  if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGamePointsDialog_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__22_0 = this_03;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__22_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 == (SettingsFactory *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this_00->fields).gamePointSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePointSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointSettings>_GamePointSettings_
                      );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  if (pOVar8 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal_Reward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar9 = pOVar8[2].klass;
  *(int32_t *)&pOVar8[3].monitor = iVar6;
  pSVar10 = StringLiteral_Crystal_Reward;
  if (pOVar9 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = (Text *)(pOVar9->_0).byval_arg.data.array;
  (pOVar9->_0).byval_arg.attrs = (short)iVar6;
  (pOVar9->_0).byval_arg.type = (char)((uint)iVar6 >> 0x10);
  (pOVar9->_0).byval_arg.field_0xb = (char)((uint)iVar6 >> 0x18);
  if (pTVar11 == (Text *)0x0) goto code_?;
  (*(pTVar11->klass->vtable).set_text.methodPtr)
            (pTVar11,pSVar10,(pTVar11->klass->vtable).set_text.method);
  uVar5 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy
            ((SettingsBase *)pOVar9,iVar6,pGVar1,(MethodInfo *)0x0);
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_04 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_04,iVar6,(MethodInfo *)0x0), pMVar12 == (MVWorldObjectClient *)0x0)
      ) || (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)(pMVar12->fields)._.data,
           this_01 ==
           (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)0x0)) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_01,(Object *)StringLiteral_gamePointAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar13 = lRam_?;
  if (iVar6 < 0) {
    pOVar14 = (Object *)(unaff_RBX & 0xffffffff00000000);
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar14 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar14 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar2 & 0x3f);
          do {
            uVar15 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar3 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar16 = uVar15 == *puVar3;
            if (bVar16) {
              *puVar3 = uVar15 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar16);
        }
      }
      else {
        pOVar14 = (Object *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_gamePointAmount,pOVar14,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar14 == (Object *)0x0) goto code_?;
  if ((pOVar14->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar14,lRam_?);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((SettingsSlider *)pOVar8[2].monitor == (SettingsSlider *)0x0) goto code_?;
  iVar6 = *(int32_t *)&pOVar14[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            ((SettingsSlider *)pOVar8[2].monitor,StringLiteral_gamePointAmount,iVar6,0,1000,
             (MethodInfo *)0x0);
  pOVar9 = pOVar8[3].klass;
  if (pOVar9 == (Object__Class *)0x0) goto code_?;
  bVar16 = iRam_? != 0;
  (pOVar9->_0).element_class = (Il2CppClass *)StringLiteral_gamePointAmount;
  if (bVar16) {
    uVar2 = (uint)((ulonglong)&(pOVar9->_0).element_class >> 0xc);
    uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar16 = uVar4 == *puVar3;
      if (bVar16) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar16);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 ((SettingsInputFieldSlider *)pOVar9,(float)iVar6,(MethodInfo *)0x0);
  pSVar10 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_02 = (InputField *)(pOVar9->_0).byval_arg.data.array;
  if (this_02 == (InputField *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar17 = (this_02->fields).m_Text;
  if (pSVar17 == pSVar10) {
    return;
  }
  if (pSVar17 == (String *)0x0) {
code_?:
    if (pSVar10 == (String *)0x0) {
code_?:
      pSVar10 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar10 == (String *)0x0) goto code_?;
    if ((pSVar17->fields)._stringLength == (pSVar10->fields)._stringLength) {
      bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar17->fields)._firstChar,
                         (uint8_t *)&(pSVar10->fields)._firstChar,
                         (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar10 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar10,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_02->fields).m_LineType == 0) {
    if ((pSVar10 == (String *)0x0) ||
       (pSVar10 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar10,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar10 == (String *)0x0)) goto DAT_?;
    pSVar10 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar10,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_02->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_02->fields).m_CharacterValidation == 0)) {
    if (0 < (this_02->fields).m_CharacterLimit) {
      if (pSVar10 == (String *)0x0) goto DAT_?;
      iVar19 = (this_02->fields).m_CharacterLimit;
      if (iVar19 < (pSVar10->fields)._stringLength) {
        pSVar10 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar10,0,iVar19,(MethodInfo *)0x0);
      }
    }
    (this_02->fields).m_Text = pSVar10;
    func_?(&(this_02->fields).m_Text);
  }
  else {
    bVar16 = iRam_? != 0;
    (this_02->fields).m_Text = ::StringLiteral__;
    if (bVar16) {
      uVar2 = (uint)((ulonglong)&(this_02->fields).m_Text >> 0xc);
      lVar13 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar3 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar16 = uVar5 == *puVar3;
        if (bVar16) {
          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    pIVar20 = (this_02->fields).m_OnValidateInput;
    if (pIVar20 == (InputField_OnValidateInput *)0x0) {
      pIVar20 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar21 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar16 = iRam_? != 0;
      (pIVar20->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar20->fields)._._.method = pMVar21;
      (pIVar20->fields)._._.m_target = (Object *)this_02;
      if (bVar16) {
        uVar2 = (uint)((ulonglong)&(pIVar20->fields)._._.m_target >> 0xc);
        lVar13 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar3 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar16 = uVar5 == *puVar3;
          if (bVar16) {
            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar16);
      }
      uVar22 = pMVar21->parameters_count;
      (pIVar20->fields)._._.method_code = pIVar20;
      if ((pMVar21->flags & 0x10) == 0) {
        if (uVar22 != 2) goto code_?;
        pcVar7 = FUN_?;
      }
      else if (uVar22 == 3) {
        pcVar7 = FUN_?;
      }
      else {
code_?:
        (pIVar20->fields)._._.method_code = (pIVar20->fields)._._.m_target;
        pcVar7 = (pIVar20->fields)._._.method_ptr;
      }
      (pIVar20->fields)._._.invoke_impl = pcVar7;
      (pIVar20->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar10 == (String *)0x0) goto DAT_?;
    iVar6 = (pSVar10->fields)._stringLength;
    (this_02->fields).m_CaretSelectPosition = iVar6;
    (this_02->fields).m_CaretPosition = iVar6;
    if ((this_02->fields).m_CharacterLimit < 1) {
      iVar19 = (pSVar10->fields)._stringLength;
    }
    else {
      iVar19 = (this_02->fields).m_CharacterLimit;
      iVar23 = (pSVar10->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar23 < iVar19) {
        iVar19 = iVar23;
      }
    }
    uVar2 = 0;
    if (0 < iVar19) {
      puVar24 = &(pSVar10->fields)._firstChar;
      lVar13 = 0;
      do {
        pSVar17 = (this_02->fields).m_Text;
        if (pSVar17 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar10->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pIVar20 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar20->fields)._._.invoke_impl)
                      ((pIVar20->fields)._._.method_code,(this_02->fields).m_Text,
                       (pSVar17->fields)._stringLength,*puVar24,(pIVar20->fields)._._.method);
        if (c != 0) {
          pSVar17 = (this_02->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar17 = mscorlib.dll::System::String::String_Concat_4(pSVar17,str1,(MethodInfo *)0x0);
          (this_02->fields).m_Text = pSVar17;
          func_?(&(this_02->fields).m_Text);
        }
        uVar2 = uVar2 + 1;
        lVar13 = lVar13 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar13 < iVar19);
    }
  }
  if ((this_02->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_02->fields).m_Keyboard,(this_02->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar10 = (this_02->fields).m_Text;
  if (pSVar10 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar19 = (pSVar10->fields)._stringLength;
  if (iVar19 < (this_02->fields).m_CaretPosition) {
    (this_02->fields).m_CaretPosition = iVar19;
  }
  else if ((this_02->fields).m_CaretSelectPosition <= iVar19) goto code_?;
  (this_02->fields).m_CaretSelectPosition = iVar19;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_02,(MethodInfo *)0x0);
  if ((this_02->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_02->fields).m_OnValueChanged,
               (Object *)(this_02->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_02,(MethodInfo *)0x0)
  ;
  return;
}


/* Void ShowGameRankDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGameRankDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowGameRankDialog_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_02 = TypeInfo__ContextMenuController____c->static_fields->__9__21_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGameRankDialog_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__21_0 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__21_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 == (SettingsFactory *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this_00->fields).gameRankRequirementSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                      );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  if (pOVar8 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,iVar6,pGVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Game_Tier_Requirement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar9 = pOVar8[2].klass;
  pSVar10 = TM::TM__(StringLiteral_Game_Tier_Requirement,(MethodInfo *)0x0);
  if (pOVar9 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = (Text *)(pOVar9->_0).byval_arg.data.array;
  (pOVar9->_0).byval_arg.attrs = (short)iVar6;
  (pOVar9->_0).byval_arg.type = (char)((uint)iVar6 >> 0x10);
  (pOVar9->_0).byval_arg.field_0xb = (char)((uint)iVar6 >> 0x18);
  if (pTVar11 == (Text *)0x0) goto code_?;
  (*(pTVar11->klass->vtable).set_text.methodPtr)
            (pTVar11,pSVar10,(pTVar11->klass->vtable).set_text.method);
  uVar5 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy
            ((SettingsBase *)pOVar9,iVar6,pGVar1,(MethodInfo *)0x0);
  if (iVar6 == -1) {
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar12 = lRam_?;
    unaff_RBX = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
    pOVar13 = unaff_RBX;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar13 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar13 + 1,&stack0x00000008,(longlong)*(int *)(lVar12 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(pOVar13 + 1) >> 0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar14 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar3 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar14 == *puVar3;
            if (bVar15) {
              *puVar3 = uVar14 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      else {
        pOVar13 = (Object *)0x0;
      }
    }
    if (this_04 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_RequiredRank,pOVar13,(InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_03,iVar6,(MethodInfo *)0x0),
        pMVar16 == (MVWorldObjectClient *)0x0)) ||
       (this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)(pMVar16->fields)._.data,
       this_04 ==
       (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
        *)0x0)) goto code_?;
  }
  iVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)this_04,(Object *)StringLiteral_RequiredRank,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar12 = lRam_?;
  if (iVar17 < 0) {
    pOVar13 = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar13 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar13 + 1,&stack0x00000008,(longlong)*(int *)(lVar12 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(pOVar13 + 1) >> 0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar2 & 0x3f);
          do {
            uVar14 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar3 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar14 == *puVar3;
            if (bVar15) {
              *puVar3 = uVar14 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
      else {
        pOVar13 = (Object *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_RequiredRank,pOVar13,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_04,
                       (Object *)StringLiteral_RequiredRank,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar13 == (Object *)0x0) goto code_?;
  if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar13,lRam_?);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((SettingsSlider *)pOVar8[2].monitor == (SettingsSlider *)0x0) goto code_?;
  iVar17 = *(int32_t *)&pOVar13[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            ((SettingsSlider *)pOVar8[2].monitor,StringLiteral_RequiredRank,iVar17,0,3,
             (MethodInfo *)0x0);
  pOVar9 = pOVar8[3].klass;
  if (pOVar9 == (Object__Class *)0x0) goto code_?;
  bVar15 = iRam_? != 0;
  (pOVar9->_0).element_class = (Il2CppClass *)StringLiteral_RequiredRank;
  if (bVar15) {
    uVar2 = (uint)((ulonglong)&(pOVar9->_0).element_class >> 0xc);
    uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar4 == *puVar3;
      if (bVar15) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 ((SettingsInputFieldSlider *)pOVar9,(float)iVar17,(MethodInfo *)0x0);
  pSVar10 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_01 = (InputField *)(pOVar9->_0).byval_arg.data.array;
  if (this_01 == (InputField *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar18 = (this_01->fields).m_Text;
  if (pSVar18 == pSVar10) {
    return;
  }
  if (pSVar18 == (String *)0x0) {
code_?:
    if (pSVar10 == (String *)0x0) {
code_?:
      pSVar10 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar10 == (String *)0x0) goto code_?;
    if ((pSVar18->fields)._stringLength == (pSVar10->fields)._stringLength) {
      bVar19 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar18->fields)._firstChar,
                         (uint8_t *)&(pSVar10->fields)._firstChar,
                         (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar10 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar10,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar10 == (String *)0x0) ||
       (pSVar10 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar10,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar10 == (String *)0x0)) goto DAT_?;
    pSVar10 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar10,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar10 == (String *)0x0) goto DAT_?;
      iVar6 = (this_01->fields).m_CharacterLimit;
      if (iVar6 < (pSVar10->fields)._stringLength) {
        pSVar10 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar10,0,iVar6,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar10;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar15 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar15) {
      uVar2 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar12 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar12 + 0xADDR);
        puVar3 = (ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar15 = uVar5 == *puVar3;
        if (bVar15) {
          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pIVar20 = (this_01->fields).m_OnValidateInput;
    if (pIVar20 == (InputField_OnValidateInput *)0x0) {
      pIVar20 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar21 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar15 = iRam_? != 0;
      (pIVar20->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar20->fields)._._.method = pMVar21;
      (pIVar20->fields)._._.m_target = (Object *)this_01;
      if (bVar15) {
        uVar2 = (uint)((ulonglong)&(pIVar20->fields)._._.m_target >> 0xc);
        lVar12 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar12 + 0xADDR);
          puVar3 = (ulonglong *)(lVar12 + 0xADDR);
          LOCK();
          bVar15 = uVar5 == *puVar3;
          if (bVar15) {
            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar15);
      }
      uVar22 = pMVar21->parameters_count;
      (pIVar20->fields)._._.method_code = pIVar20;
      if ((pMVar21->flags & 0x10) == 0) {
        if (uVar22 != 2) goto code_?;
        pcVar7 = FUN_?;
      }
      else if (uVar22 == 3) {
        pcVar7 = FUN_?;
      }
      else {
code_?:
        (pIVar20->fields)._._.method_code = (pIVar20->fields)._._.m_target;
        pcVar7 = (pIVar20->fields)._._.method_ptr;
      }
      (pIVar20->fields)._._.invoke_impl = pcVar7;
      (pIVar20->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar10 == (String *)0x0) goto DAT_?;
    iVar17 = (pSVar10->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar17;
    (this_01->fields).m_CaretPosition = iVar17;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar6 = (pSVar10->fields)._stringLength;
    }
    else {
      iVar6 = (this_01->fields).m_CharacterLimit;
      iVar23 = (pSVar10->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar23 < iVar6) {
        iVar6 = iVar23;
      }
    }
    uVar2 = 0;
    if (0 < iVar6) {
      puVar24 = &(pSVar10->fields)._firstChar;
      lVar12 = 0;
      do {
        pSVar18 = (this_01->fields).m_Text;
        if (pSVar18 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar10->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pIVar20 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar20->fields)._._.invoke_impl)
                      ((pIVar20->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar18->fields)._stringLength,*puVar24,(pIVar20->fields)._._.method);
        if (c != 0) {
          pSVar18 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar18 = mscorlib.dll::System::String::String_Concat_4(pSVar18,str1,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar18;
          func_?(&(this_01->fields).m_Text);
        }
        uVar2 = uVar2 + 1;
        lVar12 = lVar12 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar12 < iVar6);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar10 = (this_01->fields).m_Text;
  if (pSVar10 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar6 = (pSVar10->fields)._stringLength;
  if (iVar6 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar6;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar6) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar6;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_01,(MethodInfo *)0x0);
  if ((this_01->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_01->fields).m_OnValueChanged,
               (Object *)(this_01->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_01,(MethodInfo *)0x0)
  ;
  return;
}


/* Void ShowGlobalSoundsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGlobalSoundsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowGlobalSoundsDialog_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_07 = TypeInfo__ContextMenuController____c->static_fields->__9__31_0;
  if (this_07 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_07 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_07,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGlobalSoundsDialog_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__31_0 = this_07;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__31_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_07,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    original = (this_00->fields).globalSoundInventoryControllerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_08 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_08 != (Component *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                      ,iVar6,pGVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Func<SoundTabInfo,_bool>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<SoundTabInfo>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__SoundInventoryController__PageTurned_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__SoundInventoryController__TabSelected_int_);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__SoundTabInfo);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TabState);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__SoundInventoryController____c__DisplayClass13_0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_url);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar7 = this_08[3].fields._.m_CachedPtr;
      if (pSVar7 != (SettingsBase *)0x0) {
        pCVar8 = (Component__Class *)0x0;
        uVar9 = 0;
        SettingsBase::SettingsBase_Initialize
                  (pSVar7,iVar6,pGVar1,MVWorldObjectDocumentationType__Enum_SoundEmitter,
                   (MethodInfo *)0x0);
        *(undefined4 *)&this_08[2].klass = 1;
        this_09 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_09 != (MVWorldObjectClientManager *)0x0) {
          pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_09,iVar6,(MethodInfo *)0x0);
          if ((pMVar10 != (MVWorldObjectClient *)0x0) &&
             (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)(pMVar10->fields)._.data,
             this_01 !=
             (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)0x0)) {
            iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                               (this_01,(Object *)StringLiteral_url,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                ->klass->rgctx_data[0x21].method);
            if (iVar6 < 0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,
                         (Object *)StringLiteral_url,(Object *)::StringLiteral__,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            SoundInventoryController::SoundInventoryController_DebugPrintSound
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
            pCVar11 = (Component__Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                 (Object *)StringLiteral_url,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pCVar11 == (Component__Class *)0x0) {
              this_08[5].klass = (Component__Class *)0x0;
            }
            else {
              pCVar12 = pCVar8;
              if ((pCVar11->_0).image == pIRam0000000182dbdde0) {
                pCVar12 = pCVar11;
              }
              if (pCVar12 == (Component__Class *)0x0) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              this_08[5].klass = pCVar12;
              pCVar12 = pCVar8;
              if ((pCVar11->_0).image == pIRam0000000182dbdde0) {
                pCVar12 = pCVar11;
              }
              if (pCVar12 == (Component__Class *)0x0) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)(this_08 + 5) >> 0xc);
              lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                LOCK();
                bVar15 = uVar5 == *puVar3;
                if (bVar15) {
                  *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar15);
            }
            iVar16 = iRam_?;
            if (this_08[4].klass != (Component__Class *)0x0) {
              this_08[4].monitor = (MonitorData *)((this_08[4].klass)->_0).byval_arg.data;
              if (iVar16 != 0) {
                uVar2 = (uint)((ulonglong)&this_08[4].monitor >> 0xc);
                lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar15 = uVar5 == *puVar3;
                  if (bVar15) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              pOVar17 = this_08[2].fields._.m_CachedPtr;
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (this_08,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pMVar18 = 
              InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
              ;
              pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                  (pOVar17,parent,0,
                                   InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                                  );
              bVar15 = iRam_? != 0;
              this_08[1].monitor = (MonitorData *)pOVar17;
              if (bVar15) {
                uVar2 = (uint)((ulonglong)&this_08[1].monitor >> 0xc);
                lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar15 = uVar5 == *puVar3;
                  if (bVar15) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              pMVar19 = this_08[1].monitor;
              if (pMVar19 != (MonitorData *)0x0) {
                pDVar20 = *(Delegate **)(pMVar19 + 0x40);
                pDVar21 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>)
                ;
                FUN_?(pDVar21,this_08);
                pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    (pDVar20,pDVar21,(MethodInfo *)0x0);
                pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                if (pDVar20 == (Delegate *)0x0) {
                  *(undefined8 *)(pMVar19 + 0x40) = 0;
                }
                else {
                  lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                  if (lVar14 == 0) {
                    FUN_?(pDVar20,pUVar22);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *(longlong *)(pMVar19 + 0x40) = lVar14;
                  pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                  lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                  if (lVar14 == 0) {
                    FUN_?(pDVar20,pUVar22);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)(pMVar19 + 0x40) >> 0xc);
                  lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar15 = uVar5 == *puVar3;
                    if (bVar15) {
                      *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar15);
                }
                pMVar19 = this_08[1].monitor;
                if (pMVar19 != (MonitorData *)0x0) {
                  pDVar20 = *(Delegate **)(pMVar19 + 0x48);
                  pDVar21 = (Delegate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
                  FUN_?(pDVar21,this_08);
                  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      (pDVar20,pDVar21,(MethodInfo *)0x0);
                  pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                  if (pDVar20 == (Delegate *)0x0) {
                    *(undefined8 *)(pMVar19 + 0x48) = 0;
                  }
                  else {
                    lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                    if (lVar14 == 0) {
                      FUN_?(pDVar20,pUVar22);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    *(longlong *)(pMVar19 + 0x48) = lVar14;
                    pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                    lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                    if (lVar14 == 0) {
                      FUN_?(pDVar20,pUVar22);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)(pMVar19 + 0x48) >> 0xc);
                    lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                      puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                      LOCK();
                      bVar15 = uVar5 == *puVar3;
                      if (bVar15) {
                        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar15);
                  }
                  if ((InventoryController *)this_08[1].monitor != (InventoryController *)0x0) {
                    InventoryController::InventoryController_Initialize
                              ((InventoryController *)this_08[1].monitor,
                               *(int32_t *)&this_08[3].klass,(MethodInfo *)0x0);
                    pMVar19 = this_08[4].monitor;
                    if (pMVar19 != (MonitorData *)0x0) {
                      lVar14 = 0x20;
                      do {
                        uVar2 = (uint)pCVar8;
                        if (*(int *)(pMVar19 + 0x18) <= (int)uVar2) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                          ,0);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&TypeInfo__UnityEngine__Object);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&StringLiteral_url);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (((InventoryController *)this_08[1].monitor !=
                               (InventoryController *)0x0) &&
                             (pLVar23 = InventoryController::
                                        InventoryController_GetComponentsOfSlotsWithType
                                                  ((InventoryController *)this_08[1].monitor,
                                                                                                      
                                                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                                  ), pLVar23 != (List_1_System_Object_ *)0x0)) {
                            if (iRam_? != 0) {
                              uVar2 = (uint)((ulonglong)&puStack_24 >> 0xc);
                              uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                              do {
                                uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                LOCK();
                                bVar15 = uVar4 == *puVar3;
                                if (bVar15) {
                                  *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar15);
                            }
                            ppLStack_25 = (List_1_System_Object_ **)
                                          ((ulonglong)(uint)(pLVar23->fields)._version << 0x20);
                            uStack_26 = 0;
                            lStack_27 = (longlong)ppLStack_25;
                            pSVar28 = (SoundViewItem *)0x0;
                            puStack_24 = (undefined *)0x0;
                            ppLStack_25 = &pLStack_29;
                            pLStack_29 = pLVar23;
                            while (bVar30 = mscorlib.dll::System::Collections::Generic::
                                            List`1[T]+Enumerator[System::Object]::
                                            List_1_T_Enumerator_System_Object__MoveNext
                                                      ((List_1_T_Enumerator_System_Object_ *)
                                                       &pLStack_29,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                                  ), bVar30 != 0) {
                              if (pSVar28 == (SoundViewItem *)0x0) goto code_?;
                              SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                                        (pSVar28,(MethodInfo *)0x0);
                            }
                            if ((this_08[1].monitor != (MonitorData *)0x0) &&
                               (this_05 = *(InventorySlots **)(this_08[1].monitor + 0x30),
                               this_05 != (InventorySlots *)0x0)) {
                              InventorySlots::InventorySlots_Clear(this_05,(MethodInfo *)0x0);
                              pMVar19 = this_08[1].monitor;
                              iVar6 = *(int32_t *)&this_08[2].klass;
                              pDVar31 = this_08[1].fields._.m_CachedPtr;
                              if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                                 (pOVar17 = mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32,System::Object]::
                                            Dictionary_2_System_Int32_System_Object__get_Item
                                                      (pDVar31,iVar6,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar17 != (Object *)0x0)) {
                                page = *(int32_t *)((longlong)&pOVar17[2].klass + 4);
                                pDVar31 = this_08[1].fields._.m_CachedPtr;
                                if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                                   (pOVar17 = mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32,System::Object]::
                                              Dictionary_2_System_Int32_System_Object__get_Item
                                                        (pDVar31,*(int32_t *)&this_08[2].klass,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar17 != (Object *)0x0)) {
                                  iVar32 = FUN_?((float)*(int *)&pOVar17[2].klass /
                                                         (float)*(int *)&pOVar17[1].klass);
                                  iVar16 = 1;
                                  if (1 < iVar32) {
                                    iVar16 = iVar32;
                                  }
                                  if ((pMVar19 != (MonitorData *)0x0) &&
                                     (plVar33 = *(longlong **)(pMVar19 + 0x28),
                                     plVar33 != (longlong *)0x0)) {
                                    (**(code **)(*plVar33 + 0x188))
                                              (plVar33,iVar6,page,iVar16,
                                               *(undefined8 *)(*plVar33 + 400));
                                    if (*(InventorySlots **)(pMVar19 + 0x30) !=
                                        (InventorySlots *)0x0) {
                                      InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                                (*(InventorySlots **)(pMVar19 + 0x30),page,
                                                 *(int32_t *)(pMVar19 + 0x20),(MethodInfo *)0x0);
                                      pSVar34 = StringLiteral_url;
                                      pCVar8 = this_08[5].klass;
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__System__Convert);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pSVar7 = this_08[3].fields._.m_CachedPtr;
                                      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0)
                                      {
                                        FUN_?();
                                      }
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__System__Convert);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0)
                                      {
                                        FUN_?();
                                      }
                                      value = mscorlib.dll::System::Convert::Convert_ToString_1
                                                        ((Object *)pCVar8,(IFormatProvider *)0x0,
                                                         (MethodInfo *)0x0);
                                      if (pSVar7 != (SettingsBase *)0x0) {
                                        SettingsBase::SettingsBase_OnSettingChanged
                                                  (pSVar7,pSVar34,(Object *)value,(MethodInfo *)0x0);
                                        if ((Dictionary_2_System_Int32_System_Object_ *)
                                            this_08[2].monitor !=
                                            (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                                          this_12 = (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32_System_Object_ *)
                                                  this_08[2].monitor,*(int32_t *)&this_08[2].klass,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                                  );
                                          pvVar35 = this_08[4].fields._.m_CachedPtr;
                                          if (pvVar35 != (void *)0x0) {
                                            iVar16 = FUN_?(pvVar35,*(undefined4 *)
                                                                           &this_08[2].klass,
                                                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                  );
                                            iVar32 = 0;
                                            if (iVar16 < 1) {
                                              return;
                                            }
                                            while (((pDVar31 = this_08[1].fields._.m_CachedPtr,
                                                    pDVar31 != (
                                                  Dictionary_2_System_Int32_System_Object_ *)0x0 &&
                                                  (pTVar36 = (TabState *)
                                                             mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            (pDVar31,*(int32_t *)&this_08[2].klass,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pTVar36 != (TabState *)0x0)) &&
                                                  (pIVar37 = TabState::TabState_get_SlotRange
                                                                       (pTVar36,(MethodInfo *)0x0),
                                                  pIVar37 != (Int32__Array *)0x0))) {
                                              if ((int)pIVar37->max_length == 0) {
code_?:
                                                FUN_?();
                                                pcVar13 = (code *)swi(3);
                                                (*pcVar13)();
                                                return;
                                              }
                                              if (pIVar37->vector[0] <= iVar32) {
                                                if ((uint)pIVar37->max_length < 2)
                                                goto code_?;
                                                if (iVar32 < pIVar37->vector[1]) {
                                                  pOVar17 = (Object *)this_08[3].monitor;
                                                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                               field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  pSVar28 = (SoundViewItem *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_4
                                                                      (pOVar17,
                                                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                  );
                                                  if (this_12 !=
                                                      (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)0x0) {
                                                    info = mscorlib.dll::System::Collections::
                                                           Generic::List`1[UnityEngine::UIElements::
                                                           UIR::EntryPreProcessor+AllocSize]::
                                                                                                                      
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                                            (this_12,iVar32,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                                  );
                                                  pCVar8 = this_08[5].klass;
                                                  this_13 = (UnityAction_1_System_Object_ *)
                                                            FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            (this_13,(Object *)this_08,
                                                                                                                          
                                                  MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                                  ,(MethodInfo *)0x0);
                                                  if (pSVar28 != (SoundViewItem *)0x0) {
                                                    SoundViewItem::SoundViewItem_Initialize
                                                              (pSVar28,(SoundTabInfo *)info,
                                                               (String *)pCVar8,
                                                               (UnityAction_1_System_String_ *)
                                                               this_13,(MethodInfo *)0x0);
                                                    this_06 = (InventoryController *)
                                                              this_08[1].monitor;
                                                    pGVar1 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pSVar28,
                                                                         (MethodInfo *)0x0);
                                                    if (this_06 != (InventoryController *)0x0) {
                                                      InventoryController::
                                                      InventoryController_AddObject
                                                                (this_06,pGVar1,
                                                                 iVar32 % *(int *)&this_08[3].klass,
                                                                 (MethodInfo *)0x0);
                                                      goto code_?;
                                                    }
                                                  }
                                                  }
                                                  break;
                                                }
                                              }
code_?:
                                              iVar32 = iVar32 + 1;
                                              if (iVar16 <= iVar32) {
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
                          FUN_?();
code_?:
                          FUN_?();
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        pOVar17 = (Object *)
                                  FUN_?(
                                               TypeInfo__SoundInventoryController____c__DisplayClass13_0
                                               );
                        pMVar19 = this_08[4].monitor;
                        if (pMVar19 == (MonitorData *)0x0) break;
                        if (*(uint *)(pMVar19 + 0x18) <= uVar2) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        lVar38 = *(longlong *)(pMVar19 + 0x10);
                        if (lVar38 == 0) break;
                        if (*(uint *)(lVar38 + 0x18) <= uVar2) {
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        if (*(longlong *)(lVar38 + lVar14) == 0) break;
                        pSVar34 = *(String **)(*(longlong *)(lVar38 + lVar14) + 0x20);
                        if (pOVar17 == (Object *)0x0) break;
                        bVar15 = iRam_? != 0;
                        pOVar17[1].klass =
                             *(Object__Class **)
                              (*(longlong *)(lVar14 + *(longlong *)(this_08[4].monitor + 0x10)) +
                              0x18);
                        if (bVar15) {
                          uVar39 = (uint)((ulonglong)(pOVar17 + 1) >> 0xc);
                          lVar38 = (ulonglong)((uVar39 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar38 + 0xADDR);
                            puVar3 = (ulonglong *)(lVar38 + 0xADDR);
                            LOCK();
                            bVar15 = uVar5 == *puVar3;
                            if (bVar15) {
                              *puVar3 = uVar5 | 1L << (uVar39 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar15);
                        }
                        if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,UnityEngine::UIElements::
                                 StyleComplexSelector+PseudoStateData]::
                                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                           ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                             *)this_08[5].monitor,(Object *)pSVar34,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                            ->klass->rgctx_data[0x21].method);
                        if (iVar6 < 0) {
                          pMVar19 = this_08[5].monitor;
                          if (pMVar19 == (MonitorData *)0x0) break;
                          pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar18 >> 8),2);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Int32]::Dictionary_2_System_Object_System_Int32__TryInsert
                                    ((Dictionary_2_System_Object_System_Int32_ *)this_08[5].monitor,
                                     (Object *)pSVar34,
                                     (*(int *)(pMVar19 + 0x20) - *(int *)(pMVar19 + 0x28)) + 1,
                                     (InsertionBehavior__Enum)pMVar18,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                                     ->klass->rgctx_data[0x22].method);
                        }
                        if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                        IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Int32Enum]::
                                 Dictionary_2_System_Object_System_Int32Enum__get_Item
                                           ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                            this_08[5].monitor,(Object *)pSVar34,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                           );
                        this_02 = this_08[1].fields._.m_CachedPtr;
                        if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                        key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Int32Enum]::
                              Dictionary_2_System_Object_System_Int32Enum__get_Item
                                        ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                         this_08[5].monitor,(Object *)pSVar34,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                        );
                        if (this_02 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,UnityEngine::Vector3]::
                                 Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                           (this_02,key,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                            ->klass->rgctx_data[0x21].method);
                        if (iVar6 < 0) {
                          uVar39 = *(uint *)&this_08[3].klass;
                          pTVar36 = (TabState *)FUN_?(TypeInfo__TabState);
                          uVar5 = (ulonglong)uVar39;
                          TabState::TabState__ctor(pTVar36,IVar40,pSVar34,uVar39,(MethodInfo *)0x0);
                          pDVar31 = this_08[1].fields._.m_CachedPtr;
                          if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                    (pDVar31,IVar40,(Object *)pTVar36,
                                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                     ->klass->rgctx_data[0x22].method);
                          if (((pTVar36 == (TabState *)0x0) ||
                              (this_08[1].monitor == (MonitorData *)0x0)) ||
                             (plVar33 = *(longlong **)(this_08[1].monitor + 0x28),
                             plVar33 == (longlong *)0x0)) break;
                          pMVar18 = *(MethodInfo **)(*plVar33 + 0x180);
                          (**(code **)(*plVar33 + 0x178))(plVar33,IVar40,(pTVar36->fields).name);
                        }
                        if ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)this_08[2].monitor ==
                            (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,UnityEngine::Vector3]::
                                 Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                           ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                                            this_08[2].monitor,IVar40,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                            ->klass->rgctx_data[0x21].method);
                        if (iVar6 < 0) {
                          pDVar31 = (Dictionary_2_System_Int32_System_Object_ *)this_08[2].monitor;
                          this_10 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                     *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__List<SoundTabInfo>
                                                  );
                          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                          Metadata::__Il2CppFullySharedGenericType]::
                          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                    (this_10,
                                     MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__
                                    );
                          if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                    (pDVar31,IVar40,(Object *)this_10,
                                     (InsertionBehavior__Enum)
                                     CONCAT71((int7)((ulonglong)pMVar18 >> 8),2),
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                                     ->klass->rgctx_data[0x22].method);
                        }
                        if ((Dictionary_2_System_Int32_System_Object_ *)this_08[2].monitor ==
                            (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                        pOVar41 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            ((Dictionary_2_System_Int32_System_Object_ *)
                                             this_08[2].monitor,IVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                            );
                        this_11 = (Predicate_1_Object_ *)
                                  FUN_?(TypeInfo__System__Func<SoundTabInfo,_bool>);
                        uVar9 = 0;
                        mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                                  (this_11,pOVar17,
                                   MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                                   ,(MethodInfo *)0x0);
                        bVar30 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                           ((IEnumerable_1_System_Object_ *)pOVar41,
                                            (Func_2_Object_Boolean_ *)this_11,
                                            bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                           );
                        if (bVar30 != 0) {
                          if ((Dictionary_2_System_Int32_System_Object_ *)this_08[2].monitor ==
                              (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                          pLVar23 = (List_1_System_Object_ *)
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32,System::Object]::
                                    Dictionary_2_System_Int32_System_Object__get_Item
                                              ((Dictionary_2_System_Int32_System_Object_ *)
                                               this_08[2].monitor,IVar40,
                                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                              );
                          pOVar41 = (Object *)FUN_?(TypeInfo__SoundTabInfo);
                          if (pOVar41 == (Object *)0x0) break;
                          pOVar41[1].klass = pOVar17[1].klass;
                          func_?(pOVar41 + 1);
                          pOVar41[1].monitor = (MonitorData *)pSVar34;
                          func_?(&pOVar41[1].monitor);
                          if (this_08[4].monitor == (MonitorData *)0x0) break;
                          lVar38 = FUN_?(this_08[4].monitor,pCVar8);
                          if (lVar38 == 0) break;
                          pOVar41[2].klass = *(Object__Class **)(lVar38 + 0x10);
                          func_?(pOVar41 + 2);
                          if (pLVar23 == (List_1_System_Object_ *)0x0) break;
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    (pLVar23,pOVar41,
                                     MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                                    );
                        }
                        this_03 = this_08[4].fields._.m_CachedPtr;
                        if (this_03 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,System::Single]::
                                 Dictionary_2_System_Int32_System_Single__FindEntry
                                           (this_03,IVar40,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                            ->klass->rgctx_data[0x21].method);
                        this_04 = this_08[4].fields._.m_CachedPtr;
                        if (iVar6 < 0) {
                          if (this_04 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                          iVar6 = 1;
                          pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
                          pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                                    ->klass->rgctx_data;
                        }
                        else {
                          if (this_04 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                          iVar16 = FUN_?(this_04,IVar40,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                );
                          pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                          iVar6 = iVar16 + 1;
                          pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                                    ->klass->rgctx_data;
                        }
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                                  (this_04,IVar40,iVar6,(InsertionBehavior__Enum)pMVar18,
                                   pIVar42[0x22].method);
                        pDVar31 = this_08[1].fields._.m_CachedPtr;
                        if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                        IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Int32Enum]::
                                 Dictionary_2_System_Object_System_Int32Enum__get_Item
                                           ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                            this_08[5].monitor,(Object *)pSVar34,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                           );
                        if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            (pDVar31,IVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                            );
                        if (pOVar17 == (Object *)0x0) break;
                        *(int *)&pOVar17[2].klass = *(int *)&pOVar17[2].klass + 1;
                        pCVar8 = (Component__Class *)(ulonglong)(uVar2 + 1);
                        pMVar19 = this_08[4].monitor;
                        lVar14 = lVar14 + 8;
                      } while (pMVar19 != (MonitorData *)0x0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowInfoDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowInfoDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_World_object_of_unknown_type);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Model_preview__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Model_item_ID__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Model_author_ID__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).selectedWorldObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
        ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
         TypeInfo__MVCubeModelInstance)) && (pMVar1[1].klass != (MVWorldObjectClient__Class *)0x0))
    {
      pSVar3 = TM::TM__(StringLiteral_Model_author_ID__,(MethodInfo *)0x0);
      if (pMVar1[1].klass == (MVWorldObjectClient__Class *)0x0) {
DAT_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      aIStackX_8[0].m_value = *(int32_t *)((longlong)&((pMVar1[1].klass)->_0).interopData + 4);
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar5,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
      pSVar3 = TM::TM__(StringLiteral_Model_item_ID__,(MethodInfo *)0x0);
      aIStackX_8[0].m_value = (pMVar1->fields)._.itemId;
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar5,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
      pSVar3 = TM::TM__(StringLiteral_Model_preview__,(MethodInfo *)0x0);
      pMVar1 = (this->fields).selectedWorldObject;
      if (pMVar1 == (MVWorldObjectClient *)0x0) goto DAT_?;
      iVar6 = (pMVar1->fields).interactionFlags;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_False);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_True);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar5 = StringLiteral_False;
      if ((iVar6 & 0x20000) != 0) {
        pSVar5 = StringLiteral_True;
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar5,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  pSVar3 = TM::TM__(StringLiteral_World_object_of_unknown_type,(MethodInfo *)0x0);
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,pSVar3,0);
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
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)FUN_?(uRam_?,&stack0x00000010);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,key,(Object *)pSVar3,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase,this_00,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
        (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
      pMVar7 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
      (*(pMVar7->fields)._._.invoke_impl)
                ((pMVar7->fields)._._.method_code,3,this_00,(pMVar7->fields)._._.method,unaff_RDI);
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowLevelsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowLevelsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowLevelsDialog_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_00 = TypeInfo__ContextMenuController____c->static_fields->__9__27_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowLevelsDialog_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__27_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__27_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).settingsFactory != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                    ,(this->fields).woID,0,0,unaff_RDI);
      LOCK();
      UNLOCK();
      FUN_?(&
                    GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)_UNK_? + 0xADDR))
              ((code *)((ulonglong)_UNK_? + 0xADDR));
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowMinorGamePointsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowMinorGamePointsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowMinorGamePointsDialog_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_03 = TypeInfo__ContextMenuController____c->static_fields->__9__23_0;
  if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowMinorGamePointsDialog_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__23_0 = this_03;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__23_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 == (SettingsFactory *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this_00->fields).gamePointMinorRewardSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       GamePointMinorRewardSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointMinorRewardSettings>_GamePointMinorRewardSettings_
                      );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  if (pOVar8 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal_Reward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar9 = pOVar8[2].klass;
  *(int32_t *)&pOVar8[3].monitor = iVar6;
  pSVar10 = StringLiteral_Crystal_Reward;
  if (pOVar9 == (Object__Class *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = (Text *)(pOVar9->_0).byval_arg.data.array;
  (pOVar9->_0).byval_arg.attrs = (short)iVar6;
  (pOVar9->_0).byval_arg.type = (char)((uint)iVar6 >> 0x10);
  (pOVar9->_0).byval_arg.field_0xb = (char)((uint)iVar6 >> 0x18);
  if (pTVar11 == (Text *)0x0) goto code_?;
  (*(pTVar11->klass->vtable).set_text.methodPtr)
            (pTVar11,pSVar10,(pTVar11->klass->vtable).set_text.method);
  uVar5 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy
            ((SettingsBase *)pOVar9,iVar6,pGVar1,(MethodInfo *)0x0);
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_04 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_04,iVar6,(MethodInfo *)0x0), pMVar12 == (MVWorldObjectClient *)0x0)
      ) || (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)(pMVar12->fields)._.data,
           this_01 ==
           (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)0x0)) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_01,(Object *)StringLiteral_gamePointAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  lVar13 = lRam_?;
  if (iVar6 < 0) {
    pOVar14 = (Object *)(unaff_RBX & 0xffffffff00000000);
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar14 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar14 + 1,&stack0x00000008,(longlong)*(int *)(lVar13 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar2 & 0x3f);
          do {
            uVar15 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar3 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar16 = uVar15 == *puVar3;
            if (bVar16) {
              *puVar3 = uVar15 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar16);
        }
      }
      else {
        pOVar14 = (Object *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_gamePointAmount,pOVar14,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar14 == (Object *)0x0) goto code_?;
  if ((pOVar14->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar14,lRam_?);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((SettingsSlider *)pOVar8[2].monitor == (SettingsSlider *)0x0) goto code_?;
  iVar6 = *(int32_t *)&pOVar14[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            ((SettingsSlider *)pOVar8[2].monitor,StringLiteral_gamePointAmount,iVar6,0,100,
             (MethodInfo *)0x0);
  pOVar9 = pOVar8[3].klass;
  if (pOVar9 == (Object__Class *)0x0) goto code_?;
  bVar16 = iRam_? != 0;
  (pOVar9->_0).element_class = (Il2CppClass *)StringLiteral_gamePointAmount;
  if (bVar16) {
    uVar2 = (uint)((ulonglong)&(pOVar9->_0).element_class >> 0xc);
    uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar16 = uVar4 == *puVar3;
      if (bVar16) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar16);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 ((SettingsInputFieldSlider *)pOVar9,(float)iVar6,(MethodInfo *)0x0);
  pSVar10 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_02 = (InputField *)(pOVar9->_0).byval_arg.data.array;
  if (this_02 == (InputField *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar17 = (this_02->fields).m_Text;
  if (pSVar17 == pSVar10) {
    return;
  }
  if (pSVar17 == (String *)0x0) {
code_?:
    if (pSVar10 == (String *)0x0) {
code_?:
      pSVar10 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar10 == (String *)0x0) goto code_?;
    if ((pSVar17->fields)._stringLength == (pSVar10->fields)._stringLength) {
      bVar18 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar17->fields)._firstChar,
                         (uint8_t *)&(pSVar10->fields)._firstChar,
                         (longlong)(pSVar17->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar10 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar10,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_02->fields).m_LineType == 0) {
    if ((pSVar10 == (String *)0x0) ||
       (pSVar10 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar10,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar10 == (String *)0x0)) goto DAT_?;
    pSVar10 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar10,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_02->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_02->fields).m_CharacterValidation == 0)) {
    if (0 < (this_02->fields).m_CharacterLimit) {
      if (pSVar10 == (String *)0x0) goto DAT_?;
      iVar19 = (this_02->fields).m_CharacterLimit;
      if (iVar19 < (pSVar10->fields)._stringLength) {
        pSVar10 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar10,0,iVar19,(MethodInfo *)0x0);
      }
    }
    (this_02->fields).m_Text = pSVar10;
    func_?(&(this_02->fields).m_Text);
  }
  else {
    bVar16 = iRam_? != 0;
    (this_02->fields).m_Text = ::StringLiteral__;
    if (bVar16) {
      uVar2 = (uint)((ulonglong)&(this_02->fields).m_Text >> 0xc);
      lVar13 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar3 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar16 = uVar5 == *puVar3;
        if (bVar16) {
          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    pIVar20 = (this_02->fields).m_OnValidateInput;
    if (pIVar20 == (InputField_OnValidateInput *)0x0) {
      pIVar20 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar21 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar16 = iRam_? != 0;
      (pIVar20->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar20->fields)._._.method = pMVar21;
      (pIVar20->fields)._._.m_target = (Object *)this_02;
      if (bVar16) {
        uVar2 = (uint)((ulonglong)&(pIVar20->fields)._._.m_target >> 0xc);
        lVar13 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar3 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar16 = uVar5 == *puVar3;
          if (bVar16) {
            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar16);
      }
      uVar22 = pMVar21->parameters_count;
      (pIVar20->fields)._._.method_code = pIVar20;
      if ((pMVar21->flags & 0x10) == 0) {
        if (uVar22 != 2) goto code_?;
        pcVar7 = FUN_?;
      }
      else if (uVar22 == 3) {
        pcVar7 = FUN_?;
      }
      else {
code_?:
        (pIVar20->fields)._._.method_code = (pIVar20->fields)._._.m_target;
        pcVar7 = (pIVar20->fields)._._.method_ptr;
      }
      (pIVar20->fields)._._.invoke_impl = pcVar7;
      (pIVar20->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar10 == (String *)0x0) goto DAT_?;
    iVar6 = (pSVar10->fields)._stringLength;
    (this_02->fields).m_CaretSelectPosition = iVar6;
    (this_02->fields).m_CaretPosition = iVar6;
    if ((this_02->fields).m_CharacterLimit < 1) {
      iVar19 = (pSVar10->fields)._stringLength;
    }
    else {
      iVar19 = (this_02->fields).m_CharacterLimit;
      iVar23 = (pSVar10->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar23 < iVar19) {
        iVar19 = iVar23;
      }
    }
    uVar2 = 0;
    if (0 < iVar19) {
      puVar24 = &(pSVar10->fields)._firstChar;
      lVar13 = 0;
      do {
        pSVar17 = (this_02->fields).m_Text;
        if (pSVar17 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar10->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pIVar20 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar20->fields)._._.invoke_impl)
                      ((pIVar20->fields)._._.method_code,(this_02->fields).m_Text,
                       (pSVar17->fields)._stringLength,*puVar24,(pIVar20->fields)._._.method);
        if (c != 0) {
          pSVar17 = (this_02->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar17 = mscorlib.dll::System::String::String_Concat_4(pSVar17,str1,(MethodInfo *)0x0);
          (this_02->fields).m_Text = pSVar17;
          func_?(&(this_02->fields).m_Text);
        }
        uVar2 = uVar2 + 1;
        lVar13 = lVar13 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar13 < iVar19);
    }
  }
  if ((this_02->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_02->fields).m_Keyboard,(this_02->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar10 = (this_02->fields).m_Text;
  if (pSVar10 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar19 = (pSVar10->fields)._stringLength;
  if (iVar19 < (this_02->fields).m_CaretPosition) {
    (this_02->fields).m_CaretPosition = iVar19;
  }
  else if ((this_02->fields).m_CaretSelectPosition <= iVar19) goto code_?;
  (this_02->fields).m_CaretSelectPosition = iVar19;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_02,(MethodInfo *)0x0);
  if ((this_02->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_02->fields).m_OnValueChanged,
               (Object *)(this_02->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_02,(MethodInfo *)0x0)
  ;
  return;
}


/* Void ShowRespawnDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowRespawnDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowRespawnDialog_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_03 = TypeInfo__ContextMenuController____c->static_fields->__9__24_0;
  if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowRespawnDialog_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__24_0 = this_03;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__24_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    original = (this_00->fields).respawnSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         RespawnSettings_MethodInfo__UnityEngine__Object__Instantiate<RespawnSettings>_RespawnSettings_
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pOVar7 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Respawn);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_respawnTime);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = pOVar7[2].klass;
      *(int32_t *)&pOVar7[5].klass = iVar6;
      pSVar8 = StringLiteral_Respawn;
      if (this_01 != (Object__Class *)0x0) {
        pTVar9 = (Text *)(this_01->_0).byval_arg.data.array;
        (this_01->_0).byval_arg.attrs = (short)iVar6;
        (this_01->_0).byval_arg.type = (char)((uint)iVar6 >> 0x10);
        (this_01->_0).byval_arg.field_0xb = (char)((uint)iVar6 >> 0x18);
        if (pTVar9 != (Text *)0x0) {
          (*(pTVar9->klass->vtable).set_text.methodPtr)
                    (pTVar9,pSVar8,(pTVar9->klass->vtable).set_text.method);
          SettingsBase::SettingsBase_InitializeHierarchy
                    ((SettingsBase *)this_01,iVar6,pGVar1,(MethodInfo *)0x0);
          this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((this_04 != (MVWorldObjectClientManager *)0x0) &&
             (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (this_04,iVar6,(MethodInfo *)0x0),
             pMVar10 != (MVWorldObjectClient *)0x0)) {
            this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)(pMVar10->fields)._.data;
            iVar6 = 0x1e;
            if (this_02 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
              iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                (this_02,(Object *)StringLiteral_respawnTime,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 ->klass->rgctx_data[0x21].method);
              bVar12 = (byte)((uint)iVar11 >> 0x1f) ^ 1;
              *(byte *)((longlong)&pOVar7[5].klass + 5) = bVar12;
              if (bVar12 != 0) {
                pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    ((Dictionary_2_System_Object_System_Object_ *)this_02,
                                     (Object *)StringLiteral_respawnTime,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar13 == (Object *)0x0) goto code_?;
                if ((pOVar13->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar13,lRam_?);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                iVar6 = *(int32_t *)&pOVar13[1].klass;
              }
              if ((SettingsSlider *)pOVar7[2].monitor != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize_1
                          ((SettingsSlider *)pOVar7[2].monitor,StringLiteral_respawnTime,iVar6,
                           0x1e,0x708,(MethodInfo *)0x0);
                if (pOVar7[3].klass != (Object__Class *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                            ((SettingsInputFieldSlider *)pOVar7[3].klass,StringLiteral_respawnTime,
                             (float)iVar6,(MethodInfo *)0x0);
                  if ((GameObject *)pOVar7[3].monitor != (GameObject *)0x0) {
                    value = *(bool *)((longlong)&pOVar7[5].klass + 5);
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              ((GameObject *)pOVar7[3].monitor,value,(MethodInfo *)0x0);
                    if (pOVar7[4].klass != (Object__Class *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                ((GameObject *)pOVar7[4].klass,value,(MethodInfo *)0x0);
                      if ((Toggle *)pOVar7[4].monitor != (Toggle *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                                  ((Toggle *)pOVar7[4].monitor,value,1,(MethodInfo *)0x0);
                        *(undefined1 *)((longlong)&pOVar7[5].klass + 4) = 1;
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
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ShowRewardedAdDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowRewardedAdDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowRewardedAdDialog_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_03 = TypeInfo__ContextMenuController____c->static_fields->__9__28_0;
  if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowRewardedAdDialog_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__28_0 = this_03;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__28_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    original = (this_00->fields).rewardedAdRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (pOVar7 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ,iVar6,pGVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Rewarded_ad_requirement);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_rewardedAd);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = pOVar7[2].klass;
      pSVar8 = TM::TM__(StringLiteral_Rewarded_ad_requirement,(MethodInfo *)0x0);
      if (this_01 != (Object__Class *)0x0) {
        pTVar9 = (Text *)(this_01->_0).byval_arg.data.array;
        (this_01->_0).byval_arg.attrs = (short)iVar6;
        (this_01->_0).byval_arg.type = (char)((uint)iVar6 >> 0x10);
        (this_01->_0).byval_arg.field_0xb = (char)((uint)iVar6 >> 0x18);
        if (pTVar9 != (Text *)0x0) {
          (*(pTVar9->klass->vtable).set_text.methodPtr)
                    (pTVar9,pSVar8,(pTVar9->klass->vtable).set_text.method);
          uVar5 = 0;
          SettingsBase::SettingsBase_InitializeHierarchy
                    ((SettingsBase *)this_01,iVar6,pGVar1,(MethodInfo *)0x0);
          this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((this_04 != (MVWorldObjectClientManager *)0x0) &&
              (pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (this_04,iVar6,(MethodInfo *)0x0),
              pMVar10 != (MVWorldObjectClient *)0x0)) &&
             (this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)(pMVar10->fields)._.data,
             this_02 !=
             (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)0x0)) {
            iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                              (this_02,(Object *)StringLiteral_rewardedAd,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                               ->klass->rgctx_data[0x21].method);
            lVar11 = lRam_?;
            if (iVar6 < 0) {
              value_00 = (Object *)(unaff_RBP & 0xffffffffffffff00);
              if (*(int *)(lRam_? + 0x28) < 0) {
                if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                   ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                  value_00 = (Object *)FUN_?(lRam_?);
                  FUN_?(value_00 + 1,&stack0x00000010,
                                (longlong)*(int *)(lVar11 + 0xf8) + -0x10);
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)(value_00 + 1) >> 0xc);
                    uVar5 = (ulonglong)(uVar2 & 0x3f);
                    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar12 = *puVar3;
                      LOCK();
                      uVar4 = *puVar3;
                      if (uVar12 == uVar4) {
                        *puVar3 = uVar12 | 1L << uVar5;
                      }
                      UNLOCK();
                    } while (uVar12 != uVar4);
                  }
                }
                else {
                  value_00 = (Object *)0x0;
                }
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,
                         (Object *)StringLiteral_rewardedAd,value_00,
                         (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            pMVar13 = pOVar7[2].monitor;
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                                 (Object *)StringLiteral_rewardedAd,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            pSVar8 = StringLiteral_rewardedAd;
            if ((pMVar13 != (MonitorData *)0x0) && (pOVar7 != (Object *)0x0)) {
              if ((pOVar7->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar7,lRam_?);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              value = *(bool *)&pOVar7[1].klass;
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              bVar15 = iRam_? != 0;
              *(String **)(pMVar13 + 0x28) = pSVar8;
              if (bVar15) {
                uVar2 = (uint)((ulonglong)(pMVar13 + 0x28) >> 0xc);
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
              if (*(Toggle **)(pMVar13 + 0x20) != (Toggle *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                          (*(Toggle **)(pMVar13 + 0x20),value,1,(MethodInfo *)0x0);
                if (*(longlong *)(pMVar13 + 0x20) != 0) {
                  lVar11 = *(longlong *)(*(longlong *)(pMVar13 + 0x20) + 0x118);
                  uVar16 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                  FUN_?(uVar16,pMVar13,MethodInfo__SettingsToggle__ValueChanged_bool_);
                  if (lVar11 != 0) {
                    pMVar17 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                             ->klass->rgctx_data[2].method;
                    pIVar18 = pMVar17->klass;
                    if ((pIVar18->field_0x135 & 1) == 0) {
                      pIVar18 = (Il2CppClass *)FUN_?(pIVar18);
                    }
                    pvVar19 = pIVar18->rgctx_data[5].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar19 + 0x135) & 1) == 0) {
                      pvVar19 = (void *)FUN_?(pvVar19);
                    }
                    uVar20 = FUN_?(pvVar19);
                    pIVar18 = pMVar17->klass;
                    if ((pIVar18->field_0x135 & 1) == 0) {
                      pIVar18 = (Il2CppClass *)FUN_?(pIVar18);
                    }
                    FUN_?(uVar20,uVar16,
                                  (pIVar18->rgctx_data[7].method)->klass->rgctx_data[4].
                                  rgctxDataDummy);
                    if ((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(longlong *)(lVar11 + 0x18) != 0) {
                        FUN_?(*(longlong *)(lVar11 + 0x18),uVar20);
                        *(undefined1 *)(lVar11 + 0x28) = 1;
                        return;
                      }
                    }
                    FUN_?();
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
              }
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ShowSettingsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowSettingsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowSettingsDialog_b__29_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_02 = TypeInfo__ContextMenuController____c->static_fields->__9__29_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowSettingsDialog_b__29_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__29_0 = this_02;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__29_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (((this_00 == (SettingsFactory *)0x0) ||
      (pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
      pMVar7 == (MVWorldObjectClientManager *)0x0)) ||
     (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar7,iVar6,(MethodInfo *)0x0), pMVar8 == (MVWorldObjectClient *)0x0))
  {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar10 = (pMVar8->fields)._.type;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsFactory____c__DisplayClass58_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Oculus_Kill_Limit);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WorldObjectType__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__has_no_settings_dialogue_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Kill_Limit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__SettingsFactory____c__DisplayClass58_0);
  if (iVar10 < 0x42) {
    if (iVar10 < 0xe) {
      if (iVar10 == 2) {
        pPVar11 = (this_00->fields).pointLightSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pPVar11 = (PointLightSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pPVar11,
                             PointLightSettings_MethodInfo__UnityEngine__Object__Instantiate<PointLightSettings>_PointLightSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pPVar11 != (PointLightSettings *)0x0) {
          PointLightSettings::PointLightSettings_Initialize(pPVar11,iVar6,pGVar1,(MethodInfo *)0x0)
          ;
          return;
        }
        goto code_?;
      }
      if (iVar10 == 0xd) {
        pSVar12 = (this_00->fields).soundEmitterSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar12 = (SoundEmitterSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pSVar12,
                             SoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<SoundEmitterSettings>_SoundEmitterSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pSVar12 != (SoundEmitterSettings *)0x0) {
          SoundEmitterSettings::SoundEmitterSettings_Initialize
                    (pSVar12,iVar6,pGVar1,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    switch(iVar10) {
    case 0x14:
      pTVar13 = (this_00->fields).toggleBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar13 = (ToggleBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar13,
                           ToggleBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<ToggleBoxSettings>_ToggleBoxSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar13 == (ToggleBoxSettings *)0x0) goto code_?;
      ToggleBoxSettings::ToggleBoxSettings_Initialize(pTVar13,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
      goto code_?;
    case 0x18:
      pMVar14 = (this_00->fields).messageBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar14 = (MessageBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pMVar14,
                           MessageBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<MessageBoxSettings>_MessageBoxSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pMVar14 == (MessageBoxSettings *)0x0) goto code_?;
      MessageBoxSettings::MessageBoxSettings_Initialize(pMVar14,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x19:
      pFVar15 = (this_00->fields).fireSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar15 = (FireSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pFVar15,
                           FireSettings_MethodInfo__UnityEngine__Object__Instantiate<FireSettings>_FireSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pFVar15 == (FireSettings *)0x0) goto code_?;
      FireSettings::FireSettings_Initialize(pFVar15,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x1a:
      pSVar16 = (this_00->fields).smokeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar16 = (SmokeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar16,
                           SmokeSettings_MethodInfo__UnityEngine__Object__Instantiate<SmokeSettings>_SmokeSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pSVar16 == (SmokeSettings *)0x0) goto code_?;
      SmokeSettings::SmokeSettings_Initialize(pSVar16,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x1b:
      pTVar17 = (this_00->fields).timeTriggerSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar17 = (TimeTriggerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar17,
                           TimeTriggerSettings_MethodInfo__UnityEngine__Object__Instantiate<TimeTriggerSettings>_TimeTriggerSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar17 == (TimeTriggerSettings *)0x0) goto code_?;
      TimeTriggerSettings::TimeTriggerSettings_Initialize(pTVar17,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x21:
      pPVar18 = (this_00->fields).pressurePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar18 = (PressurePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar18,
                           PressurePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<PressurePlateSettings>_PressurePlateSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pPVar18 == (PressurePlateSettings *)0x0) goto code_?;
      PressurePlateSettings::PressurePlateSettings_Initialize
                (pPVar18,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x26:
      pSVar19 = (this_00->fields).skyboxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar19 = (SkyboxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar19,
                           SkyboxSettings_MethodInfo__UnityEngine__Object__Instantiate<SkyboxSettings>_SkyboxSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pSVar19 == (SkyboxSettings *)0x0) goto code_?;
      SkyboxSettings::SkyboxSettings_Initialize(pSVar19,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
      pSVar20 = (this_00->fields).spawnPointSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar20 = (SpawnPointSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar20,
                           SpawnPointSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointSettings>_SpawnPointSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pSVar20 == (SpawnPointSettings *)0x0) goto code_?;
      SpawnPointSettings::SpawnPointSettings_Initialize(pSVar20,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x2b:
      pOVar21 = (this_00->fields).objectEnablerPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar21 = (ObjectEnablerSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar21,
                           ObjectEnablerSettings_MethodInfo__UnityEngine__Object__Instantiate<ObjectEnablerSettings>_ObjectEnablerSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pOVar21 == (ObjectEnablerSettings *)0x0) goto code_?;
      ObjectEnablerSettings::ObjectEnablerSettings_Initialize
                (pOVar21,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x2c:
      pWVar22 = (this_00->fields).waterBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar22 = (WaterBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar22,
                           WaterBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<WaterBoxSettings>_WaterBoxSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pWVar22 == (WaterBoxSettings *)0x0) goto code_?;
      WaterBoxSettings::WaterBoxSettings_Initialize(pWVar22,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x2d:
      SettingsFactory::SettingsFactory_CreateBlueprintSettings(this_00,iVar6,(MethodInfo *)0x0);
      break;
    case 0x2e:
      pPVar23 = (this_00->fields).pulseBoxPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pPVar23 = (PulseBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pPVar23,
                           PulseBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<PulseBoxSettings>_PulseBoxSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pPVar23 == (PulseBoxSettings *)0x0) goto code_?;
      PulseBoxSettings::PulseBoxSettings_Initialize(pPVar23,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    default:
      switch(iVar10) {
      case 0x36:
        pCVar24 = (this_00->fields).cubeGunSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar24 = (CubeGunSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar24,
                             CubeGunSettings_MethodInfo__UnityEngine__Object__Instantiate<CubeGunSettings>_CubeGunSettings_
                            );
        if (pCVar24 == (CubeGunSettings *)0x0) goto code_?;
        CubeGunSettings::CubeGunSettings_Initialize
                  (pCVar24,iVar6,(this_00->fields).materialsController,(MethodInfo *)0x0);
        break;
      default:
        goto code_?;
      case 0x39:
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar7,iVar6,(MethodInfo *)0x0);
        if (pMVar8 == (MVWorldObjectClient *)0x0) {
          MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          goto code_?;
        }
        bVar25 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
        if (((pMVar8->klass->_1).naturalAligment < bVar25) ||
           ((MVWorldObjectSpawnerVehicle__Class *)
            (pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            TypeInfo__MVWorldObjectSpawnerVehicle)) {
          FUN_?(pMVar8);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar7,pMVar8[1].fields._.ownerActorNr,(MethodInfo *)0x0);
        this_04 = (VehicleBaseSettings *)0x0;
        if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
        pMVar26 = pMVar8->klass;
        bVar25 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if (((pMVar26->_1).naturalAligment < bVar25) ||
           ((MVVehicleBase__Class *)(pMVar26->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            TypeInfo__MVVehicleBase)) {
          FUN_?(pMVar8,TypeInfo__MVVehicleBase);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar10 = (*(pMVar26->vtable).get_DocumentationType.methodPtr)();
        if (iVar10 < 0x1b) {
          if (iVar10 == 0x19) {
            original_00 = (this_00->fields).hoverCraftSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HoverCraftSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HoverCraftSettings_
              ;
            }
          }
          else {
            if (iVar10 != 0x1a) goto code_?;
            original_00 = (HoverCraftSettings *)(this_00->fields).hamsterWheelSettingsPrefab;
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::HamsterWheelSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__HamsterWheelSettings_
              ;
            }
          }
code_?:
          this_04 = (VehicleBaseSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original_00,method_00);
        }
        else if ((iVar10 == 0x1f) || (iVar10 == 0x22)) {
          original_00 = (HoverCraftSettings *)(this_00->fields).jetpackSettingsPrefab;
          method_00 = 
          UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
          ;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
            method_00 = 
            UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::JetpackSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__JetpackSettings_
            ;
          }
          goto code_?;
        }
code_?:
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
        if (this_04 != (VehicleBaseSettings *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((this_04->fields)._._._._.m_CachedPtr != (void *)0x0) {
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleBaseSettings::
            VehicleBaseSettings_Initialize(this_04,iVar6,pGVar1,(MethodInfo *)0x0);
          }
        }
        break;
      case 0x3c:
        pRVar27 = (this_00->fields).roundCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pRVar27 = (RoundCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pRVar27,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RoundCubeSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pRVar27 == (RoundCubeSettings *)0x0) goto code_?;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_Initialize(pRVar27,iVar6,pGVar1,(MethodInfo *)0x0);
        break;
      case 0x3d:
        pOVar28 = (this_00->fields).oculusSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar28 = (OculusSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pOVar28,
                             OculusSettings_MethodInfo__UnityEngine__Object__Instantiate<OculusSettings>_OculusSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pOVar28 == (OculusSettings *)0x0) goto code_?;
        OculusSettings::OculusSettings_Initialize(pOVar28,iVar6,pGVar1,(MethodInfo *)0x0);
        break;
      case 0x3f:
        pKVar29 = (this_00->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar29 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar29,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar30 = StringLiteral_Kill_Limit;
        goto code_?;
      case 0x40:
        pKVar29 = (this_00->fields).killLimitSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pKVar29 = (KillLimitSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pKVar29,
                             KillLimitSettings_MethodInfo__UnityEngine__Object__Instantiate<KillLimitSettings>_KillLimitSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        pSVar30 = StringLiteral_Oculus_Kill_Limit;
code_?:
        pSVar30 = TM::TM__(pSVar30,(MethodInfo *)0x0);
        if (pKVar29 == (KillLimitSettings *)0x0) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        KillLimitSettings::KillLimitSettings_Initialize
                  (pKVar29,iVar6,pGVar1,pSVar30,(MethodInfo *)0x0);
        break;
      case 0x41:
        pCVar31 = (this_00->fields).countingCubeSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar31 = (CountingCubeSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pCVar31,
                             CountingCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<CountingCubeSettings>_CountingCubeSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pCVar31 == (CountingCubeSettings *)0x0) goto code_?;
        CountingCubeSettings::CountingCubeSettings_Initialize
                  (pCVar31,iVar6,pGVar1,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if (iVar10 < 0x87) {
      if (iVar10 == 0x77) {
        pVVar32 = (this_00->fields).vehicleEnergySettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pVVar32 = (VehicleEnergySettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pVVar32,
                             UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergySettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pVVar32 != (VehicleEnergySettings *)0x0) {
          UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::VehicleEnergySettings::
          VehicleEnergySettings_Initialize(pVVar32,iVar6,pGVar1,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (iVar10 == 0x86) {
        original = (this_00->fields).spawnRoleEditorPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar33 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)original,
                             SpawnRoleEditorMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleEditorMenu>_SpawnRoleEditorMenu_
                            );
        if (object_00 != (Object *)0x0) {
          object_00[1].klass = pOVar33;
          func_?(object_00 + 1);
          if (object_00[1].klass != (Object__Class *)0x0) {
            SpawnRoleEditorMenu::SpawnRoleEditorMenu_Initialize
                      ((SpawnRoleEditorMenu *)object_00[1].klass,iVar6,(MethodInfo *)0x0);
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0);
            this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_03,object_00,
                       MethodInfo__SettingsFactory____c__DisplayClass58_0___CreateSettingsDialog_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar1,(BaseEventData *)0x0,this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if (iVar10 == 0x88) {
      pOVar34 = (this_00->fields).objectTransparencySettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar34 = (ObjectTransparencySettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pOVar34,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__ObjectTransparencySettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pOVar34 != (ObjectTransparencySettings *)0x0) {
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
        ObjectTransparencySettings_Initialize(pOVar34,iVar6,pGVar1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(iVar10) {
    case 0x91:
      pCVar35 = (this_00->fields).cameraBoxSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar35 = (CameraBoxSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar35,
                           UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Camera__CameraBoxSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pCVar35 == (CameraBoxSettings *)0x0) goto code_?;
      UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
      CameraBoxSettings_Initialize(pCVar35,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x95:
      pGVar36 = (this_00->fields).gameCoinChestSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar36 = (GameCoinChestSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar36,
                           GameCoinChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinChestSettings>_GameCoinChestSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar36 == (GameCoinChestSettings *)0x0) goto code_?;
      GameCoinChestSettings::GameCoinChestSettings_Initialize
                (pGVar36,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0x98:
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar7 != (MVWorldObjectClientManager *)0x0) &&
         (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (pMVar7,iVar6,(MethodInfo *)0x0),
         pMVar8 != (MVWorldObjectClient *)0x0)) {
        bVar25 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint->_1).naturalAligment;
        if (((pMVar8->klass->_1).naturalAligment < bVar25) ||
           ((MVDoorBlueprint__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar25 - 1] !=
            TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint)) {
          FUN_?(pMVar8,TypeInfo__WorldObjectTypes__MVDoor__MVDoorBlueprint);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pLVar37 = pMVar8[1].fields._.outputLinkRefs;
        if (pLVar37 != (List_1_MV_WorldObject_Link_ *)0x0) {
          iVar6 = *(int32_t *)&(pLVar37->fields)._items;
          pDVar38 = (this_00->fields).doorSettingsPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pDVar38 = (DoorSettings *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pDVar38,
                               UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Doors__DoorSettings_
                              );
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (pDVar38 != (DoorSettings *)0x0) {
            UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Doors::DoorSettings::
            DoorSettings_Initialize(pDVar38,iVar6,pGVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto code_?;
    case 0x9a:
    case 0x9c:
    case 0x9e:
      SettingsFactory::SettingsFactory_CreateEditablePickupItemsSettings
                (this_00,iVar6,(MethodInfo *)0x0);
      break;
    case 0xa1:
      pTVar39 = (this_00->fields).teamEditorSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar39 = (TeamEditorSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar39,
                           TeamEditorSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamEditorSettings>_TeamEditorSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar39 != (TeamEditorSettings *)0x0) {
        this_01 = (pTVar39->fields).settingsBase;
        (pTVar39->fields).woID = iVar6;
        if (this_01 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_Initialize
                    (this_01,iVar6,pGVar1,MVWorldObjectDocumentationType__Enum_TeamEditor,
                     (MethodInfo *)0x0);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar7 != (MVWorldObjectClientManager *)0x0) &&
             (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                  (pMVar7,iVar6,(MethodInfo *)0x0),
             pMVar8 != (MVWorldObjectClient *)0x0)) {
            bVar40 = iRam_? != 0;
            (pTVar39->fields).teamData = (pMVar8->fields)._.data;
            if (bVar40) {
              uVar2 = (uint)((ulonglong)&(pTVar39->fields).teamData >> 0xc);
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
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar39,(pTVar39->fields).blueTeam,(pTVar39->fields).blueTeamButton,
                       MVTeam__Enum_Blue,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar39,(pTVar39->fields).redTeam,(pTVar39->fields).redTeamButton,
                       MVTeam__Enum_Red,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar39,(pTVar39->fields).greenTeam,(pTVar39->fields).greenTeamButton,
                       MVTeam__Enum_Green,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_InitInputfield
                      (pTVar39,(pTVar39->fields).yellowTeam,(pTVar39->fields).yellowTeamButton,
                       MVTeam__Enum_Yellow,(MethodInfo *)0x0);
            TeamEditorSettings::TeamEditorSettings_SetActiveButtons
                      (pTVar39,(pTVar39->fields).teamData,(MethodInfo *)0x0);
            bVar40 = iRam_? == 0;
            (pTVar39->fields).teamData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (bVar40) {
              return;
            }
            uVar2 = (uint)((ulonglong)&(pTVar39->fields).teamData >> 0xc);
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
            return;
          }
        }
      }
      goto code_?;
    case 0xa2:
      pTVar41 = (this_00->fields).triggerCubeSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar41 = (TriggerCubeSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pTVar41,
                           TriggerCubeSettings_MethodInfo__UnityEngine__Object__Instantiate<TriggerCubeSettings>_TriggerCubeSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pTVar41 == (TriggerCubeSettings *)0x0) goto code_?;
      TriggerCubeSettings::TriggerCubeSettings_Initialize(pTVar41,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0xa5:
      pSVar42 = (this_00->fields).shootablePlateSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar42 = (ShootablePlateSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pSVar42,
                           ShootablePlateSettings_MethodInfo__UnityEngine__Object__Instantiate<ShootablePlateSettings>_ShootablePlateSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pSVar42 == (ShootablePlateSettings *)0x0) goto code_?;
      ShootablePlateSettings::ShootablePlateSettings_Initialize
                (pSVar42,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0xa6:
      pLVar43 = (this_00->fields).leverSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar43 = (LeverSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pLVar43,
                           LeverSettings_MethodInfo__UnityEngine__Object__Instantiate<LeverSettings>_LeverSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pLVar43 == (LeverSettings *)0x0) goto code_?;
      LeverSettings::LeverSettings_Initialize(pLVar43,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0xa7:
      pCVar44 = (this_00->fields).collectTheItemDropoffSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar44 = (CollectTheItemDropoffSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar44,
                           CollectTheItemDropoffSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemDropoffSettings>_CollectTheItemDropoffSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pCVar44 == (CollectTheItemDropoffSettings *)0x0) goto code_?;
      CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
                (pCVar44,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0xa8:
      pCVar45 = (this_00->fields).collectTheItemSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar45 = (CollectTheItemSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pCVar45,
                           CollectTheItemSettings_MethodInfo__UnityEngine__Object__Instantiate<CollectTheItemSettings>_CollectTheItemSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pCVar45 == (CollectTheItemSettings *)0x0) goto code_?;
      CollectTheItemSettings::CollectTheItemSettings_Initialize
                (pCVar45,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0xaa:
      pWVar46 = (this_00->fields).windTurbineSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pWVar46 = (WindTurbineSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pWVar46,
                           WindTurbineSettings_MethodInfo__UnityEngine__Object__Instantiate<WindTurbineSettings>_WindTurbineSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pWVar46 == (WindTurbineSettings *)0x0) goto code_?;
      WindTurbineSettings::WindTurbineSettings_Initialize(pWVar46,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    case 0xab:
      pGVar47 = (this_00->fields).globalSoundEmitterSettingsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar47 = (GlobalSoundEmitterSettings *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar47,
                           GlobalSoundEmitterSettings_MethodInfo__UnityEngine__Object__Instantiate<GlobalSoundEmitterSettings>_GlobalSoundEmitterSettings_
                          );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (pGVar47 == (GlobalSoundEmitterSettings *)0x0) goto code_?;
      GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
                (pGVar47,iVar6,pGVar1,(MethodInfo *)0x0);
      break;
    default:
      if (iVar10 == 0xb5) {
        pGVar48 = (this_00->fields).gamePointChestSettingsPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar48 = (GamePointChestSettings *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar48,
                             GamePointChestSettings_MethodInfo__UnityEngine__Object__Instantiate<GamePointChestSettings>_GamePointChestSettings_
                            );
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar48 != (GamePointChestSettings *)0x0) {
          GamePointChestSettings::GamePointChestSettings_Initialize
                    (pGVar48,iVar6,pGVar1,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x96:
    case 0x97:
    case 0x99:
    case 0x9b:
    case 0x9d:
    case 0x9f:
    case 0xa0:
    case 0xa3:
    case 0xa4:
    case 0xa9:
code_?:
      EStack_49.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
      EStack_49.monitor = (MonitorData *)0xffffffffffffffff;
      iStack_50 = iVar10;
      pSVar30 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_49,(MethodInfo *)0x0);
      pSVar30 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_WorldObjectType__,pSVar30,
                           StringLiteral__has_no_settings_dialogue_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar30,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ShowSoundsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowSoundsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowSoundsDialog_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_07 = TypeInfo__ContextMenuController____c->static_fields->__9__30_0;
  if (this_07 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_07 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_07,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowSoundsDialog_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__30_0 = this_07;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__30_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_07,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    original = (this_00->fields).soundInventoryControllerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_08 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         SoundInventoryController_MethodInfo__UnityEngine__Object__Instantiate<SoundInventoryController>_SoundInventoryController_
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_08 != (Component *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                      ,iVar6,pGVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Func<SoundTabInfo,_bool>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<StreamedAudioClipInfo>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<SoundTabInfo>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__SoundInventoryController__PageTurned_int_);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__SoundInventoryController__TabSelected_int_);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__SoundTabInfo);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TabState);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__SoundInventoryController____c__DisplayClass13_0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_url);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar7 = this_08[3].fields._.m_CachedPtr;
      if (pSVar7 != (SettingsBase *)0x0) {
        pCVar8 = (Component__Class *)0x0;
        uVar9 = 0;
        SettingsBase::SettingsBase_Initialize
                  (pSVar7,iVar6,pGVar1,MVWorldObjectDocumentationType__Enum_SoundEmitter,
                   (MethodInfo *)0x0);
        *(undefined4 *)&this_08[2].klass = 1;
        this_09 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_09 != (MVWorldObjectClientManager *)0x0) {
          pMVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                              (this_09,iVar6,(MethodInfo *)0x0);
          if ((pMVar10 != (MVWorldObjectClient *)0x0) &&
             (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)(pMVar10->fields)._.data,
             this_01 !=
             (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)0x0)) {
            iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                               (this_01,(Object *)StringLiteral_url,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                ->klass->rgctx_data[0x21].method);
            if (iVar6 < 0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,
                         (Object *)StringLiteral_url,(Object *)::StringLiteral__,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            SoundInventoryController::SoundInventoryController_DebugPrintSound
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
            pCVar11 = (Component__Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                 (Object *)StringLiteral_url,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pCVar11 == (Component__Class *)0x0) {
              this_08[5].klass = (Component__Class *)0x0;
            }
            else {
              pCVar12 = pCVar8;
              if ((pCVar11->_0).image == pIRam0000000182dbdde0) {
                pCVar12 = pCVar11;
              }
              if (pCVar12 == (Component__Class *)0x0) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              this_08[5].klass = pCVar12;
              pCVar12 = pCVar8;
              if ((pCVar11->_0).image == pIRam0000000182dbdde0) {
                pCVar12 = pCVar11;
              }
              if (pCVar12 == (Component__Class *)0x0) {
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)(this_08 + 5) >> 0xc);
              lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                LOCK();
                bVar15 = uVar5 == *puVar3;
                if (bVar15) {
                  *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar15);
            }
            iVar16 = iRam_?;
            if (this_08[4].klass != (Component__Class *)0x0) {
              this_08[4].monitor = (MonitorData *)((this_08[4].klass)->_0).byval_arg.data;
              if (iVar16 != 0) {
                uVar2 = (uint)((ulonglong)&this_08[4].monitor >> 0xc);
                lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar15 = uVar5 == *puVar3;
                  if (bVar15) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              pOVar17 = this_08[2].fields._.m_CachedPtr;
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (this_08,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pMVar18 = 
              InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
              ;
              pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                  (pOVar17,parent,0,
                                   InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController__UnityEngine__Transform__bool_
                                  );
              bVar15 = iRam_? != 0;
              this_08[1].monitor = (MonitorData *)pOVar17;
              if (bVar15) {
                uVar2 = (uint)((ulonglong)&this_08[1].monitor >> 0xc);
                lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                do {
                  uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar15 = uVar5 == *puVar3;
                  if (bVar15) {
                    *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              pMVar19 = this_08[1].monitor;
              if (pMVar19 != (MonitorData *)0x0) {
                pDVar20 = *(Delegate **)(pMVar19 + 0x40);
                pDVar21 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>)
                ;
                FUN_?(pDVar21,this_08);
                pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                    (pDVar20,pDVar21,(MethodInfo *)0x0);
                pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                if (pDVar20 == (Delegate *)0x0) {
                  *(undefined8 *)(pMVar19 + 0x40) = 0;
                }
                else {
                  lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                  if (lVar14 == 0) {
                    FUN_?(pDVar20,pUVar22);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *(longlong *)(pMVar19 + 0x40) = lVar14;
                  pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                  lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                  if (lVar14 == 0) {
                    FUN_?(pDVar20,pUVar22);
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar2 = (uint)((ulonglong)(pMVar19 + 0x40) >> 0xc);
                  lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                    puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                    LOCK();
                    bVar15 = uVar5 == *puVar3;
                    if (bVar15) {
                      *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar15);
                }
                pMVar19 = this_08[1].monitor;
                if (pMVar19 != (MonitorData *)0x0) {
                  pDVar20 = *(Delegate **)(pMVar19 + 0x48);
                  pDVar21 = (Delegate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
                  FUN_?(pDVar21,this_08);
                  pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      (pDVar20,pDVar21,(MethodInfo *)0x0);
                  pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                  if (pDVar20 == (Delegate *)0x0) {
                    *(undefined8 *)(pMVar19 + 0x48) = 0;
                  }
                  else {
                    lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                    if (lVar14 == 0) {
                      FUN_?(pDVar20,pUVar22);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                    *(longlong *)(pMVar19 + 0x48) = lVar14;
                    pUVar22 = TypeInfo__UnityEngine__Events__UnityAction<int>;
                    lVar14 = FUN_?(pDVar20,TypeInfo__UnityEngine__Events__UnityAction<int>);
                    if (lVar14 == 0) {
                      FUN_?(pDVar20,pUVar22);
                      pcVar13 = (code *)swi(3);
                      (*pcVar13)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)(pMVar19 + 0x48) >> 0xc);
                    lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                      puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                      LOCK();
                      bVar15 = uVar5 == *puVar3;
                      if (bVar15) {
                        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar15);
                  }
                  if ((InventoryController *)this_08[1].monitor != (InventoryController *)0x0) {
                    InventoryController::InventoryController_Initialize
                              ((InventoryController *)this_08[1].monitor,
                               *(int32_t *)&this_08[3].klass,(MethodInfo *)0x0);
                    pMVar19 = this_08[4].monitor;
                    if (pMVar19 != (MonitorData *)0x0) {
                      lVar14 = 0x20;
                      do {
                        uVar2 = (uint)pCVar8;
                        if (*(int *)(pMVar19 + 0x18) <= (int)uVar2) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                          ,0);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__Dispose__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__get_Current__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<SoundViewItem>__GetEnumerator__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&TypeInfo__UnityEngine__Object);
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&StringLiteral_url);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (((InventoryController *)this_08[1].monitor !=
                               (InventoryController *)0x0) &&
                             (pLVar23 = InventoryController::
                                        InventoryController_GetComponentsOfSlotsWithType
                                                  ((InventoryController *)this_08[1].monitor,
                                                                                                      
                                                  System__Collections__Generic__List<SoundViewItem>_MethodInfo__InventoryController__GetComponentsOfSlotsWithType<SoundViewItem>__
                                                  ), pLVar23 != (List_1_System_Object_ *)0x0)) {
                            if (iRam_? != 0) {
                              uVar2 = (uint)((ulonglong)&puStack_24 >> 0xc);
                              uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                              do {
                                uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                LOCK();
                                bVar15 = uVar4 == *puVar3;
                                if (bVar15) {
                                  *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar15);
                            }
                            ppLStack_25 = (List_1_System_Object_ **)
                                          ((ulonglong)(uint)(pLVar23->fields)._version << 0x20);
                            uStack_26 = 0;
                            lStack_27 = (longlong)ppLStack_25;
                            pSVar28 = (SoundViewItem *)0x0;
                            puStack_24 = (undefined *)0x0;
                            ppLStack_25 = &pLStack_29;
                            pLStack_29 = pLVar23;
                            while (bVar30 = mscorlib.dll::System::Collections::Generic::
                                            List`1[T]+Enumerator[System::Object]::
                                            List_1_T_Enumerator_System_Object__MoveNext
                                                      ((List_1_T_Enumerator_System_Object_ *)
                                                       &pLStack_29,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<SoundViewItem>__MoveNext__
                                                  ), bVar30 != 0) {
                              if (pSVar28 == (SoundViewItem *)0x0) goto code_?;
                              SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
                                        (pSVar28,(MethodInfo *)0x0);
                            }
                            if ((this_08[1].monitor != (MonitorData *)0x0) &&
                               (this_05 = *(InventorySlots **)(this_08[1].monitor + 0x30),
                               this_05 != (InventorySlots *)0x0)) {
                              InventorySlots::InventorySlots_Clear(this_05,(MethodInfo *)0x0);
                              pMVar19 = this_08[1].monitor;
                              iVar6 = *(int32_t *)&this_08[2].klass;
                              pDVar31 = this_08[1].fields._.m_CachedPtr;
                              if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                                 (pOVar17 = mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32,System::Object]::
                                            Dictionary_2_System_Int32_System_Object__get_Item
                                                      (pDVar31,iVar6,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar17 != (Object *)0x0)) {
                                page = *(int32_t *)((longlong)&pOVar17[2].klass + 4);
                                pDVar31 = this_08[1].fields._.m_CachedPtr;
                                if ((pDVar31 != (Dictionary_2_System_Int32_System_Object_ *)0x0) &&
                                   (pOVar17 = mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32,System::Object]::
                                              Dictionary_2_System_Int32_System_Object__get_Item
                                                        (pDVar31,*(int32_t *)&this_08[2].klass,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pOVar17 != (Object *)0x0)) {
                                  iVar32 = FUN_?((float)*(int *)&pOVar17[2].klass /
                                                         (float)*(int *)&pOVar17[1].klass);
                                  iVar16 = 1;
                                  if (1 < iVar32) {
                                    iVar16 = iVar32;
                                  }
                                  if ((pMVar19 != (MonitorData *)0x0) &&
                                     (plVar33 = *(longlong **)(pMVar19 + 0x28),
                                     plVar33 != (longlong *)0x0)) {
                                    (**(code **)(*plVar33 + 0x188))
                                              (plVar33,iVar6,page,iVar16,
                                               *(undefined8 *)(*plVar33 + 400));
                                    if (*(InventorySlots **)(pMVar19 + 0x30) !=
                                        (InventorySlots *)0x0) {
                                      InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                                (*(InventorySlots **)(pMVar19 + 0x30),page,
                                                 *(int32_t *)(pMVar19 + 0x20),(MethodInfo *)0x0);
                                      pSVar34 = StringLiteral_url;
                                      pCVar8 = this_08[5].klass;
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__System__Convert);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pSVar7 = this_08[3].fields._.m_CachedPtr;
                                      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0)
                                      {
                                        FUN_?();
                                      }
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__System__Convert);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0)
                                      {
                                        FUN_?();
                                      }
                                      value = mscorlib.dll::System::Convert::Convert_ToString_1
                                                        ((Object *)pCVar8,(IFormatProvider *)0x0,
                                                         (MethodInfo *)0x0);
                                      if (pSVar7 != (SettingsBase *)0x0) {
                                        SettingsBase::SettingsBase_OnSettingChanged
                                                  (pSVar7,pSVar34,(Object *)value,(MethodInfo *)0x0);
                                        if ((Dictionary_2_System_Int32_System_Object_ *)
                                            this_08[2].monitor !=
                                            (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                                          this_12 = (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32_System_Object_ *)
                                                  this_08[2].monitor,*(int32_t *)&this_08[2].klass,
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                                  );
                                          pvVar35 = this_08[4].fields._.m_CachedPtr;
                                          if (pvVar35 != (void *)0x0) {
                                            iVar16 = FUN_?(pvVar35,*(undefined4 *)
                                                                           &this_08[2].klass,
                                                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                  );
                                            iVar32 = 0;
                                            if (iVar16 < 1) {
                                              return;
                                            }
                                            while (((pDVar31 = this_08[1].fields._.m_CachedPtr,
                                                    pDVar31 != (
                                                  Dictionary_2_System_Int32_System_Object_ *)0x0 &&
                                                  (pTVar36 = (TabState *)
                                                             mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Int32,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Int32_System_Object__get_Item
                                                            (pDVar31,*(int32_t *)&this_08[2].klass,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                                  ), pTVar36 != (TabState *)0x0)) &&
                                                  (pIVar37 = TabState::TabState_get_SlotRange
                                                                       (pTVar36,(MethodInfo *)0x0),
                                                  pIVar37 != (Int32__Array *)0x0))) {
                                              if ((int)pIVar37->max_length == 0) {
code_?:
                                                FUN_?();
                                                pcVar13 = (code *)swi(3);
                                                (*pcVar13)();
                                                return;
                                              }
                                              if (pIVar37->vector[0] <= iVar32) {
                                                if ((uint)pIVar37->max_length < 2)
                                                goto code_?;
                                                if (iVar32 < pIVar37->vector[1]) {
                                                  pOVar17 = (Object *)this_08[3].monitor;
                                                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).
                                                               field_0x1c == 0) {
                                                    FUN_?();
                                                  }
                                                  pSVar28 = (SoundViewItem *)
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Object::Object_1_Instantiate_4
                                                                      (pOVar17,
                                                  SoundViewItem_MethodInfo__UnityEngine__Object__Instantiate<SoundViewItem>_SoundViewItem_
                                                  );
                                                  if (this_12 !=
                                                      (
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                  *)0x0) {
                                                    info = mscorlib.dll::System::Collections::
                                                           Generic::List`1[UnityEngine::UIElements::
                                                           UIR::EntryPreProcessor+AllocSize]::
                                                                                                                      
                                                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                                            (this_12,iVar32,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<SoundTabInfo>__get_Item_int_
                                                  );
                                                  pCVar8 = this_08[5].klass;
                                                  this_13 = (UnityAction_1_System_Object_ *)
                                                            FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<System::String>
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Object]::
                                                  UnityAction_1_System_Object___ctor
                                                            (this_13,(Object *)this_08,
                                                                                                                          
                                                  MethodInfo__SoundInventoryController__SetNewOriginalUrl_System__String_
                                                  ,(MethodInfo *)0x0);
                                                  if (pSVar28 != (SoundViewItem *)0x0) {
                                                    SoundViewItem::SoundViewItem_Initialize
                                                              (pSVar28,(SoundTabInfo *)info,
                                                               (String *)pCVar8,
                                                               (UnityAction_1_System_String_ *)
                                                               this_13,(MethodInfo *)0x0);
                                                    this_06 = (InventoryController *)
                                                              this_08[1].monitor;
                                                    pGVar1 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pSVar28,
                                                                         (MethodInfo *)0x0);
                                                    if (this_06 != (InventoryController *)0x0) {
                                                      InventoryController::
                                                      InventoryController_AddObject
                                                                (this_06,pGVar1,
                                                                 iVar32 % *(int *)&this_08[3].klass,
                                                                 (MethodInfo *)0x0);
                                                      goto code_?;
                                                    }
                                                  }
                                                  }
                                                  break;
                                                }
                                              }
code_?:
                                              iVar32 = iVar32 + 1;
                                              if (iVar16 <= iVar32) {
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
                          FUN_?();
code_?:
                          FUN_?();
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        pOVar17 = (Object *)
                                  FUN_?(
                                               TypeInfo__SoundInventoryController____c__DisplayClass13_0
                                               );
                        pMVar19 = this_08[4].monitor;
                        if (pMVar19 == (MonitorData *)0x0) break;
                        if (*(uint *)(pMVar19 + 0x18) <= uVar2) {
                          mscorlib.dll::System::ThrowHelper::
                          ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        lVar38 = *(longlong *)(pMVar19 + 0x10);
                        if (lVar38 == 0) break;
                        if (*(uint *)(lVar38 + 0x18) <= uVar2) {
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        if (*(longlong *)(lVar38 + lVar14) == 0) break;
                        pSVar34 = *(String **)(*(longlong *)(lVar38 + lVar14) + 0x20);
                        if (pOVar17 == (Object *)0x0) break;
                        bVar15 = iRam_? != 0;
                        pOVar17[1].klass =
                             *(Object__Class **)
                              (*(longlong *)(lVar14 + *(longlong *)(this_08[4].monitor + 0x10)) +
                              0x18);
                        if (bVar15) {
                          uVar39 = (uint)((ulonglong)(pOVar17 + 1) >> 0xc);
                          lVar38 = (ulonglong)((uVar39 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar5 = *(ulonglong *)(lVar38 + 0xADDR);
                            puVar3 = (ulonglong *)(lVar38 + 0xADDR);
                            LOCK();
                            bVar15 = uVar5 == *puVar3;
                            if (bVar15) {
                              *puVar3 = uVar5 | 1L << (uVar39 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar15);
                        }
                        if ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                             *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,UnityEngine::UIElements::
                                 StyleComplexSelector+PseudoStateData]::
                                 Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                           ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                                             *)this_08[5].monitor,(Object *)pSVar34,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                                            ->klass->rgctx_data[0x21].method);
                        if (iVar6 < 0) {
                          pMVar19 = this_08[5].monitor;
                          if (pMVar19 == (MonitorData *)0x0) break;
                          pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)pMVar18 >> 8),2);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Int32]::Dictionary_2_System_Object_System_Int32__TryInsert
                                    ((Dictionary_2_System_Object_System_Int32_ *)this_08[5].monitor,
                                     (Object *)pSVar34,
                                     (*(int *)(pMVar19 + 0x20) - *(int *)(pMVar19 + 0x28)) + 1,
                                     (InsertionBehavior__Enum)pMVar18,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                                     ->klass->rgctx_data[0x22].method);
                        }
                        if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                        IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Int32Enum]::
                                 Dictionary_2_System_Object_System_Int32Enum__get_Item
                                           ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                            this_08[5].monitor,(Object *)pSVar34,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                           );
                        this_02 = this_08[1].fields._.m_CachedPtr;
                        if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                        key = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Int32Enum]::
                              Dictionary_2_System_Object_System_Int32Enum__get_Item
                                        ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                         this_08[5].monitor,(Object *)pSVar34,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                        );
                        if (this_02 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,UnityEngine::Vector3]::
                                 Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                           (this_02,key,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                            ->klass->rgctx_data[0x21].method);
                        if (iVar6 < 0) {
                          uVar39 = *(uint *)&this_08[3].klass;
                          pTVar36 = (TabState *)FUN_?(TypeInfo__TabState);
                          uVar5 = (ulonglong)uVar39;
                          TabState::TabState__ctor(pTVar36,IVar40,pSVar34,uVar39,(MethodInfo *)0x0);
                          pDVar31 = this_08[1].fields._.m_CachedPtr;
                          if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                    (pDVar31,IVar40,(Object *)pTVar36,
                                     (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                                     ->klass->rgctx_data[0x22].method);
                          if (((pTVar36 == (TabState *)0x0) ||
                              (this_08[1].monitor == (MonitorData *)0x0)) ||
                             (plVar33 = *(longlong **)(this_08[1].monitor + 0x28),
                             plVar33 == (longlong *)0x0)) break;
                          pMVar18 = *(MethodInfo **)(*plVar33 + 0x180);
                          (**(code **)(*plVar33 + 0x178))(plVar33,IVar40,(pTVar36->fields).name);
                        }
                        if ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)this_08[2].monitor ==
                            (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,UnityEngine::Vector3]::
                                 Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                           ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                                            this_08[2].monitor,IVar40,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__ContainsKey_int_
                                            ->klass->rgctx_data[0x21].method);
                        if (iVar6 < 0) {
                          pDVar31 = (Dictionary_2_System_Int32_System_Object_ *)this_08[2].monitor;
                          this_10 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                     *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__List<SoundTabInfo>
                                                  );
                          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                          Metadata::__Il2CppFullySharedGenericType]::
                          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                    (this_10,
                                     MethodInfo__System__Collections__Generic__List<SoundTabInfo>__List__
                                    );
                          if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                                    (pDVar31,IVar40,(Object *)this_10,
                                     (InsertionBehavior__Enum)
                                     CONCAT71((int7)((ulonglong)pMVar18 >> 8),2),
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__Add_int__System__Collections__Generic__List<SoundTabInfo>_
                                     ->klass->rgctx_data[0x22].method);
                        }
                        if ((Dictionary_2_System_Int32_System_Object_ *)this_08[2].monitor ==
                            (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                        pOVar41 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            ((Dictionary_2_System_Int32_System_Object_ *)
                                             this_08[2].monitor,IVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                            );
                        this_11 = (Predicate_1_Object_ *)
                                  FUN_?(TypeInfo__System__Func<SoundTabInfo,_bool>);
                        uVar9 = 0;
                        mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                                  (this_11,pOVar17,
                                   MethodInfo__SoundInventoryController____c__DisplayClass13_0___Initialize_b__0_SoundTabInfo_
                                   ,(MethodInfo *)0x0);
                        bVar30 = System.Core.dll::System::Linq::Enumerable::Enumerable_All
                                           ((IEnumerable_1_System_Object_ *)pOVar41,
                                            (Func_2_Object_Boolean_ *)this_11,
                                            bool_MethodInfo__System__Linq__Enumerable__All<SoundTabInfo>_System__Collections__Generic__IEnumerable<SoundTabInfo>__System__Func<SoundTabInfo,_bool>_
                                           );
                        if (bVar30 != 0) {
                          if ((Dictionary_2_System_Int32_System_Object_ *)this_08[2].monitor ==
                              (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                          pLVar23 = (List_1_System_Object_ *)
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32,System::Object]::
                                    Dictionary_2_System_Int32_System_Object__get_Item
                                              ((Dictionary_2_System_Int32_System_Object_ *)
                                               this_08[2].monitor,IVar40,
                                               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<SoundTabInfo>_>__get_Item_int_
                                              );
                          pOVar41 = (Object *)FUN_?(TypeInfo__SoundTabInfo);
                          if (pOVar41 == (Object *)0x0) break;
                          pOVar41[1].klass = pOVar17[1].klass;
                          func_?(pOVar41 + 1);
                          pOVar41[1].monitor = (MonitorData *)pSVar34;
                          func_?(&pOVar41[1].monitor);
                          if (this_08[4].monitor == (MonitorData *)0x0) break;
                          lVar38 = FUN_?(this_08[4].monitor,pCVar8);
                          if (lVar38 == 0) break;
                          pOVar41[2].klass = *(Object__Class **)(lVar38 + 0x10);
                          func_?(pOVar41 + 2);
                          if (pLVar23 == (List_1_System_Object_ *)0x0) break;
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__Add
                                    (pLVar23,pOVar41,
                                     MethodInfo__System__Collections__Generic__List<SoundTabInfo>__Add_SoundTabInfo_
                                    );
                        }
                        this_03 = this_08[4].fields._.m_CachedPtr;
                        if (this_03 == (Dictionary_2_System_Int32_System_Single_ *)0x0) break;
                        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,System::Single]::
                                 Dictionary_2_System_Int32_System_Single__FindEntry
                                           (this_03,IVar40,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                            ->klass->rgctx_data[0x21].method);
                        this_04 = this_08[4].fields._.m_CachedPtr;
                        if (iVar6 < 0) {
                          if (this_04 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                          iVar6 = 1;
                          pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar9 >> 8),2);
                          pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_
                                    ->klass->rgctx_data;
                        }
                        else {
                          if (this_04 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) break;
                          iVar16 = FUN_?(this_04,IVar40,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                                );
                          pMVar18 = (MethodInfo *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                          iVar6 = iVar16 + 1;
                          pIVar42 = MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                                    ->klass->rgctx_data;
                        }
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                                  (this_04,IVar40,iVar6,(InsertionBehavior__Enum)pMVar18,
                                   pIVar42[0x22].method);
                        pDVar31 = this_08[1].fields._.m_CachedPtr;
                        if ((Dictionary_2_System_Object_System_Int32Enum_ *)this_08[5].monitor ==
                            (Dictionary_2_System_Object_System_Int32Enum_ *)0x0) break;
                        IVar40 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Int32Enum]::
                                 Dictionary_2_System_Object_System_Int32Enum__get_Item
                                           ((Dictionary_2_System_Object_System_Int32Enum_ *)
                                            this_08[5].monitor,(Object *)pSVar34,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                                           );
                        if (pDVar31 == (Dictionary_2_System_Int32_System_Object_ *)0x0) break;
                        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            (pDVar31,IVar40,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                            );
                        if (pOVar17 == (Object *)0x0) break;
                        *(int *)&pOVar17[2].klass = *(int *)&pOVar17[2].klass + 1;
                        pCVar8 = (Component__Class *)(ulonglong)(uVar2 + 1);
                        pMVar19 = this_08[4].monitor;
                        lVar14 = lVar14 + 8;
                      } while (pMVar19 != (MonitorData *)0x0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowStarsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowStarsDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowStarsDialog_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_06 = TypeInfo__ContextMenuController____c->static_fields->__9__20_0;
  if (this_06 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_06 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_06,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowStarsDialog_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__20_0 = this_06;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__20_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_06,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 == (SettingsFactory *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar8 = (this_00->fields).starsRequirementSettingsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar8 = (StarsRequirementSettings *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pSVar8,
                       StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                      );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  if (pSVar8 == (StarsRequirementSettings *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert,iVar6,pGVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Star_Requirement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (pSVar8->fields).settingsBase;
  pSVar9 = TM::TM__(StringLiteral_Star_Requirement,(MethodInfo *)0x0);
  if (this_01 == (SettingsBase *)0x0) {
code_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar10 = (this_01->fields).headerText;
  (this_01->fields).woID = iVar6;
  if (pTVar10 == (Text *)0x0) goto code_?;
  (*(pTVar10->klass->vtable).set_text.methodPtr)
            (pTVar10,pSVar9,(pTVar10->klass->vtable).set_text.method);
  uVar5 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy(this_01,iVar6,pGVar1,(MethodInfo *)0x0);
  if (iVar6 == -1) {
    this_08 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_08,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar11 = lRam_?;
    unaff_RBX = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
    pOVar12 = unaff_RBX;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar12 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar12 + 1,&stack0x00000008,(longlong)*(int *)(lVar11 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(pOVar12 + 1) >> 0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar3 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar13 == *puVar3;
            if (bVar14) {
              *puVar3 = uVar13 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
      }
      else {
        pOVar12 = (Object *)0x0;
      }
    }
    if (this_08 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_08,
               (Object *)StringLiteral_starAmount,pOVar12,(InsertionBehavior__Enum)uVar5,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_07 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_07,iVar6,(MethodInfo *)0x0),
        pMVar15 == (MVWorldObjectClient *)0x0)) ||
       (this_08 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)(pMVar15->fields)._.data,
       this_08 ==
       (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
        *)0x0)) goto code_?;
  }
  iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)this_08,(Object *)StringLiteral_starAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  lVar11 = lRam_?;
  if (iVar16 < 0) {
    pOVar12 = (Object *)((ulonglong)unaff_RBX & 0xffffffff00000000);
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar12 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar12 + 1,&stack0x00000008,(longlong)*(int *)(lVar11 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)(pOVar12 + 1) >> 0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          uVar5 = (ulonglong)(uVar2 & 0x3f);
          do {
            uVar13 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar3 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar13 == *puVar3;
            if (bVar14) {
              *puVar3 = uVar13 | 1L << uVar5;
            }
            UNLOCK();
          } while (!bVar14);
        }
      }
      else {
        pOVar12 = (Object *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_08,
               (Object *)StringLiteral_starAmount,pOVar12,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_08,
                       (Object *)StringLiteral_starAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar16 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar12,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
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
  pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar17 == (MVGameControllerBase *)0x0) ||
      (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
     (this_02 = (pMVar18->fields)._WinningConditionManager_k__BackingField,
     this_02 == (WinningConditionManager *)0x0)) goto code_?;
  pAVar19 = (AllCollectiblesCollectedClient *)
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (this_02,
                       AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                      );
  bVar14 = iRam_? != 0;
  (pSVar8->fields).collectible = pAVar19;
  if (bVar14) {
    uVar2 = (uint)((ulonglong)&(pSVar8->fields).collectible >> 0xc);
    uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar4 == *puVar3;
      if (bVar14) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  if ((pSVar8->fields).collectible != (AllCollectiblesCollectedClient *)0x0) {
    (pSVar8->fields).maxValue = (((pSVar8->fields).collectible)->fields)._._.limit + -1;
  }
  StarsRequirementSettings::StarsRequirementSettings_UpdateMessage(pSVar8,iVar16,(MethodInfo *)0x0)
  ;
  this_03 = (pSVar8->fields).slider;
  if (this_03 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_03,StringLiteral_starAmount,iVar16,0,(pSVar8->fields).maxValue,(MethodInfo *)0x0)
  ;
  this_04 = (pSVar8->fields).inputField;
  if (this_04 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar14 = iRam_? != 0;
  (this_04->fields).key = StringLiteral_starAmount;
  if (bVar14) {
    uVar2 = (uint)((ulonglong)&(this_04->fields).key >> 0xc);
    uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar14 = uVar4 == *puVar3;
      if (bVar14) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar14);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_04,(float)iVar16,(MethodInfo *)0x0);
  pSVar9 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_05 = (this_04->fields).inputField;
  if (this_05 == (InputField *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar20 = (this_05->fields).m_Text;
  if (pSVar20 == pSVar9) {
    return;
  }
  if (pSVar20 == (String *)0x0) {
code_?:
    if (pSVar9 == (String *)0x0) {
code_?:
      pSVar9 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar9 == (String *)0x0) goto code_?;
    if ((pSVar20->fields)._stringLength == (pSVar9->fields)._stringLength) {
      bVar21 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar20->fields)._firstChar,
                         (uint8_t *)&(pSVar9->fields)._firstChar,
                         (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar21 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar9 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar9,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_05->fields).m_LineType == 0) {
    if ((pSVar9 == (String *)0x0) ||
       (pSVar9 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar9,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar9 == (String *)0x0)) goto DAT_?;
    pSVar9 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar9,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_05->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_05->fields).m_CharacterValidation == 0)) {
    if (0 < (this_05->fields).m_CharacterLimit) {
      if (pSVar9 == (String *)0x0) goto DAT_?;
      iVar6 = (this_05->fields).m_CharacterLimit;
      if (iVar6 < (pSVar9->fields)._stringLength) {
        pSVar9 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar9,0,iVar6,(MethodInfo *)0x0);
      }
    }
    (this_05->fields).m_Text = pSVar9;
    func_?(&(this_05->fields).m_Text);
  }
  else {
    bVar14 = iRam_? != 0;
    (this_05->fields).m_Text = ::StringLiteral__;
    if (bVar14) {
      uVar2 = (uint)((ulonglong)&(this_05->fields).m_Text >> 0xc);
      lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar3 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar14 = uVar5 == *puVar3;
        if (bVar14) {
          *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    pIVar22 = (this_05->fields).m_OnValidateInput;
    if (pIVar22 == (InputField_OnValidateInput *)0x0) {
      pIVar22 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar23 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar14 = iRam_? != 0;
      (pIVar22->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar22->fields)._._.method = pMVar23;
      (pIVar22->fields)._._.m_target = (Object *)this_05;
      if (bVar14) {
        uVar2 = (uint)((ulonglong)&(pIVar22->fields)._._.m_target >> 0xc);
        lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar3 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar5 == *puVar3;
          if (bVar14) {
            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      uVar24 = pMVar23->parameters_count;
      (pIVar22->fields)._._.method_code = pIVar22;
      if ((pMVar23->flags & 0x10) == 0) {
        if (uVar24 != 2) goto code_?;
        pcVar7 = FUN_?;
      }
      else if (uVar24 == 3) {
        pcVar7 = FUN_?;
      }
      else {
code_?:
        (pIVar22->fields)._._.method_code = (pIVar22->fields)._._.m_target;
        pcVar7 = (pIVar22->fields)._._.method_ptr;
      }
      (pIVar22->fields)._._.invoke_impl = pcVar7;
      (pIVar22->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar9 == (String *)0x0) goto DAT_?;
    iVar16 = (pSVar9->fields)._stringLength;
    (this_05->fields).m_CaretSelectPosition = iVar16;
    (this_05->fields).m_CaretPosition = iVar16;
    if ((this_05->fields).m_CharacterLimit < 1) {
      iVar6 = (pSVar9->fields)._stringLength;
    }
    else {
      iVar6 = (this_05->fields).m_CharacterLimit;
      iVar25 = (pSVar9->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar25 < iVar6) {
        iVar6 = iVar25;
      }
    }
    uVar2 = 0;
    if (0 < iVar6) {
      puVar26 = &(pSVar9->fields)._firstChar;
      lVar11 = 0;
      do {
        pSVar20 = (this_05->fields).m_Text;
        if (pSVar20 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar9->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pIVar22 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar22->fields)._._.invoke_impl)
                      ((pIVar22->fields)._._.method_code,(this_05->fields).m_Text,
                       (pSVar20->fields)._stringLength,*puVar26,(pIVar22->fields)._._.method);
        if (c != 0) {
          pSVar20 = (this_05->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar20 = mscorlib.dll::System::String::String_Concat_4(pSVar20,str1,(MethodInfo *)0x0);
          (this_05->fields).m_Text = pSVar20;
          func_?(&(this_05->fields).m_Text);
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        puVar26 = puVar26 + 1;
      } while (lVar11 < iVar6);
    }
  }
  if ((this_05->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_05->fields).m_Keyboard,(this_05->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar9 = (this_05->fields).m_Text;
  if (pSVar9 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar6 = (pSVar9->fields)._stringLength;
  if (iVar6 < (this_05->fields).m_CaretPosition) {
    (this_05->fields).m_CaretPosition = iVar6;
  }
  else if ((this_05->fields).m_CaretSelectPosition <= iVar6) goto code_?;
  (this_05->fields).m_CaretSelectPosition = iVar6;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_05,(MethodInfo *)0x0);
  if ((this_05->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_05->fields).m_OnValueChanged,
               (Object *)(this_05->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_05,(MethodInfo *)0x0)
  ;
  return;
}


/* Void ShowTeamDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowTeamDialog
               (ContextMenuController *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__ContextMenuController____c___ShowTeamDialog_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ContextMenuController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_04 = TypeInfo__ContextMenuController____c->static_fields->__9__25_0;
  if (this_04 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_04 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowTeamDialog_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__25_0 = this_04;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__25_0 >>
                     0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  iVar6 = (this->fields).woID;
  if (this_00 != (SettingsFactory *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    GameCoinRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameCoinRequirementSettings>_GameCoinRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    GameRankRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<GameRankRequirementSettings>_GameRankRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    LevelRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<LevelRequirementSettings>_LevelRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RewardedAdRequirementSettings>_UGUI__Desktop__Scripts__EditMode__SettingsBoxes__RewardedAdRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    StarsRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<StarsRequirementSettings>_StarsRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar7 = (this_00->fields).teamRequirementSettingsPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pTVar7 = (TeamRequirementSettings *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar7,
                         TeamRequirementSettings_MethodInfo__UnityEngine__Object__Instantiate<TeamRequirementSettings>_TeamRequirementSettings_
                        );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar7 != (TeamRequirementSettings *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert,iVar6,pGVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Team_Requirement);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_team);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (pTVar7->fields).settingsBase;
      pSVar8 = TM::TM__(StringLiteral_Team_Requirement,(MethodInfo *)0x0);
      if (this_01 != (SettingsBase *)0x0) {
        pTVar9 = (this_01->fields).headerText;
        (this_01->fields).woID = iVar6;
        if (pTVar9 != (Text *)0x0) {
          (*(pTVar9->klass->vtable).set_text.methodPtr)
                    (pTVar9,pSVar8,(pTVar9->klass->vtable).set_text.method);
          uVar10 = 0;
          SettingsBase::SettingsBase_InitializeHierarchy(this_01,iVar6,pGVar1,(MethodInfo *)0x0);
          this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((this_05 != (MVWorldObjectClientManager *)0x0) &&
              (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (this_05,iVar6,(MethodInfo *)0x0),
              pMVar11 != (MVWorldObjectClient *)0x0)) &&
             (this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)(pMVar11->fields)._.data,
             this_02 !=
             (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)0x0)) {
            iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                               (this_02,(Object *)StringLiteral_team,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                ->klass->rgctx_data[0x21].method);
            if (iVar6 < 0) {
              pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
              if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                FUN_?();
              }
              mscorlib.dll::System::Convert::Convert_ToInt32(pOVar12,(MethodInfo *)0x0);
              pOVar12 = (Object *)FUN_?(uRam_?,&stack0x00000010);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this_02,
                         (Object *)StringLiteral_team,pOVar12,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            bVar13 = iRam_? != 0;
            (pTVar7->fields).currentOutline = (pTVar7->fields).outlineTeamNone;
            if (bVar13) {
              uVar2 = (uint)((ulonglong)&(pTVar7->fields).currentOutline >> 0xc);
              lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                LOCK();
                bVar13 = uVar5 == *puVar3;
                if (bVar13) {
                  *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar13);
            }
            pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                                 (Object *)StringLiteral_team,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
              FUN_?();
            }
            mscorlib.dll::System::Convert::Convert_ToInt32(pOVar12,(MethodInfo *)0x0);
            pOVar12 = (Object *)FUN_?(uRam_?,&stack0x00000010);
            TeamRequirementSettings::TeamRequirementSettings_OnSettingChanged
                      (pTVar7,StringLiteral_team,pOVar12,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
               (pMVar17 = (pMVar16->fields).teamManager, pMVar17 != (MVTeamManager *)0x0)) {
              this_03 = (pMVar17->fields).teamNames;
              pTVar9 = (pTVar7->fields).buttonTeamBlueName;
              if ((this_03 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) &&
                 (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                      ), pTVar9 != (Text *)0x0)) {
                (*(pTVar9->klass->vtable).set_text.methodPtr)
                          (pTVar9,pOVar12,(pTVar9->klass->vtable).set_text.method);
                pTVar9 = (pTVar7->fields).buttonTeamRedName;
                pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,1,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                    );
                if (pTVar9 != (Text *)0x0) {
                  (*(pTVar9->klass->vtable).set_text.methodPtr)
                            (pTVar9,pOVar12,(pTVar9->klass->vtable).set_text.method);
                  pTVar9 = (pTVar7->fields).buttonTeamGreenName;
                  pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,2,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                      );
                  if (pTVar9 != (Text *)0x0) {
                    (*(pTVar9->klass->vtable).set_text.methodPtr)
                              (pTVar9,pOVar12,(pTVar9->klass->vtable).set_text.method);
                    pTVar9 = (pTVar7->fields).buttonTeamYellowName;
                    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,3,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                                        );
                    if (pTVar9 != (Text *)0x0) {
                      (*(pTVar9->klass->vtable).set_text.methodPtr)
                                (pTVar9,pOVar12,(pTVar9->klass->vtable).set_text.method);
                      pSVar18 = (pTVar7->fields).buttonTeamNone;
                      pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                      iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32
                                         (pOVar12,(MethodInfo *)0x0);
                      if (pSVar18 != (SettingsButton *)0x0) {
                        SettingsButton::SettingsButton_Initialize
                                  (pSVar18,StringLiteral_team,iVar6,MVTeam__Enum_None,1,
                                   (MethodInfo *)0x0);
                        pSVar18 = (pTVar7->fields).buttonTeamBlue;
                        pOVar12 = (Object *)(unaff_RBX & 0xffffffff00000000);
                        iVar19._0_2_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.attrs;
                        iVar19._2_1_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.type;
                        iVar19._3_1_ = (TypeInfo__MV__WorldObject__MVTeam->_0).byval_arg.field_0xb;
                        if ((iVar19 < 0) &&
                           (((TypeInfo__MV__WorldObject__MVTeam->_0).generic_class ==
                             (Il2CppGenericClass *)0x0 ||
                            (pOVar12 = (Object *)0x0,
                            ((TypeInfo__MV__WorldObject__MVTeam->_1).field_0x6d & 8) == 0)))) {
                          pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                          FUN_?(pOVar12 + 1);
                          if (iRam_? != 0) {
                            uVar2 = (uint)((ulonglong)(pOVar12 + 1) >> 0xc);
                            lVar14 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar5 = *(ulonglong *)(lVar14 + 0xADDR);
                              puVar3 = (ulonglong *)(lVar14 + 0xADDR);
                              LOCK();
                              bVar13 = uVar5 == *puVar3;
                              if (bVar13) {
                                *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar13);
                          }
                        }
                        iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32
                                           (pOVar12,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
                        if ((((pMVar15 != (MVGameControllerBase *)0x0) &&
                             (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                            (pMVar17 = (pMVar16->fields).teamManager, pMVar17 != (MVTeamManager *)0x0))
                           && (bVar20 = MVTeamManager::MVTeamManager_HasTeam
                                                  (pMVar17,MVTeam__Enum_Blue,(MethodInfo *)0x0),
                              pSVar18 != (SettingsButton *)0x0)) {
                          SettingsButton::SettingsButton_Initialize
                                    (pSVar18,StringLiteral_team,iVar6,MVTeam__Enum_Blue,bVar20,
                                     (MethodInfo *)0x0);
                          pSVar18 = (pTVar7->fields).buttonTeamRed;
                          pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                          iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32
                                             (pOVar12,(MethodInfo *)0x0);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                              (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                             ((pMVar17 = (pMVar16->fields).teamManager, pMVar17 != (MVTeamManager *)0x0
                              && (bVar20 = MVTeamManager::MVTeamManager_HasTeam
                                                     (pMVar17,MVTeam__Enum_Red,(MethodInfo *)0x0),
                                 pSVar18 != (SettingsButton *)0x0)))) {
                            SettingsButton::SettingsButton_Initialize
                                      (pSVar18,StringLiteral_team,iVar6,MVTeam__Enum_Red,bVar20,
                                       (MethodInfo *)0x0);
                            pSVar18 = (pTVar7->fields).buttonTeamGreen;
                            pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                            iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32
                                               (pOVar12,(MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__MVGameControllerBase);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar15 != (MVGameControllerBase *)0x0) &&
                                (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) &&
                               ((pMVar17 = (pMVar16->fields).teamManager,
                                pMVar17 != (MVTeamManager *)0x0 &&
                                (bVar20 = MVTeamManager::MVTeamManager_HasTeam
                                                    (pMVar17,MVTeam__Enum_Green,(MethodInfo *)0x0),
                                pSVar18 != (SettingsButton *)0x0)))) {
                              SettingsButton::SettingsButton_Initialize
                                        (pSVar18,StringLiteral_team,iVar6,MVTeam__Enum_Green,bVar20
                                         ,(MethodInfo *)0x0);
                              pSVar18 = (pTVar7->fields).buttonTeamYellow;
                              pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVTeam);
                              iVar6 = mscorlib.dll::System::Convert::Convert_ToInt32
                                                 (pOVar12,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__MVGameControllerBase);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
                              if ((((pMVar15 != (MVGameControllerBase *)0x0) &&
                                   (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0))
                                  && (pMVar17 = (pMVar16->fields).teamManager,
                                     pMVar17 != (MVTeamManager *)0x0)) &&
                                 (bVar20 = MVTeamManager::MVTeamManager_HasTeam
                                                     (pMVar17,MVTeam__Enum_Yellow,(MethodInfo *)0x0),
                                 pSVar18 != (SettingsButton *)0x0)) {
                                SettingsButton::SettingsButton_Initialize
                                          (pSVar18,StringLiteral_team,iVar6,MVTeam__Enum_Yellow,
                                           bVar20,(MethodInfo *)0x0);
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
        }
      }
      FUN_?();
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
  }
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void <AddToInventory>b__38_2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__AddToInventory_b__38_2
               (ContextMenuController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ContextMenuController__OnClosedStandaloneError_bool__ConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Image_upload_is_disabled_in_stan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Are_you_sure_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
  UnityAction_2_System_Boolean_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ContextMenuController__OnClosedStandaloneError_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Are_you_sure_,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Clone>b__36_1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__Clone_b__36_1
               (ContextMenuController *this,ICloneHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (handler != (ICloneHandler *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

