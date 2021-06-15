
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GameRankRequirementSettings::GameRankRequirementSettings_Initialize
               (GameRankRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Game_Tier_Requirement,(MethodInfo *)0x0);
  iVar2 = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    if (iVar2 == -1) {
      woID = (int32_t)
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      this = (GameRankRequirementSettings *)&UNK_?;
      this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                 *)func_?();
      this = (GameRankRequirementSettings *)
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
      ;
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_05,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (GameRankRequirementSettings *)&this;
      pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
      if (this_05 !=
          (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
           *)0x0) {
        method = (MethodInfo *)&UNK_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)this_05,StringLiteral_RequiredRank,pCVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
code_?:
        if (this_05 !=
            (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)0x0) {
          bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            (this_05,StringLiteral_RequiredRank,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar4 == 0) {
            root = (GameObject *)0x0;
            pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)this_05,StringLiteral_RequiredRank,pCVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          method = (MethodInfo *)StringLiteral_RequiredRank;
          woID = (int32_t)&UNK_?;
          root = (GameObject *)this_05;
          pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)this_05,
                              (Type *)StringLiteral_RequiredRank,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pPVar5 != (Pool *)0x0) {
            if ((pPVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar6 = (int32_t *)func_?();
            this_01 = (pGVar1->fields).slider;
            if (this_01 != (SettingsSlider *)0x0) {
              iVar2 = *piVar6;
              woID = 0;
              this = (GameRankRequirementSettings *)0x3;
              SettingsSlider::SettingsSlider_Initialize_1
                        (this_01,StringLiteral_RequiredRank,iVar2,0,3,(MethodInfo *)0x0);
              this_02 = (pGVar1->fields).gameTierRequirementInputField;
              if (this_02 != (SettingsInputFieldSlider *)0x0) {
                method = (MethodInfo *)&UNK_?;
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          (this_02,StringLiteral_RequiredRank,iVar2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        woID = (int32_t)TypeInfo__MVGameControllerBase;
        this = (GameRankRequirementSettings *)&UNK_?;
        func_?();
      }
      woID = 0;
      this = (GameRankRequirementSettings *)&UNK_?;
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        root = (GameObject *)0x0;
        this = (GameRankRequirementSettings *)this_03;
        woID = iVar2;
        this_04 = (PrefabPool *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this_03,iVar2,(MethodInfo *)0x0);
        if (this_04 != (PrefabPool *)0x0) {
          method = (MethodInfo *)&UNK_?;
          this_05 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                     *)PrefabPool::PrefabPool_get_MVBatteryPrefab(this_04,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GameRankRequirementSettings::GameRankRequirementSettings_OnSettingChanged
               (GameRankRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  if (value != (Object *)0x0) {
    pSVar2 = TypeInfo__System__Single;
    if ((value->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar3 = (float *)func_?(value);
    iStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         (*pfVar3,(MethodInfo *)0x0);
    this_00 = (this->fields).gameTierRequirementInputField;
    text = (String *)func_?(&iStack_1,0);
    if (this_00 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_SetText(this_00,text,(MethodInfo *)0x0);
      this_01 = (this->fields).settingsBase;
      iStack_4 = iStack_1;
      value_00 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged(this_01,key,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  value = extraout_ECX;
  pSVar2 = extraout_EDX;
code_?:
  func_?(value,pSVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

