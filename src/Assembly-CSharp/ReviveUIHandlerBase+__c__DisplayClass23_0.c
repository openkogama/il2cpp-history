
/* Void <OnWatchAdClicked>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBase+<>c__DisplayClass23_0::
     ReviveUIHandlerBase_c_DisplayClass23_0__OnWatchAdClicked_b__0
               (ReviveUIHandlerBase_c_DisplayClass23_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&
                    MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__1__
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (ContinueButtonLockCursor *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)(this->fields).__9__1;
    if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
      this_01 = (NavMesh_OnNavMeshPreUpdate *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction);
      if (this_01 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,
                 MethodInfo__ReviveUIHandlerBase____c__DisplayClass23_0___OnWatchAdClicked_b__1__,
                 (MethodInfo *)0x0);
      (this->fields).__9__1 = (UnityAction *)this_01;
      func_?(&(this->fields).__9__1,this_01);
    }
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,3,this_01,0x20);
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnWatchAdClicked>b__1() */

void Assembly-CSharp.dll::ReviveUIHandlerBase+<>c__DisplayClass23_0::
     ReviveUIHandlerBase_c_DisplayClass23_0__OnWatchAdClicked_b__1
               (ReviveUIHandlerBase_c_DisplayClass23_0 *this,MethodInfo *method)

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
                    MethodInfo__ReviveUIHandlerBase____c___OnWatchAdClicked_b__23_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ReviveUIHandlerBase____c);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (ReviveUIHandlerBase *)0x0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__ReviveUIHandlerBase____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ReviveUIHandlerBase____c);
    }
    callbackFunction = TypeInfo__ReviveUIHandlerBase____c->static_fields->__9__23_2;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__ReviveUIHandlerBase____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ReviveUIHandlerBase____c);
      }
      object = TypeInfo__ReviveUIHandlerBase____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ReviveUIHandlerBase____c___OnWatchAdClicked_b__23_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ReviveUIHandlerBase____c->static_fields->__9__23_2 = callbackFunction;
      func_?(&TypeInfo__ReviveUIHandlerBase____c->static_fields->__9__23_2,callbackFunction
                     );
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
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

