
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GameSetupMenu+<ShowMiscOptions>c__AnonStorey4::
     GameSetupMenu_ShowMiscOptions_c_AnonStorey4___m__0
               (GameSetupMenu_ShowMiscOptions_c_AnonStorey4 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).optionsMenu;
  if (this_00 != (GameSetupOptions *)0x0) {
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

