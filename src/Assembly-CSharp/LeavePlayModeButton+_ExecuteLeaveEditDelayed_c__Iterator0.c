
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>c__Iterator0::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0_MoveNext
               (LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    this = (LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pLVar1->fields)._current = pOVar3;
    if ((pLVar1->fields)._disposing == 0) {
      (pLVar1->fields)._PC = 1;
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        this_00 = (Component_1 *)(this->fields)._this;
        if (this_00 == (Component_1 *)0x0) {
          func_?(0);
          pcVar4 = (code *)swi(3);
          bVar5 = (*pcVar4)();
          return bVar5;
        }
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         (this_00,(MethodInfo *)0x0);
        if (TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_c__Iterator0->static_fields->
            __f__am_cache0 == (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)0x0) {
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(
                                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>
                                      );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)0x0,
                     MethodInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_c__Iterator0____m__0_ILeaveEditPlayModeHandler__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>__EventFunction_System__Object__void__
                    );
          TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_c__Iterator0->static_fields->
          __f__am_cache0 = (ExecuteEvents_EventFunction_1_ILeaveEditPlayModeHandler_ *)this_01;
        }
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__LeavePlayModeButton___ExecuteLeaveEditDelayed_c__Iterator0->static_fields->
             __f__am_cache0;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ILeaveEditPlayModeHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ILeaveEditPlayModeHandler>_
                  );
        (pLVar1->fields)._PC = -1;
      }
      return 0;
    }
    this = (LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pLVar1->fields)._current = pOVar3;
    if ((pLVar1->fields)._disposing == 0) {
      (pLVar1->fields)._PC = 2;
      return 1;
    }
  }
  return 1;
}


/* Void Reset() */

void Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>c__Iterator0::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0_Reset
               (LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <>m__0(ILeaveEditPlayModeHandler, BaseEventData) */

void Assembly-CSharp.dll::LeavePlayModeButton+<ExecuteLeaveEditDelayed>c__Iterator0::
     LeavePlayModeButton_ExecuteLeaveEditDelayed_c_Iterator0___m__0
               (ILeaveEditPlayModeHandler *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (ILeaveEditPlayModeHandler *)0x0) {
    func_?(0,TypeInfo__ILeaveEditPlayModeHandler,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

