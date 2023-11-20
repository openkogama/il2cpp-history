
/* Void <OpenSettings>b__0() */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass5_0::
     ThemeMenuController_c_DisplayClass5_0__OpenSettings_b__0
               (ThemeMenuController_c_DisplayClass5_0 *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pTVar2 = (this->fields).theme;
  if ((pTVar2 != (Theme *)0x0) &&
     (pSStack_3 = (pTVar2->fields)._Settings_k__BackingField, pSStack_3 != (SettingsWrapper *)0x0))
  {
    pIStack_1 = pSStack_3->klass[1]._0.image;
    (*(code *)(pSStack_3->klass->vtable).__unknown.method)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OpenSettings>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass5_0::
     ThemeMenuController_c_DisplayClass5_0__OpenSettings_b__1
               (ThemeMenuController_c_DisplayClass5_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settings;
  if (this_00 != (ThemeSettingsMenu *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,6,
                      (this->fields).commitChanges,4);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

