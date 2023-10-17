
/* Void Execute() */

void Assembly-CSharp.dll::MaterialButton::MaterialButton_Execute
               (MaterialButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__MaterialButton____c___Execute_b__0_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialButton____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__MaterialButton____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MaterialButton____c);
  }
  callbackFunction = TypeInfo__MaterialButton____c->static_fields->__9__0_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IHandleMaterial_ *)0x0) {
    if ((TypeInfo__MaterialButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MaterialButton____c);
    }
    object = TypeInfo__MaterialButton____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleMaterial_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IHandleMaterial_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__MaterialButton____c___Execute_b__0_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__MaterialButton____c->static_fields->__9__0_0 = callbackFunction;
    func_?(&TypeInfo__MaterialButton____c->static_fields->__9__0_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
            );
  return;
}

