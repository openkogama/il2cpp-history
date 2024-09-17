
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_Enter
               (AndroidVehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&StringLiteral_Camera_enter_____);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Camera_enter_____,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).originalTransformParent = pTVar1;
    func_?();
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      this_00 = (HashSet_1_System_Int32_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32___ctor
                (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar2 = (this->fields).avatarLocal;
      if ((pMVar2 != (MVAvatarLocal *)0x0) && (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                  (this_00,(pMVar2->fields)._._._._.id,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        (this->fields).ignoreAvatarId = this_00;
        func_?();
        pTVar3 = (this->fields).targetRotation;
        if (pTVar3 != (TargetRotation *)0x0) {
          (pTVar3->fields).eulerAngles.x = (this->fields).initialYRotation;
          (pTVar3->fields).eulerAngles.y = 0.0;
          (pTVar3->fields).eulerAngles.z = 0.0;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                      ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
            pTVar3 = (this->fields).targetRotation;
            if (pTVar3 != (TargetRotation *)0x0) {
              uVar4 = (pTVar3->fields).eulerAngles.x;
              uVar5 = (pTVar3->fields).eulerAngles.y;
              euler.y = (float)uVar5 * _UNK_?;
              euler.x = (float)uVar4 * _UNK_?;
              euler.z = (pTVar3->fields).eulerAngles.z * _UNK_?;
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
              fVar7 = pQVar6->x;
              fVar8 = pQVar6->y;
              fVar9 = pQVar6->z;
              fVar10 = pQVar6->w;
              (this->fields).rotationX = (this->fields).initialYRotation;
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                value.y = fVar8;
                value.x = fVar7;
                value.z = fVar9;
                value.w = fVar10;
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
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_Exit
               (AndroidVehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  pTVar2 = (this->fields).lookAtTransform;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).cameraCollision;
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    fStack_7 = (this->fields)._.cameraRadius;
    fStack_8 = (this->fields).distanceToLookAt;
    uStack_9._0_4_ = pVVar3->x;
    uStack_9._4_4_ = pVVar3->y;
    fStack_10 = fVar6;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      if (this_00 != (CameraCollision *)0x0) {
        func_?();
        targetPosition.z = fVar6;
        targetPosition.x = (float)(undefined4)uStack_9;
        targetPosition.y = (float)uStack_9._4_4_;
        bVar11 = CameraCollision::CameraCollision_Collide_1
                          (this_00,(VoxelHit *)&stack0xffffff80,&VStack_1,fStack_7,fStack_8,
                           targetPosition,*pVVar3,(this->fields).ignoreAvatarId,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar2 == (Transform *)0x0) goto code_?;
          value.z = VStack_1.z;
          value.x = VStack_1.x;
          value.y = VStack_1.y;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar2,value,(MethodInfo *)0x0);
        }
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        this_01 = (this->fields).cameraLerpToDesiredDistance;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_4,this_02,(MethodInfo *)0x0);
          if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
            targetPosition_00.z = fStack_10;
            targetPosition_00.x = (float)(undefined4)uStack_5;
            targetPosition_00.y = (float)uStack_5._4_4_;
            pVVar3 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               (&VStack_4,this_01,targetPosition_00,*pVVar3,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,*pVVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void HandlePos() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_HandlePos
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffd4,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    puVar4 = (undefined *)pQVar2->y;
    ppVVar5 = (Vector3__Class **)pQVar2->z;
    fVar6 = pQVar2->w;
    if (cRam_? == '\0') {
      ppVVar5 = &TypeInfo__UnityEngine__Vector3;
      puVar4 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_8.x = (pVVar7->forwardVector).x;
    VStack_8.y = (pVVar7->forwardVector).y;
    VStack_8.z = (float)((uint)(pVVar7->forwardVector).z ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    rotation.y = (float)puVar4;
    rotation.x = fVar3;
    rotation.z = (float)ppVVar5;
    rotation.w = fVar6;
    point.y = (float)((uint)VStack_8.y ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    point.x = (float)((uint)VStack_8.x ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    point.z = VStack_8.z;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd8,rotation,point,(MethodInfo *)0x0);
    VStack_8.x = pVVar9->x;
    VStack_8.y = pVVar9->y;
    VStack_8.z = pVVar9->z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (&VStack_8,(MethodInfo *)0x0);
    fStack_10 = (this->fields).distanceToLookAt;
    fStack_11 = VStack_8.x * fStack_10;
    fStack_12 = VStack_8.y * fStack_10;
    fStack_10 = VStack_8.z * fStack_10;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAtTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      uVar13 = pVVar9->x;
      uVar14 = pVVar9->y;
      uVar15 = (this->fields).lookAtOffset.x;
      uVar16 = (this->fields).lookAtOffset.y;
      VStack_8.x = (float)uVar15 + fStack_11 + (float)uVar13;
      VStack_8.y = (float)uVar16 + fStack_12 + (float)uVar14;
      VStack_8.z = (this->fields).lookAtOffset.z + fStack_10 + pVVar9->z;
      if (this_00 != (Transform *)0x0) {
        value.y = VStack_8.y;
        value.x = VStack_8.x;
        value.z = VStack_8.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_UpdateCamera
               (AndroidVehicleCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  AndroidVehicleCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8 = (pVVar7->forwardVector).x;
    uVar9 = (pVVar7->forwardVector).y;
    rotation.y = fVar4;
    rotation.x = fVar3;
    rotation.z = fVar5;
    rotation.w = fVar6;
    point.y = (float)(uVar9 ^ 
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    point.x = (float)(uVar8 ^ 
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    point.z = (float)((uint)(pVVar7->forwardVector).z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd0,rotation,point,(MethodInfo *)0x0);
    fVar4 = pVVar10->x;
    fVar5 = pVVar10->y;
    fVar6 = pVVar10->z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
    fVar3 = (this->fields).distanceToLookAt;
    fVar5 = fVar5 * fVar3;
    fVar6 = fVar6 * fVar3;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAtTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd0,pTVar1,(MethodInfo *)0x0);
      uVar12 = pVVar10->x;
      uVar13 = pVVar10->y;
      uVar14 = (this->fields).lookAtOffset.x;
      uVar15 = (this->fields).lookAtOffset.y;
      if (pTVar11 != (Transform *)0x0) {
        value_00.y = (float)uVar15 + fVar5 + (float)uVar13;
        value_00.x = (float)uVar14 + fVar4 * fVar3 + (float)uVar12;
        value_00.z = (this->fields).lookAtOffset.z + fVar6 + pVVar10->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar11,value_00,(MethodInfo *)0x0);
        pTVar1 = (this->fields).lookAtTransform;
        fVar5 = 0.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
        if (pTVar1 != (Transform *)0x0) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
          this_00 = (this->fields).cameraCollision;
          fVar6 = pVVar10->x;
          fVar16 = pVVar10->y;
          fVar17 = pVVar10->z;
          this_03 = (Component *)(this->fields)._.cameraRadius;
          fVar18 = pVVar10->x;
          puVar19 = &UNK_?;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (this_03,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
            if (this_00 != (CameraCollision *)0x0) {
              fVar20 = 1.00893e-43;
              func_?();
              targetPosition.y = (float)puVar19;
              targetPosition.x = fVar18;
              targetPosition.z = fVar17;
              bVar21 = CameraCollision::CameraCollision_Collide_1
                                 (this_00,(VoxelHit *)&stack0xffffff50,(Vector3 *)&stack0xffffffd4,
                                  (float)this_03,3.1957762e-29,targetPosition,*pVVar10,
                                  (this->fields).ignoreAvatarId,(MethodInfo *)0x0);
              if (bVar21 != 0) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar1 == (Transform *)0x0) goto code_?;
                value.y = fVar4;
                value.x = fVar3;
                value.z = fVar5;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,value,(MethodInfo *)0x0);
              }
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              this_01 = (this->fields).cameraLerpToDesiredDistance;
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar11 != (Transform *)0x0) {
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffb8,pTVar11,(MethodInfo *)0x0);
                if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
                  targetPosition_00.y = fVar16;
                  targetPosition_00.x = fVar6;
                  targetPosition_00.z = fVar20;
                  pVVar10 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                                      ((Vector3 *)&stack0xffffffb8,this_01,targetPosition_00,
                                       *pVVar10,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar1,*pVVar10,(MethodInfo *)0x0);
                    this_02 = (this->fields).cameraShake;
                    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffffb8,pTVar1,(MethodInfo *)0x0);
                      pMVar22 = (this->fields).avatarLocal;
                      fVar3 = pVVar10->x;
                      fVar17 = pVVar10->y;
                      fVar4 = pVVar10->z;
                      if (pMVar22 != (MVAvatarLocal *)0x0) {
                        (*(code *)(pMVar22->klass->vtable).get_VelocityRelative.method)();
                        fVar23 = (float10)func_?();
                        if (this_02 != (CameraShake *)0x0) {
                          pVVar10 = CameraShake::CameraShake_Shake_1
                                              ((Vector3 *)&stack0xffffffb8,this_02,(float)fVar23,
                                               (MethodInfo *)0x0);
                          uVar24 = pVVar10->x;
                          uVar25 = pVVar10->y;
                          if (targetTransform != (ProtectedTransform *)0x0) {
                            value_01.y = fVar17 + (float)uVar25;
                            value_01.x = fVar3 + (float)uVar24;
                            value_01.z = fVar4 + pVVar10->z;
                            ProtectedTransform::ProtectedTransform_set_position
                                      (targetTransform,value_01,(MethodInfo *)0x0);
                            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform((Component *)this,(MethodInfo *)0x0);
                            if (pTVar1 != (Transform *)0x0) {
                              pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_rotation
                                                  ((Quaternion *)&stack0xffffffb8,pTVar1,
                                                   (MethodInfo *)0x0);
                              fVar6 = pQVar2->x;
                              fVar18 = pQVar2->y;
                              fVar16 = pQVar2->z;
                              puVar19 = &UNK_?;
                              euler.y = 0.0;
                              euler.z = 0.0;
                              euler.x = (this->fields).localPitch * _UNK_?;
                              pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                        Quaternion_Internal_FromEulerRad
                                                  ((Quaternion *)&stack0xffffff98,euler,
                                                   (MethodInfo *)0x0);
                              fVar3 = pQVar2->y;
                              fVar4 = pQVar2->z;
                              fVar5 = pQVar2->w;
                              value_02.y = (fVar18 * fVar5 + fVar3 * (float)puVar19 +
                                           fVar16 * pQVar2->x) - fVar4 * fVar6;
                              value_02.x = (fVar5 * fVar6 + pQVar2->x * (float)puVar19 +
                                           fVar4 * fVar18) - fVar3 * fVar16;
                              value_02.z = (fVar16 * fVar5 + fVar4 * (float)puVar19 + fVar3 * fVar6
                                           ) - fVar18 * pQVar2->x;
                              value_02.w = ((fVar5 * (float)puVar19 - fVar6 * pQVar2->x) -
                                           fVar3 * fVar18) - fVar16 * fVar4;
                              ProtectedTransform::ProtectedTransform_set_rotation
                                        (targetTransform,value_02,(MethodInfo *)0x0);
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
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_UpdateTargetRotation
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fStack_1 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                        (StringLiteral_Mouse_X,(MethodInfo *)0x0);
  fStack_1 = fStack_1 * _UNK_?;
  fVar2 = _UNK_?;
  if ((fStack_1 < _UNK_?) || (fVar2 = _UNK_?, _UNK_? < fStack_1)) {
    fStack_1 = fVar2;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
            ((Quaternion *)&stack0xffffffb0,fStack_1,
             TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  pTVar3 = (this->fields).lookAtTransform;
  if (pTVar3 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
              ((Quaternion *)&stack0xffffffb0,pTVar3,(MethodInfo *)0x0);
    iVar4 = func_?();
    auVar5._4_8_ = 0;
    auVar5._0_4_ = *(float *)(iVar4 + 4) * _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
              ((Quaternion *)&stack0xffffffa0,(Vector3)(auVar5 << 0x20),(MethodInfo *)0x0);
    iVar4 = func_?();
    fVar2 = *(float *)(iVar4 + 4);
    fVar6 = (this->fields).rotationX;
    fVar7 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar6 = fVar6 - fVar7 * _UNK_?;
    (this->fields).rotationX = fVar6;
    fVar7 = MathFunctions::MathFunctions_NormalizeAngle(fVar6,(MethodInfo *)0x0);
    fVar6 = _UNK_?;
    (this->fields).rotationX = fVar7;
    if (fVar6 < fVar7) {
      (this->fields).rotationX = fVar7 - _UNK_?;
    }
    fVar6 = (this->fields).minimumY;
    fVar7 = (this->fields).rotationX;
    if ((fVar7 < fVar6) || (fVar6 = (this->fields).maximumY, fVar6 < fVar7)) {
      fVar7 = fVar6;
    }
    pTVar8 = (this->fields).targetRotation;
    (this->fields).rotationX = fVar7;
    if (pTVar8 != (TargetRotation *)0x0) {
      (pTVar8->fields).eulerAngles.x = fVar7;
      (pTVar8->fields).eulerAngles.y = fVar2;
      (pTVar8->fields).eulerAngles.z = 0.0;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      pTVar8 = (this->fields).targetRotation;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
        if (pTVar8 != (TargetRotation *)0x0) {
          pQVar9 = TargetRotation::TargetRotation_GetLerpRotation
                             ((Quaternion *)&stack0xffffffa0,pTVar8,*pQVar9,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar3,*pQVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AndroidVehicleCamera() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera__ctor
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CameraCollision);
    func_?(&TypeInfo__CameraLerpToDesiredDistance);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__CameraLerpToDesiredDistance;
  value = (CameraLerpToDesiredDistance *)func_?();
  (value->fields).newDistance = INFINITY;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).cameraLerpToDesiredDistance = value;
  func_?(&(this->fields).cameraLerpToDesiredDistance,value);
  method_00 = TypeInfo__CameraCollision;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields).cameraCollision = (CameraCollision *)value_00;
  func_?(&(this->fields).cameraCollision,value_00);
  (this->fields).initialYRotation = 20.0;
  (this->fields).localPitch = -20.0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->downVector).y;
  fVar3 = (pVVar1->downVector).z;
  (this->fields).lookAtOffset.x = (pVVar1->downVector).x;
  (this->fields).lookAtOffset.y = fVar2;
  (this->fields).lookAtOffset.z = fVar3;
  TimeAttackFlagCountdownCamera::TimeAttackFlagCountdownCamera__ctor
            ((TimeAttackFlagCountdownCamera *)this,(MethodInfo *)0x0);
  return;
}

