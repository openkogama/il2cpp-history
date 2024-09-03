
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
    p_Var3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
             UnsafeUtility_AsRef_1((Void *)layers,(MethodInfo *)0x0);
    (this->fields).volumeLayer.m_Mask = (int32_t)p_Var3;
    (this->fields).antialiasingMode = 0;
    (this->fields).stopNaNPropagation = 1;
    (this->fields).finalBlitToCameraTarget = 0;
    puVar8 = &UNK_?;
    pMVar9 = 
    UnityEngine__Rendering__PostProcessing__PostProcessVolume_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessVolume>__
    ;
    pPVar10 = (PostProcessVolume *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (screenshotCamObject,
                        UnityEngine__Rendering__PostProcessing__PostProcessVolume_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Rendering::PostProcessing::PostProcessVolume>__
                       );
    pPStack_11 = pPVar10;
    if (pPVar10 != (PostProcessVolume *)0x0) {
      (pPVar10->fields).isGlobal = 1;
      (pPVar10->fields).weight = 0.0;
      pPVar12 = (PostProcessProfile *)
               UnityEngine.CoreModule.dll::UnityEngine::ScriptableObject::
               ScriptableObject_CreateInstance_1
                         (
                         UnityEngine__Rendering__PostProcessing__PostProcessProfile_MethodInfo__UnityEngine__ScriptableObject__CreateInstance<UnityEngine::Rendering::PostProcessing::PostProcessProfile>__
                         );
      (pPVar10->fields).m_InternalProfile = pPVar12;
      ppPVar13 = &(pPVar10->fields).m_InternalProfile;
      puVar14 = &UNK_?;
      func_?();
      method_00 = (MethodInfo *)0x0;
      puVar4 = auStack_5;
      puVar15 = (undefined4 *)&stack0xfffffe9c;
      for (iVar6 = 0x2a; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar15 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar15 = puVar15 + 1;
      }
      data.vignetteSettings.roundness = (int32_t)puVar8;
      auVar16 = in_stack_17._0_20_;
      auVar18 = in_stack_17._20_32_;
      auVar19 = in_stack_17._52_28_;
      auVar20 = in_stack_17._80_20_;
      data.colorSettings.colors = auVar16[0];
      data.colorSettings._1_3_ = auVar16._1_3_;
      data.colorSettings.postExposure = auVar16._4_4_;
      data.colorSettings.temperature = auVar16._8_4_;
      data.colorSettings.saturation = auVar16._12_4_;
      data.colorSettings.contrast = auVar16._16_4_;
      auVar21 = auVar18._16_16_;
      data.bloomSettings.bloom = auVar18[0];
      data.bloomSettings._1_3_ = auVar18._1_3_;
      data.bloomSettings.intensity = auVar18._4_4_;
      data.bloomSettings.softKnee = auVar18._8_4_;
      data.bloomSettings.diffusion = auVar18._12_4_;
      data.bloomSettings.color.r = (float)auVar21._0_4_;
      data.bloomSettings.color.g = (float)auVar21._4_4_;
      data.bloomSettings.color.b = (float)auVar21._8_4_;
      data.bloomSettings.color.a = (float)auVar21._12_4_;
      auVar21 = auVar19._12_16_;
      data.ambientOcclusionSettings.ambientOcclusion = auVar19[0];
      data.ambientOcclusionSettings._1_3_ = auVar19._1_3_;
      data.ambientOcclusionSettings.intensity = auVar19._4_4_;
      data.ambientOcclusionSettings.thickness = auVar19._8_4_;
      data.ambientOcclusionSettings.color.r = (float)auVar21._0_4_;
      data.ambientOcclusionSettings.color.g = (float)auVar21._4_4_;
      data.ambientOcclusionSettings.color.b = (float)auVar21._8_4_;
      data.ambientOcclusionSettings.color.a = (float)auVar21._12_4_;
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
      data.vignetteSettings.color.r = (float)screenshotCamObject;
      data.vignetteSettings.color.g = (float)pMVar9;
      data.vignetteSettings.color.b = (float)in_stack_22._0_4_;
      data.vignetteSettings.color.a = (float)in_stack_22._4_4_;
      data.vignetteSettings.rounded = in_stack_22[8];
      data.vignetteSettings._33_3_ = in_stack_22._9_3_;
      data.grainSettings.grain = in_stack_22[0xc];
      data.grainSettings._1_3_ = in_stack_22._13_3_;
      data.grainSettings.intensity = in_stack_22._16_4_;
      data.grainSettings.size = in_stack_22._20_4_;
      data.grainSettings.luminanceContribution = (int32_t)in_stack_2;
      data.lensDistortionSettings._0_4_ = in_stack_1;
      data.lensDistortionSettings.intensity = (int32_t)puVar14;
      data.lensDistortionSettings.xMultiplier = (int32_t)ppPVar13;
      data.lensDistortionSettings.yMultiplier = (int32_t)pPVar12;
      MainCameraManager::MainCameraManager_ApplyPostProcessing(this,pPStack_11,data,method_00);
      return;
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  method_00 = TypeInfo__GenerateTextureData___GenerateTexture_d__5;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].monitor = (MonitorData *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(&value[2].monitor,this);
  value[2].klass = (Object__Class *)textureDataCallback;
  func_?(value + 2,textureDataCallback);
  return (IEnumerator *)value;
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
    method_00 = TypeInfo__GenerateTextureData___GenerateTexture_d__5;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[2].klass = (Object__Class *)callback;
    func_?(value + 2,callback);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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

