
/* Int32 AnisoLevelToInt(AnistropicFilteringLevel) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
        ProfileSettingsManager_AnisoLevelToInt
                  (AnistropicFilteringLevel__Enum level,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
        ProfileSettingsManager_AntiAliasingLevelToInt
                  (AntiAliasingLevel__Enum level,MethodInfo *method)

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

float Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
      ProfileSettingsManager_CalculateMouseSensitivityFromValue(float value,MethodInfo *method)

{
  uStack_1 = 1.0;
  if (value < _UNK_?) {
    uStack_1 = _UNK_? /
               ((_UNK_? - value / _UNK_?) * _UNK_? + _UNK_?);
  }
  else if (_UNK_? < value) {
    return ((value - _UNK_?) / _UNK_?) * _UNK_? + _UNK_?;
  }
  return uStack_1;
}


/* Object GetSettingValue(ProfileSettingKey) */

Object * Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
         ProfileSettingsManager_GetSettingValue
                   (ProfileSettingKey__Enum profileSetting,MethodInfo *method)

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
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting =
         (ProfileSettingKey__Enum)
         TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         mouseSensitivity;
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_TargetFrameRate:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,
                             &profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_TextureQuality:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    break;
  case ProfileSettingKey__Enum_TextureFilter:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)func_?(TypeInfo__UnityEngine__FilterMode,&profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_AnistropicFiltering:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                             &profileSetting);
    return pOVar1;
  case ProfileSettingKey__Enum_AntiAliasing:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&profileSetting)
    ;
    return pOVar1;
  case ProfileSettingKey__Enum_LightQuality:
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    profileSetting = func_?(0);
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,
                             &profileSetting);
    return pOVar1;
  default:
    return (Object *)0x0;
  }
  profileSetting = func_?(0);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&profileSetting)
  ;
  return pOVar1;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void Init(ProfileSettingsState) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_Init(ProfileSettingsState *profileSettingsState,MethodInfo *method)

