
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextureToThemeSkybox::StreamedTextureToThemeSkybox_OnAssetSet
               (StreamedTextureToThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    this_01 = (Material *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                          *)this_00,(MethodInfo *)0x0);
    name = (this->fields).shaderPropertyName;
    value = (Texture *)
            System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Int32]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                       MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__get_Asset__
                      );
    if (this_01 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
                (this_01,name,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::StreamedTextureToThemeSkybox::StreamedTextureToThemeSkybox_Reset
               (StreamedTextureToThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).skybox;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (ThemeSkybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        ThemeSkybox_MethodInfo__UnityEngine__Component__GetComponent<ThemeSkybox>__)
    ;
    (this->fields).skybox = pTVar1;
  }
  pTVar1 = (this->fields).skybox;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponentInParent_6
                       ((Component_1 *)this,
                        ThemeSkybox_MethodInfo__UnityEngine__Component__GetComponentInParent<ThemeSkybox>__
                       );
    (this->fields).skybox = pTVar1;
  }
  return;
}


/* StreamedTextureToThemeSkybox() */

void Assembly-CSharp.dll::StreamedTextureToThemeSkybox::StreamedTextureToThemeSkybox__ctor
               (StreamedTextureToThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).shaderPropertyName = StringLiteral__MainTex;
  StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
            ((StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)this,
             MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__StreamingAsset__
            );
  return;
}

