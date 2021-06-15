
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NextLevelRewardNotification::NextLevelRewardNotification_Initialize
               (NextLevelRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = this;
  pTVar2 = (this->fields).levelText;
  (this->fields)._.timeSinceStart = 0.0;
  uStack_3 = 0;
  pSVar4 = TM::TM__(StringLiteral_Level__0__Unlocks,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar5 != (MVNetworkGame *)0x0) {
    pCVar6 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                       ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
    if (pCVar6 != (CelestialParam *)0x0) {
      LevelRewardsManager::LevelRewardsManager_get_NextReward
                ((LevelRewardsManager *)pCVar6,(MethodInfo *)0x0);
      this = (NextLevelRewardNotification *)func_?();
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      mscorlib.dll::System::String::String_Format(pSVar4,arg0,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
        pTVar2 = (pNVar1->fields).goldAmount;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar5 != (MVNetworkGame *)0x0) {
          pCVar6 = DayNightCycle::DayNightCycle_get_CurrentSunParam
                             ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
          if (pCVar6 != (CelestialParam *)0x0) {
            LevelRewardsManager::LevelRewardsManager_get_NextReward
                      ((LevelRewardsManager *)pCVar6,(MethodInfo *)0x0);
            uStack_3 = func_?();
            pSVar4 = (String *)func_?(&uStack_3,0);
            mscorlib.dll::System::String::String_Concat_2
                      (pSVar4,::StringLiteral__,(MethodInfo *)0x0);
            if (pTVar2 != (Text *)0x0) {
              (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* NotificationLifetime get_Lifetime() */

NotificationLifetime__Enum
Assembly-CSharp.dll::NextLevelRewardNotification::NextLevelRewardNotification_get_Lifetime
          (NextLevelRewardNotification *this,MethodInfo *method)

{
  return NotificationLifetime__Enum_SuperHigh;
}

