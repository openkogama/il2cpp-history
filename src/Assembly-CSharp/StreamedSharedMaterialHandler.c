
/* Void Reset() */

void Assembly-CSharp.dll::StreamedSharedMaterialHandler::StreamedSharedMaterialHandler_Reset
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamedSharedMaterialHandler);
    cRam_? = '\x01';
  }
  TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 0;
  return;
}


/* Void StartTextureStreaming() */

void Assembly-CSharp.dll::StreamedSharedMaterialHandler::
     StreamedSharedMaterialHandler_StartTextureStreaming
               (StreamedSharedMaterialHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StreamedSharedMaterialHandler);
    cRam_? = '\x01';
  }
  if (TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet != 0) {
    return;
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager((MethodInfo *)0x0);
  original = (this->fields).streamedTextureToSharedMaterialPrefab;
  if (pSVar1 != (StreamingAssetManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_00 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                        );
    if (this_00 != (Component *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_00,(MethodInfo *)0x0);
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
                         ((MethodInfo *)0x0);
      if ((pSVar1 != (StreamingAssetManager *)0x0) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pSVar1,(MethodInfo *)0x0), this_01 != (Transform *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 1;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

