
/* Void AddMenuButtonForFlag(InteractionFlags, String, UnityAction) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddMenuButtonForFlag
               (ContextMenuController *this,InteractionFlags__Enum flag,String *buttonText,
               UnityAction *onClickCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<bool>);
    func_?(&MethodInfo__ContextMenuController____c___AddMenuButtonForFlag_b__13_0__);
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  this_00 = TypeInfo__ContextMenuController____c->static_fields->__9__13_0;
  if (this_00 == (Func_1_Boolean_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_00 = (Func_1_Boolean_ *)func_?(TypeInfo__System__Func<bool>);
    mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
    Func_1_System_Threading_Tasks_VoidTaskResult___ctor
              ((Func_1_System_Threading_Tasks_VoidTaskResult_ *)this_00,(Object *)object,
               MethodInfo__ContextMenuController____c___AddMenuButtonForFlag_b__13_0__,
               (MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__13_0 = this_00;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__13_0,this_00);
  }
  if (this != (ContextMenuController *)0x0) {
    ContextMenuController_AddMenuButtonForFlag_1
              (this,flag,buttonText,onClickCallback,(Func_1_Boolean_ *)method,(MethodInfo *)this_00)
    ;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddMenuButtonForFlag(InteractionFlags, String, UnityAction, Func`1[Boolean]) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddMenuButtonForFlag_1
               (ContextMenuController *this,InteractionFlags__Enum flag,String *buttonText,
               UnityAction *onClickCallback,Func_1_Boolean_ *canHaveButtonCheck,MethodInfo *method)

{
  pMVar1 = (this->fields).selectedWorldObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      (pMVar1,flag,(MethodInfo *)buttonText);
    if (bVar2 == 0) {
      return;
    }
    if (method != (MethodInfo *)0x0) {
      cVar3 = (*(code *)method->name)((method->field8_0x20).genericMethod,method->return_type);
      if (cVar3 == '\0') {
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 != (MVNetworkGame *)0x0) {
        if ((pMVar4->fields)._Region_k__BackingField == 4) {
          bVar5 = true;
        }
        else {
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
          bVar5 = (pMVar4->fields)._Region_k__BackingField == 3;
        }
        pMVar1 = (this->fields).selectedWorldObject;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          ppMVar6 = (MethodInfo **)0x0;
          bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasEliteRequiredFlag
                            (pMVar1,flag,(MethodInfo *)buttonText);
          if (bVar2 == 0) {
            bVar7 = false;
            ppOVar8 = (Object_1__Class **)buttonText;
          }
          else {
            bVar2 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
            bVar7 = bVar2 == 0;
            ppOVar8 = (Object_1__Class **)buttonText;
          }
          this_00 = (this->fields).currentContextMenu;
          if ((bool)(bVar5 & bVar7)) {
            pSVar9 = TM::TM__((String *)onClickCallback,(MethodInfo *)0x0);
            if (this_00 != (ContextMenu *)0x0) {
              if (cRam_? == '\0') {
                ppMVar6 = &
                           ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                ;
                func_?(&
                                ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                               );
                ppOVar8 = &TypeInfo__UnityEngine__Object;
                func_?(&TypeInfo__UnityEngine__Object);
                cRam_? = '\x01';
              }
              original = (this_00->fields).contextMenuLockedButtonPrefab;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object,ppOVar8,ppMVar6);
              }
              this_01 = (Component *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   ContextMenuButton_MethodInfo__UnityEngine__Object__Instantiate<ContextMenuButton>_ContextMenuButton_
                                  );
              if ((this_01 != (Component *)0x0) &&
                 (piVar10 = this_01[1].fields._.m_CachedPtr, piVar10 != (int *)0x0)) {
                (**(code **)(*piVar10 + 0x318))(piVar10,pSVar9,*(undefined4 *)(*piVar10 + 0x31c));
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_01,(MethodInfo *)0x0);
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
          else {
            pSVar9 = TM::TM__((String *)onClickCallback,(MethodInfo *)0x0);
            if (this_00 != (ContextMenu *)0x0) {
              ContextMenu::ContextMenu_AddButton
                        (this_00,pSVar9,(UnityAction *)canHaveButtonCheck,(MethodInfo *)0x0);
              return;
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


/* Void AddToInventory() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_AddToInventory
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ContextMenuController___AddToInventory_b__35_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___AddToInventory_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c___AddToInventory_b__35_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pGVar2 = pGVar1;
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__35_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pGVar1 = pGVar2;
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
      pGVar1 = pGVar2;
    }
    pCVar3 = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pCVar3,
               MethodInfo__ContextMenuController____c___AddToInventory_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__35_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__35_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  root = (ExecuteEvents_EventFunction_1_IUIStack_ *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction_00 = TypeInfo__ContextMenuController____c->static_fields->__9__35_1;
  if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pCVar3 = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    root = callbackFunction_00;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)pCVar3,
               MethodInfo__ContextMenuController____c___AddToInventory_b__35_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__35_1 = callbackFunction_00;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,(Object *)this,
             MethodInfo__ContextMenuController___AddToInventory_b__35_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  return;
}


/* Boolean CanClone() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CanClone
               (ContextMenuController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).editorStateMachine;
  if (this_00 != (EditorStateMachine *)0x0) {
    method_00 = (MethodInfo *)
                EditorStateMachine::EditorStateMachine_get_SelectedWOs(this_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pHVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         (&HStack_7,(HashSet_1_System_UInt32_ *)method_00,
                          MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                         );
      method_01 = (Object__Class *)pHVar6->_set;
      this_01 = (MVWorldObjectClient *)pHVar6->_current;
      HStack_7._version = 0;
      uStack_1 = 1;
      HStack_7._current = (uint32_t)&stack0xffffffc8;
      do {
        bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanClone,(MethodInfo *)0x0);
        if (bVar8 == 0) break;
        method_00 = (MethodInfo *)0x20000;
        bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
      } while (bVar8 == 0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,(MethodInfo *)method_01);
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean CanCloneRoot() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CanCloneRoot
               (ContextMenuController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (this->fields).editorStateMachine;
  if (this_00 != (EditorStateMachine *)0x0) {
    method_00 = (MethodInfo *)
                EditorStateMachine::EditorStateMachine_get_SelectedWOs(this_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pHVar6 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
               HashSet_1_System_UInt32__GetEnumerator
                         (&HStack_7,(HashSet_1_System_UInt32_ *)method_00,
                          MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                         );
      method_01 = (Object__Class *)pHVar6->_set;
      this_01 = (MVWorldObjectClient *)pHVar6->_current;
      HStack_7._version = 0;
      uStack_1 = 1;
      HStack_7._current = (uint32_t)&stack0xffffffc8;
      do {
        bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_CanCloneRoot,(MethodInfo *)0x0);
        if (bVar8 == 0) break;
        method_00 = (MethodInfo *)0x20000;
        bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_01,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
      } while (bVar8 == 0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&stack0xffffffc8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,(MethodInfo *)method_01);
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void Clone() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Clone
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ContextMenuController___Clone_b__33_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___Clone_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__33_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___Clone_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__33_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__33_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction_00 =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
             MethodInfo__ContextMenuController___Clone_b__33_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
            );
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_CloneRoot
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___CloneRoot_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass34_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c__DisplayClass34_0);
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController____c__DisplayClass34_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__34_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___CloneRoot_b__34_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__34_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__34_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
             ,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOStack1 =
         (Object__Class *)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                   (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (value != (Object *)0x0) {
      pOStack2 = value + 1;
      pOStack2->klass = pOStack1;
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                 MethodInfo__ContextMenuController____c__DisplayClass34_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                );
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Delete() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Delete
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___Delete_b__40_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass40_0___Delete_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c__DisplayClass40_0);
    func_?(&TypeInfo__ContextMenuController____c);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController____c__DisplayClass40_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (this->fields).editorStateMachine;
  if (this_00 != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(this_00,(MethodInfo *)0x0);
    if (value != (Object *)0x0) {
      pOVar1 = value + 1;
      pOVar1->klass = (Object__Class *)::StringLiteral__;
      func_?(pOVar1,::StringLiteral__);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,(this->fields).woID,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObject *)0x0) {
          cVar3 = (*(code *)pMVar2->klass[2]._0.element_class)
                            (pMVar2,pMVar2->klass[2]._0.castClass,pOVar1);
          if (cVar3 != '\0') {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__40_1;
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              object = TypeInfo__ContextMenuController____c->static_fields->__9;
              callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)object,
                         MethodInfo__ContextMenuController____c___Delete_b__40_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__ContextMenuController____c->static_fields->__9__40_1 = callbackFunction;
              func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__40_1,
                              callbackFunction);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                     MethodInfo__ContextMenuController____c__DisplayClass40_0___Delete_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar4,(BaseEventData *)0x0,callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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


/* Void DeleteLink(Int32, Boolean) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_DeleteLink
               (ContextMenuController *this,int32_t linkID,bool isObjectLink,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___DeleteLink_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (isObjectLink == 0) {
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveLink
              (this_00,linkID,(MethodInfo *)0x0);
  }
  else {
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveObjectLink
              (this_00,linkID,(MethodInfo *)0x0);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   (unaff_EDI,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__17_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___DeleteLink_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__17_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__17_0);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void EnterCubeEdit() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterCubeEdit
               (ContextMenuController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      (*pMVar1->klass[1].vtable.set_Scale.methodPtr)(pMVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnterPlay() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_EnterPlay
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    func_?(&TypeInfo__MVLocalPlayerBuilder);
    func_?(&
                    MethodInfo__ContextMenuController____c___EnterPlay_b__36_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    this_00 = (MVAvatarSpawnRoleCreator *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
code_?:
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).GameState, pGVar4 != (GameEventManager_GameStateManager *)0x0)
          ) && (pAVar5 = (pGVar4->fields).OnDisableLobbyState, pAVar5 != (Action *)0x0)) {
        (*(pAVar5->fields)._._.invoke_impl)();
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__36_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
          if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__ContextMenuController____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IEditModeController_ *)func_?()
          ;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__ContextMenuController____c___EnterPlay_b__36_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__ContextMenuController____c->static_fields->__9__36_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                  );
        return;
      }
      goto code_?;
    }
    bVar6 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar6) ||
       ((MVAvatarSpawnRoleCreator__Class *)(pMVar2->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__MVAvatarSpawnRoleCreator)) goto code_?;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
    bVar6 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar7->klass->_1).naturalAligment < bVar6) ||
       ((pMVar7->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    uVar8 = pMVar7[1].klass;
    iVar9 = pMVar7[1].fields._.checkpointWOID;
    uVar10 = CONCAT44((this->fields).woID,uVar8);
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if (pMVar7 == (MVLocalPlayer *)0x0) goto code_?;
    bVar6 = (TypeInfo__MVLocalPlayerBuilder->_1).naturalAligment;
    if (((pMVar7->klass->_1).naturalAligment < bVar6) ||
       ((pMVar7->klass->_1).typeHierarchy[bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__MVLocalPlayerBuilder)) goto code_?;
    pMVar7[1].klass = (MVLocalPlayer__Class *)(int)uVar10;
    pMVar7[1].monitor = (MonitorData *)(int)((ulonglong)uVar10 >> 0x20);
    pMVar7[1].fields._.checkpointWOID = iVar9;
    if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
    bVar6 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
    if ((bVar6 <= (this_00->klass->_1).naturalAligment) &&
       ((MVAvatarSpawnRoleCreator__Class *)(this_00->klass->_1).typeHierarchy[bVar6 - 1] ==
        TypeInfo__MVAvatarSpawnRoleCreator)) {
      this = (ContextMenuController *)0x0;
      GVar11 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                         (this_00,(MethodInfo *)0x0);
      GStack_12 = CONCAT31((int3)((uint)iVar9 >> 8),(byte)GVar11);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar13 != (PlayerPlanetData *)0x0) {
        if ((pPVar13->fields).gamePassTier < (byte)GVar11) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
          this = (ContextMenuController *)&UNK_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (this_01,GStack_12,(MethodInfo *)0x0);
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_Initialize
               (ContextMenuController *this,EditorStateMachine *editorStateMachine,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__ContextMenuController__OnFailedToAddItem__);
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).editorStateMachine;
  *ppEVar1 = editorStateMachine;
  func_?(ppEVar1,editorStateMachine);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar2 != (IEditModeUI *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar4 = 0;
    uVar5._0_1_ = (pIVar3->_1).rank;
    uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar5 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar4].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI) {
          ppMVar6 = &(&(pIVar2->klass->vtable).get_PlayerShopInventoryRepository)
                     [pIVar3->interfaceOffsets[uVar4].offset].method;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppMVar6 = (MethodInfo **)func_?(pIVar2,TypeInfo__IEditModeUI,4);
code_?:
    iVar7 = (*(code *)*ppMVar6)(pIVar2,ppMVar6[1]);
    if (iVar7 != 0) {
      pDVar8 = *(Delegate **)(iVar7 + 8);
      puVar9 = (undefined4 *)(iVar7 + 8);
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__ContextMenuController__OnFailedToAddItem__,
                 (MethodInfo *)0x0);
      pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar8,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar10 = CONCAT44(TypeInfo__System__Action,pDVar8);
      puStack11 = puVar9;
      if (pDVar8 == (Delegate *)0x0) {
        pDStack12 = (Delegate *)0x0;
        *puVar9 = 0;
        func_?();
        return;
      }
      pDVar13 = (Delegate *)0x0;
      if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
        pDVar13 = pDVar8;
      }
      if (pDVar13 != (Delegate *)0x0) {
        *puVar9 = pDVar13;
        uVar10 = CONCAT44(TypeInfo__System__Action,pDVar8);
        pDStack12 = (Delegate *)0x0;
        if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
          pDStack12 = pDVar8;
        }
        if (pDStack12 != (Delegate *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar10 = func_?();
code_?:
  _puStack00000014 = uVar10;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean IsPendingPrototypeSelected() */

