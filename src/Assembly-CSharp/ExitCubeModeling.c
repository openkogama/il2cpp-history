
/* Void Exit() */

void Assembly-CSharp.dll::ExitCubeModeling::ExitCubeModeling_Exit
               (ExitCubeModeling *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__ExitCubeModeling____c___Exit_b__0_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ExitCubeModeling____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__ExitCubeModeling____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ExitCubeModeling____c);
  }
  callbackFunction = TypeInfo__ExitCubeModeling____c->static_fields->__9__0_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IHandleCubeModelEdit_ *)0x0) {
    if ((TypeInfo__ExitCubeModeling____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ExitCubeModeling____c);
    }
    object = TypeInfo__ExitCubeModeling____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleCubeModelEdit_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                        );
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IHandleCubeModelEdit_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__ExitCubeModeling____c___Exit_b__0_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ExitCubeModeling____c->static_fields->__9__0_0 = callbackFunction;
    func_?(&TypeInfo__ExitCubeModeling____c->static_fields->__9__0_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
            );
  return;
}

