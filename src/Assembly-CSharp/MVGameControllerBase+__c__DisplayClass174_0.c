
/* Void <ApplicationQuit>b__0() */

void Assembly-CSharp.dll::MVGameControllerBase+<>c__DisplayClass174_0::
     MVGameControllerBase_c_DisplayClass174_0__ApplicationQuit_b__0
               (MVGameControllerBase_c_DisplayClass174_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)&TypeInfo__MVGameControllerBase;
    func_?();
    cRam_? = '\x01';
  }
  pMStack_2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMStack_2 != (MVGameControllerBase *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).__unknown_2.method;
    pQStack_3 = (this->fields).applicationQuitObject;
    (*(pMStack_2->klass->vtable).__unknown_2.methodPtr)();
    return;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

