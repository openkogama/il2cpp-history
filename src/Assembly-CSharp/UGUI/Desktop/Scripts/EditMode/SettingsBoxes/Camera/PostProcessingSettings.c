
/* PostProcessingSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingSettings::PostProcessingSettings__ctor
               (PostProcessingSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  fStack_1 = 0.0;
  auStack_2._8_4_ = 0.0;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  PostProcessingColorSettings::PostProcessingColorSettings__ctor
            ((PostProcessingColorSettings *)(auStack_2 + 8),data,(MethodInfo *)0x0);
  *(undefined4 *)&this->colorSettings = auStack_2._8_4_;
  (this->colorSettings).postExposure = (int32_t)fStack_3;
  (this->colorSettings).temperature = (int32_t)(float)uStack_4;
  (this->colorSettings).saturation = (int32_t)uStack_4._4_4_;
  (this->colorSettings).contrast = (int32_t)fStack_1;
  auStack_5._4_4_ = 0;
  auStack_2._0_4_ = 0;
  auStack_2._4_4_ = 0;
  auStack_2._8_4_ = 0.0;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  fStack_1 = 0.0;
  PostProcessingBloomSettings::PostProcessingBloomSettings__ctor
            ((PostProcessingBloomSettings *)(auStack_5 + 4),data,(MethodInfo *)0x0);
  fVar6 = fStack_1;
  *(undefined4 *)&this->bloomSettings = auStack_5._4_4_;
  (this->bloomSettings).intensity = auStack_2._0_4_;
  (this->bloomSettings).softKnee = auStack_2._4_4_;
  (this->bloomSettings).diffusion = auStack_2._8_4_;
  fStack_1 = 0.0;
  (this->bloomSettings).color.r = fStack_3;
  (this->bloomSettings).color.g = (float)uStack_4;
  (this->bloomSettings).color.b = uStack_4._4_4_;
  (this->bloomSettings).color.a = fVar6;
  auStack_2._0_4_ = 0;
  auStack_2._4_4_ = 0;
  auStack_2._8_4_ = 0.0;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  PostProcessingAmbientOcclusionSettings::PostProcessingAmbientOcclusionSettings__ctor
            ((PostProcessingAmbientOcclusionSettings *)auStack_2,data,(MethodInfo *)0x0);
  *(undefined4 *)&this->ambientOcclusionSettings = auStack_2._0_4_;
  (this->ambientOcclusionSettings).intensity = auStack_2._4_4_;
  (this->ambientOcclusionSettings).thickness = auStack_2._8_4_;
  (this->ambientOcclusionSettings).color.r = fStack_3;
  (this->ambientOcclusionSettings).color.g = (float)uStack_4;
  (this->ambientOcclusionSettings).color.b = uStack_4._4_4_;
  (this->ambientOcclusionSettings).color.a = fStack_1;
  auStack_2._8_4_ = 0.0;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  fStack_1 = 0.0;
  PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings__ctor
            ((PostProcessingDepthOfFieldSettings *)(auStack_2 + 8),data,(MethodInfo *)0x0);
  *(undefined4 *)&this->depthOfFieldSettings = auStack_2._8_4_;
  (this->depthOfFieldSettings).focusDistance = (int32_t)fStack_3;
  (this->depthOfFieldSettings).aperture = (int32_t)(float)uStack_4;
  (this->depthOfFieldSettings).focalLength = (int32_t)uStack_4._4_4_;
  (this->depthOfFieldSettings).maxBlurSize = (int32_t)fStack_1;
  fStack_1 = 0.0;
  auStack_5._0_4_ = 0;
  auStack_5._4_4_ = 0;
  auStack_2._0_4_ = 0;
  auStack_2._4_4_ = 0;
  auStack_2._8_4_ = 0.0;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  PostProcessingVignetteSettings::PostProcessingVignetteSettings__ctor
            ((PostProcessingVignetteSettings *)auStack_5,data,(MethodInfo *)0x0);
  *(undefined4 *)&this->vignetteSettings = auStack_5._0_4_;
  (this->vignetteSettings).intensity = auStack_5._4_4_;
  (this->vignetteSettings).smoothness = auStack_2._0_4_;
  (this->vignetteSettings).roundness = auStack_2._4_4_;
  (this->vignetteSettings).color.r = (float)auStack_2._8_4_;
  (this->vignetteSettings).color.g = fStack_3;
  (this->vignetteSettings).color.b = (float)uStack_4;
  (this->vignetteSettings).color.a = uStack_4._4_4_;
  *(float *)&(this->vignetteSettings).rounded = fStack_1;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  fStack_1 = 0.0;
  PostProcessingGrainSettings::PostProcessingGrainSettings__ctor
            ((PostProcessingGrainSettings *)&fStack_3,data,(MethodInfo *)0x0);
  *(float *)&this->grainSettings = fStack_3;
  (this->grainSettings).intensity = (int32_t)(float)uStack_4;
  (this->grainSettings).size = (int32_t)uStack_4._4_4_;
  (this->grainSettings).luminanceContribution = (int32_t)fStack_1;
  fStack_3 = 0.0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  fStack_1 = 0.0;
  PostProcessingLensDistortionSettings::PostProcessingLensDistortionSettings__ctor
            ((PostProcessingLensDistortionSettings *)&fStack_3,data,(MethodInfo *)0x0);
  *(float *)&this->lensDistortionSettings = fStack_3;
  (this->lensDistortionSettings).intensity = (int32_t)(float)uStack_4;
  (this->lensDistortionSettings).xMultiplier = (int32_t)uStack_4._4_4_;
  (this->lensDistortionSettings).yMultiplier = (int32_t)fStack_1;
  return;
}

