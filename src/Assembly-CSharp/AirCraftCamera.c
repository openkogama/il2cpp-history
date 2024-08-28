
/* Void CameraCollision() */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_CameraCollision
               (AirCraftCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    ppHStack_1 = &TypeInfo__System__Collections__Generic__HashSet<int>;
    func_?();
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    in_stack_2 = &UNK_?;
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  ppHStack_1 = (HashSet_1_System_Int32___Class **)auStack_3;
  func_?();
  pTVar4 = (this->fields).lookAt;
  if (pTVar4 != (Transform *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar4,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      puVar5 = &UNK_?;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)auStack_7,pTVar4,(MethodInfo *)0x0);
      VStack_8.x = pVVar6->x;
      VStack_8.y = pVVar6->y;
      VStack_8.z = pVVar6->z;
      uStack_9 = CONCAT44(uStack_9._4_4_,VStack_8.z);
      puVar10 = &UNK_?;
      auStack_11._0_8_ = VStack_8._0_8_;
      pAVar12 = this;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_13 + 4),pTVar4,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar6->x;
        uStack_9._4_4_ = pVVar6->y;
        auStack_13._0_4_ = pVVar6->z;
        fStack_14 = fStack_15 - (float)(undefined4)uStack_9;
        fStack_16 = fStack_17 - (float)uStack_9._4_4_;
        auStack_11._0_4_ = fStack_18 - (float)auStack_13._0_4_;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar4 = (this->fields).lookAt;
        if ((pTVar4 != (Transform *)0x0) &&
           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar4,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
        {
          uStack_19._0_4_ = (this->fields).lookAtToCamDir.x;
          uStack_19._4_4_ = (this->fields).lookAtToCamDir.y;
          fStack_15 = (this->fields).lookAtToCamDir.z;
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)auStack_13,pTVar4,(MethodInfo *)0x0);
          uVar20 = 0;
          uStack_21._0_4_ = pVVar6->x;
          uStack_21._4_4_ = pVVar6->y;
          fStack_22 = pVVar6->z;
          pfVar23 = &fStack_17;
          pVVar6 = &VStack_8;
          puVar24 = (undefined8 *)func_?();
          uStack_25 = *puVar24;
          uStack_26 = *(undefined4 *)(puVar24 + 1);
          iVar27 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Default,(MethodInfo *)0x0);
          auStack_11._0_4_ = (this->fields)._._.cameraRadius;
          puVar28 = &UNK_?;
          pHVar29 = TypeInfo__System__Collections__Generic__HashSet<int>;
          this_00 = (HashSet_1_System_Int32_ *)func_?();
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32___ctor
                    (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          method_00 = (MethodInfo *)0x0;
          layerMask = 1 << ((byte)iVar27 & 0x1f);
          dVar30 = (double)((float)puVar5 * (float)puVar5 + (float)puVar10 * (float)puVar10 +
                           (float)pAVar12 * (float)pAVar12);
          if (dVar30 < 0.0) {
            func_?();
          }
          else {
            dVar30 = SQRT(dVar30);
          }
          ray.m_Direction.z = (float)auStack_7._0_4_;
          ray.m_Direction.y = (float)uVar20;
          ray.m_Origin.y = (float)pHVar29;
          ray.m_Origin.x = (float)puVar28;
          ray.m_Origin.z = (float)pVVar6;
          ray.m_Direction.x = (float)pfVar23;
          bVar31 = CollisionDetection::CollisionDetection_MVSphereCast
                            (ray,(float)in_stack_2,(VoxelHit *)(auStack_7 + 4),(float)dVar30
                             ,this_00,layerMask,method_00);
          if (bVar31 == 0) {
            return;
          }
          uStack_9 = 0;
          auStack_13._0_4_ = 0.0;
          auStack_7._4_4_ = 0.0;
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&ppHStack_1,pTVar4,(MethodInfo *)0x0);
            uVar32 = pVVar6->x;
            uVar33 = pVVar6->y;
            uVar34 = (this->fields).lookAtToCamDir.x;
            uVar35 = (this->fields).lookAtToCamDir.y;
            point.y = (float)uVar20;
            point.x = (float)pfVar23;
            point.z = fStack_36;
            lineStart.z = fStack_17;
            lineStart.x = (float)(undefined4)uStack_19;
            lineStart.y = (float)uStack_19._4_4_;
            lineEnd.y = (float)uVar35 + (float)uVar33;
            lineEnd.x = (float)uVar34 + (float)uVar32;
            lineEnd.z = (this->fields).lookAtToCamDir.z + pVVar6->z;
            bVar31 = MathFunctions::MathFunctions_DistancePointLine_1
                              (point,lineStart,lineEnd,&fStack_37,&VStack_8,(MethodInfo *)0x0);
            if (bVar31 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
              VStack_8.x = (float)method;
              message = (Object *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0)
              ;
            }
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              value.z = fStack_38;
              value.x = (float)auStack_11._8_4_;
              value.y = (float)auStack_3;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar4,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AirCraftCamera::AirCraftCamera_Enter
               (AirCraftCamera *this,MVCameraController *camController,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&camController,this_00,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_InverseTransformPoint
                             ((Vector3 *)&stack0x00000014,pTVar1,*pVVar2,(MethodInfo *)0x0);
          fVar3 = pVVar2->y;
          fVar4 = pVVar2->z;
          (this->fields).initialLocalCamPosition.x = pVVar2->x;
          (this->fields).initialLocalCamPosition.y = fVar3;
          (this->fields).initialLocalCamPosition.z = fVar4;
          pTVar1 = (this->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            camController = (MVCameraController *)0x0;
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&uStack5,pTVar1,(MethodInfo *)0x0);
            camController = (MVCameraController *)0x0;
            uStack5._0_4_ = pVVar2->x;
            uStack5._4_4_ = pVVar2->y;
            in_stack_6 = pVVar2->z;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)((int)register0x00000010 + 0x50),pTVar1,
                                  (MethodInfo *)0x0);
              uStack7._0_4_ = pVVar2->x;
              uStack7._4_4_ = pVVar2->y;
              fStack8 = pVVar2->z;
              fStack9 = in_stack_10 - (float)(undefined4)uStack7;
              in_stack_6 = in_stack_11 - (float)uStack7._4_4_;
              fStack12 = in_stack_13 - fStack8;
              if (cRam_? == '\0') {
                ppMStack14 = &TypeInfo__System__Math;
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                ppMStack14 = (Math__Class **)TypeInfo__System__Math;
                func_?();
              }
              dVar15 = (double)(in_stack_6 * in_stack_6 +
                               fStack9 * fStack9 + fStack12 * fStack12);
              if (0.0 <= dVar15) {
                (this->fields).baseDistanceFromLookAt = (float)SQRT(dVar15);
                return;
              }
              func_?();
              (this->fields).baseDistanceFromLookAt = (float)dVar15;
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
                          ((Vector3 *)&stack0xffffffe4,pTVar1,
                           (this->fields).initialLocalCamPosition,(MethodInfo *)0x0);
      uVar3 = pVVar2->y;
      fVar4 = pVVar2->z;
      pTVar1 = (this->fields).lookAt;
      if (pTVar1 != (Transform *)0x0) {
        VStack_5.z = (float)&UNK_?;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_5,pTVar1,(MethodInfo *)0x0);
          uVar6 = pVVar2->x;
          uVar7 = pVVar2->y;
          fVar8 = pVVar2->z;
          pVVar2 = &(this->fields).lookAtToCamDir;
          pVVar2->x = 0.0 - (float)uVar6;
          pVVar2->y = (float)uVar3 - (float)uVar7;
          (this->fields).lookAtToCamDir.z = fVar4 - fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    (pVVar2,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          pTVar1 = (this->fields).lookAt;
          if (pTVar1 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_5,pTVar1,(MethodInfo *)0x0);
            uVar10 = pVVar9->x;
            uVar11 = pVVar9->y;
            uVar12 = pVVar2->x;
            uVar13 = pVVar2->y;
            fVar4 = (this->fields).baseDistanceFromLookAt;
            targetTransform_00 = (ProtectedTransform *)((float)uVar10 + (float)uVar12 * fVar4);
            if (this_00 != (Transform *)0x0) {
              value.y = (float)uVar11 + (float)uVar13 * fVar4;
              value.x = (float)targetTransform_00;
              value.z = pVVar9->z + (this->fields).lookAtToCamDir.z * fVar4;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_00,value,(MethodInfo *)0x0);
              AirCraftCamera_CameraCollision(this,(MethodInfo *)0x0);
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
                        ((MVPlaymodeCameraBase *)this,(MVCameraController *)this_00,
                         targetTransform_00,(MethodInfo *)0x0);
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
    uVar5 = (this->fields).lookAtToCamDir.x;
    uVar6 = (this->fields).lookAtToCamDir.y;
    fVar7 = (this->fields).baseDistanceFromLookAt;
    VStack_2.x = (float)uVar3 + (float)uVar5 * fVar7;
    VStack_2.y = (float)uVar4 + (float)uVar6 * fVar7;
    VStack_2.z = pVVar1->z + (this->fields).lookAtToCamDir.z * fVar7;
    if (this_01 != (Transform *)0x0) {
      value.y = VStack_2.y;
      value.x = VStack_2.x;
      value.z = VStack_2.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

