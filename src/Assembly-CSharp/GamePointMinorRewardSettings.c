
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::GamePointMinorRewardSettings_Initialize
               (GamePointMinorRewardSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1
              (this_00,woID,root,StringLiteral_Crystal_Reward,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      this_04 = (PrefabPool *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_03,woID,(MethodInfo *)0x0);
      if (this_04 != (PrefabPool *)0x0) {
        this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
        if (this_05 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_05,StringLiteral_gamePointAmount,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar1 == 0) {
            value_00 = (CrossPlatformInputManager_VirtualButton *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)this_05,StringLiteral_gamePointAmount,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)this_05,
                              (Type *)StringLiteral_gamePointAmount,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pPVar2 != (Pool *)0x0) {
            if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar3 = (int32_t *)func_?();
            this_01 = (this->fields).gamePointsAwardedSlider;
            if (this_01 != (SettingsSlider *)0x0) {
              value = *piVar3;
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_01,StringLiteral_gamePointAmount,value,0,100,(MethodInfo *)0x0);
              this_02 = (this->fields).gamePointsAwardedInputField;
              if (this_02 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          (this_02,StringLiteral_gamePointAmount,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::GamePointMinorRewardSettings_OnDestroy
               (GamePointMinorRewardSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this_00 = (this->fields).gamePointsAwardedSlider;
  if (this_00 != (SettingsSlider *)0x0) {
    this = (GamePointMinorRewardSettings *)
           SettingsSlider::SettingsSlider_get_Value(this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      ((float)this,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      return;
    }
    woDataToRemove = (Dictionary_2_System_Object_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woDataToRemove,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (GamePointMinorRewardSettings *)0x0;
    value = (CrossPlatformInputManager_VirtualButton *)
            func_?(TypeInfo__System__Int32,&this);
    if (woDataToRemove != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)woDataToRemove,StringLiteral_gamePointAmount,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                  (this_02,(pGVar1->fields).woID,woDataToRemove,(MethodInfo *)0x0);
        this_01 = (pGVar1->fields).settingsBase;
        if (this_01 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_RemoveData
                    (this_01,StringLiteral_gamePointAmount,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::
     GamePointMinorRewardSettings_OnSettingChanged
               (GamePointMinorRewardSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_gamePointAmount,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar2 = (float *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(*pfVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).gamePointsAwardedInputField;
    text = (String *)func_?(&stack0xfffffff8);
    if (this_00 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_SetText(this_00,text,(MethodInfo *)0x0);
      this_01 = (this->fields).settingsBase;
      value_00 = (Object *)func_?();
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_gamePointAmount,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

