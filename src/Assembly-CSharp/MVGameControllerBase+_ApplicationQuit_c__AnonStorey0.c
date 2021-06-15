
/* Void <>m__0() */

void Assembly-CSharp.dll::MVGameControllerBase+<ApplicationQuit>c__AnonStorey0::
     MVGameControllerBase_ApplicationQuit_c_AnonStorey0___m__0
               (MVGameControllerBase_ApplicationQuit_c_AnonStorey0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
              (pMVar1,(this->fields).applicationQuitObject,(pMVar1->klass->vtable).CleanUp.methodPtr
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

