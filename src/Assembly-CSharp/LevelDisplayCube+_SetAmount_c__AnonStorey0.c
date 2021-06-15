
/* Void <>m__0() */

void Assembly-CSharp.dll::LevelDisplayCube+<SetAmount>c__AnonStorey0::
     LevelDisplayCube_SetAmount_c_AnonStorey0___m__0
               (LevelDisplayCube_SetAmount_c_AnonStorey0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  level = (this->fields).levelAmount;
  pLVar1 = (this->fields)._this;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)pLVar1,
             MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__BadgeManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BadgeManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  pLVar1 = (this->fields)._this;
  if (pLVar1 != (LevelDisplayCube *)0x0) {
    (pLVar1->fields).waitingForBadgeTexture = 0;
    return;
  }
  uStack2 = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

