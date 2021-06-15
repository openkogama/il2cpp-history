
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsLayout+<ReCreate>c__AnonStorey1::
     PlayerListsLayout_ReCreate_c_AnonStorey1___m__0
               (PlayerListsLayout_ReCreate_c_AnonStorey1 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).newPlayerLists;
  if (pPVar1 != (PlayerListsLayout *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    pPVar1 = (this->fields)._this;
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

