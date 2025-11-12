
/* Void LateUpdate() */

void Assembly-CSharp.dll::SyncRotationWithCurrentCamera::SyncRotationWithCurrentCamera_LateUpdate
               (SyncRotationWithCurrentCamera *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 == (MainCameraManager *)0x0) goto code_?;
  pMVar2 = (pMVar1->fields).cameraController;
  if (pMVar2 != (MVCameraController *)0x0) {
    this_00 = (pMVar2->fields).cameraStack;
    if (this_00 != (MVCameraController_CameraStack *)0x0) {
      this_01 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (MVCameraBase *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (obj->fields)._._.m_CachedPtr;
          if (pvVar3 != (void *)0x0) {
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5);
code_?:
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5);
code_?:
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            }
            else {
              pcRam_? = pcVar4;
              (*pcRam_?)(pvVar3);
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
              if (obj != (Transform *)0x0) {
                uStack_6 = 0;
                uStack_7 = 0;
                uStack_8 = 0;
                uStack_9 = 0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar3 = (obj->fields)._._.m_CachedPtr;
                if (pvVar3 != (void *)0x0) {
                  pcVar4 = pcRam_?;
                  if ((pcRam_? != (code *)0x0) ||
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 != (code *)0x0)) {
                    pcRam_? = pcVar4;
                    (*pcRam_?)(pvVar3,&uStack_6);
                    return;
                  }
                  goto code_?;
                }
                goto code_?;
              }
            }
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

