
/* Boolean IsFlagSet(ClientSettingFlags) */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsFlagSet
               (ClientSettingFlags__Enum flag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (TypeInfo__MVClientSettings->static_fields->flags & flag) == flag;
}


/* Boolean IsReviveFlagEnabledForSessionType() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsReviveFlagEnabledForSessionType
               (MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    return (byte)((uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 4
                 ) & 1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 5)
         & 1;
}


/* Boolean get_BoostersEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_BoostersEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x19) & 1;
}


/* ClientSettingFlags get_ClientSettingFlags() */

ClientSettingFlags__Enum
Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ClientSettingFlags(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return TypeInfo__MVClientSettings->static_fields->flags;
}


/* Boolean get_CrazyAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_CrazyAdsEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return *(byte *)((int)&TypeInfo__MVClientSettings->static_fields->flags + 3) & 1;
}


/* Boolean get_EnableSentry() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_EnableSentry(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 1) & 1;
}


/* Boolean get_EnableStathat() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_EnableStathat(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  bVar1 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 5) & 1;
  if (TypeInfo__MVClientSettings->static_fields->flagsSet == 0) {
    bVar1 = 1;
  }
  return bVar1;
}


/* Boolean get_FirstPreviewTierFreeEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x16) & 1;
}


/* Boolean get_GameDistributionAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_GameDistributionAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x12) & 1;
}


/* Boolean get_InterstitialsAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x1b & 1) == 0) {
    return 0;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar1 == (MVNetworkGame *)0x0) ||
       (this = (pMVar1->fields).playerContainer, this == (MVPlayerContainer *)0x0)) ||
      (pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0),
      pMVar2 == (MVLocalPlayer *)0x0)) ||
     (pSVar3 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
     pSVar3 == (SubscriptionRulesWrapper *)0x0)) {
    uVar4 = func_?(&stack0x00000000);
    func_?(uVar4);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pSVar3->fields).SubscriptionType != 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x17) & 1;
  }
  return 1;
}


/* Boolean get_IsSubscriber() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_IsSubscriber(MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this = (pMVar1->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (pSVar3 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
       pSVar3 != (SubscriptionRulesWrapper *)0x0)) {
      return (pSVar3->fields).SubscriptionType != 0;
    }
  }
  uVar4 = func_?(&stack0x00000000);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_JoinFlowAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_JoinFlowAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0xd & 1) == 0) {
    return 0;
  }
  bVar1 = MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_PlayButtonAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled
               (MethodInfo *method)

{
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x11 & 1) == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x1c & 1) == 0) {
      return 0;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x1c & 1) == 0) {
      return 0;
    }
  }
  bVar1 = MVClientSettings_get_InterstitialsAdsEnabled((MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_PlayButtonAdsRegisteredUsers() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PlayButtonAdsRegisteredUsers
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x11) & 1;
}


/* Boolean get_PokiAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PokiAdsEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x13) & 1;
}


/* Boolean get_PostGameInterstitialEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PostGameInterstitialEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 9) & 1;
}


/* Int32 get_PostGameInterstitialIntervalInSeconds() */

int32_t Assembly-CSharp.dll::MVClientSettings::
        MVClientSettings_get_PostGameInterstitialIntervalInSeconds(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return TypeInfo__MVClientSettings->static_fields->
         _PostGameInterstitialIntervalInSeconds_k__BackingField;
}


/* Boolean get_ReviveEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ReviveEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameSetupOptions);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar2 = (uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 4;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar2 = (uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 5;
  }
  if ((uVar2 & 1) != 0) {
    if ((TypeInfo__GameSetupOptions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = GameSetupOptions::GameSetupOptions_get_IsReviveEnabled((MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x1a & 1) != 0) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (this = (pMVar3->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
          pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
          if ((pMVar4 != (MVLocalPlayer *)0x0) &&
             (pSVar5 = (pMVar4->fields)._._SubscriptionRules_k__BackingField,
             pSVar5 != (SubscriptionRulesWrapper *)0x0)) {
            if ((pSVar5->fields).SubscriptionType == 0) {
              return 1;
            }
            goto code_?;
          }
        }
        func_?();
        func_?();
        pcVar6 = (code *)swi(3);
        bVar1 = (*pcVar6)();
        return bVar1;
      }
code_?:
      bVar1 = MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


/* Int32 get_ReviveFlags() */

int32_t Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ReviveFlags(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField;
}


/* Boolean get_RewardedAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_RewardedAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  if (((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x1a & 1) == 0) {
    return 0;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this = (pMVar1->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) &&
       (pSVar3 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
       pSVar3 != (SubscriptionRulesWrapper *)0x0)) {
      return (pSVar3->fields).SubscriptionType == 0;
    }
  }
  uVar4 = func_?(&stack0x00000000);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_SeekAdConsent() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_SeekAdConsent(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0xc) & 1;
}


/* Boolean get_ShowTouristPromotion() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ShowTouristPromotion
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2) & 1;
}


/* Boolean get_SpinEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_SpinEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 4) & 1;
}


/* Boolean get_TouristChatAllowed() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_TouristChatAllowed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return (byte)TypeInfo__MVClientSettings->static_fields->flags & 1;
}


/* Boolean get_WebAdSDKsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_WebAdSDKsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  return *(byte *)((int)&TypeInfo__MVClientSettings->static_fields->flags + 2) & 1;
}


/* Void set_ClientSettingFlags(ClientSettingFlags) */

void Assembly-CSharp.dll::MVClientSettings::MVClientSettings_set_ClientSettingFlags
               (ClientSettingFlags__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->flags = value;
  TypeInfo__MVClientSettings->static_fields->flagsSet = 1;
  return;
}


/* Void set_PostGameInterstitialIntervalInSeconds(Int32) */

void Assembly-CSharp.dll::MVClientSettings::
     MVClientSettings_set_PostGameInterstitialIntervalInSeconds(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->_PostGameInterstitialIntervalInSeconds_k__BackingField
       = value;
  return;
}


/* Void set_ReviveFlags(Int32) */

void Assembly-CSharp.dll::MVClientSettings::MVClientSettings_set_ReviveFlags
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVClientSettings);
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = value;
  return;
}

