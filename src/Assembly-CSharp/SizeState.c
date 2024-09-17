
/* Vector3 FindValidMoveLocation(Single) */

Vector3 * Assembly-CSharp.dll::SizeState::SizeState_FindValidMoveLocation
                    (Vector3 *__return_storage_ptr__,SizeState *this,float scale,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff48;
  puVar5 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                   );
    func_?(&TypeInfo__SizeState);
    func_?(&StringLiteral_no_position_found_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.Quadrant = 0;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  pMVar7 = (this->fields).controllerLocal;
  LStack_6._current.FirstAxisSign = 0;
  LStack_6._current.SecondAxisSign = 0;
  fStack_8 = scale * _UNK_?;
  __return_storage_ptr__->z = 0.0;
  fStack_9 = (this->fields).currentSize;
  if (pMVar7 != (MvCharacterController *)0x0) {
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pMVar7,(MethodInfo *)0x0);
    if (pTVar10 != (Transform *)0x0) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_12,pTVar10,(MethodInfo *)0x0);
      fVar13 = pVVar11->y;
      fVar14 = pVVar11->z;
      __return_storage_ptr__->x = pVVar11->x;
      __return_storage_ptr__->y = fVar13;
      __return_storage_ptr__->z = fVar14;
      do {
        if (scale <= fStack_9) {
code_?:
          *unaff_FS_OFFSET = uStack_3;
          return __return_storage_ptr__;
        }
        fStack_15 = fStack_9 + fStack_8;
        uStack_16 = 0;
        fStack_9 = fStack_15;
        if ((TypeInfo__SizeState->_1).cctor_finished_or_no_cctor == 0) {
          in_stack_17 = (MethodInfo *)&UNK_?;
          func_?();
        }
        this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  TypeInfo__SizeState->static_fields->relativePositions;
        if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
        pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_
                             *)&stack0xffffff54,this_00,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                           );
        uStack_19 = 0;
        LStack_6._list = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)pLVar18->_list;
        LStack_6._index = pLVar18->_index;
        LStack_6._version = pLVar18->_version;
        LStack_6._current.Quadrant = (int32_t)(pLVar18->_current).alias;
        LStack_6._current.FirstAxisSign = (int32_t)(pLVar18->_current).path;
        LStack_6._current.SecondAxisSign = (int32_t)(pLVar18->_current).asset;
        uStack_1 = 1;
        pLStack_20 = &LStack_6;
        do {
          bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[RTG::
                  PlaneIdHelper+PlaneQuadrantInfo]::
                  List_1_T_Enumerator_RTG_PlaneIdHelper_PlaneQuadrantInfo__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                            );
          if (bVar21 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                       ,in_stack_22);
            uStack_1 = 0xffffffff;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_no_position_found_,(MethodInfo *)0x0);
            goto code_?;
          }
          fStack_23 = (float)LStack_6._current.SecondAxisSign * fStack_9;
          fStack_24 = (float)LStack_6._current.FirstAxisSign * fStack_9;
          fStack_25 = (float)LStack_6._current.Quadrant * fStack_9;
          relativeTestPos.y = fStack_24;
          relativeTestPos.x = fStack_25;
          relativeTestPos.z = fStack_23;
          fStack_26 = fStack_23;
          bVar21 = SizeState_GetIsValidScaledRelativePosition
                            (this,relativeTestPos,fStack_9,(MethodInfo *)0x0);
        } while (bVar21 == 0);
        pMVar7 = (this->fields).controllerLocal;
        if (pMVar7 == (MvCharacterController *)0x0) break;
        pTStack_27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pMVar7,(MethodInfo *)0x0);
        if (pTStack_27 == (Transform *)0x0) break;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_28,pTStack_27,(MethodInfo *)0x0);
        uStack_29._0_4_ = pVVar11->x;
        uStack_29._4_4_ = pVVar11->y;
        fStack_30 = pVVar11->z;
        VStack_12.z = fStack_30 + fStack_26;
        value.y = (float)uStack_29._4_4_ + fStack_24;
        value.x = (float)(undefined4)uStack_29 + fStack_25;
        value.z = VStack_12.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTStack_27,value,(MethodInfo *)0x0);
        pMVar7 = (this->fields).controllerLocal;
        if (pMVar7 == (MvCharacterController *)0x0) break;
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pMVar7,(MethodInfo *)0x0);
        if (pTVar10 == (Transform *)0x0) break;
        pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_31,pTVar10,(MethodInfo *)0x0);
        uStack_16 = 1;
        uStack_1 = 0xffffffff;
        fVar13 = pVVar11->y;
        fVar14 = pVVar11->z;
        __return_storage_ptr__->x = pVVar11->x;
        __return_storage_ptr__->y = fVar13;
        __return_storage_ptr__->z = fVar14;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                   ,in_stack_17);
        uStack_1 = 0xffffffff;
      } while( true );
    }
  }
  uVar32 = func_?();
  func_?(uVar32);
  pcVar33 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar33)();
  return pVVar11;
}


