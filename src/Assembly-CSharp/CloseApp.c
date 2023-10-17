
/* Void Close() */

void Assembly-CSharp.dll::CloseApp::CloseApp_Close(CloseApp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__CloseApp____c___Close_b__1_0_bool__ConfirmationPopup_);
    func_?(&
                    MethodInfo__CloseApp____c__DisplayClass1_0___Close_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CloseApp____c__DisplayClass1_0);
    func_?(&TypeInfo__CloseApp____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__CloseApp____c__DisplayClass1_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if ((TypeInfo__CloseApp____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CloseApp____c);
    }
    this_00 = (Object__Class *)TypeInfo__CloseApp____c->static_fields->__9__1_0;
    if (this_00 == (Object__Class *)0x0) {
      if ((TypeInfo__CloseApp____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CloseApp____c);
      }
      object = TypeInfo__CloseApp____c->static_fields->__9;
      this_00 = (Object__Class *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>)
      ;
      if (this_00 == (Object__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]
      ::UnityAction_2_System_Boolean_System_Object___ctor
                ((UnityAction_2_System_Boolean_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__CloseApp____c___Close_b__1_0_bool__ConfirmationPopup_,(MethodInfo *)0x0
                );
      TypeInfo__CloseApp____c->static_fields->__9__1_0 =
           (UnityAction_2_System_Boolean_ConfirmationPopup_ *)this_00;
      func_?(&TypeInfo__CloseApp____c->static_fields->__9__1_0,this_00);
    }
    value[1].klass = this_00;
    func_?(value + 1,this_00);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__CloseApp____c__DisplayClass1_0___Close_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

