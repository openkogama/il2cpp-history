
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
         (this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pMVar1->fields).data,
         this_01 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,(Object *)StringLiteral_rewardedAd,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar2 == 0) {
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_rewardedAd,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        this_02 = (this->fields).toggle;
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           ((Dictionary_2_System_Object_System_Object_ *)this_01,
                            (Object *)StringLiteral_rewardedAd,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((this_02 != (SettingsToggle *)0x0) && (pOVar3 != (Object *)0x0)) {
          pBStack4 = TypeInfo__System__Boolean;
          if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
            pBStack4 = (Boolean__Class *)pOVar3;
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
  func_?();
  pBStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

