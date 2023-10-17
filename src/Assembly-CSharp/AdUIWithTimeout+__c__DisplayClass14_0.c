
/* Void <PopInterstitial>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AdUIWithTimeout+<>c__DisplayClass14_0::
     AdUIWithTimeout_c_DisplayClass14_0__PopInterstitial_b__0
               (AdUIWithTimeout_c_DisplayClass14_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    x_00 = (Object_1 *)func_?(7,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    pAVar1 = (this->fields).__4__this;
    if (pAVar1 != (AdUIWithTimeout *)0x0) {
      y_00 = (pAVar1->fields).overlayPushedToStack;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x_00,(Object_1 *)y_00,(MethodInfo *)0x0);
      (this->fields).stackBlocked = bVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

