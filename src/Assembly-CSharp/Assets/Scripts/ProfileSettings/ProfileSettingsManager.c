
/* Int32 AnisoLevelToInt(AnistropicFilteringLevel) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_AnisoLevelToInt(AnistropicFilteringLevel__Enum level,MethodInfo *method)

{
  switch(level) {
  default:
    return 0;
  case AnistropicFilteringLevel__Enum_x1:
    return 1;
  case AnistropicFilteringLevel__Enum_x2:
    return 2;
  case AnistropicFilteringLevel__Enum_x4:
    return 4;
  case AnistropicFilteringLevel__Enum_x8:
    return 8;
  case AnistropicFilteringLevel__Enum_x16:
    return 0x10;
  }
}


/* Int32 AntiAliasingLevelToInt(AntiAliasingLevel) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_AntiAliasingLevelToInt(AntiAliasingLevel__Enum level,MethodInfo *method)

{
  switch(level) {
  default:
    return 0;
  case AntiAliasingLevel__Enum_x2:
    return 2;
  case AntiAliasingLevel__Enum_x4:
    return 4;
  case AntiAliasingLevel__Enum_x8:
    return 8;
  }
}


/* Single CalculateMouseSensitivityFromValue(Single) */

float Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_CalculateMouseSensitivityFromValue(float value,MethodInfo *method)

{
  uStack_1 = 1.0;
  if (value < 50.5) {
    uStack_1 = 1.0 / ((1.0 - value / 50.5) * 9.0 + 1.0);
  }
  else if (50.5 < value) {
    return ((value - 50.5) / 50.5) * 9.0 + 1.0;
  }
  return uStack_1;
}


/* Object GetSettingValue(ProfileSettingKey) */

Object * Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_GetSettingValue(ProfileSettingKey__Enum profileSetting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    cRam_? = '\x01';
  }
  switch(profileSetting) {
  case ProfileSettingKey__Enum_MouseSensitivity:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = (ProfileSettingKey__Enum)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity;
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_TargetFrameRate:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_TextureQuality:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    break;
  case ProfileSettingKey__Enum_TextureFilter:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)func_?(TypeInfo__UnityEngine__FilterMode,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_AnistropicFiltering:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_AntiAliasing:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_LightQuality:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,&profileSetting);
    return pOVar1;
  default:
    return (Object *)0x0;
  }
  profileSetting = func_?(0);
  pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&profileSetting);
  return pOVar1;
}


