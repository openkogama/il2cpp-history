
/* Void <Initialize>b__0() */

void Assembly-CSharp.dll::TabMenuButtonAccessory+<>c__DisplayClass11_0::
     TabMenuButtonAccessory_c_DisplayClass11_0__Initialize_b__0
               (TabMenuButtonAccessory_c_DisplayClass11_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ITabSelected>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ITabSelected>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ITabSelected>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__1_UnityEngine__EventSystems__ITabSelected__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  if (this_00 != (TabMenuButtonAccessory *)0x0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)(this->fields).__9__1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ITabSelected>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
                 MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__1_UnityEngine__EventSystems__ITabSelected__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      (this->fields).__9__1 = (ExecuteEvents_EventFunction_1_ITabSelected_ *)callbackFunction;
      func_?(&(this->fields).__9__1,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::ITabSelected>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::ITabSelected>_
              );
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Initialize>b__1(ITabSelected, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory+<>c__DisplayClass11_0::
     TabMenuButtonAccessory_c_DisplayClass11_0__Initialize_b__1
               (TabMenuButtonAccessory_c_DisplayClass11_0 *this,ITabSelected *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__ITabSelected;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (ITabSelected *)0x0) {
    ppIStack_1 = (ITabSelected__Class **)(this->fields).tabId;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__ITabSelected;
    func_?(0);
    return;
  }
  ppIStack_1 = (ITabSelected__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

