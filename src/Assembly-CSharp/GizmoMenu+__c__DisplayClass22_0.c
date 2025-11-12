
/* Void <CloneRoot>b__1(ICloneHandler, BaseEventData) */

void Assembly-CSharp.dll::GizmoMenu+<>c__DisplayClass22_0::
     GizmoMenu_c_DisplayClass22_0__CloneRoot_b__1
               (GizmoMenu_c_DisplayClass22_0 *this,ICloneHandler *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ICloneHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (handler != (ICloneHandler *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

