
/* Void <OnScreenShotUploaded>b__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<>c__DisplayClass6_0::
     UploadGameScreenshotHandler_c_DisplayClass6_0__OnScreenShotUploaded_b__2
               (UploadGameScreenshotHandler_c_DisplayClass6_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Screenshot_upload);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).text;
  pSVar2 = TM::TM__(StringLiteral_Screenshot_upload,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,pSVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

