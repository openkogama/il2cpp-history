
/* Void Destroy() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_Destroy
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ICameraSettings);
    func_?(&MethodInfo__MVCameraSettings__OnCameraSettingAdded__);
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((this->fields).isPreview == 0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      MVar2 = (pMVar1->fields)._GameType_k__BackingField;
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MainCameraManager);
      }
      bVar3 = MainCameraManager::MainCameraManager_HasSetting(MVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
code_?:
        if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MainCameraManager);
        }
        pAVar4 = TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved;
        if (pAVar4 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar4->fields)._._.invoke_impl)
                    ((pAVar4->fields)._._.method_code,0,(pAVar4->fields)._._.method);
        }
        if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MainCameraManager);
        }
        MainCameraManager::MainCameraManager_set_GameHasCameraEffects(0,(MethodInfo *)0x0);
        goto code_?;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVar2 = (pMVar1->fields)._GameType_k__BackingField;
        if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MainCameraManager);
        }
        pIVar5 = MainCameraManager::MainCameraManager_GetSettings(MVar2,(MethodInfo *)0x0);
        if (pIVar5 != (ICameraSettings *)0x0) {
          pIVar6 = pIVar5->klass;
          uVar7 = 0;
          uVar8._0_1_ = (pIVar6->_1).rank;
          uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                  (Il2CppClass *)TypeInfo__ICameraSettings) {
                ppMVar9 = &(&(pIVar5->klass->vtable).SetDefaultSettings)
                           [pIVar5->klass->interfaceOffsets[uVar7].offset].method;
                goto code_?;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
          }
          ppMVar9 = (MethodInfo **)func_?(pIVar5,TypeInfo__ICameraSettings,1);
code_?:
          (*(code *)*ppMVar9)(pIVar5,ppMVar9[1]);
          goto code_?;
        }
      }
    }
code_?:
    func_?();
code_?:
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
code_?:
  if ((this->fields).needToUnsubscribeToSettingsCallback == 0) goto code_?;
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  pAVar11 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
             (MethodInfo *)0x0);
  pAVar11 = (Action *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar11,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar11 == (Action *)0x0) {
    TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = (Action *)0x0;
  }
  else {
    pAVar12 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar12 = pAVar11;
    }
    if (pAVar12 == (Action *)0x0) {
      func_?();
      goto code_?;
    }
    TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar12;
    pAVar12 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar12 = pAVar11;
    }
    if (pAVar12 == (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_Initialize
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).OnDataUpdate.method)
            (this,(this->klass->vtable).OnRunTimeDataUpdate.methodPtr);
  if ((this->fields).isPreview == 0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved;
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,1);
    }
  }
  return;
}


/* Void OnCameraSettingAdded() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_OnCameraSettingAdded
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICameraSettings);
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    MVar2 = (pMVar1->fields)._GameType_k__BackingField;
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    bVar3 = MainCameraManager::MainCameraManager_HasSetting(MVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      MVar2 = (pMVar1->fields)._GameType_k__BackingField;
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pIVar4 = MainCameraManager::MainCameraManager_GetSettings(MVar2,(MethodInfo *)0x0);
      if (pIVar4 != (ICameraSettings *)0x0) {
        uStack5 = uRam_?;
        func_?();
        uRam_? = 0;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_OnDataUpdate
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__ICameraSettings);
    func_?(&MethodInfo__MVCameraSettings__OnCameraSettingAdded__);
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  MVCameraSettings_UpdateStaticValues(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    MVar4 = (pMVar1->fields)._GameType_k__BackingField;
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    bVar5 = MainCameraManager::MainCameraManager_HasSetting(MVar4,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVar4 = (pMVar1->fields)._GameType_k__BackingField;
        if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pIVar6 = MainCameraManager::MainCameraManager_GetSettings(MVar4,(MethodInfo *)0x0);
        if (pIVar6 != (ICameraSettings *)0x0) {
          func_?(0,TypeInfo__ICameraSettings,pIVar6,(this->fields)._._._.data);
          return;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar7 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVCameraSettings__OnCameraSettingAdded__,
               (MethodInfo *)0x0);
    pAStack2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAStack2 == (Action *)0x0) {
      TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = (Action *)0x0;
      pAVar7 = (Action *)0x0;
code_?:
      pAStack2 = (Action *)&TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
      pAStack3 = (Action__Class *)pAVar7;
      func_?();
      (this->fields).needToUnsubscribeToSettingsCallback = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar7 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar7 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  pAStack3 = (Action__Class *)func_?();
  pAStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateStaticValues() */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings_UpdateStaticValues
               (MVCameraSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_1 = &TypeInfo__System__Single;
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pOStack_2 = (Object *)0x0;
  pDVar3 = (this->fields)._._._.data;
  if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  puVar4 = &UNK_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (pDVar3,(Object *)StringLiteral_forceFirstPersonCamera,&pOStack_2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar5 == 0) {
code_?:
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._._._.data;
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    puVar6 = &UNK_?;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_distanceToAvatar,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TVar7.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar8 = (float *)func_?();
      TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase = *pfVar8;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      puVar9 = &UNK_?;
      pMVar10 = this_01;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_01,(Object_1 *)0x0,(MethodInfo *)0x0);
      if ((bVar5 != 0) && ((this->fields).isPreview == 0)) {
        func_?();
        uVar11 = 0;
        pDVar3 = (this->fields)._._._.data;
        this_02 = (PostProcessingSettings *)&stack0xffffff50;
        puVar12 = &UNK_?;
        UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::PostProcessingSettings::
        PostProcessingSettings__ctor(this_02,pDVar3,(MethodInfo *)0x0);
        if (this_01 == (MainCameraManager *)0x0) goto code_?;
        method_00 = (MethodInfo *)0x0;
        puVar13 = (undefined4 *)&stack0xffffff50;
        puVar14 = (undefined4 *)&stack0xfffffe98;
        for (iVar15 = 0x2a; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        data.vignetteSettings._32_4_ = puVar12;
        auVar16 = in_stack_17._0_20_;
        auVar18 = in_stack_17._20_32_;
        auVar19 = in_stack_17._52_28_;
        auVar20 = in_stack_17._80_20_;
        auVar21 = in_stack_17._116_16_;
        data.colorSettings.colors = auVar16[0];
        data.colorSettings._1_3_ = auVar16._1_3_;
        data.colorSettings.postExposure = auVar16._4_4_;
        data.colorSettings.temperature = auVar16._8_4_;
        data.colorSettings.saturation = auVar16._12_4_;
        data.colorSettings.contrast = auVar16._16_4_;
        auVar22 = auVar18._16_16_;
        data.bloomSettings.bloom = auVar18[0];
        data.bloomSettings._1_3_ = auVar18._1_3_;
        data.bloomSettings.intensity = auVar18._4_4_;
        data.bloomSettings.softKnee = auVar18._8_4_;
        data.bloomSettings.diffusion = auVar18._12_4_;
        data.bloomSettings.color.r = (float)auVar22._0_4_;
        data.bloomSettings.color.g = (float)auVar22._4_4_;
        data.bloomSettings.color.b = (float)auVar22._8_4_;
        data.bloomSettings.color.a = (float)auVar22._12_4_;
        auVar22 = auVar19._12_16_;
        data.ambientOcclusionSettings.ambientOcclusion = auVar19[0];
        data.ambientOcclusionSettings._1_3_ = auVar19._1_3_;
        data.ambientOcclusionSettings.intensity = auVar19._4_4_;
        data.ambientOcclusionSettings.thickness = auVar19._8_4_;
        data.ambientOcclusionSettings.color.r = (float)auVar22._0_4_;
        data.ambientOcclusionSettings.color.g = (float)auVar22._4_4_;
        data.ambientOcclusionSettings.color.b = (float)auVar22._8_4_;
        data.ambientOcclusionSettings.color.a = (float)auVar22._12_4_;
        data.depthOfFieldSettings.depthOfField = auVar20[0];
        data.depthOfFieldSettings._1_3_ = auVar20._1_3_;
        data.depthOfFieldSettings.focusDistance = auVar20._4_4_;
        data.depthOfFieldSettings.aperture = auVar20._8_4_;
        data.depthOfFieldSettings.focalLength = auVar20._12_4_;
        data.depthOfFieldSettings.maxBlurSize = auVar20._16_4_;
        data.vignetteSettings.vignette = in_stack_17[100];
        data.vignetteSettings._1_3_ = in_stack_17._101_3_;
        data.vignetteSettings.intensity = in_stack_17._104_4_;
        data.vignetteSettings.smoothness = in_stack_17._108_4_;
        data.vignetteSettings.roundness = in_stack_17._112_4_;
        data.vignetteSettings.color.r = (float)auVar21._0_4_;
        data.vignetteSettings.color.g = (float)auVar21._4_4_;
        data.vignetteSettings.color.b = (float)auVar21._8_4_;
        data.vignetteSettings.color.a = (float)auVar21._12_4_;
        data.grainSettings._0_4_ = this_02;
        data.grainSettings.intensity = (int32_t)pDVar3;
        data.grainSettings.size = uVar11;
        data.grainSettings.luminanceContribution = (int32_t)in_stack_1;
        data.lensDistortionSettings._0_4_ = puVar4;
        data.lensDistortionSettings.intensity = (int32_t)puVar6;
        data.lensDistortionSettings.xMultiplier = (int32_t)puVar9;
        data.lensDistortionSettings.yMultiplier = (int32_t)pMVar10;
        bVar5 = MainCameraManager::MainCameraManager_ApplyPostProcessingThis(this_01,data,method_00)
        ;
        if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MainCameraManager::MainCameraManager_set_GameHasCameraEffects(bVar5,(MethodInfo *)0x0);
      }
      return;
    }
    func_?();
  }
  else {
    pMVar23 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar23 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar23->fields)._GameType_k__BackingField == 2) {
code_?:
      cVar24 = '\0';
code_?:
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__MainCameraManager->static_fields->DefaultCameraType = -(uint)(cVar24 != '\0') & 0x10;
      TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson = cVar24 != '\0';
      goto code_?;
    }
    MVar25 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar25 != MVGameMode__Enum_Play) goto code_?;
    if (pOStack_2 == (Object *)0x0) goto code_?;
    if ((pOStack_2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pcVar26 = (char *)func_?();
      cVar24 = *pcVar26;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* MVCameraSettings(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCameraSettings::MVCameraSettings__ctor
               (MVCameraSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvCameraSettingsPrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 & 0xffffdfff;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

