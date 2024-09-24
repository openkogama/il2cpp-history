
/* Void Awake() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Awake
               (PlaymodeCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffset.x;
  fVar2 = (this->fields).lookAtOffset.y;
  (this->fields).distance = (this->fields).distanceToAvatar;
  fVar3 = (this->fields).lookAtOffset.z;
  (this->fields).currentLookAtOffset.x = fVar1;
  (this->fields).currentLookAtOffset.y = fVar2;
  (this->fields).currentLookAtOffset.z = fVar3;
  return;
}


/* Void CameraCollision() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_CameraCollision
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  func_?(&uStack_1,0,0x48);
  pTVar2 = (this->fields).lookAtTransform;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff08,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    fVar5 = pVVar3->z;
    uVar6 = (this->fields).avatarHeadOffset.x;
    fVar7 = (float)uVar6 + (float)uVar4;
    puStack_8 = (undefined *)((this->fields).avatarHeadOffset.z + fVar5);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff44,pTVar2,(MethodInfo *)0x0);
      uVar9 = pVVar3->x;
      puStack_8 = (undefined *)((float)uVar9 - fStack_10);
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)&puStack_8,(MethodInfo *)0x0);
      fVar11 = fVar5;
      puVar12 = (undefined8 *)func_?(&stack0xffffff68,&stack0xffffff58);
      uVar13 = *(undefined4 *)(puVar12 + 1);
      fStack_14 = (float)*puVar12;
      fStack_10 = (float)((ulonglong)*puVar12 >> 0x20);
      iVar15 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Origin.y = fStack_14;
      ray.m_Origin.x = fVar11;
      ray.m_Origin.z = fStack_10;
      ray.m_Direction.x = (float)uVar13;
      ray.m_Direction.y = (float)uStack_1;
      ray.m_Direction.z = fStack_16;
      bVar17 = CollisionDetection::CollisionDetection_MVSphereCast
                         (ray,(this->fields)._._.cameraRadius,(VoxelHit *)&stack0xffffffd8,fVar5,
                          (this->fields).ignoreAvatarId,1 << ((byte)iVar15 & 0x1f),(MethodInfo *)0x0
                         );
      if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= in_stack_18) &&
         (bVar17 != 0)) {
        auStack_19 = (undefined1  [8])((ulonglong)(uint)auStack_19._4_4_ << 0x20);
        uStack_20 = 0;
        uStack_21 = 0;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&fStack_22,pTStack_23,(MethodInfo *)0x0);
        uVar24 = pVVar3->x;
        uVar25 = pVVar3->y;
        point.y = (float)uStack_26;
        point.x = fStack_16;
        point.z = in_stack_27;
        lineEnd.y = in_stack_28 + (float)uVar25;
        lineEnd.x = fStack_29 + (float)uVar24;
        lineEnd.z = fVar7 + pVVar3->z;
        bVar17 = MathFunctions::MathFunctions_DistancePointLine_1
                           (point,(Vector3)ZEXT812(0),lineEnd,(float *)((int)&uStack_20 + 4),
                            (Vector3 *)(auStack_19 + 4),(MethodInfo *)0x0);
        if (bVar17 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          auStack_19._4_4_ = in_stack_30;
          pOVar31 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar31,(MethodInfo *)0x0);
          fStack_32 = (this->fields).distance;
          pOVar31 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar31,(MethodInfo *)0x0);
        }
        fVar5 = (this->fields)._._.cameraRadius;
        if (fVar5 <= fStack_33) {
          fVar5 = 0.0;
        }
        else {
          dVar34 = (double)(fVar5 * fVar5 - fStack_33 * fStack_33);
          if (dVar34 < 0.0) {
            func_?();
            fVar5 = (float)dVar34;
          }
          else {
            fVar5 = (float)SQRT(dVar34);
          }
        }
        uStack_20 = CONCAT44((this->fields).distance,(undefined4)uStack_20);
        fStack_16 = unaff_retaddr - in_stack_35 * fVar5;
        value.y = unaff_EBP - in_stack_36 * fVar5;
        value.x = fStack_22 - in_stack_27 * fVar5;
        value.z = fStack_16;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTStack_37,value,(MethodInfo *)0x0);
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0x00000048,pTStack_37,(MethodInfo *)0x0);
        uVar38 = pVVar3->x;
        uVar39 = pVVar3->y;
        fStack_40 = fStack_41 - pVVar3->z;
        auStack_19 = (undefined1  [8])
                     CONCAT44(fStack_42 - (float)uVar39,in_stack_43 - (float)uVar38);
        pTStack_37 = (Transform *)fStack_40;
        fVar44 = (float10)func_?();
        uVar45 = (this->fields).currentLookAt.x;
        uVar46 = (this->fields).currentLookAt.y;
        fVar5 = (this->fields).currentLookAt.z;
        (this->fields).distance = (float)fVar44;
        fStack_47 = (float)fVar44 / fStack_47;
        fStack_41 = fStack_41 + fStack_47 * (fVar5 - fStack_41);
        fVar5 = in_stack_43 + fStack_47 * ((float)uVar45 - in_stack_43);
        fStack_42 = fStack_42 + fStack_47 * ((float)uVar46 - fStack_42);
        (this->fields).currentLookAt.x = fVar5;
        (this->fields).currentLookAt.y = fStack_42;
        (this->fields).actualLookAt.x = fVar5;
        (this->fields).actualLookAt.y = fStack_42;
        (this->fields).currentLookAt.z = fStack_41;
        (this->fields).actualLookAt.z = fStack_41;
      }
      return;
    }
  }
  func_?();
  pcVar48 = (code *)swi(3);
  (*pcVar48)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Enter
               (PlaymodeCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields).lookAtTransform = pTVar2;
    func_?(&(this->fields).lookAtTransform,pTVar2);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_02 != (MainCameraManager *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_02,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
        uStack_5._0_4_ = pVVar3->x;
        uStack_5._4_4_ = pVVar3->y;
        fVar6 = pVVar3->z;
        (this->fields).currentLookAt.x = (float)(undefined4)uStack_5;
        (this->fields).currentLookAt.y = uStack_5._4_4_;
        (this->fields).currentLookAt.z = fVar6;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          value.z = fVar6;
          value.x = (float)(undefined4)uStack_5;
          value.y = uStack_5._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_03,value,(MethodInfo *)0x0);
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_4,pTVar2,(MethodInfo *)0x0);
          fStack_8 = pQVar7->x;
          fStack_9 = pQVar7->y;
          uStack_5._0_4_ = pQVar7->z;
          uStack_5._4_4_ = pQVar7->w;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (this_03,*pQVar7,(MethodInfo *)0x0);
          pTVar2 = (this->fields).lookAtTransform;
          if (pTVar2 != (Transform *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar2,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 ((Vector3 *)(auStack_4 + 4),pTVar2,(MethodInfo *)0x0);
              this_01 = (this->fields).targetRot;
              fVar10 = pVVar3->y;
              fVar6 = pVVar3->z;
              (this->fields).prevLookAtTransformPos.x = pVVar3->x;
              (this->fields).prevLookAtTransformPos.y = fVar10;
              (this->fields).prevLookAtTransformPos.z = fVar6;
              if (this_01 != (TargetRotation *)0x0) {
                q.y = fStack_9;
                q.x = fStack_8;
                q.z = (float)(undefined4)uStack_5;
                q.w = uStack_5._4_4_;
                TargetRotation::TargetRotation_SetTargetRotation_2(this_01,q,(MethodInfo *)0x0);
                (this->fields).distance = (this->fields).distanceToAvatar;
                this_04 = (HashSet_1_System_Int32_ *)
                          func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                HashSet_1_System_Int32___ctor
                          (this_04,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__
                          );
                pMVar1 = (this->fields).avatarLocal;
                if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_04 != (HashSet_1_System_Int32_ *)0x0))
                {
                  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                  HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                            (this_04,(pMVar1->fields)._._._._.id,
                             MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
                  (this->fields).ignoreAvatarId = this_04;
                  func_?(&(this->fields).ignoreAvatarId,this_04);
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Initialize
               (PlaymodeCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCameraDistTransparency);
    cRam_? = '\x01';
  }
  (this->fields).avatarLocal = avatarLocal;
  func_?(&(this->fields).avatarLocal,avatarLocal);
  camMoveTowardsOffset = (this->fields).avatarHeadOffset;
  this_00 = (AvatarCameraDistTransparency *)func_?(TypeInfo__AvatarCameraDistTransparency);
  AvatarCameraDistTransparency::AvatarCameraDistTransparency__ctor
            (this_00,camMoveTowardsOffset,4.0,1.0,(MethodInfo *)0x0);
  (this->fields).avatarCameraDistTransparency = this_00;
  func_?(&(this->fields).avatarCameraDistTransparency,this_00);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_Reset
               (PlaymodeCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffe0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      fVar7 = 0.0;
      value.y = fVar4;
      value.x = fVar3;
      value.z = fVar5;
      value.w = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar1,value,(MethodInfo *)0x0);
      this_00 = (this->fields).targetRot;
      if (this_00 != (TargetRotation *)0x0) {
        q.y = fVar5;
        q.x = fVar4;
        q.z = fVar6;
        q.w = fVar7;
        TargetRotation::TargetRotation_SetTargetRotation_2(this_00,q,(MethodInfo *)0x0);
        pTVar1 = (this->fields).lookAtTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          fVar3 = pVVar8->z;
          uVar11 = (this->fields).avatarHeadOffset.x;
          uVar12 = (this->fields).avatarHeadOffset.y;
          fVar4 = (this->fields).avatarHeadOffset.z;
          (this->fields).currentLookAt.x = (float)uVar9 + (float)uVar11;
          (this->fields).currentLookAt.y = (float)uVar12 + (float)uVar10;
          (this->fields).currentLookAt.z = fVar4 + fVar3;
          pPVar13 = (this->fields).smoothLookAt;
          if (pPVar13 != (PlaymodeCamera_SmoothLookAt *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_01 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)
                      (pPVar13->fields).prevVelocities;
            if (this_01 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::
              Queue`1[GameCoinStringRenderer+PriceTagString]::
              Queue_1_GameCoinStringRenderer_PriceTagString__Clear
                        (this_01,
                         MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Clear__
                        );
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


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdateCamera
               (PlaymodeCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  lVar1 = (ulonglong)(uint)(this->fields).height << 0x20;
  (this->fields).avatarHeadOffset.x = (float)(int)lVar1;
  (this->fields).avatarHeadOffset.y = (float)(int)((ulonglong)lVar1 >> 0x20);
  (this->fields).avatarHeadOffset.z = 0.0;
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa0,this_02,(MethodInfo *)0x0);
    this_00 = (this->fields).targetRot;
    if (this_00 != (TargetRotation *)0x0) {
      pQVar2 = TargetRotation::TargetRotation_GetLerpRotation
                          ((Quaternion *)&stack0xffffffb0,this_00,*pQVar2,(MethodInfo *)0x0);
      fVar3 = pQVar2->x;
      fVar4 = pQVar2->y;
      fVar5 = pQVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar2,(MethodInfo *)0x0);
      fVar6 = (this->fields).distance;
      fVar7 = (this->fields).targetDistanceStrength;
      fVar8 = (this->fields).distanceToAvatar;
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar9 = fVar9 * fVar7;
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      else if (_UNK_? < fVar9) {
        fVar9 = _UNK_?;
      }
      (this->fields).distance = (fVar8 - fVar6) * fVar9 + fVar6;
      PlaymodeCamera_UpdatePosition(this,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).CameraCollision.method)();
      fVar10 = (float)((uint)((this->fields).actualLookAt.y - (this->fields).lookAtPos.y) &
                      _UNK_?);
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffb4,this_02,(MethodInfo *)0x0);
      uVar12 = pVVar11->x;
      uVar13 = pVVar11->y;
      fVar6 = pVVar11->z;
      uVar14 = (this->fields).currentLookAt.x;
      uVar15 = (this->fields).currentLookAt.y;
      uVar16 = pVVar11->x;
      uVar17 = pVVar11->y;
      uVar18 = (this->fields).lookAtPos.x;
      uVar19 = (this->fields).lookAtPos.y;
      uVar20 = pVVar11->x;
      uVar21 = pVVar11->y;
      fromDirection.y = (float)uVar15 - (float)uVar17;
      fromDirection.x = (float)uVar14 - (float)uVar16;
      fromDirection.z = (this->fields).currentLookAt.z - pVVar11->z;
      toDirection.y = (float)uVar19 - (float)uVar21;
      toDirection.x = (float)uVar18 - (float)uVar20;
      toDirection.z = (this->fields).lookAtPos.z - pVVar11->z;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                          ((Quaternion *)&stack0xffffffb0,fromDirection,toDirection,
                           (MethodInfo *)0x0);
      fVar7 = pQVar2->x;
      fVar8 = pQVar2->y;
      fVar9 = pQVar2->z;
      fVar22 = pQVar2->w;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pQVar23 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar24 = (pQVar23->identityQuaternion).x;
      fVar25 = (pQVar23->identityQuaternion).y;
      fVar26 = (pQVar23->identityQuaternion).z;
      fVar27 = (pQVar23->identityQuaternion).w;
      fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      a.y = fVar25;
      a.x = fVar24;
      a.z = fVar26;
      a.w = fVar27;
      b.y = fVar8;
      b.x = fVar7;
      b.z = fVar9;
      b.w = fVar22;
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffb0,a,b,
                           (this->fields).followRotationSpeed * fVar28 * fVar10 * fVar10,
                           (MethodInfo *)0x0);
      fVar7 = pQVar2->x;
      fVar8 = pQVar2->y;
      fVar9 = pQVar2->z;
      fVar22 = pQVar2->w;
      uVar29 = (this->fields)._.shakeOffset.x;
      uVar30 = (this->fields)._.shakeOffset.y;
      if (targetTransform != (ProtectedTransform *)0x0) {
        value.z = fVar6 + (this->fields)._.shakeOffset.z;
        value.x = (float)uVar12 + (float)uVar29;
        value.y = (float)uVar13 + (float)uVar30;
        ProtectedTransform::ProtectedTransform_set_position(targetTransform,value,(MethodInfo *)0x0)
        ;
        value_00.y = (fVar4 * fVar22 + fVar8 * 3.2420906e-29 + fVar9 * fVar3) - fVar5 * fVar7;
        value_00.x = (fVar22 * fVar3 + fVar7 * 3.2420906e-29 + fVar8 * fVar5) - fVar9 * fVar4;
        value_00.z = (fVar5 * fVar22 + fVar9 * 3.2420906e-29 + fVar4 * fVar7) - fVar8 * fVar3;
        value_00.w = ((fVar22 * 3.2420906e-29 - fVar3 * fVar7) - fVar4 * fVar8) -
                     fVar9 * fVar5;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,value_00,(MethodInfo *)0x0);
        this_01 = (this->fields).avatarCameraDistTransparency;
        if (this_01 != (AvatarCameraDistTransparency *)0x0) {
          AvatarCameraDistTransparency::AvatarCameraDistTransparency_Update
                    (this_01,(this->fields).avatarLocal,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera_UpdatePosition
               (PlaymodeCamera *this,MethodInfo *method)

{
  _fStack_8 = CONCAT44(unaff_EBP,fStack_1);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pTVar2 = this_00;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)auStack_4,this_00,(MethodInfo *)0x0);
    uVar5 = pVVar3->x;
    uVar6 = pVVar3->y;
    fStack_7 = pVVar3->z;
    pTVar8 = (this->fields).lookAtTransform;
    fStack_9 = (float)uVar5;
    fStack_10 = (float)uVar6;
    if (pTVar8 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)auStack_11,pTVar8,(MethodInfo *)0x0);
      auStack_12._0_4_ = pVVar3->x;
      auStack_12._4_4_ = pVVar3->y;
      fStack_13 = pVVar3->z;
      uVar14 = (this->fields).prevLookAtTransformPos.x;
      uVar15 = (this->fields).prevLookAtTransformPos.y;
      fStack_10 = (this->fields).prevLookAtTransformPos.z;
      fVar16 = fStack_17 + ((float)auStack_12._4_4_ - (float)uVar15);
      fVar18 = (float)auStack_4._0_4_ + (fStack_13 - fStack_10);
      fVar19 = (float)((ulonglong)_fStack_8 >> 0x20);
      _fStack_8 = CONCAT44(fVar19,fVar18);
      value_00.y = fVar16;
      value_00.x = fStack_20 + ((float)auStack_12._0_4_ - (float)uVar14);
      value_00.z = fVar18;
      fStack_21 = (float)uVar14;
      fStack_9 = (float)uVar15;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value_00,(MethodInfo *)0x0);
      fVar22 = (this->fields).distanceToAvatar;
      fVar23 = 0.0;
      fStack_24 = 0.0;
      _fStack_8 = 0;
      if (fVar22 != 0.0) {
        fVar23 = (this->fields).distance / fVar22;
      }
      uStack_25 = CONCAT44(fVar23 * (this->fields).lookAtScaleCorrection,(undefined4)uStack_25);
      if (cRam_? == '\0') {
        uStack_26._0_4_ = (float)&TypeInfo__UnityEngine__Quaternion;
        func_?();
        cRam_? = '\x01';
      }
      uStack_26 = uStack_26 & 0xffffffff00000000;
      pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0x00000014,this_00,(MethodInfo *)0x0);
      uStack_26 = uStack_26 & 0xffffffff00000000;
      in_stack_28 = pQVar27->x;
      in_stack_29 = pQVar27->y;
      in_stack_30 = pQVar27->z;
      in_stack_31 = pQVar27->w;
      puVar32 = &stack0x00000010;
      iVar33 = func_?(puVar32,&stack0x00000020);
      fStack_34 = 0.0;
      euler.y = *(float *)(iVar33 + 4) * _UNK_?;
      euler.x = (float)uStack_26;
      euler.z = 0.0;
      pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad((Quaternion *)auStack_12,euler,(MethodInfo *)0x0);
      fStack_9 = pQVar27->x;
      fStack_10 = pQVar27->y;
      fStack_7 = pQVar27->z;
      fStack_20 = pQVar27->w;
      pTVar8 = (this->fields).lookAtTransform;
      if (pTVar8 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)((int)register0x00000010 + -0x6c),pTVar8,(MethodInfo *)0x0)
        ;
        uVar35._0_4_ = pVVar3->x;
        uVar35._4_4_ = pVVar3->y;
        fVar22 = pVVar3->z;
        uStack_26._0_4_ = (this->fields).avatarHeadOffset.x;
        uStack_26._4_4_ = (this->fields).avatarHeadOffset.y;
        VStack_36.y = (this->fields).avatarHeadOffset.z;
        uStack_25._0_4_ = (this->fields).currentLookAtOffset.x;
        uStack_25._4_4_ = (this->fields).currentLookAtOffset.y;
        fStack_34 = VStack_36.y + (this->fields).currentLookAtOffset.z * (float)pTVar2;
        rotation.y = fStack_17;
        rotation.x = fStack_20;
        rotation.z = (float)auStack_4._0_4_;
        rotation.w = (float)auStack_4._4_4_;
        point.y = uStack_26._4_4_ + (float)uStack_25._4_4_ * (float)pTVar2;
        point.x = (float)uStack_26 + (float)(undefined4)uStack_25 * (float)pTVar2;
        point.z = fStack_34;
        auStack_12 = (undefined1  [8])uVar35;
        fStack_13 = fVar22;
        fStack_21 = (float)uVar35;
        fStack_9 = uVar35._4_4_;
        fStack_10 = fVar22;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&stack0xffffff90,rotation,point,(MethodInfo *)0x0);
        uVar37 = pVVar3->x;
        uVar38 = pVVar3->y;
        fStack_7 = pVVar3->z;
        fVar23 = fStack_7 + (float)auStack_4._4_4_;
        auStack_4._4_4_ = fVar23;
        pMVar39 = (this->fields).avatarLocal;
        (this->fields).lookAtPos.x = (float)uVar37 + fStack_17;
        (this->fields).lookAtPos.y = (float)uVar38 + (float)auStack_4._0_4_;
        (this->fields).currentLookAt.x = (float)uVar37 + fStack_17;
        (this->fields).currentLookAt.y = (float)uVar38 + (float)auStack_4._0_4_;
        (this->fields).lookAtPos.z = fVar23;
        (this->fields).currentLookAt.z = fVar23;
        uStack_26._4_4_ = (float)(this->fields).smoothLookAt;
        fStack_9 = (float)uVar37;
        fStack_10 = (float)uVar38;
        if (pMVar39 != (MVAvatarLocal *)0x0) {
          pVVar3 = (Vector3 *)
                    (*(code *)(pMVar39->klass->vtable).get_VelocityRelative.method)
                              (&fStack_17,pMVar39,
                               (pMVar39->klass->vtable).get_VelocityAbsolute.methodPtr,fVar16,fVar18
                               ,fVar22);
          if ((PlaymodeCamera_SmoothLookAt *)uStack_26._4_4_ != (PlaymodeCamera_SmoothLookAt *)0x0)
          {
            pVVar3 = PlaymodeCamera+SmoothLookAt::PlaymodeCamera_SmoothLookAt_GetCurrentLookAt
                                ((Vector3 *)(auStack_12 + 4),
                                 (PlaymodeCamera_SmoothLookAt *)uStack_26._4_4_,*pVVar3,
                                 (MethodInfo *)0x0);
            uVar40 = _fStack_8;
            uVar41 = (this->fields).currentLookAt.x;
            uVar42 = (this->fields).currentLookAt.y;
            auStack_4._4_4_ = pVVar3->x;
            fStack_43 = pVVar3->y;
            auStack_11._0_4_ = pVVar3->z;
            fVar22 = (this->fields).currentLookAt.z - pVVar3->z;
            (this->fields).currentLookAt.x = (float)uVar41 - (float)auStack_4._4_4_;
            (this->fields).currentLookAt.y = (float)uVar42 - fStack_43;
            uVar44 = (this->fields).avatarHeadOffset.x;
            uVar45 = (this->fields).avatarHeadOffset.y;
            fVar19 = (float)((ulonglong)_fStack_8 >> 0x20);
            (this->fields).currentLookAt.z = fVar22;
            fStack_34 = (float)this + (this->fields).avatarHeadOffset.z;
            uStack_25 = CONCAT44((float)uVar45 + 0.0,fVar19 + (float)uVar44);
            fStack_24 = (fVar22 - fStack_34) * VStack_36.z;
            fVar19 = (((float)uVar41 - (float)auStack_4._4_4_) - (fVar19 + (float)uVar44)) *
                     VStack_36.z;
            VStack_36.y = (((float)uVar42 - fStack_43) - ((float)uVar45 + 0.0)) * VStack_36.z;
            _method = CONCAT44(fVar19,method);
            in_stack_46 = 0.0;
            in_stack_47 = 0.0;
            in_stack_48 = 0.0;
            register0x00001200 = CONCAT44(VStack_36.y,fVar19);
            VStack_36.z = fStack_24;
            _fStack_8 = uVar40;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)(auStack_4 + 4),this_00,(MethodInfo *)0x0);
            uVar49 = pVVar3->x;
            uVar50 = pVVar3->y;
            in_stack_46 = pVVar3->z - (float)auStack_12._4_4_;
            stack0xffffffec = CONCAT44(in_stack_46,auStack_11._8_4_);
            pfVar51 = &fStack_1;
            fVar52 = 0.0;
            _method = CONCAT44((float)uVar50 - (float)auStack_12._0_4_,(float)uVar49 - fStack_53);
            fVar54 = (float10)func_?();
            fVar55 = 0.0;
            pfVar56 = &fStack_1;
            puVar57 = auStack_11 + 4;
            fStack_13 = (float)fVar54;
            puVar58 = (undefined8 *)func_?();
            _fStack_8 = *puVar58;
            puVar58 = (undefined8 *)func_?(auStack_11 + 4,&method,0);
            fStack_7 = *(float *)(puVar58 + 1);
            fStack_9 = (float)*puVar58;
            fStack_10 = (float)((ulonglong)*puVar58 >> 0x20);
            fVar22 = (this->fields).distance;
            fVar23 = (float)puVar57 + (float)pfVar51;
            fVar59 = fVar22 * fVar22 + fVar16 * fVar16;
            fVar18 = (float)pfVar56 + fVar52;
            fStack_17 = fStack_17 + fVar55;
            (this->fields).actualLookAt.x = fStack_17;
            (this->fields).actualLookAt.y = fVar23;
            (this->fields).currentLookAt.x = fStack_17;
            (this->fields).currentLookAt.y = fVar23;
            (this->fields).actualLookAt.z = fVar18;
            (this->fields).currentLookAt.z = fVar18;
            fStack_53 = fVar18;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)((int)register0x00000010 + -0x6c),this_00,
                                 (MethodInfo *)0x0);
            auStack_12._0_4_ = pVVar3->x;
            auStack_12._4_4_ = pVVar3->y;
            fStack_13 = pVVar3->z;
            dVar60 = (double)((float)puVar32 -
                             (fStack_17 * fStack_9 + fStack_20 * fStack_21 +
                             (float)auStack_4._0_4_ * fStack_10) *
                             (uVar35._4_4_ + uVar35._4_4_) * (float)uVar35);
            if (dVar60 < 0.0) {
              func_?(fVar23,fVar18);
            }
            else {
              dVar60 = SQRT(dVar60);
            }
            fVar18 = (float)dVar60;
            auStack_4._0_4_ = fVar52 - fStack_13 * fVar18;
            value.y = (float)pfVar51 - (float)auStack_12._4_4_ * fVar18;
            value.x = fStack_43 - (float)auStack_12._0_4_ * fVar18;
            value.z = (float)auStack_4._0_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            pMVar39 = (this->fields).avatarLocal;
            if (pMVar39 != (MVAvatarLocal *)0x0) {
              puVar58 = (undefined8 *)
                        (*(code *)(pMVar39->klass->vtable).get_VelocityRelative.method)
                                  (&fStack_17,pMVar39,
                                   (pMVar39->klass->vtable).get_VelocityAbsolute.methodPtr,fVar16,
                                   fVar22,fVar59);
              auStack_11._0_8_ = *puVar58;
              stack0xffffffec = CONCAT44(fStack_61,*(undefined4 *)(puVar58 + 1));
              fVar54 = (float10)func_?(auStack_11,0);
              VStack_36.z = (float)fVar54;
              MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
                        ((MVPlaymodeCameraBase *)this,VStack_36.z,(MethodInfo *)0x0);
              (this->fields).prevLookAtTransformPos.x = (float)auStack_12._0_4_;
              (this->fields).prevLookAtTransformPos.y = (float)auStack_12._4_4_;
              (this->fields).prevLookAtTransformPos.z = fStack_53;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar62 = (code *)swi(3);
  (*pcVar62)();
  return;
}


/* PlaymodeCamera() */