/* Void Init(ProfileSettingsState) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init(ProfileSettingsState *profileSettingsState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::VerticalVirtualizationController`1[System::Object]::VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh((VerticalVirtualizationController_1_System_Object_ *)0x0,unaff_EBP);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (profileSettingsState != (ProfileSettingsState *)0x0) {
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar1,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = fVar2;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,(ProfileSettingKey__Enum)fVar2,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = iVar3;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_TextureQuality,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = iVar3;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_TextureFilter,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = iVar3;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_AnistropicFiltering,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = iVar3;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_AntiAliasing,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = iVar3;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_LightQuality,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    profileSettingsState = (ProfileSettingsState *)0x3f800000;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = iVar3;
    fVar2 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity;
    if (fVar2 < 50.5) {
      profileSettingsState = (ProfileSettingsState *)(1.0 / ((1.0 - fVar2 / 50.5) * 9.0 + 1.0));
    }
    else if (50.5 < fVar2) {
      profileSettingsState = (ProfileSettingsState *)(((fVar2 - 50.5) / 50.5) * 9.0 + 1.0);
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = (float)profileSettingsState;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (pMVar4 != (MaterialLoader *)0x0) {
      MaterialLoader::MaterialLoader_SetTextureQuality(pMVar4,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar4 != (MaterialLoader *)0x0) && (pMVar5 = (pMVar4->fields)._CubeModelMaterial_k__BackingField, pMVar5 != (Material *)0x0)) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar5,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (pTVar6 != (Texture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode(pTVar6,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField) {
          default:
            iVar3 = 0;
            break;
          case 1:
            iVar3 = 2;
            break;
          case 2:
            iVar3 = 4;
            break;
          case 3:
            iVar3 = 8;
          }
          UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar3,(MethodInfo *)0x0);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar4 != (MaterialLoader *)0x0) && (pMVar5 = (pMVar4->fields)._CubeModelMaterial_k__BackingField, pMVar5 != (Material *)0x0)) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar5,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField) {
            default:
              iVar3 = 0;
              break;
            case 1:
              iVar3 = 1;
              break;
            case 2:
              iVar3 = 2;
              break;
            case 3:
              iVar3 = 4;
              break;
            case 4:
              iVar3 = 8;
              break;
            case 5:
              iVar3 = 0x10;
            }
            if (pTVar6 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel(pTVar6,iVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) && (func_?(), (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0)) {
                func_?();
              }
              ProfileSettingsManager_SetFrameRateDesktop(value,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              ProfileSettingsManager_SetLightQualitySetting(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void InitTourist() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_InitTourist(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    cRam_? = '\x01';
  }
  this = (ProfileSettingsState *)func_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState__ctor(this,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ProfileSettingsManager_Init(this,(MethodInfo *)0x0);
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void ResetToDefaultValues() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_ResetToDefaultValues(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  puStack_1 = (undefined *)0x0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&puStack_1);
  cVar3 = (int)this < 0;
  bVar4 = true;
  pDVar5 = in_stack_6;
  if (this == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings((MVNetworkGame_OperationRequests *)this,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar2,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetDefaultProfileSettingsValues(SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
  cVar3 = (int)this < 0;
  bVar4 = true;
  if (this == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar7 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar2,(MethodInfo *)0x0);
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = fVar7;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = iVar8;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = iVar8;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = iVar8;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = iVar8;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = iVar8;
  in_stack_9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = (MethodInfo *)0x0;
  in_stack_6 = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)&UNK_?;
  iVar8 = mscorlib.dll::System::Convert::Convert_ToInt32(in_stack_9,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar11 = 1.0;
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = iVar8;
  fVar7 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity;
  if (fVar7 < 50.5) {
    fVar11 = 1.0 / ((1.0 - fVar7 / 50.5) * 9.0 + 1.0);
  }
  else if (50.5 < fVar7) {
    fVar11 = ((fVar7 - 50.5) / 50.5) * 9.0 + 1.0;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = fVar11;
  unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  pDVar5 = in_stack_6;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  MaterialLoader::MaterialLoader_SetTextureQuality(unaff_EDI,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  cVar3 = (int)pMVar12 < 0;
  bVar4 = true;
  if (pMVar12 == (MaterialLoader *)0x0) goto code_?;
  pMVar13 = (pMVar12->fields)._CubeModelMaterial_k__BackingField;
  cVar3 = (int)pMVar13 < 0;
  bVar4 = true;
  if (pMVar13 == (Material *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar13,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode((Texture *)unaff_EDI,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField) {
  default:
    iVar8 = 0;
    break;
  case 1:
    iVar8 = 2;
    break;
  case 2:
    iVar8 = 4;
    break;
  case 3:
    iVar8 = 8;
  }
  in_stack_9 = (Object *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar8,(MethodInfo *)0x0);
  in_stack_10 = (MethodInfo *)&UNK_?;
  pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  cVar3 = (int)pMVar12 < 0;
  bVar4 = true;
  if (pMVar12 == (MaterialLoader *)0x0) goto code_?;
  pMVar13 = (pMVar12->fields)._CubeModelMaterial_k__BackingField;
  cVar3 = (int)pMVar13 < 0;
  bVar4 = true;
  if (pMVar13 == (Material *)0x0) goto code_?;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar13,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField) {
  default:
    iVar8 = 0;
    break;
  case 1:
    iVar8 = 1;
    break;
  case 2:
    iVar8 = 2;
    break;
  case 3:
    iVar8 = 4;
    break;
  case 4:
    iVar8 = 8;
    break;
  case 5:
    iVar8 = 0x10;
  }
  cVar3 = (int)this_00 < 0;
  bVar4 = true;
  unaff_EDI = (MaterialLoader *)0x0;
  if (this_00 == (Texture *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel(this_00,iVar8,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  unaff_EDI = (MaterialLoader *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) && (func_?(), (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0)) {
    func_?();
  }
  ProfileSettingsManager_SetFrameRateDesktop((TargetFrameRateValue__Enum)unaff_EDI,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  in_stack_6 = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0;
  ProfileSettingsManager_SetLightQualitySetting(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
  pDVar14 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)pDVar14 < 0;
  bVar4 = true;
  pDVar5 = in_stack_6;
  if (pDVar14 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x0;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  pDVar5 = this;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar14 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)pDVar14 < 0;
  bVar4 = true;
  if (pDVar14 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x1;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar14 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)pDVar14 < 0;
  bVar4 = true;
  if (pDVar14 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x2;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar14 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)pDVar14 < 0;
  bVar4 = true;
  if (pDVar14 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x3;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar14 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)pDVar14 < 0;
  bVar4 = true;
  if (pDVar14 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x4;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar14 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)pDVar14 < 0;
  bVar4 = true;
  if (pDVar14 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x5;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  cVar3 = (int)unaff_EDI < 0;
  bVar4 = true;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  in_stack_6 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  cVar3 = (int)in_stack_6 < 0;
  bVar4 = true;
  if (in_stack_6 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
  in_stack_9 = (Object *)0x6;
  while( true ) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)in_stack_6,(Int32Enum__Enum)in_stack_9,in_stack_10);
    in_stack_10 = MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_;
    in_stack_9 = (Object *)0x6;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
    cVar3 = (int)pOVar2 < 0;
    bVar4 = pOVar2 == (Object *)0x0;
    unaff_EDI = (MaterialLoader *)0x0;
    pDVar5 = this;
    if (!bVar4) {
      (*(code *)pOVar2[1].monitor)();
      return;
    }
code_?:
    in_stack_6 = pDVar5;
    cVar15 = '\0';
    bVar16 = 0;
    iVar17 = func_?();
    if (!bVar4 && cVar15 == cVar3) break;
    *(char *)(unaff_EBX + 0x50066a11) = *(char *)(unaff_EBX + 0x50066a11) + '\x01';
  }
  pbVar18 = (byte *)(extraout_ECX + -0x40);
  bVar19 = (byte)((uint)extraout_ECX >> 8);
  bVar20 = *pbVar18 + bVar19;
  bVar4 = CARRY1(*pbVar18,bVar19) || CARRY1(bVar20,bVar16);
  *pbVar18 = bVar20 + bVar16;
  pbVar18 = (byte *)(iVar17 + -0x40);
  bVar21 = CARRY1(*pbVar18,extraout_DH) || CARRY1(*pbVar18 + extraout_DH,bVar4);
  *pbVar18 = *pbVar18 + extraout_DH + bVar4;
  ppSVar22 = &unaff_EDI[-1].fields.wireframeShader;
  bVar4 = CARRY1(*(byte *)ppSVar22,extraout_DH) || CARRY1(*(char *)ppSVar22 + extraout_DH,bVar21);
  *(byte *)ppSVar22 = *(char *)ppSVar22 + extraout_DH + bVar21;
  bVar21 = CARRY1(bRam_?,(byte)unaff_EBX);
  bVar20 = bRam_? + (byte)unaff_EBX;
  bRam_? = bVar20 + bVar4;
  bVar16 = *(byte *)(iVar17 + 0x10);
  *(byte *)(iVar17 + 0x10) = bVar16 << 1 | (bVar21 || CARRY1(bVar20,bVar4));
  uVar23 = CONCAT14((bVar16 & 0x80) != 0,*(uint *)(iVar17 + 0x10));
  uVar24 = (ulonglong)uVar23 << 8;
  *(uint *)(iVar17 + 0x10) = (uint)uVar24 | (uint)(uVar23 >> 0x19);
  uVar23 = CONCAT14((uVar24 & 0x100000000) != 0,*(uint *)(iVar17 + 0x10));
  uVar24 = (ulonglong)uVar23 << 0xf;
  *(uint *)(iVar17 + 0x10) = (uint)uVar24 | (uint)(uVar23 >> 0x12);
  uVar23 = CONCAT14((uVar24 & 0x100000000) != 0,*(uint *)(iVar17 + 0x10));
  uVar24 = (ulonglong)uVar23 << 0x16;
  *(uint *)(iVar17 + 0x10) = (uint)uVar24 | (uint)(uVar23 >> 0xb);
  uVar25 = *(uint *)(iVar17 + 0x10);
  *(uint *)(iVar17 + 0x10) = uVar25 << 0xc | (uint)(CONCAT14((uVar24 & 0x100000000) != 0,uVar25) >> 0x15);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void SetFrameRateDesktop(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetFrameRateDesktop(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate(-1,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(value) {
  case TargetFrameRateValue__Enum_Unlimited:
    break;
  case TargetFrameRateValue__Enum_Low:
    break;
  case TargetFrameRateValue__Enum_Medium:
    break;
  case TargetFrameRateValue__Enum_High:
    break;
  default:
  }
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?();
  }
  (*pcRam_?)();
  return;
}


/* Void SetFrameRateSetting(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetFrameRateSetting(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) && (func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager), (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0)) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application,unaff_EBP);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate(-1,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(value) {
  case TargetFrameRateValue__Enum_Unlimited:
    break;
  case TargetFrameRateValue__Enum_Low:
    break;
  case TargetFrameRateValue__Enum_Medium:
    break;
  case TargetFrameRateValue__Enum_High:
    break;
  default:
  }
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?();
  }
  (*pcRam_?)();
  return;
}


/* Void SetFrameRateTouch(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetFrameRateTouch(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution((Resolution *)&puStack_1,(MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::Nullable`1[TimeSpan]::Nullable_1_TimeSpan__GetValueOrDefault((Nullable_1_TimeSpan_ *)&stack0xffffffe8,(MethodInfo *)0x0);
  iVar3 = (int)((ulonglong)TVar2._ticks >> 0x20);
  fStack_4 = (float)(((double)(int)TVar2._ticks + *(double *)(&UNK_? + ((int)TVar2._ticks >> 0x1f) * -8)) / ((double)iVar3 + *(double *)(&UNK_? + (iVar3 >> 0x1f) * -8)));
  if (value != TargetFrameRateValue__Enum_SameAsScreenHz) {
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    switch(value) {
    default:
      iVar3 = -1;
      break;
    case TargetFrameRateValue__Enum_Low:
      iVar3 = 0x1e;
      break;
    case TargetFrameRateValue__Enum_Medium:
      iVar3 = 0x3c;
      break;
    case TargetFrameRateValue__Enum_High:
      iVar3 = 0x78;
    }
    fStack_4 = (float)iVar3;
  }
  UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_vSyncCount(0,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate((int)fStack_4,(MethodInfo *)0x0);
  return;
}


/* Void SetLightQualitySetting(LightingQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetLightQualitySetting(LightingQualityLevel__Enum level,MethodInfo *method)

{
  if (level == LightingQualityLevel__Enum_Low) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount(1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_softParticles(0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_particleRaycastBudget(4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadows(ShadowQuality__Enum_Disable,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_lodBias(0.7,(MethodInfo *)0x0);
  }
  else {
    if (level == LightingQualityLevel__Enum_Medium) {
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount(2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_softParticles(0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_particleRaycastBudget(4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadows(ShadowQuality__Enum_HardOnly,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowResolution(ShadowResolution__Enum_Low,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowDistance(40.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowCascades(2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowCascade2Split(0.333,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_lodBias(1.0,(MethodInfo *)0x0);
      return;
    }
    if (level == LightingQualityLevel__Enum_High) {
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount(4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_softParticles(1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_particleRaycastBudget(0x10,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadows(ShadowQuality__Enum_All,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowResolution(ShadowResolution__Enum_High,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowDistance(80.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowCascades(4,(MethodInfo *)0x0);
      value.z = 0.27;
      value.x = 0.067;
      value.y = 0.133;
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowCascade4Split(value,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_lodBias(1.5,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void SetSettingValue(ProfileSettingKey, Object) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetSettingValue(ProfileSettingKey__Enum profileSetting,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings(this_00,profileSetting,value,(MethodInfo *)0x0);
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
    unaff_EDI = (char *)profileSetting;
    if ((this != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) && (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,profileSetting,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_), pOVar1 != (Object *)0x0)) {
      (*(code *)pOVar1[1].monitor)();
      switch(profileSetting) {
      case ProfileSettingKey__Enum_MouseSensitivity:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__System__Single->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 == pIVar3) {
            pfVar5 = (float *)func_?();
            TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = *pfVar5;
            ProfileSettingsManager_CalculateMouseSensitivityFromValue(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity,(MethodInfo *)0x0);
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            func_?();
            return;
          }
          goto code_?;
        }
        break;
      case ProfileSettingKey__Enum_TargetFrameRate:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 == pIVar3) {
            puVar6 = (undefined4 *)func_?();
            func_?(*puVar6);
            value_00 = func_?(0);
            ProfileSettingsManager_SetFrameRateSetting(value_00,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        break;
      case ProfileSettingKey__Enum_TextureQuality:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 != pIVar3) goto code_?;
          puVar6 = (undefined4 *)func_?();
          func_?(*puVar6);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          quality = func_?(0);
          if (pMVar7 != (MaterialLoader *)0x0) {
            MaterialLoader::MaterialLoader_SetTextureQuality(pMVar7,quality,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      case ProfileSettingKey__Enum_TextureFilter:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__UnityEngine__FilterMode->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 != pIVar3) goto code_?;
          puVar6 = (undefined4 *)func_?();
          func_?(*puVar6);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar7 != (MaterialLoader *)0x0) && (pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField, pMVar8 != (Material *)0x0)) {
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar8,(MethodInfo *)0x0);
            value_01 = func_?();
            if (pTVar9 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode(pTVar9,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      case ProfileSettingKey__Enum_AnistropicFiltering:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 != pIVar3) goto code_?;
          puVar6 = (undefined4 *)func_?();
          func_?(*puVar6);
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar7 != (MaterialLoader *)0x0) && (pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField, pMVar8 != (Material *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar8,(MethodInfo *)0x0);
            level = func_?();
            iVar10 = ProfileSettingsManager_AnisoLevelToInt(level,method_00);
            if (pTVar9 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel(pTVar9,iVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      case ProfileSettingKey__Enum_AntiAliasing:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 == pIVar3) {
            puVar6 = (undefined4 *)func_?();
            func_?(*puVar6);
            level_00 = func_?();
            iVar10 = ProfileSettingsManager_AntiAliasingLevelToInt(level_00,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar10,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        break;
      case ProfileSettingKey__Enum_LightQuality:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          pIVar2 = (value->klass->_0).element_class;
          pIVar3 = (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class;
          bVar4 = pIVar2 < pIVar3;
          if (pIVar2 == pIVar3) {
            puVar6 = (undefined4 *)func_?();
            func_?(*puVar6);
            level_01 = func_?(0);
            ProfileSettingsManager_SetLightQualitySetting(level_01,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        break;
      default:
        return;
      }
    }
  }
  bVar4 = 0;
  func_?();
code_?:
  puVar6 = (undefined4 *)&UNK_?;
  uVar11 = func_?();
  bVar12 = extraout_DL + (byte)uVar11;
                    /* WARNING (jumptable): Read-only address (ram,0xADDR) is written */
  *puVar6 = uVar11;
  *unaff_EDI = *unaff_EDI + bVar12 + bVar4 + (CARRY1(extraout_DL,(byte)uVar11) || CARRY1(bVar12,bVar4));
  return;
}


