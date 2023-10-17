
/* Void <PublishCallback>b__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DesktopCubeModelingController+<>c__DisplayClass8_0::
     DesktopCubeModelingController_c_DisplayClass8_0__PublishCallback_b__3
               (DesktopCubeModelingController_c_DisplayClass8_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&StringLiteral_Error__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).errorText;
  pSVar2 = TM::TM__(StringLiteral_Error__,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,pSVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