/* Boolean GetIsValidScaledPosition(Vector3, Single) */

bool Assembly-CSharp.dll::SizeState::SizeState_GetIsValidScaledPosition
               (SizeState *this,Vector3 position,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__SizeState);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    uVar2 = (pMVar1->fields).centerBase.x;
    uVar3 = (pMVar1->fields).centerBase.y;
    fVar4 = (pMVar1->fields).centerBase.z;
    pMVar1 = (this->fields).controllerLocal;
    if (pMVar1 != (MvCharacterController *)0x0) {
      fVar5 = (pMVar1->fields).radiusBase.x;
      fVar6 = (pMVar1->fields).radiusBase.z;
      fVar7 = (pMVar1->fields).radiusBase.y;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
      if ((TypeInfo__SizeState->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SizeState);
      }
      layerMask = TypeInfo__SizeState->static_fields->layerMask;
      pMVar1 = (this->fields).controllerLocal;
      if (pMVar1 != (MvCharacterController *)0x0) {
        ignoreWoIds = (pMVar1->fields).IgnoreWoIds;
        if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVElipsoidOverlapCheck);
        }
        radius.y = fVar7 * scale;
        radius.x = fVar5 * scale;
        radius.z = fVar6 * scale;
        position_00.z = position.z + fVar4 * scale;
        position_00.x = position.x + (float)uVar2 * scale;
        position_00.y = position.y + (float)uVar3 * scale;
        bVar8 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                          (radius,position_00,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
        return bVar8 ^ 1;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean GetIsValidScaledRelativePosition(Vector3, Single) */

bool Assembly-CSharp.dll::SizeState::SizeState_GetIsValidScaledRelativePosition
               (SizeState *this,Vector3 relativeTestPos,float scale,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  fVar2 = fStack_3;
  if (pMVar1 != (MvCharacterController *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar1,(MethodInfo *)0x0);
    fVar2 = fStack_3;
    if (this_00 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,this_00,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar4->x;
      uStack_6._4_4_ = pVVar4->y;
      fStack_7 = pVVar4->z;
      fVar8 = relativeTestPos.x + (float)(undefined4)uStack_6;
      fStack_9 = relativeTestPos.y + (float)uStack_6._4_4_;
      fStack_3 = relativeTestPos.z + fStack_7;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVElipsoidOverlapCheck);
        func_?(&TypeInfo__SizeState);
        cRam_? = '\x01';
      }
      pMVar1 = (this->fields).controllerLocal;
      fVar2 = fStack_3;
      if (pMVar1 != (MvCharacterController *)0x0) {
        uStack_6._0_4_ = (pMVar1->fields).centerBase.x;
        uStack_6._4_4_ = (pMVar1->fields).centerBase.y;
        fStack_7 = (pMVar1->fields).centerBase.z;
        fVar2 = fStack_7 * scale;
        pMVar1 = (this->fields).controllerLocal;
        if (pMVar1 != (MvCharacterController *)0x0) {
          VStack_5.x = (pMVar1->fields).radiusBase.x * scale;
          VStack_5.y = (pMVar1->fields).radiusBase.y * scale;
          VStack_5.z = (pMVar1->fields).radiusBase.z * scale;
          fStack_7 = fStack_3 + fVar2;
          uStack_6 = CONCAT44(fStack_9 + (float)uStack_6._4_4_ * scale,
                               fVar8 + (float)(undefined4)uStack_6 * scale);
          fStack_3 = fVar2;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Quaternion);
            cRam_? = '\x01';
          }
          pQVar10 = TypeInfo__UnityEngine__Quaternion->static_fields;
          fVar8 = (pQVar10->identityQuaternion).x;
          puVar11 = (undefined *)(pQVar10->identityQuaternion).y;
          pMVar12 = (MVElipsoidOverlapCheck__Class *)(pQVar10->identityQuaternion).z;
          fVar13 = (pQVar10->identityQuaternion).w;
          if ((TypeInfo__SizeState->_1).cctor_finished_or_no_cctor == 0) {
            puVar11 = &UNK_?;
            pMVar12 = (MVElipsoidOverlapCheck__Class *)TypeInfo__SizeState;
            func_?();
          }
          layerMask = TypeInfo__SizeState->static_fields->layerMask;
          pMVar1 = (this->fields).controllerLocal;
          fVar2 = fStack_3;
          if (pMVar1 != (MvCharacterController *)0x0) {
            ignoreWoIds = (pMVar1->fields).IgnoreWoIds;
            if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
              puVar11 = &UNK_?;
              pMVar12 = TypeInfo__MVElipsoidOverlapCheck;
              func_?();
            }
            radius.y = VStack_5.y;
            radius.x = VStack_5.x;
            radius.z = VStack_5.z;
            position.z = fStack_7;
            position.x = (float)(undefined4)uStack_6;
            position.y = (float)uStack_6._4_4_;
            rotation.y = (float)puVar11;
            rotation.x = fVar8;
            rotation.z = (float)pMVar12;
            rotation.w = fVar13;
            bVar14 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                              (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
            return bVar14 ^ 1;
          }
        }
      }
    }
  }
  fStack_3 = fVar2;
  func_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Void MoveOutOfScalingCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::SizeState::SizeState_MoveOutOfScalingCollision
               (SizeState *this,MVControllerColliderHit hitData,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      puStack_4 = (undefined *)pVVar3->x;
      unique0x0000a404 = pVVar3->y;
      pMVar1 = (this->fields).controllerLocal;
      if (pMVar1 != (MvCharacterController *)0x0) {
        uVar5 = (pMVar1->fields).center.y;
        fVar6 = (float)uVar5 + unique0x0000a404;
        pMVar1 = (this->fields).controllerLocal;
        if (pMVar1 != (MvCharacterController *)0x0) {
          puStack_4 = (undefined *)(pMVar1->fields).centerBase.x;
          unique0x0000a404 = (pMVar1->fields).centerBase.y;
          if (pMVar1 != (MvCharacterController *)0x0) {
            uVar7 = (pMVar1->fields).center.y;
            fVar8 = unique0x0000a404 - (float)uVar7;
            fVar9 = (pMVar1->fields).elipsoidRadius.x;
            fVar10 = (pMVar1->fields).radiusBase.x;
            if (pMVar1 != (MvCharacterController *)0x0) {
              stack0xffffffd4 = (float)pMVar1;
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pMVar1,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                stack0xffffffd4 = (float)&UNK_?;
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&puStack_4,pTVar2,(MethodInfo *)0x0);
                uVar11 = pVVar3->x;
                uVar12 = pVVar3->y;
                fVar13 = pVVar3->z;
                pMVar1 = (this->fields).controllerLocal;
                if (pMVar1 != (MvCharacterController *)0x0) {
                  puStack_4 = (undefined *)(pMVar1->fields).center.x;
                  unique0x0000a404 = (pMVar1->fields).center.y;
                  fVar14 = (pMVar1->fields).center.z;
                  fVar15 = (float)puStack_4 + (float)uVar11;
                  fVar16 = unique0x0000a404 + (float)uVar12;
                  fVar17 = 0.0;
                  fVar18 = hitData.slopeNormal.y;
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                      ((Vector3 *)&stack0xffffffdc,hitData._32_12_,(MethodInfo *)0x0
                                      );
                  uVar19 = pVVar3->x;
                  uVar20 = pVVar3->y;
                  puStack_4 = (undefined *)pVVar3->x;
                  unique0x0000a404 = pVVar3->y;
                  fVar9 = unique0x0000a404 *
                           (fVar8 + (fVar6 - hitData.positionTouchingHit.x) * (fVar9 / fVar10)) +
                           (float)puStack_4 * fVar17 + pVVar3->z * fVar18 +
                           (float)((uint)((float)uVar19 * (fVar15 - in_stack_21) +
                                          (float)uVar20 * (fVar16 - hitData.positionTouchingHit.x) +
                                         pVVar3->z *
                                         ((fVar14 + fVar13) - hitData.positionTouchingHit.y)) ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  );
                  fVar6 = hitData.slopeNormal.x * fVar9;
                  fVar9 = hitData.slopeNormal.y * fVar9;
                  pMVar1 = (this->fields).controllerLocal;
                  if (pMVar1 != (MvCharacterController *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
                    pMVar1 = (this->fields).controllerLocal;
                    if (pMVar1 != (MvCharacterController *)0x0) {
                      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
                      if (this_00 != (Transform *)0x0) {
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
                        uVar22 = pVVar3->x;
                        uVar23 = pVVar3->y;
                        stack0xffffffd4 = (float)uVar23 + fVar6;
                        puStack_4 = (undefined *)((float)uVar22 + 3.3358428e-29);
                        if (pTVar2 != (Transform *)0x0) {
                          value.y = (float)uVar23 + fVar6;
                          value.x = (float)uVar22 + 3.3358428e-29;
                          value.z = pVVar3->z + fVar9;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                    (pTVar2,value,(MethodInfo *)0x0);
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
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnScalingWhileColliding(MVControllerColliderHit) */

void Assembly-CSharp.dll::SizeState::SizeState_OnScalingWhileColliding
               (SizeState *this,MVControllerColliderHit hitData,MethodInfo *method)

{
  uVar1 = 0;
  puVar2 = &UNK_?;
  pSVar3 = this;
  fVar4 = SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  pfVar5 = &(this->fields).currentSize;
  if (*pfVar5 <= fVar4 && fVar4 != *pfVar5) {
    if (cRam_? == '\0') {
      unaff_EDI = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar6->upVector).x;
    uVar8 = (pVVar6->upVector).y;
    fVar4 = hitData.slopeNormal.y - (pVVar6->upVector).z;
    if (_UNK_? <=
        (hitData.slopeNormal.x - (float)uVar8) * (hitData.slopeNormal.x - (float)uVar8) +
        (hitData.elipsoidNormal.z - (float)uVar7) * (hitData.elipsoidNormal.z - (float)uVar7) +
        fVar4 * fVar4) {
      uVar9 = 0;
      puVar10 = (undefined4 *)&stack0x00000008;
      puVar11 = &uStack_12;
      for (iVar13 = 0x24; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      hitData_00.hit._60_4_ = puVar2;
      auVar14 = in_stack_15._0_12_;
      auVar16 = in_stack_15._12_12_;
      auVar17 = in_stack_15._24_12_;
      auVar18 = in_stack_15._36_12_;
      auVar19 = in_stack_15._48_12_;
      auVar20 = in_stack_15._64_12_;
      auVar21 = in_stack_15._76_12_;
      uVar22 = in_stack_15._88_6_;
      hitData_00.positionTouchingHit.x = (float)auVar14._0_4_;
      hitData_00.positionTouchingHit.y = (float)auVar14._4_4_;
      hitData_00.positionTouchingHit.z = (float)auVar14._8_4_;
      hitData_00.moveDirection.x = (float)auVar16._0_4_;
      hitData_00.moveDirection.y = (float)auVar16._4_4_;
      hitData_00.moveDirection.z = (float)auVar16._8_4_;
      hitData_00.elipsoidNormal.x = (float)auVar17._0_4_;
      hitData_00.elipsoidNormal.y = (float)auVar17._4_4_;
      hitData_00.elipsoidNormal.z = (float)auVar17._8_4_;
      hitData_00.slopeNormal.x = (float)auVar18._0_4_;
      hitData_00.slopeNormal.y = (float)auVar18._4_4_;
      hitData_00.slopeNormal.z = (float)auVar18._8_4_;
      hitData_00.impactVelocity.x = (float)auVar19._0_4_;
      hitData_00.impactVelocity.y = (float)auVar19._4_4_;
      hitData_00.impactVelocity.z = (float)auVar19._8_4_;
      hitData_00._60_4_ = in_stack_15._60_4_;
      hitData_00.hit.point.x = (float)auVar20._0_4_;
      hitData_00.hit.point.y = (float)auVar20._4_4_;
      hitData_00.hit.point.z = (float)auVar20._8_4_;
      hitData_00.hit.normal.x = (float)auVar21._0_4_;
      hitData_00.hit.normal.y = (float)auVar21._4_4_;
      hitData_00.hit.normal.z = (float)auVar21._8_4_;
      hitData_00.hit.cubePos.x = (short)uVar22;
      hitData_00.hit.cubePos.y = (short)((uint6)uVar22 >> 0x10);
      hitData_00.hit.cubePos.z = (short)((uint6)uVar22 >> 0x20);
      hitData_00.hit._30_2_ = in_stack_15._94_2_;
      hitData_00.hit.face = in_stack_15._96_4_;
      hitData_00.hit.isCubeHit = in_stack_15[100];
      hitData_00.hit._37_3_ = in_stack_15._101_3_;
      hitData_00.hit.woId = in_stack_15._104_4_;
      hitData_00.hit.cube = (Cube *)in_stack_15._108_4_;
      hitData_00.hit.distance = (float)in_stack_15._112_4_;
      hitData_00.hit.collider = (Collider *)in_stack_15._116_4_;
      hitData_00.hit.transform = (Transform *)in_stack_15._120_4_;
      hitData_00.hit.interactionFlags._0_4_ = pSVar3;
      hitData_00.hit.interactionFlags._4_4_ = uVar1;
      hitData_00.material = (MVMaterial *)unaff_EDI;
      hitData_00._140_4_ = uVar9;
      SizeState_MoveOutOfScalingCollision(this,hitData_00,unaff_EBX);
    }
  }
  return;
}


/* Void ScaleChanged() */

void Assembly-CSharp.dll::SizeState::SizeState_ScaleChanged(SizeState *this,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventArgs);
    func_?(&TypeInfo__ScaleArgs);
    cRam_? = '\x01';
  }
  this_01 = (SizeState *)SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  pfVar2 = &(this->fields).currentSize;
  if (*pfVar2 <= (float)this_01 && (float)this_01 != *pfVar2) {
    pVVar3 = SizeState_FindValidMoveLocation
                        ((Vector3 *)&stack0xffffffe4,this,(float)this_01,(MethodInfo *)0x0);
    uVar4 = pVVar3->x;
    uVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    pMVar7 = (this->fields).controllerLocal;
    if ((pMVar7 == (MvCharacterController *)0x0) ||
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar7,(MethodInfo *)0x0), this_00 == (Transform *)0x0))
    goto code_?;
    value.y = (float)uVar5;
    value.x = (float)uVar4;
    value.z = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    pMVar8 = (this->fields).interactableLocal;
    if (pMVar8 == (MVInteractable *)0x0) goto code_?;
    this = (SizeState *)0x5;
    cVar9 = (*(code *)(pMVar8->klass->vtable).HasModifierEffect.method)();
    this_01 = this;
    if (cVar9 != '\0') {
      pEVar10 = (EventHandler_1_EventArgs_ *)(pSVar1->fields).EquipSlapGunEvent;
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pEVar10 == (EventHandler_1_EventArgs_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  else if ((this->fields).UnEquipSlapGunEvent != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar10 = (this->fields).UnEquipSlapGunEvent;
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
code_?:
    this_01 = (SizeState *)TypeInfo__System__EventArgs->static_fields->Empty;
    (*(pEVar10->fields)._._.invoke_impl)();
  }
  pMVar7 = (pSVar1->fields).controllerLocal;
  if (pMVar7 != (MvCharacterController *)0x0) {
    uVar11 = (pMVar7->fields).centerBase.x;
    uVar12 = (pMVar7->fields).centerBase.y;
    fVar6 = (pMVar7->fields).centerBase.z;
    (pMVar7->fields).center.x = (float)uVar11 * (float)this_01;
    (pMVar7->fields).center.y = (float)uVar12 * (float)this_01;
    (pMVar7->fields).center.z = fVar6 * (float)this_01;
    fVar6 = (pMVar7->fields).radiusBase.z;
    fVar13 = (pMVar7->fields).radiusBase.y;
    fVar14 = (pMVar7->fields).offsetBase;
    (pMVar7->fields).elipsoidRadius.x = (float)this_01 * (pMVar7->fields).radiusBase.x;
    (pMVar7->fields).elipsoidRadius.y = (float)this_01 * fVar13;
    (pMVar7->fields).elipsoidRadius.z = (float)this_01 * fVar6;
    (pMVar7->fields).offsetFactor = (float)this_01 * fVar14;
    if ((pSVar1->fields).CameraScaleEvent != (EventHandler_1_ScaleArgs_ *)0x0) {
      pEVar15 = (pSVar1->fields).CameraScaleEvent;
      this_01 = (SizeState *)func_?();
      ScaleArgs::ScaleArgs__ctor((ScaleArgs *)this_01,3.3360805e-29,(MethodInfo *)0x0);
      (*(pEVar15->fields)._._.invoke_impl)();
    }
    (pSVar1->fields).currentSize = (float)this_01;
    return;
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateScale() */

void Assembly-CSharp.dll::SizeState::SizeState_UpdateScale(SizeState *this,MethodInfo *method)

{
  fVar1 = SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  if ((this->fields).currentSize != fVar1) {
    SizeState_ScaleChanged(this,(MethodInfo *)0x0);
  }
  return;
}


/* SizeState() */

void Assembly-CSharp.dll::SizeState::SizeState__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__SizeState);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SizeState->static_fields->layerMask =
       ~(1 << (uVar1 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar2 & 0x1f));
  this = (List_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (this != (List_1_UnityEngine_Vector3_ *)0x0) {
    func_?(this,0,0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(_UNK_?,uVar3),0,0,0,0,uVar3,uVar4,uVar5,uVar6);
    func_?(this,CONCAT44(_UNK_?,uVar3),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0x3f800000;
    func_?(this,CONCAT44(uVar3,uVar3),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(uVar3,uVar4),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(uVar3,_UNK_?),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0xbf800000;
    func_?(this,CONCAT44(uVar3,uVar3),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(uVar3,uVar4),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(uVar3,_UNK_?),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0x3f800000;
    func_?(this,CONCAT44(uVar3,_UNK_?),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar5 = 0xbf800000;
    func_?(this,CONCAT44(uVar3,uVar4),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0x3f800000;
    func_?(this,CONCAT44(uVar5,uVar3),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar5 = 0;
    func_?(this,CONCAT44(uVar4,uVar4),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0;
    func_?(this,CONCAT44(uVar5,_UNK_?),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar5 = 0xbf800000;
    func_?(this,CONCAT44(uVar4,uVar3),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0xbf800000;
    func_?(this,CONCAT44(uVar5,_UNK_?),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar5 = 0x3f800000;
    func_?(this,CONCAT44(uVar4,_UNK_?),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(uVar5,uVar5),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0x3f800000;
    func_?(this,CONCAT44(_UNK_?,uVar3),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(_UNK_?,uVar4),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(_UNK_?,_UNK_?),0,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0xbf800000;
    func_?(this,CONCAT44(_UNK_?,uVar3),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(_UNK_?,uVar4),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(_UNK_?,_UNK_?),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar3 = 0x3f800000;
    func_?(this,CONCAT44(_UNK_?,_UNK_?),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    uVar4 = 0xbf800000;
    func_?(this,CONCAT44(_UNK_?,uVar3),0xbf800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this,CONCAT44(uVar4,uVar4),0x3f800000,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    TypeInfo__SizeState->static_fields->relativePositions = this;
    func_?(&TypeInfo__SizeState->static_fields->relativePositions,this);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SizeState(MVInteractable, MvCharacterController) */

void Assembly-CSharp.dll::SizeState::SizeState__ctor
               (SizeState *this,MVInteractable *interactable,MvCharacterController *controller,
               MethodInfo *method)

{
  (this->fields).currentSize = 1.0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).interactableLocal = interactable;
  func_?(&this->fields,interactable);
  (this->fields).controllerLocal = controller;
  func_?(&(this->fields).controllerLocal,controller);
  return;
}


/* Void add_CameraScaleEvent(EventHandler`1[ScaleArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_add_CameraScaleEvent
               (SizeState *this,EventHandler_1_ScaleArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ScaleArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).CameraScaleEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ScaleArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ScaleArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScaleArgs_ *)func_?(&(this->fields).CameraScaleEvent,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_EquipSlapGunEvent(EventHandler) */

void Assembly-CSharp.dll::SizeState::SizeState_add_EquipSlapGunEvent
               (SizeState *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).EquipSlapGunEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar1->klass == TypeInfo__System__EventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler *)func_?(&(this->fields).EquipSlapGunEvent,pDVar2,a);
    bVar5 = pEVar4 == a;
    a = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_UnEquipSlapGunEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_add_UnEquipSlapGunEvent
               (SizeState *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).UnEquipSlapGunEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).UnEquipSlapGunEvent,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Single get_AvatarScale() */

float Assembly-CSharp.dll::SizeState::SizeState_get_AvatarScale(SizeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactableLocal;
  if (pMVar1 != (MVInteractable *)0x0) {
    cVar2 = (*(code *)(pMVar1->klass->vtable).HasModifierEffect.method)
                      (pMVar1,5,(pMVar1->klass->vtable).HandleModifierEffect.methodPtr);
    if (cVar2 == '\0') {
      pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if ((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (SpawnRoleVariable_1_System_Single_ *)(pSVar3->fields).size,
         this_00 != (SpawnRoleVariable_1_System_Single_ *)0x0)) {
        fVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                ::SpawnRoleVariable`1[System::Single]::SpawnRoleVariable_1_System_Single__get_Value
                          (this_00,
                           MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                          );
        return fVar4;
      }
    }
    else {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractable *)0x0) {
        fVar5 = (float10)(*(code *)(pMVar1->klass->vtable).HandleModifierEffect.method)
                                   (pMVar1,5,0x3f800000,
                                    (pMVar1->klass->vtable).ClearModifiers.methodPtr);
        return (float)fVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  fVar5 = (float10)(*pcVar6)();
  return (float)fVar5;
}


/* Single get_ControllerCenterY() */

float Assembly-CSharp.dll::SizeState::SizeState_get_ControllerCenterY
                (SizeState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    uVar2 = (pMVar1->fields).center.y;
    return (float)uVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Single get_ControllerRadius() */

float Assembly-CSharp.dll::SizeState::SizeState_get_ControllerRadius
                (SizeState *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).controllerLocal;
  if (pMVar2 != (MvCharacterController *)0x0) {
    return (pMVar2->fields).elipsoidRadius.x;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void remove_CameraScaleEvent(EventHandler`1[ScaleArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_CameraScaleEvent
               (SizeState *this,EventHandler_1_ScaleArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<ScaleArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).CameraScaleEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<ScaleArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<ScaleArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScaleArgs_ *)
             func_?(&(this->fields).CameraScaleEvent,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_EquipSlapGunEvent(EventHandler) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_EquipSlapGunEvent
               (SizeState *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).EquipSlapGunEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar1->klass == TypeInfo__System__EventHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__EventHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pEVar4 = (EventHandler *)func_?(&(this->fields).EquipSlapGunEvent,pDVar2,source);
    bVar5 = pEVar4 == source;
    source = pEVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_UnEquipSlapGunEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_UnEquipSlapGunEvent
               (SizeState *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).UnEquipSlapGunEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<System::EventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<System::EventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)
             func_?(&(this->fields).UnEquipSlapGunEvent,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

