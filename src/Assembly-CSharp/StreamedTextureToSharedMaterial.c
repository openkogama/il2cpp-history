
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextureToSharedMaterial::
     StreamedTextureToSharedMaterial_OnAssetSet
               (StreamedTextureToSharedMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).material;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (this_00,(this->fields).shaderTextureVariableName,(Texture *)(this->fields)._.asset,
               (MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedTextureToSharedMaterial::StreamedTextureToSharedMaterial_Reset
               (StreamedTextureToSharedMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).material;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                  ((Component *)this,
                   UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                  );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (Renderer *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                          );
      if (this_00 == (Renderer *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                         (this_00,(MethodInfo *)0x0);
      (this->fields).material = pMVar1;
      func_?();
    }
  }
  return;
}


/* StreamedTextureToSharedMaterial() */

void Assembly-CSharp.dll::StreamedTextureToSharedMaterial::StreamedTextureToSharedMaterial__ctor
               (StreamedTextureToSharedMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Texture2D,_UnityEngine::Texture2D>__StreamingAsset__
                   );
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).shaderTextureVariableName;
  *ppSVar1 = StringLiteral__MainTex;
  func_?(ppSVar1,StringLiteral__MainTex);
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Texture2D,_UnityEngine::Texture2D>__StreamingAsset__
            );
  return;
}

