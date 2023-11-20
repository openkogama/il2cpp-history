
/* Void OnClick() */

void Assembly-CSharp.dll::EnterCubeModelTutorial::EnterCubeModelTutorial_OnClick
               (EnterCubeModelTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__EnterCubeModelTutorial____c___OnClick_b__0_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__EnterCubeModelTutorial____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__EnterCubeModelTutorial____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__EnterCubeModelTutorial____c);
  }
  callbackFunction = TypeInfo__EnterCubeModelTutorial____c->static_fields->__9__0_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    if ((TypeInfo__EnterCubeModelTutorial____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__EnterCubeModelTutorial____c);
    }
    object = TypeInfo__EnterCubeModelTutorial____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__EnterCubeModelTutorial____c___OnClick_b__0_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__EnterCubeModelTutorial____c->static_fields->__9__0_0 = callbackFunction;
    func_?(&TypeInfo__EnterCubeModelTutorial____c->static_fields->__9__0_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            );
  return;
}

