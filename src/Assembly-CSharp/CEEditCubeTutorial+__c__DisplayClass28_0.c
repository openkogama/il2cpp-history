
/* Void <Exit>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial+<>c__DisplayClass28_0::
     CEEditCubeTutorial_c_DisplayClass28_0__Exit_b__0
               (CEEditCubeTutorial_c_DisplayClass28_0 *this,IModalPopupCreator *handler,
               BaseEventData *data,MethodInfo *method)

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
                  (this->fields).err,StringLiteral_Error);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

