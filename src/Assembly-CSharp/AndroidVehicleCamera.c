
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_Enter
               (AndroidVehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Camera_enter_____,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).originalTransformParent = pTVar1;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      this_00 = (this->fields).avatarLocal;
      if (this_00 != (MVAvatarLocal *)0x0) {
        item = (UnityWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
        ;
        if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pTVar2 = (this->fields).targetRotation;
          (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
          if (pTVar2 != (TargetRotation *)0x0) {
            TargetRotation::TargetRotation_SetTargetRotation_1
                      (pTVar2,(this->fields).initialYRotation,0.0,(MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
              fVar4 = pQVar3->x;
              fVar5 = pQVar3->y;
              pTVar2 = (this->fields).targetRotation;
              if (pTVar2 != (TargetRotation *)0x0) {
                puVar6 = &UNK_?;
                InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                          ((Vector3 *)&stack0xfffffff0,(InputToPlayerMovementAndroid *)pTVar2,
                           (MethodInfo *)0x0);
                puVar7 = &UNK_?;
                func_?();
                (this->fields).rotationX = (this->fields).initialYRotation;
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  value.y = fVar5;
                  value.x = fVar4;
                  value.z = (float)puVar6;
                  value.w = (float)puVar7;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar1,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_Exit
               (AndroidVehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (this_00,(this->fields).originalTransformParent,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleCollision() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_HandleCollision
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).cameraCollision;
    targetPosition = *pVVar2;
    cameraRadius = (this->fields)._.cameraRadius;
    baseDistance = (this->fields).distanceToLookAt;
    VVar3 = *pVVar2;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
      if (this_00 != (CameraCollision *)0x0) {
        ignoreIDs = (this->fields).ignoreAvatarId;
        fVar4 = 0.0;
        bVar5 = CameraCollision::CameraCollision_Collide
                          (this_00,(Vector3 *)&stack0xffffffd8,cameraRadius,baseDistance,VVar3,
                           *pVVar2,ignoreIDs,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar1 == (Transform *)0x0) goto code_?;
          VVar3.y = fVar4;
          VVar3.x = (float)ignoreIDs;
          VVar3.z = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar1,VVar3,(MethodInfo *)0x0);
        }
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        this_01 = (this->fields).cameraLerpToDesiredDistance;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffcc,this_02,(MethodInfo *)0x0);
          if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
            pVVar2 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               ((Vector3 *)&stack0xffffffcc,this_01,targetPosition,*pVVar2,
                                (MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar1,*pVVar2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandlePos() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_HandlePos
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                       (&VStack_3,(MethodInfo *)0x0);
    fVar4 = pVVar2->x;
    fVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    pVVar7 = (Vector3 *)&stack0xffffffd8;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                       (pVVar7,*pVVar2,(MethodInfo *)0x0);
    VStack_3.y = pVVar2->x;
    VStack_3.z = pVVar2->y;
    fVar8 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    rotation.y = fVar4;
    rotation.x = (float)pVVar7;
    rotation.z = fVar5;
    rotation.w = fVar6;
    point.z = fVar8;
    point.x = VStack_3.y;
    point.y = VStack_3.z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                       ((Vector3 *)&stack0xffffffd8,rotation,point,(MethodInfo *)0x0);
    fVar4 = pVVar7->z;
    puVar9 = &stack0xffffffe4;
    puVar10 = &UNK_?;
    func_?();
    a.y = (float)puVar9;
    a.x = (float)puVar10;
    a.z = fVar4;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffd8,a,(this->fields).distanceToLookAt,
                        (MethodInfo *)0x0);
    uVar11 = pVVar7->x;
    uVar12 = pVVar7->y;
    fVar4 = pVVar7->z;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAtTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      b.y = (float)uVar12;
      b.x = (float)uVar11;
      b.z = fVar4;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffd8,*pVVar7,b,(MethodInfo *)0x0);
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffd8,*pVVar7,(this->fields).lookAtOffset,
                          (MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_00,*pVVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_UpdateCamera
               (AndroidVehicleCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AndroidVehicleCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffac,pTVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                        ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    fVar4 = pVVar2->y;
    pVVar5 = (Vector3 *)&stack0xffffffcc;
    puVar6 = &UNK_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                        (pVVar5,*pVVar2,(MethodInfo *)0x0);
    uVar7._0_4_ = pVVar2->x;
    uVar7._4_4_ = pVVar2->y;
    fVar8 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    rotation.y = (float)pVVar5;
    rotation.x = (float)puVar6;
    rotation.z = fVar3;
    rotation.w = fVar4;
    point.z = fVar8;
    point.x = (float)(int)uVar7;
    point.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffcc,rotation,point,(MethodInfo *)0x0);
    uVar9 = pVVar5->x;
    uVar10 = pVVar5->y;
    a.y = (float)uVar10;
    a.x = (float)uVar9;
    fVar3 = pVVar5->z;
    func_?();
    a.z = fVar3;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffcc,a,(this->fields).distanceToLookAt,
                         (MethodInfo *)0x0);
    uVar11 = pVVar5->x;
    uVar12 = pVVar5->y;
    b.y = (float)uVar12;
    b.x = (float)uVar11;
    fVar3 = pVVar5->z;
    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAtTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
      b.z = fVar3;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffcc,*pVVar5,b,(MethodInfo *)0x0);
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffcc,*pVVar5,(this->fields).lookAtOffset,
                           (MethodInfo *)0x0);
      if (pTVar13 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar13,*pVVar5,(MethodInfo *)0x0);
        pTVar1 = (this->fields).lookAtTransform;
        fVar8 = 0.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
        if (pTVar1 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
          this_00 = (this->fields).cameraCollision;
          uVar14 = pVVar5->x;
          uVar15 = pVVar5->y;
          fVar16 = pVVar5->z;
          fVar17 = (this->fields)._.cameraRadius;
          baseDistance = (this->fields).distanceToLookAt;
          uVar18 = pVVar5->x;
          uVar19 = pVVar5->y;
          fVar20 = fVar16;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
            if (this_00 != (CameraCollision *)0x0) {
              targetPosition.y = (float)uVar19;
              targetPosition.x = (float)uVar18;
              targetPosition.z = fVar16;
              bVar21 = CameraCollision::CameraCollision_Collide
                                 (this_00,(Vector3 *)&stack0xffffffcc,fVar17,baseDistance,
                                  targetPosition,*pVVar5,(this->fields).ignoreAvatarId,
                                  (MethodInfo *)0x0);
              if (bVar21 != 0) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (pTVar1 == (Transform *)0x0) goto code_?;
                value.y = fVar4;
                value.x = fVar3;
                value.z = fVar8;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,value,(MethodInfo *)0x0);
              }
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
              this_01 = (this->fields).cameraLerpToDesiredDistance;
              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar13 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffb0,pTVar13,(MethodInfo *)0x0);
                if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
                  targetPosition_00.y = (float)uVar15;
                  targetPosition_00.x = (float)uVar14;
                  targetPosition_00.z = fVar20;
                  pVVar5 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                                      ((Vector3 *)&stack0xffffffb0,this_01,targetPosition_00,
                                       *pVVar5,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar1,*pVVar5,(MethodInfo *)0x0);
                    this_02 = (this->fields).cameraShake;
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                      pMVar22 = (this->fields).avatarLocal;
                      uVar23 = pVVar5->x;
                      uVar24 = pVVar5->y;
                      fVar3 = pVVar5->z;
                      if (pMVar22 != (MVAvatarLocal *)0x0) {
                        (*(code *)(pMVar22->klass->vtable).get_VelocityRelative.method)
                                  (&stack0xffffffb0,pMVar22);
                        fVar25 = (float10)func_?(&stack0xffffffbc,0);
                        if (this_02 != (CameraShake *)0x0) {
                          position.y = (float)uVar24;
                          position.x = (float)uVar23;
                          position.z = fVar3;
                          pVVar5 = CameraShake::CameraShake_Shake
                                              ((Vector3 *)&stack0xffffffb0,this_02,position,
                                               (float)fVar25,(MethodInfo *)0x0);
                          if (targetTransform != (ProtectedTransform *)0x0) {
                            ProtectedTransform::ProtectedTransform_set_position
                                      (targetTransform,*pVVar5,(MethodInfo *)0x0);
                            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_transform
                                                ((Component_1 *)this,(MethodInfo *)0x0);
                            if (pTVar1 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_rotation
                                        ((Quaternion *)&stack0xffffffac,pTVar1,(MethodInfo *)0x0);
                              fVar3 = (this->fields).localPitch;
                              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.
                                          methodPtr & 0x2000000) != 0) &&
                                 ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                                func_?();
                              }
                              fVar17 = 0.0;
                              fVar8 = 0.0;
                              fVar4 = 0.0;
                              pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                        Quaternion_Euler((Quaternion *)&stack0xffffffc8,fVar3,0.0,
                                                         0.0,(MethodInfo *)0x0);
                              lhs.y = fVar4;
                              lhs.x = fVar3;
                              lhs.z = fVar8;
                              lhs.w = fVar17;
                              pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                        Quaternion_op_Multiply
                                                  ((Quaternion *)&stack0xffffffac,lhs,*pQVar26,
                                                   (MethodInfo *)0x0);
                              ProtectedTransform::ProtectedTransform_set_rotation
                                        (targetTransform,*pQVar26,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_UpdateTargetRotation
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                    (StringLiteral_Mouse_X,(MethodInfo *)0x0);
  fVar1 = fVar1 * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar1,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe0,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar2->x;
  uVar3._4_4_ = pVVar2->y;
  fVar4 = pVVar2->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  axis.z = fVar4;
  axis.x = (float)(int)uVar3;
  axis.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffac,fVar1,axis,(MethodInfo *)0x0);
  fVar1 = pQVar5->x;
  fVar4 = pQVar5->y;
  fVar6 = pQVar5->z;
  fVar7 = pQVar5->w;
  pTVar8 = (this->fields).lookAtTransform;
  if (pTVar8 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffdc,pTVar8,(MethodInfo *)0x0);
    puVar9 = (undefined8 *)func_?();
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       ((Quaternion *)&stack0xffffffdc,0.0,(float)((ulonglong)*puVar9 >> 0x20),0.0,
                        (MethodInfo *)0x0);
    lhs.y = fVar4;
    lhs.x = fVar1;
    lhs.z = fVar6;
    lhs.w = fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
              ((Quaternion *)&stack0xffffffac,lhs,*pQVar5,(MethodInfo *)0x0);
    puVar9 = (undefined8 *)func_?();
    fVar6 = (float)((ulonglong)*puVar9 >> 0x20);
    fVar1 = (this->fields).rotationX;
    fVar4 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                       (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar1 = fVar1 - fVar4 * _UNK_?;
    (this->fields).rotationX = fVar1;
    fVar1 = MathFunctions::MathFunctions_NormalizeAngle(fVar1,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    (this->fields).rotationX = fVar1;
    if (fVar4 < fVar1) {
      fVar1 = fVar1 - _UNK_?;
      (this->fields).rotationX = fVar1;
    }
    fVar4 = (this->fields).minimumY;
    fVar7 = (this->fields).maximumY;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                      (fVar1,fVar4,fVar7,(MethodInfo *)0x0);
    pTVar10 = (this->fields).targetRotation;
    (this->fields).rotationX = fVar1;
    if (pTVar10 != (TargetRotation *)0x0) {
      TargetRotation::TargetRotation_SetTargetRotation_1(pTVar10,fVar1,fVar6,(MethodInfo *)0x0);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pTVar10 = (this->fields).targetRotation;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffac,this_00,(MethodInfo *)0x0);
        if (pTVar10 != (TargetRotation *)0x0) {
          pQVar5 = TargetRotation::TargetRotation_GetLerpRotation
                             ((Quaternion *)&stack0xffffffac,pTVar10,*pQVar5,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar8,*pQVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* AndroidVehicleCamera() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera__ctor
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (CameraLerpToDesiredDistance *)func_?(TypeInfo__CameraLerpToDesiredDistance);
  CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).cameraLerpToDesiredDistance = this_00;
  this_01 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__CameraCollision);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).cameraCollision = (CameraCollision *)this_01;
  (this->fields).initialYRotation = 20.0;
  (this->fields).localPitch = -20.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).lookAtOffset.x = pVVar1->x;
  (this->fields).lookAtOffset.y = fVar2;
  (this->fields).lookAtOffset.z = fVar3;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}

