
/* Void CameraCollision() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_CameraCollision
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff5c,0,0x48);
  fStack_1 = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  pTVar3 = (this->fields).lookAt;
  if ((pTVar3 != (Transform *)0x0) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar3,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,pTVar3,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    lineStart.y = (float)uVar7;
    lineStart.x = (float)uVar6;
    pVStack_8 = (Vector3 *)pVVar4->z;
    fStack_9 = (float)uVar6;
    pHStack_10 = (HashSet_1_System_Int32___Class *)uVar7;
    pVStack_11 = pVStack_8;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar3,(MethodInfo *)0x0);
      VStack_12.x = pVVar4->x;
      VStack_12.y = pVVar4->y;
      VStack_5.z = (float)pVStack_11 - pVVar4->z;
      VStack_5.y = (float)pHStack_10 - VStack_12.y;
      VStack_5.x = fStack_9 - VStack_12.x;
      VStack_12.z = VStack_5.z;
      fVar13 = (float10)func_?();
      pTVar3 = (this->fields).lookAt;
      if ((pTVar3 != (Transform *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar3,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_12,pTVar3,(MethodInfo *)0x0);
        VStack_5.z = (this->fields).lookAtToCamDir.z;
        pVVar4 = &VStack_5;
        VStack_5.x = (this->fields).lookAtToCamDir.x;
        VStack_5.y = (this->fields).lookAtToCamDir.y;
        pVVar15 = &VStack_12;
        VVar16 = *pVVar14;
        puVar17 = (undefined8 *)func_?();
        uVar18 = *(undefined4 *)(puVar17 + 1);
        uStack_19 = (undefined4)*puVar17;
        uStack_20 = (undefined4)((ulonglong)*puVar17 >> 0x20);
        iVar21 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Default,(MethodInfo *)0x0);
        pVStack_11 = (Vector3 *)(this->fields)._._.cameraRadius;
        pHVar22 = TypeInfo__System__Collections__Generic__HashSet<int>;
        this_00 = (HashSet_1_System_Int32_ *)func_?();
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        ray.m_Direction.z = (float)uVar18;
        ray.m_Direction.y = (float)uStack_20;
        ray.m_Direction.x = (float)uStack_19;
        ray.m_Origin = VVar16;
        bVar23 = CollisionDetection::CollisionDetection_MVSphereCast
                          (ray,(float)pVStack_11,(VoxelHit *)&stack0xffffff5c,(float)fVar13,this_00,
                           1 << ((byte)iVar21 & 0x1f),(MethodInfo *)0x0);
        if (bVar23 == 0) {
          return;
        }
        pHStack_10 = pHVar22;
        pVStack_11 = pVVar15;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_12,pTVar3,(MethodInfo *)0x0);
          VStack_5.x = pVVar15->x;
          VStack_5.y = pVVar15->y;
          VStack_12.x = (this->fields).lookAtToCamDir.x;
          VStack_12.y = (this->fields).lookAtToCamDir.y;
          VStack_12.z = (this->fields).lookAtToCamDir.z;
          VStack_5.z = VStack_12.z + pVVar15->z;
          VVar16.y = (float)pVStack_11;
          VVar16.x = (float)pHStack_10;
          VVar16.z = (float)pVVar4;
          lineStart.z = (float)pVStack_8;
          lineEnd.y = VStack_12.y + VStack_5.y;
          lineEnd.x = VStack_12.x + VStack_5.x;
          lineEnd.z = VStack_5.z;
          bVar23 = MathFunctions::MathFunctions_DistancePointLine_1
                            (VVar16,lineStart,lineEnd,&fStack_1,&VStack_2,(MethodInfo *)0x0);
          if (bVar23 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
            message = (Object *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
          }
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value.z = VStack_2.z;
            value.x = VStack_2.x;
            value.y = VStack_2.y;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar3,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_Enter
               (AirCraftCamera *this,MVCameraController *camController,MethodInfo *method)

{
  this_00 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)camController,(MethodInfo *)0x0);
  pTVar1 = (this->fields).lookAt;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (pTVar1,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
               (MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAt;
    if (pTVar1 != (Transform *)0x0) {
      stack0xffffffe8 = (float)pTVar1;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pTVar1,(MethodInfo *)0x0);
      stack0xffffffe8 = (float)this;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&puStack_3,this_01,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          uVar4 = pVVar2->x;
          uVar5 = pVVar2->y;
          this = (AirCraftCamera *)pVVar2->z;
          fVar6 = (float)uVar5;
          position.x = (float)uVar4;
          position = (Vector3)CONCAT84(uVar7,position.x);
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_InverseTransformPoint
                              ((Vector3 *)&puStack_3,pTVar1,position,(MethodInfo *)0x0);
          fVar8 = pVVar2->y;
          fVar9 = pVVar2->z;
          (this_00->fields).initialLocalCamPosition.x = pVVar2->x;
          (this_00->fields).initialLocalCamPosition.y = fVar8;
          (this_00->fields).initialLocalCamPosition.z = fVar9;
          pTVar1 = (this_00->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
            uVar10 = pVVar2->x;
            uVar11 = pVVar2->y;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_12,pTVar1,(MethodInfo *)0x0);
              uVar13 = pVVar2->x;
              uVar14 = pVVar2->y;
              unique0x100000f4 = (float)uVar11 - (float)uVar14;
              puStack_3 = (undefined *)((float)uVar10 - (float)uVar13);
              fVar15 = (float10)func_?();
              (this_00->fields).baseDistanceFromLookAt = (float)fVar15;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_UpdateCamera
               (AirCraftCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAt;
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_TransformPoint
                         ((Vector3 *)&puStack_3,pTVar1,(this->fields).initialLocalCamPosition,
                          (MethodInfo *)0x0);
      fVar4 = pVVar2->z;
      pTVar1 = (this->fields).lookAt;
      if (pTVar1 != (Transform *)0x0) {
        stack0xffffffe8 = (float)pTVar1;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          fVar5 = 0.0;
          stack0xffffffe8 = (float)&UNK_?;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_6,pTVar1,(MethodInfo *)0x0);
          puStack_3 = (undefined *)pVVar2->x;
          unique0x0000a404 = pVVar2->y;
          fVar7 = pVVar2->z;
          (this->fields).lookAtToCamDir.x = (float)pTVar1 - (float)puStack_3;
          (this->fields).lookAtToCamDir.y = fVar5 - unique0x0000a404;
          (this->fields).lookAtToCamDir.z = fVar4 - fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    (&(this->fields).lookAtToCamDir,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          pTVar1 = (this->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               (&VStack_6,pTVar1,(MethodInfo *)0x0);
            uVar8 = pVVar2->x;
            uVar9 = pVVar2->y;
            uVar10 = (this->fields).lookAtToCamDir.x;
            uVar11 = (this->fields).lookAtToCamDir.y;
            fVar4 = (this->fields).baseDistanceFromLookAt;
            puStack_3 = (undefined *)((float)uVar8 + (float)uVar10 * fVar4);
            pAStack12 =
                 (AirCraftCamera *)(pVVar2->z + (this->fields).lookAtToCamDir.z * fVar4);
            fVar4 = (float)uVar9 + (float)uVar11 * fVar4;
            stack0xffffffe8 = fVar4;
            if (this_00 != (Transform *)0x0) {
              value.y = fVar4;
              value.x = (float)puStack_3;
              value.z = (float)pAStack12;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_00,value,(MethodInfo *)0x0);
              pAStack12 = this;
              (*(code *)(this->klass->vtable).CameraCollision.method)();
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
                        ((MVPlaymodeCameraBase *)this,(MVCameraController *)&UNK_?,
                         (ProtectedTransform *)this_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateCameraPosition() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_UpdateCameraPosition
               (AirCraftCamera *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).lookAt;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    VStack_2.x = (this->fields).lookAtToCamDir.x;
    VStack_2.y = (this->fields).lookAtToCamDir.y;
    VStack_2.z = (this->fields).lookAtToCamDir.z;
    fVar5 = (this->fields).baseDistanceFromLookAt;
    if (this_01 != (Transform *)0x0) {
      value.y = (float)uVar4 + VStack_2.y * fVar5;
      value.x = (float)uVar3 + VStack_2.x * fVar5;
      value.z = pVVar1->z + VStack_2.z * fVar5;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AirCraftCamera() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera__ctor
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).initialLocalCamPosition.x = (pVVar1->zeroVector).x;
  (this->fields).initialLocalCamPosition.y = fVar2;
  (this->fields).initialLocalCamPosition.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).lookAtToCamDir.x = (pVVar1->zeroVector).x;
  (this->fields).lookAtToCamDir.y = fVar2;
  (this->fields).lookAtToCamDir.z = fVar3;
  MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor((MVPlaymodeCameraBase *)this,(MethodInfo *)0x0);
  return;
}

