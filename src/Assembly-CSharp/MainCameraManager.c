
/* Boolean ApplyPostProcessing(PostProcessLayer, PostProcessVolume, PostProcessingSettings) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_ApplyPostProcessing
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,PostProcessingSettings data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)ppLayer,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)ppVolume,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pPVar3 = &data;
      pMVar4 = TypeInfo__MainCameraManager->static_fields;
      for (iVar5 = 0x2a; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar6 = *(undefined3 *)&(pPVar3->colorSettings).field_0x1;
        (pMVar4->CurrentPostProcessingSettings).colorSettings.colors =
             (pPVar3->colorSettings).colors;
        *(undefined3 *)&(pMVar4->CurrentPostProcessingSettings).colorSettings.field_0x1 = uVar6;
        pPVar3 = (PostProcessingSettings *)&(pPVar3->colorSettings).postExposure;
        pMVar4 = (MainCameraManager__StaticFields *)
                  &(pMVar4->CurrentPostProcessingSettings).colorSettings.postExposure;
      }
      colorSettings.postExposure = data.colorSettings.postExposure;
      colorSettings.colors = data.colorSettings.colors;
      colorSettings._1_3_ = data.colorSettings._1_3_;
      colorSettings.temperature = data.colorSettings.temperature;
      colorSettings.saturation._0_1_ = (char)data.colorSettings.saturation;
      colorSettings.saturation._1_1_ = (char)((uint)data.colorSettings.saturation >> 8);
      colorSettings.saturation._2_1_ = (char)((uint)data.colorSettings.saturation >> 0x10);
      colorSettings.saturation._3_1_ = (char)((uint)data.colorSettings.saturation >> 0x18);
      colorSettings.contrast = data.colorSettings.contrast;
      MainCameraManager_DoPostProcessingColor(ppLayer,ppVolume,colorSettings,(MethodInfo *)0x0);
      ppLayer_00 = data.bloomSettings.intensity;
      uVar7 = data.bloomSettings._0_4_;
      data.bloomSettings.bloom = 0;
      data.bloomSettings._1_3_ = 0;
      uVar8 = data.bloomSettings._0_4_;
      data.colorSettings._0_4_ = data.bloomSettings.diffusion;
      bVar9 = (byte)((uint)ppLayer >> 0x18);
      data.colorSettings.postExposure = (int32_t)data.bloomSettings.color.r;
      data.colorSettings.temperature = (int32_t)data.bloomSettings.color.g;
      data.colorSettings.saturation = (int32_t)data.bloomSettings.color.b;
      data.colorSettings.contrast = (int32_t)data.bloomSettings.color.a;
      bloomSettings.intensity = data.bloomSettings.intensity;
      data.bloomSettings.bloom = (bool)uVar7;
      data.bloomSettings._1_3_ = SUB43(uVar7,1);
      bloomSettings.bloom = data.bloomSettings.bloom;
      bloomSettings._1_3_ = data.bloomSettings._1_3_;
      bloomSettings.softKnee = data.bloomSettings.softKnee;
      bloomSettings.diffusion = data.bloomSettings.diffusion;
      bloomSettings.color.r = data.bloomSettings.color.r;
      bloomSettings.color.g = data.bloomSettings.color.g;
      bloomSettings.color.b = data.bloomSettings.color.b;
      bloomSettings.color.a = data.bloomSettings.color.a;
      data.bloomSettings._0_4_ = uVar8;
      bVar1 = MainCameraManager_DoPostProcessingBloom
                         (ppLayer,ppVolume,bloomSettings,(MethodInfo *)0x0);
      data.bloomSettings.color.a = data.ambientOcclusionSettings.color.r;
      iVar10 = data.ambientOcclusionSettings.thickness;
      iVar11 = data.ambientOcclusionSettings.intensity;
      uVar7 = data.ambientOcclusionSettings._0_4_;
      data.ambientOcclusionSettings.color.r = 0.0;
      data.bloomSettings.diffusion = (int32_t)ppVolume;
      data.bloomSettings.color.r = (float)data.ambientOcclusionSettings._0_4_;
      data.bloomSettings.color.g = (float)data.ambientOcclusionSettings.intensity;
      data.bloomSettings.color.b = (float)data.ambientOcclusionSettings.thickness;
      data.bloomSettings.softKnee = (int32_t)ppLayer;
      data.ambientOcclusionSettings._0_4_ = data.ambientOcclusionSettings.color.g;
      uVar8 = data.ambientOcclusionSettings._0_4_;
      data.ambientOcclusionSettings.intensity = (int32_t)data.ambientOcclusionSettings.color.b;
      data.ambientOcclusionSettings.thickness = (int32_t)data.ambientOcclusionSettings.color.a;
      data.bloomSettings.intensity = (int32_t)&UNK_?;
      aoSettings.intensity = iVar11;
      data.ambientOcclusionSettings.ambientOcclusion = (bool)uVar7;
      data.ambientOcclusionSettings._1_3_ = SUB43(uVar7,1);
      aoSettings.ambientOcclusion = data.ambientOcclusionSettings.ambientOcclusion;
      aoSettings._1_3_ = data.ambientOcclusionSettings._1_3_;
      aoSettings.thickness = iVar10;
      aoSettings.color.r = data.bloomSettings.color.a;
      aoSettings.color.g = data.ambientOcclusionSettings.color.g;
      aoSettings.color.b = data.ambientOcclusionSettings.color.b;
      aoSettings.color.a = data.ambientOcclusionSettings.color.a;
      data.ambientOcclusionSettings._0_4_ = uVar8;
      bVar2 = MainCameraManager_DoPostProcessingAmbientOcclusion
                        (ppLayer,ppVolume,aoSettings,(MethodInfo *)0x0);
      data.vignetteSettings._0_4_ = data.depthOfFieldSettings.maxBlurSize;
      data.depthOfFieldSettings.maxBlurSize = data.depthOfFieldSettings.focalLength;
      data.depthOfFieldSettings.focalLength = data.depthOfFieldSettings.aperture;
      data.depthOfFieldSettings.aperture = data.depthOfFieldSettings.focusDistance;
      data.depthOfFieldSettings.focusDistance = data.depthOfFieldSettings._0_4_;
      data.vignetteSettings.intensity = 0;
      data.depthOfFieldSettings._0_4_ = ppVolume;
      uVar7 = data.depthOfFieldSettings._0_4_;
      data.ambientOcclusionSettings.color.a = (float)ppLayer;
      data.ambientOcclusionSettings.color.b = (float)&UNK_?;
      aoSettings_00.focusDistance = data.depthOfFieldSettings.aperture;
      data.depthOfFieldSettings.depthOfField = (bool)data.depthOfFieldSettings.focusDistance;
      data.depthOfFieldSettings._1_3_ = SUB43(data.depthOfFieldSettings.focusDistance,1);
      aoSettings_00.depthOfField = data.depthOfFieldSettings.depthOfField;
      aoSettings_00._1_3_ = data.depthOfFieldSettings._1_3_;
      aoSettings_00.aperture = data.depthOfFieldSettings.focalLength;
      aoSettings_00.focalLength = data.depthOfFieldSettings.maxBlurSize;
      aoSettings_00.maxBlurSize = data.vignetteSettings._0_4_;
      data.depthOfFieldSettings._0_4_ = uVar7;
      bVar12 = MainCameraManager_DoPostProcessingDepthOfField
                        (ppLayer,ppVolume,aoSettings_00,(MethodInfo *)0x0);
      data.grainSettings.grain = 0;
      data.grainSettings._1_3_ = 0;
      data.depthOfFieldSettings.maxBlurSize = (int32_t)ppVolume;
      data.depthOfFieldSettings.focalLength = (int32_t)ppLayer;
      data.depthOfFieldSettings.aperture = (int32_t)&UNK_?;
      vignetteSettings.intensity = data.vignetteSettings.intensity;
      vignetteSettings.vignette = data.vignetteSettings.vignette;
      vignetteSettings._1_3_ = data.vignetteSettings._1_3_;
      vignetteSettings.smoothness = data.vignetteSettings.smoothness;
      vignetteSettings.roundness = data.vignetteSettings.roundness;
      vignetteSettings.color.r = data.vignetteSettings.color.r;
      vignetteSettings.color.g = data.vignetteSettings.color.g;
      vignetteSettings.color.b = data.vignetteSettings.color.b;
      vignetteSettings.color.a = data.vignetteSettings.color.a;
      vignetteSettings.rounded = data.vignetteSettings.rounded;
      vignetteSettings._33_3_ = data.vignetteSettings._33_3_;
      bVar13 = MainCameraManager_DoPostProcessingVignette
                        (ppLayer,ppVolume,vignetteSettings,(MethodInfo *)0x0);
      data.lensDistortionSettings.yMultiplier = (int32_t)ppVolume;
      data.lensDistortionSettings.xMultiplier = ppLayer_00;
      iStack14 = data.grainSettings.intensity;
      iStack15 = data.grainSettings.size;
      iStack16 = data.grainSettings.luminanceContribution;
      data.lensDistortionSettings.intensity = (int32_t)&UNK_?;
      grainSettings.intensity = data.grainSettings.intensity;
      grainSettings.grain = data.grainSettings.grain;
      grainSettings._1_3_ = data.grainSettings._1_3_;
      grainSettings.size = data.grainSettings.size;
      grainSettings.luminanceContribution = data.grainSettings.luminanceContribution;
      bVar17 = MainCameraManager_DoPostProcessingGrain
                        ((PostProcessLayer *)ppLayer_00,ppVolume,grainSettings,(MethodInfo *)0x0);
      lensDistortionSettings.intensity = data.lensDistortionSettings.intensity;
      lensDistortionSettings.lensDistortion = data.lensDistortionSettings.lensDistortion;
      lensDistortionSettings._1_3_ = data.lensDistortionSettings._1_3_;
      lensDistortionSettings.xMultiplier = data.lensDistortionSettings.xMultiplier;
      lensDistortionSettings.yMultiplier = data.lensDistortionSettings.yMultiplier;
      bVar18 = MainCameraManager_DoPostProcessingLensDistortion
                         ((PostProcessLayer *)ppLayer_00,ppVolume,lensDistortionSettings,
                          (MethodInfo *)0x0);
      return bVar18 | bVar9 | bVar17 | bVar13 | bVar12 | bVar2 | bVar1;
    }
  }
  return bVar1;
}


/* Boolean ApplyPostProcessingThis(PostProcessingSettings) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_ApplyPostProcessingThis
               (MainCameraManager *this,PostProcessingSettings data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  ppLayer = (this->fields).postProcessLayer;
  x = (this->fields).postProcessVolume;
  pPVar1 = ppLayer;
  ppVolume = x;
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)ppLayer,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object,pPVar1);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        ppVolume = (PostProcessVolume *)&UNK_?;
        func_?(TypeInfo__MainCameraManager);
      }
      pPVar3 = &data;
      pMVar4 = TypeInfo__MainCameraManager->static_fields;
      for (iVar5 = 0x2a; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar6 = *(undefined3 *)&(pPVar3->colorSettings).field_0x1;
        (pMVar4->CurrentPostProcessingSettings).colorSettings.colors =
             (pPVar3->colorSettings).colors;
        *(undefined3 *)&(pMVar4->CurrentPostProcessingSettings).colorSettings.field_0x1 = uVar6;
        pPVar3 = (PostProcessingSettings *)&(pPVar3->colorSettings).postExposure;
        pMVar4 = (MainCameraManager__StaticFields *)
                  &(pMVar4->CurrentPostProcessingSettings).colorSettings.postExposure;
      }
      colorSettings.postExposure = data.colorSettings.postExposure;
      colorSettings.colors = data.colorSettings.colors;
      colorSettings._1_3_ = data.colorSettings._1_3_;
      colorSettings.temperature = data.colorSettings.temperature;
      colorSettings.saturation = data.colorSettings.saturation;
      colorSettings.contrast = data.colorSettings.contrast;
      MainCameraManager_DoPostProcessingColor(ppLayer,ppVolume,colorSettings,(MethodInfo *)0x0);
      iVar7 = data.bloomSettings.diffusion;
      data.colorSettings.contrast = 0;
      iVar8 = data.bloomSettings.intensity;
      bVar9 = data.bloomSettings.bloom;
      stack0xfffffff9 = data.bloomSettings._1_3_;
      uVar10 = CONCAT44(iVar8,uVar11);
      this = (MainCameraManager *)data.bloomSettings.diffusion;
      iVar12 = data.bloomSettings.softKnee;
      data.colorSettings._0_4_ = data.bloomSettings.color.r;
      data.colorSettings.postExposure = (int32_t)data.bloomSettings.color.g;
      data.colorSettings.temperature = (int32_t)data.bloomSettings.color.b;
      data.colorSettings.saturation = (int32_t)data.bloomSettings.color.a;
      bloomSettings = (PostProcessingBloomSettings)CONCAT248(bloomSettings._0_24_,uVar10);
      pPVar1 = ppLayer;
      bVar2 = MainCameraManager_DoPostProcessingBloom
                         (ppLayer,ppVolume,bloomSettings,(MethodInfo *)0x0);
      data.bloomSettings.color.g = (float)data.ambientOcclusionSettings.thickness;
      iVar13 = data.ambientOcclusionSettings.intensity;
      uVar14 = data.ambientOcclusionSettings._0_4_;
      sVar15 = (ushort)bVar2 << 8;
      data.ambientOcclusionSettings.thickness = 0;
      data.bloomSettings.diffusion = data.ambientOcclusionSettings._0_4_;
      data.bloomSettings.color.r = (float)data.ambientOcclusionSettings.intensity;
      data.bloomSettings.color.b = data.ambientOcclusionSettings.color.r;
      data.bloomSettings.color.a = data.ambientOcclusionSettings.color.g;
      data.ambientOcclusionSettings._0_4_ = data.ambientOcclusionSettings.color.b;
      uVar16 = data.ambientOcclusionSettings._0_4_;
      data.ambientOcclusionSettings.intensity = (int32_t)data.ambientOcclusionSettings.color.a;
      data.bloomSettings._0_4_ = &UNK_?;
      aoSettings.intensity = iVar13;
      data.ambientOcclusionSettings.ambientOcclusion = (bool)uVar14;
      data.ambientOcclusionSettings._1_3_ = SUB43(uVar14,1);
      aoSettings.ambientOcclusion = data.ambientOcclusionSettings.ambientOcclusion;
      aoSettings._1_3_ = data.ambientOcclusionSettings._1_3_;
      aoSettings.thickness = (int32_t)data.bloomSettings.color.g;
      aoSettings.color.r = data.ambientOcclusionSettings.color.r;
      aoSettings.color.g = data.ambientOcclusionSettings.color.g;
      aoSettings.color.b = data.ambientOcclusionSettings.color.b;
      aoSettings.color.a = data.ambientOcclusionSettings.color.a;
      data.bloomSettings.intensity = (int32_t)ppLayer;
      data.bloomSettings.softKnee = (int32_t)ppVolume;
      data.ambientOcclusionSettings._0_4_ = uVar16;
      bVar2 = MainCameraManager_DoPostProcessingAmbientOcclusion
                         (ppLayer,ppVolume,aoSettings,(MethodInfo *)0x0);
      uVar17 = (ulonglong)CONCAT12(bVar2,sVar15);
      data.vignetteSettings.vignette = 0;
      data.vignetteSettings._1_3_ = 0;
      data.ambientOcclusionSettings.color.g = (float)&UNK_?;
      aoSettings_00.focusDistance = data.depthOfFieldSettings.focusDistance;
      aoSettings_00.depthOfField = data.depthOfFieldSettings.depthOfField;
      aoSettings_00._1_3_ = data.depthOfFieldSettings._1_3_;
      aoSettings_00.aperture = data.depthOfFieldSettings.aperture;
      aoSettings_00.focalLength = data.depthOfFieldSettings.focalLength;
      aoSettings_00.maxBlurSize = data.depthOfFieldSettings.maxBlurSize;
      data.ambientOcclusionSettings.color.b = (float)ppLayer;
      data.ambientOcclusionSettings.color.a = (float)ppVolume;
      bVar2 = MainCameraManager_DoPostProcessingDepthOfField
                         (ppLayer,ppVolume,aoSettings_00,(MethodInfo *)0x0);
      uVar18 = data.vignetteSettings._32_4_;
      fVar19 = data.vignetteSettings.color.a;
      fVar20 = data.vignetteSettings.color.b;
      fVar21 = data.vignetteSettings.color.g;
      fVar22 = data.vignetteSettings.color.r;
      iVar23 = data.vignetteSettings.roundness;
      iVar24 = data.vignetteSettings.smoothness;
      iVar13 = data.vignetteSettings.intensity;
      uVar14 = data.vignetteSettings._0_4_;
      uVar17 = (ulonglong)CONCAT13(bVar2,(int3)uVar17);
      data.vignetteSettings.rounded = 0;
      data.vignetteSettings._33_3_ = 0;
      uVar25 = data.vignetteSettings._32_4_;
      data.depthOfFieldSettings.maxBlurSize = data.vignetteSettings._0_4_;
      data.vignetteSettings._0_4_ = data.vignetteSettings.intensity;
      uVar16 = data.vignetteSettings._0_4_;
      data.vignetteSettings.intensity = data.vignetteSettings.smoothness;
      data.vignetteSettings.smoothness = data.vignetteSettings.roundness;
      data.vignetteSettings.roundness = (int32_t)data.vignetteSettings.color.r;
      data.vignetteSettings.color.r = data.vignetteSettings.color.g;
      data.vignetteSettings.color.g = data.vignetteSettings.color.b;
      data.vignetteSettings.color.b = data.vignetteSettings.color.a;
      data.vignetteSettings.color.a = (float)uVar18;
      data.depthOfFieldSettings.focusDistance = (int32_t)&UNK_?;
      vignetteSettings.intensity = iVar13;
      data.vignetteSettings.vignette = (bool)uVar14;
      data.vignetteSettings._1_3_ = SUB43(uVar14,1);
      vignetteSettings.vignette = data.vignetteSettings.vignette;
      vignetteSettings._1_3_ = data.vignetteSettings._1_3_;
      vignetteSettings.smoothness = iVar24;
      vignetteSettings.roundness = iVar23;
      vignetteSettings.color.r = fVar22;
      vignetteSettings.color.g = fVar21;
      vignetteSettings.color.b = fVar20;
      vignetteSettings.color.a = fVar19;
      data.vignetteSettings.rounded = (bool)uVar18;
      data.vignetteSettings._33_3_ = SUB43(uVar18,1);
      vignetteSettings.rounded = data.vignetteSettings.rounded;
      vignetteSettings._33_3_ = data.vignetteSettings._33_3_;
      data.depthOfFieldSettings.aperture = (int32_t)ppLayer;
      data.depthOfFieldSettings.focalLength = (int32_t)ppVolume;
      data.vignetteSettings._0_4_ = uVar16;
      data.vignetteSettings._32_4_ = uVar25;
      bVar2 = MainCameraManager_DoPostProcessingVignette
                         (ppLayer,ppVolume,vignetteSettings,(MethodInfo *)0x0);
      data.lensDistortionSettings.yMultiplier = data.grainSettings._0_4_;
      iStack26 = data.grainSettings.size;
      iStack27 = data.grainSettings.luminanceContribution;
      data.lensDistortionSettings._0_4_ = &UNK_?;
      grainSettings.intensity = data.grainSettings.intensity;
      grainSettings.grain = data.grainSettings.grain;
      grainSettings._1_3_ = data.grainSettings._1_3_;
      grainSettings.size = data.grainSettings.size;
      grainSettings.luminanceContribution = data.grainSettings.luminanceContribution;
      data.lensDistortionSettings.intensity = (int32_t)pPVar1;
      data.lensDistortionSettings.xMultiplier = (int32_t)ppVolume;
      bVar28 = MainCameraManager_DoPostProcessingGrain
                         (pPVar1,ppVolume,grainSettings,(MethodInfo *)0x0);
      lensDistortionSettings.intensity = data.lensDistortionSettings.intensity;
      lensDistortionSettings.lensDistortion = data.lensDistortionSettings.lensDistortion;
      lensDistortionSettings._1_3_ = data.lensDistortionSettings._1_3_;
      lensDistortionSettings.xMultiplier = data.lensDistortionSettings.xMultiplier;
      lensDistortionSettings.yMultiplier = data.lensDistortionSettings.yMultiplier;
      bVar29 = MainCameraManager_DoPostProcessingLensDistortion
                         (pPVar1,ppVolume,lensDistortionSettings,(MethodInfo *)0x0);
      this._3_1_ = (byte)((uint)iVar7 >> 0x18);
      return bVar29 | this._3_1_ | bVar28 | bVar2 | (byte)(uVar17 >> 0x18) | (byte)(uVar17 >> 0x10)
             | (byte)(uVar17 >> 8);
    }
  }
  return 0;
}


/* Void Awake() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_Awake
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__MainCameraManager__HandleCameraCubeAddedRemoved_bool_);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__ProtectedTransform);
    cRam_? = '\x01';
  }
  pMVar1 = (MainCameraManager__Class *)
           UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_get_volume
                     ((MethodInfo *)0x0);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    pMVar1 = TypeInfo__MainCameraManager;
    func_?();
  }
  bVar2 = cRam_? == '\0';
  TypeInfo__MainCameraManager->static_fields->baseVolume = (float)pMVar1;
  if (bVar2) {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->mute = 0;
  if (TypeInfo__MainCameraManager->static_fields->mute == 0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    value = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    value = 0.0;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_set_volume
            (value,(MethodInfo *)0x0);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar3 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar3 != (Action_1_Boolean_ *)0x0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,TypeInfo__MainCameraManager->static_fields->mute,
               (pAVar3->fields)._._.method);
  }
  dictionary = (SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
  this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__ProtectedTransform);
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,dictionary,(MethodInfo *)0x0);
  (this->fields).protectedTransform = (ProtectedTransform *)this_00;
  func_?(&(this->fields).protectedTransform,this_00);
  pAVar3 = TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved;
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_01,(Object *)this,
             MethodInfo__MainCameraManager__HandleCameraCubeAddedRemoved_bool_,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<bool>;
  if (pDVar4 == (Delegate *)0x0) {
    TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved = (Action_1_Boolean_ *)0x0;
    pAStack6 = (Action_1_Boolean___Class *)0x0;
code_?:
    pDStack7 =
         (Delegate *)&TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved;
    func_?();
    return;
  }
  pAStack6 = TypeInfo__System__Action<bool>;
  pDStack7 = pDVar4;
  pAVar3 = (Action_1_Boolean_ *)func_?();
  if (pAVar3 != (Action_1_Boolean_ *)0x0) {
    TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved = pAVar3;
    pAVar5 = TypeInfo__System__Action<bool>;
    pAStack6 = TypeInfo__System__Action<bool>;
    pDStack7 = pDVar4;
    pAStack6 = (Action_1_Boolean___Class *)func_?();
    if (pAStack6 != (Action_1_Boolean___Class *)0x0) goto code_?;
  }
  pDStack7 = pDVar4;
  pAStack6 = pAVar5;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CancelTransitionCam() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_CancelTransitionCam
               (MainCameraManager *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pTVar2 = (this->fields).transitionCamera;
  if (pTVar2 != (TransitionCamera *)0x0) {
    (pTVar2->fields).transitionPercentage = 1.0;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean DoPostProcessingAmbientOcclusion(PostProcessLayer, PostProcessVolume,
   PostProcessingAmbientOcclusionSettings) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingAmbientOcclusion
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingAmbientOcclusionSettings aoSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__AmbientOcclusion_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::AmbientOcclusion>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::AmbientOcclusion>_UnityEngine__Rendering__PostProcessing__AmbientOcclusion__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if ((ppVolume != (PostProcessVolume *)0x0) &&
     (this = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
             PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0),
     this != (PostProcessProfile *)0x0)) {
    pOVar1 = (Object *)&UNK_?;
    bVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            PostProcessProfile::PostProcessProfile_TryGetSettings
                      (this,(Object **)&stack0xfffffff8,
                       bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::AmbientOcclusion>_UnityEngine__Rendering__PostProcessing__AmbientOcclusion__
                      );
    if (bVar2 == 0) {
      aoSettings.ambientOcclusion = (bool)ppVolume;
      aoSettings.thickness =
           (int32_t)Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
      if ((PostProcessProfile *)aoSettings.thickness == (PostProcessProfile *)0x0)
      goto code_?;
      aoSettings.color.r =
           (float)
           UnityEngine__Rendering__PostProcessing__AmbientOcclusion_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::AmbientOcclusion>__
      ;
      aoSettings.intensity = (int32_t)&UNK_?;
      pOVar1 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
               PostProcessProfile::PostProcessProfile_AddSettings_2
                         ((PostProcessProfile *)aoSettings.thickness,
                          UnityEngine__Rendering__PostProcessing__AmbientOcclusion_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::AmbientOcclusion>__
                         );
    }
    if ((((((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) &&
          (*(bool *)&((pOVar1[2].klass)->_0).namespaze = aoSettings.ambientOcclusion,
          pOVar1 != (Object *)0x0)) &&
         (((pOVar1[3].monitor != (MonitorData *)0x0 &&
           (pOVar1[3].monitor[8] = (MonitorData)(aoSettings.intensity != 0), pOVar1 != (Object *)0x0
           )) && ((pOVar1[3].monitor != (MonitorData *)0x0 &&
                  ((*(float *)(pOVar1[3].monitor + 0xc) =
                         (float)aoSettings.intensity / _UNK_?, pOVar1 != (Object *)0x0 &&
                   (pOVar1[6].monitor != (MonitorData *)0x0)))))))) &&
        (pOVar1[6].monitor[8] = (MonitorData)(aoSettings.thickness != 1), pOVar1 != (Object *)0x0))
       && ((pOVar1[6].monitor != (MonitorData *)0x0 &&
           (*(float *)(pOVar1[6].monitor + 0xc) = (float)aoSettings.thickness,
           pOVar1 != (Object *)0x0)))) {
      if ((0.0 < aoSettings.color.r) || (0.0 < aoSettings.color.g)) {
        bVar3 = true;
      }
      else {
        bVar3 = 0.0 < aoSettings.color.b;
      }
      if (((pOVar1[4].klass != (Object__Class *)0x0) &&
          (*(bool *)&((pOVar1[4].klass)->_0).name = bVar3, pOVar1 != (Object *)0x0)) &&
         (pOVar4 = pOVar1[4].klass, pOVar4 != (Object__Class *)0x0)) {
        (pOVar4->_0).namespaze = (char *)aoSettings.color.r;
        (pOVar4->_0).byval_arg.data = (_union_86)aoSettings.color.g;
        *(float *)&(pOVar4->_0).byval_arg.attrs = aoSettings.color.b;
        (pOVar4->_0).this_arg.data = (_union_86)aoSettings.color.a;
        return aoSettings.ambientOcclusion;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean DoPostProcessingBloom(PostProcessLayer, PostProcessVolume, PostProcessingBloomSettings)
    */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingBloom
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingBloomSettings bloomSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__Bloom_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Bloom>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::Bloom>_UnityEngine__Rendering__PostProcessing__Bloom__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if ((ppVolume != (PostProcessVolume *)0x0) &&
     (this = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
             PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0),
     this != (PostProcessProfile *)0x0)) {
    pOVar1 = (Object *)&UNK_?;
    bVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            PostProcessProfile::PostProcessProfile_TryGetSettings
                      (this,(Object **)&stack0xfffffff8,
                       bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::Bloom>_UnityEngine__Rendering__PostProcessing__Bloom__
                      );
    if (bVar2 == 0) {
      bloomSettings.bloom = (bool)ppVolume;
      bloomSettings.softKnee =
           (int32_t)Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
      if ((PostProcessProfile *)bloomSettings.softKnee == (PostProcessProfile *)0x0)
      goto code_?;
      bloomSettings.diffusion =
           (int32_t)
           UnityEngine__Rendering__PostProcessing__Bloom_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Bloom>__
      ;
      bloomSettings.intensity = (int32_t)&UNK_?;
      pOVar1 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
               PostProcessProfile::PostProcessProfile_AddSettings_2
                         ((PostProcessProfile *)bloomSettings.softKnee,
                          UnityEngine__Rendering__PostProcessing__Bloom_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Bloom>__
                         );
    }
    if (((((((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) &&
           (*(bool *)&((pOVar1[2].klass)->_0).namespaze = bloomSettings.bloom,
           pOVar1 != (Object *)0x0)) &&
          (((pOVar1[3].klass != (Object__Class *)0x0 &&
            (*(bool *)&((pOVar1[3].klass)->_0).name = bloomSettings.intensity != 0,
            pOVar1 != (Object *)0x0)) &&
           ((pOVar1[3].klass != (Object__Class *)0x0 &&
            ((((pOVar1[3].klass)->_0).namespaze = (char *)(float)bloomSettings.intensity,
             pOVar1 != (Object *)0x0 && (pOVar1[4].klass != (Object__Class *)0x0)))))))) &&
         (*(bool *)&((pOVar1[4].klass)->_0).name = bloomSettings.softKnee != 5,
         pOVar1 != (Object *)0x0)) &&
        (((pOVar1[4].klass != (Object__Class *)0x0 &&
          (((pOVar1[4].klass)->_0).namespaze =
                (char *)((float)bloomSettings.softKnee / _UNK_?), pOVar1 != (Object *)0x0))
         && (pOVar1[5].klass != (Object__Class *)0x0)))) &&
       (((*(bool *)&((pOVar1[5].klass)->_0).name = bloomSettings.diffusion != 7,
         pOVar1 != (Object *)0x0 && (pOVar1[5].klass != (Object__Class *)0x0)) &&
        (((pOVar1[5].klass)->_0).namespaze = (char *)(float)bloomSettings.diffusion,
        pOVar1 != (Object *)0x0)))) {
      if ((bloomSettings.color.r < _UNK_?) || (bloomSettings.color.g < _UNK_?)) {
        bVar3 = true;
      }
      else {
        bVar3 = bloomSettings.color.b < _UNK_?;
      }
      if (((pOVar1[6].klass != (Object__Class *)0x0) &&
          (*(bool *)&((pOVar1[6].klass)->_0).name = bVar3, pOVar1 != (Object *)0x0)) &&
         (pOVar4 = pOVar1[6].klass, pOVar4 != (Object__Class *)0x0)) {
        (pOVar4->_0).namespaze = (char *)bloomSettings.color.r;
        (pOVar4->_0).byval_arg.data = (_union_86)bloomSettings.color.g;
        *(float *)&(pOVar4->_0).byval_arg.attrs = bloomSettings.color.b;
        (pOVar4->_0).this_arg.data = (_union_86)bloomSettings.color.a;
        return bloomSettings.bloom;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Boolean DoPostProcessingColor(PostProcessLayer, PostProcessVolume, PostProcessingColorSettings)
    */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingColor
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingColorSettings colorSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__ColorGrading_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::ColorGrading>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::ColorGrading>_UnityEngine__Rendering__PostProcessing__ColorGrading__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if (ppVolume != (PostProcessVolume *)0x0) {
    this = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
           PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
    if (this != (PostProcessProfile *)0x0) {
      pOVar1 = (Object *)&UNK_?;
      bVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              PostProcessProfile::PostProcessProfile_TryGetSettings
                        (this,(Object **)&stack0xfffffff8,
                         bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::ColorGrading>_UnityEngine__Rendering__PostProcessing__ColorGrading__
                        );
      if (bVar2 == 0) {
        colorSettings.colors = (bool)ppVolume;
        colorSettings.temperature =
             (int32_t)Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                      PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
        if ((PostProcessProfile *)colorSettings.temperature == (PostProcessProfile *)0x0)
        goto code_?;
        colorSettings.saturation =
             (int32_t)
             UnityEngine__Rendering__PostProcessing__ColorGrading_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::ColorGrading>__
        ;
        colorSettings.postExposure = (int32_t)&UNK_?;
        pOVar1 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                 PostProcessProfile::PostProcessProfile_AddSettings_2
                           ((PostProcessProfile *)colorSettings.temperature,
                            UnityEngine__Rendering__PostProcessing__ColorGrading_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::ColorGrading>__
                           );
        if ((pOVar1 == (Object *)0x0) || (pOVar1[3].klass == (Object__Class *)0x0))
        goto code_?;
        ((pOVar1[3].klass)->_0).namespaze = (char *)0x0;
      }
      if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
        *(bool *)&((pOVar1[2].klass)->_0).namespaze = colorSettings.colors;
        if ((pOVar1 != (Object *)0x0) && (pOVar1[0xb].monitor != (MonitorData *)0x0)) {
          pOVar1[0xb].monitor[8] = (MonitorData)(colorSettings.postExposure != 0);
          if ((pOVar1 != (Object *)0x0) && (pOVar1[0xb].monitor != (MonitorData *)0x0)) {
            *(float *)(pOVar1[0xb].monitor + 0xc) =
                 (float)colorSettings.postExposure / _UNK_?;
            if ((pOVar1 != (Object *)0x0) && (pOVar1[8].monitor != (MonitorData *)0x0)) {
              pOVar1[8].monitor[8] = (MonitorData)(colorSettings.temperature != 0);
              if ((pOVar1 != (Object *)0x0) && (pOVar1[8].monitor != (MonitorData *)0x0)) {
                *(float *)(pOVar1[8].monitor + 0xc) = (float)colorSettings.temperature;
                if ((pOVar1 != (Object *)0x0) && (pOVar1[10].monitor != (MonitorData *)0x0)) {
                  pOVar1[10].monitor[8] = (MonitorData)(colorSettings.saturation != 0);
                  if ((pOVar1 != (Object *)0x0) && (pOVar1[10].monitor != (MonitorData *)0x0)) {
                    *(float *)(pOVar1[10].monitor + 0xc) = (float)colorSettings.saturation;
                    if ((pOVar1 != (Object *)0x0) && (pOVar1[0xc].klass != (Object__Class *)0x0)) {
                      *(bool *)&((pOVar1[0xc].klass)->_0).name = colorSettings.contrast != 0;
                      if ((pOVar1 != (Object *)0x0) && (pOVar1[0xc].klass != (Object__Class *)0x0))
                      {
                        ((pOVar1[0xc].klass)->_0).namespaze = (char *)(float)colorSettings.contrast;
                        return colorSettings.colors;
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
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean DoPostProcessingDepthOfField(PostProcessLayer, PostProcessVolume,
   PostProcessingDepthOfFieldSettings) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingDepthOfField
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingDepthOfFieldSettings aoSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__DepthOfField_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::DepthOfField>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::DepthOfField>_UnityEngine__Rendering__PostProcessing__DepthOfField__
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if (ppVolume != (PostProcessVolume *)0x0) {
    pPVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
             PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
    if (pPVar2 != (PostProcessProfile *)0x0) {
      bVar3 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              PostProcessProfile::PostProcessProfile_TryGetSettings
                        (pPVar2,&pOStack_1,
                         bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::DepthOfField>_UnityEngine__Rendering__PostProcessing__DepthOfField__
                        );
      if (bVar3 == 0) {
        aoSettings.aperture = 0;
        aoSettings.focusDistance = (int32_t)ppVolume;
        aoSettings._0_4_ = &UNK_?;
        pPVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                 PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
        if (pPVar2 == (PostProcessProfile *)0x0) goto code_?;
        aoSettings.maxBlurSize =
             (int32_t)
             UnityEngine__Rendering__PostProcessing__DepthOfField_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::DepthOfField>__
        ;
        aoSettings.aperture = (int32_t)&UNK_?;
        aoSettings.focalLength = (int32_t)pPVar2;
        pOStack_1 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessProfile::PostProcessProfile_AddSettings_2
                              (pPVar2,
                               UnityEngine__Rendering__PostProcessing__DepthOfField_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::DepthOfField>__
                              );
      }
      if ((pOStack_1 != (Object *)0x0) && (pOStack_1[2].klass != (Object__Class *)0x0)) {
        *(bool *)&((pOStack_1[2].klass)->_0).namespaze = aoSettings.depthOfField;
        if ((((pOStack_1 != (Object *)0x0) &&
             (((pOStack_1[3].klass != (Object__Class *)0x0 &&
               (*(bool *)&((pOStack_1[3].klass)->_0).name = aoSettings.focusDistance != 10,
               fVar4 = _UNK_?, pOStack_1 != (Object *)0x0)) &&
              (pOStack_1[3].klass != (Object__Class *)0x0)))) &&
            ((((((pOStack_1[3].klass)->_0).namespaze =
                     (char *)((float)aoSettings.focusDistance / _UNK_?),
               pOStack_1 != (Object *)0x0 && (pOStack_1[3].monitor != (MonitorData *)0x0)) &&
              (pOStack_1[3].monitor[8] = (MonitorData)(aoSettings.aperture != 0x38),
              pOStack_1 != (Object *)0x0)) &&
             ((pOStack_1[3].monitor != (MonitorData *)0x0 &&
              (*(float *)(pOStack_1[3].monitor + 0xc) = (float)aoSettings.aperture / fVar4,
              pOStack_1 != (Object *)0x0)))))) &&
           ((pOStack_1[4].klass != (Object__Class *)0x0 &&
            ((((*(bool *)&((pOStack_1[4].klass)->_0).name = aoSettings.focalLength != 0x32,
               pOStack_1 != (Object *)0x0 && (pOStack_1[4].klass != (Object__Class *)0x0)) &&
              (((pOStack_1[4].klass)->_0).namespaze = (char *)(float)aoSettings.focalLength,
              pOStack_1 != (Object *)0x0)) &&
             ((pOStack_1[4].monitor != (MonitorData *)0x0 &&
              (pOStack_1[4].monitor[8] = (MonitorData)(aoSettings.maxBlurSize != 2),
              pOStack_1 != (Object *)0x0)))))))) {
          pMVar5 = pOStack_1[4].monitor;
          aoSettings.maxBlurSize = (int32_t)&UNK_?;
          KVar6 = UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
                  PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings_KernelSize
                            (&aoSettings,(MethodInfo *)0x0);
          if (pMVar5 != (MonitorData *)0x0) {
            *(KernelSize__Enum *)(pMVar5 + 0xc) = KVar6;
            return aoSettings.depthOfField;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Boolean DoPostProcessingGrain(PostProcessLayer, PostProcessVolume, PostProcessingGrainSettings)
    */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingGrain
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingGrainSettings grainSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__Grain_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Grain>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::Grain>_UnityEngine__Rendering__PostProcessing__Grain__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if ((ppVolume != (PostProcessVolume *)0x0) &&
     (this = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
             PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0),
     this != (PostProcessProfile *)0x0)) {
    pOVar1 = (Object *)&UNK_?;
    bVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            PostProcessProfile::PostProcessProfile_TryGetSettings
                      (this,(Object **)&stack0xfffffff8,
                       bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::Grain>_UnityEngine__Rendering__PostProcessing__Grain__
                      );
    if (bVar2 == 0) {
      grainSettings.grain = (bool)ppVolume;
      grainSettings.size =
           (int32_t)Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
      if ((PostProcessProfile *)grainSettings.size == (PostProcessProfile *)0x0)
      goto code_?;
      grainSettings.luminanceContribution =
           (int32_t)
           UnityEngine__Rendering__PostProcessing__Grain_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Grain>__
      ;
      grainSettings.intensity = (int32_t)&UNK_?;
      pOVar1 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
               PostProcessProfile::PostProcessProfile_AddSettings_2
                         ((PostProcessProfile *)grainSettings.size,
                          UnityEngine__Rendering__PostProcessing__Grain_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Grain>__
                         );
    }
    if (((((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) &&
         (*(bool *)&((pOVar1[2].klass)->_0).namespaze = grainSettings.grain, pOVar1 != (Object *)0x0
         )) && ((((pOVar1[3].monitor != (MonitorData *)0x0 &&
                  (pOVar1[3].monitor[8] = (MonitorData)(grainSettings.intensity != 0),
                  pOVar1 != (Object *)0x0)) &&
                 ((pOVar1[3].monitor != (MonitorData *)0x0 &&
                  ((*(float *)(pOVar1[3].monitor + 0xc) =
                         (float)grainSettings.intensity / _UNK_?, pOVar1 != (Object *)0x0 &&
                   (pOVar1[4].klass != (Object__Class *)0x0)))))) &&
                (*(bool *)&((pOVar1[4].klass)->_0).name = grainSettings.size != 10,
                fVar3 = _UNK_?, pOVar1 != (Object *)0x0)))) &&
       ((((pOVar1[4].klass != (Object__Class *)0x0 &&
          (((pOVar1[4].klass)->_0).namespaze = (char *)((float)grainSettings.size / _UNK_?),
          pOVar1 != (Object *)0x0)) && (pOVar1[4].monitor != (MonitorData *)0x0)) &&
        ((pOVar1[4].monitor[8] = (MonitorData)(grainSettings.luminanceContribution != 8),
         pOVar1 != (Object *)0x0 && (pOVar1[4].monitor != (MonitorData *)0x0)))))) {
      *(float *)(pOVar1[4].monitor + 0xc) = (float)grainSettings.luminanceContribution / fVar3;
      return grainSettings.grain;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean DoPostProcessingLensDistortion(PostProcessLayer, PostProcessVolume,
   PostProcessingLensDistortionSettings) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingLensDistortion
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingLensDistortionSettings lensDistortionSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__LensDistortion_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::LensDistortion>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::LensDistortion>_UnityEngine__Rendering__PostProcessing__LensDistortion__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if ((ppVolume != (PostProcessVolume *)0x0) &&
     (this = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
             PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0),
     this != (PostProcessProfile *)0x0)) {
    pOVar1 = (Object *)&UNK_?;
    bVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            PostProcessProfile::PostProcessProfile_TryGetSettings
                      (this,(Object **)&stack0xfffffff8,
                       bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::LensDistortion>_UnityEngine__Rendering__PostProcessing__LensDistortion__
                      );
    if (bVar2 == 0) {
      lensDistortionSettings.lensDistortion = (bool)ppVolume;
      lensDistortionSettings.xMultiplier =
           (int32_t)Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
      if ((PostProcessProfile *)lensDistortionSettings.xMultiplier == (PostProcessProfile *)0x0)
      goto code_?;
      lensDistortionSettings.yMultiplier =
           (int32_t)
           UnityEngine__Rendering__PostProcessing__LensDistortion_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::LensDistortion>__
      ;
      lensDistortionSettings.intensity = (int32_t)&UNK_?;
      pOVar1 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
               PostProcessProfile::PostProcessProfile_AddSettings_2
                         ((PostProcessProfile *)lensDistortionSettings.xMultiplier,
                          UnityEngine__Rendering__PostProcessing__LensDistortion_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::LensDistortion>__
                         );
    }
    if (((((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) &&
         (*(bool *)&((pOVar1[2].klass)->_0).namespaze = lensDistortionSettings.lensDistortion,
         pOVar1 != (Object *)0x0)) &&
        ((((pOVar1[3].klass != (Object__Class *)0x0 &&
           (*(bool *)&((pOVar1[3].klass)->_0).name = lensDistortionSettings.intensity != 0,
           pOVar1 != (Object *)0x0)) &&
          ((pOVar1[3].klass != (Object__Class *)0x0 &&
           ((((pOVar1[3].klass)->_0).namespaze = (char *)(float)lensDistortionSettings.intensity,
            pOVar1 != (Object *)0x0 && (pOVar1[3].monitor != (MonitorData *)0x0)))))) &&
         (pOVar1[3].monitor[8] = (MonitorData)(lensDistortionSettings.xMultiplier != 100),
         fVar3 = _UNK_?, pOVar1 != (Object *)0x0)))) &&
       ((((pOVar1[3].monitor != (MonitorData *)0x0 &&
          (*(float *)(pOVar1[3].monitor + 0xc) =
                (float)lensDistortionSettings.xMultiplier / _UNK_?, pOVar1 != (Object *)0x0))
         && (pOVar1[4].klass != (Object__Class *)0x0)) &&
        ((*(bool *)&((pOVar1[4].klass)->_0).name = lensDistortionSettings.yMultiplier != 100,
         pOVar1 != (Object *)0x0 && (pOVar1[4].klass != (Object__Class *)0x0)))))) {
      ((pOVar1[4].klass)->_0).namespaze =
           (char *)((float)lensDistortionSettings.yMultiplier / fVar3);
      return lensDistortionSettings.lensDistortion;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean DoPostProcessingVignette(PostProcessLayer, PostProcessVolume,
   PostProcessingVignetteSettings) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_DoPostProcessingVignette
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,
               PostProcessingVignetteSettings vignetteSettings,MethodInfo *method)

{
  PVar1 = vignetteSettings;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    UnityEngine__Rendering__PostProcessing__Vignette_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Vignette>__
                   );
    func_?(&
                    bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::Vignette>_UnityEngine__Rendering__PostProcessing__Vignette__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,1,(MethodInfo *)0x0);
  if ((ppVolume != (PostProcessVolume *)0x0) &&
     (this = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
             PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0),
     this != (PostProcessProfile *)0x0)) {
    pOVar2 = (Object *)&UNK_?;
    bVar3 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            PostProcessProfile::PostProcessProfile_TryGetSettings
                      (this,(Object **)&stack0xfffffff8,
                       bool_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__TryGetSettings<UnityEngine::Rendering::PostProcessing::Vignette>_UnityEngine__Rendering__PostProcessing__Vignette__
                      );
    if (bVar3 == 0) {
      vignetteSettings.vignette = (bool)ppVolume;
      vignetteSettings.smoothness =
           (int32_t)Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
                    PostProcessVolume::PostProcessVolume_get_profile(ppVolume,(MethodInfo *)0x0);
      if ((PostProcessProfile *)vignetteSettings.smoothness == (PostProcessProfile *)0x0)
      goto code_?;
      vignetteSettings.roundness =
           (int32_t)
           UnityEngine__Rendering__PostProcessing__Vignette_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Vignette>__
      ;
      vignetteSettings.intensity = (int32_t)&UNK_?;
      pOVar2 = Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
               PostProcessProfile::PostProcessProfile_AddSettings_2
                         ((PostProcessProfile *)vignetteSettings.smoothness,
                          UnityEngine__Rendering__PostProcessing__Vignette_MethodInfo__UnityEngine__Rendering__PostProcessing__PostProcessProfile__AddSettings<UnityEngine::Rendering::PostProcessing::Vignette>__
                         );
    }
    if ((((((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) &&
          (*(bool *)&((pOVar2[2].klass)->_0).namespaze = vignetteSettings.vignette,
          pOVar2 != (Object *)0x0)) &&
         (((pOVar2[4].monitor != (MonitorData *)0x0 &&
           (pOVar2[4].monitor[8] = (MonitorData)(vignetteSettings.intensity != 0),
           fVar4 = _UNK_?, pOVar2 != (Object *)0x0)) &&
          ((pOVar2[4].monitor != (MonitorData *)0x0 &&
           ((*(float *)(pOVar2[4].monitor + 0xc) = (float)vignetteSettings.intensity / _UNK_?
            , pOVar2 != (Object *)0x0 && (pOVar2[5].klass != (Object__Class *)0x0)))))))) &&
        (*(bool *)&((pOVar2[5].klass)->_0).name = vignetteSettings.smoothness != 2,
        pOVar2 != (Object *)0x0)) &&
       ((((pOVar2[5].klass != (Object__Class *)0x0 &&
          (((pOVar2[5].klass)->_0).namespaze = (char *)((float)vignetteSettings.smoothness / fVar4),
          pOVar2 != (Object *)0x0)) && (pOVar2[5].monitor != (MonitorData *)0x0)) &&
        (((pOVar2[5].monitor[8] = (MonitorData)(vignetteSettings.roundness != 100),
          pOVar2 != (Object *)0x0 && (pOVar2[5].monitor != (MonitorData *)0x0)) &&
         ((*(float *)(pOVar2[5].monitor + 0xc) = (float)vignetteSettings.roundness / fVar4,
          pOVar2 != (Object *)0x0 && (pOVar2[6].klass != (Object__Class *)0x0)))))))) {
      vignetteSettings.rounded = PVar1.rounded;
      *(bool *)&((pOVar2[6].klass)->_0).namespaze = vignetteSettings.rounded;
      if (pOVar2 != (Object *)0x0) {
        if ((0.0 < vignetteSettings.color.r) || (0.0 < vignetteSettings.color.g)) {
          MVar5 = (MonitorData)0x1;
        }
        else {
          MVar5 = (MonitorData)(0.0 < vignetteSettings.color.b);
        }
        if (((pOVar2[3].monitor != (MonitorData *)0x0) &&
            (pOVar2[3].monitor[8] = MVar5, pOVar2 != (Object *)0x0)) &&
           (pMVar6 = pOVar2[3].monitor, pMVar6 != (MonitorData *)0x0)) {
          *(float *)(pMVar6 + 0xc) = vignetteSettings.color.r;
          *(float *)(pMVar6 + 0x10) = vignetteSettings.color.g;
          *(float *)(pMVar6 + 0x14) = vignetteSettings.color.b;
          *(float *)(pMVar6 + 0x18) = vignetteSettings.color.a;
          return vignetteSettings.vignette;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Void EnablePostProcessing(PostProcessLayer, PostProcessVolume, Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_EnablePostProcessing
               (PostProcessLayer *ppLayer,PostProcessVolume *ppVolume,bool ppEnabled,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if (ppLayer != (PostProcessLayer *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)ppLayer,(MethodInfo *)0x0);
    if (ppEnabled != bVar1) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)ppLayer,ppEnabled,(MethodInfo *)0x0);
    }
    if (ppVolume != (PostProcessVolume *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)ppVolume,(MethodInfo *)0x0);
      if (ppEnabled == bVar2) {
        if (ppEnabled == bVar1) {
          return;
        }
      }
      else {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)ppVolume,ppEnabled,(MethodInfo *)0x0);
      }
      if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pAVar3 = TypeInfo__MainCameraManager->static_fields->OnCameraEffectsChange;
      if (pAVar3 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void EnableScreenOptimizer() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_EnableScreenOptimizer
               (MainCameraManager *this,MethodInfo *method)

{
  this_00 = (this->fields).screenSizeOptimizer;
  if (this_00 != (ScreenSizeOptimizer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ICameraSettings GetSettings(MVGameType) */

ICameraSettings *
Assembly-CSharp.dll::MainCameraManager::MainCameraManager_GetSettings
          (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (Dictionary_2_System_Int32Enum_System_Object_ *)
         TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       (this,gameType,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__get_Item_MV__Common__MVGameType_
                       );
    return (ICameraSettings *)pOVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pIVar4 = (ICameraSettings *)(*pcVar3)();
  return pIVar4;
}


/* Void HandleCameraCubeAddedRemoved(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_HandleCameraCubeAddedRemoved
               (MainCameraManager *this,bool cubeAddedRemoved,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    func_?(&
                    ShortcutHandler__MethodInfo__UnityEngine__Object__FindObjectsOfType<ShortcutHandler>______
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsOfType_2
                     (
                     ShortcutHandler__MethodInfo__UnityEngine__Object__FindObjectsOfType<ShortcutHandler>______
                     );
  uVar2 = 0;
  if (pOVar1 == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppOVar4 = pOVar1->vector;
  for (; this_00 = (ShortcutHandler *)0x0, (int)uVar2 < (int)pOVar1->max_length; uVar2 = uVar2 + 1)
  {
    if (pOVar1->max_length <= uVar2) goto code_?;
    this_00 = (ShortcutHandler *)*ppOVar4;
    if (this_00 == (ShortcutHandler *)0x0) goto code_?;
    if ((this_00->fields).kogamaControl == 0x34) break;
    ppOVar4 = ppOVar4 + 1;
  }
  if (cubeAddedRemoved == 0) {
    ppLayer = (this->fields).postProcessLayer;
    ppVolume = (this->fields).postProcessVolume;
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,0,(MethodInfo *)0x0);
    if (this_00 != (ShortcutHandler *)0x0) {
      ShortcutHandler::ShortcutHandler_UnRegisterShortcutKey(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  else if (this_00 != (ShortcutHandler *)0x0) {
    ShortcutHandler::ShortcutHandler_RegisterShortcutKey(this_00,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean HasSetting(MVGameType) */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_HasSetting
               (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)this,gameType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__ContainsKey_MV__Common__MVGameType_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void IgnoreInputTypes(IgnoreInputTypes) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_IgnoreInputTypes
               (MainCameraManager *this,IgnoreInputTypes__Enum inputTypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__OnIgnoreInputTypesArgs);
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).onIgnoreInputTypes;
  if (pEVar1 != (EventHandler_1_OnIgnoreInputTypesArgs_ *)0x0) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__OnIgnoreInputTypesArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)inputTypes;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
  return;
}


/* Void Init() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_Init
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Preview);
    func_?(&StringLiteral_UXElementSecondary);
    func_?(&StringLiteral_Logic);
    func_?(&StringLiteral_CamRotateTarget);
    func_?(&StringLiteral_UXElement);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).mainCamera;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElement,(MethodInfo *)0x0);
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Preview,(MethodInfo *)0x0);
  uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Hidden,(MethodInfo *)0x0);
  uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UXElementSecondary,(MethodInfo *)0x0);
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              ((Camera *)0x0,
               ~(1 << ((byte)iVar2 & 0x1f) | 1 << (uVar3 & 0x1f) | 1 << (uVar4 & 0x1f) |
                1 << (uVar5 & 0x1f)),(MethodInfo *)0x0);
    MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar6 == MVGameMode__Enum_Play) {
      pCVar1 = (this->fields).mainCamera;
      if (pCVar1 == (Camera *)0x0) goto code_?;
      uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                        (pCVar1,(MethodInfo *)0x0);
      uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      if ((uVar4 & uVar3) == uVar5) {
        pCVar1 = (this->fields).mainCamera;
        if (pCVar1 == (Camera *)0x0) goto code_?;
        iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (pCVar1,(MethodInfo *)0x0);
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar1,iVar2 - (1 << ((byte)iVar7 & 0x1f)),(MethodInfo *)0x0);
      }
    }
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                        (pCVar1,(MethodInfo *)0x0);
      (this->fields).cullingMask = iVar2;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) ||
         ((this->fields).blueModeEnabled == 0)) {
        return;
      }
      pCVar1 = (this->fields).mainCamera;
      if (pCVar1 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar1,0,(MethodInfo *)0x0);
        pCVar1 = (this->fields).mainCamera;
        if (pCVar1 != (Camera *)0x0) {
          uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                            (pCVar1,(MethodInfo *)0x0);
          uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar1,uVar3 | 1 << (uVar4 & 0x1f),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_OnDestroy
               (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Clear__
                   );
    func_?(&MethodInfo__MainCameraManager__HandleCameraCubeAddedRemoved_bool_);
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    func_?();
  }
  else {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Clear__
              );
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,
               MethodInfo__MainCameraManager__HandleCameraCubeAddedRemoved_bool_,(MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved =
           (Action_1_Boolean_ *)0x0;
code_?:
      func_?();
      return;
    }
    pAVar1 = (Action_1_Boolean_ *)func_?();
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
      TypeInfo__MainCameraManager->static_fields->OnCameraCubeAddedRemoved = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PlayPlingSound() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_PlayPlingSound
               (MainCameraManager *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).plingSound;
  if (pAVar2 != (AudioSource *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)0x0;
    pAStack_4 = pAVar2;
    (*pcRam_?)();
    return;
  }
  uVar5 = func_?(&pAStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RegisterCameraWithSettings(MVGameType, ICameraSettings) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_RegisterCameraWithSettings
               (MVGameType__Enum gameType,ICameraSettings *camSettings,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (Dictionary_2_System_Int32Enum_System_Object_ *)
         TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              (this,gameType,(Object *)camSettings,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
              );
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RenderLogic(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_RenderLogic
               (MainCameraManager *this,bool renderLogic,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (renderLogic == 0) {
    if (this_00 == (Camera *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 & ~(1 << (uVar3 & 0x1f));
  }
  else {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar2,(MethodInfo *)0x0);
  (this->fields).isLogicRendered = renderLogic;
  return;
}


/* Void SetCameraController(MVCameraController) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_SetCameraController
               (MainCameraManager *this,MVCameraController *camController,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 != (MVCameraController *)0x0) {
    pMVar2 = (pMVar1->fields).cameraStack;
    if (pMVar2 == (MVCameraController_CameraStack *)0x0) goto code_?;
    MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
              (pMVar2,(MethodInfo *)0x0);
  }
  (this->fields).cameraController = camController;
  func_?(&(this->fields).cameraController,camController);
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 != (MVCameraController *)0x0) &&
     (pMVar2 = (pMVar1->fields).cameraStack, pMVar2 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_Activate
              (pMVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartTransitionCam(Single, Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_StartTransitionCam
               (MainCameraManager *this,float transitionTime,bool soft,MethodInfo *method)

{
  this_00 = (this->fields).transitionCamera;
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 != (MVCameraController *)0x0) &&
     (this_01 = (pMVar1->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0)) {
    this_03 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                        (this_01,(MethodInfo *)0x0);
    if (this_03 != (MVCameraBase *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                ((Component *)this_03,(MethodInfo *)0x0);
      if (this_00 != (TransitionCamera *)0x0) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar2 != (MainCameraManager *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pMVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&puStack_5,pTVar3,(MethodInfo *)0x0);
            fVar6 = pVVar4->y;
            fVar7 = pVVar4->z;
            (this_00->fields).prevCameraPosition.x = pVVar4->x;
            (this_00->fields).prevCameraPosition.y = fVar6;
            (this_00->fields).prevCameraPosition.z = fVar7;
            pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if (pMVar2 != (MainCameraManager *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pMVar2,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localRotation
                                   ((Quaternion *)&stack0xffffffec,pTVar3,(MethodInfo *)0x0);
                fVar7 = pQVar8->y;
                fVar6 = pQVar8->z;
                fVar9 = pQVar8->w;
                (this_00->fields).prevCameraRotation.x = pQVar8->x;
                (this_00->fields).prevCameraRotation.y = fVar7;
                (this_00->fields).prevCameraRotation.z = fVar6;
                (this_00->fields).prevCameraRotation.w = fVar9;
                pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                   ((MethodInfo *)0x0);
                if ((pMVar2 != (MainCameraManager *)0x0) &&
                   (this_02 = (pMVar2->fields).mainCamera, this_02 != (Camera *)0x0)) {
                  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                                    (this_02,(MethodInfo *)0x0);
                  (this_00->fields).fieldOfView = fVar7;
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar3,(this_00->fields).prevCameraPosition,(MethodInfo *)0x0);
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                    if (pTVar3 != (Transform *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localRotation
                                (pTVar3,(this_00->fields).prevCameraRotation,(MethodInfo *)0x0);
                      (this_00->fields).time = (float)&UNK_?;
                      (this_00->fields).superSoft = 0xea;
                      (this_00->fields).transitionPercentage = 0.0;
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UnRegisterCameraWithSettings(MVGameType) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UnRegisterCameraWithSettings
               (MVGameType__Enum gameType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (Dictionary_2_System_Int32Enum_System_Object_ *)
         TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Remove
              (this,gameType,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateAudioListener() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UpdateAudioListener
               (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 != (MVCameraController *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    pMVar2 = (pMVar1->fields).cameraStack;
    if (pMVar2 != (MVCameraController_CameraStack *)0x0) {
      pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (pMVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pMVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        on = false;
      }
      else {
        pMVar2 = (pMVar1->fields).cameraStack;
        if (pMVar2 == (MVCameraController_CameraStack *)0x0) goto code_?;
        pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (pMVar2,(MethodInfo *)0x0);
        if (pMVar3 == (MVCameraBase *)0x0) goto code_?;
        iVar5 = (*(code *)(pMVar3->klass->vtable).__unknown.method)
                          (pMVar3,(pMVar3->klass->vtable).Awake.methodPtr);
        if ((((iVar5 == 0) || (iVar5 == 6)) || (iVar5 == 10)) || (iVar5 == 0x14)) {
          on = true;
        }
        else {
          on = iVar5 == 0x13;
        }
      }
      this_00 = (this->fields).audioListener;
      if (this_00 != (AudioListener *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,on ^ 1,(MethodInfo *)0x0);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (this_01 != (MVLocalPlayer *)0x0) {
          MVLocalPlayer::MVLocalPlayer_ToggleAudioListener(this_01,on,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateCamera() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_UpdateCamera
               (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if (pMVar1 != (MVCameraController *)0x0) {
    this_00 = (pMVar1->fields).cameraStack;
    pPVar2 = (this->fields).protectedTransform;
    if (this_00 != (MVCameraController_CameraStack *)0x0) {
      pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (this_00,(MethodInfo *)0x0);
      if (pMVar3 != (MVCameraBase *)0x0) {
        (*(code *)(pMVar3->klass->vtable).UpdateCamera.method)
                  (pMVar3,pMVar1,pPVar2,(pMVar3->klass->vtable).CameraCollision.methodPtr);
        pTVar4 = (this->fields).transitionCamera;
        if (pTVar4 != (TransitionCamera *)0x0) {
          (*(code *)(pTVar4->klass->vtable).UpdateCamera.method)
                    (pTVar4,(this->fields).cameraController,(this->fields).protectedTransform,
                     (pTVar4->klass->vtable).CameraCollision.methodPtr);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MainCameraManager() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>
                   );
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Dictionary__
            );
  TypeInfo__MainCameraManager->static_fields->cameraSettings =
       (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)this;
  func_?(&TypeInfo__MainCameraManager->static_fields->cameraSettings,this);
  TypeInfo__MainCameraManager->static_fields->DistanceToAvatarBase = 5.0;
  TypeInfo__MainCameraManager->static_fields->DefaultCameraType = 0;
  TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson = 0;
  TypeInfo__MainCameraManager->static_fields->baseVolume = 0.0;
  TypeInfo__MainCameraManager->static_fields->mute = 0;
  TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects = 0;
  return;
}


/* MainCameraManager() */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager__ctor
               (MainCameraManager *this,MethodInfo *method)

{
  (this->fields).cameraEffects = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void add_onIgnoreInputTypes(EventHandler`1[OnIgnoreInputTypesArgs]) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
               (MainCameraManager *this,EventHandler_1_OnIgnoreInputTypesArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).onIgnoreInputTypes;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)
             func_?(&(this->fields).onIgnoreInputTypes,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* MVCameraBase get_CurrentCamera() */

MVCameraBase *
Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_CurrentCamera
          (MainCameraManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraController;
  if ((pMVar1 != (MVCameraController *)0x0) &&
     (pMVar2 = (pMVar1->fields).cameraStack, pMVar2 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pLVar3 = (pMVar2->fields).activeCameras;
    if (pLVar3 != (List_1_MVCameraBase_ *)0x0) {
      if ((pLVar3->fields)._size == 0) {
        return (MVCameraBase *)0x0;
      }
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (pMVar2->fields).activeCameras,(pLVar3->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      return (MVCameraBase *)RVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pMVar7 = (MVCameraBase *)(*pcVar6)();
  return pMVar7;
}


/* Single get_FieldOfView() */

float Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FieldOfView
                (MainCameraManager *this,MethodInfo *method)

{
  pcStack_1 = (code *)&stack0xfffffffc;
  pCVar2 = (this->fields).mainCamera;
  if (pCVar2 != (Camera *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pCStack_3 = pCVar2;
    pcStack_1 = pcRam_?;
    fVar4 = (float10)(*pcRam_?)();
    return (float)fVar4;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  fVar4 = (float10)(*pcVar7)();
  return (float)fVar4;
}


/* Vector3 get_FireDirection() */

Vector3 * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FireDirection
                    (Vector3 *__return_storage_ptr__,MainCameraManager *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Vector3 get_FireOrigin() */

Vector3 * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_FireOrigin
                    (Vector3 *__return_storage_ptr__,MainCameraManager *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&fStack_2,pTVar1,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      fVar3 = 0.0;
      pVVar4 = (Vector3 *)&stack0xffffffd8;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (pVVar4,pTVar1,(MethodInfo *)0x0);
      fStack_2 = pVVar5->x;
      puStack_6 = (undefined *)pVVar5->y;
      pMVar7 = (this->fields).cameraController;
      if ((pMVar7 != (MVCameraController *)0x0) &&
         (this_00 = (pMVar7->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0))
      {
        pMVar8 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                           (this_00,(MethodInfo *)0x0);
        if (pMVar8 != (MVCameraBase *)0x0) {
          fVar9 = (pMVar8->fields).cameraRadius;
          __return_storage_ptr__->x = (float)pVVar4 + fStack_2 * fVar9;
          __return_storage_ptr__->y = (float)pTVar1 + (float)puStack_6 * fVar9;
          __return_storage_ptr__->z = fVar3 + (float)this_00 * fVar9;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar10)();
  return pVVar4;
}


/* Boolean get_GameHasCameraEffects() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_GameHasCameraEffects
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  return TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects;
}


/* Boolean get_Mute() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_Mute(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  return TypeInfo__MainCameraManager->static_fields->mute;
}


/* Camera get_SecondaryCamera() */

Camera * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_SecondaryCamera
                   (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).secondaryCamera;
  if (this_00 != (Transform *)0x0) {
    pCVar1 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    return pCVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pCVar1 = (Camera *)(*pcVar4)();
  return pCVar1;
}


/* Camera get_TertiaryCamera() */

Camera * Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_TertiaryCamera
                   (MainCameraManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tertiaryCamera;
  if (this_00 != (Transform *)0x0) {
    pCVar1 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    return pCVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pCVar1 = (Camera *)(*pcVar4)();
  return pCVar1;
}


/* Boolean get_TertiaryCameraActive() */

bool Assembly-CSharp.dll::MainCameraManager::MainCameraManager_get_TertiaryCameraActive
               (MainCameraManager *this,MethodInfo *method)

{
  this_00 = (this->fields).tertiaryCamera;
  if (this_00 != (Transform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar2 = (*pcRam_?)();
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void remove_onIgnoreInputTypes(EventHandler`1[OnIgnoreInputTypesArgs]) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
               (MainCameraManager *this,EventHandler_1_OnIgnoreInputTypesArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).onIgnoreInputTypes;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_OnIgnoreInputTypesArgs_ *)
             func_?(&(this->fields).onIgnoreInputTypes,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void set_BlueModeEnabled(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_BlueModeEnabled
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  (this->fields).blueModeEnabled = value;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  this_00 = (this->fields).secondaryCamera;
  if ((this_00 != (Transform *)0x0) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,value,(MethodInfo *)0x0);
    this_01 = (this->fields).greyScaleEffect;
    if (this_01 != (GrayscaleEffect *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CamMaskMode(MaskMode) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_CamMaskMode
               (MainCameraManager *this,MaskMode__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_CamRotateTarget);
    cRam_? = '\x01';
  }
  (this->fields).maskMode = value;
  if (value == MaskMode__Enum_Default) {
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,(this->fields).cullingMask,(MethodInfo *)0x0);
      (this->fields).blueModeEnabled = 0;
      MainCameraManager_RenderLogic(this,(this->fields).isLogicRendered,(MethodInfo *)0x0);
      return;
    }
  }
  else if (value == MaskMode__Enum_AvatarLobbyFocus) {
    pCVar1 = (this->fields).mainCamera;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
    if (pCVar1 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (pCVar1,1 << ((byte)iVar2 & 0x1f),(MethodInfo *)0x0);
      (this->fields).blueModeEnabled = 1;
      return;
    }
  }
  else {
    if (value != MaskMode__Enum_SkyBoxOnly) {
      return;
    }
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?(&UNK_?,unaff_EBP);
      }
      (*pcRam_?)(pCVar1,0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_CameraEffects(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_CameraEffects
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  ppLayer = (this->fields).postProcessLayer;
  ppVolume = (this->fields).postProcessVolume;
  (this->fields).cameraEffects = value;
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  MainCameraManager_EnablePostProcessing(ppLayer,ppVolume,value,(MethodInfo *)0x0);
  return;
}


/* Void set_FieldOfView(Single) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_FieldOfView
               (MainCameraManager *this,float value,MethodInfo *method)

{
  this_00 = (this->fields).mainCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_GameHasCameraEffects(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_GameHasCameraEffects
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects = value;
  pAVar1 = TypeInfo__MainCameraManager->static_fields->OnGameCameraEffectsChange;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,
               TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* Void set_IsLogicRendered(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_IsLogicRendered
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mainCamera;
  if (value == 0) {
    if (this_00 == (Camera *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 & ~(1 << (uVar3 & 0x1f));
  }
  else {
    if (this_00 == (Camera *)0x0) goto code_?;
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                      (this_00,(MethodInfo *)0x0);
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,uVar2,(MethodInfo *)0x0);
  (this->fields).isLogicRendered = value;
  return;
}


/* Void set_Mute(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_Mute
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  TypeInfo__MainCameraManager->static_fields->mute = value;
  if (TypeInfo__MainCameraManager->static_fields->mute == 0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    value_00 = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    value_00 = 0.0;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_set_volume
            (value_00,(MethodInfo *)0x0);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar1 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MainCameraManager);
    }
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,TypeInfo__MainCameraManager->static_fields->mute,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* Void set_TertiaryCameraActive(Boolean) */

void Assembly-CSharp.dll::MainCameraManager::MainCameraManager_set_TertiaryCameraActive
               (MainCameraManager *this,bool value,MethodInfo *method)

{
  this_00 = (this->fields).tertiaryCamera;
  if (this_00 != (Transform *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

