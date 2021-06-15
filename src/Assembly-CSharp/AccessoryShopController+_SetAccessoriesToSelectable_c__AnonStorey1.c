
/* Void <>m__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<SetAccessoriesToSelectable>c__AnonStorey1::
     AccessoryShopController_SetAccessoriesToSelectable_c_AnonStorey1___m__0
               (AccessoryShopController_SetAccessoriesToSelectable_c_AnonStorey1 *this,
               IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController___SetAccessoriesToSelectable_c__AnonStorey1____m__1_MVBody_
             ,MethodInfo__System__Action<MVBody>__Action_System__Object__void__);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

