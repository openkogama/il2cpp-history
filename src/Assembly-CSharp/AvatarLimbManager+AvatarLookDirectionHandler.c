
/* Void CheckForRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_CheckForRotation
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  uStack_1._0_4_ = (this->fields).localLookDirection.x;
  uStack_1._4_4_ = (this->fields).localLookDirection.y;
  uVar2 = (this->fields).previousLookDirection.x;
  uVar3 = (this->fields).previousLookDirection.y;
  fStack_4 = (this->fields).localLookDirection.z - (this->fields).previousLookDirection.z;
  uStack_5 = CONCAT44((float)uStack_1._4_4_ - (float)uVar3,
                       (float)(undefined4)uStack_1 - (float)uVar2);
  fStack_6 = fStack_4;
  fVar7 = (float10)func_?(&uStack_5,0);
  if ((_UNK_? < (float)fVar7) && ((this->fields).OnRotationChange != (Action *)0x0)) {
    pAVar8 = (this->fields).OnRotationChange;
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
  }
  fVar9 = (this->fields).localLookDirection.y;
  fVar10 = (this->fields).localLookDirection.z;
  (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
  (this->fields).previousLookDirection.y = fVar9;
  (this->fields).previousLookDirection.z = fVar10;
  return;
}


/* Void Update(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_Update
               (AvatarLimbManager_AvatarLookDirectionHandler *this,Vector3 lookDirection,
               MethodInfo *method)

{
  pMVar1 = (this->fields).avatarWO;
  if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
     (pTVar2 = (pMVar1->fields).transform, pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    puStack_5 = (undefined *)pVVar3->x;
    unique0x0000a404 = pVVar3->y;
    VStack_4.z = lookDirection.z + pVVar3->z;
    position.y = lookDirection.y + (float)unique0x0000a404;
    position.x = lookDirection.x + (float)puStack_5;
    position.z = VStack_4.z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                       (&VStack_4,pTVar2,position,(MethodInfo *)0x0);
    fVar6 = pVVar3->y;
    fVar7 = pVVar3->z;
    (this->fields).localLookDirection.x = pVVar3->x;
    (this->fields).localLookDirection.y = fVar6;
    (this->fields).localLookDirection.z = fVar7;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar8 != (MainCameraManager *)0x0) {
      _puStack_10 = CONCAT44(pMVar8,&UNK_?);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar8,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        _puStack_10 = CONCAT44(&UNK_?,puStack_5);
        pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
        pvStack_10 = (void *)pQVar9->x;
        _puStack_10 = CONCAT44(&UNK_?,pQVar9->y);
        iVar11 = func_?();
        fVar7 = *(float *)(iVar11 + 4);
        if (fVar7 != (this->fields).previousYaw) {
          if ((this->fields).OnLookDirectionYawChange != (Action_1_Single_ *)0x0) {
            pAVar12 = (this->fields).OnLookDirectionYawChange;
            _puStack_10 = CONCAT44((pAVar12->fields)._._.method,fVar7);
            pvStack_10 = (pAVar12->fields)._._.method_code;
            VStack_4.z = (float)&UNK_?;
            (*(pAVar12->fields)._._.invoke_impl)();
          }
          (this->fields).previousYaw = fVar7;
        }
        _puStack_10 = 0xADDR;
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar8 != (MainCameraManager *)0x0) {
          _puStack_10 = CONCAT44(pMVar8,&UNK_?);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar8,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            _puStack_10 = CONCAT44(&UNK_?,puStack_5);
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
            pvStack_10 = (void *)pQVar9->x;
            _puStack_10 = CONCAT44(&UNK_?,pQVar9->y);
            pfVar13 = (float *)func_?();
            pvVar14 = (void *)*pfVar13;
            if ((float)pvVar14 != (this->fields).previousPitch) {
              if ((this->fields).OnLookDirectionPitchChange != (Action_1_Single_ *)0x0) {
                pAVar12 = (this->fields).OnLookDirectionPitchChange;
                pvVar14 = (pAVar12->fields)._._.method_code;
                (*(pAVar12->fields)._._.invoke_impl)();
              }
              (this->fields).previousPitch = (float)pvVar14;
            }
            puStack_5 = (undefined *)(this->fields).localLookDirection.x;
            unique0x0000a404 = (this->fields).localLookDirection.y;
            uVar15 = (this->fields).previousLookDirection.x;
            uVar16 = (this->fields).previousLookDirection.y;
            VStack_4.z = (this->fields).localLookDirection.z -
                          (this->fields).previousLookDirection.z;
            VStack_4.y = (float)unique0x0000a404 - (float)uVar16;
            VStack_4.x = (float)puStack_5 - (float)uVar15;
            fVar17 = (float10)func_?();
            if ((_UNK_? < (float)fVar17) &&
               ((this->fields).OnRotationChange != (Action *)0x0)) {
              (*(((this->fields).OnRotationChange)->fields)._._.invoke_impl)();
            }
            fVar6 = (this->fields).localLookDirection.y;
            fVar7 = (this->fields).localLookDirection.z;
            (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
            (this->fields).previousLookDirection.y = fVar6;
            (this->fields).previousLookDirection.z = fVar7;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdatePitch() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_UpdatePitch
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffdc,this_01,(MethodInfo *)0x0);
      pfVar1 = (float *)func_?(apvStack_2);
      fStack_3 = *pfVar1;
      if (fStack_3 != (this->fields).previousPitch) {
        if ((this->fields).OnLookDirectionPitchChange != (Action_1_Single_ *)0x0) {
          pAVar4 = (this->fields).OnLookDirectionPitchChange;
          apvStack_2[0] = (pAVar4->fields)._._.method;
          (*(pAVar4->fields)._._.invoke_impl)();
        }
        (this->fields).previousPitch = fStack_3;
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateYaw() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_UpdateYaw
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffdc,this_01,(MethodInfo *)0x0);
      iVar1 = func_?(apvStack_2);
      fStack_3 = *(float *)(iVar1 + 4);
      if (fStack_3 != (this->fields).previousYaw) {
        if ((this->fields).OnLookDirectionYawChange != (Action_1_Single_ *)0x0) {
          pAVar4 = (this->fields).OnLookDirectionYawChange;
          apvStack_2[0] = (pAVar4->fields)._._.method;
          (*(pAVar4->fields)._._.invoke_impl)();
        }
        (this->fields).previousYaw = fStack_3;
      }
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

