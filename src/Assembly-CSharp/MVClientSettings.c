
/* Boolean IsFlagSet(ClientSettingFlags) */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsFlagSet
               (ClientSettingFlags__Enum flag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (TypeInfo__MVClientSettings->static_fields->flags & flag) == flag;
}


/* Boolean IsReviveFlagEnabledForSessionType() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsReviveFlagEnabledForSessionType
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if (0 < (pGVar1->fields).profileID) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      return (byte)((uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >>
                   4) & 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    return (byte)((uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 5
                 ) & 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_BoostersEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_BoostersEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x19) & 1;
}


/* ClientSettingFlags get_ClientSettingFlags() */

ClientSettingFlags__Enum
Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ClientSettingFlags(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVClientSettings->static_fields->flags;
}


/* Boolean get_CrazyAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_CrazyAdsEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return *(byte *)((longlong)&TypeInfo__MVClientSettings->static_fields->flags + 3) & 1;
}


/* Boolean get_EnableSentry() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_EnableSentry(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 1) & 1;
}


/* Boolean get_EnableStathat() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_EnableStathat(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x16) & 1;
}


/* Boolean get_GameDistributionAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_GameDistributionAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x12) & 1;
}


/* Boolean get_InterstitialsAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_InterstitialsAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x8000000U) != 0) {
    bVar1 = MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PlayerPrefsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession == 0) {
        return 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x17) & 1;
    }
  }
  return 0;
}


/* Boolean get_IsSubscriber() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_IsSubscriber(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this = (pMVar2->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (pSVar4 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       pSVar4 != (SubscriptionRulesWrapper *)0x0)) {
      return (pSVar4->fields).SubscriptionType != 0;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_JoinFlowAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_JoinFlowAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x2000U) == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x8000000U) != 0) {
    bVar1 = MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PlayerPrefsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession == 0) {
        return 1;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x17) & 1;
    }
  }
  return 0;
}


/* Boolean get_PlayButtonAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PlayButtonAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pGVar1->fields).profileID < 1) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4 = TypeInfo__MVClientSettings->static_fields->flags;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVClientSettings->static_fields->flags & 0x20000U) == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4 = TypeInfo__MVClientSettings->static_fields->flags;
  }
  if ((uVar4 & 0x10000000) == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((TypeInfo__MVClientSettings->static_fields->flags & 0x8000000U) != 0) &&
     (bVar3 = MVClientSettings_get_IsSubscriber((MethodInfo *)0x0), bVar3 == 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PlayerPrefsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession == 0) {
      return 1;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x17) & 1;
  }
  return 0;
}


/* Boolean get_PlayButtonAdsRegisteredUsers() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PlayButtonAdsRegisteredUsers
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x11) & 1;
}


/* Boolean get_PokiAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PokiAdsEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x13) & 1;
}


/* Boolean get_PostGameInterstitialEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PostGameInterstitialEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 9) & 1;
}


/* Int32 get_PostGameInterstitialIntervalInSeconds() */

int32_t Assembly-CSharp.dll::MVClientSettings::
        MVClientSettings_get_PostGameInterstitialIntervalInSeconds(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVClientSettings->static_fields->
         _PostGameInterstitialIntervalInSeconds_k__BackingField;
}


/* Boolean get_ReviveEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ReviveEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameSetupOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).profileID < 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar2 = (uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 5;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar2 = (uint)TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField >> 4;
    }
    if ((uVar2 & 1) != 0) {
      if (*(int *)&(TypeInfo__GameSetupOptions->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = GameSetupOptions::GameSetupOptions_get_IsReviveEnabled((MethodInfo *)0x0);
      if (bVar3 != 0) {
        bVar3 = MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
        if (bVar3 != 0) {
          return 1;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar4 != (MVGameControllerBase *)0x0) &&
            (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
           (this = (pMVar5->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
          pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this,(MethodInfo *)0x0);
          if ((pMVar6 != (MVLocalPlayer *)0x0) &&
             (pSVar7 = (pMVar6->fields)._._SubscriptionRules_k__BackingField,
             pSVar7 != (SubscriptionRulesWrapper *)0x0)) {
            return (pSVar7->fields).SubscriptionType != 0;
          }
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        bVar3 = (*pcVar8)();
        return bVar3;
      }
    }
    return 0;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar3 = (*pcVar8)();
  return bVar3;
}


/* Int32 get_ReviveFlags() */

int32_t Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ReviveFlags(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField;
}


/* Boolean get_RewardedAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_RewardedAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) == 0) {
    return 0;
  }
  bVar1 = MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
  return bVar1 ^ 1;
}


/* Boolean get_SeekAdConsent() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_SeekAdConsent(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0xc) & 1;
}


/* Boolean get_ShowTouristPromotion() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ShowTouristPromotion
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2) & 1;
}


/* Boolean get_SpinEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_SpinEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 4) & 1;
}


/* Boolean get_TouristChatAllowed() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_TouristChatAllowed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return (byte)TypeInfo__MVClientSettings->static_fields->flags & 1;
}


/* Boolean get_WebAdSDKsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_WebAdSDKsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return *(byte *)((longlong)&TypeInfo__MVClientSettings->static_fields->flags + 2) & 1;
}


/* Void set_ClientSettingFlags(ClientSettingFlags) */

void Assembly-CSharp.dll::MVClientSettings::MVClientSettings_set_ClientSettingFlags
               (ClientSettingFlags__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = value;
  return;
}

