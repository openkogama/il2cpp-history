
/* Void <DisplaySkyboxWarning>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c__DisplayClass16_0::
     ThemePreviewSettingsMenu_c_DisplayClass16_0__DisplaySkyboxWarning_b__0
               (ThemePreviewSettingsMenu_c_DisplayClass16_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ThemePreviewSettingsMenu__OnSkyboxWarningResolved_bool__ConfirmationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Theme_activation);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (this->fields).__4__this;
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
  UnityAction_2_System_Boolean_System_Object___ctor
            (this_00,(Object *)object,
             MethodInfo__ThemePreviewSettingsMenu__OnSkyboxWarningResolved_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