{
  pMVar1 = (MethodInfo *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  VerticalVirtualizationController`1[System::Object]::
  VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
            ((VerticalVirtualizationController_1_System_Object_ *)0x0,unaff_EBP);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    unaff_EBP = (MethodInfo *)&UNK_?;
    func_?();
  }
  cVar2 = (int)profileSettingsState < 0;
  bVar3 = profileSettingsState == (ProfileSettingsState *)0x0;
  pMVar4 = (MaterialLoader *)0x0;
  if (!bVar3) {
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar6 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar5,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    mouseSensitivity = fVar6;
    unaff_EBP = (MethodInfo *)profileSettingsState;
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         (ProfileSettingKey__Enum)fVar6,(MethodInfo *)0x0);
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TargetFrameRate_k__BackingField = iVar7;
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         ProfileSettingKey__Enum_TextureQuality,(MethodInfo *)0x0);
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TextureQualityLevel_k__BackingField = iVar7;
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         ProfileSettingKey__Enum_TextureFilter,(MethodInfo *)0x0);
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TextureFilter_k__BackingField = iVar7;
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         ProfileSettingKey__Enum_AnistropicFiltering,(MethodInfo *)0x0);
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _AnistropicFilteringLevel_k__BackingField = iVar7;
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         ProfileSettingKey__Enum_AntiAliasing,(MethodInfo *)0x0);
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _AntiAliasingLevel_k__BackingField = iVar7;
    pOVar5 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetProfileSettingValue
                        (profileSettingsState,SettingsPlatform__Enum_Standalone,
                         ProfileSettingKey__Enum_LightQuality,(MethodInfo *)0x0);
    iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar8 = _UNK_?;
    pPVar9 = _UNK_?;
    profileSettingsState = _UNK_?;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _LightQualityLevel_k__BackingField = iVar7;
    fVar6 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
             mouseSensitivity;
    if (fVar6 < fVar8) {
      profileSettingsState =
           (ProfileSettingsState *)
           ((float)pPVar9 / (((float)pPVar9 - fVar6 / fVar8) * _UNK_? + (float)pPVar9));
    }
    else if (fVar8 < fVar6) {
      profileSettingsState =
           (ProfileSettingsState *)((float)pPVar9 + ((fVar6 - fVar8) / fVar8) * _UNK_?);
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
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    cVar2 = (int)pMVar4 < 0;
    bVar3 = pMVar4 == (MaterialLoader *)0x0;
    unaff_EDI = in_stack_10;
    if (!bVar3) {
      MaterialLoader::MaterialLoader_SetTextureQuality
                (pMVar4,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                         static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      cVar2 = (int)pMVar11 < 0;
      bVar3 = pMVar11 == (MaterialLoader *)0x0;
      if (!bVar3) {
        pMVar12 = (pMVar11->fields)._CubeModelMaterial_k__BackingField;
        cVar2 = (int)pMVar12 < 0;
        bVar3 = pMVar12 == (Material *)0x0;
        if (!bVar3) {
          pMVar4 = (MaterialLoader *)
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                              (pMVar12,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          cVar2 = (int)pMVar4 < 0;
          bVar3 = pMVar4 == (MaterialLoader *)0x0;
          if (!bVar3) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                      ((Texture *)pMVar4,
                       TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_AntiAliasingLevel_k__BackingField) {
            default:
              iVar7 = 0;
              break;
            case 1:
              iVar7 = 2;
              break;
            case 2:
              iVar7 = 4;
              break;
            case 3:
              iVar7 = 8;
            }
            UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
            QualitySettings_set_antiAliasing(iVar7,(MethodInfo *)0x0);
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                ((MethodInfo *)0x0);
            cVar2 = (int)pMVar11 < 0;
            bVar3 = pMVar11 == (MaterialLoader *)0x0;
            if (!bVar3) {
              pMVar12 = (pMVar11->fields)._CubeModelMaterial_k__BackingField;
              cVar2 = (int)pMVar12 < 0;
              bVar3 = pMVar12 == (Material *)0x0;
              if (!bVar3) {
                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_get_mainTexture(pMVar12,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_AnistropicFilteringLevel_k__BackingField) {
                default:
                  iVar7 = 0;
                  break;
                case 1:
                  iVar7 = 1;
                  break;
                case 2:
                  iVar7 = 2;
                  break;
                case 3:
                  iVar7 = 4;
                  break;
                case 4:
                  iVar7 = 8;
                  break;
                case 5:
                  iVar7 = 0x10;
                }
                cVar2 = (int)pTVar13 < 0;
                bVar3 = pTVar13 == (Texture *)0x0;
                pMVar4 = (MaterialLoader *)0x0;
                if (!bVar3) {
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar13,iVar7,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                          static_fields->_TargetFrameRate_k__BackingField;
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                       cctor_finished_or_no_cctor == 0) &&
                     (func_?(),
                     (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                     cctor_finished_or_no_cctor == 0)) {
                    func_?();
                  }
                  ProfileSettingsManager_SetFrameRateDesktop(value,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  ProfileSettingsManager_SetLightQualitySetting
                            (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  cVar14 = '\0';
  bVar15 = 0;
  uVar16 = func_?();
  uVar17 = (uint)((ulonglong)uVar16 >> 0x20);
  pbVar18 = (byte *)uVar16;
  if (bVar3 || cVar14 != cVar2) {
    bVar19 = (byte)((ulonglong)uVar16 >> 0x20);
    bVar20 = (byte)((ulonglong)uVar16 >> 0x28);
    bVar21 = bVar19 + bVar20;
    bVar3 = CARRY1(bVar19,bVar20) || CARRY1(bVar21,bVar15);
    cVar2 = bVar21 + bVar15;
    if (cVar2 == '\0' || (SCARRY1(bVar19,bVar20) != SCARRY1(bVar21,bVar15)) != cVar2 < '\0')
    goto code_?;
    bVar21 = (byte)extraout_ECX;
    bVar20 = (byte)((uint)unaff_EBX >> 8);
    bVar15 = bVar21 + bVar20;
    bVar22 = CARRY1(bVar21,bVar20) || CARRY1(bVar15,bVar3);
    bVar19 = bVar15 + bVar3;
    if (bVar19 == 0 || (SCARRY1(bVar21,bVar20) != SCARRY1(bVar15,bVar3)) != (char)bVar19 < '\0') {
      puVar23 = (ushort *)(pbVar18 + (int)register0x00000010 + bVar22 + 0x8868ffc5);
      sVar24 = ((ushort)unaff_EDI & 3) - (*puVar23 & 3);
      *puVar23 = *puVar23 + (ushort)(0 < sVar24) * sVar24;
    }
    else {
      bVar20 = (byte)uVar16;
      bVar15 = *pbVar18;
      bVar21 = *pbVar18 + bVar20;
      bVar3 = CARRY1(*pbVar18,bVar20) || CARRY1(bVar21,bVar22);
      *pbVar18 = bVar21 + bVar22;
      if (*pbVar18 != 0 &&
          (SCARRY1(bVar15,bVar20) != SCARRY1(bVar21,bVar22)) == (char)*pbVar18 < '\0') {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pbVar18 + -0x78))();
        return;
      }
      pbVar25 = (byte *)((int)&pMVar4[-0x11d9192].fields.midTexture2DArray + 3);
      bVar20 = (byte)((ulonglong)uVar16 >> 8);
      bVar15 = *pbVar25;
      bVar21 = *pbVar25 + bVar20;
      bVar22 = CARRY1(*pbVar25,bVar20) || CARRY1(bVar21,bVar3);
      *pbVar25 = bVar21 + bVar3;
      if (*pbVar25 == 0 || (SCARRY1(bVar15,bVar20) != SCARRY1(bVar21,bVar3)) != (char)*pbVar25 < '\0'
         ) {
        pbVar25 = (byte *)(CONCAT31((int3)((ulonglong)uVar16 >> 0x28),cVar2) + -0x6eefaf81);
        bVar15 = *pbVar25;
        bVar21 = *pbVar25 + bVar19;
        bVar3 = CARRY1(*pbVar25,bVar19) || CARRY1(bVar21,bVar22);
        *pbVar25 = bVar21 + bVar22;
        if (*pbVar25 == 0 ||
            (SCARRY1(bVar15,bVar19) != SCARRY1(bVar21,bVar22)) != (char)*pbVar25 < '\0') {
          pbVar18 = pbVar18 + -0x60efaf81;
          bVar15 = *pbVar18;
          cVar2 = *pbVar18 + (char)unaff_EBX;
          *pbVar18 = cVar2 + bVar3;
          if (*pbVar18 == 0 ||
              (SCARRY1(bVar15,(char)unaff_EBX) != SCARRY1(cVar2,bVar3)) != (char)*pbVar18 < '\0')
          {
            pcVar26 = (code *)swi(3);
            (*pcVar26)();
            return;
          }
        }
        else {
          unaff_EDI = (MaterialLoader *)
                      ((int)&unaff_EDI[-1].fields.lowTexture2D + TargetFrameRateValue__Enum_High);
        }
      }
    }
    *(int *)(unaff_EBX + 0x5c618c4) = *(int *)(unaff_EBX + 0x5c618c4) + 1;
    pMVar1 = unaff_EBP;
  }
  else {
    pMVar27 = (MaterialLoader__Class *)in((short)((ulonglong)uVar16 >> 0x20));
    unaff_EDI->klass = pMVar27;
    pbVar18 = (byte *)(extraout_ECX + ((int)uVar17 >> 3));
    *pbVar18 = *pbVar18 & ~('\x01' << (uVar17 & 7));
    unaff_EDI = (MaterialLoader *)&unaff_EDI->monitor;
code_?:
    func_?();
    func_?();
    func_?();
    func_?();
    uRam_? = 1;
  }
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pMVar1[-0xffffffff00000001].flags = 0;
  pMVar1[-0xffffffff00000001].iflags = 0;
  pOVar5 = (Object *)func_?();
  if (this == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
            (this,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar5,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
            ProfileSettingsState_GetDefaultProfileSettingsValues
                      (SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
  if (this_00 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0)
  goto code_?;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar6 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar5,(MethodInfo *)0x0);
  *(float *)&pMVar1[-1].slot = fVar6;
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  mouseSensitivity = *(float *)&pMVar1[-1].slot;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TargetFrameRate_k__BackingField = iVar7;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TextureQualityLevel_k__BackingField = iVar7;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TextureFilter_k__BackingField = iVar7;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _AnistropicFilteringLevel_k__BackingField = iVar7;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _AntiAliasingLevel_k__BackingField = iVar7;
  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar5,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fVar8 = _UNK_?;
  pPVar9 = _UNK_?;
  pPVar28 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields;
  *(ProfileSettingsState **)&pMVar1[-1].slot = _UNK_?;
  pPVar28->_LightQualityLevel_k__BackingField = iVar7;
  fVar6 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           mouseSensitivity;
  if (fVar6 < fVar8) {
    fVar6 = (float)pPVar9 / (((float)pPVar9 - fVar6 / fVar8) * _UNK_? + (float)pPVar9);
code_?:
    *(float *)&pMVar1[-1].slot = fVar6;
  }
  else if (fVar8 < fVar6) {
    fVar6 = (float)pPVar9 + ((fVar6 - fVar8) / fVar8) * _UNK_?;
    goto code_?;
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
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = *(float *)&pMVar1[-1].slot;
  unaff_EDI = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (unaff_EDI != (MaterialLoader *)0x0) {
    MaterialLoader::MaterialLoader_SetTextureQuality
              (unaff_EDI,
               TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
               _TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if ((pMVar4 != (MaterialLoader *)0x0) &&
       (pMVar12 = (pMVar4->fields)._CubeModelMaterial_k__BackingField, pMVar12 != (Material *)0x0)) {
      unaff_EDI = (MaterialLoader *)
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                            (pMVar12,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (unaff_EDI != (MaterialLoader *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)unaff_EDI,
                   TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
               _AntiAliasingLevel_k__BackingField) {
        default:
          iVar7 = 0;
          break;
        case 1:
          iVar7 = 2;
          break;
        case 2:
          iVar7 = 4;
          break;
        case 3:
          iVar7 = 8;
        }
        UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_antiAliasing
                  (iVar7,(MethodInfo *)0x0);
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if ((pMVar4 != (MaterialLoader *)0x0) &&
           (pMVar12 = (pMVar4->fields)._CubeModelMaterial_k__BackingField, pMVar12 != (Material *)0x0
           )) {
          pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                              (pMVar12,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
                 _AnistropicFilteringLevel_k__BackingField) {
          default:
            iVar7 = 0;
            break;
          case 1:
            iVar7 = 1;
            break;
          case 2:
            iVar7 = 2;
            break;
          case 3:
            iVar7 = 4;
            break;
          case 4:
            iVar7 = 8;
            break;
          case 5:
            iVar7 = 0x10;
          }
          unaff_EDI = (MaterialLoader *)0x0;
          if (pTVar13 != (Texture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                      (pTVar13,iVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            unaff_EDI = (MaterialLoader *)
                        TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                        static_fields->_TargetFrameRate_k__BackingField;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                 cctor_finished_or_no_cctor == 0) &&
               (func_?(),
               (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
               cctor_finished_or_no_cctor == 0)) {
              func_?();
            }
            ProfileSettingsManager_SetFrameRateDesktop
                      ((TargetFrameRateValue__Enum)unaff_EDI,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            ProfileSettingsManager_SetLightQualitySetting
                      (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
            pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                     static_fields->ProfileSettingsChanged;
            if (pDVar29 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                           *)0x0) {
              unaff_EDI = (MaterialLoader *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,0,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                    );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                        );
              if (unaff_EDI != (MaterialLoader *)0x0) {
                (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                         static_fields->ProfileSettingsChanged;
                if (pDVar29 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                               *)0x0) {
                  unaff_EDI = (MaterialLoader *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,1,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                        );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                            );
                  if (unaff_EDI != (MaterialLoader *)0x0) {
                    (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                    pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->ProfileSettingsChanged;
                    if (pDVar29 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                   *)0x0) {
                      unaff_EDI = (MaterialLoader *)
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,
                                             2,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                            );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                );
                      if (unaff_EDI != (MaterialLoader *)0x0) {
                        (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                        pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 ->static_fields->ProfileSettingsChanged;
                        if (pDVar29 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                       *)0x0) {
                          unaff_EDI = (MaterialLoader *)
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 pDVar29,3,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                );
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                    );
                          if (unaff_EDI != (MaterialLoader *)0x0) {
                            (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                            pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                     ->static_fields->ProfileSettingsChanged;
                            if (pDVar29 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                           *)0x0) {
                              unaff_EDI = (MaterialLoader *)
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )pDVar29,4,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                        );
                              if (unaff_EDI != (MaterialLoader *)0x0) {
                                (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                                pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                         ->static_fields->ProfileSettingsChanged;
                                if (pDVar29 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                               *)0x0) {
                                  unaff_EDI = (MaterialLoader *)
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar29,5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00
                                             ,5,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                            );
                                  if (unaff_EDI != (MaterialLoader *)0x0) {
                                    (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                                    pDVar29 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                             ->static_fields->ProfileSettingsChanged;
                                    if (pDVar29 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                      pOVar5 = mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Int32Enum,System::Object]::
                                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                          ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar29,6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_00,6,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                );
                                      unaff_EDI = (MaterialLoader *)0x0;
                                      if (pOVar5 != (Object *)0x0) {
                                        (*(code *)pOVar5[1].monitor)();
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar30 = func_?();
  iVar31 = CONCAT31((int3)((uint6)uVar30 >> 8),0x85);
  pcVar32 = (char *)((int)&unaff_EDI[0xd4b793].fields.defaultDiffuseShader + 1);
  *pcVar32 = *pcVar32 + (char)((uint6)uVar30 >> 0x28);
  LOCK();
  pcVar32 = (char *)(iVar31 + 0x10);
  cVar2 = *pcVar32;
  *pcVar32 = (char)((uint6)uVar30 >> 0x20);
  UNLOCK();
  pbVar18 = (byte *)(iVar31 + -0x7a);
  bVar3 = CARRY1(*pbVar18,extraout_CL) || CARRY1(*pbVar18 + extraout_CL,0x85 < bRam_?);
  *pbVar18 = *pbVar18 + extraout_CL + (0x85 < bRam_?);
  pbVar18 = (byte *)((int)&unaff_EDI[-2].fields.highTexture2D + 2);
  bVar21 = *pbVar18;
  bVar15 = *pbVar18;
  *pbVar18 = bVar15 + extraout_CL + bVar3;
  cRam_? = cRam_? + cVar2 +
                 (CARRY1(bVar21,extraout_CL) || CARRY1(bVar15 + extraout_CL,bVar3));
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void InitTourist() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_InitTourist(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    cRam_? = '\x01';
  }
  this = (ProfileSettingsState *)
         func_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState__ctor
            (this,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  ProfileSettingsManager_Init(this,(MethodInfo *)0x0);
  return;
}


/* Void ResetToDefaultValues() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_ResetToDefaultValues(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  this = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  puStack_1 = (undefined *)0x0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&puStack_1);
  if (this != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
              (this,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar2,(MethodInfo *)0x0);
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_00 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
              ProfileSettingsState_GetDefaultProfileSettingsValues
                        (SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar2,(MethodInfo *)0x0);
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      mouseSensitivity = fVar3;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      _TargetFrameRate_k__BackingField = iVar4;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      _TextureQualityLevel_k__BackingField = iVar4;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      _TextureFilter_k__BackingField = iVar4;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      _AnistropicFilteringLevel_k__BackingField = iVar4;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      _AntiAliasingLevel_k__BackingField = iVar4;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          );
      iVar4 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = _UNK_?;
      fVar6 = _UNK_?;
      TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
      _LightQualityLevel_k__BackingField = iVar4;
      fVar3 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
               mouseSensitivity;
      if (fVar3 < fVar5) {
        fVar6 = fVar6 / ((fVar6 - fVar3 / fVar5) * _UNK_? + fVar6);
      }
      else if (fVar5 < fVar3) {
        fVar6 = fVar6 + ((fVar3 - fVar5) / fVar5) * _UNK_?;
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
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (unaff_EDI != (MaterialLoader *)0x0) {
        MaterialLoader::MaterialLoader_SetTextureQuality
                  (unaff_EDI,
                   TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if ((pMVar7 != (MaterialLoader *)0x0) &&
           (pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField, pMVar8 != (Material *)0x0
           )) {
          unaff_EDI = (MaterialLoader *)
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                (pMVar8,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (unaff_EDI != (MaterialLoader *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                      ((Texture *)unaff_EDI,
                       TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_AntiAliasingLevel_k__BackingField) {
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
            UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
            QualitySettings_set_antiAliasing(iVar4,(MethodInfo *)0x0);
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                ((MethodInfo *)0x0);
            if ((pMVar7 != (MaterialLoader *)0x0) &&
               (pMVar8 = (pMVar7->fields)._CubeModelMaterial_k__BackingField,
               pMVar8 != (Material *)0x0)) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                  (pMVar8,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                     static_fields->_AnistropicFilteringLevel_k__BackingField) {
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
              unaff_EDI = (MaterialLoader *)0x0;
              if (this_01 != (Texture *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                          (this_01,iVar4,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                unaff_EDI = (MaterialLoader *)
                            TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                            static_fields->_TargetFrameRate_k__BackingField;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                     cctor_finished_or_no_cctor == 0) &&
                   (func_?(),
                   (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   cctor_finished_or_no_cctor == 0)) {
                  func_?();
                }
                ProfileSettingsManager_SetFrameRateDesktop
                          ((TargetFrameRateValue__Enum)unaff_EDI,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                ProfileSettingsManager_SetLightQualitySetting
                          (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                           static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
                pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                         static_fields->ProfileSettingsChanged;
                if (pDVar9 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                               *)0x0) {
                  unaff_EDI = (MaterialLoader *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,0,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                        );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                            );
                  if (unaff_EDI != (MaterialLoader *)0x0) {
                    (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                    pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->ProfileSettingsChanged;
                    if (pDVar9 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                   *)0x0) {
                      unaff_EDI = (MaterialLoader *)
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,
                                             1,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                            );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                );
                      if (unaff_EDI != (MaterialLoader *)0x0) {
                        (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                        pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 ->static_fields->ProfileSettingsChanged;
                        if (pDVar9 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                       *)0x0) {
                          unaff_EDI = (MaterialLoader *)
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 pDVar9,2,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                );
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                    );
                          if (unaff_EDI != (MaterialLoader *)0x0) {
                            (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                            pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                     ->static_fields->ProfileSettingsChanged;
                            if (pDVar9 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                           *)0x0) {
                              unaff_EDI = (MaterialLoader *)
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )pDVar9,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                        );
                              if (unaff_EDI != (MaterialLoader *)0x0) {
                                (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                                pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                         ->static_fields->ProfileSettingsChanged;
                                if (pDVar9 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                               *)0x0) {
                                  unaff_EDI = (MaterialLoader *)
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar9,4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00
                                             ,4,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                            );
                                  if (unaff_EDI != (MaterialLoader *)0x0) {
                                    (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)();
                                    pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                             ->static_fields->ProfileSettingsChanged;
                                    if (pDVar9 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                      unaff_EDI = (MaterialLoader *)
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar9,5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_00,5,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                );
                                      if (unaff_EDI != (MaterialLoader *)0x0) {
                                        (*(code *)(unaff_EDI->fields)._.m_CancellationTokenSource)()
                                        ;
                                        pDVar9 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                                 ->static_fields->ProfileSettingsChanged;
                                        if (pDVar9 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                          pOVar2 = mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar9,6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_00,6,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                          unaff_EDI = (MaterialLoader *)0x0;
                                          if (pOVar2 != (Object *)0x0) {
                                            (*(code *)pOVar2[1].monitor)();
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar10 = func_?();
  iVar11 = CONCAT31((int3)((uint6)uVar10 >> 8),0x85);
  pcVar12 = (char *)((int)&unaff_EDI[0xd4b793].fields.defaultDiffuseShader + 1);
  *pcVar12 = *pcVar12 + (char)((uint6)uVar10 >> 0x28);
  LOCK();
  pcVar12 = (char *)(iVar11 + 0x10);
  cVar13 = *pcVar12;
  *pcVar12 = (char)((uint6)uVar10 >> 0x20);
  UNLOCK();
  pbVar14 = (byte *)(iVar11 + -0x7a);
  bVar15 = CARRY1(*pbVar14,extraout_CL) || CARRY1(*pbVar14 + extraout_CL,0x85 < bRam_?);
  *pbVar14 = *pbVar14 + extraout_CL + (0x85 < bRam_?);
  pbVar14 = (byte *)((int)&unaff_EDI[-2].fields.highTexture2D + 2);
  bVar16 = *pbVar14;
  bVar17 = *pbVar14;
  *pbVar14 = bVar17 + extraout_CL + bVar15;
  cRam_? = cRam_? + cVar13 +
                 (CARRY1(bVar16,extraout_CL) || CARRY1(bVar17 + extraout_CL,bVar15));
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void SetFrameRateDesktop(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetFrameRateDesktop(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Application);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate
            (-1,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
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

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetFrameRateSetting(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if (((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
       cctor_finished_or_no_cctor == 0) &&
     (func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager),
     (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
     cctor_finished_or_no_cctor == 0)) {
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
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate
            (-1,(MethodInfo *)0x0);
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
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

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetFrameRateTouch(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
            ((Resolution *)&puStack_1,(MethodInfo *)0x0);
  TVar2 = mscorlib.dll::System::Nullable`1[TimeSpan]::Nullable_1_TimeSpan__GetValueOrDefault
                    ((Nullable_1_TimeSpan_ *)&stack0xffffffe8,(MethodInfo *)0x0);
  iVar3 = (int)((ulonglong)TVar2._ticks >> 0x20);
  fStack_4 = (float)(((double)(int)TVar2._ticks +
                     *(double *)(&UNK_? + ((int)TVar2._ticks >> 0x1f) * -8)) /
                    ((double)iVar3 + *(double *)(&UNK_? + (iVar3 >> 0x1f) * -8)));
  if (value != TargetFrameRateValue__Enum_SameAsScreenHz) {
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
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
  UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_vSyncCount
            (0,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Application::Application_set_targetFrameRate
            ((int)fStack_4,(MethodInfo *)0x0);
  return;
}


/* Void SetLightQualitySetting(LightingQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetLightQualitySetting
               (LightingQualityLevel__Enum level,MethodInfo *method)

{
  if (level == LightingQualityLevel__Enum_Low) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
              (1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_softParticles
              (0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
    QualitySettings_set_particleRaycastBudget(4,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadows
              (ShadowQuality__Enum_Disable,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_lodBias
              (0.7,(MethodInfo *)0x0);
  }
  else {
    if (level == LightingQualityLevel__Enum_Medium) {
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
                (2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_softParticles
                (0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
      QualitySettings_set_particleRaycastBudget(4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadows
                (ShadowQuality__Enum_HardOnly,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowResolution
                (ShadowResolution__Enum_Low,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowDistance
                (40.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowCascades
                (2,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
      QualitySettings_set_shadowCascade2Split(0.333,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_lodBias
                (1.0,(MethodInfo *)0x0);
      return;
    }
    if (level == LightingQualityLevel__Enum_High) {
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
                (4,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_softParticles
                (1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
      QualitySettings_set_particleRaycastBudget(0x10,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadows
                (ShadowQuality__Enum_All,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowResolution
                (ShadowResolution__Enum_High,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowDistance
                (80.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_shadowCascades
                (4,(MethodInfo *)0x0);
      value.y = (float)_UNK_?;
      value.x = (float)_UNK_?;
      value.z = 0.27;
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
      QualitySettings_set_shadowCascade4Split(value,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_lodBias
                (1.5,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void SetSettingValue(ProfileSettingKey, Object) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetSettingValue
               (ProfileSettingKey__Enum profileSetting,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
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
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
              (this_00,profileSetting,value,(MethodInfo *)0x0);
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           ProfileSettingsChanged;
    unaff_ESI = value;
    if ((this != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                 0x0) &&
       (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this,profileSetting,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           ), pOVar1 != (Object *)0x0)) {
      (*(code *)pOVar1[1].monitor)();
      switch(profileSetting) {
      case ProfileSettingKey__Enum_MouseSensitivity:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar2 = (float *)func_?();
            TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            mouseSensitivity = *pfVar2;
            ProfileSettingsManager_CalculateMouseSensitivityFromValue
                      (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->mouseSensitivity,(MethodInfo *)0x0);
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
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class ==
              (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
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
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class !=
              (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class)
          goto code_?;
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
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class !=
              (TypeInfo__UnityEngine__FilterMode->_0).element_class) goto code_?;
          puVar3 = (undefined4 *)func_?();
          func_?(*puVar3);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar4 != (MaterialLoader *)0x0) &&
             (pMVar5 = (pMVar4->fields)._CubeModelMaterial_k__BackingField,
             pMVar5 != (Material *)0x0)) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (pMVar5,(MethodInfo *)0x0);
            value_01 = func_?();
            unaff_ESI = (Object *)0x0;
            if (pTVar6 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        (pTVar6,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      case ProfileSettingKey__Enum_AnistropicFiltering:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class !=
              (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class)
          goto code_?;
          puVar3 = (undefined4 *)func_?();
          func_?(*puVar3);
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar4 != (MaterialLoader *)0x0) &&
             (pMVar5 = (pMVar4->fields)._CubeModelMaterial_k__BackingField,
             pMVar5 != (Material *)0x0)) {
            method_00 = (MethodInfo *)&UNK_?;
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (pMVar5,(MethodInfo *)0x0);
            level = func_?();
            iVar7 = ProfileSettingsManager_AnisoLevelToInt(level,method_00);
            unaff_ESI = (Object *)0x0;
            if (pTVar6 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                        (pTVar6,iVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      case ProfileSettingKey__Enum_AntiAliasing:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class ==
              (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
            puVar3 = (undefined4 *)func_?();
            func_?(*puVar3);
            level_00 = func_?();
            iVar7 = ProfileSettingsManager_AntiAliasingLevelToInt(level_00,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
            QualitySettings_set_antiAliasing(iVar7,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        break;
      case ProfileSettingKey__Enum_LightQuality:
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (value != (Object *)0x0) {
          if ((value->klass->_0).element_class ==
              (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
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
  func_?();
  out(*(undefined1 *)&unaff_ESI->klass,extraout_DX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Int32 TargetFrameRateToInt(TargetFrameRateValue) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
        ProfileSettingsManager_TargetFrameRateToInt
                  (TargetFrameRateValue__Enum value,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
        ProfileSettingsManager_TargetFrameRateToVSyncValue
                  (TargetFrameRateValue__Enum value,MethodInfo *method)

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

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_0_System__Object_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_1_System__Object_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_2_System__Object_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_3_System__Object_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_4_System__Object_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_5_System__Object_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_6_System__Object_
                   );
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Dictionary__
            );
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
  }
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
           func_?(TypeInfo__System__Action<System::Object>);
  Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
  SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (pSVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_0_System__Object_
             ,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    pOVar1 = (Object *)
             TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields
             ->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar2,pOVar1,
               MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_1_System__Object_
               ,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    pOVar1 = (Object *)
             TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields
             ->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar2,pOVar1,
               MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_2_System__Object_
               ,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    pOVar1 = (Object *)
             TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields
             ->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar2,pOVar1,
               MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_3_System__Object_
               ,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    pOVar1 = (Object *)
             TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields
             ->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar2,pOVar1,
               MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_4_System__Object_
               ,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    pOVar1 = (Object *)
             TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields
             ->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar2,pOVar1,
               MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_5_System__Object_
               ,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    pOVar1 = (Object *)
             TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields
             ->__9;
    pSVar2 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (pSVar2,pOVar1,
               MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_6_System__Object_
               ,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              );
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    ProfileSettingsChanged =
         (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)this;
    func_?();
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    mouseSensitivity = 50.5;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TargetFrameRate_k__BackingField = 4;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TextureQualityLevel_k__BackingField = 0;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TextureFilter_k__BackingField = 0;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _AnistropicFilteringLevel_k__BackingField = 4;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _LightQualityLevel_k__BackingField = 0;
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _AntiAliasingLevel_k__BackingField = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* AnistropicFilteringLevel get_AnistropicFilteringLevel() */

AnistropicFilteringLevel__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_AnistropicFilteringLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _AnistropicFilteringLevel_k__BackingField;
}


/* AntiAliasingLevel get_AntiAliasingLevel() */

AntiAliasingLevel__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_AntiAliasingLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _AntiAliasingLevel_k__BackingField;
}


/* LightingQualityLevel get_LightQualityLevel() */

LightingQualityLevel__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_LightQualityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _LightQualityLevel_k__BackingField;
}


