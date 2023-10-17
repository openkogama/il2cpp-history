
/* Void <ShowLockedTierPurchase>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleMenu+<>c__DisplayClass57_0::
     SpawnRoleMenu_c_DisplayClass57_0__ShowLockedTierPurchase_b__0
               (SpawnRoleMenu_c_DisplayClass57_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierLockedPopup;
  if (this_00 != (TierLockedDetailsPopup *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      pIStack_1 = x;
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack);
      return;
    }
  }
  uVar2 = func_?(&pIStack_1);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

