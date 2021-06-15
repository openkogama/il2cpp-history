
/* Void CheckForRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_CheckForRotation
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  puStack_2 = (undefined *)0x0;
  uVar3._0_4_ = (this->fields).previousLookDirection.x;
  uVar3._4_4_ = (this->fields).previousLookDirection.y;
  a = (this->fields).localLookDirection;
  fVar4 = (this->fields).previousLookDirection.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  b.z = fVar4;
  b.x = (float)uVar3;
  b.y = SUB84(uVar3,4);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar5->x;
  uStack_1._4_4_ = pVVar5->y;
  puStack_2 = (undefined *)pVVar5->z;
  fVar6 = (float10)func_?(&uStack_1,0);
  if ((_UNK_? < (float)fVar6) &&
     (this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnRotationChange,
     this_00 != (JumpState_OnWallJumpDelegate *)0x0)) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  fVar7 = (this->fields).localLookDirection.y;
  fVar4 = (this->fields).localLookDirection.z;
  (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
  (this->fields).previousLookDirection.y = fVar7;
  (this->fields).previousLookDirection.z = fVar4;
  return;
}


/* Void Update(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_Update
               (AvatarLimbManager_AvatarLookDirectionHandler *this,Vector3 lookDirection,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (PrefabPool *)(this->fields).avatarWO;
  if (this_00 != (PrefabPool *)0x0) {
    this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_02 != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd4,(Transform *)this_02,(MethodInfo *)0x0);
      uVar2._0_4_ = pVVar1->x;
      uVar2._4_4_ = pVVar1->y;
      fVar3 = pVVar1->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar3;
      a.x = (float)(int)uVar2;
      a.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffd4,a,lookDirection,(MethodInfo *)0x0);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_InverseTransformPoint
                         ((Vector3 *)&stack0xffffffd4,(Transform *)this_02,*pVVar1,(MethodInfo *)0x0
                         );
      bVar4 = cRam_? == '\0';
      fVar5 = pVVar1->y;
      fVar3 = pVVar1->z;
      (this->fields).localLookDirection.x = pVVar1->x;
      (this->fields).localLookDirection.y = fVar5;
      (this->fields).localLookDirection.z = fVar3;
      if (bVar4) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      fStack_6 = 0.0;
      puStack_7 = (undefined *)0x0;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar8 != (MainCameraManager *)0x0) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar8,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
          fStack_6 = pQVar10->x;
          puStack_7 = (undefined *)pQVar10->y;
          puVar11 = (undefined8 *)func_?(&VStack_12,&fStack_6,0);
          fVar3 = (float)((ulonglong)*puVar11 >> 0x20);
          if (fVar3 != (this->fields).previousYaw) {
            pSVar13 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)
                     (this->fields).OnLookDirectionYawChange;
            if (pSVar13 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
              SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                        (pSVar13,fVar3,MethodInfo__System__Action<float>__Invoke_float_);
            }
            (this->fields).previousYaw = fVar3;
          }
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          fStack_6 = 0.0;
          puStack_7 = (undefined *)0x0;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar8 != (MainCameraManager *)0x0) {
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pMVar8,(MethodInfo *)0x0);
            if (pTVar9 != (Transform *)0x0) {
              pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
              fStack_6 = pQVar10->x;
              puStack_7 = (undefined *)pQVar10->y;
              puVar11 = (undefined8 *)func_?(&VStack_12,&fStack_6,0);
              fVar3 = (float)*puVar11;
              if (fVar3 != (this->fields).previousPitch) {
                pSVar13 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)
                         (this->fields).OnLookDirectionPitchChange;
                if (pSVar13 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
                  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
                  SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                            (pSVar13,fVar3,MethodInfo__System__Action<float>__Invoke_float_);
                }
                (this->fields).previousPitch = fVar3;
              }
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              VStack_12.y = (this->fields).previousLookDirection.x;
              VStack_12.z = (this->fields).previousLookDirection.y;
              fVar3 = (this->fields).localLookDirection.z;
              fVar5 = (this->fields).previousLookDirection.z;
              uVar14._0_4_ = (this->fields).localLookDirection.x;
              uVar14._4_4_ = (this->fields).localLookDirection.y;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              a_00.z = fVar3;
              a_00.x = (float)(int)uVar14;
              a_00.y = (float)(int)((ulonglong)uVar14 >> 0x20);
              b.z = fVar5;
              b.x = VStack_12.y;
              b.y = VStack_12.z;
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_12,a_00,b,(MethodInfo *)0x0);
              fVar15 = (float10)func_?();
              if ((_UNK_? < (float)fVar15) &&
                 (this_01 = (JumpState_OnWallJumpDelegate *)(this->fields).OnRotationChange,
                 this_01 != (JumpState_OnWallJumpDelegate *)0x0)) {
                JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                          (this_01,(MethodInfo *)0x0);
              }
              fVar5 = (this->fields).localLookDirection.y;
              fVar3 = (this->fields).localLookDirection.z;
              (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
              (this->fields).previousLookDirection.y = fVar5;
              (this->fields).previousLookDirection.z = fVar3;
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdatePitch() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_UpdatePitch
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_02,(MethodInfo *)0x0);
      puVar1 = (undefined8 *)func_?(auStack_2);
      uStack_3 = *puVar1;
      if ((float)uStack_3 != (this->fields).previousPitch) {
        this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)
                  (this->fields).OnLookDirectionPitchChange;
        if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
          SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                    (this_00,(float)uStack_3,MethodInfo__System__Action<float>__Invoke_float_);
        }
        (this->fields).previousPitch = (float)uStack_3;
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateYaw() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_UpdateYaw
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_01,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_02,(MethodInfo *)0x0);
      puVar1 = (undefined8 *)func_?(auStack_2);
      uStack_3._4_4_ = (float)((ulonglong)*puVar1 >> 0x20);
      value = uStack_3._4_4_;
      if (uStack_3._4_4_ != (this->fields).previousYaw) {
        this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)
                  (this->fields).OnLookDirectionYawChange;
        if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
          uStack_3 = *puVar1;
          Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
          SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
          SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
                    (this_00,value,MethodInfo__System__Action<float>__Invoke_float_);
        }
        (this->fields).previousYaw = uStack_3._4_4_;
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

