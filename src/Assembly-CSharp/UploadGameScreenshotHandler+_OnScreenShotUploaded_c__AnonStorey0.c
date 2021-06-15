
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::UploadGameScreenshotHandler+<OnScreenShotUploaded>c__AnonStorey0::
     UploadGameScreenshotHandler_OnScreenShotUploaded_c_AnonStorey0___m__0
               (UploadGameScreenshotHandler_OnScreenShotUploaded_c_AnonStorey0 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).text;
  pSVar2 = TM::TM__(StringLiteral_Screenshot_upload,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar7 = &(&(x->klass->vtable).Create_3)[pIVar4->interfaceOffsets[uVar5].offset].method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*(code *)*ppMVar7)(x,pSVar1,pSVar2,ppMVar7[1]);
  return;
}

