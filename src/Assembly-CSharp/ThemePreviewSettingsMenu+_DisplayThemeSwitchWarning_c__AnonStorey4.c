
/* Void <>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ThemePreviewSettingsMenu+<DisplayThemeSwitchWarning>c__AnonStorey4::
     ThemePreviewSettingsMenu_DisplayThemeSwitchWarning_c_AnonStorey4___m__0
               (ThemePreviewSettingsMenu_DisplayThemeSwitchWarning_c_AnonStorey4 *this,
               IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

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
             MethodInfo__ThemePreviewSettingsMenu__OnThemeSwitchWarningResolved_bool__ConfirmationPopup_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>__UnityAction_System__Object__void__
            );
  if (x != (IModalPopupCreator *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,pSVar1,this_00,
                    StringLiteral_Theme_activation);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

