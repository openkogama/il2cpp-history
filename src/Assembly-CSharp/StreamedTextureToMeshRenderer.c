
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_OnAssetSet
               (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__get_Asset__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    if (pMVar1 != (Material__Array *)0x0) {
      if (pMVar1->max_length == 0) goto code_?;
      if (pMVar1->vector[0] != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                  (pMVar1->vector[0],(this->fields).shaderTextureVariableName,(this->fields)._.asset
                   ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReDownload() */

void Assembly-CSharp.dll::StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_ReDownload
               (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  StreamingAsset::StreamingAsset_Download_Cached
            ((StreamingAsset *)this,(this->fields)._._.url,(this->fields)._._.onAssetSetAction,
             (MethodInfo *)0x0);
  return;
}


/* StreamedTextureToMeshRenderer() */

void Assembly-CSharp.dll::StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer__ctor
               (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__StreamingAsset__
                   );
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  (this->fields).shaderTextureVariableName = StringLiteral__MainTex;
  func_?(&(this->fields).shaderTextureVariableName,StringLiteral__MainTex);
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__StreamingAsset__
            );
  return;
}


/* Texture get_TextureAsset() */

Texture * Assembly-CSharp.dll::StreamedTextureToMeshRenderer::
          StreamedTextureToMeshRenderer_get_TextureAsset
                    (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__get_Asset__
                   );
    cRam_? = '\x01';
  }
  return (this->fields)._.asset;
}

