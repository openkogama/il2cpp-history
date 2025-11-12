
/* PostProcessingSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingSettings::PostProcessingSettings__ctor
               (PostProcessingSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  PStack_1.color._0_8_ = PStack_1.color._0_8_ & 0xffffffff00000000;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PostProcessingColorSettings::PostProcessingColorSettings__ctor
            ((PostProcessingColorSettings *)&PStack_1,data,(MethodInfo *)0x0);
  (this->colorSettings).colors = PStack_1.vignette;
  *(undefined3 *)&(this->colorSettings).field_0x1 = PStack_1._1_3_;
  (this->colorSettings).postExposure = PStack_1.intensity;
  (this->colorSettings).temperature = PStack_1.smoothness;
  (this->colorSettings).saturation = PStack_1.roundness;
  (this->colorSettings).contrast = (int32_t)PStack_1.color.r;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PStack_1.color.r = 0.0;
  PStack_1.color.g = 0.0;
  PStack_1.color.b = 0.0;
  PStack_1.color.a = 0.0;
  PostProcessingBloomSettings::PostProcessingBloomSettings__ctor
            ((PostProcessingBloomSettings *)&PStack_1,data,(MethodInfo *)0x0);
  uVar2 = PStack_1.color._8_8_;
  uVar3 = PStack_1.color._0_8_;
  (this->bloomSettings).bloom = PStack_1.vignette;
  *(undefined3 *)&(this->bloomSettings).field_0x1 = PStack_1._1_3_;
  (this->bloomSettings).intensity = PStack_1.intensity;
  (this->bloomSettings).softKnee = PStack_1.smoothness;
  (this->bloomSettings).diffusion = PStack_1.roundness;
  PStack_1.color.r = 0.0;
  PStack_1.color.g = 0.0;
  uVar4 = PStack_1.color._0_8_;
  PStack_1.color._8_8_ = PStack_1.color._8_8_ & 0xffffffff00000000;
  uVar5 = PStack_1.color._8_8_;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PStack_1.color.r = (float)uVar3;
  PStack_1.color.g = SUB84(uVar3,4);
  (this->bloomSettings).color.r = PStack_1.color.r;
  (this->bloomSettings).color.g = PStack_1.color.g;
  PStack_1.color.b = (float)uVar2;
  PStack_1.color.a = SUB84(uVar2,4);
  (this->bloomSettings).color.b = PStack_1.color.b;
  (this->bloomSettings).color.a = PStack_1.color.a;
  PStack_1.color._0_8_ = uVar4;
  PStack_1.color._8_8_ = uVar5;
  PostProcessingAmbientOcclusionSettings::PostProcessingAmbientOcclusionSettings__ctor
            ((PostProcessingAmbientOcclusionSettings *)&PStack_1,data,(MethodInfo *)0x0);
  (this->ambientOcclusionSettings).ambientOcclusion = PStack_1.vignette;
  *(undefined3 *)&(this->ambientOcclusionSettings).field_0x1 = PStack_1._1_3_;
  (this->ambientOcclusionSettings).intensity = PStack_1.intensity;
  (this->ambientOcclusionSettings).thickness = PStack_1.smoothness;
  (this->ambientOcclusionSettings).color.r = (float)PStack_1.roundness;
  (this->ambientOcclusionSettings).color.g = PStack_1.color.r;
  (this->ambientOcclusionSettings).color.b = PStack_1.color.g;
  (this->ambientOcclusionSettings).color.a = PStack_1.color.b;
  PStack_1.color._0_8_ = PStack_1.color._0_8_ & 0xffffffff00000000;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings__ctor
            ((PostProcessingDepthOfFieldSettings *)&PStack_1,data,(MethodInfo *)0x0);
  (this->depthOfFieldSettings).depthOfField = PStack_1.vignette;
  *(undefined3 *)&(this->depthOfFieldSettings).field_0x1 = PStack_1._1_3_;
  (this->depthOfFieldSettings).focusDistance = PStack_1.intensity;
  (this->depthOfFieldSettings).aperture = PStack_1.smoothness;
  (this->depthOfFieldSettings).focalLength = PStack_1.roundness;
  (this->depthOfFieldSettings).maxBlurSize = (int32_t)PStack_1.color.r;
  PStack_1.rounded = 0;
  PStack_1._33_3_ = 0;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PStack_1.color.r = 0.0;
  PStack_1.color.g = 0.0;
  PStack_1.color.b = 0.0;
  PStack_1.color.a = 0.0;
  PostProcessingVignetteSettings::PostProcessingVignetteSettings__ctor
            (&PStack_1,data,(MethodInfo *)0x0);
  (this->vignetteSettings).vignette = PStack_1.vignette;
  *(undefined3 *)&(this->vignetteSettings).field_0x1 = PStack_1._1_3_;
  (this->vignetteSettings).intensity = PStack_1.intensity;
  (this->vignetteSettings).smoothness = PStack_1.smoothness;
  (this->vignetteSettings).roundness = PStack_1.roundness;
  (this->vignetteSettings).color.r = PStack_1.color.r;
  (this->vignetteSettings).color.g = PStack_1.color.g;
  (this->vignetteSettings).color.b = PStack_1.color.b;
  (this->vignetteSettings).color.a = PStack_1.color.a;
  (this->vignetteSettings).rounded = PStack_1.rounded;
  *(undefined3 *)&(this->vignetteSettings).field_0x21 = PStack_1._33_3_;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PostProcessingGrainSettings::PostProcessingGrainSettings__ctor
            ((PostProcessingGrainSettings *)&PStack_1,data,(MethodInfo *)0x0);
  (this->grainSettings).grain = PStack_1.vignette;
  *(undefined3 *)&(this->grainSettings).field_0x1 = PStack_1._1_3_;
  (this->grainSettings).intensity = PStack_1.intensity;
  (this->grainSettings).size = PStack_1.smoothness;
  (this->grainSettings).luminanceContribution = PStack_1.roundness;
  PStack_1.vignette = 0;
  PStack_1._1_3_ = 0;
  PStack_1.intensity = 0;
  PStack_1.smoothness = 0;
  PStack_1.roundness = 0;
  PostProcessingLensDistortionSettings::PostProcessingLensDistortionSettings__ctor
            ((PostProcessingLensDistortionSettings *)&PStack_1,data,(MethodInfo *)0x0);
  (this->lensDistortionSettings).lensDistortion = PStack_1.vignette;
  *(undefined3 *)&(this->lensDistortionSettings).field_0x1 = PStack_1._1_3_;
  (this->lensDistortionSettings).intensity = PStack_1.intensity;
  (this->lensDistortionSettings).xMultiplier = PStack_1.smoothness;
  (this->lensDistortionSettings).yMultiplier = PStack_1.roundness;
  return;
}

