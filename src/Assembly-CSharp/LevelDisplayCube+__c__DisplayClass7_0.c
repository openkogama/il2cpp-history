
/* Void <SetAmount>b__0() */

void Assembly-CSharp.dll::LevelDisplayCube+<>c__DisplayClass7_0::
     LevelDisplayCube_c_DisplayClass7_0__SetAmount_b__0
               (LevelDisplayCube_c_DisplayClass7_0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  level = (this->fields).levelAmount;
  pLVar1 = (this->fields).__4__this;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)pLVar1,
             MethodInfo__LevelDisplayCube__OnBadgeTextureReceived_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  BadgeManager::BadgeManager_GetBadgeTexture
            (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  pLVar1 = (this->fields).__4__this;
  if (pLVar1 != (LevelDisplayCube *)0x0) {
    (pLVar1->fields).waitingForBadgeTexture = 0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

