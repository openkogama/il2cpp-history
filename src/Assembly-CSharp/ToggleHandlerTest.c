
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleHandlerTest::ToggleHandlerTest_ExecuteToggleState
               (ToggleHandlerTest *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Toggle_is_);
    cRam_? = '\x01';
  }
  if (toggleCallback != (UnityAction_1_System_Boolean_ *)0x0) {
    method_00 = (toggleCallback->fields)._._.method_code;
    (*(toggleCallback->fields)._._.invoke_impl)
              (method_00,_toggleState,(toggleCallback->fields)._._.method);
    pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&toggleState,(IFormatProvider *)0x0,method_00);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Toggle_is_,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      _toggleState = TypeInfo__UnityEngine__Debug;
      func_?();
    }
    _toggleState = (Debug_1__Class *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

