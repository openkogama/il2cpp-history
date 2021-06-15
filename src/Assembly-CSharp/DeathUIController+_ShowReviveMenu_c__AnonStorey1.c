
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DeathUIController+<ShowReviveMenu>c__AnonStorey1::
     DeathUIController_ShowReviveMenu_c_AnonStorey1___m__0
               (DeathUIController_ShowReviveMenu_c_AnonStorey1 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).revivePopup;
  if (this_00 != (ReviveUIHandler *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (TypeInfo__DeathUIController___ShowReviveMenu_c__AnonStorey1->static_fields->__f__am_cache0
        == (UnityAction *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__DeathUIController___ShowReviveMenu_c__AnonStorey1____m__1__,
                 (MethodInfo *)0x0);
      TypeInfo__DeathUIController___ShowReviveMenu_c__AnonStorey1->static_fields->__f__am_cache0 =
           (UnityAction *)this_01;
    }
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,2,
                      TypeInfo__DeathUIController___ShowReviveMenu_c__AnonStorey1->static_fields->
                      __f__am_cache0,2);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1() */

void Assembly-CSharp.dll::DeathUIController+<ShowReviveMenu>c__AnonStorey1::
     DeathUIController_ShowReviveMenu_c_AnonStorey1___m__1(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Revive_Closed,1,(MethodInfo *)0x0);
  return;
}

