
/* Void <OnScreenShotUploaded>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c__DisplayClass6_0::
     UploadGameScreenshotHandler_c_DisplayClass6_0__OnScreenShotUploaded_b__2
               (UploadGameScreenshotHandler_c_DisplayClass6_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screenshot_upload);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Screenshot_upload,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

