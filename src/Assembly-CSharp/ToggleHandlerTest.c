
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleHandlerTest::ToggleHandlerTest_ExecuteToggleState
               (ToggleHandlerTest *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
    UnityAction_1_System_Boolean__Invoke
              (toggleCallback,toggleState,
               MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    toggleCallback = (UnityAction_1_System_Boolean_ *)CONCAT13(toggleState,toggleCallback._0_3_);
    arg1 = (Object *)func_?(TypeInfo__System__Boolean,(int)&toggleCallback + 3);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Toggle_is_,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

