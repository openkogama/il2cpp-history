
/* Void <ApplicationQuit>b__0() */

void Assembly-CSharp.dll::MVGameControllerBase+<>c__DisplayClass181_0::
     MVGameControllerBase_c_DisplayClass181_0__ApplicationQuit_b__0
               (MVGameControllerBase_c_DisplayClass181_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->klass->vtable).__unknown_2.methodPtr)
              (pMVar1,(this->fields).applicationQuitObject,
               (pMVar1->klass->vtable).__unknown_2.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

