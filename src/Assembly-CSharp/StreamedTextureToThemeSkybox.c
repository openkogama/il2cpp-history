
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextureToThemeSkybox::StreamedTextureToThemeSkybox_OnAssetSet
               (StreamedTextureToThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).skybox;
  if ((pTVar1 != (ThemeSkybox *)0x0) &&
     (this_00 = (pTVar1->fields).skyboxMaterial, this_00 != (Material *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (this_00,(this->fields).shaderPropertyName,(this->fields)._.asset,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedTextureToThemeSkybox::StreamedTextureToThemeSkybox_Reset
               (StreamedTextureToThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ThemeSkybox_MethodInfo__UnityEngine__Component__GetComponentInParent<ThemeSkybox>__
                   );
    func_?(&ThemeSkybox_MethodInfo__UnityEngine__Component__GetComponent<ThemeSkybox>__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).skybox;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (ThemeSkybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        ThemeSkybox_MethodInfo__UnityEngine__Component__GetComponent<ThemeSkybox>__)
    ;
    (this->fields).skybox = pTVar1;
    func_?(&(this->fields).skybox,pTVar1);
  }
  pTVar1 = (this->fields).skybox;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (ThemeSkybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInParent_1
                       ((Component *)this,
                        ThemeSkybox_MethodInfo__UnityEngine__Component__GetComponentInParent<ThemeSkybox>__
                       );
    (this->fields).skybox = pTVar1;
    func_?();
  }
  return;
}


/* StreamedTextureToThemeSkybox() */

void Assembly-CSharp.dll::StreamedTextureToThemeSkybox::StreamedTextureToThemeSkybox__ctor
               (StreamedTextureToThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__StreamingAsset__
                   );
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  (this->fields).shaderPropertyName = StringLiteral__MainTex;
  func_?(&(this->fields).shaderPropertyName,StringLiteral__MainTex);
  StreamingAsset`2[System::Object,System::Object]::
  StreamingAsset_2_System_Object_System_Object___ctor
            ((StreamingAsset_2_System_Object_System_Object_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__StreamingAsset__
            );
  return;
}

