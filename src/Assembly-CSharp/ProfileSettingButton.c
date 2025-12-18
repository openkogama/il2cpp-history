
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnChange
               (ProfileSettingButton *this,Object *value,MethodInfo *method)

{
  lVar1 = lRam_?;
  if (value != (Object *)0x0) {
    method = (MethodInfo *)value->klass;
    if ((((Object__Class *)method)->_0).element_class !=
        *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->fields).isIncrease == 0) {
      bVar3 = (this->fields).minValue < *(int *)&value[1].klass;
    }
    else {
      bVar3 = *(int *)&value[1].klass < (this->fields).maxValue;
    }
    lVar1 = CONCAT71((int7)((ulonglong)lRam_? >> 8),bVar3);
    this_00 = (this->fields).button;
    this = (ProfileSettingButton *)0x0;
    if (this_00 != (Button *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&
                      bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      cVar4 = FUN_?(&(this_00->fields)._.m_Interactable);
      if (cVar4 == '\0') {
        return;
      }
      if ((this_00->fields)._.m_Interactable == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
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
        if (pEVar5 != (EventSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pEVar5->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
              FUN_?();
            }
            pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar5 != (EventSystem *)0x0) {
              pGVar6 = (pEVar5->fields).m_CurrentSelected;
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
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
              if (pGVar7 != (GameObject *)0x0 || pGVar6 != (GameObject *)0x0) {
                if (pGVar7 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pGVar6 == (GameObject *)0x0) goto DAT_?;
                  bVar3 = (pGVar6->fields)._.m_CachedPtr == (void *)0x0;
                }
                else if (pGVar6 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar3 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar3 = pGVar6 == pGVar7;
                }
                if (!bVar3) goto code_?;
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar5 != (EventSystem *)0x0) {
                UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                EventSystem_SetSelectedGameObject_1(pEVar5,(GameObject *)0x0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
DAT_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
code_?:
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                ((Selectable *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?(this,lVar1,method);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnClick
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  profileSetting = (this->fields).profileSettingKey;
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  pOVar1 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
            ProfileSettingsManager_GetSettingValue(profileSetting,(MethodInfo *)0x0);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar1,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (this->fields).minValue;
  iVar4 = 1;
  if ((this->fields).isIncrease == 0) {
    iVar4 = -1;
  }
  iVar4 = iVar4 + *(int *)&pOVar1[1].klass;
  if ((iVar3 <= iVar4) && (iVar5 = (this->fields).maxValue, iVar3 = iVar4, iVar5 < iVar4)) {
    iVar3 = iVar5;
  }
  key = (this->fields).profileSettingKey;
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
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar6 = StringLiteral_Error;
  switch((this->fields).profileSettingKey) {
  case 1:
    aiStackX_8[0] = iVar3;
    pSVar6 = (String *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,aiStackX_8);
    break;
  case 2:
    aiStackX_8[0] = iVar3;
    pSVar6 = (String *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,aiStackX_8);
    break;
  case 3:
    aiStackX_8[0] = iVar3;
    pSVar6 = (String *)FUN_?(TypeInfo__UnityEngine__FilterMode,aiStackX_8);
    break;
  case 4:
    aiStackX_8[0] = iVar3;
    pSVar6 = (String *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,aiStackX_8
                           );
    break;
  case 5:
    aiStackX_8[0] = iVar3;
    pSVar6 = (String *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,aiStackX_8);
    break;
  case 6:
    aiStackX_8[0] = iVar3;
    pSVar6 = (String *)
              FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,aiStackX_8);
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,pSVar6,0);
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
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 == (MVGameControllerBase *)0x0) ||
      (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
     (this_00 = (pMVar8->fields).operationRequests,
     this_00 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
            (this_00,key,(Object *)pSVar6,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_01 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if ((this_01 ==
       (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                          ), pOVar1 == (Object *)0x0)) goto code_?;
  (*(code *)pOVar1[1].monitor)(pOVar1[4].klass,pSVar6,pOVar1[2].monitor);
  switch(key) {
  case 0:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    if (pSVar6 != (String *)0x0) {
      if ((pSVar6->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
        mouseSensitivity = (float)(pSVar6->fields)._stringLength;
        fVar9 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_CalculateMouseSensitivityFromValue
                           (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                            static_fields->mouseSensitivity,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(fVar9);
        return;
      }
      FUN_?(pSVar6,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    break;
  case 1:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (pSVar6 != (String *)0x0) {
      if ((pSVar6->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
        FUN_?(pSVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?((pSVar6->fields)._stringLength);
      iVar3 = FUN_?();
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
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(0xffffffff);
      if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      if (iVar3 == 0) {
        uVar10 = 0;
      }
      else if (iVar3 == 1) {
        uVar10 = 4;
      }
      else if (iVar3 == 2) {
        uVar10 = 3;
      }
      else if (iVar3 == 3) {
        uVar10 = 2;
      }
      else {
        uVar10 = 1;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(uVar10);
      return;
    }
    break;
  case 2:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (pSVar6 != (String *)0x0) {
      if ((pSVar6->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
        FUN_?(pSVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?();
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      iVar3 = FUN_?();
      if (pMVar11 != (MaterialLoader *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,iVar3,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (iVar3 != (pMVar11->fields).selectedQuality) {
          if ((pMVar11->fields).isStreamingTexture == 0) {
            (pMVar11->fields).selectedQuality = iVar3;
            if (iVar3 == 0) {
              lVar12 = 0xb0;
              lVar13 = 200;
            }
            else if (iVar3 == 1) {
              lVar12 = 0xa8;
              lVar13 = 0xc0;
            }
            else if (iVar3 == 2) {
              lVar12 = 0xa0;
              lVar13 = 0xb8;
            }
            else {
              lVar12 = 0x70;
              lVar13 = 0x78;
            }
            if ((pMVar11->fields).isUsingSM3Shader == 0) {
              lVar12 = lVar13;
            }
            pTVar14 = *(Texture **)((longlong)&pMVar11->klass + lVar12);
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
            if (pTVar14 != (Texture *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pTVar14->fields)._.m_CachedPtr != (void *)0x0) {
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
                if (pTVar14 != (Texture *)0x0) {
                  uVar15 = (*(pTVar14->klass->vtable).GetHashCode.methodPtr)
                                     (pTVar14,(pTVar14->klass->vtable).GetHashCode.method);
                  (pMVar11->fields).atlasHash = uVar15;
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
                            (pTVar14,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
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
                    iVar16 = 0;
                    break;
                  case 1:
                    iVar16 = 1;
                    break;
                  case 2:
                    iVar16 = 2;
                    break;
                  case 3:
                    iVar16 = 4;
                    break;
                  case 4:
                    iVar16 = 8;
                    break;
                  case 5:
                    iVar16 = 0x10;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar14,iVar16,(MethodInfo *)0x0);
                  pMVar17 = (pMVar11->fields)._CubeModelMaterial_k__BackingField;
                  if (pMVar17 != (Material *)0x0) {
                    iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                       (StringLiteral__MainTex,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                              (pMVar17,iVar16,pTVar14,(MethodInfo *)0x0);
                    pMVar17 = (pMVar11->fields)._CubeModelMaterialTransp_k__BackingField;
                    if (pMVar17 != (Material *)0x0) {
                      iVar16 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                         (StringLiteral__MainTex,(MethodInfo *)0x0);
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
                                (pMVar17,iVar16,pTVar14,(MethodInfo *)0x0);
                      if ((pMVar11->fields).isUsingSM3Shader == 0) {
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
                      pGVar18 = TypeInfo__MVGameControllerBase->static_fields->
                               _GameSessionData_k__BackingField;
                      if (pGVar18 != (GameSessionData *)0x0) {
                        if ((pGVar18->fields).gameMode != 1) {
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__MVGameControllerBase);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pGVar18 = TypeInfo__MVGameControllerBase->static_fields->
                                   _GameSessionData_k__BackingField;
                          if (pGVar18 == (GameSessionData *)0x0) goto code_?;
                          if ((pGVar18->fields).gameMode != 3) {
                            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar8 == (MVNetworkGame *)0x0) ||
                               (this_02 = (pMVar8->fields)._MaterialRepository_k__BackingField,
                               this_02 == (MVMaterialRepository *)0x0)) goto code_?;
                            MVMaterialRepository::
                            MVMaterialRepository_GenerateMaterialButtonTextures
                                      (this_02,(MethodInfo *)0x0);
                          }
                        }
                        return;
                      }
                    }
                  }
                }
code_?:
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
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
            (pMVar11->fields).isStreamingTexture = 1;
            if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar19 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
            if (bVar19 == 0) {
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MV__Common__Urls);
              }
              pUVar20 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
              pNVar21 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar21,(Object *)pMVar11,
                         MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,(MethodInfo *)0x0);
              pUVar20 = (Urls_OnStreamingAssetsUrlAvailable *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar20,(Delegate *)pNVar21,(MethodInfo *)0x0);
              if (pUVar20 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
                     (Urls_OnStreamingAssetsUrlAvailable *)0x0;
              }
              else {
                pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar20->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar22 = pUVar20;
                }
                if (pUVar22 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar20,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar22;
                pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar20->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar22 = pUVar20;
                }
                if (pUVar22 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar20);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar23 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
                lVar12 = (ulonglong)((uVar23 & 0x1fffff) >> 6) * 8;
                do {
                  uVar24 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar25 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar26 = uVar24 == *puVar25;
                  if (bVar26) {
                    *puVar25 = uVar24 | 1L << (uVar23 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar26);
              }
            }
            else {
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MV__Common__Urls);
              }
              pUVar20 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
              pNVar21 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar21,(Object *)pMVar11,
                         MethodInfo__MaterialLoader__DownloadAtlasWhenPossible__,(MethodInfo *)0x0);
              pUVar20 = (Urls_OnStreamingAssetsUrlAvailable *)
                        mscorlib.dll::System::Delegate::Delegate_Remove
                                  ((Delegate *)pUVar20,(Delegate *)pNVar21,(MethodInfo *)0x0);
              if (pUVar20 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
                     (Urls_OnStreamingAssetsUrlAvailable *)0x0;
              }
              else {
                pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar20->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar22 = pUVar20;
                }
                if (pUVar22 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar20,TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar22;
                pUVar22 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
                if (pUVar20->klass == TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable) {
                  pUVar22 = pUVar20;
                }
                if (pUVar22 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
                  FUN_?(pUVar20);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar23 = (uint)((ulonglong)TypeInfo__MV__Common__Urls->static_fields >> 0xc);
                lVar12 = (ulonglong)((uVar23 & 0x1fffff) >> 6) * 8;
                do {
                  uVar24 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar25 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar26 = uVar24 == *puVar25;
                  if (bVar26) {
                    *puVar25 = uVar24 | 1L << (ulonglong)(uVar23 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar26);
              }
              iVar3 = (pMVar11->fields).selectedQuality;
              pSVar6 = StringLiteral_atlaslow;
              if (((iVar3 != 0) && (pSVar6 = StringLiteral_atlasmid, iVar3 != 1)) &&
                 (pSVar6 = StringLiteral_atlaslow, iVar3 == 2)) {
                pSVar6 = StringLiteral_atlashigh;
              }
              if (*(int *)&(TypeInfo__MV__Common__Urls->_1).field_0x1c == 0) {
                FUN_?();
              }
              str0 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
              str3 = StringLiteral_array_unity3d;
              if ((pMVar11->fields).isUsingSM3Shader == 0) {
                str3 = StringLiteral__unity3d;
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_6
                                  (str0,StringLiteral_AssetBundles_Atlas_,pSVar6,str3,
                                   (MethodInfo *)0x0);
              this_03 = (UnityAction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                     );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_03,(Object *)pMVar11,
                         MethodInfo__MaterialLoader__AtlasCallback_UnityEngine__Networking__UnityWebRequest_
                         ,(MethodInfo *)0x0);
              this_04 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedAssetBundleRequest);
              AsyncWebRequest::AsyncWebRequest__ctor
                        (this_04,pSVar6,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_03
                         ,WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                FUN_?();
              }
              AsyncWWWManager::AsyncWWWManager_WWWRequest(this_04,(MethodInfo *)0x0);
            }
            return;
          }
          (pMVar11->fields).storedTextureQuality = iVar3;
        }
        return;
      }
    }
    break;
  case 3:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (pSVar6 != (String *)0x0) {
      if ((pSVar6->klass->_0).element_class !=
          (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
        FUN_?(pSVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?();
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar11 != (MaterialLoader *)0x0) &&
         (pMVar17 = (pMVar11->fields)._CubeModelMaterial_k__BackingField, pMVar17 != (Material *)0x0))
      {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                            (pMVar17,(MethodInfo *)0x0);
        uVar27 = FUN_?();
        if (pTVar14 != (Texture *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture>_UnityEngine__Texture_
                          ,uVar27,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Texture);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pTVar14 == (Texture *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar28 = (pTVar14->fields)._.m_CachedPtr;
          if (pvVar28 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar28,uVar27);
          return;
        }
      }
    }
    break;
  case 4:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (pSVar6 != (String *)0x0) {
      if ((pSVar6->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
        FUN_?(pSVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?();
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
      if ((pMVar11 != (MaterialLoader *)0x0) &&
         (pMVar17 = (pMVar11->fields)._CubeModelMaterial_k__BackingField, pMVar17 != (Material *)0x0))
      {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                            (pMVar17,(MethodInfo *)0x0);
        level = FUN_?();
        iVar16 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_AnisoLevelToInt(level,(MethodInfo *)0x0);
        if (pTVar14 != (Texture *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture>_UnityEngine__Texture_
                          ,iVar16,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Texture);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pTVar14 == (Texture *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pvVar28 = (pTVar14->fields)._.m_CachedPtr;
          if (pvVar28 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar28,iVar16);
          return;
        }
      }
    }
    break;
  case 5:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (pSVar6 == (String *)0x0) break;
    if ((pSVar6->klass->_0).element_class !=
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      FUN_?(pSVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?((pSVar6->fields)._stringLength);
    iVar3 = FUN_?();
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar27 = 2;
        goto UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing
        ;
      }
      if (iVar3 == 2) {
        uVar27 = 4;
        goto UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing
        ;
      }
      if (iVar3 == 3) {
        uVar27 = 8;
        goto UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing
        ;
      }
    }
    uVar27 = 0;
UnityEngine_CoreModule_dll_UnityEngine_QualitySettings_QualitySettings_set_antiAliasing:
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?,0), pcVar2 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(uVar27);
    return;
  case 6:
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (pSVar6 != (String *)0x0) {
      if ((pSVar6->klass->_0).element_class !=
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        FUN_?(pSVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_?((pSVar6->fields)._stringLength);
      iVar3 = FUN_?();
      if (iVar3 == 0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?,0), pcVar2 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(1);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(0);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(4);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(0);
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(_UNK_?);
      }
      else {
        if (iVar3 == 1) {
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(2);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(0);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(4);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(1);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(0);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(_UNK_?);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(2);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(_UNK_?);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(_UNK_?);
          return;
        }
        if (iVar3 == 2) {
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(4);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(1);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(0x10);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(2);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(2);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(_UNK_?);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(4);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&stack0xffffffffffffffe8);
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnDestroy
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ProfileSettingButton__OnChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    key = (this->fields).profileSettingKey;
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<System::Object>;
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (value == (Object *)0x0) {
        FUN_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pIVar5 = pMVar3->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar5 >> 8),1),
               pIVar5[0x22].method);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Object ProfileSettingValueToObj(Int32) */

Object * Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_ProfileSettingValueToObj
                   (ProfileSettingButton *this,int32_t value,MethodInfo *method)

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
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = value;
  switch((this->fields).profileSettingKey) {
  case 1:
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,aiStackX_8);
    return pOVar1;
  case 2:
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,aiStackX_8);
    return pOVar1;
  case 3:
    pOVar1 = (Object *)FUN_?(TypeInfo__UnityEngine__FilterMode,aiStackX_8);
    return pOVar1;
  case 4:
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,aiStackX_8)
    ;
    return pOVar1;
  case 5:
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,aiStackX_8);
    return pOVar1;
  case 6:
    pOVar1 = (Object *)
             FUN_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,aiStackX_8);
    return pOVar1;
  default:
    return (Object *)StringLiteral_Error;
  }
}


/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_Start
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MetaData__AntiAliasingLevel);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__UnityEngine__FilterMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MetaData__LightingQualityLevel);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ProfileSettingButton__OnChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MetaData__TargetFrameRateValue);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__WorldObject__MetaData__TextureQualityLevel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                      );
  bVar2 = iRam_? != 0;
  (this->fields).button = pBVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).button >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pOVar7 = (Object *)0x0;
  (this->fields).isIncrease = (this->fields).profileSettingButtonType == 0;
  (this->fields).minValue = 0;
  handle_04 = TypeRef__MV__WorldObject__MetaData__AntiAliasingLevel;
  handle_03 = TypeRef__MV__WorldObject__MetaData__AnistropicFilteringLevel;
  handle_02 = TypeRef__MV__WorldObject__MetaData__LightingQualityLevel;
  handle_01 = TypeRef__UnityEngine__FilterMode;
  handle_00 = TypeRef__MV__WorldObject__MetaData__TargetFrameRateValue;
  handle = TypeRef__MV__WorldObject__MetaData__TextureQualityLevel;
  switch((this->fields).profileSettingKey) {
  case 1:
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pTVar8 == (Type *)0x0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar10 = (ArgumentNullException *)func_?(uVar9);
      pSVar11 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar10,pSVar11,(MethodInfo *)0x0);
      uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar10,uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pAVar13 = (Array *)(*(pTVar8->klass->vtable).GetEnumValues.methodPtr)(pTVar8);
    if (pAVar13 == (Array *)0x0) goto code_?;
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(pAVar13,(MethodInfo *)0x0);
    iVar15 = iVar14 + -1;
    break;
  case 2:
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pTVar8 == (Type *)0x0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar10 = (ArgumentNullException *)func_?(uVar9);
      pSVar11 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar10,pSVar11,(MethodInfo *)0x0);
      uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar10,uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pAVar13 = (Array *)(*(pTVar8->klass->vtable).GetEnumValues.methodPtr)(pTVar8);
    if (pAVar13 == (Array *)0x0) goto code_?;
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(pAVar13,(MethodInfo *)0x0);
    iVar15 = iVar14 + -2;
    break;
  case 3:
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pTVar8 == (Type *)0x0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar10 = (ArgumentNullException *)func_?(uVar9);
      pSVar11 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar10,pSVar11,(MethodInfo *)0x0);
      uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar10,uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pAVar13 = (Array *)(*(pTVar8->klass->vtable).GetEnumValues.methodPtr)(pTVar8);
    if (pAVar13 == (Array *)0x0) goto code_?;
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(pAVar13,(MethodInfo *)0x0);
    iVar15 = iVar14 + -1;
    break;
  case 4:
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_03,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pTVar8 == (Type *)0x0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar10 = (ArgumentNullException *)func_?(uVar9);
      pSVar11 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar10,pSVar11,(MethodInfo *)0x0);
      uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar10,uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pAVar13 = (Array *)(*(pTVar8->klass->vtable).GetEnumValues.methodPtr)(pTVar8);
    if (pAVar13 == (Array *)0x0) goto code_?;
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(pAVar13,(MethodInfo *)0x0);
    iVar15 = iVar14 + -1;
    break;
  case 5:
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_04,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pTVar8 == (Type *)0x0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar10 = (ArgumentNullException *)func_?(uVar9);
      pSVar11 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar10,pSVar11,(MethodInfo *)0x0);
      uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar10,uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pAVar13 = (Array *)(*(pTVar8->klass->vtable).GetEnumValues.methodPtr)(pTVar8);
    if (pAVar13 == (Array *)0x0) goto code_?;
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(pAVar13,(MethodInfo *)0x0);
    iVar15 = iVar14 + -1;
    break;
  case 6:
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar8 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (pTVar8 == (Type *)0x0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar10 = (ArgumentNullException *)func_?(uVar9);
      pSVar11 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar10,pSVar11,(MethodInfo *)0x0);
      uVar9 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar10,uVar9);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pAVar13 = (Array *)(*(pTVar8->klass->vtable).GetEnumValues.methodPtr)(pTVar8);
    if (pAVar13 == (Array *)0x0) goto code_?;
    iVar14 = mscorlib.dll::System::Array::Array_get_Length(pAVar13,(MethodInfo *)0x0);
    iVar15 = iVar14 + -1;
    break;
  default:
    iVar15 = 1;
  }
  (this->fields).maxValue = iVar15;
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    key = (this->fields).profileSettingKey;
    pDVar16 = (Delegate *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                        );
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar16,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar17 = TypeInfo__System__Action<System::Object>;
    pMVar18 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if ((pDVar16 != (Delegate *)0x0) &&
       (pOVar7 = (Object *)FUN_?(pDVar16,TypeInfo__System__Action<System::Object>),
       pOVar7 == (Object *)0x0)) {
      FUN_?(pDVar16,pAVar17);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pIVar19 = pMVar18->klass->rgctx_data;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,pOVar7,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pIVar19 >> 8),1),
               pIVar19[0x22].method);
    pOVar7 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
              ProfileSettingsManager_GetSettingValue
                        ((this->fields).profileSettingKey,(MethodInfo *)0x0);
    if (pOVar7 != (Object *)0x0) {
      if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar7,lRam_?);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&
                        bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar20 = FUN_?(&(pBVar1->fields)._.m_Interactable);
        if (cVar20 == '\0') {
          return;
        }
        if ((pBVar1->fields)._.m_Interactable == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar21 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                    EventSystem_get_current((MethodInfo *)0x0);
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
          if (pEVar21 != (EventSystem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pEVar21->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar21 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                        EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar21 != (EventSystem *)0x0) {
                pGVar22 = (pEVar21->fields).m_CurrentSelected;
                pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0);
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
                if (pGVar23 != (GameObject *)0x0 || pGVar22 != (GameObject *)0x0) {
                  if (pGVar23 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (pGVar22 == (GameObject *)0x0) goto DAT_?;
                    bVar2 = (pGVar22->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else if (pGVar22 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    bVar2 = (pGVar23->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else {
                    bVar2 = pGVar22 == pGVar23;
                  }
                  if (!bVar2) goto code_?;
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0)
                {
                  FUN_?();
                }
                pEVar21 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                          EventSystem_get_current((MethodInfo *)0x0);
                if (pEVar21 != (EventSystem *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                  EventSystem_SetSelectedGameObject_1(pEVar21,(GameObject *)0x0,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
DAT_?:
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
        }
code_?:
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                  ((Selectable *)pBVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

