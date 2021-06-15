
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemeSelection+<ShowThemeRemovalWarning>c__AnonStorey2::
     ThemeSelection_ShowThemeRemovalWarning_c_AnonStorey2___m__0
               (ThemeSelection_ShowThemeRemovalWarning_c_AnonStorey2 *this,IModalPopupCreator *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).msg;
  object = (this->fields)._this;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)object,
             MethodInfo__ThemeSelection__OnThemeRemovalWarningResolved_bool__ConfirmationPopup_,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
            );
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

