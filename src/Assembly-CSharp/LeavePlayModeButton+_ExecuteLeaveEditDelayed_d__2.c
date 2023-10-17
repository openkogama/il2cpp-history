
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>d__2::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2_MoveNext
               (LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__LeavePlayModeButton____c___ExecuteLeaveEditDelayed_b__2_0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__LeavePlayModeButton____c);
    cRam_? = '\x01';
  }
  pLVar1 = this;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    this = (LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pLVar1->fields).__2__current = pOVar3;
    func_?(&(pLVar1->fields).__2__current,pOVar3);
    (pLVar1->fields).__1__state = 1;
    return 1;
  }
  if (iVar2 == 1) {
    (this->fields).__1__state = -1;
    this = (LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pLVar1->fields).__2__current = pOVar3;
    func_?(&(pLVar1->fields).__2__current,pOVar3);
    (pLVar1->fields).__1__state = 2;
    return 1;
  }
  if (iVar2 != 2) {
    return 0;
  }
  this_00 = (this->fields).__4__this;
  (this->fields).__1__state = -1;
  if (this_00 != (LeavePlayModeButton *)0x0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__LeavePlayModeButton____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__LeavePlayModeButton____c);
    }
    callbackFunction = TypeInfo__LeavePlayModeButton____c->static_fields->__9__2_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)0x0) {
      if ((TypeInfo__LeavePlayModeButton____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__LeavePlayModeButton____c);
      }
      object = TypeInfo__LeavePlayModeButton____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__LeavePlayModeButton____c___ExecuteLeaveEditDelayed_b__2_0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__LeavePlayModeButton____c->static_fields->__9__2_0 = callbackFunction;
      func_?(&TypeInfo__LeavePlayModeButton____c->static_fields->__9__2_0,callbackFunction)
      ;
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
              );
    return 0;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>d__2::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2_System_Collections_IEnumerator_Reset
               (LeavePlayModeButton_ExecuteLeaveEditDelayed_d_2 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_d__2__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

