
/* Boolean IsFlagSet(ClientSettingFlags) */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsFlagSet
               (ClientSettingFlags__Enum flag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return (TypeInfo__MVClientSettings->static_fields->flags & flag) == flag;
}


/* Boolean IsReviveFlagEnabledForSessionType() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsReviveFlagEnabledForSessionType
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  return 0;
}


/* Boolean IsSubscriber() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_IsSubscriber(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this != (MVNetworkGame *)0x0) {
    this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this,(MethodInfo *)0x0);
    if (this_00 != (MVLocalPlayer *)0x0) {
      pOVar1 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
               PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_00,
                          (MethodInfo *)0x0);
      if (pOVar1 != (Object *)0x0) {
        return pOVar1[2].klass != (Object__Class *)0x0;
      }
    }
  }
  uStack2 = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* ClientSettingFlags get_ClientSettingFlags() */

ClientSettingFlags__Enum
Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ClientSettingFlags(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return TypeInfo__MVClientSettings->static_fields->flags;
}


/* Boolean get_EnableSentry() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_EnableSentry(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 1) & 1;
}


/* Boolean get_EnableStathat() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_EnableStathat(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (TypeInfo__MVClientSettings->static_fields->flagsSet == 0) {
    return 1;
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 5) & 1;
}


/* Boolean get_FirstPreviewTierFreeEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_FirstPreviewTierFreeEnabled,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_GameDistributionAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_GameDistributionAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GameDistributionAdSDKEnabled,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_JoinFlowAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_JoinFlowAdsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet(ClientSettingFlags__Enum_JoinFlowAdsEnabled,(MethodInfo *)0x0);
  if (((bVar1 != 0) &&
      (((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0)) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?();
  }
  return 0;
}


/* Boolean get_PlayButtonAdsRegisteredUsers() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PlayButtonAdsRegisteredUsers
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_PlayButtonAdsRegisteredUsers,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_PokiAdsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PokiAdsEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet(ClientSettingFlags__Enum_PokiAdsEnabled,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_PostGameInterstitialEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_PostGameInterstitialEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_PostGameInterstitialEnabled,(MethodInfo *)0x0);
  return bVar1;
}


/* Int32 get_PostGameInterstitialIntervalInSeconds() */

int32_t Assembly-CSharp.dll::MVClientSettings::
        MVClientSettings_get_PostGameInterstitialIntervalInSeconds(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return TypeInfo__MVClientSettings->static_fields->
         _PostGameInterstitialIntervalInSeconds_k__BackingField;
}


/* Boolean get_ReviveEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ReviveEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
  return 0;
}


/* Int32 get_ReviveFlags() */

int32_t Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ReviveFlags(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField;
}


/* Boolean get_SeekAdConsent() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_SeekAdConsent(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet(ClientSettingFlags__Enum_SeekAdConsent,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_ShowTouristPromotion() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_ShowTouristPromotion
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2) & 1;
}


/* Boolean get_SpinEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_SpinEnabled(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 4) & 1;
}


/* Boolean get_TouristChatAllowed() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_TouristChatAllowed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  return (byte)TypeInfo__MVClientSettings->static_fields->flags & 1;
}


/* Boolean get_WebAdSDKsEnabled() */

bool Assembly-CSharp.dll::MVClientSettings::MVClientSettings_get_WebAdSDKsEnabled
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar1 = MVClientSettings_IsFlagSet(ClientSettingFlags__Enum_WebAdSDKSEnabled,(MethodInfo *)0x0);
  return bVar1;
}


/* Void set_ClientSettingFlags(ClientSettingFlags) */

void Assembly-CSharp.dll::MVClientSettings::MVClientSettings_set_ClientSettingFlags
               (ClientSettingFlags__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
    TypeInfo__MVClientSettings->static_fields->
    _PostGameInterstitialIntervalInSeconds_k__BackingField = value;
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
    TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = value;
    return;
  }
  TypeInfo__MVClientSettings->static_fields->_ReviveFlags_k__BackingField = value;
  return;
}

