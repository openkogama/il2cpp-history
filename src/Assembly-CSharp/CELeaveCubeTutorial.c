
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CELeaveCubeTutorial::CELeaveCubeTutorial_Enter
               (CELeaveCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__CELeaveCubeTutorial____c___Enter_b__0_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CELeaveCubeTutorial____c);
    cRam_? = '\x01';
  }
  ESStateBase::ESStateBase_Enter((ESStateBase *)this,e,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    root = (e->fields).gameObject;
    if ((TypeInfo__CELeaveCubeTutorial____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CELeaveCubeTutorial____c);
    }
    callbackFunction = TypeInfo__CELeaveCubeTutorial____c->static_fields->__9__0_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarSetBodyGroup_ *)0x0) {
      if ((TypeInfo__CELeaveCubeTutorial____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CELeaveCubeTutorial____c);
      }
      object = TypeInfo__CELeaveCubeTutorial____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IAvatarSetBodyGroup_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__CELeaveCubeTutorial____c___Enter_b__0_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__CELeaveCubeTutorial____c->static_fields->__9__0_0 = callbackFunction;
      func_?(&TypeInfo__CELeaveCubeTutorial____c->static_fields->__9__0_0,callbackFunction)
      ;
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

