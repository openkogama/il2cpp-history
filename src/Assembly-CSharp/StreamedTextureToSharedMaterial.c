
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextureToSharedMaterial::
     StreamedTextureToSharedMaterial_OnAssetSet
               (StreamedTextureToSharedMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).material;
  name = (this->fields).shaderTextureVariableName;
  value = (Texture *)
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     MethodInfo__StreamingAsset<UnityEngine::Texture2D,_UnityEngine::Texture2D>__get_Asset__
                    );
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (this_00,name,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedTextureToSharedMaterial::StreamedTextureToSharedMaterial_Reset
               (StreamedTextureToSharedMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).material;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                       );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pMVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                         );
      if (pMVar3 == (MVInteractableBase *)0x0) {
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                         ((Renderer *)pMVar3,(MethodInfo *)0x0);
      (this->fields).material = pMVar1;
    }
  }
  return;
}


/* StreamedTextureToSharedMaterial() */

void Assembly-CSharp.dll::StreamedTextureToSharedMaterial::StreamedTextureToSharedMaterial__ctor
               (StreamedTextureToSharedMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).shaderTextureVariableName = StringLiteral__MainTex;
  StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
            ((StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Texture2D,_UnityEngine::Texture2D>__StreamingAsset__
            );
  return;
}