/* Int32 TargetFrameRateToInt(TargetFrameRateValue) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_TargetFrameRateToInt(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  switch(value) {
  default:
    return -1;
  case TargetFrameRateValue__Enum_Low:
    return 0x1e;
  case TargetFrameRateValue__Enum_Medium:
    return 0x3c;
  case TargetFrameRateValue__Enum_High:
    return 0x78;
  }
}


/* Int32 TargetFrameRateToVSyncValue(TargetFrameRateValue) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_TargetFrameRateToVSyncValue(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  switch(value) {
  case TargetFrameRateValue__Enum_Unlimited:
    return 0;
  case TargetFrameRateValue__Enum_Low:
    return 4;
  case TargetFrameRateValue__Enum_Medium:
    return 3;
  case TargetFrameRateValue__Enum_High:
    return 2;
  default:
    return 1;
  }
}


/* ProfileSettingsManager() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_0_System__Object_);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_1_System__Object_);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_2_System__Object_);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_3_System__Object_);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_4_System__Object_);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_5_System__Object_);
    func_?(&MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_6_System__Object_);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,GamePassesHighScoreList+HighScoreListData]::Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor(this,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Dictionary__);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
  }
  pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
  pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?(TypeInfo__System__Action<System::Object>);
  Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_0_System__Object_,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_1_System__Object_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_2_System__Object_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_3_System__Object_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_4_System__Object_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_5_System__Object_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    pOVar1 = (Object *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor(pSVar2,pOVar1,MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_6_System__Object_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__Add((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,(Object *)pSVar2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)this;
    func_?();
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = 50.5;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = 4;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = 0;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = 0;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = 4;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = 0;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AnistropicFilteringLevel get_AnistropicFilteringLevel() */

