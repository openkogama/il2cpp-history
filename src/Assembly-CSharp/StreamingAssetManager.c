
/* Void Instantiate(StreamingAsset) */

void Assembly-CSharp.dll::StreamingAssetManager::StreamingAssetManager_Instantiate
               (StreamingAssetManager *this,StreamingAsset *streamingAssetPrefab,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)streamingAssetPrefab,
                       StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                      );
  if (this_00 != (XpBoostParticlePreviewer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_StreamingAssetManager
                        ((MethodInfo *)0x0);
    if (this_02 != (StreamingAssetManager *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_02,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

