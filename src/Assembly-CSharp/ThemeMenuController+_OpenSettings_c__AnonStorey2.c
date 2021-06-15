
/* Void <>m__0() */

void Assembly-CSharp.dll::ThemeMenuController+<OpenSettings>c__AnonStorey2::
     ThemeMenuController_OpenSettings_c_AnonStorey2___m__0
               (ThemeMenuController_OpenSettings_c_AnonStorey2 *this,MethodInfo *method)

{
  pTVar1 = (this->fields).theme;
  if ((pTVar1 != (Theme *)0x0) &&
     (pSVar2 = (pTVar1->fields)._Settings_k__BackingField, pSVar2 != (SettingsWrapper *)0x0)) {
    (*(code *)(pSVar2->klass->vtable).__unknown.method)(pSVar2,pSVar2->klass[1]._0.image);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<OpenSettings>c__AnonStorey2::
     ThemeMenuController_OpenSettings_c_AnonStorey2___m__1
               (ThemeMenuController_OpenSettings_c_AnonStorey2 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settings;
  if (this_00 != (ThemeSettingsMenu *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,6,
                      (this->fields).commitChanges,4);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

