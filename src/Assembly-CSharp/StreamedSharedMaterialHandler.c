
/* Void Reset() */

void Assembly-CSharp.dll::StreamedSharedMaterialHandler::StreamedSharedMaterialHandler_Reset
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StreamedSharedMaterialHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__StreamedSharedMaterialHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamedSharedMaterialHandler);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StreamedSharedMaterialHandler->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__StreamedSharedMaterialHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamedSharedMaterialHandler);
  }
  if (TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet != 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager((MethodInfo *)0x0);
  original = (this->fields).streamedTextureToSharedMaterialPrefab;
  if (pSVar1 != (StreamingAssetManager *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        ((XpBoostParticlePreviewer *)original,
                         StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                        );
    if (this_00 != (XpBoostParticlePreviewer *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pSVar1 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
                         ((MethodInfo *)0x0);
      if ((pSVar1 != (StreamingAssetManager *)0x0) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pSVar1,(MethodInfo *)0x0), this_01 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__StreamedSharedMaterialHandler->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__StreamedSharedMaterialHandler->_1).cctor_started == 0)) {
          pSStack2 = TypeInfo__StreamedSharedMaterialHandler;
          func_?();
        }
        TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 1;
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

