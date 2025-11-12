
/* Void OnRenderImage(RenderTexture, RenderTexture) */

void Assembly-CSharp-firstpass.dll::GrayscaleEffect::GrayscaleEffect_OnRenderImage
               (GrayscaleEffect *this,RenderTexture *source,RenderTexture *destination,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__RampOffset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__RampTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = ImageEffectBase::ImageEffectBase_get_material((ImageEffectBase *)this,(MethodInfo *)0x0);
  value_00 = (this->fields).textureRamp;
  if (pMVar1 != (Material *)0x0) {
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                      (StringLiteral__RampTex,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureImpl
              (pMVar1,iVar2,value_00,(MethodInfo *)0x0);
    pMVar1 = ImageEffectBase::ImageEffectBase_get_material
                       ((ImageEffectBase *)this,(MethodInfo *)0x0);
    value = (this->fields).rampOffset;
    if (pMVar1 != (Material *)0x0) {
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                        (StringLiteral__RampOffset,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                (pMVar1,iVar2,value,(MethodInfo *)0x0);
      pMVar1 = ImageEffectBase::ImageEffectBase_get_material
                         ((ImageEffectBase *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Graphics,destination,pMVar1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_Blit_1
                ((Texture *)source,destination,pMVar1,-1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