bool Assembly-CSharp.dll::ContextMenuController::ContextMenuController_IsPendingPrototypeSelected
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).selectedWorldObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
        ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
         TypeInfo__MVCubeModelBase)) &&
       (pMVar3 = pMVar1[1].klass, pMVar3 != (MVWorldObjectClient__Class *)0x0)) {
      if ((pMVar3->_0).declaringType == (Il2CppClass *)0x1) {
        return 1;
      }
      return (bool)((uint)(pMVar3->_0).typeMetadataHandle >> 0x1f);
    }
  }
  return 0;
}


/* Void ItemImageUploaded(Int32) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ItemImageUploaded
               (ContextMenuController *this,int32_t woId,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      cRam_? = '\x01';
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (this_00 != (MaterialLoader *)0x0) {
      bVar2 = MaterialLoader::MaterialLoader_CheckAtlasIntegrity(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      value = (Object *)func_?();
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_01,0x16,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        piVar3 = *(int **)(woId + 0x10);
        if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0)
        {
          func_?();
        }
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x110))(piVar3,0x27,this_01);
          return;
        }
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnClosedStandaloneError(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnClosedStandaloneError
               (ContextMenuController *this,bool confirmed,ConfirmationPopup *popup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___OnClosedStandaloneError_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  if (confirmed == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__37_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ContextMenuController____c);
      }
      object = TypeInfo__ContextMenuController____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ContextMenuController____c___OnClosedStandaloneError_b__37_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ContextMenuController____c->static_fields->__9__37_0 = callbackFunction;
      func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__37_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  worldObjectID = (this->fields).woID;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddWorldObjectToInventory
              (this_00,worldObjectID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnFailedToAddItem() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_OnFailedToAddItem
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___OnFailedToAddItem_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__39_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___OnFailedToAddItem_b__39_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__39_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__39_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void PointerIsDown() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_PointerIsDown
               (ContextMenuController *this,MethodInfo *method)

{
  (this->fields).rightClickGizmoSelect = 1;
  return;
}


/* Void PopGizmos() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_PopGizmos
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__16_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___PopGizmos_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__16_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__16_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void ResetLogic() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ResetLogic
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ResetLogic_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__32_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ResetLogic_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__32_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__32_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetLogicChunk
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowChangeScaleDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowChangeScaleDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowChangeScaleDialog_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__31_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowChangeScaleDialog_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__31_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__31_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateChangeScaleSettings
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowContextMenu(Int32, Vector3) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowContextMenu
               (ContextMenuController *this,int32_t woID,Vector3 worldPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ContextMenuController__AddToInventory__);
    func_?(&MethodInfo__ContextMenuController__CanCloneRoot__);
    func_?(&MethodInfo__ContextMenuController__CanClone__);
    func_?(&MethodInfo__ContextMenuController__CloneRoot__);
    func_?(&MethodInfo__ContextMenuController__Clone__);
    func_?(&MethodInfo__ContextMenuController__Delete__);
    func_?(&MethodInfo__ContextMenuController__EnterCubeEdit__);
    func_?(&MethodInfo__ContextMenuController__EnterPlay__);
    func_?(&MethodInfo__ContextMenuController__ResetLogic__);
    func_?(&MethodInfo__ContextMenuController__ShowChangeScaleDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowGameCoinsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowGamePointsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowGameRankDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowGlobalSoundsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowInfoDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowLevelsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowMinorGamePointsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowRespawnDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowRewardedAdDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowSettingsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowSoundsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowStarsDialog__);
    func_?(&MethodInfo__ContextMenuController__ShowTeamDialog__);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Func<bool>);
    func_?(&
                    ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__0__
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__1__
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__2__
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c__DisplayClass10_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Game_Tier);
    func_?(&StringLiteral_Settings);
    func_?(&StringLiteral_Stars);
    func_?(&StringLiteral_Team);
    func_?(&StringLiteral_Global_Sounds);
    func_?(&StringLiteral_Rewarded_ad);
    func_?(&StringLiteral_Levels);
    func_?(&StringLiteral_Respawn);
    func_?(&StringLiteral_Crystals);
    func_?(&StringLiteral_Play);
    func_?(&StringLiteral_Game_Coins);
    func_?(&StringLiteral_Info);
    func_?(&StringLiteral_Delete);
    func_?(&StringLiteral_Edit_Model);
    func_?(&StringLiteral_Clone);
    func_?(&StringLiteral_Change_Scale);
    func_?(&StringLiteral_Add_To_Inventory);
    func_?(&StringLiteral_Sounds);
    func_?(&StringLiteral_Reset_Logic);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController____c__DisplayClass10_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value == (Object *)0x0) goto code_?;
  value[1].monitor = (MonitorData *)this;
  func_?(&value[1].monitor,this);
  pCVar1 = (this->fields).contextMenuPrefab;
  (this->fields).woID = woID;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pCVar1 = (ContextMenu *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pCVar1,
                      ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                     );
  ppCVar2 = &(this->fields).currentContextMenu;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar4 = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar3,woID,(MethodInfo *)0x0);
  ppMVar5 = &(this->fields).selectedWorldObject;
  *ppMVar5 = pMVar4;
  func_?(ppMVar5,pMVar4);
  pMVar4 = *ppMVar5;
  if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
  (*(code *)(pMVar4->klass->vtable).OnContextMenu.method)(pMVar4,pMVar4->klass[1]._0.image);
  if (*ppMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
  bVar6 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (*ppMVar5,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
  *(bool *)&value[1].klass = bVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  pMVar4 = *ppMVar5;
  if (pMVar4 == (MVWorldObjectClient *)0x0) {
code_?:
    bVar7 = 0;
  }
  else {
    bVar7 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((((pMVar4->klass->_1).naturalAligment < bVar7) ||
        ((MVCubeModelBase__Class *)(pMVar4->klass->_1).typeHierarchy[bVar7 - 1] !=
         TypeInfo__MVCubeModelBase)) ||
       (pMVar8 = pMVar4[1].klass, pMVar8 == (MVWorldObjectClient__Class *)0x0))
    goto code_?;
    if ((pMVar8->_0).declaringType == (Il2CppClass *)0x1) {
      bVar7 = 1;
    }
    else {
      bVar7 = (byte)((uint)(pMVar8->_0).typeMetadataHandle >> 0x1f);
    }
  }
  *(byte *)((int)&value[1].klass + 1) = bVar7;
  object = TypeInfo__UnityEngine__Events__UnityAction;
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowStarsDialog__,
             (MethodInfo *)0x0);
  uVar10 = 0;
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseStars,(String *)0x0,
             (UnityAction *)StringLiteral_Stars,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction,uVar10);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowTeamDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseTeam,(String *)0x0,(UnityAction *)StringLiteral_Team,
             (MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowGameCoinsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseGameCoins,(String *)0x0,
             (UnityAction *)StringLiteral_Game_Coins,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowLevelsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseLevel,(String *)0x0,
             (UnityAction *)StringLiteral_Levels,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowRewardedAdDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanChangeScale,(String *)0x2,
             (UnityAction *)StringLiteral_Rewarded_ad,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowGameRankDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanUseGameRank,(String *)0x0,
             (UnityAction *)StringLiteral_Game_Tier,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowSettingsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_HasSettings,(String *)0x0,
             (UnityAction *)StringLiteral_Settings,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowSoundsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_Sounds,(String *)0x0,(UnityAction *)StringLiteral_Sounds,
             (MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowGlobalSoundsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_GlobalSounds,(String *)0x0,
             (UnityAction *)StringLiteral_Global_Sounds,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__EnterCubeEdit__,
             (MethodInfo *)0x0);
  pFVar11 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)func_?();
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (pFVar11,(Object *)object,
             MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__0__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanEdit,(String *)0x0,
             (UnityAction *)StringLiteral_Edit_Model,(Func_1_Boolean_ *)pNVar9,
             (MethodInfo *)pFVar11);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowChangeScaleDialog__,
             (MethodInfo *)0x0);
  pFVar11 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)func_?();
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (pFVar11,(Object *)object,
             MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__1__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanChangeScale,(String *)0x40,
             (UnityAction *)StringLiteral_Change_Scale,(Func_1_Boolean_ *)pNVar9,
             (MethodInfo *)pFVar11);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ResetLogic__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanResetLogic,(String *)0x0,
             (UnityAction *)StringLiteral_Reset_Logic,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__EnterPlay__,(MethodInfo *)0x0
            );
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanEnterPlay,(String *)0x0,
             (UnityAction *)StringLiteral_Play,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowGamePointsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanEarnGamePoints,(String *)0x0,
             (UnityAction *)StringLiteral_Crystals,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowMinorGamePointsDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanEarnGamePointsMinor,(String *)0x0,
             (UnityAction *)StringLiteral_Crystals,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowRespawnDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanChangeScale,(String *)0x1,
             (UnityAction *)StringLiteral_Respawn,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__Clone__,(MethodInfo *)0x0);
  pFVar11 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)func_?();
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (pFVar11,(Object *)this,MethodInfo__ContextMenuController__CanClone__,(MethodInfo *)0x0)
  ;
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanClone,(String *)0x0,(UnityAction *)StringLiteral_Clone,
             (Func_1_Boolean_ *)pNVar9,(MethodInfo *)pFVar11);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__CloneRoot__,(MethodInfo *)0x0
            );
  pFVar11 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)func_?();
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (pFVar11,(Object *)this,MethodInfo__ContextMenuController__CanCloneRoot__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanCloneRoot,(String *)0x0,
             (UnityAction *)StringLiteral_Clone,(Func_1_Boolean_ *)pNVar9,(MethodInfo *)pFVar11);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__ShowInfoDialog__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag
            (this,InteractionFlags__Enum_CanChangeScale,(String *)0x80,
             (UnityAction *)StringLiteral_Info,(MethodInfo *)pNVar9);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__AddToInventory__,
             (MethodInfo *)0x0);
  pFVar11 = (Func_1_System_Threading_Tasks_VoidTaskResult_ *)func_?();
  mscorlib.dll::System::Func`1[System::Threading::Tasks::VoidTaskResult]::
  Func_1_System_Threading_Tasks_VoidTaskResult___ctor
            (pFVar11,(Object *)object,
             MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__2__,
             (MethodInfo *)0x0);
  ContextMenuController_AddMenuButtonForFlag_1
            (this,InteractionFlags__Enum_CanAddToInventory,(String *)0x0,
             (UnityAction *)StringLiteral_Add_To_Inventory,(Func_1_Boolean_ *)pNVar9,
             (MethodInfo *)pFVar11);
  pCVar1 = (this->fields).currentContextMenu;
  buttonText = TM::TM__(StringLiteral_Delete,(MethodInfo *)0x0);
  pNVar9 = (NavMesh_OnNavMeshPreUpdate *)func_?();
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar9,(Object *)this,MethodInfo__ContextMenuController__Delete__,(MethodInfo *)0x0);
  if (pCVar1 != (ContextMenu *)0x0) {
    ContextMenu::ContextMenu_AddButton(pCVar1,buttonText,(UnityAction *)pNVar9,(MethodInfo *)0x0);
    ContextMenuController_PopGizmos(this,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c__DisplayClass10_0___ShowContextMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pMVar4 = (this->fields).selectedWorldObject;
    pCVar1 = (this->fields).currentContextMenu;
    if ((pMVar4 != (MVWorldObjectClient *)0x0) &&
       (woID_00 = (pMVar4->fields)._.id, pCVar1 != (ContextMenu *)0x0)) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
        func_?(&
                        MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                       );
        cRam_? = '\x01';
      }
      (pCVar1->fields).woID = woID_00;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)pCVar1,
                 MethodInfo__ContextMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                  (pMVar3,woID_00,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_00,
                   (MethodInfo *)0x0);
        (pCVar1->fields).worldPosition.x = (float)&UNK_?;
        (pCVar1->fields).worldPosition.y = (float)this;
        (pCVar1->fields).worldPosition.z = 1.469368e-39;
        ContextMenu::ContextMenu_SetToScreenPoint(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowContextMenuLink(Int32, Boolean, Vector3) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowContextMenuLink
               (ContextMenuController *this,int32_t linkID,bool isObjectLink,Vector3 worldPos,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass15_0___ShowContextMenuLink_b__0__
                   );
    func_?(&
                    MethodInfo__ContextMenuController____c__DisplayClass15_0___ShowContextMenuLink_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c__DisplayClass15_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_Delete);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ContextMenuController____c__DisplayClass15_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)linkID;
    *(bool *)&value[2].klass = isObjectLink;
    pCVar1 = (this->fields).contextMenuPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pCVar1,
                        ContextMenu_MethodInfo__UnityEngine__Object__Instantiate<ContextMenu>_ContextMenu_
                       );
    ppMVar3 = &value[2].monitor;
    *ppMVar3 = (MonitorData *)pOVar2;
    func_?(ppMVar3,pOVar2);
    pCVar1 = (ContextMenu *)*ppMVar3;
    buttonText = TM::TM__(StringLiteral_Delete,(MethodInfo *)0x0);
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,value,
               MethodInfo__ContextMenuController____c__DisplayClass15_0___ShowContextMenuLink_b__0__
               ,(MethodInfo *)0x0);
    if (pCVar1 != (ContextMenu *)0x0) {
      ContextMenu::ContextMenu_AddButton(pCVar1,buttonText,(UnityAction *)this_00,(MethodInfo *)0x0)
      ;
      ContextMenuController_PopGizmos(this,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__ContextMenuController____c__DisplayClass15_0___ShowContextMenuLink_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pCVar1 = (ContextMenu *)*ppMVar3;
      if (pCVar1 != (ContextMenu *)0x0) {
        (pCVar1->fields).worldPosition.x = worldPos.x;
        (pCVar1->fields).worldPosition.y = worldPos.y;
        (pCVar1->fields).linkMenu = 1;
        (pCVar1->fields).worldPosition.z = worldPos.z;
        ContextMenu::ContextMenu_SetToScreenPoint(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowGameCoinsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGameCoinsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowGameCoinsDialog_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__24_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGameCoinsDialog_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__24_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__24_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_GameCoin,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowGamePointsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGamePointsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowGamePointsDialog_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__20_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGamePointsDialog_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__20_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__20_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateGamePointsSettings
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowGameRankDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGameRankDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowGameRankDialog_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__19_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGameRankDialog_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__19_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__19_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_GameRank,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowGlobalSoundsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowGlobalSoundsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowGlobalSoundsDialog_b__29_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__29_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowGlobalSoundsDialog_b__29_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__29_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__29_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateGlobalSoundsInventory
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowInfoDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowInfoDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&StringLiteral_World_object_of_unknown_type);
    func_?(&StringLiteral_Model_preview__);
    func_?(&StringLiteral_Model_item_ID__);
    func_?(&StringLiteral_Model_author_ID__);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).selectedWorldObject;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
        ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
         TypeInfo__MVCubeModelInstance)) && (pMVar1[1].klass != (MVWorldObjectClient__Class *)0x0))
    {
      pSVar3 = TM::TM__(StringLiteral_Model_author_ID__,(MethodInfo *)0x0);
      if (pMVar1[1].klass != (MVWorldObjectClient__Class *)0x0) {
        IStack_4.m_value = (int32_t)((pMVar1[1].klass)->_0).interopData;
        pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,pSVar5,(MethodInfo *)0x0);
        TextCommand::TextCommand_NotifyUser(pSVar3,(MethodInfo *)0x0);
        pSVar3 = TM::TM__(StringLiteral_Model_item_ID__,(MethodInfo *)0x0);
        IStack_4.m_value = (pMVar1->fields)._.itemId;
        pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,pSVar5,(MethodInfo *)0x0);
        TextCommand::TextCommand_NotifyUser(pSVar3,(MethodInfo *)0x0);
        pSVar3 = TM::TM__(StringLiteral_Model_preview__,(MethodInfo *)0x0);
        pMVar1 = (this->fields).selectedWorldObject;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          puStack6 = (undefined *)0x0;
          BStack_7.m_value =
               MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                         (pMVar1,InteractionFlags__Enum_IsPreview,(MethodInfo *)0x0);
          if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar5 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_3(pSVar3,pSVar5,(MethodInfo *)0x0);
          TextCommand::TextCommand_NotifyUser(pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pSVar3 = TM::TM__(StringLiteral_World_object_of_unknown_type,(MethodInfo *)0x0);
  TextCommand::TextCommand_NotifyUser(pSVar3,(MethodInfo *)0x0);
  return;
}


/* Void ShowLevelsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowLevelsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowLevelsDialog_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__25_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowLevelsDialog_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__25_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__25_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_Level,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowMinorGamePointsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowMinorGamePointsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowMinorGamePointsDialog_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__21_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowMinorGamePointsDialog_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__21_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__21_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateGamePointsMinorRewardSettings
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowRespawnDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowRespawnDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowRespawnDialog_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__22_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowRespawnDialog_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__22_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__22_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateRespawnSetting
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowRewardedAdDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowRewardedAdDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowRewardedAdDialog_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__26_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowRewardedAdDialog_b__26_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__26_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__26_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_RewardedAd,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowSettingsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowSettingsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowSettingsDialog_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__27_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowSettingsDialog_b__27_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__27_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__27_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowSoundsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowSoundsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowSoundsDialog_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__28_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowSoundsDialog_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__28_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__28_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSoundsInventory
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowStarsDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowStarsDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowStarsDialog_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__18_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowStarsDialog_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__18_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__18_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_Star,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ShowTeamDialog() */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController_ShowTeamDialog
               (ContextMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ContextMenuController____c___ShowTeamDialog_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ContextMenuController____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ContextMenuController____c);
  }
  callbackFunction = TypeInfo__ContextMenuController____c->static_fields->__9__23_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__ContextMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ContextMenuController____c___ShowTeamDialog_b__23_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__23_0 = callbackFunction;
    func_?(&TypeInfo__ContextMenuController____c->static_fields->__9__23_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  this_00 = (this->fields).settingsFactory;
  if (this_00 != (SettingsFactory *)0x0) {
    SettingsFactory::SettingsFactory_CreateSettingsDialog_1
              (this_00,(this->fields).woID,UseRequirementType__Enum_Team,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <AddToInventory>b__35_2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__AddToInventory_b__35_2
               (ContextMenuController *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__ContextMenuController__OnClosedStandaloneError_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Image_upload_is_disabled_in_stan);
    func_?(&StringLiteral_Are_you_sure_);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Image_upload_is_disabled_in_stan,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__ContextMenuController__OnClosedStandaloneError_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Are_you_sure_,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Clone>b__33_1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController::ContextMenuController__Clone_b__33_1
               (ContextMenuController *this,ICloneHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ICloneHandler);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
              (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (handler != (ICloneHandler *)0x0) {
      func_?(0,TypeInfo__UnityEngine__EventSystems__ICloneHandler,handler);
      return;
    }
  }
  func_?();
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

