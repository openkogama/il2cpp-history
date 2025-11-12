
/* Void <OpenSettings>b__0() */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass5_0::
     ThemeMenuController_c_DisplayClass5_0__OpenSettings_b__0
               (ThemeMenuController_c_DisplayClass5_0 *this,MethodInfo *method)

{
  pTVar1 = (this->fields).theme;
  if ((pTVar1 != (Theme *)0x0) &&
     (pSVar2 = (pTVar1->fields)._Settings_k__BackingField, pSVar2 != (SettingsWrapper *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar2->klass->vtable).__unknown.methodPtr)(pSVar2,(pSVar2->klass->vtable).__unknown.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OpenSettings>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<>c__DisplayClass5_0::
     ThemeMenuController_c_DisplayClass5_0__OpenSettings_b__1
               (ThemeMenuController_c_DisplayClass5_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settings;
  if (this_00 != (ThemeSettingsMenu *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

