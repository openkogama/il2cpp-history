
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
  if (level != AntiAliasingLevel__Enum_off) {
    if (level == AntiAliasingLevel__Enum_x2) {
      return 2;
    }
    if (level == AntiAliasingLevel__Enum_x4) {
      return 4;
    }
    if (level == AntiAliasingLevel__Enum_x8) {
      return 8;
    }
  }
  return 0;
}


/* Single CalculateMouseSensitivityFromValue(Single) */

float Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
      ProfileSettingsManager_CalculateMouseSensitivityFromValue(float value,MethodInfo *method)

{
  if (value < _UNK_?) {
    fVar1 = _UNK_? /
            ((_UNK_? - value / _UNK_?) * _UNK_? + _UNK_?);
  }
  else {
    fVar1 = _UNK_?;
    if (_UNK_? < value) {
      return ((value - _UNK_?) / _UNK_?) * _UNK_? + _UNK_?;
    }
  }
  return fVar1;
}


/* Object GetSettingValue(ProfileSettingKey) */

Object * Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
         ProfileSettingsManager_GetSettingValue
                   (ProfileSettingKey__Enum profileSetting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  switch(profileSetting) {
  case ProfileSettingKey__Enum_MouseSensitivity:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    afStackX_8[0] =
         TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
         mouseSensitivity;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
    return pOVar1;
  case ProfileSettingKey__Enum_TargetFrameRate:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    afStackX_8[0] = (float)FUN_?();
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,afStackX_8);
    return pOVar1;
  case ProfileSettingKey__Enum_TextureQuality:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    break;
  case ProfileSettingKey__Enum_TextureFilter:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    afStackX_8[0] = (float)FUN_?();
    pOVar1 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode,afStackX_8);
    return pOVar1;
  case ProfileSettingKey__Enum_AnistropicFiltering:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    afStackX_8[0] = (float)FUN_?();
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,afStackX_8)
    ;
    return pOVar1;
  case ProfileSettingKey__Enum_AntiAliasing:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    afStackX_8[0] = (float)FUN_?();
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,afStackX_8);
    return pOVar1;
  case ProfileSettingKey__Enum_LightQuality:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    afStackX_8[0] = (float)FUN_?();
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,afStackX_8);
    return pOVar1;
  default:
    return (Object *)0x0;
  }
  afStackX_8[0] = (float)FUN_?();
  pOVar1 = (Object *)
           FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,afStackX_8);
  return pOVar1;
}


