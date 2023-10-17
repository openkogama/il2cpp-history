
/* Void <ReCreate>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsLayout+<>c__DisplayClass9_0::
     PlayerListsLayout_c_DisplayClass9_0__ReCreate_b__2
               (PlayerListsLayout_c_DisplayClass9_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).newPlayerLists;
  if (pPVar1 != (PlayerListsLayout *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar1,(MethodInfo *)0x0);
    pPVar1 = (this->fields).__4__this;
    if ((pPVar1 != (PlayerListsLayout *)0x0) && (x != (IUIStack *)0x0)) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar2,
                      (pPVar1->fields).pushOptions,0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

