
/* Void ExecuteToggleState(Boolean, UnityAction`1[System.Boolean]) */

void Assembly-CSharp.dll::ToggleHandlerTest::ToggleHandlerTest_ExecuteToggleState
               (ToggleHandlerTest *this,bool toggleState,
               UnityAction_1_System_Boolean_ *toggleCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggle_is_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (toggleCallback == (UnityAction_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(toggleCallback->fields)._._.invoke_impl)((toggleCallback->fields)._._.method_code,toggleState);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = StringLiteral_False;
  if (toggleState != 0) {
    pSVar2 = StringLiteral_True;
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Toggle_is_,pSVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,3,pSVar2);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

