
/* Void Execute() */

void Assembly-CSharp.dll::EnterPlayModeButton::EnterPlayModeButton_Execute
               (EnterPlayModeButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__EnterPlayModeButton____c___Execute_b__1_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__EnterPlayModeButton____c);
    cRam_? = '\x01';
  }
  if ((this->fields).enteringPlayMode != (Action *)0x0) {
    pAVar1 = (this->fields).enteringPlayMode;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__EnterPlayModeButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__EnterPlayModeButton____c);
  }
  callbackFunction = TypeInfo__EnterPlayModeButton____c->static_fields->__9__1_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
    if ((TypeInfo__EnterPlayModeButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__EnterPlayModeButton____c);
    }
    object = TypeInfo__EnterPlayModeButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IEditModeController_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditModeController_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__EnterPlayModeButton____c___Execute_b__1_0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__EnterPlayModeButton____c->static_fields->__9__1_0 = callbackFunction;
    func_?(&TypeInfo__EnterPlayModeButton____c->static_fields->__9__1_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
            );
  return;
}

