
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::
     RewardedAdRequirementSettings::RewardedAdRequirementSettings_Initialize
               (RewardedAdRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_Rewarded_ad_requirement);
    func_?(&StringLiteral_rewardedAd);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  header = TM::TM__(StringLiteral_Rewarded_ad_requirement,(MethodInfo *)0x0);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize_1(this_00,woID,root,header,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,woID,(MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObject *)0x0) &&
         (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar1->fields).data,
         this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          (this_01,(Object *)StringLiteral_rewardedAd,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
          value = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_rewardedAd,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        this_02 = (this->fields).toggle;
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01,(Object *)StringLiteral_rewardedAd,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((this_02 != (SettingsToggle *)0x0) && (TVar3.m_Index != 0)) {
          TStack4.m_Index = (int32_t)TypeInfo__System__Boolean;
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
              (TypeInfo__System__Boolean->_0).element_class) {
            TStack4 = TVar3;
            pbVar5 = (bool *)func_?();
            SettingsToggle::SettingsToggle_Initialize
                      (this_02,StringLiteral_rewardedAd,*pbVar5,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  TStack4.m_Index = (int32_t)&UNK_?;
  func_?();
  TStack4.m_Index = (int32_t)extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