/* Void Init(ProfileSettingsState) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_Init(ProfileSettingsState *profileSettingsState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (profileSettingsState != (ProfileSettingsState *)0x0) {
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar1,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    mouseSensitivity = fVar2;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_TargetFrameRate,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_TextureQuality,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_TextureFilter,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_AnistropicFiltering,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_AntiAliasing,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (profileSettingsState,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_LightQuality,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    fVar2 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            mouseSensitivity;
    if (fVar2 < _UNK_?) {
      fVar4 = _UNK_? /
               ((_UNK_? - fVar2 / _UNK_?) * _UNK_? + _UNK_?);
    }
    else {
      fVar4 = _UNK_?;
      if (_UNK_? < fVar2) {
        fVar4 = ((fVar2 - _UNK_?) / _UNK_?) * _UNK_? + _UNK_?;
      }
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    FUN_?(fVar4);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    if (pMVar5 != (MaterialLoader *)0x0) {
      MaterialLoader::MaterialLoader_SetTextureQuality
                (pMVar5,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                        static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar5 != (MaterialLoader *)0x0) &&
         (pMVar6 = (pMVar5->fields)._CubeModelMaterial_k__BackingField, pMVar6 != (Material *)0x0))
      {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                           (pMVar6,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        if (pTVar7 != (Texture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    (pTVar7,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                            static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                       field_0x1c == 0) {
            FUN_?();
          }
          iVar3 = 0;
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)();
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar5 != (MaterialLoader *)0x0) &&
             (pMVar6 = (pMVar5->fields)._CubeModelMaterial_k__BackingField,
             pMVar6 != (Material *)0x0)) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (pMVar6,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_AnistropicFilteringLevel_k__BackingField) {
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
            if (pTVar7 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                        (pTVar7,iVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                      static_fields->_TargetFrameRate_k__BackingField;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1)
                            .field_0x1c == 0) &&
                 (FUN_?(),
                 *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                          field_0x1c == 0)) {
                FUN_?();
              }
              ProfileSettingsManager_SetFrameRateDesktop(value,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              iVar10 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                      static_fields->_LightQualityLevel_k__BackingField;
              if (iVar10 == 0) {
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?,0), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(1);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(0);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(4);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(0);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(_UNK_?);
              }
              else {
                if (iVar10 == 1) {
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(0);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(4);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(1);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(0);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  return;
                }
                if (iVar10 == 2) {
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(4);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(1);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(0x10);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(4);
                  uStack_11 = CONCAT44(_UNK_?,_UNK_?);
                  uStack_12 = _UNK_?;
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(&uStack_11);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitTourist() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_InitTourist(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (ProfileSettingsState *)
         FUN_?(TypeInfo__MV__WorldObject__MetaData__ProfileSettingsState);
  MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::ProfileSettingsState__ctor
            (this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (this != (ProfileSettingsState *)0x0) {
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar1,(MethodInfo *)0x0);
    TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
    mouseSensitivity = fVar2;
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_TargetFrameRate,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_TextureQuality,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_TextureFilter
                        ,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,
                        ProfileSettingKey__Enum_AnistropicFiltering,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_AntiAliasing,
                        (MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    pOVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
             ProfileSettingsState_GetProfileSettingValue
                       (this,SettingsPlatform__Enum_Standalone,ProfileSettingKey__Enum_LightQuality,
                        (MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
    FUN_?(iVar3);
    fVar2 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            mouseSensitivity;
    if (fVar2 < _UNK_?) {
      fVar4 = _UNK_? /
               ((_UNK_? - fVar2 / _UNK_?) * _UNK_? + _UNK_?);
    }
    else {
      fVar4 = _UNK_?;
      if (_UNK_? < fVar2) {
        fVar4 = ((fVar2 - _UNK_?) / _UNK_?) * _UNK_? + _UNK_?;
      }
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    FUN_?(fVar4);
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    if (pMVar5 != (MaterialLoader *)0x0) {
      MaterialLoader::MaterialLoader_SetTextureQuality
                (pMVar5,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                        static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar5 != (MaterialLoader *)0x0) &&
         (pMVar6 = (pMVar5->fields)._CubeModelMaterial_k__BackingField, pMVar6 != (Material *)0x0))
      {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                           (pMVar6,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        if (pTVar7 != (Texture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    (pTVar7,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                            static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                       field_0x1c == 0) {
            FUN_?();
          }
          iVar3 = 0;
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)();
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
          if ((pMVar5 != (MaterialLoader *)0x0) &&
             (pMVar6 = (pMVar5->fields)._CubeModelMaterial_k__BackingField,
             pMVar6 != (Material *)0x0)) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                               (pMVar6,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                   ->_AnistropicFilteringLevel_k__BackingField) {
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
            if (pTVar7 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                        (pTVar7,iVar3,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                      static_fields->_TargetFrameRate_k__BackingField;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1)
                            .field_0x1c == 0) &&
                 (FUN_?(),
                 *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                          field_0x1c == 0)) {
                FUN_?();
              }
              ProfileSettingsManager_SetFrameRateDesktop(value,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              iVar10 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                      static_fields->_LightQualityLevel_k__BackingField;
              if (iVar10 == 0) {
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?,0), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(1);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(0);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(4);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(0);
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(_UNK_?);
              }
              else {
                if (iVar10 == 1) {
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(0);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(4);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(1);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(0);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  return;
                }
                if (iVar10 == 2) {
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(4);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(1);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(0x10);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(2);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(4);
                  uStack_11 = CONCAT44(_UNK_?,_UNK_?);
                  uStack_12 = _UNK_?;
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(&uStack_11);
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(_UNK_?);
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetToDefaultValues() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_ResetToDefaultValues(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    this = (pMVar3->fields).operationRequests;
    pOVar4 = (Object *)0x0;
    value_00 = 0;
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar4 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar4 + 1,&uStackX_10,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
    }
    else {
      pOVar4 = (Object *)((ulonglong)uStackX_14 << 0x20);
    }
    if (this != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
                (this,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      this_00 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
                ProfileSettingsState_GetDefaultProfileSettingsValues
                          (SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
      if (this_00 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar10 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar4,(MethodInfo *)0x0);
        TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
        mouseSensitivity = fVar10;
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        fVar10 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
                 mouseSensitivity;
        if (fVar10 < _UNK_?) {
          fVar12 = _UNK_? /
                   ((_UNK_? - fVar10 / _UNK_?) * _UNK_? + _UNK_?);
        }
        else {
          fVar12 = _UNK_?;
          if (_UNK_? < fVar10) {
            fVar12 = ((fVar10 - _UNK_?) / _UNK_?) * _UNK_? + _UNK_?;
          }
        }
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(fVar12);
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        if (pMVar13 != (MaterialLoader *)0x0) {
          MaterialLoader::MaterialLoader_SetTextureQuality
                    (pMVar13,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
          pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0)
          ;
          if ((pMVar13 != (MaterialLoader *)0x0) &&
             (pMVar14 = (pMVar13->fields)._CubeModelMaterial_k__BackingField,
             pMVar14 != (Material *)0x0)) {
            pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                (pMVar14,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            if (pTVar15 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        (pTVar15,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 ->static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)();
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                  ((MethodInfo *)0x0);
              if ((pMVar13 != (MaterialLoader *)0x0) &&
                 (pMVar14 = (pMVar13->fields)._CubeModelMaterial_k__BackingField,
                 pMVar14 != (Material *)0x0)) {
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_get_mainTexture(pMVar14,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager)
                  ;
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1
                             ).field_0x1c == 0) {
                  FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                }
                switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_AnistropicFilteringLevel_k__BackingField) {
                case 1:
                  value_00 = 1;
                  break;
                case 2:
                  value_00 = 2;
                  break;
                case 3:
                  value_00 = 4;
                  break;
                case 4:
                  value_00 = 8;
                  break;
                case 5:
                  value_00 = 0x10;
                }
                if (pTVar15 != (Texture *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar15,value_00,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                          static_fields->_TargetFrameRate_k__BackingField;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                ->_1).field_0x1c == 0) &&
                     (FUN_?(),
                     *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                              _1).field_0x1c == 0)) {
                    FUN_?();
                  }
                  ProfileSettingsManager_SetFrameRateDesktop(value,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  ProfileSettingsManager_SetLightQualitySetting
                            (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
                  pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                           static_fields->ProfileSettingsChanged;
                  if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                 *)0x0) {
                    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,0,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                       );
                    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                        );
                    if (pOVar4 != (Object *)0x0) {
                      (*(code *)pOVar4[1].monitor)(pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                      pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               static_fields->ProfileSettingsChanged;
                      if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                     *)0x0) {
                        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,1
                                            ,
                                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                           );
                        pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00
                                             ,1,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                            );
                        if (pOVar4 != (Object *)0x0) {
                          (*(code *)pOVar4[1].monitor)(pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                          pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                   ->static_fields->ProfileSettingsChanged;
                          if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                         *)0x0) {
                            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32Enum,System::Object]::
                                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                                               ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                pDVar18,2,
                                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                               );
                            pOVar19 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_00,2,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                );
                            if (pOVar4 != (Object *)0x0) {
                              (*(code *)pOVar4[1].monitor)
                                        (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                              pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                       ->static_fields->ProfileSettingsChanged;
                              if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                             *)0x0) {
                                pOVar4 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Int32Enum,System::Object]::
                                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                    pDVar18,3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                pOVar19 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_00,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                if (pOVar4 != (Object *)0x0) {
                                  (*(code *)pOVar4[1].monitor)
                                            (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                                  pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                           ->static_fields->ProfileSettingsChanged;
                                  if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                 *)0x0) {
                                    pOVar4 = mscorlib.dll::System::Collections::Generic::
                                             Dictionary`2[System::Int32Enum,System::Object]::
                                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                       ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar18,4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                    pOVar19 = mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_00,4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                    if (pOVar4 != (Object *)0x0) {
                                      (*(code *)pOVar4[1].monitor)
                                                (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                                      pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                               ->static_fields->ProfileSettingsChanged;
                                      if (pDVar18 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                        pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                 Dictionary`2[System::Int32Enum,System::Object]::
                                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                           ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar18,5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                        pOVar19 = mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_00,5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                        if (pOVar4 != (Object *)0x0) {
                                          (*(code *)pOVar4[1].monitor)
                                                    (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                                          pDVar18 = 
                                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                                  ->static_fields->ProfileSettingsChanged;
                                          if (pDVar18 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                            pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                     Dictionary`2[System::Int32Enum,System::Object]
                                                     ::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar18,6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                            pOVar19 = mscorlib.dll::System::Collections::Generic::
                                                      Dictionary`2[System::Int32Enum,System::Object]
                                                      ::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_00,6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                            if (pOVar4 != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                              (*(code *)pOVar4[1].monitor)
                                                        (pOVar4[4].klass,pOVar19,pOVar4[2].monitor,
                                                         pOVar4[1].monitor);
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
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetFrameRateDesktop(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetFrameRateDesktop(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(0xffffffff);
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (value == TargetFrameRateValue__Enum_Unlimited) {
    uVar3 = 0;
  }
  else if (value == TargetFrameRateValue__Enum_Low) {
    uVar3 = 4;
  }
  else if (value == TargetFrameRateValue__Enum_Medium) {
    uVar3 = 3;
  }
  else if (value == TargetFrameRateValue__Enum_High) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(uVar3);
  return;
}


/* Void SetFrameRateSetting(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetFrameRateSetting(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
       == 0) &&
     (FUN_?(),
     *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c ==
     0)) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0,in_R8,in_R9,unaff_RBX);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(0xffffffff);
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (value == TargetFrameRateValue__Enum_Unlimited) {
    uVar3 = 0;
  }
  else if (value == TargetFrameRateValue__Enum_Low) {
    uVar3 = 4;
  }
  else if (value == TargetFrameRateValue__Enum_Medium) {
    uVar3 = 3;
  }
  else if (value == TargetFrameRateValue__Enum_High) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(uVar3);
  return;
}


/* Void SetFrameRateTouch(TargetFrameRateValue) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetFrameRateTouch(TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&uStack_1);
  fVar5 = (float)((double)(uStack_2 & 0xffffffff) / (double)(uStack_2 >> 0x20));
  if (value == TargetFrameRateValue__Enum_SameAsScreenHz) goto code_?;
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (value == TargetFrameRateValue__Enum_Unlimited) {
code_?:
    iVar6 = -1;
  }
  else if (value == TargetFrameRateValue__Enum_Low) {
    iVar6 = 0x1e;
  }
  else if (value == TargetFrameRateValue__Enum_Medium) {
    iVar6 = 0x3c;
  }
  else {
    if (value != TargetFrameRateValue__Enum_High) goto code_?;
    iVar6 = 0x78;
  }
  fVar5 = (float)iVar6;
code_?:
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)((int)fVar5);
  return;
}


/* Void SetLightQualitySetting(LightingQualityLevel) */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager_SetLightQualitySetting
               (LightingQualityLevel__Enum level,MethodInfo *method)

