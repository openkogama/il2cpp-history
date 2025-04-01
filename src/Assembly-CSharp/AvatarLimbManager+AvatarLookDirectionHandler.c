
/* Void CheckForRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_CheckForRotation
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  uVar1 = (this->fields).localLookDirection.x;
  uVar2 = (this->fields).localLookDirection.y;
  uVar3 = (this->fields).previousLookDirection.x;
  uVar4 = (this->fields).previousLookDirection.y;
  fVar5 = (this->fields).localLookDirection.z - (this->fields).previousLookDirection.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar6 = (double)(((float)uVar2 - (float)uVar4) * ((float)uVar2 - (float)uVar4) +
                   ((float)uVar1 - (float)uVar3) * ((float)uVar1 - (float)uVar3) + fVar5 * fVar5);
  if (dVar6 < 0.0) {
    func_?();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  if ((_UNK_? < (float)dVar6) &&
     (pAVar7 = (this->fields).OnRotationChange, pAVar7 != (Action *)0x0)) {
    (*(pAVar7->fields)._._.invoke_impl)
              ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
  }
  fVar8 = (this->fields).localLookDirection.y;
  fVar5 = (this->fields).localLookDirection.z;
  (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
  (this->fields).previousLookDirection.y = fVar8;
  (this->fields).previousLookDirection.z = fVar5;
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
                        ((Vector3 *)&stack0xffffffe8,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    position.y = lookDirection.y + (float)uVar5;
    position.x = lookDirection.x + (float)uVar4;
    position.z = lookDirection.z + pVVar3->z;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                        ((Vector3 *)&puStack_6,pTVar2,position,(MethodInfo *)0x0);
    fVar7 = pVVar3->y;
    fVar8 = pVVar3->z;
    (this->fields).localLookDirection.x = pVVar3->x;
    (this->fields).localLookDirection.y = fVar7;
    (this->fields).localLookDirection.z = fVar8;
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar9 != (MainCameraManager *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar9,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0x00000018,pTVar2,(MethodInfo *)0x0);
        in_stack_11 = pQVar10->z;
        in_stack_12 = pQVar10->w;
        iVar13 = func_?(&uStack14);
        fVar8 = *(float *)(iVar13 + 4);
        if (fVar8 != (this->fields).previousYaw) {
          pAVar15 = (this->fields).OnLookDirectionYawChange;
          if (pAVar15 != (Action_1_Single_ *)0x0) {
            (*(pAVar15->fields)._._.invoke_impl)
                      ((pAVar15->fields)._._.method_code,fVar8,(pAVar15->fields)._._.method);
          }
          (this->fields).previousYaw = fVar8;
        }
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar9 != (MainCameraManager *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar9,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)&stack0x00000018,pTVar2,(MethodInfo *)0x0);
            in_stack_11 = pQVar10->z;
            in_stack_12 = pQVar10->w;
            puVar16 = (undefined4 *)func_?(&uStack14);
            puVar17 = (undefined *)*puVar16;
            if ((float)puVar17 != (this->fields).previousPitch) {
              pAVar15 = (this->fields).OnLookDirectionPitchChange;
              if (pAVar15 != (Action_1_Single_ *)0x0) {
                pMStack_18 = (pAVar15->fields)._._.method;
                puStack_6 = puVar17;
                (*(pAVar15->fields)._._.invoke_impl)();
              }
              (this->fields).previousPitch = (float)puVar17;
            }
            uVar19 = (this->fields).localLookDirection.x;
            uVar20 = (this->fields).localLookDirection.y;
            in_stack_11 = (this->fields).localLookDirection.z;
            uStack14._0_4_ = (this->fields).previousLookDirection.x;
            uStack14._4_4_ = (this->fields).previousLookDirection.y;
            fVar8 = (float)uVar19 - (float)(undefined4)uStack14;
            fStack21 = (this->fields).previousLookDirection.z;
            fVar7 = (float)uVar20 - (float)uStack14._4_4_;
            fVar22 = in_stack_11 - fStack21;
            if (cRam_? == '\0') {
              pMStack_18 = (Math__Class *)&TypeInfo__System__Math;
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              pMStack_18 = TypeInfo__System__Math;
              func_?();
            }
            dVar23 = (double)(fVar7 * fVar7 + fVar8 * fVar8 + fVar22 * fVar22);
            if (dVar23 < 0.0) {
              func_?();
            }
            else {
              dVar23 = SQRT(dVar23);
            }
            if ((_UNK_? < (float)dVar23) &&
               (pAVar24 = (this->fields).OnRotationChange, pAVar24 != (Action *)0x0)) {
              pMStack_18 = (pAVar24->fields)._._.method;
              puStack_6 = (pAVar24->fields)._._.method_code;
              (*(pAVar24->fields)._._.invoke_impl)();
            }
            fVar7 = (this->fields).localLookDirection.y;
            fVar8 = (this->fields).localLookDirection.z;
            (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
            (this->fields).previousLookDirection.y = fVar7;
            (this->fields).previousLookDirection.z = fVar8;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
        pAVar4 = (this->fields).OnLookDirectionPitchChange;
        if (pAVar4 != (Action_1_Single_ *)0x0) {
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
        pAVar4 = (this->fields).OnLookDirectionYawChange;
        if (pAVar4 != (Action_1_Single_ *)0x0) {
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

