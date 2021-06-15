
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<PublishCallback>c__AnonStorey0::
     DesktopCubeModelingController_PublishCallback_c_AnonStorey0___m__0
               (DesktopCubeModelingController_PublishCallback_c_AnonStorey0 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).errorText;
  pSVar2 = TM::TM__(StringLiteral_Error__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,pSVar2);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

