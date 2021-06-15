
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup+<OnShow>c__AnonStorey0::
     FirstTimeActivatableEditToolPopup_OnShow_c_AnonStorey0___m__0
               (FirstTimeActivatableEditToolPopup_OnShow_c_AnonStorey0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    x_00 = (Object_1 *)func_?(7,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    pFVar1 = (this->fields)._this;
    if (pFVar1 != (FirstTimeActivatableEditToolPopup *)0x0) {
      y_00 = (pFVar1->fields).stackParent;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x_00,(Object_1 *)y_00,(MethodInfo *)0x0);
      (this->fields).blocked = bVar2;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

