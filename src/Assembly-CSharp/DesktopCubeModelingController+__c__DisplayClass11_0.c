
/* Void <PublishCallback>b__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c__DisplayClass11_0::
     DesktopCubeModelingController_c_DisplayClass11_0__PublishCallback_b__3
               (DesktopCubeModelingController_c_DisplayClass11_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Error__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

