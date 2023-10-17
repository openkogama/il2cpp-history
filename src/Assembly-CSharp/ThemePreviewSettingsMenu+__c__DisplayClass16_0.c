
/* Void <DisplaySkyboxWarning>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<>c__DisplayClass16_0::
     ThemePreviewSettingsMenu_c_DisplayClass16_0__DisplaySkyboxWarning_b__0
               (ThemePreviewSettingsMenu_c_DisplayClass16_0 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&
                    MethodInfo__ThemePreviewSettingsMenu__OnSkyboxWarningResolved_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Theme_activation);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).msg;
  object = (this->fields).__4__this;
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
    UnityAction_2_System_Boolean_System_Object___ctor
              (this_00,(Object *)object,
               MethodInfo__ThemePreviewSettingsMenu__OnSkyboxWarningResolved_bool__ConfirmationPopup_
               ,(MethodInfo *)0x0);
    TM::TM__(StringLiteral_Theme_activation,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(3,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

