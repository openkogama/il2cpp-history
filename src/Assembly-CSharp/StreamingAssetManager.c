
/* Void Instantiate(StreamingAsset) */

void Assembly-CSharp.dll::StreamingAssetManager::StreamingAssetManager_Instantiate
               (StreamingAssetManager *this,StreamingAsset *streamingAssetPrefab,MethodInfo *method)

{
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
                      ((Object *)streamingAssetPrefab,
                       StreamingAsset_MethodInfo__UnityEngine__Object__Instantiate<StreamingAsset>_StreamingAsset_
                      );
  if (this_01 != (Component *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    (this_01,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (this_00 = (pMVar1->fields).streamingAssetManager, this_00 != (StreamingAssetManager *)0x0))
       && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                      ,pTVar2,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (obj->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pTVar2 == (Transform *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,pvVar5,0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

