
/* Void <Initialize>b__0() */

void Assembly-CSharp.dll::ThemeSettingsMenu+<>c__DisplayClass2_0::
     ThemeSettingsMenu_c_DisplayClass2_0__Initialize_b__0
               (ThemeSettingsMenu_c_DisplayClass2_0 *this,MethodInfo *method)

{
  menuController = (this->fields).menuController;
  if (menuController != (ThemeMenuController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                     );
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                     );
      func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      func_?(&
                      ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                     );
      in_stack_1 = &TypeInfo__UnityEngine__Object;
      func_?();
      func_?(&
                      MethodInfo__ThemeMenuController____c__DisplayClass4_0___OpenSelection_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
      func_?(&TypeInfo__ThemeMenuController____c__DisplayClass4_0);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__ThemeMenuController____c__DisplayClass4_0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    original = (menuController->fields).selectionPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar2 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        ThemeSelection_MethodInfo__UnityEngine__Object__Instantiate<ThemeSelection>_ThemeSelection_
                       );
    if (value != (Object *)0x0) {
      value[1].klass = pOVar2;
      func_?(value + 1,pOVar2);
      if (value[1].klass != (Object__Class *)0x0) {
        ThemeSelection::ThemeSelection_InitializeWithBackButton
                  ((ThemeSelection *)value[1].klass,menuController,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)menuController,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__ThemeMenuController____c__DisplayClass4_0___OpenSelection_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