/* TargetFrameRateValue get_TargetFrameRate() */

TargetFrameRateValue__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_TargetFrameRate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _TargetFrameRate_k__BackingField;
}


/* FilterMode get_TextureFilter() */

FilterMode__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_TextureFilter(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _TextureFilter_k__BackingField;
}


/* TextureQualityLevel get_TextureQualityLevel() */

TextureQualityLevel__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_TextureQualityLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  return TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         _TextureQualityLevel_k__BackingField;
}


/* Void set_AnistropicFilteringLevel(AnistropicFilteringLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_set_AnistropicFilteringLevel
               (AnistropicFilteringLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _AnistropicFilteringLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _AnistropicFilteringLevel_k__BackingField = value;
  return;
}


/* Void set_AntiAliasingLevel(AntiAliasingLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_set_AntiAliasingLevel(AntiAliasingLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _AntiAliasingLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _AntiAliasingLevel_k__BackingField = value;
  return;
}


/* Void set_LightQualityLevel(LightingQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_set_LightQualityLevel
               (LightingQualityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _LightQualityLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _LightQualityLevel_k__BackingField = value;
  return;
}


/* Void set_TargetFrameRate(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_set_TargetFrameRate(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TargetFrameRate_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TargetFrameRate_k__BackingField = value;
  return;
}


/* Void set_TextureFilter(FilterMode) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_set_TextureFilter(FilterMode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TextureFilter_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TextureFilter_k__BackingField = value;
  return;
}


/* Void set_TextureQualityLevel(TextureQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_set_TextureQualityLevel
               (TextureQualityLevel__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    _TextureQualityLevel_k__BackingField = value;
    return;
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TextureQualityLevel_k__BackingField = value;
  return;
}

