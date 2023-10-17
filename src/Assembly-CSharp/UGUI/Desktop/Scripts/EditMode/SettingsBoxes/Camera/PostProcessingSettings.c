
/* PostProcessingSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingSettings::PostProcessingSettings__ctor
               (PostProcessingSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  iStack_1 = 0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  PostProcessingColorSettings::PostProcessingColorSettings__ctor
            ((PostProcessingColorSettings *)&fStack_2,data,(MethodInfo *)0x0);
  *(float *)&this->colorSettings = fStack_2;
  (this->colorSettings).postExposure = (int32_t)fStack_3;
  (this->colorSettings).temperature = (int32_t)fStack_4;
  (this->colorSettings).saturation = (int32_t)fStack_5;
  (this->colorSettings).contrast = iStack_1;
  PStack_6.bloom = 0;
  PStack_6._1_3_ = 0;
  PStack_6.intensity = 0;
  PStack_6.softKnee = 0;
  PStack_6.diffusion = 0;
  PStack_6.color.r = 0.0;
  PStack_6.color.g = 0.0;
  PStack_6.color.b = 0.0;
  PStack_6.color.a = 0.0;
  PostProcessingBloomSettings::PostProcessingBloomSettings__ctor(&PStack_6,data,(MethodInfo *)0x0);
  fVar7 = 0.0;
  (this->bloomSettings).bloom = PStack_6.bloom;
  *(undefined3 *)&(this->bloomSettings).field_0x1 = PStack_6._1_3_;
  (this->bloomSettings).intensity = PStack_6.intensity;
  (this->bloomSettings).softKnee = PStack_6.softKnee;
  (this->bloomSettings).diffusion = PStack_6.diffusion;
  (this->bloomSettings).color.r = PStack_6.color.r;
  (this->bloomSettings).color.g = PStack_6.color.g;
  (this->bloomSettings).color.b = PStack_6.color.b;
  (this->bloomSettings).color.a = PStack_6.color.a;
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  fStack_11 = 0.0;
  puStack_12 = (undefined *)0x0;
  stack0xffffffd0 = 0.0;
  PostProcessingAmbientOcclusionSettings::PostProcessingAmbientOcclusionSettings__ctor
            ((PostProcessingAmbientOcclusionSettings *)&uStack_8,data,(MethodInfo *)0x0);
  (this->ambientOcclusionSettings).ambientOcclusion = (bool)uStack_8;
  *(undefined3 *)&(this->ambientOcclusionSettings).field_0x1 = uStack_8._1_3_;
  (this->ambientOcclusionSettings).intensity = iStack_9;
  (this->ambientOcclusionSettings).thickness = iStack_10;
  (this->ambientOcclusionSettings).color.r = fStack_11;
  (this->ambientOcclusionSettings).color.g = (float)puStack_12;
  (this->ambientOcclusionSettings).color.b = stack0xffffffd0;
  (this->ambientOcclusionSettings).color.a = fVar7;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  iStack_1 = 0;
  PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings__ctor
            ((PostProcessingDepthOfFieldSettings *)&fStack_2,data,(MethodInfo *)0x0);
  *(float *)&this->depthOfFieldSettings = fStack_2;
  (this->depthOfFieldSettings).focusDistance = (int32_t)fStack_3;
  (this->depthOfFieldSettings).aperture = (int32_t)fStack_4;
  (this->depthOfFieldSettings).focalLength = (int32_t)fStack_5;
  (this->depthOfFieldSettings).maxBlurSize = iStack_1;
  iStack_1 = 0;
  uVar13._0_1_ = 0;
  uVar13._1_3_ = 0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  PostProcessingVignetteSettings::PostProcessingVignetteSettings__ctor
            ((PostProcessingVignetteSettings *)&stack0xffffffd8,data,(MethodInfo *)0x0);
  (this->vignetteSettings).vignette = (bool)uVar13;
  *(int3 *)&(this->vignetteSettings).field_0x1 = SUB43(uVar13,1);
  (this->vignetteSettings).intensity = 0;
  (this->vignetteSettings).smoothness = 0;
  (this->vignetteSettings).roundness = 0;
  (this->vignetteSettings).color.r = fStack_2;
  (this->vignetteSettings).color.g = fStack_3;
  (this->vignetteSettings).color.b = fStack_4;
  (this->vignetteSettings).color.a = fStack_5;
  *(int32_t *)&(this->vignetteSettings).rounded = iStack_1;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  iStack_1 = 0;
  PostProcessingGrainSettings::PostProcessingGrainSettings__ctor
            ((PostProcessingGrainSettings *)&fStack_3,data,(MethodInfo *)0x0);
  *(float *)&this->grainSettings = fStack_3;
  (this->grainSettings).intensity = (int32_t)fStack_4;
  (this->grainSettings).size = (int32_t)fStack_5;
  (this->grainSettings).luminanceContribution = iStack_1;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  iStack_1 = 0;
  stack0xffffffd0 = (float)&fStack_3;
  PostProcessingLensDistortionSettings::PostProcessingLensDistortionSettings__ctor
            ((PostProcessingLensDistortionSettings *)&fStack_3,data,(MethodInfo *)0x0);
  *(float *)&this->lensDistortionSettings = fStack_3;
  (this->lensDistortionSettings).intensity = (int32_t)fStack_4;
  (this->lensDistortionSettings).xMultiplier = (int32_t)fStack_5;
  (this->lensDistortionSettings).yMultiplier = iStack_1;
  return;
}

