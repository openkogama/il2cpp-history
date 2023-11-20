
/* Void <ShowThemeRemovalWarning>b__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<>c__DisplayClass23_0::
     ThemeSelection_c_DisplayClass23_0__ShowThemeRemovalWarning_b__0
               (ThemeSelection_c_DisplayClass23_0 *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    func_?(&
                    MethodInfo__ThemeSelection__OnThemeRemovalWarningResolved_bool__ConfirmationPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    func_?(&StringLiteral_Theme_removal);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).msg;
  object = (this->fields).__4__this;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)object,
             MethodInfo__ThemeSelection__OnThemeRemovalWarningResolved_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Theme_removal,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

