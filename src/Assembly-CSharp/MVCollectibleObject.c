
/* Void Start() */

void Assembly-CSharp.dll::MVCollectibleObject::MVCollectibleObject_Start
               (MVCollectibleObject *this,MethodInfo *method)

{
  pSVar1 = (this->fields).handler;
  if (pSVar1 == (StreamedSharedMaterialHandler *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StreamedSharedMaterialHandler,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar3 != (MVGameControllerBase *)0x0) &&
     (original = (pSVar1->fields).streamedTextureToSharedMaterialPrefab,
     (pMVar3->fields).streamingAssetManager != (StreamingAssetManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                        );
    if (this_01 != (Component *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (this_00 = (pMVar3->fields).streamingAssetManager, this_00 != (StreamingAssetManager *)0x0
          )) && (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_00,(MethodInfo *)0x0),
                this_02 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        TypeInfo__StreamedSharedMaterialHandler->static_fields->streamComponentSet = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

