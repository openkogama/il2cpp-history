
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GameCoinChestSettings::GameCoinChestSettings_Initialize
               (GameCoinChestSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = woID;
  pGVar2 = this;
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CoinChest,(MethodInfo *)0x0);
  if (iVar1 == -1) {
    this_05 = (Dictionary_2_System_Type_Pool_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_05,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (GameCoinChestSettings *)0x5;
    value = (CrossPlatformInputManager_VirtualButton *)
            func_?(TypeInfo__System__Int32,&this);
    if (this_05 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    method = (MethodInfo *)StringLiteral_gameCoinAmount;
    woID = (int32_t)&UNK_?;
    root = (GameObject *)this_05;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_05,StringLiteral_gameCoinAmount,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (GameCoinChestSettings *)0x0;
    this_04 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_03,iVar1,(MethodInfo *)0x0);
    if (this_04 == (PrefabPool *)0x0) goto code_?;
    method = (MethodInfo *)0x0;
    woID = (int32_t)&UNK_?;
    root = (GameObject *)this_04;
    this_05 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
  }
  this_01 = (pGVar2->fields).slider;
  if (this_05 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    root = (GameObject *)&UNK_?;
    method = (MethodInfo *)this_05;
    root = (GameObject *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     (this_05,(Type *)StringLiteral_gameCoinAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
    if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
      func_?();
    }
    iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32_16((Object *)root,(MethodInfo *)0x0);
    if (this_01 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize_1
                (this_01,StringLiteral_gameCoinAmount,iVar1,0xfa,5000,(MethodInfo *)0x0);
      this_02 = (pGVar2->fields).inputField;
      value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_05,(Type *)StringLiteral_gameCoinAmount,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      iVar1 = mscorlib.dll::System::Convert::Convert_ToInt32_16
                        ((Object *)value_00,(MethodInfo *)0x0);
      if (this_02 != (SettingsInputFieldSlider *)0x0) {
        method = (MethodInfo *)StringLiteral_gameCoinAmount;
        woID = (int32_t)&UNK_?;
        root = (GameObject *)this_02;
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                  (this_02,StringLiteral_gameCoinAmount,iVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GameCoinChestSettings::GameCoinChestSettings_OnSettingChanged
               (GameCoinChestSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Convert);
  }
  this = (GameCoinChestSettings *)
         mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

