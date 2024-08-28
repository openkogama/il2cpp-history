
/* Boolean CanClone() */

bool Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CanClone(GizmoMenu *this,MethodInfo *method)

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

bool Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CanCloneRoot(GizmoMenu *this,MethodInfo *method)

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


/* Void ChangeRotationMode(RotationMode, GizmoRotationModeButton) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationMode
               (GizmoMenu *this,RotationMode__Enum mode,GizmoRotationModeButton *highlight,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__System__Nullable<RotationMode>__Nullable_RotationMode_);
    func_?(&
                    MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GizmoMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GizmoMenu____c);
  }
  callbackFunction = TypeInfo__GizmoMenu____c->static_fields->__9__28_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)0x0) {
    if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IGizmoHandler_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GizmoMenu____c___ChangeRotationMode_b__28_0_IGizmoHandler__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__28_0 = callbackFunction;
    func_?(&TypeInfo__GizmoMenu____c->static_fields->__9__28_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IGizmoHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IGizmoHandler>_
            );
  NStack_1.hasValue = 0;
  NStack_1._1_3_ = 0;
  NStack_1.value = 0;
  mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
            (&NStack_1,mode,MethodInfo__System__Nullable<RotationMode>__Nullable_RotationMode_);
  NVar2 = NStack_1;
  (this->fields).rotationMode.hasValue = NStack_1.hasValue;
  *(undefined3 *)&(this->fields).rotationMode.field_0x1 = NStack_1._1_3_;
  pGVar3 = (this->fields).xRotation;
  (this->fields).rotationMode.value = NStack_1.value;
  NStack_1 = NVar2;
  if (pGVar3 != (GizmoRotationModeButton *)0x0) {
    UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
    GizmoRotationModeButton_ResetColors(pGVar3,(MethodInfo *)0x0);
    pGVar3 = (this->fields).yRotation;
    if (pGVar3 != (GizmoRotationModeButton *)0x0) {
      UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
      GizmoRotationModeButton_ResetColors(pGVar3,(MethodInfo *)0x0);
      this_00 = (this->fields).zRotation;
      if (this_00 != (GizmoRotationModeButton *)0x0) {
        UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
        GizmoRotationModeButton_ResetColors(this_00,(MethodInfo *)0x0);
        if (pGVar3 != (GizmoRotationModeButton *)0x0) {
          UGUI::Desktop::Scripts::EditMode::Gizmo::GizmoRotationModeButton::
          GizmoRotationModeButton_Highlight(pGVar3,(MethodInfo *)0x0);
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


/* Void ChangeRotationModeToX() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationModeToX
               (GizmoMenu *this,MethodInfo *method)

{
  GizmoMenu_ChangeRotationMode(this,RotationMode__Enum_X,(this->fields).xRotation,(MethodInfo *)0x0)
  ;
  return;
}


/* Void ChangeRotationModeToY() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationModeToY
               (GizmoMenu *this,MethodInfo *method)

{
  GizmoMenu_ChangeRotationMode(this,RotationMode__Enum_Y,(this->fields).yRotation,(MethodInfo *)0x0)
  ;
  return;
}


/* Void ChangeRotationModeToZ() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_ChangeRotationModeToZ
               (GizmoMenu *this,MethodInfo *method)

{
  GizmoMenu_ChangeRotationMode(this,RotationMode__Enum_Z,(this->fields).zRotation,(MethodInfo *)0x0)
  ;
  return;
}


/* Void Clone() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Clone(GizmoMenu *this,MethodInfo *method)

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
                    MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GizmoMenu____c);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GizmoMenu____c);
  }
  callbackFunction = TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__21_0 = callbackFunction;
    func_?(&TypeInfo__GizmoMenu____c->static_fields->__9__21_0,callbackFunction);
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
             MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,callbackFunction_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
            );
  return;
}


/* Void CloneRoot() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_CloneRoot(GizmoMenu *this,MethodInfo *method)

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
                    MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GizmoMenu____c__DisplayClass22_0);
    func_?(&TypeInfo__GizmoMenu____c);
    cRam_? = '\x01';
  }
  this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__GizmoMenu____c__DisplayClass22_0);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GizmoMenu____c);
  }
  callbackFunction = TypeInfo__GizmoMenu____c->static_fields->__9__22_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GizmoMenu____c___CloneRoot_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__22_0 = callbackFunction;
    func_?(&TypeInfo__GizmoMenu____c->static_fields->__9__22_0,callbackFunction);
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMStack1 =
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                   (this_01,(this->fields).woID,(MethodInfo *)0x0);
    if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      pUStack2 = &this_00->fields;
      (pUStack2->_)._defaultValue_k__BackingField = (List_1_System_Object_ *)pMStack1;
      func_?();
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this_00
                 ,
                 MethodInfo__GizmoMenu____c__DisplayClass22_0___CloneRoot_b__1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
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


/* Void HandleCloningHotkey() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_HandleCloningHotkey
               (GizmoMenu *this,MethodInfo *method)

{
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                    (KeyCode__Enum_Q,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = GizmoMenu_CanClone(this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = GizmoMenu_CanCloneRoot(this,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        GizmoMenu_CloneRoot(this,(MethodInfo *)0x0);
        return;
      }
    }
    else {
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
                        MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&
                        MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__GizmoMenu____c);
        cRam_? = '\x01';
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__GizmoMenu____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GizmoMenu____c->static_fields->__9__21_0 = callbackFunction;
        pGVar2 = (GameObject *)&TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
        func_?(pGVar2,callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
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
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,(Object *)this,
                 MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                );
    }
  }
  return;
}


/* Void Initialize(Int32, Vector3, EditorStateMachine) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Initialize
               (GizmoMenu *this,int32_t id,Vector3 wp,EditorStateMachine *esm,MethodInfo *method)

{
  ppEVar1 = &(this->fields).editorStateMachine;
  (this->fields).woID = id;
  *ppEVar1 = esm;
  func_?(ppEVar1,esm);
  (this->fields).worldPosition.x = wp.x;
  (this->fields).worldPosition.y = wp.y;
  (this->fields).worldPosition.z = wp.z;
  GizmoMenu_Setup(this,(MethodInfo *)0x0);
  GizmoMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_OnDestroy(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  woID = (this->fields).woID;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             (MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_UnsubscribeWODestroyedEvent
              (this_00,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PopWoDestroyed(Object, WorldObjectDestroyedEventArgs) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_PopWoDestroyed
               (GizmoMenu *this,Object *obj,WorldObjectDestroyedEventArgs *args,MethodInfo *method)

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
                    MethodInfo__GizmoMenu____c___Pop_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GizmoMenu____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GizmoMenu____c);
  }
  callbackFunction = TypeInfo__GizmoMenu____c->static_fields->__9__18_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GizmoMenu____c);
    }
    object = TypeInfo__GizmoMenu____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GizmoMenu____c___Pop_b__18_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GizmoMenu____c->static_fields->__9__18_0 = callbackFunction;
    func_?(&TypeInfo__GizmoMenu____c->static_fields->__9__18_0,callbackFunction);
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


/* Void SetToScreenPoint() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_SetToScreenPoint(GizmoMenu *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Setup(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>);
    func_?(&
                    MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_00 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (pMVar1,(this->fields).woID,(MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClient *)0x0) goto code_?;
  (*(code *)(this_00->klass->vtable).DrawTransformGizmo.method)
            (this_00,(this_00->klass->vtable).OnContextMenu.methodPtr);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  woID = (this->fields).woID;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__GizmoMenu__PopWoDestroyed_System__Object__WorldObjectDestroyedEventArgs_,
             (MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_SubscribeWODestroyedEvent
            (pMVar1,woID,(Action_2_Object_WorldObjectDestroyedEventArgs_ *)this_01,(MethodInfo *)0x0
            );
  bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_00,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
  value = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_00,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
  bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_00,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
  pGVar4 = (this->fields).rotate;
  if (pGVar4 == (GizmoButton *)0x0) goto code_?;
  value_00 = bVar3;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pGVar4,(MethodInfo *)0x0);
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,bVar3 | value | bVar2,(MethodInfo *)0x0);
  pGVar6 = (this->fields).xRotation;
  if (pGVar6 == (GizmoRotationModeButton *)0x0) goto code_?;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pGVar6,(MethodInfo *)0x0);
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,bVar2,(MethodInfo *)0x0);
  pGVar6 = (this->fields).yRotation;
  if (pGVar6 == (GizmoRotationModeButton *)0x0) goto code_?;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pGVar6,(MethodInfo *)0x0);
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,value,(MethodInfo *)0x0);
  pGVar6 = (this->fields).zRotation;
  if (pGVar6 == (GizmoRotationModeButton *)0x0) goto code_?;
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pGVar6,(MethodInfo *)0x0);
  if (pGVar5 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar5,value_00,(MethodInfo *)0x0);
  if (value == 0) {
    if (bVar2 != 0) {
      pGVar6 = (this->fields).xRotation;
      mode = RotationMode__Enum_X;
      goto code_?;
    }
    if (bVar3 != 0) {
      pGVar6 = (this->fields).zRotation;
      mode = RotationMode__Enum_Z;
      goto code_?;
    }
  }
  else {
    pGVar6 = (this->fields).yRotation;
    mode = RotationMode__Enum_Y;
code_?:
    GizmoMenu_ChangeRotationMode(this,mode,pGVar6,(MethodInfo *)0x0);
  }
  bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                    (this_00,InteractionFlags__Enum_NotTranslatbleXZ,(MethodInfo *)0x0);
  pGVar4 = (this->fields).xzTranslate;
  if (pGVar4 != (GizmoButton *)0x0) {
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pGVar4,(MethodInfo *)0x0);
    if (pGVar5 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar5,bVar2 == 0,(MethodInfo *)0x0);
      bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_00,InteractionFlags__Enum_NotTranslatbleY,(MethodInfo *)0x0);
      pGVar4 = (this->fields).yTranslate;
      if (pGVar4 != (GizmoButton *)0x0) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pGVar4,(MethodInfo *)0x0);
        if (pGVar5 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar5,bVar2 == 0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu_Update(GizmoMenu *this,MethodInfo *method)

{
  GizmoMenu_SetToScreenPoint(this,(MethodInfo *)0x0);
  bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyUp
                    (KeyCode__Enum_Q,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    bVar1 = GizmoMenu_CanClone(in_stack_2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = GizmoMenu_CanCloneRoot(in_stack_2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        GizmoMenu_CloneRoot(in_stack_2,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                       );
        func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        func_?(&
                        MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&
                        MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       );
        func_?(&TypeInfo__GizmoMenu____c);
        cRam_? = '\x01';
      }
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)in_stack_2,(MethodInfo *)0x0);
      if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__GizmoMenu____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__GizmoMenu____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__GizmoMenu____c___Clone_b__21_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GizmoMenu____c->static_fields->__9__21_0 = callbackFunction;
        pGVar3 = (GameObject *)&TypeInfo__GizmoMenu____c->static_fields->__9__21_0;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
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
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                 (Object *)in_stack_2,
                 MethodInfo__GizmoMenu___Clone_b__21_1_UnityEngine__EventSystems__ICloneHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,callbackFunction_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ICloneHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ICloneHandler>_
                );
    }
  }
  return;
}


/* Void <Clone>b__21_1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu::GizmoMenu__Clone_b__21_1
               (GizmoMenu *this,ICloneHandler *handler,BaseEventData *data,MethodInfo *method)

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


/* RotationMode get_RotationMode() */

RotationMode__Enum
Assembly-CSharp.dll::GizmoMenu::GizmoMenu_get_RotationMode(GizmoMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_);
    cRam_? = '\x01';
  }
  RVar1 = mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__GetValueOrDefault_1
                    ((Nullable_1_UInt32_ *)&(this->fields).rotationMode,1,
                     MethodInfo__System__Nullable<RotationMode>__GetValueOrDefault_RotationMode_);
  return RVar1;
}

