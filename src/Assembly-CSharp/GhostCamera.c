
/* Void CameraCollision() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_CameraCollision
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_1 = &StringLiteral_Not_within_line_segment;
    in_stack_2 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  auStack_3 = (undefined1  [8])0x0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  uStack_6 = 0;
  func_?();
  pTVar7 = (this->fields).lookAtTransform;
  if (pTVar7 != (Transform *)0x0) {
    puVar8 = &UNK_?;
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)(auStack_10 + 4),pTVar7,(MethodInfo *)0x0);
    uVar11 = pVVar9->x;
    uVar12 = pVVar9->y;
    pCStack_13 = (Collider *)pVVar9->z;
    uVar14 = (this->fields).avatarHeadOffset.x;
    uVar15 = (this->fields).avatarHeadOffset.y;
    auStack_16._24_4_ = (float)uVar14 + (float)uVar11;
    auStack_16._20_4_ = (this->fields).avatarHeadOffset.z;
    fStack_17 = (float)uVar15 + (float)uVar12;
    fStack_18 = (float)auStack_16._20_4_ + (float)pCStack_13;
    auStack_19._8_4_ = fStack_18;
    fVar20 = 0.0;
    puVar21 = &UNK_?;
    pGVar22 = this;
    auStack_16._12_4_ = uVar14;
    auStack_16._16_4_ = uVar15;
    pCStack_23 = (Cube *)uVar11;
    fStack_24 = (float)uVar12;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)(auStack_16 + 4),pTVar7,(MethodInfo *)0x0);
      uVar25 = pVVar9->x;
      uVar26 = pVVar9->y;
      fStack_27 = (float)uVar25 - (float)pCStack_23;
      fStack_18 = (float)uVar26 - fStack_24;
      auStack_16._24_4_ = pVVar9->z - (float)pTStack_28;
      fVar29 = 0.0;
      fStack_30 = (float)auStack_16._24_4_;
      fVar31 = (float10)func_?();
      fVar32 = (float)fVar31;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)&stack0xfffffe58,(MethodInfo *)0x0);
      origin.y = (float)uStack_33;
      origin.x = fVar32;
      origin.z = in_stack_34;
      direction.y = (float)in_stack_35;
      direction.x = in_stack_36;
      direction.z = in_stack_37;
      UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                ((Ray *)((int)&uStack_38 + 4),origin,direction,(MethodInfo *)0x0);
      iVar39 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Direction.z = fVar20;
      ray.m_Direction.y = (float)pGVar22;
      ray.m_Origin.y = (float)in_stack_1;
      ray.m_Origin.x = (float)in_stack_2;
      ray.m_Origin.z = (float)puVar8;
      ray.m_Direction.x = (float)puVar21;
      bVar40 = CollisionDetection::CollisionDetection_MVSphereCast
                         (ray,(this->fields)._.cameraRadius,(VoxelHit *)auStack_16,in_stack_41
                          ,(this->fields).ignoreAvatarId,1 << ((byte)iVar39 & 0x1f),
                          (MethodInfo *)0x0);
      pTVar7 = pTStack_28;
      if (((float)auStack_3._0_4_ < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) ||
         (bVar40 == 0)) {
        return;
      }
      uVar42 = 0;
      fStack_43 = 0.0;
      uVar44 = 0;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff10,this_00,(MethodInfo *)0x0);
        uStack_38._0_4_ = pVVar9->x;
        uStack_38._4_4_ = pVVar9->y;
        fStack_45 = in_stack_46 + pVVar9->z;
        point.y = (float)uVar44;
        point.x = (float)uVar42;
        point.z = (float)pTVar7;
        lineStart.y = fStack_24;
        lineStart.x = (float)pCStack_23;
        lineStart.z = fStack_47;
        lineEnd.y = (float)puStack_48 + (float)uStack_38._4_4_;
        lineEnd.x = fStack_43 + (float)(undefined4)uStack_38;
        lineEnd.z = fStack_45;
        bVar40 = MathFunctions::MathFunctions_DistancePointLine_1
                           (point,lineStart,lineEnd,(float *)&stack0xffffff08,
                            (Vector3 *)&stack0xfffffefc,(MethodInfo *)0x0);
        if (bVar40 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          auStack_16._8_4_ = fStack_49;
          pOVar50 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar50,(MethodInfo *)0x0);
          auStack_16._20_4_ = (this->fields).distance;
          pOVar50 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar50,(MethodInfo *)0x0);
        }
        fVar20 = (this->fields)._.cameraRadius;
        if (fStack_27 < fVar20) {
          dVar51 = (double)(fVar20 * fVar20 - fStack_27 * fStack_27);
          if (dVar51 < 0.0) {
            func_?();
          }
          else {
            dVar51 = SQRT(dVar51);
          }
          fVar29 = (float)dVar51;
        }
        auStack_16._0_4_ = (this->fields).distance;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        pRVar52 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Current
                            ((Regex_CachedCodeEntryKey *)auStack_10,
                             (Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                              *)auStack_19,(MethodInfo *)0x0);
        uVar53 = pRVar52->_options;
        uVar54 = pRVar52->_cultureKey;
        if (pTVar7 != (Transform *)0x0) {
          value.y = fStack_47 - (float)uVar54 * (float)auStack_16._12_4_;
          value.x = fVar29 - (float)uVar53 * (float)auStack_16._12_4_;
          value.z = (float)auStack_16._0_4_ - (float)pRVar52->_pattern * (float)auStack_16._12_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar7,value,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)(auStack_3 + 4),pTVar7,(MethodInfo *)0x0);
            uVar55 = pVVar9->x;
            uVar56 = pVVar9->y;
            auStack_16._24_4_ = (float)pTStack_28 - pVVar9->z;
            auStack_3 = (undefined1  [8])
                         CONCAT44(fStack_24 - (float)uVar56,(float)pCStack_23 - (float)uVar55);
            auStack_16._16_4_ = uVar55;
            auStack_16._20_4_ = uVar56;
            fStack_4 = (float)auStack_16._24_4_;
            fVar31 = (float10)func_?();
            uVar57 = (this->fields).currentLookAt.x;
            uVar58 = (this->fields).currentLookAt.y;
            fVar20 = (this->fields).currentLookAt.z;
            (this->fields).distance = (float)fVar31;
            fVar32 = (float)fVar31 / (float)auStack_10._0_4_;
            (this->fields).currentLookAt.x =
                 ((float)uVar57 - (float)pCStack_23) * fVar32 + (float)pCStack_23;
            (this->fields).currentLookAt.y = ((float)uVar58 - fStack_24) * fVar32 + fStack_24;
            (this->fields).currentLookAt.z =
                 (fVar20 - (float)pTStack_28) * fVar32 + (float)pTStack_28;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar59 = (code *)swi(3);
  (*pcVar59)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Enter
               (GhostCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields).avatarLocal;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                ((HashSet_1_System_Object_ *)this_00,(Object *)(pMVar1->fields)._._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_00;
      func_?(&(this->fields).ignoreAvatarId,this_00);
      pTVar2 = (this->fields).lookAtTransform;
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,pTVar2,(MethodInfo *)0x0);
        QStack_5.y = pVVar3->x;
        QStack_5.z = pVVar3->y;
        VStack_4.x = (this->fields).avatarHeadOffset.x;
        VStack_4.y = (this->fields).avatarHeadOffset.y;
        VStack_4.z = (this->fields).avatarHeadOffset.z;
        QStack_5.w = VStack_4.z + pVVar3->z;
        (this->fields).currentLookAt.x = VStack_4.x + QStack_5.y;
        (this->fields).currentLookAt.y = VStack_4.y + QStack_5.z;
        (this->fields).currentLookAt.z = QStack_5.w;
        pMVar1 = (this->fields).avatarLocal;
        if ((pMVar1 != (MVAvatarLocal *)0x0) &&
           (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_4,pTVar2,(MethodInfo *)0x0);
          QStack_5.y = pVVar3->x;
          QStack_5.z = pVVar3->y;
          QStack_5.w = pVVar3->z;
          fStack_6 = QStack_5.y + 0.0;
          fStack_7 = QStack_5.z + (this->fields).height;
          fStack_8 = QStack_5.w + 0.0;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               (&QStack_5,this_01,(MethodInfo *)0x0);
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                               (&VStack_4,*pQVar9,(this->fields).offset,(MethodInfo *)0x0);
            QStack_5.y = pVVar3->x;
            QStack_5.z = pVVar3->y;
            QStack_5.w = pVVar3->z;
            VStack_4.y = QStack_5.z + fStack_7;
            VStack_4.x = QStack_5.y + fStack_6;
            VStack_4.z = QStack_5.w + fStack_8;
            if (pTVar2 != (Transform *)0x0) {
              value.z = VStack_4.z;
              value.x = QStack_5.y + fStack_6;
              value.y = QStack_5.z + fStack_7;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,value,(MethodInfo *)0x0);
              bVar10 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
              if (bVar10 == 0) {
                return;
              }
              pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                 ((MethodInfo *)0x0);
              if ((pSVar11 != (SpawnRoleDataMediator *)0x0) &&
                 (pSVar12 = (SpawnRoleVariable_1_System_Object_ *)(pSVar11->fields).lastRespawnType,
                 pSVar12 != (SpawnRoleVariable_1_System_Object_ *)0x0)) {
                pOVar13 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                         SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
                         SpawnRoleVariable_1_System_Object__get_Value
                                   (pSVar12,
                                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                                   );
                if (pOVar13 != (Object *)0x1) {
                  return;
                }
                pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                   ((MethodInfo *)0x0);
                if (((pSVar11 != (SpawnRoleDataMediator *)0x0) &&
                    (pSVar12 = (SpawnRoleVariable_1_System_Object_ *)(pSVar11->fields).reviveState,
                    pSVar12 != (SpawnRoleVariable_1_System_Object_ *)0x0)) &&
                   (this_02 = (ReviveState *)
                              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                              SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
                              SpawnRoleVariable_1_System_Object__get_Value
                                        (pSVar12,
                                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                        ), this_02 != (ReviveState *)0x0)) {
                  pSVar14 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                                      (&SStack_15,this_02,(MethodInfo *)0x0);
                  fStack_16 = (pSVar14->Position).x;
                  fStack_17 = (pSVar14->Position).y;
                  fStack_18 = (pSVar14->Position).z;
                  fStack_19 = (pSVar14->Rotation).x;
                  fStack_20 = (pSVar14->Rotation).y;
                  fStack_21 = (pSVar14->Rotation).z;
                  fStack_22 = (pSVar14->Rotation).w;
                  fStack_23 = (pSVar14->CameraPosition).x;
                  fStack_24 = (pSVar14->CameraPosition).y;
                  fStack_25 = (pSVar14->CameraPosition).z;
                  fStack_26 = (pSVar14->CameraRotation).x;
                  fStack_27 = (pSVar14->CameraRotation).y;
                  uStack_28._0_4_ = (pSVar14->CameraRotation).z;
                  uStack_28._4_4_ = (pSVar14->CameraRotation).w;
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    value_00.y = fStack_24;
                    value_00.x = fStack_23;
                    value_00.z = fStack_25;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar2,value_00,(MethodInfo *)0x0);
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar2 != (Transform *)0x0) {
                      value_01.y = fStack_27;
                      value_01.x = fStack_26;
                      value_01.z = (float)(undefined4)uStack_28;
                      value_01.w = uStack_28._4_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (pTVar2,value_01,(MethodInfo *)0x0);
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
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::GhostCamera::GhostCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,GhostCamera *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.transform, this_00 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    fVar7 = (this->fields).height;
    __return_storage_ptr__->x = (float)uVar4 + 0.0;
    __return_storage_ptr__->y = (float)uVar5 + fVar7;
    __return_storage_ptr__->z = fVar6 + 0.0;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar8)();
  return pVVar2;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Initialize
               (GhostCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  (this->fields).avatarLocal = avatarLocal;
  func_?(&(this->fields).avatarLocal,avatarLocal);
  if ((avatarLocal != (MVAvatarLocal *)0x0) &&
     (this_00 = (avatarLocal->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields).lookAtTransform = pTVar1;
    func_?(&(this->fields).lookAtTransform,pTVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdateCamera
               (GhostCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  fVar1 = (this->fields).distance;
  fVar2 = (this->fields).desiredDistance;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + fVar3;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  (this->fields).distance = (fVar2 - fVar1) * fVar3 + fVar1;
  GhostCamera_UpdatePosition(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).CameraCollision.methodPtr)
            (this,(this->klass->vtable).CameraCollision.method);
  fVar1 = (float)((uint)((this->fields).actualLookAt.y - (this->fields).lookAtPos.y) &
                  _UNK_?);
  fVar1 = fVar1 * fVar1;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
    fVar2 = (this->fields).lookAtPos.x;
    fVar3 = (this->fields).lookAtPos.y;
    fVar5 = (this->fields).lookAtPos.z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar6 = (Vector3 *)&stack0xffffffbc;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (pVVar6,pTVar4,(MethodInfo *)0x0);
      uVar8 = pVVar7->x;
      uVar9 = pVVar7->y;
      fromDirection.y = (float)pTVar4;
      fromDirection.x = (float)pVVar6;
      fromDirection.z = fVar2 - (float)uVar8;
      toDirection.y = fVar3 - (float)uVar9;
      toDirection.x = fVar2 - (float)uVar8;
      toDirection.z = fVar5 - pVVar7->z;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                         ((Quaternion *)&stack0xffffffb8,fromDirection,toDirection,(MethodInfo *)0x0
                         );
      fVar2 = pQVar10->x;
      fVar3 = pQVar10->y;
      fVar5 = pQVar10->z;
      fVar11 = pQVar10->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar13 = (pQVar12->identityQuaternion).x;
      fVar14 = (pQVar12->identityQuaternion).y;
      fVar15 = (pQVar12->identityQuaternion).z;
      fVar16 = (pQVar12->identityQuaternion).w;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      a.y = fVar14;
      a.x = fVar13;
      a.z = fVar15;
      a.w = fVar16;
      b.y = fVar3;
      b.x = fVar2;
      b.z = fVar5;
      b.w = fVar11;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffb8,a,b,fVar17 * _UNK_? * fVar1,
                          (MethodInfo *)0x0);
      fVar1 = pQVar10->x;
      fVar2 = pQVar10->y;
      fVar3 = pQVar10->z;
      fVar5 = pQVar10->w;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffbc,pTVar4,(MethodInfo *)0x0);
        if (targetTransform != (ProtectedTransform *)0x0) {
          ProtectedTransform::ProtectedTransform_set_position
                    (targetTransform,*pVVar6,(MethodInfo *)0x0);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
            fVar11 = pQVar10->y;
            fVar13 = pQVar10->z;
            fVar14 = pQVar10->w;
            value.y = (fVar5 * fVar11 + fVar2 * fVar14 + fVar3 * pQVar10->x) - fVar1 * fVar13;
            value.x = (fVar1 * fVar14 + fVar5 * pQVar10->x + fVar2 * fVar13) - fVar3 * fVar11;
            value.z = (fVar5 * fVar13 + fVar3 * fVar14 + fVar1 * fVar11) - fVar2 * pQVar10->x;
            value.w = ((fVar5 * fVar14 - fVar1 * pQVar10->x) - fVar2 * fVar11) - fVar3 * fVar13;
            ProtectedTransform::ProtectedTransform_set_rotation
                      (targetTransform,value,(MethodInfo *)0x0);
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


/* Void UpdatePosition() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdatePosition
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
    VStack_3.x = pVVar2->z;
    pTVar4 = (this->fields).lookAtTransform;
    if (pTVar4 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar4,(MethodInfo *)0x0);
      uVar5 = pVVar2->x;
      uVar6 = pVVar2->y;
      uVar7 = (this->fields).prevLookAtTransformPos.x;
      uVar8 = (this->fields).prevLookAtTransformPos.y;
      fVar9 = (this->fields).prevLookAtTransformPos.z;
      fStack_10 = fStack_10 + (pVVar2->z - fVar9);
      value.y = VStack_3.z + ((float)uVar6 - (float)uVar8);
      value.x = VStack_3.y + ((float)uVar5 - (float)uVar7);
      value.z = fStack_10;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)((int)&stack0x00000018 + 4),pTVar4,(MethodInfo *)0x0);
        method = (MethodInfo *)pQVar11->x;
        in_stack_12 = pQVar11->y;
        in_stack_13 = pQVar11->z;
        in_stack_14 = pQVar11->w;
        iVar15 = func_?(&stack0x00000018);
        auVar16._4_8_ = 0;
        auVar16._0_4_ = *(float *)(iVar15 + 4) * _UNK_?;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc4,(Vector3)(auVar16 << 0x20),
                             (MethodInfo *)0x0);
        fVar17 = pQVar11->z;
        fVar18 = pQVar11->w;
        pTVar4 = (this->fields).lookAtTransform;
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
          uVar19 = (this->fields).avatarHeadOffset.x;
          uVar20 = (this->fields).avatarHeadOffset.y;
          fVar21 = (this->fields).avatarHeadOffset.z;
          uVar22 = (this->fields).offset.x;
          fVar23 = (this->fields).offset.y;
          fVar24 = fVar21 + (this->fields).offset.z * (float)pTVar1;
          rotation.y = fVar9;
          rotation.x = fVar18;
          rotation.z = VStack_3.x;
          rotation.w = VStack_3.y;
          point.y = (float)uVar20 + fVar23 * (float)pTVar1;
          point.x = (float)uVar19 + (float)uVar22 * (float)pTVar1;
          point.z = fVar24;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffc4,rotation,point,(MethodInfo *)0x0);
          uVar25 = pVVar2->x;
          uVar26 = pVVar2->y;
          fVar27 = pVVar2->z;
          (this->fields).lookAtPos.x = (float)uVar25 + fVar23;
          (this->fields).lookAtPos.y = (float)uVar26 + fVar24;
          (this->fields).lookAtPos.z = fVar27 + fVar17;
          pTVar1 = (this->fields).lookAtTransform;
          fStack_10 = (float)uVar25;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&fStack_10,pTVar1,(MethodInfo *)0x0);
            uVar28 = pVVar2->x;
            uVar29 = pVVar2->y;
            uVar30 = (this->fields).avatarHeadOffset.x;
            uVar31 = (this->fields).avatarHeadOffset.y;
            fVar23 = (float)uVar31 + (float)uVar29;
            fVar27 = (this->fields).avatarHeadOffset.z + pVVar2->z;
            uVar32 = (this->fields).lookAtPos.x;
            uVar33 = (this->fields).lookAtPos.y;
            fVar17 = ((this->fields).lookAtPos.z - fVar27) * fVar21;
            in_stack_14 = ((float)uVar32 - ((float)uVar30 + (float)uVar28)) * fVar21;
            fVar21 = ((float)uVar33 - fVar23) * fVar21;
            _fStack00000018 = 0;
            in_stack_34 = 0.0;
            method = (MethodInfo *)uVar33;
            in_stack_12 = fVar17;
            VStack_3.z = in_stack_14;
            fStack_10 = fVar21;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_3,pTVar1,(MethodInfo *)0x0);
              uVar35 = pVVar2->x;
              uVar36 = pVVar2->y;
              fVar37 = pVVar2->z - VStack_3.x;
              _fStack00000018 = CONCAT44((float)uVar36 - fVar9,(float)uVar35 - fVar18);
              in_stack_34 = fVar37;
              fVar38 = (float10)func_?();
              uVar39 = 0;
              ppMVar40 = &method;
              pfVar41 = &fStack_10;
              fVar42 = (float)fVar38;
              puVar43 = (undefined8 *)func_?();
              in_stack_13 = *(float *)(puVar43 + 1);
              method = (MethodInfo *)*puVar43;
              in_stack_12 = (float)((ulonglong)*puVar43 >> 0x20);
              puVar43 = (undefined8 *)
                        func_?(&fStack_10,&stack0x00000018,0,pfVar41,ppMVar40,uVar39);
              in_stack_14 = *(float *)(puVar43 + 1);
              in_stack_12 = (float)*puVar43;
              in_stack_13 = (float)((ulonglong)*puVar43 >> 0x20);
              fVar24 = (this->fields).distance;
              fVar44 = (this->fields).distance;
              dVar45 = (double)((fVar23 * fVar23 + fVar24 * fVar24) -
                               (in_stack_13 * fVar37 + in_stack_12 * fVar17 +
                               in_stack_14 * (float)uVar32) * (fVar44 + fVar44) * fVar23);
              if (dVar45 < 0.0) {
                func_?();
              }
              else {
                dVar45 = SQRT(dVar45);
              }
              in_stack_14 = fVar9 + fVar42;
              (this->fields).actualLookAt.x = fStack46 + fVar27;
              (this->fields).actualLookAt.y = fVar18 + fVar21;
              (this->fields).currentLookAt.x = fStack46 + fVar27;
              (this->fields).currentLookAt.y = fVar18 + fVar21;
              (this->fields).actualLookAt.z = in_stack_14;
              (this->fields).currentLookAt.z = in_stack_14;
              if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)dVar45 &&
                  (float)dVar45 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                uVar47 = (this->fields).actualLookAt.y;
                in_stack_12 = (this->fields).actualLookAt.z;
                method = (MethodInfo *)uVar47;
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar4 == (Transform *)0x0) goto code_?;
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xfffffffc,pTVar4,(MethodInfo *)0x0);
                uVar48 = pVVar2->x;
                uVar49 = pVVar2->y;
                fVar9 = fStack50 - (float)uVar48 * VStack_3.y;
                fVar17 = fStack46 - (float)uVar49 * VStack_3.y;
                in_stack_51 = CONCAT44(fVar17,fVar9);
                in_stack_52 = in_stack_34 - pVVar2->z * VStack_3.y;
                if (pTVar1 == (Transform *)0x0) goto code_?;
                value_00.y = fVar17;
                value_00.x = fVar9;
                value_00.z = in_stack_52;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,value_00,(MethodInfo *)0x0);
              }
              pTVar1 = (this->fields).lookAtTransform;
              if (pTVar1 != (Transform *)0x0) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0x0000000c,pTVar1,(MethodInfo *)0x0);
                fVar17 = pVVar2->y;
                fVar9 = pVVar2->z;
                (this->fields).prevLookAtTransformPos.x = pVVar2->x;
                (this->fields).prevLookAtTransformPos.y = fVar17;
                (this->fields).prevLookAtTransformPos.z = fVar9;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
  return;
}


/* GhostCamera() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera__ctor(GhostCamera *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).avatarHeadOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).avatarHeadOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).height = 1.0;
  (this->fields).desiredDistance = 5.0;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).distance = 5.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).lookAtPos.x = (pVVar2->zeroVector).x;
  (this->fields).lookAtPos.y = fVar3;
  (this->fields).lookAtPos.z = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).actualLookAt.x = (pVVar2->zeroVector).x;
  (this->fields).actualLookAt.y = fVar3;
  (this->fields).actualLookAt.z = fVar4;
  (this->fields)._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}


/* CameraType get_CameraType() */

CameraType__Enum
Assembly-CSharp.dll::GhostCamera::GhostCamera_get_CameraType(GhostCamera *this,MethodInfo *method)

{
  return CameraType__Enum_GhostCamera;
}

