
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
    func_?(&MethodInfo__CloseApp____c___Close_b__3_0_bool__ConfirmationPopup_);
    func_?(&
                    MethodInfo__CloseApp____c__DisplayClass3_0___Close_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CloseApp____c__DisplayClass3_0);
    func_?(&TypeInfo__CloseApp____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CloseApp____c__DisplayClass3_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if ((TypeInfo__CloseApp____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CloseApp____c);
  }
  this_00 = (Object__Class *)TypeInfo__CloseApp____c->static_fields->__9__3_0;
  if (this_00 == (Object__Class *)0x0) {
    if ((TypeInfo__CloseApp____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CloseApp____c);
    }
    object = TypeInfo__CloseApp____c->static_fields->__9;
    this_00 = (Object__Class *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              ((UnityAction_2_System_Int32_System_Int32_ *)this_00,(Object *)object,
               MethodInfo__CloseApp____c___Close_b__3_0_bool__ConfirmationPopup_,(MethodInfo *)0x0);
    TypeInfo__CloseApp____c->static_fields->__9__3_0 =
         (UnityAction_2_System_Boolean_ConfirmationPopup_ *)this_00;
    func_?(&TypeInfo__CloseApp____c->static_fields->__9__3_0,this_00);
  }
  if (value != (Object *)0x0) {
    value[1].klass = this_00;
    func_?(value + 1,this_00);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__CloseApp____c__DisplayClass3_0___Close_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