AnistropicFilteringLevel__Enum Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_get_AnistropicFilteringLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField;
}


/* AntiAliasingLevel get_AntiAliasingLevel() */

AntiAliasingLevel__Enum Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_get_AntiAliasingLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField;
}


/* LightingQualityLevel get_LightQualityLevel() */

LightingQualityLevel__Enum Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_get_LightQualityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField;
}


/* TargetFrameRateValue get_TargetFrameRate() */

TargetFrameRateValue__Enum Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_get_TargetFrameRate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField;
}


/* FilterMode get_TextureFilter() */

FilterMode__Enum Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_get_TextureFilter(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField;
}


/* TextureQualityLevel get_TextureQualityLevel() */

TextureQualityLevel__Enum Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_get_TextureQualityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField;
}


/* Void set_AnistropicFilteringLevel(AnistropicFilteringLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_set_AnistropicFilteringLevel(AnistropicFilteringLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = value;
  return;
}


/* Void set_AntiAliasingLevel(AntiAliasingLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_set_AntiAliasingLevel(AntiAliasingLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = value;
  return;
}


/* Void set_LightQualityLevel(LightingQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_set_LightQualityLevel(LightingQualityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = value;
  return;
}


/* Void set_TargetFrameRate(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_set_TargetFrameRate(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = value;
  return;
}


/* Void set_TextureFilter(FilterMode) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_set_TextureFilter(FilterMode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = value;
  return;
}


/* Void set_TextureQualityLevel(TextureQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_set_TextureQualityLevel(TextureQualityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = value;
  return;
}

