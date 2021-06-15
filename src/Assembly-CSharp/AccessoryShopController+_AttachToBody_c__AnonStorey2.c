
/* Void <>m__0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController+<AttachToBody>c__AnonStorey2::
     AccessoryShopController_AttachToBody_c_AnonStorey2___m__0
               (AccessoryShopController_AttachToBody_c_AnonStorey2 *this,IGetCurrentBody *x,
               BaseEventData *y,MethodInfo *method)

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
             MethodInfo__AccessoryShopController___AttachToBody_c__AnonStorey2____m__1_MVBody_,
             MethodInfo__System__Action<MVBody>__Action_System__Object__void__);
  if (x != (IGetCurrentBody *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <>m__1(MVBody) */

void Assembly-CSharp.dll::AccessoryShopController+<AttachToBody>c__AnonStorey2::
     AccessoryShopController_AttachToBody_c_AnonStorey2___m__1
               (AccessoryShopController_AttachToBody_c_AnonStorey2 *this,MVBody *body,
               MethodInfo *method)

{
  this_00 = (this->fields)._this;
  if (this_00 != (AccessoryShopController *)0x0) {
    AccessoryShopController::AccessoryShopController_Attach
              (this_00,body,(this->fields).offset,(this->fields).scale,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

