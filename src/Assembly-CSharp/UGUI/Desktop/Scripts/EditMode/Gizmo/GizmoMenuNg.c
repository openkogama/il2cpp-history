
/* Boolean CanClone() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_CanClone
               (GizmoMenuNg *this,MethodInfo *method)

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
  HStack_6._set = (HashSet_1_System_Object_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = (Object *)0x0;
  this_00 = (this->fields).editorStateMachine;
  if (this_00 != (EditorStateMachine *)0x0) {
    method_01 = (MethodInfo *)&UNK_?;
    method_00 = (MethodInfo *)
                EditorStateMachine::EditorStateMachine_get_SelectedWOs(this_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
               HashSet_1_System_Object__GetEnumerator
                         (&HStack_8,(HashSet_1_System_Object_ *)method_00,
                          MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                         );
      HStack_6._set = pHVar7->_set;
      HStack_6._index = pHVar7->_index;
      HStack_6._version = pHVar7->_version;
      HStack_6._current = pHVar7->_current;
      HStack_8._version = 0;
      uStack_1 = 1;
      HStack_8._current = (Object *)&HStack_6;
      do {
        bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          (&HStack_6,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        this_01 = HStack_6._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&HStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_01);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        if ((MVWorldObjectClient *)HStack_6._current == (MVWorldObjectClient *)0x0)
        goto code_?;
        bVar9 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          ((MVWorldObjectClient *)HStack_6._current,InteractionFlags__Enum_CanClone
                           ,(MethodInfo *)0x0);
        if (bVar9 == 0) break;
        if ((MVWorldObjectClient *)this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        method_01 = (MethodInfo *)0x20000;
        bVar9 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          ((MVWorldObjectClient *)this_01,InteractionFlags__Enum_IsPreview,
                           (MethodInfo *)0x0);
      } while (bVar9 == 0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&HStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,method_00);
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Boolean CanCloneRoot() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_CanCloneRoot(GizmoMenuNg *this,MethodInfo *method)

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
  HStack_6._set = (HashSet_1_System_Object_ *)0x0;
  HStack_6._index = 0;
  HStack_6._version = 0;
  HStack_6._current = (Object *)0x0;
  this_00 = (this->fields).editorStateMachine;
  if (this_00 != (EditorStateMachine *)0x0) {
    method_01 = (MethodInfo *)&UNK_?;
    method_00 = (MethodInfo *)
                EditorStateMachine::EditorStateMachine_get_SelectedWOs(this_00,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      pHVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
               HashSet_1_System_Object__GetEnumerator
                         (&HStack_8,(HashSet_1_System_Object_ *)method_00,
                          MethodInfo__System__Collections__Generic__HashSet<MVWorldObjectClient>__GetEnumerator__
                         );
      HStack_6._set = pHVar7->_set;
      HStack_6._index = pHVar7->_index;
      HStack_6._version = pHVar7->_version;
      HStack_6._current = pHVar7->_current;
      HStack_8._version = 0;
      uStack_1 = 1;
      HStack_8._current = (Object *)&HStack_6;
      do {
        bVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                          (&HStack_6,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        this_01 = HStack_6._current;
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&HStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                     ,method_01);
          *unaff_FS_OFFSET = uStack_3;
          return 1;
        }
        if ((MVWorldObjectClient *)HStack_6._current == (MVWorldObjectClient *)0x0)
        goto code_?;
        bVar9 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          ((MVWorldObjectClient *)HStack_6._current,
                           InteractionFlags__Enum_CanCloneRoot,(MethodInfo *)0x0);
        if (bVar9 == 0) break;
        if ((MVWorldObjectClient *)this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        method_01 = (MethodInfo *)0x20000;
        bVar9 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          ((MVWorldObjectClient *)this_01,InteractionFlags__Enum_IsPreview,
                           (MethodInfo *)0x0);
      } while (bVar9 == 0);
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&HStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,method_00);
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void Clone() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Clone
               (GizmoMenuNg *this,MethodInfo *method)

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
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  callbackFunction =
       TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0
  ;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0 =
         callbackFunction;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                     static_fields->__9__31_0,callbackFunction);
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
  if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
              );
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_CloneRoot(GizmoMenuNg *this,MethodInfo *method)

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
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0
                         );
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    callbackFunction =
         TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
         __9__32_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___CloneRoot_b__32_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__32_0
           = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      pOVar1 = (Object__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                         (this_00,(this->fields).woID,(MethodInfo *)0x0);
      value[1].klass = pOVar1;
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass32_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                  );
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoGizmoAction(GizmoAction) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_DoGizmoAction(GizmoMenuNg *this,GizmoAction__Enum gizmoAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    func_?(&StringLiteral_XZ_rotation_is_in_early_access_f);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(
                         TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0
                         );
  if (value == (Object *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            (value,ExceptionArgument__Enum_obj,unaff_EDI);
  value[1].klass = (Object__Class *)gizmoAction;
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  callbackFunction =
       TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0
  ;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0)
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___DoGizmoAction_b__44_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__44_0 =
         callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            ((GameObject *)
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
             ,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  if (((this->fields).objectLocked != 0) && ((this->fields).isSubscriber == 0)) {
    this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).subscriberActions;
    if (this_00 == (HashSet_1_System_Int32Enum_ *)0x0) goto code_?;
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (this_00,(Int32Enum__Enum)value[1].klass,
                       MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Contains_GizmoAction_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields).memberToRotate;
      textBubbleText = TM::TM__(StringLiteral_XZ_rotation_is_in_early_access_f,(MethodInfo *)0x0);
      if (this_01 != (GamePassesTextBubble *)0x0) {
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (this_01,textBubbleText,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c__DisplayClass44_0___DoGizmoAction_b__1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
              );
    GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FlipX() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_FlipX
               (GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_FlipX,(MethodInfo *)0x0);
  return;
}


/* Void FlipY() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_FlipY
               (GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_FlipY,(MethodInfo *)0x0);
  return;
}


/* Void FlipZ() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_FlipZ
               (GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_FlipZ,(MethodInfo *)0x0);
  return;
}


/* Void HandleCloningHotkey() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_HandleCloningHotkey(GizmoMenuNg *this,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                    (KeyCode__Enum_Q,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = GizmoMenuNg_CanClone(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = GizmoMenuNg_CanCloneRoot(this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    GizmoMenuNg_CloneRoot(this,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?();
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
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    cRam_? = '\x01';
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction =
       TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0
  ;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0 =
         callbackFunction;
    pGVar2 = (GameObject *)&UNK_?;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                     static_fields->__9__31_0);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
              );
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_Initialize
               (GizmoMenuNg *this,int32_t id,Vector3 wp,EditorStateMachine *esm,MethodInfo *method)

{
  (this->fields).woID = id;
  (this->fields).editorStateMachine = esm;
  func_?(&(this->fields).editorStateMachine,esm);
  (this->fields).worldPosition.x = wp.x;
  (this->fields).worldPosition.y = wp.y;
  (this->fields).worldPosition.z = wp.z;
  GizmoMenuNg_Setup(this,(MethodInfo *)0x0);
  GizmoMenuNg_SetToScreenPoint(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_OnDestroy(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVJoinState>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnSpawnRoleActivated_int_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_MVJoinState___Class *)
            MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  woID = (this->fields).woID;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
  ;
  if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
               ,(MethodInfo *)0x0);
    if (this_00 != (Action_1_MVJoinState___Class *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
                ((MVWorldObjectClientManager *)this_00,woID,
                 (Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,(MethodInfo *)0x0);
      this_00 = (Action_1_MVJoinState___Class *)
                MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0)
      ;
      this_02 = (UnityAction_1_System_Int32Enum_ *)func_?();
      this_01 = (UnityAction_2_System_Object_System_Object_ *)0x0;
      if (this_02 != (UnityAction_1_System_Int32Enum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                   ,(MethodInfo *)0x0);
        this_01 = (UnityAction_2_System_Object_System_Object_ *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)this_00,(Delegate *)this_02,(MethodInfo *)0x0);
        this_00 = TypeInfo__System__Action<MVJoinState>;
        value = (Action_1_MVJoinState_ *)0x0;
        if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
          value = (Action_1_MVJoinState_ *)
                  func_?(this_01,TypeInfo__System__Action<MVJoinState>);
          if (value == (Action_1_MVJoinState_ *)0x0) goto code_?;
        }
        MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(value,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar1 != (MVLocalPlayer *)0x0) {
          this_00 = (Action_1_MVJoinState___Class *)(pMVar1->fields)._.spawnRolesManager;
          this_01 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      ((UnityAction_1_System_Int32Enum_ *)this_01,(Object *)this,
                       MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnSpawnRoleActivated_int_
                       ,(MethodInfo *)0x0);
            if (this_00 != (Action_1_MVJoinState___Class *)0x0) {
              SpawnRolesManager::SpawnRolesManager_remove_OnSpawnRoleActivated
                        ((SpawnRolesManager *)this_00,(Action_1_Int32_ *)this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(this_01,this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnJoinChanged(MVJoinState) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_OnJoinChanged(GizmoMenuNg *this,MVJoinState__Enum obj,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((this_01 != (MVLocalPlayer *)0x0) &&
       (bVar1 = MVPlayer::MVPlayer_get_IsSubscriber((MVPlayer *)this_01,(MethodInfo *)0x0),
       bVar1 == 0)) {
      MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    }
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Pop
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction =
         TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
         __9__28_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
               __9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Pop_b__28_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__28_0
           = callbackFunction;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_PopWoDestroyed
               (GizmoMenuNg *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method
               )

{
  GizmoMenuNg_Pop(this,(MethodInfo *)0x0);
  return;
}


/* Void ResetRotation() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_ResetRotation(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
  }
  pEVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
           __9__45_0;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    }
    pGVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    pEVar2 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                            );
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pGVar3,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__45_0 =
         pEVar2;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                     static_fields->__9__45_0,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pEVar2 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->
           __9__45_1;
  if (pEVar2 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar3 = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    pEVar2 = (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)func_?();
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pGVar3,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___ResetRotation_b__45_1_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__45_1 =
         pEVar2;
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->
                     static_fields->__9__45_1,pEVar2);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
  return;
}


/* Void RotateStepLeftX() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepLeftX(GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_RotateStepX,(MethodInfo *)0x0);
  return;
}


/* Void RotateStepLeftY() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepLeftY(GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_RotateStepY,(MethodInfo *)0x0);
  return;
}


/* Void RotateStepLeftZ() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepLeftZ(GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_RotateStepZ,(MethodInfo *)0x0);
  return;
}


/* Void RotateStepRightX() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepRightX(GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_RotateStepXRight,(MethodInfo *)0x0);
  return;
}


/* Void RotateStepRightY() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepRightY(GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_RotateStepYRight,(MethodInfo *)0x0);
  return;
}


/* Void RotateStepRightZ() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_RotateStepRightZ(GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_DoGizmoAction(this,GizmoAction__Enum_RotateStepZRight,(MethodInfo *)0x0);
  return;
}


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_SetToScreenPoint(GizmoMenuNg *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    this_00 = (pMVar1->fields).mainCamera;
    if (this_00 != (Camera *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)&stack0xffffffe8,this_00,(this->fields).worldPosition,
                          (MethodInfo *)0x0);
      fVar3 = pVVar2->z;
      this_02 = (this->fields).rectTransform;
      if (this_02 != (RectTransform *)0x0) {
        uVar4 = 0;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          value.y = (float)uVar4;
          value.x = (float)this_02;
          value.z = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_01,value,(MethodInfo *)0x0);
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


/* Void Setup() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Setup
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MVJoinState>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnSpawnRoleActivated_int_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__Contains_MV__WorldObject__WorldObjectType_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    bVar3 = MVPlayer::MVPlayer_get_IsSubscriber((MVPlayer *)pMVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
      bVar4 = (pMVar1->fields)._Region_k__BackingField == 2;
    }
    else {
      bVar4 = true;
    }
    if (this != (GizmoMenuNg *)0x0) {
      (this->fields).isSubscriber = bVar4;
      unaff_EBX = (Action_1_MVJoinState___Class *)
                  MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged
                            ((MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?((short)TypeInfo__System__Action<MVJoinState>);
      unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)0x0;
      if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnJoinChanged_MVJoinState_
                   ,(MethodInfo *)0x0);
        unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)unaff_EBX,(Delegate *)this_01,(MethodInfo *)0x0);
        unaff_EBX = TypeInfo__System__Action<MVJoinState>;
        value = (Action_1_MVJoinState_ *)0x0;
        if ((unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
           (value = (Action_1_MVJoinState_ *)
                    func_?(unaff_EDI,(short)TypeInfo__System__Action<MVJoinState>),
           value == (Action_1_MVJoinState_ *)0x0)) goto code_?;
        MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(value,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          pMVar5 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_02,(this->fields).woID,(MethodInfo *)0x0);
          (this->fields).worldObjectClient = pMVar5;
          func_?(&(this->fields).worldObjectClient);
          pMVar5 = (this->fields).worldObjectClient;
          if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
             (this_00 = (HashSet_1_System_Int32Enum_ *)(this->fields).xyzLockedItems,
             this_00 != (HashSet_1_System_Int32Enum_ *)0x0)) {
            bVar3 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                    HashSet_1_System_Int32Enum__Contains
                              (this_00,(pMVar5->fields)._.type,
                               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__Contains_MV__WorldObject__WorldObjectType_
                              );
            pMVar5 = (this->fields).worldObjectClient;
            (this->fields).objectLocked = bVar3;
            if (pMVar5 != (MVWorldObjectClient *)0x0) {
              (*(pMVar5->klass->vtable).DrawTransformGizmo.methodPtr)(pMVar5);
              if ((this->fields).useRotationTexts == 0) {
code_?:
                GizmoMenuNg_UpdateRotationText(this,(MethodInfo *)0x0);
                unaff_EBX = (Action_1_MVJoinState___Class *)
                            MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                woID = (this->fields).woID;
                unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)func_?();
                if ((unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
                   (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                              (unaff_EDI,(Object *)this,
                               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                               ,(MethodInfo *)0x0), unaff_EBX != (Action_1_MVJoinState___Class *)0x0
                   )) {
                  MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
                            ((MVWorldObjectClientManager *)unaff_EBX,woID,
                             (Action_2_Object_WorldObjectDestroyedEventArgs_ *)unaff_EDI,
                             (MethodInfo *)0x0);
                  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer
                                      ((MethodInfo *)0x0);
                  if (pMVar2 != (MVLocalPlayer *)0x0) {
                    unaff_EBX = (Action_1_MVJoinState___Class *)
                                (pMVar2->fields)._.spawnRolesManager;
                    unaff_EDI = (UnityAction_2_System_Object_System_Object_ *)func_?();
                    if ((unaff_EDI != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
                       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                  ((UnityAction_1_System_Int32Enum_ *)unaff_EDI,(Object *)this,
                                   MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg__OnSpawnRoleActivated_int_
                                   ,(MethodInfo *)0x0),
                       unaff_EBX != (Action_1_MVJoinState___Class *)0x0)) {
                      SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                                ((SpawnRolesManager *)unaff_EBX,(Action_1_Int32_ *)unaff_EDI,
                                 (MethodInfo *)0x0);
                      pMVar5 = (this->fields).worldObjectClient;
                      if (pMVar5 != (MVWorldObjectClient *)0x0) {
                        bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                          (pMVar5,InteractionFlags__Enum_CanRotateX,
                                           (MethodInfo *)0x0);
                        pMVar5 = (this->fields).worldObjectClient;
                        if (pMVar5 != (MVWorldObjectClient *)0x0) {
                          bVar6 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                            (pMVar5,InteractionFlags__Enum_CanChangeScale,
                                             (MethodInfo *)0x4);
                          pMVar5 = (this->fields).worldObjectClient;
                          unaff_EBX = (Action_1_MVJoinState___Class *)
                                      (uint)CONCAT11(bVar6,(char)unaff_EBX);
                          if (pMVar5 != (MVWorldObjectClient *)0x0) {
                            canRotate = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                                  (pMVar5,InteractionFlags__Enum_CanRotateY,
                                                   (MethodInfo *)0x0);
                            pMVar5 = (this->fields).worldObjectClient;
                            if (pMVar5 != (MVWorldObjectClient *)0x0) {
                              bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                                (pMVar5,InteractionFlags__Enum_CanChangeScale,
                                                 (MethodInfo *)0x10);
                              pMVar5 = (this->fields).worldObjectClient;
                              if (pMVar5 != (MVWorldObjectClient *)0x0) {
                                bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                                                   (pMVar5,InteractionFlags__Enum_CanRotateZ,
                                                    (MethodInfo *)0x0);
                                unaff_EBX = (Action_1_MVJoinState___Class *)
                                            (uint)CONCAT11(bVar6,bVar8);
                                pMVar5 = (this->fields).worldObjectClient;
                                if (pMVar5 != (MVWorldObjectClient *)0x0) {
                                  canRotate_00 = bVar8;
                                  bVar9 = MVWorldObjectClient::
                                           MVWorldObjectClient_HasInteractionFlag
                                                     (pMVar5,InteractionFlags__Enum_CanChangeScale,
                                                      (MethodInfo *)0x8);
                                  pTVar10 = (this->fields).rotationMenu;
                                  if ((pTVar10 != (Transform *)0x0) &&
                                     (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)pTVar10,(MethodInfo *)0x0),
                                     pGVar11 != (GameObject *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive
                                              (pGVar11,bVar8 | canRotate | bVar3,(MethodInfo *)0x0)
                                    ;
                                    pGVar12 = (this->fields).xRotationHolder;
                                    if (pGVar12 != (GizmoRotationButtonHolderNg *)0x0) {
                                      GizmoRotationButtonHolderNg::GizmoRotationButtonHolderNg_Setup
                                                (pGVar12,bVar3,
                                                 (this->fields).objectLocked != 0 && bVar6 == 0,
                                                 (MethodInfo *)0x0);
                                      pGVar12 = (this->fields).yRotationHolder;
                                      if (pGVar12 != (GizmoRotationButtonHolderNg *)0x0) {
                                        GizmoRotationButtonHolderNg::
                                        GizmoRotationButtonHolderNg_Setup
                                                  (pGVar12,canRotate,
                                                   (this->fields).objectLocked & bVar7,
                                                   (MethodInfo *)0x0);
                                        pGVar12 = (this->fields).zRotationHolder;
                                        if (pGVar12 != (GizmoRotationButtonHolderNg *)0x0) {
                                          GizmoRotationButtonHolderNg::
                                          GizmoRotationButtonHolderNg_Setup
                                                    (pGVar12,canRotate_00,
                                                     (this->fields).objectLocked != 0 && bVar9 == 0
                                                     ,(MethodInfo *)0x0);
                                          if (bVar6 == 0) {
                                            pHVar13 = (HashSet_1_System_Object_ *)
                                                     (this->fields).subscriberActions;
                                            if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                              System.Core.dll::System::Collections::Generic::
                                              HashSet`1[System::Object]::
                                              HashSet_1_System_Object__Add
                                                        (pHVar13,(Object *)0x2,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                              pHVar13 = (HashSet_1_System_Object_ *)
                                                       (this->fields).subscriberActions;
                                              if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                System.Core.dll::System::Collections::Generic::
                                                HashSet`1[System::Object]::
                                                HashSet_1_System_Object__Add
                                                          (pHVar13,(Object *)0xb,
                                                                                                                      
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                pHVar13 = (HashSet_1_System_Object_ *)
                                                         (this->fields).subscriberActions;
                                                if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                  System.Core.dll::System::Collections::Generic::
                                                  HashSet`1[System::Object]::
                                                  HashSet_1_System_Object__Add
                                                            (pHVar13,(Object *)0x8,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                  goto code_?;
                                                }
                                              }
                                            }
                                          }
                                          else {
code_?:
                                            if (bVar9 == 0) {
                                              pHVar13 = (HashSet_1_System_Object_ *)
                                                       (this->fields).subscriberActions;
                                              if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                bVar7 = (bool)((uint)pHVar13 >> 0x10);
                                                System.Core.dll::System::Collections::Generic::
                                                HashSet`1[System::Object]::
                                                HashSet_1_System_Object__Add
                                                          (pHVar13,(Object *)0x4,
                                                                                                                      
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                pHVar13 = (HashSet_1_System_Object_ *)
                                                         (this->fields).subscriberActions;
                                                if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                  System.Core.dll::System::Collections::Generic::
                                                  HashSet`1[System::Object]::
                                                  HashSet_1_System_Object__Add
                                                            (pHVar13,(Object *)0xd,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                  pHVar13 = (HashSet_1_System_Object_ *)
                                                           (this->fields).subscriberActions;
                                                  if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                    System.Core.dll::System::Collections::Generic::
                                                    HashSet`1[System::Object]::
                                                    HashSet_1_System_Object__Add
                                                              (pHVar13,(Object *)0xa,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                  goto code_?;
                                                  }
                                                }
                                              }
                                            }
                                            else {
code_?:
                                              if (bVar7 == 0) {
code_?:
                                                pMVar5 = (this->fields).worldObjectClient;
                                                if (pMVar5 != (MVWorldObjectClient *)0x0) {
                                                  bVar14 = (byte)((uint)pMVar5 >> 0x10);
                                                  bVar15 = 0x5e;
                                                  bVar3 = MVWorldObjectClient::
                                                          MVWorldObjectClient_HasInteractionFlag
                                                                    (pMVar5,
                                                  InteractionFlags__Enum_CanChangeScale,
                                                  (MethodInfo *)0x20);
                                                  pTVar10 = (this->fields).resetRotationButton;
                                                  unaff_EBX = (Action_1_MVJoinState___Class *)
                                                              (uint)CONCAT11(bVar3,bVar8);
                                                  if (pTVar10 != (Transform *)0x0) {
                                                    pGVar11 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar10,
                                                                         (MethodInfo *)0x0);
                                                    if (bVar3 == 0) {
                                                      unaff_EBX = (Action_1_MVJoinState___Class *)
                                                                  (uint)(bVar8 | bVar14);
                                                      bVar15 = bVar15 | bVar8 | bVar14;
                                                    }
                                                    else {
                                                      bVar15 = 0;
                                                    }
                                                    if (pGVar11 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar11,bVar15,(MethodInfo *)0x0);
                                                      pMVar5 = (this->fields).worldObjectClient;
                                                      if (pMVar5 != (MVWorldObjectClient *)0x0) {
                                                        bVar3 = MVWorldObjectClient::
                                                                                                                                
                                                  MVWorldObjectClient_HasInteractionFlag
                                                            (pMVar5,
                                                  InteractionFlags__Enum_NotTranslatbleXZ,
                                                  (MethodInfo *)0x0);
                                                  pGVar16 = (this->fields).xzTranslate;
                                                  uVar17 = (undefined3)((uint)unaff_EBX >> 8);
                                                  unaff_EBX = (Action_1_MVJoinState___Class *)
                                                              CONCAT31(uVar17,bVar3);
                                                  if ((pGVar16 != (GizmoButton *)0x0) &&
                                                     (pGVar11 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_gameObject
                                                                          ((Component *)pGVar16,
                                                                           (MethodInfo *)0x0),
                                                     pGVar11 != (GameObject *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar11,bVar3 == 0,(MethodInfo *)0x0)
                                                    ;
                                                    pMVar5 = (this->fields).worldObjectClient;
                                                    if (pMVar5 != (MVWorldObjectClient *)0x0) {
                                                      bVar3 = MVWorldObjectClient::
                                                              MVWorldObjectClient_HasInteractionFlag
                                                                        (pMVar5,
                                                  InteractionFlags__Enum_NotTranslatbleY,
                                                  (MethodInfo *)0x0);
                                                  pGVar16 = (this->fields).yTranslate;
                                                  unaff_EBX = (Action_1_MVJoinState___Class *)
                                                              CONCAT31(uVar17,bVar3);
                                                  if ((pGVar16 != (GizmoButton *)0x0) &&
                                                     (pGVar11 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_gameObject
                                                                          ((Component *)pGVar16,
                                                                           (MethodInfo *)0x0),
                                                     pGVar11 != (GameObject *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_SetActive
                                                              (pGVar11,bVar3 == 0,(MethodInfo *)0x0)
                                                    ;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                              else {
                                                pHVar13 = (HashSet_1_System_Object_ *)
                                                         (this->fields).subscriberActions;
                                                if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                  System.Core.dll::System::Collections::Generic::
                                                  HashSet`1[System::Object]::
                                                  HashSet_1_System_Object__Add
                                                            (pHVar13,(Object *)0x3,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                  pHVar13 = (HashSet_1_System_Object_ *)
                                                           (this->fields).subscriberActions;
                                                  if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                    System.Core.dll::System::Collections::Generic::
                                                    HashSet`1[System::Object]::
                                                    HashSet_1_System_Object__Add
                                                              (pHVar13,(Object *)0xc,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
                                                  pHVar13 = (HashSet_1_System_Object_ *)
                                                           (this->fields).subscriberActions;
                                                  if (pHVar13 != (HashSet_1_System_Object_ *)0x0) {
                                                    System.Core.dll::System::Collections::Generic::
                                                    HashSet`1[System::Object]::
                                                    HashSet_1_System_Object__Add
                                                              (pHVar13,(Object *)0x9,
                                                                                                                              
                                                  MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__Add_GizmoAction_
                                                  );
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
              else {
                pTVar18 = (this->fields).xRotationText;
                if ((pTVar18 != (Text *)0x0) &&
                   (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar18,(MethodInfo *)0x0),
                   pGVar11 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,1,(MethodInfo *)0x0);
                  pTVar18 = (this->fields).yRotationText;
                  if ((pTVar18 != (Text *)0x0) &&
                     (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pTVar18,(MethodInfo *)0x0),
                     pGVar11 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar11,1,(MethodInfo *)0x0);
                    pTVar18 = (this->fields).zRotationText;
                    if ((pTVar18 != (Text *)0x0) &&
                       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pTVar18,(MethodInfo *)0x0),
                       pGVar11 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar11,1,(MethodInfo *)0x0);
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
code_?:
  func_?();
code_?:
  func_?(unaff_EDI,(short)unaff_EBX);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg_Update
               (GizmoMenuNg *this,MethodInfo *method)

{
  GizmoMenuNg_SetToScreenPoint(this,(MethodInfo *)0x0);
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                    (KeyCode__Enum_Q,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  bVar1 = GizmoMenuNg_CanClone(in_stack_2,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = GizmoMenuNg_CanCloneRoot(in_stack_2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    GizmoMenuNg_CloneRoot(in_stack_2,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c);
    cRam_? = '\x01';
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)in_stack_2,(MethodInfo *)0x0);
  if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction =
       TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0
  ;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9
    ;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c___Clone_b__31_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg____c->static_fields->__9__31_0 =
         callbackFunction;
    pGVar3 = (GameObject *)&UNK_?;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar3,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)in_stack_2,(MethodInfo *)0x0);
  callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
  if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
               (Object *)in_stack_2,
               MethodInfo__UGUI__Desktop__Scripts__EditMode__Gizmo__GizmoMenuNg___Clone_b__31_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
              );
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateRotationText() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg_UpdateRotationText(GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).useRotationTexts == 0) {
    return;
  }
  pMVar1 = (this->fields).worldObjectClient;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    puVar2 = (undefined4 *)
             (*(pMVar1->klass->vtable).get_Rotation.methodPtr)
                       (auStack_3,pMVar1,(pMVar1->klass->vtable).get_Rotation.method);
    uStack_4 = *puVar2;
    uStack_5 = *(undefined8 *)(puVar2 + 1);
    uStack_6 = puVar2[3];
    puVar7 = (undefined8 *)func_?(auStack_8,&uStack_4,0);
    pTVar9 = (this->fields).xRotationText;
    uStack_5 = *puVar7;
    uStack_6 = *(undefined4 *)(puVar7 + 1);
    IStack_10.m_value = func_?((undefined4)uStack_5,0);
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_10,(MethodInfo *)0x0);
    pSVar12 = ::StringLiteral__;
    if (pSVar11 != (String *)0x0) {
      pSVar12 = pSVar11;
    }
    if (pTVar9 != (Text *)0x0) {
      (*(pTVar9->klass->vtable).set_text.methodPtr)
                (pTVar9,pSVar12,(pTVar9->klass->vtable).set_text.method);
      pTVar9 = (this->fields).yRotationText;
      IStack_10.m_value = func_?(uStack_5._4_4_,0);
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_10,(MethodInfo *)0x0);
      pSVar12 = ::StringLiteral__;
      if (pSVar11 != (String *)0x0) {
        pSVar12 = pSVar11;
      }
      if (pTVar9 != (Text *)0x0) {
        (*(pTVar9->klass->vtable).set_text.methodPtr)
                  (pTVar9,pSVar12,(pTVar9->klass->vtable).set_text.method);
        pTVar9 = (this->fields).zRotationText;
        IStack_10.m_value = func_?(uStack_6,0);
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_10,(MethodInfo *)0x0);
        pSVar12 = ::StringLiteral__;
        if (pSVar11 != (String *)0x0) {
          pSVar12 = pSVar11;
        }
        if (pTVar9 != (Text *)0x0) {
          (*(pTVar9->klass->vtable).set_text.methodPtr)
                    (pTVar9,pSVar12,(pTVar9->klass->vtable).set_text.method);
          return;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void <Clone>b__31_1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::
     GizmoMenuNg__Clone_b__31_1
               (GizmoMenuNg *this,ICloneHandler *handler,BaseEventData *data,MethodInfo *method)

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


/* GizmoMenuNg() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoMenuNg::GizmoMenuNg__ctor
               (GizmoMenuNg *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__HashSet__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<GizmoAction>);
    func_?(&
                    TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>
                   );
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<GizmoAction>);
  if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (pHVar1,MethodInfo__System__Collections__Generic__HashSet<GizmoAction>__HashSet__);
    (this->fields).subscriberActions = (HashSet_1_GizmoAction_ *)pHVar1;
    func_?(&(this->fields).subscriberActions,pHVar1);
    pHVar1 = (HashSet_1_UnityEngine_Vector3_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>
                            );
    if (pHVar1 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3___ctor
                (pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::WorldObjectType>__HashSet__
                );
      (this->fields).xyzLockedItems = (HashSet_1_MV_WorldObject_WorldObjectType_ *)pHVar1;
      func_?(&(this->fields).xyzLockedItems,pHVar1);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

