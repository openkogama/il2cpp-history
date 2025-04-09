
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_Enter
               (DeadCamera *this,MVCameraController *camController,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        uVar3 = pVVar2->x;
        uVar4 = pVVar2->y;
        this = (DeadCamera *)pVVar2->z;
        fVar5 = (float)uVar4;
        value.x = (float)uVar3;
        value = (Vector3)CONCAT84(uVar6,value.x);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_01,value,(MethodInfo *)0x0);
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar1 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_StartTransitionCam(pMVar1,0.5,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_UpdateCamera
               (DeadCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  MVCameraBase::MVCameraBase_UpdateCamera
            ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    uVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    VStack_4.x = (this->fields).avatarLocalLookAtOffset.x;
    VStack_4.y = (this->fields).avatarLocalLookAtOffset.y;
    VStack_4.z = (this->fields).avatarLocalLookAtOffset.z;
    fStack_7 = (float)uVar5 + VStack_4.x;
    pTStack_8 = (Transform *)(VStack_4.z + pVVar3->z);
    puStack_9 = (undefined *)0x0;
    uStack_10 = CONCAT44((float)uVar6 + VStack_4.y,(undefined4)uStack_10);
    (this->fields).lookAtPos.x = fStack_7;
    (this->fields).lookAtPos.y = (float)uVar6 + VStack_4.y;
    (this->fields).lookAtPos.z = (float)pTStack_8;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      VStack_4.z = (float)pTStack_8 - pVVar3->z;
      puVar11 = (undefined8 *)func_?();
      uStack_10 = *puVar11;
      fVar12 = *(float *)(puVar11 + 1);
      pTStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
      forward.z = fVar12;
      forward.x = (float)(undefined4)uStack_10;
      forward.y = (float)uStack_10._4_4_;
      pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                         ((Quaternion *)&fStack_7,forward,(MethodInfo *)0x0);
      if (pTStack_8 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTStack_8,*pQVar13,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
          if (targetTransform != (ProtectedTransform *)0x0) {
            ProtectedTransform::ProtectedTransform_set_position
                      (targetTransform,*pVVar3,(MethodInfo *)0x0);
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&fStack_7,pTVar2,(MethodInfo *)0x0);
              ProtectedTransform::ProtectedTransform_set_rotation
                        (targetTransform,*pQVar13,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::DeadCamera::DeadCamera_UpdateRotation(DeadCamera *this,MethodInfo *method)

{
  uVar1 = (this->fields).lookAtPos.x;
  uVar2 = (this->fields).lookAtPos.y;
  fStack_3 = (this->fields).lookAtPos.z;
  fStack_4 = (float)uVar1;
  fStack_5 = (float)uVar2;
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar6 != (Transform *)0x0) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)(auStack_8 + 4),pTVar6,(MethodInfo *)0x0);
    uVar9 = pVVar7->x;
    uVar10 = pVVar7->y;
    fStack_11 = fStack_3 - pVVar7->z;
    uStack_12 = CONCAT44(fStack_5 - (float)uVar10,fStack_4 - (float)uVar9);
    fStack_3 = fStack_11;
    puVar13 = (undefined8 *)func_?(auStack_8 + 4,&uStack_12,0);
    fVar14 = *(float *)(puVar13 + 1);
    fStack_5 = (float)*puVar13;
    fStack_3 = (float)((ulonglong)*puVar13 >> 0x20);
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    forward.y = fStack_3;
    forward.x = fStack_5;
    forward.z = fVar14;
    pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)auStack_8,forward,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar6,*pQVar15,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

