
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ThemeMenuController+<OpenThemesMenu>c__AnonStorey0::
     ThemeMenuController_OpenThemesMenu_c_AnonStorey0___m__0
               (ThemeMenuController_OpenThemesMenu_c_AnonStorey0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).menu;
  if (this_00 != (ThemeSelection *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (TypeInfo__ThemeMenuController___OpenThemesMenu_c__AnonStorey0->static_fields->__f__am_cache0
        == (UnityAction *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__ThemeMenuController___OpenThemesMenu_c__AnonStorey0____m__1__,
                 (MethodInfo *)0x0);
      TypeInfo__ThemeMenuController___OpenThemesMenu_c__AnonStorey0->static_fields->__f__am_cache0 =
           (UnityAction *)this_01;
    }
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,1,
                      TypeInfo__ThemeMenuController___OpenThemesMenu_c__AnonStorey0->static_fields->
                      __f__am_cache0,4);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

