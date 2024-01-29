
/* Dictionary`2[MV.WorldObject.MetaData.ProfileSettingKey,System.Object]
   GetDefaultProfileSettingsValues(SettingsPlatform) */

Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *
MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
ProfileSettingsState_GetDefaultProfileSettingsValues
          (SettingsPlatform__Enum platform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                   );
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    cRam_? = '\x01';
  }
  if (platform == SettingsPlatform__Enum_Standalone) {
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
              );
    platform = 0x424a0000;
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&platform);
    if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    uStack_2 = 1;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&uStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    puStack_3 = (undefined *)0x2;
    ppuStack4 = &puStack_3;
    pFStack5 = TypeInfo__UnityEngine__FilterMode;
    method = (MethodInfo *)func_?();
    platform = SettingsPlatform__Enum_Touch|SettingsPlatform__Enum_WebGL;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)method,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    method = (MethodInfo *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    platform = (SettingsPlatform__Enum)&UNK_?;
    pOVar1 = (Object *)func_?();
    platform = (SettingsPlatform__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    platform = (SettingsPlatform__Enum)&stack0xfffffff4;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
  }
  else if (platform == SettingsPlatform__Enum_WebGL) {
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
              );
    platform = 0x424a0000;
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&platform);
    if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    uStack_2 = 1;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&uStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    puStack_3 = (undefined *)0x1;
    ppuStack4 = &puStack_3;
    pFStack5 = TypeInfo__UnityEngine__FilterMode;
    method = (MethodInfo *)func_?();
    platform = SettingsPlatform__Enum_Touch|SettingsPlatform__Enum_WebGL;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)method,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    method = (MethodInfo *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    platform = (SettingsPlatform__Enum)&UNK_?;
    pOVar1 = (Object *)func_?();
    platform = (SettingsPlatform__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    platform = (SettingsPlatform__Enum)&stack0xfffffff4;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
  }
  else {
    if (platform != SettingsPlatform__Enum_Touch) {
      this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                            );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
                );
      platform = 0x424a0000;
      pOVar1 = (Object *)func_?(TypeInfo__System__Single,&platform);
      if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        pDVar7 = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)
                 (*pcVar6)();
        return pDVar7;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                );
      pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                );
      pOVar1 = (Object *)
               func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,
                               &stack0xfffffff4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                );
      ppuStack4 = (undefined **)&stack0xfffffff0;
      pFStack5 = TypeInfo__UnityEngine__FilterMode;
      method = (MethodInfo *)func_?();
      platform = SettingsPlatform__Enum_Touch|SettingsPlatform__Enum_WebGL;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)method,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                );
      puStack_3 = (undefined *)0x0;
      method = (MethodInfo *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
      platform = (SettingsPlatform__Enum)&UNK_?;
      pOVar1 = (Object *)func_?();
      platform = (SettingsPlatform__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                );
      platform = (SettingsPlatform__Enum)&uStack_2;
      uStack_2 = 0;
      pOVar1 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
                );
      puStack8 = &stack0xffffffe4;
      goto code_?;
    }
    this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Dictionary__
              );
    platform = 0x424a0000;
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&platform);
    if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    uStack_2 = 0;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&uStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    puStack_3 = (undefined *)0x0;
    ppuStack4 = &puStack_3;
    pFStack5 = TypeInfo__UnityEngine__FilterMode;
    method = (MethodInfo *)func_?();
    platform = SettingsPlatform__Enum_Touch|SettingsPlatform__Enum_WebGL;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)method,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    method = (MethodInfo *)TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel;
    platform = (SettingsPlatform__Enum)&UNK_?;
    pOVar1 = (Object *)func_?();
    platform = (SettingsPlatform__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
    platform = (SettingsPlatform__Enum)&stack0xfffffff4;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
              );
  }
  puStack8 = &stack0xfffffff8;
code_?:
  pLStack9 = TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__Add
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,pOVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Object_
            );
  return (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)this;
}


/* Object GetProfileSettingValue(SettingsPlatform, ProfileSettingKey) */

Object * MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
         ProfileSettingsState_GetProfileSettingValue
                   (ProfileSettingsState *this,SettingsPlatform__Enum settingsPlatform,
                   ProfileSettingKey__Enum key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ProfileSettingsData;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_SettingsPlatform_Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_
       *)0x0) {
    this_01 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,settingsPlatform,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__get_Item_MV__WorldObject__MetaData__SettingsPlatform_
                        );
    if (this_01 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         (this_01,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                         );
      return pOVar1;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* ProfileSettingsState() */

void MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState__ctor
               (ProfileSettingsState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Dictionary__
            );
  pDVar1 = ProfileSettingsState_GetDefaultProfileSettingsValues
                     (SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,(Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
              );
    pDVar1 = ProfileSettingsState_GetDefaultProfileSettingsValues
                       (SettingsPlatform__Enum_WebGL,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,(Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
              );
    pDVar1 = ProfileSettingsState_GetDefaultProfileSettingsValues
                       (SettingsPlatform__Enum_Touch,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,(Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::SettingsPlatform,_System::Collections::Generic::Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_>__Add_MV__WorldObject__MetaData__SettingsPlatform__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>_
              );
    (this->fields).ProfileSettingsData =
         (Dictionary_2_MV_WorldObject_MetaData_SettingsPlatform_Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_
          *)this_00;
    pPStack2 = &this->fields;
    pDStack3 = this_00;
    func_?();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

