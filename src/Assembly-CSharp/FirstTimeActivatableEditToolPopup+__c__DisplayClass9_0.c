
/* Void <OnShow>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatableEditToolPopup+<>c__DisplayClass9_0::
     FirstTimeActivatableEditToolPopup_c_DisplayClass9_0__OnShow_b__0
               (FirstTimeActivatableEditToolPopup_c_DisplayClass9_0 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    x_00 = (Object_1 *)func_?(7,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    pFVar1 = (this->fields).__4__this;
    if (pFVar1 != (FirstTimeActivatableEditToolPopup *)0x0) {
      y_00 = (pFVar1->fields).stackParent;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        (x_00,(Object_1 *)y_00,(MethodInfo *)0x0);
      (this->fields).blocked = bVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

