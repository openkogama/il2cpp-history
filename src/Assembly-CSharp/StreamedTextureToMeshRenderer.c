
/* Void OnAssetSet() */

void Assembly-CSharp.dll::StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_OnAssetSet
               (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    if (pMVar1 != (Material__Array *)0x0) {
      if (pMVar1->max_length == 0) goto code_?;
      this_01 = pMVar1->vector[0];
      name = (this->fields).shaderTextureVariableName;
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
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReDownload() */

void Assembly-CSharp.dll::StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer_ReDownload
               (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields)._._.onAssetSetAction;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).OnDownloadFinished.methodPtr,
             (MethodInfo *)0x0);
  pUVar3 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)0x0;
  if (pUVar3 != (UnityAction *)0x0) {
    if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar1 = pUVar3;
    }
    if (pUVar1 == (UnityAction *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (this->fields)._._.onAssetSetAction = pUVar1;
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar5 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar5 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar5,(String *)&UNK_?,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  this_00 = (AssetBundleRequest *)func_?();
  AssetBundleRequest::AssetBundleRequest__ctor
            (this_00,pSVar5,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar2,
             WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_00,(MethodInfo *)0x0);
  return;
}


/* StreamedTextureToMeshRenderer() */

void Assembly-CSharp.dll::StreamedTextureToMeshRenderer::StreamedTextureToMeshRenderer__ctor
               (StreamedTextureToMeshRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).shaderTextureVariableName = StringLiteral__MainTex;
  StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
  StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
            ((StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)this,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Texture *)
           System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
           Int32]::
           Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                     ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                      MethodInfo__StreamingAsset<UnityEngine::Texture,_UnityEngine::Texture>__get_Asset__
                     );
  return pTVar1;
}

