
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContinueTierBoostPopup+<ShowTeamSelectionMenu>c__AnonStorey3::
     ContinueTierBoostPopup_ShowTeamSelectionMenu_c_AnonStorey3___m__0
               (ContinueTierBoostPopup_ShowTeamSelectionMenu_c_AnonStorey3 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).newTeamMenu;
  if (this_00 != (TeamMenu *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,6,0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

