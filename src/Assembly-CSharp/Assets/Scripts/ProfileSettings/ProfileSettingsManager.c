
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void Init(ProfileSettingsState) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_Init(ProfileSettingsState *profileSettingsState,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::VerticalVirtualizationController`1[System::Object]::VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh((VerticalVirtualizationController_1_System_Object_ *)0x0,unaff_EBP);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    unaff_EBP = (MethodInfo *)&UNK_?;
    func_?();
  }
  if (profileSettingsState != (ProfileSettingsState *)0x0) {
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar2,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = fVar3;
    unaff_EBP = (MethodInfo *)profileSettingsState;
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,(ProfileSettingKey__Enum)fVar3,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = iVar4;
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_TextureQuality,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = iVar4;
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_TextureFilter,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = iVar4;
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_AnistropicFiltering,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = iVar4;
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_AntiAliasing,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = iVar4;
    pOVar2 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetProfileSettingValue(profileSettingsState,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_LightQuality,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    profileSettingsState = (ProfileSettingsState *)0x3f800000;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = iVar4;
    fVar3 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity;
    if (fVar3 < 50.5) {
      profileSettingsState = (ProfileSettingsState *)(1.0 / ((1.0 - fVar3 / 50.5) * 9.0 + 1.0));
    }
    else if (50.5 < fVar3) {
      profileSettingsState = (ProfileSettingsState *)(((fVar3 - 50.5) / 50.5) * 9.0 + 1.0);
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
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_EDI = in_stack_6;
    if (pMVar5 != (MaterialLoader *)0x0) {
      MaterialLoader::MaterialLoader_SetTextureQuality(pMVar5,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar5 != (MaterialLoader *)0x0) && (pMVar7 = (pMVar5->fields)._CubeModelMaterial_k__BackingField, pMVar7 != (Material *)0x0)) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (pTVar8 != (Texture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode(pTVar8,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField) {
          default:
            iVar4 = 0;
            break;
          case 1:
            iVar4 = 2;
            break;
          case 2:
            iVar4 = 4;
            break;
          case 3:
            iVar4 = 8;
          }
          UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar4,(MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar5 != (MaterialLoader *)0x0) && (pMVar7 = (pMVar5->fields)._CubeModelMaterial_k__BackingField, pMVar7 != (Material *)0x0)) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField) {
            default:
              iVar4 = 0;
              break;
            case 1:
              iVar4 = 1;
              break;
            case 2:
              iVar4 = 2;
              break;
            case 3:
              iVar4 = 4;
              break;
            case 4:
              iVar4 = 8;
              break;
            case 5:
              iVar4 = 0x10;
            }
            if (pTVar8 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel(pTVar8,iVar4,(MethodInfo *)0x0);
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
  bVar9 = 0;
  uVar10 = func_?();
  pbVar11 = (byte *)((ulonglong)uVar10 >> 0x20);
  pMVar5 = (MaterialLoader *)(unaff_EDI + TargetFrameRateValue__Enum_Low);
  uVar12 = (undefined3)((uint)unaff_EBX >> 8);
  if (unaff_EDI < -1) {
    bVar13 = (byte)((ulonglong)uVar10 >> 0x28);
    bVar14 = *pbVar11;
    bVar15 = *pbVar11 + bVar13;
    bVar16 = CARRY1(*pbVar11,bVar13) || CARRY1(bVar15,bVar9);
    *pbVar11 = bVar15 + bVar9;
    iVar17 = unaff_EBX;
    if ((SCARRY1(bVar14,bVar13) != SCARRY1(bVar15,bVar9)) == (char)*pbVar11 < '\0') goto code_?;
    bVar15 = (byte)((uint)unaff_EBX >> 8);
    bVar9 = *extraout_ECX;
    bVar14 = *extraout_ECX + bVar15;
    bVar18 = CARRY1(*extraout_ECX,bVar15) || CARRY1(bVar14,bVar16);
    *extraout_ECX = bVar14 + bVar16;
    if ((SCARRY1(bVar9,bVar15) != SCARRY1(bVar14,bVar16)) != (char)*extraout_ECX < '\0') {
      pbVar11 = (byte *)((int)uVar10 + 0x7d);
      bVar14 = (byte)uVar10;
      bVar16 = CARRY1(*pbVar11,bVar14) || CARRY1(*pbVar11 + bVar14,bVar18);
      *pbVar11 = *pbVar11 + bVar14 + bVar18;
      bVar19 = (byte)((ulonglong)uVar10 >> 8);
      bVar9 = bVar13 + bVar19;
      bVar18 = CARRY1(bVar13,bVar19) || CARRY1(bVar9,bVar16);
      bVar20 = (byte)((ulonglong)uVar10 >> 0x20);
      if ((SCARRY1(bVar13,bVar19) != SCARRY1(bVar9,bVar16)) == (char)(bVar9 + bVar16) < '\0') goto code_?;
      bVar21 = (byte)unaff_EBX;
      bVar13 = bVar21 + bVar14;
      bVar22 = CARRY1(bVar21,bVar14) || CARRY1(bVar13,bVar18);
      bVar19 = bVar13 + bVar18;
      iVar17 = CONCAT31(uVar12,bVar19);
      if ((SCARRY1(bVar21,bVar14) != SCARRY1(bVar13,bVar18)) == (char)bVar19 < '\0') {
        *(uint *)(&UNK_? + CONCAT22((short)((ulonglong)uVar10 >> 0x30),CONCAT11(bVar9 + bVar16,bVar20))) = (*(int *)(&UNK_? + CONCAT22((short)((ulonglong)uVar10 >> 0x30),CONCAT11(bVar9 + bVar16,bVar20))) - (int)pMVar5) - (uint)bVar22;
        unaff_EBX = iVar17;
        goto code_?;
      }
      bVar13 = (byte)extraout_ECX;
      bVar9 = bVar20 + bVar13;
      bVar16 = CARRY1(bVar20,bVar13) || CARRY1(bVar9,bVar22);
      bVar21 = bVar9 + bVar22;
      if ((SCARRY1(bVar20,bVar13) != SCARRY1(bVar9,bVar22)) != (char)bVar21 < '\0') {
        bVar9 = bVar13 + bVar21;
        bVar18 = CARRY1(bVar13,bVar21) || CARRY1(bVar9,bVar16);
        if ((SCARRY1(bVar13,bVar21) != SCARRY1(bVar9,bVar16)) == (char)(bVar9 + bVar16) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar9 = bVar14 + bVar19;
        bVar16 = CARRY1(bVar14,bVar19) || CARRY1(bVar9,bVar18);
        if ((SCARRY1(bVar14,bVar19) != SCARRY1(bVar9,bVar18)) == (char)(bVar9 + bVar18) < '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(CONCAT31((int3)((ulonglong)uVar10 >> 8),bVar9 + bVar18) + -0x80))();
          return;
        }
        cVar23 = bVar15 + bVar19 + bVar16;
        unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar23,bVar19));
        if ((SCARRY1(bVar15,bVar19) != SCARRY1(bVar15 + bVar19,bVar16)) != cVar23 < '\0') {
          pcVar24 = (code *)swi(3);
          (*pcVar24)();
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    pMVar5 = (MaterialLoader *)((uint)pMVar5 & *(TargetFrameRateValue__Enum *)(pbVar11 + -0x73970037));
code_?:
    *(int *)(unaff_EBX + 0x5c618c4) = *(int *)(unaff_EBX + 0x5c618c4) + 1;
    iVar17 = unaff_EBX;
    pMVar1 = unaff_EBP;
  }
  else {
    iVar17 = CONCAT31(uVar12,0x11);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
    uRam_? = 1;
  }
  pMVar25 = pMVar5;
  this = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pMVar1[-0xffffffff00000001].flags = 0;
  pMVar1[-0xffffffff00000001].iflags = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pMVar1[-1].flags,pMVar25);
  bVar9 = false;
  if (this == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings((MVNetworkGame_OperationRequests *)this,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar2,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetDefaultProfileSettingsValues(SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
  bVar9 = false;
  if (this == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) goto code_?;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar2,(MethodInfo *)0x0);
  *(float *)&pMVar1[-1].slot = fVar3;
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = *(float *)&pMVar1[-1].slot;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = iVar4;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = iVar4;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = iVar4;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = iVar4;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = iVar4;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pPVar26 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields;
  pMVar1[-0xffffffff00000001].slot = 0;
  pMVar1[-0xffffffff00000001].parameters_count = 0x80;
  pMVar1[-0xffffffff00000001].field_0x2f = 0x3f;
  pPVar26->_LightQualityLevel_k__BackingField = iVar4;
  fVar3 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity;
  if (fVar3 < 50.5) {
    fVar3 = 1.0 / ((1.0 - fVar3 / 50.5) * 9.0 + 1.0);
  }
  else {
    if (fVar3 <= 50.5) goto code_?;
    fVar3 = ((fVar3 - 50.5) / 50.5) * 9.0 + 1.0;
  }
  *(float *)&pMVar1[-1].slot = fVar3;
code_?:
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
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = *(float *)&pMVar1[-1].slot;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  MaterialLoader::MaterialLoader_SetTextureQuality(pMVar5,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
  pMVar25 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  bVar9 = false;
  if (pMVar25 == (MaterialLoader *)0x0) goto code_?;
  pMVar7 = (pMVar25->fields)._CubeModelMaterial_k__BackingField;
  bVar9 = false;
  if (pMVar7 == (Material *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar7,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode((Texture *)pMVar5,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField) {
  default:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 2;
    break;
  case 2:
    iVar4 = 4;
    break;
  case 3:
    iVar4 = 8;
  }
  UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar4,(MethodInfo *)0x0);
  pMVar25 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  bVar9 = false;
  if (pMVar25 == (MaterialLoader *)0x0) goto code_?;
  pMVar7 = (pMVar25->fields)._CubeModelMaterial_k__BackingField;
  bVar9 = false;
  if (pMVar7 == (Material *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar7,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField) {
  default:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 2;
    break;
  case 3:
    iVar4 = 4;
    break;
  case 4:
    iVar4 = 8;
    break;
  case 5:
    iVar4 = 0x10;
  }
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel((Texture *)pMVar5,iVar4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar5 = (MaterialLoader *)TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) && (func_?(), (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0)) {
    func_?();
  }
  ProfileSettingsManager_SetFrameRateDesktop((TargetFrameRateValue__Enum)pMVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ProfileSettingsManager_SetLightQualitySetting(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
  pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar9 = false;
  if (pDVar27 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
  pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar9 = false;
  if (pDVar27 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
  pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar9 = false;
  if (pDVar27 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
  pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar9 = false;
  if (pDVar27 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
  pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar9 = false;
  if (pDVar27 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar9 = false;
  if (pMVar5 == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
  pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar9 = false;
  if (pDVar27 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar9 = false;
  bVar16 = pMVar5 == (MaterialLoader *)0x0;
  while( true ) {
    if (!bVar16) {
      (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
      pDVar27 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
      bVar9 = false;
      if (pDVar27 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
        pMVar5 = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar27,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
        bVar9 = false;
        if (pMVar5 != (MaterialLoader *)0x0) {
          (*(code *)(pMVar5->fields)._.m_CancellationTokenSource)();
          return;
        }
      }
    }
code_?:
    uVar10 = func_?();
    *(char *)(iVar17 + -0x7c16efb0) = *(char *)(iVar17 + -0x7c16efb0) + '\x01';
    bVar13 = (byte)((ulonglong)uVar10 >> 0x28);
    bVar14 = (byte)uVar10 + bVar13;
    bVar15 = bVar14 + bVar9;
    iVar28 = CONCAT31((int3)((ulonglong)uVar10 >> 8),bVar15);
    puVar29 = (uint *)(iVar28 + 0x10);
    uVar30 = (uint)(CARRY1((byte)uVar10,bVar13) || CARRY1(bVar14,bVar9));
    uVar31 = *puVar29;
    uVar32 = *puVar29;
    *puVar29 = (uVar32 - 9) + uVar30;
    *(int *)(iVar28 + 0x10) = *(int *)(iVar28 + 0x10) + -99 + (uint)(8 < uVar31 || CARRY4(uVar32 - 9,uVar30));
    if ((POPCOUNT(*(byte *)(iVar28 + 0x10) & (byte)((ulonglong)uVar10 >> 0x20)) & 1U) != 0) break;
    pbVar11 = (byte *)(iVar17 + -0x7ae73c);
    bVar9 = CARRY1(*pbVar11,bVar15);
    *pbVar11 = *pbVar11 + bVar15;
    bVar16 = *pbVar11 == 0;
  }
  *(char *)(extraout_ECX_00 + -0x77efaf7c) = *(char *)(extraout_ECX_00 + -0x77efaf7c) + bVar15;
  *(int *)(iVar28 + 0x50849610 + (int)((ulonglong)uVar10 >> 0x20) * 2) = iVar28;
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
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
  this = (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  puStack_1 = (undefined *)0x0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&puStack_1);
  bVar3 = false;
  if (this == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings((MVNetworkGame_OperationRequests *)this,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar2,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState_GetDefaultProfileSettingsValues(SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
  bVar3 = false;
  if (this == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) goto code_?;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar4 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar2,(MethodInfo *)0x0);
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = fVar4;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TargetFrameRate_k__BackingField = iVar5;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField = iVar5;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureFilter_k__BackingField = iVar5;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField = iVar5;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AntiAliasingLevel_k__BackingField = iVar5;
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  iVar5 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar6 = 1.0;
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField = iVar5;
  fVar4 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity;
  if (fVar4 < 50.5) {
    fVar6 = 1.0 / ((1.0 - fVar4 / 50.5) * 9.0 + 1.0);
  }
  else if (50.5 < fVar4) {
    fVar6 = ((fVar4 - 50.5) / 50.5) * 9.0 + 1.0;
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
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = fVar6;
  unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  MaterialLoader::MaterialLoader_SetTextureQuality(unaff_EDI,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  bVar3 = false;
  if (pMVar7 == (MaterialLoader *)0x0) goto code_?;
  pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField;
  bVar3 = false;
  if (pMVar8 == (Material *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar8,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = false;
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
    iVar5 = 0;
    break;
  case 1:
    iVar5 = 2;
    break;
  case 2:
    iVar5 = 4;
    break;
  case 3:
    iVar5 = 8;
  }
  UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar5,(MethodInfo *)0x0);
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  bVar3 = false;
  if (pMVar7 == (MaterialLoader *)0x0) goto code_?;
  pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField;
  bVar3 = false;
  if (pMVar8 == (Material *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar8,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_AnistropicFilteringLevel_k__BackingField) {
  default:
    iVar5 = 0;
    break;
  case 1:
    iVar5 = 1;
    break;
  case 2:
    iVar5 = 2;
    break;
  case 3:
    iVar5 = 4;
    break;
  case 4:
    iVar5 = 8;
    break;
  case 5:
    iVar5 = 0x10;
  }
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel((Texture *)unaff_EDI,iVar5,(MethodInfo *)0x0);
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
  ProfileSettingsManager_SetLightQualitySetting(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
  pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar3 = false;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar3 = false;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar3 = false;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar3 = false;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar3 = false;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar3 = false;
  if (unaff_EDI == (MaterialLoader *)0x0) goto code_?;
  (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
  pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
  bVar3 = false;
  if (pDVar9 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) goto code_?;
  unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
  bVar3 = false;
  bVar10 = unaff_EDI == (MaterialLoader *)0x0;
  while( true ) {
    if (!bVar10) {
      (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
      pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->ProfileSettingsChanged;
      bVar3 = false;
      if (pDVar9 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
        unaff_EDI = (MaterialLoader *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_);
        bVar3 = false;
        if (unaff_EDI != (MaterialLoader *)0x0) {
          (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
          return;
        }
      }
    }
code_?:
    uVar11 = func_?();
    *(char *)(unaff_EBX + -0x7c16efb0) = *(char *)(unaff_EBX + -0x7c16efb0) + '\x01';
    bVar12 = (byte)((ulonglong)uVar11 >> 0x28);
    bVar13 = (byte)uVar11 + bVar12;
    bVar14 = bVar13 + bVar3;
    iVar15 = CONCAT31((int3)((ulonglong)uVar11 >> 8),bVar14);
    puVar16 = (uint *)(iVar15 + 0x10);
    uVar17 = (uint)(CARRY1((byte)uVar11,bVar12) || CARRY1(bVar13,bVar3));
    uVar18 = *puVar16;
    uVar19 = *puVar16;
    *puVar16 = (uVar19 - 9) + uVar17;
    *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + -99 + (uint)(8 < uVar18 || CARRY4(uVar19 - 9,uVar17));
    if ((POPCOUNT(*(byte *)(iVar15 + 0x10) & (byte)((ulonglong)uVar11 >> 0x20)) & 1U) != 0) break;
    pbVar20 = (byte *)(unaff_EBX + -0x7ae73c);
    bVar3 = CARRY1(*pbVar20,bVar14);
    *pbVar20 = *pbVar20 + bVar14;
    bVar10 = *pbVar20 == 0;
  }
  *(char *)(extraout_ECX + -0x77efaf7c) = *(char *)(extraout_ECX + -0x77efaf7c) + bVar14;
  *(int *)(iVar15 + 0x50849610 + (int)((ulonglong)uVar11 >> 0x20) * 2) = iVar15;
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    unaff_ESI = value;
    if ((this != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) && (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this,profileSetting,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_), pOVar1 != (Object *)0x0)) {
      (*(code *)pOVar1[1].monitor)();
      switch(profileSetting) {
      case ProfileSettingKey__Enum_MouseSensitivity:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar2 = (float *)func_?();
            TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->mouseSensitivity = *pfVar2;
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
          if ((value->klass->_0).element_class == (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
            puVar3 = (undefined4 *)func_?();
            func_?(*puVar3);
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
          if ((value->klass->_0).element_class != (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) goto code_?;
          puVar3 = (undefined4 *)func_?();
          func_?(*puVar3);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          quality = func_?(0);
          unaff_ESI = (Object *)0x0;
          if (pMVar4 != (MaterialLoader *)0x0) {
            MaterialLoader::MaterialLoader_SetTextureQuality(pMVar4,quality,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      case ProfileSettingKey__Enum_TextureFilter:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class != (TypeInfo__UnityEngine__FilterMode->_0).element_class) goto code_?;
          puVar3 = (undefined4 *)func_?();
          func_?(*puVar3);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar4 != (MaterialLoader *)0x0) && (pMVar5 = (pMVar4->fields)._CubeModelMaterial_k__BackingField, pMVar5 != (Material *)0x0)) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar5,(MethodInfo *)0x0);
            value_01 = func_?();
            unaff_ESI = (Object *)0x0;
            if (pTVar6 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode(pTVar6,value_01,(MethodInfo *)0x0);
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
          if ((value->klass->_0).element_class != (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) goto code_?;
          puVar3 = (undefined4 *)func_?();
          func_?(*puVar3);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar4 != (MaterialLoader *)0x0) && (pMVar5 = (pMVar4->fields)._CubeModelMaterial_k__BackingField, pMVar5 != (Material *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture(pMVar5,(MethodInfo *)0x0);
            level = func_?();
            iVar7 = ProfileSettingsManager_AnisoLevelToInt(level,method_00);
            unaff_ESI = (Object *)0x0;
            if (pTVar6 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel(pTVar6,iVar7,(MethodInfo *)0x0);
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
          if ((value->klass->_0).element_class == (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
            puVar3 = (undefined4 *)func_?();
            func_?(*puVar3);
            level_00 = func_?();
            iVar7 = ProfileSettingsManager_AntiAliasingLevelToInt(level_00,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing(iVar7,(MethodInfo *)0x0);
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
          if ((value->klass->_0).element_class == (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
            puVar3 = (undefined4 *)func_?();
            func_?(*puVar3);
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
  func_?();
code_?:
  pcVar8 = (char *)func_?();
  *(undefined2 *)(pcVar8 + 0x10) = in_SS;
  pOVar1 = unaff_ESI + -0xe2eddf6;
  pOVar9 = pOVar1->klass;
  pOVar1->klass = (Object__Class *)((int)&(pOVar1->klass->_0).image + extraout_ECX);
  *pcVar8 = *pcVar8 + unaff_BL + CARRY4((uint)pOVar9,extraout_ECX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

