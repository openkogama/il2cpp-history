
/* Void <SetAmount>b__0() */

void Assembly-CSharp.dll::LevelDisplayCube+<>c__DisplayClass7_0::
     LevelDisplayCube_c_DisplayClass7_0__SetAmount_b__0
               (LevelDisplayCube_c_DisplayClass7_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__BadgeManager);
    func_?(&
                    MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  level = (this->fields).levelAmount;
  pLVar1 = (this->fields).__4__this;
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)pLVar1,
             MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__BadgeManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BadgeManager);
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  pLVar1 = (this->fields).__4__this;
  if (pLVar1 != (LevelDisplayCube *)0x0) {
    (pLVar1->fields).waitingForBadgeTexture = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

