
/* Void AddPostProcessing(GameObject, MainCameraManager, LayerFlags) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_AddPostProcessing
               (GameObject *screenshotCamObject,MainCameraManager *mainCameraManager,
               LayerFlags__Enum layers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    in_stack_1 =
         &
         UnityEngine__Rendering__PostProcessing__PostProcessProfile_MethodInfo__UnityEngine__ScriptableObject__CreateInstance<UnityEngine::Rendering::PostProcessing::PostProcessProfile>__
    ;
    in_stack_2 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__MainCameraManager->static_fields->gameHasCameraEffects == 0) {
    return;
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar3 = TypeInfo__MainCameraManager->static_fields;
  puVar4 = auStack_5;
  for (iVar6 = 0x2a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *(undefined4 *)&(pMVar3->CurrentPostProcessingSettings).colorSettings;
    pMVar3 = (MainCameraManager__StaticFields *)
             &(pMVar3->CurrentPostProcessingSettings).colorSettings.postExposure;
    puVar4 = puVar4 + 1;
  }
  if (((screenshotCamObject != (GameObject *)0x0) &&
      (this = (PostProcessLayer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (screenshotCamObject,
                         UnityEngine__Rendering__PostProcessing__PostProcessLayer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessLayer>__
                        ), mainCameraManager != (MainCameraManager *)0x0)) &&
     (this != (PostProcessLayer *)0x0)) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::PostProcessLayer::
    PostProcessLayer_Init(this,(mainCameraManager->fields).postProcessResources,(MethodInfo *)0x0);
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (screenshotCamObject,(MethodInfo *)0x0);
    (this->fields).volumeTrigger = pTVar7;
    func_?();
    ppOVar8 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                        ((Void *)layers,(MethodInfo *)0x0);
    (this->fields).volumeLayer.m_Mask = (int32_t)ppOVar8;
    (this->fields).antialiasingMode = 0;
    (this->fields).stopNaNPropagation = 1;
    (this->fields).finalBlitToCameraTarget = 0;
    puVar9 = &UNK_?;
    pMVar10 = 
    UnityEngine__Rendering__PostProcessing__PostProcessVolume_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessVolume>__
    ;
    pPVar11 = (PostProcessVolume *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (screenshotCamObject,
                        UnityEngine__Rendering__PostProcessing__PostProcessVolume_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessVolume>__
                       );
    pPStack_12 = pPVar11;
    if (pPVar11 != (PostProcessVolume *)0x0) {
      (pPVar11->fields).isGlobal = 1;
      (pPVar11->fields).weight = 0.0;
      pPVar13 = (PostProcessProfile *)
               UnityEngine.CoreModule.dll::UnityEngine::ScriptableObject::
               ScriptableObject_CreateInstance_1
                         (
                         UnityEngine__Rendering__PostProcessing__PostProcessProfile_MethodInfo__UnityEngine__ScriptableObject__CreateInstance<UnityEngine::Rendering::PostProcessing::PostProcessProfile>__
                         );
      (pPVar11->fields).m_InternalProfile = pPVar13;
      ppPVar14 = &(pPVar11->fields).m_InternalProfile;
      puVar15 = &UNK_?;
      func_?();
      method_00 = (MethodInfo *)0x0;
      puVar4 = auStack_5;
      puVar16 = (undefined4 *)&stack0xfffffe9c;
      for (iVar6 = 0x2a; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar16 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar16 = puVar16 + 1;
      }
      data.vignetteSettings.roundness = (int32_t)puVar9;
      auVar17 = in_stack_18._0_20_;
      auVar19 = in_stack_18._20_32_;
      auVar20 = in_stack_18._52_28_;
      auVar21 = in_stack_18._80_20_;
      data.colorSettings.colors = auVar17[0];
      data.colorSettings._1_3_ = auVar17._1_3_;
      data.colorSettings.postExposure = auVar17._4_4_;
      data.colorSettings.temperature = auVar17._8_4_;
      data.colorSettings.saturation = auVar17._12_4_;
      data.colorSettings.contrast = auVar17._16_4_;
      auVar22 = auVar19._16_16_;
      data.bloomSettings.bloom = auVar19[0];
      data.bloomSettings._1_3_ = auVar19._1_3_;
      data.bloomSettings.intensity = auVar19._4_4_;
      data.bloomSettings.softKnee = auVar19._8_4_;
      data.bloomSettings.diffusion = auVar19._12_4_;
      data.bloomSettings.color.r = (float)auVar22._0_4_;
      data.bloomSettings.color.g = (float)auVar22._4_4_;
      data.bloomSettings.color.b = (float)auVar22._8_4_;
      data.bloomSettings.color.a = (float)auVar22._12_4_;
      auVar22 = auVar20._12_16_;
      data.ambientOcclusionSettings.ambientOcclusion = auVar20[0];
      data.ambientOcclusionSettings._1_3_ = auVar20._1_3_;
      data.ambientOcclusionSettings.intensity = auVar20._4_4_;
      data.ambientOcclusionSettings.thickness = auVar20._8_4_;
      data.ambientOcclusionSettings.color.r = (float)auVar22._0_4_;
      data.ambientOcclusionSettings.color.g = (float)auVar22._4_4_;
      data.ambientOcclusionSettings.color.b = (float)auVar22._8_4_;
      data.ambientOcclusionSettings.color.a = (float)auVar22._12_4_;
      data.depthOfFieldSettings.depthOfField = auVar21[0];
      data.depthOfFieldSettings._1_3_ = auVar21._1_3_;
      data.depthOfFieldSettings.focusDistance = auVar21._4_4_;
      data.depthOfFieldSettings.aperture = auVar21._8_4_;
      data.depthOfFieldSettings.focalLength = auVar21._12_4_;
      data.depthOfFieldSettings.maxBlurSize = auVar21._16_4_;
      data.vignetteSettings.vignette = in_stack_18[100];
      data.vignetteSettings._1_3_ = in_stack_18._101_3_;
      data.vignetteSettings.intensity = in_stack_18._104_4_;
      data.vignetteSettings.smoothness = in_stack_18._108_4_;
      data.vignetteSettings.color.r = (float)screenshotCamObject;
      data.vignetteSettings.color.g = (float)pMVar10;
      data.vignetteSettings.color.b = (float)in_stack_23._0_4_;
      data.vignetteSettings.color.a = (float)in_stack_23._4_4_;
      data.vignetteSettings.rounded = in_stack_23[8];
      data.vignetteSettings._33_3_ = in_stack_23._9_3_;
      data.grainSettings.grain = in_stack_23[0xc];
      data.grainSettings._1_3_ = in_stack_23._13_3_;
      data.grainSettings.intensity = in_stack_23._16_4_;
      data.grainSettings.size = in_stack_23._20_4_;
      data.grainSettings.luminanceContribution = (int32_t)in_stack_2;
      data.lensDistortionSettings._0_4_ = in_stack_1;
      data.lensDistortionSettings.intensity = (int32_t)puVar15;
      data.lensDistortionSettings.xMultiplier = (int32_t)ppPVar14;
      data.lensDistortionSettings.yMultiplier = (int32_t)pPVar13;
      MainCameraManager::MainCameraManager_ApplyPostProcessing(this,pPStack_12,data,method_00);
      return;
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* IEnumerator GenerateTexture(Action`1[Byte[]]) */

