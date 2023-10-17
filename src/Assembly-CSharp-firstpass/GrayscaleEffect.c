
/* Void OnRenderImage(RenderTexture, RenderTexture) */

void Assembly-CSharp-firstpass.dll::GrayscaleEffect::GrayscaleEffect_OnRenderImage
               (GrayscaleEffect *this,RenderTexture *source,RenderTexture *destination,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&StringLiteral__RampOffset);
    func_?(&StringLiteral__RampTex);
    cRam_? = '\x01';
  }
  pMVar1 = ImageEffectBase::ImageEffectBase_get_material((ImageEffectBase *)this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (pMVar1,StringLiteral__RampTex,(this->fields).textureRamp,(MethodInfo *)0x0);
    source_00 = (Texture *)
                ImageEffectBase::ImageEffectBase_get_material
                          ((ImageEffectBase *)this,(MethodInfo *)0x0);
    if (source_00 != (Texture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                ((Material *)source_00,StringLiteral__RampOffset,(this->fields).rampOffset,
                 (MethodInfo *)0x0);
      pMVar1 = ImageEffectBase::ImageEffectBase_get_material
                         ((ImageEffectBase *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_2
                (source_00,(RenderTexture *)&UNK_?,pMVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

