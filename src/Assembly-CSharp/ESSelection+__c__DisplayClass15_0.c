
/* Void <HandleDeleteSelection>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ESSelection+<>c__DisplayClass15_0::
     ESSelection_c_DisplayClass15_0__HandleDeleteSelection_b__0
               (ESSelection_c_DisplayClass15_0 *this,IModalPopupCreator *handler,BaseEventData *data
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (IModalPopupCreator *)0x0) {
    FUN_?(1,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,handler,
                  (this->fields).errorText,StringLiteral_Error);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