IEnumerator *
Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_GenerateTexture
          (GenerateTextureData *this,Action_1_Byte_ *textureDataCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[2].klass = (Object__Class *)textureDataCallback;
    func_?(value + 2,textureDataCallback);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void GenerateTextureDataCameraView(Action`1[Byte[]]) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_GenerateTextureDataCameraView
               (GenerateTextureData *this,Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Texture_is_being_generated);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GenerateTextureData);
    cRam_? = '\x01';
  }
  if (TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GenerateTextureData___GenerateTexture_d__5);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__GenerateTextureData___GenerateTexture_d__5);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EDI);
      value[1].klass = (Object__Class *)0x0;
      value[2].monitor = (MonitorData *)this;
      func_?(&value[2].monitor,this);
      value[2].klass = (Object__Class *)callback;
      func_?(value + 2,callback);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_Texture_is_being_generated,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsCreatingScreenShot() */

bool Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_get_IsCreatingScreenShot
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GenerateTextureData);
    cRam_? = '\x01';
  }
  return TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField;
}


/* Void set_IsCreatingScreenShot(Boolean) */

void Assembly-CSharp.dll::GenerateTextureData::GenerateTextureData_set_IsCreatingScreenShot
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GenerateTextureData);
    cRam_? = '\x01';
  }
  TypeInfo__GenerateTextureData->static_fields->_IsCreatingScreenShot_k__BackingField = value;
  return;
}

