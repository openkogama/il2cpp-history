
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout+<PopInterstitial>c__AnonStorey1::
     AdUIWithTimeout_PopInterstitial_c_AnonStorey1___m__0
               (AdUIWithTimeout_PopInterstitial_c_AnonStorey1 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    x_00 = (Object_1 *)func_?(7,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    pAVar1 = (this->fields)._this;
    if (pAVar1 != (AdUIWithTimeout *)0x0) {
      y_00 = (pAVar1->fields).overlayPushedToStack;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x_00,(Object_1 *)y_00,(MethodInfo *)0x0);
      (this->fields).stackBlocked = bVar2;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