{
  if (level == LightingQualityLevel__Enum_Low) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(1);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(0);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(4);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(0);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(_UNK_?);
  }
  else {
    if (level == LightingQualityLevel__Enum_Medium) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(2);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(0);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(4);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(1);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(0);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(_UNK_?);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(2);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(_UNK_?);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(_UNK_?);
      return;
    }
    if (level == LightingQualityLevel__Enum_High) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(4);
      pcVar1 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar1 = (code *)FUN_?(&UNK_?);
        if (pcVar1 == (code *)0x0) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(1);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(0x10);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(2);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(2);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(_UNK_?);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(4);
      uStack_3 = CONCAT44(_UNK_?,_UNK_?);
      uStack_4 = _UNK_?;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(&uStack_3);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(_UNK_?);
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
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (this = (pMVar2->fields).operationRequests, this == (MVNetworkGame_OperationRequests *)0x0))
  goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
            (this,profileSetting,value,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if ((this_00 ==
       (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) ||
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,profileSetting,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          ), pOVar3 == (Object *)0x0)) goto code_?;
  (*(code *)pOVar3[1].monitor)(pOVar3[4].klass,value,pOVar3[2].monitor);
  switch(profileSetting) {
  case ProfileSettingKey__Enum_MouseSensitivity:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
        mouseSensitivity = *(float *)&value[1].klass;
        fVar4 = ProfileSettingsManager_CalculateMouseSensitivityFromValue
                           (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                            static_fields->mouseSensitivity,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(fVar4);
        return;
      }
      FUN_?(value,lRam_?);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    break;
  case ProfileSettingKey__Enum_TargetFrameRate:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
        FUN_?(value);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(*(undefined4 *)&value[1].klass);
      iVar6 = FUN_?();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                    field_0x1c == 0) &&
         (FUN_?(),
         *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                  field_0x1c == 0)) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Application,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(0xffffffff);
      if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      else if (iVar6 == 1) {
        uVar7 = 4;
      }
      else if (iVar6 == 2) {
        uVar7 = 3;
      }
      else if (iVar6 == 3) {
        uVar7 = 2;
      }
      else {
        uVar7 = 1;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(uVar7);
      return;
    }
    break;
  case ProfileSettingKey__Enum_TextureQuality:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
        FUN_?(value);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?();
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      iVar6 = FUN_?();
      if (pMVar8 != (MaterialLoader *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,iVar6,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (iVar6 != (pMVar8->fields).selectedQuality) {
          if ((pMVar8->fields).isStreamingTexture == 0) {
            (pMVar8->fields).selectedQuality = iVar6;
            if (iVar6 == 0) {
              lVar9 = 0xb0;
              lVar10 = 200;
            }
            else if (iVar6 == 1) {
              lVar9 = 0xa8;
              lVar10 = 0xc0;
            }
            else if (iVar6 == 2) {
              lVar9 = 0xa0;
              lVar10 = 0xb8;
            }
            else {
              lVar9 = 0x70;
              lVar10 = 0x78;
            }
            if ((pMVar8->fields).isUsingSM3Shader == 0) {
              lVar9 = lVar10;
            }
            pTVar11 = *(Texture **)((longlong)&pMVar8->klass + lVar9);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pTVar11 != (Texture *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pTVar11->fields)._.m_CachedPtr != (void *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager)
                  ;
                  LOCK();
                  UNLOCK();
                  FUN_?(&TypeInfo__TextureAtlasData);
                  LOCK();
                  UNLOCK();
                  FUN_?(&StringLiteral__MainTex);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pTVar11 != (Texture *)0x0) {
                  uVar12 = (*(pTVar11->klass->vtable).GetHashCode.methodPtr)
                                     (pTVar11,(pTVar11->klass->vtable).GetHashCode.method);
                  (pMVar8->fields).atlasHash = uVar12;
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                            (pTVar11,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                     ->static_fields->_TextureFilter_k__BackingField,
                             (MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                  }
                  switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                         static_fields->_AnistropicFilteringLevel_k__BackingField) {
                  default:
                    iVar13 = 0;
                    break;
                  case 1:
                    iVar13 = 1;
                    break;
                  case 2:
                    iVar13 = 2;
                    break;
                  case 3:
                    iVar13 = 4;
                    break;
                  case 4:
                    iVar13 = 8;
                    break;
                  case 5:
                    iVar13 = 0x10;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar11,iVar13,(MethodInfo *)0x0);
                  pMVar14 = (pMVar8->fields)._CubeModelMaterial_k__BackingField;
                  if (pMVar14 != (Material *)0x0) {
                    iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                      (StringLiteral__MainTex,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                              (pMVar14,iVar13,pTVar11,(MethodInfo *)0x0);
                    pMVar14 = (pMVar8->fields)._CubeModelMaterialTransp_k__BackingField;
                    if (pMVar14 != (Material *)0x0) {
                      iVar13 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                        (StringLiteral__MainTex,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                                (pMVar14,iVar13,pTVar11,(MethodInfo *)0x0);
                      if ((pMVar8->fields).isUsingSM3Shader == 0) {
                        if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
                                  ((Material **)&stack0x00000010,(MethodInfo *)0x0);
                        TextureAtlasData::TextureAtlasData_StreamAtlasUVsToMaterial
                                  ((Material **)&stack0x00000010,(MethodInfo *)0x0);
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pGVar15 = TypeInfo__MVGameControllerBase->static_fields->
                               _GameSessionData_k__BackingField;
                      if (pGVar15 != (GameSessionData *)0x0) {
                        if ((pGVar15->fields).gameMode != 1) {
                          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar2 == (MVNetworkGame *)0x0) ||
                             (this_01 = (pMVar2->fields)._MaterialRepository_k__BackingField,
                             this_01 == (MVMaterialRepository *)0x0)) goto code_?;
                          MVMaterialRepository::MVMaterialRepository_GenerateMaterialButtonTextures
                                    (this_01,(MethodInfo *)0x0);
                        }
                        return;
                      }
                    }
                  }
                }
code_?:
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>,0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__AsyncWWWManager);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__CachedAssetBundleRequest);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__MV__Common__Urls);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_AssetBundles_Atlas_);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_atlashigh);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral__unity3d);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_array_unity3d);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_atlaslow);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_atlasmid);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            (pMVar8->fields).isStreamingTexture = 1;
            if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar16 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
            if (bVar16 == 0) {
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MV__Common__Urls);
              }
              pUVar17 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
              pNVar18 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar18,(Object *)pMVar8,
                         MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,(MethodInfo *)0x0);
              pUVar17 = (Urls_OnStreamingAssetsUrlAvailable *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar17,(Delegate *)pNVar18,(MethodInfo *)0x0);
              if (pUVar17 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
                     (Urls_OnStreamingAssetsUrlAvailable *)0x0;
              }
              else {
                pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar17->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar19 = pUVar17;
                }
                if (pUVar19 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar17,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar19;
                pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar17->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar19 = pUVar17;
                }
                if (pUVar19 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar17);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar20 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
                lVar9 = (ulonglong)((uVar20 & 0x1fffff) >> 6) * 8;
                do {
                  uVar21 = *(ulonglong *)(lVar9 + 0xADDR);
                  puVar22 = (ulonglong *)(lVar9 + 0xADDR);
                  LOCK();
                  bVar23 = uVar21 == *puVar22;
                  if (bVar23) {
                    *puVar22 = uVar21 | 1L << (uVar20 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar23);
              }
            }
            else {
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MV__Common__Urls);
              }
              pUVar17 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
              pNVar18 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar18,(Object *)pMVar8,
                         MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,(MethodInfo *)0x0);
              pUVar17 = (Urls_OnStreamingAssetsUrlAvailable *)
                        mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)pUVar17,(Delegate *)pNVar18,(MethodInfo *)0x0);
              if (pUVar17 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
                     (Urls_OnStreamingAssetsUrlAvailable *)0x0;
              }
              else {
                pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar17->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar19 = pUVar17;
                }
                if (pUVar19 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar17,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar19;
                pUVar19 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar17->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar19 = pUVar17;
                }
                if (pUVar19 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar17);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar20 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
                lVar9 = (ulonglong)((uVar20 & 0x1fffff) >> 6) * 8;
                do {
                  uVar21 = *(ulonglong *)(lVar9 + 0xADDR);
                  puVar22 = (ulonglong *)(lVar9 + 0xADDR);
                  LOCK();
                  bVar23 = uVar21 == *puVar22;
                  if (bVar23) {
                    *puVar22 = uVar21 | 1L << (ulonglong)(uVar20 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar23);
              }
              iVar6 = (pMVar8->fields).selectedQuality;
              pSVar24 = StringLiteral_atlaslow;
              if (((iVar6 != 0) && (pSVar24 = StringLiteral_atlasmid, iVar6 != 1)) &&
                 (pSVar24 = StringLiteral_atlaslow, iVar6 == 2)) {
                pSVar24 = StringLiteral_atlashigh;
              }
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?();
              }
              str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
              str3 = StringLiteral_array_unity3d;
              if ((pMVar8->fields).isUsingSM3Shader == 0) {
                str3 = StringLiteral__unity3d;
              }
              pSVar24 = mscorlib.dll::System::String::String_Concat_6
                                  (str0,StringLiteral_AssetBundles_Atlas_,pSVar24,str3,
                                   (MethodInfo *)0x0);
              this_02 = (UnityAction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                     );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_02,(Object *)pMVar8,
                         MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              this_03 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
              AsyncWebRequest::AsyncWebRequest__ctor
                        (this_03,pSVar24,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02
                         ,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_WWWRequest(this_03,(MethodInfo *)0x0);
            }
            return;
          }
          (pMVar8->fields).storedTextureQuality = iVar6;
        }
        return;
      }
    }
    break;
  case ProfileSettingKey__Enum_TextureFilter:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class != (TypeInfo__UnityEngine__FilterMode->_0).element_class)
      {
        FUN_?(value);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?();
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar8 != (MaterialLoader *)0x0) &&
         (pMVar14 = (pMVar8->fields)._CubeModelMaterial_k__BackingField, pMVar14 != (Material *)0x0))
      {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                            (pMVar14,(MethodInfo *)0x0);
        uVar25 = FUN_?();
        if (pTVar11 != (Texture *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture>_UnityEngine__Texture_
                          ,uVar25,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Texture);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pTVar11 == (Texture *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pvVar26 = (pTVar11->fields)._.m_CachedPtr;
          if (pvVar26 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar26,uVar25);
          return;
        }
      }
    }
    break;
  case ProfileSettingKey__Enum_AnistropicFiltering:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
        FUN_?(value);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?();
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar8 != (MaterialLoader *)0x0) &&
         (pMVar14 = (pMVar8->fields)._CubeModelMaterial_k__BackingField, pMVar14 != (Material *)0x0))
      {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                            (pMVar14,(MethodInfo *)0x0);
        level = FUN_?();
        iVar13 = ProfileSettingsManager_AnisoLevelToInt(level,(MethodInfo *)0x0);
        if (pTVar11 != (Texture *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture>_UnityEngine__Texture_
                          ,iVar13,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Texture);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pTVar11 == (Texture *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pvVar26 = (pTVar11->fields)._.m_CachedPtr;
          if (pvVar26 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar26,iVar13);
          return;
        }
      }
    }
    break;
  case ProfileSettingKey__Enum_AntiAliasing:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (value == (Object *)0x0) break;
    if ((value->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      FUN_?(value);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(*(undefined4 *)&value[1].klass);
    iVar6 = FUN_?();
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        uVar25 = 2;
        goto UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing
        ;
      }
      if (iVar6 == 2) {
        uVar25 = 4;
        goto UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing
        ;
      }
      if (iVar6 == 3) {
        uVar25 = 8;
        goto UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing
        ;
      }
    }
    uVar25 = 0;
UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing:
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?,0), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(uVar25);
    return;
  case ProfileSettingKey__Enum_LightQuality:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (value != (Object *)0x0) {
      if ((value->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        FUN_?(value);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FUN_?(*(undefined4 *)&value[1].klass);
      iVar6 = FUN_?();
      if (iVar6 == 0) {
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?,0), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(1);
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(0);
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(4);
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(0);
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(_UNK_?);
      }
      else {
        if (iVar6 == 1) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(2);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(0);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(4);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(1);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(0);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(_UNK_?);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(2);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(_UNK_?);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(_UNK_?);
          return;
        }
        if (iVar6 == 2) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(4);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(1);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(0x10);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(2);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(2);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(_UNK_?);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(4);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(&stack0xffffffffffffffe8);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(_UNK_?);
          return;
        }
      }
      return;
    }
    break;
  default:
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 TargetFrameRateToInt(TargetFrameRateValue) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
        ProfileSettingsManager_TargetFrameRateToInt
                  (TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (value != TargetFrameRateValue__Enum_Unlimited) {
    if (value == TargetFrameRateValue__Enum_Low) {
      return 0x1e;
    }
    if (value == TargetFrameRateValue__Enum_Medium) {
      return 0x3c;
    }
    if (value == TargetFrameRateValue__Enum_High) {
      return 0x78;
    }
  }
  return -1;
}


