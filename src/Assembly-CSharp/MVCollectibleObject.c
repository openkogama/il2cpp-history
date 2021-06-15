
/* Void Start() */

void Assembly-CSharp.dll::MVCollectibleObject::MVCollectibleObject_Start
               (MVCollectibleObject *this,MethodInfo *method)

{
  pSVar1 = (this->fields).handler;
  if (pSVar1 == (StreamedSharedMaterialHandler *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
  pSVar3 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager((MethodInfo *)0x0);
  original = (pSVar1->fields).streamedTextureToSharedMaterialPrefab;
  if (pSVar3 != (StreamingAssetManager *)0x0) {
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
      pSVar3 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
                         ((MethodInfo *)0x0);
      if ((pSVar3 != (StreamingAssetManager *)0x0) &&
         (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pSVar3,(MethodInfo *)0x0), this_01 != (Transform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__StreamedSharedMaterialHandler->vtable).Equals.methodPtr & 0x2000000)
             != 0) && ((TypeInfo__StreamedSharedMaterialHandler->_1).cctor_started == 0)) {
          pSStack4 = TypeInfo__StreamedSharedMaterialHandler;
          func_?();
        }
        TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 1;
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