void Assembly-CSharp.dll::PlaymodeCamera::PlaymodeCamera__ctor
               (PlaymodeCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlaymodeCamera__SmoothLookAt);
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).shoulderOffset.x = (float)(int)uVar2;
  (this->fields).shoulderOffset.y = (float)(int)(uVar2 >> 0x20);
  (this->fields).avatarHeadOffset.x = (float)(int)((ulonglong)uVar1 << 0x20);
  uVar3 = _UNK_?;
  (this->fields).avatarHeadOffset.y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields).shoulderOffset.z = -0.2;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).lookAtOffset.x = (float)(int)((ulonglong)uVar3 << 0x20);
  (this->fields).lookAtOffset.y = (float)(int)(((ulonglong)uVar3 << 0x20) >> 0x20);
  (this->fields).distanceToAvatar = 5.0;
  (this->fields).height = 1.5;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  (this->fields).targetDistanceStrength = 2.0;
  (this->fields).followRotationSpeed = 2.0;
  (this->fields).lookAtOffset.z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).currentLookAt.x = (pVVar4->zeroVector).x;
  (this->fields).currentLookAt.y = fVar5;
  (this->fields).currentLookAt.z = fVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).actualLookAt.x = (pVVar4->zeroVector).x;
  (this->fields).actualLookAt.y = fVar5;
  (this->fields).actualLookAt.z = fVar6;
  (this->fields).distance = 2.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).lookAtPos.x = (pVVar4->zeroVector).x;
  (this->fields).lookAtPos.y = fVar5;
  (this->fields).lookAtPos.z = fVar6;
  (this->fields).mouseSensitivity = 0.25;
  (this->fields).lookAtScaleCorrection = 1.0;
  value = (PlaymodeCamera_SmoothLookAt *)func_?(TypeInfo__PlaymodeCamera__SmoothLookAt);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__)
    ;
    func_?(&TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  (value->fields).samleLength = 5;
  this_00 = (Queue_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>);
  System.Core.dll::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder`1[System::Object]::
  ReadOnlyCollectionBuilder_1_System_Object___ctor
            ((ReadOnlyCollectionBuilder_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<UnityEngine::Vector3>__Queue__);
  method_00 = (MethodInfo *)&(value->fields).prevVelocities;
  (value->fields).prevVelocities = this_00;
  func_?(method_00,this_00);
  (value->fields).maxMag = 30.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields).smoothLookAt = value;
  func_?(&(this->fields).smoothLookAt,value);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields).prevLookAtTransformPos.x = (pVVar4->zeroVector).x;
  (this->fields).prevLookAtTransformPos.y = fVar5;
  (this->fields).prevLookAtTransformPos.z = fVar6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar4->zeroVector).y;
  fVar6 = (pVVar4->zeroVector).z;
  (this->fields)._.shakeOffset.x = (pVVar4->zeroVector).x;
  (this->fields)._.shakeOffset.y = fVar5;
  (this->fields)._.shakeOffset.z = fVar6;
  (this->fields)._.shakeMaxFactor = 1.0;
  (this->fields)._.shakeTimeFactor = 6.3;
  (this->fields)._.shakeStrengthFadeSpeed = 1.0;
  (this->fields)._._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

