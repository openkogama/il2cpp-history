
/* Void LateUpdate() */

void Assembly-CSharp.dll::FaceTowardsMainCamera::FaceTowardsMainCamera_LateUpdate
               (FaceTowardsMainCamera *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar2 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar2->fields).mainCamera, this_00 != (Camera *)0x0)) {
    target = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt
                (pTVar1,target,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        uStack3 = 0;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                  (pTVar1,(Vector3)ZEXT812(0x42b40000),(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