/* Int32 TargetFrameRateToVSyncValue(TargetFrameRateValue) */

int32_t Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
        ProfileSettingsManager_TargetFrameRateToVSyncValue
                  (TargetFrameRateValue__Enum value,MethodInfo *method)

{
  if (value == TargetFrameRateValue__Enum_Unlimited) {
    return 0;
  }
  if (value == TargetFrameRateValue__Enum_Low) {
    return 4;
  }
  if (value == TargetFrameRateValue__Enum_Medium) {
    return 3;
  }
  if (value != TargetFrameRateValue__Enum_High) {
    return 1;
  }
  return 2;
}


/* ProfileSettingsManager() */

void Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
     ProfileSettingsManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_0_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_1_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_2_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_3_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_4_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_5_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_6_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Dictionary__
            );
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_0_System__Object_
             ,(MethodInfo *)0x0);
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_1_System__Object_
             ,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_2_System__Object_
             ,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_3_System__Object_
             ,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_4_System__Object_
             ,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_5_System__Object_
             ,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  pOVar1 = (Object *)
           TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c->static_fields->
           __9;
  pUVar2 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<System::Object>);
  uVar3 = 0;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar2,pOVar1,
             MethodInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager____c____cctor_b__44_6_System__Object_
             ,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,(Object *)pUVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__Add_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  ProfileSettingsChanged =
       (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                   TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields
                  >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
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


/* AnistropicFilteringLevel get_AnistropicFilteringLevel() */

AnistropicFilteringLevel__Enum
Assembly-CSharp.dll::Assets::Scripts::ProfileSettings::ProfileSettingsManager::
ProfileSettingsManager_get_AnistropicFilteringLevel(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
  _TextureQualityLevel_k__BackingField = value;
  return;
}

