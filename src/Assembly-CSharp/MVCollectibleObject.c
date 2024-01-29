
/* Void Start() */

void Assembly-CSharp.dll::MVCollectibleObject::MVCollectibleObject_Start
               (MVCollectibleObject *this,MethodInfo *method)

{
  pSVar1 = (this->fields).handler;
  if (pSVar1 != (StreamedSharedMaterialHandler *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet != 0) {
      return;
    }
    pSVar2 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager((MethodInfo *)0x0)
    ;
    original = (pSVar1->fields).streamedTextureToSharedMaterialPrefab;
    if (pSVar2 != (StreamingAssetManager *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
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
        pSVar2 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
                           ((MethodInfo *)0x0);
        if ((pSVar2 != (StreamingAssetManager *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pSVar2,(MethodInfo *)0x0), this_01 != (Transform *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,parent,0,(MethodInfo *)0x0);
          TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 1;
          return;
        }
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

