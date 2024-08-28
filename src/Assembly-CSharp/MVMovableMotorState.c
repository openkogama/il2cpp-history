
/* Void CheckMoveables(MvCharacterController, Single) */

void Assembly-CSharp.dll::MVMovableMotorState::MVMovableMotorState_CheckMoveables
               (MVMovableMotorState *this,MvCharacterController *controller,float tolerance,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffe10;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffe10;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                   );
    func_?(0xcc);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  pOStack_8 = (Object *)0x0;
  if ((controller != (MvCharacterController *)0x0) &&
     (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)controller,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0))
  {
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_11,pTVar9,(MethodInfo *)0x0);
    uStack_12._0_4_ = pVVar10->x;
    uStack_12._4_4_ = pVVar10->y;
    fStack_13 = pVVar10->z;
    uVar14 = (controller->fields).center.x;
    uVar15 = (controller->fields).center.y;
    VStack_16.z = (controller->fields).center.z + fStack_13;
    VStack_16.y = (float)uVar15 + uStack_12._4_4_;
    VStack_16.x = (float)uVar14 + (float)uStack_12;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    lStack_17._0_4_ = (controller->fields).elipsoidRadius.x;
    lStack_17._4_4_ = (controller->fields).elipsoidRadius.y;
    pXStack_18 = (XmlQualifiedName *)(controller->fields).elipsoidRadius.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Quaternion);
      cRam_? = '\x01';
    }
    pQVar19 = TypeInfo__UnityEngine__Quaternion->static_fields;
    fStack_20 = (pQVar19->identityQuaternion).x;
    fStack_21 = (pQVar19->identityQuaternion).y;
    fStack_22 = (pQVar19->identityQuaternion).z;
    fStack_23 = (pQVar19->identityQuaternion).w;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MvCharacterController);
    }
    ignoreWoIds = (controller->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVElipsoidOverlapCheck);
    }
    radius.z = (float)pXStack_18;
    radius.x = (float)(undefined4)lStack_17;
    radius.y = (float)lStack_17._4_4_;
    position.z = VStack_16.z;
    position.x = VStack_16.x;
    position.y = VStack_16.y;
    rotation.y = fStack_21;
    rotation.x = fStack_20;
    rotation.z = fStack_22;
    rotation.w = fStack_23;
    this_01 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                        (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    bVar24 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_3
                       ((IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01
                        ,
                        bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                       );
    if (bVar24 != 0) {
      if (this_01 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      goto code_?;
      pLVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                          (aLStack_26,this_01,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                          );
      lStack_17 = ZEXT48(&LStack_27) << 0x20;
      LStack_27._list =
           (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar25->_list;
      LStack_27._index = pLVar25->_index;
      LStack_27._version = pLVar25->_version;
      LStack_27._current.parentId = (int32_t)(pLVar25->_current).qname;
      LStack_27._current.uxmlObjectAssets =
           (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)(pLVar25->_current).xso;
      uStack_2 = 1;
      while (bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                      UIElements::VisualTreeAsset+UxmlObjectEntry]::
                      List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__MoveNext
                                (&LStack_27,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                                ), pLVar28 = LStack_27._current.uxmlObjectAssets, bVar24 != 0) {
        pXStack_18 = (XmlQualifiedName *)LStack_27._current.parentId;
        pOStack_8 = (Object *)0x0;
        pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
            (pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
            pMVar30 == (MoveableController *)0x0)) ||
           (this_00 = (pMVar30->fields).CubeModelMovableMap,
           this_00 == (Dictionary_2_System_Int32_MVMovable_ *)0x0)) goto code_?;
        in_stack_31 =
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)pXStack_18,
                   &pOStack_8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                  );
        if (pOStack_8 != (Object *)0x0) {
          pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)controller,(MethodInfo *)0x0);
          if ((pGVar32 == (GameObject *)0x0) ||
             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar32,(MethodInfo *)0x0),
             pTVar9 == (Transform *)0x0)) goto code_?;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&puStack_33,pTVar9,(MethodInfo *)0x0);
          uStack_34._0_4_ = pVVar10->x;
          uStack_34._4_4_ = (Object__Class *)pVVar10->y;
          pXStack_35 = (XmlQualifiedName *)pVVar10->z;
          uStack_36 = uStack_34;
          pXStack_18 = pXStack_35;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                    ((Vector3 *)&stack0xfffffe70,(MVWorldObject *)0x0,in_stack_37);
          pVVar10 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_get_WorldPosition
                              ((Vector3 *)&stack0xfffffe60,(MVWorldObject *)0x0,in_stack_38);
          uStack_12._0_4_ = pVVar10->x;
          uStack_12._4_4_ = pVVar10->y;
          uStack_39._0_4_ = pVVar10->x;
          uStack_39._4_4_ = pVVar10->y;
          fStack_13 = pVVar10->z;
          uStack_40 = 0;
          uStack_41 = 0;
          fStack_42 = 0.0;
          pOStack_43 = (Object__Class *)fStack_13;
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
             ((pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
              pOStack_8 == (Object *)0x0 ||
              (pOStack_44 = pOStack_8[0x10].klass, pMVar30 == (MoveableController *)0x0))))
          goto code_?;
          in_stack_38 = (MethodInfo *)uStack_36;
          in_stack_37 = (MethodInfo *)&stack0xfffffe50;
          position_00.z = (float)pXStack_18;
          position_00.x = (float)(undefined4)uStack_36;
          position_00.y = uStack_36._4_4_;
          pVVar10 = MoveableController::MoveableController_GetVel
                              ((Vector3 *)in_stack_37,pMVar30,(int32_t)pOStack_44,position_00,
                               (MethodInfo *)0x0);
          uStack_45._0_4_ = pVVar10->x;
          uStack_45._4_4_ = pVVar10->y;
          fStack_46 = pVVar10->z;
          pXStack_18 = (XmlQualifiedName *)
                       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                 ((MethodInfo *)0x0);
          fStack_47 = fStack_46 / (float)pXStack_18;
          aLStack_26[0]._list =
               (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               ((float)uStack_45 / (float)pXStack_18);
          aLStack_26[0]._index = (int32_t)(uStack_45._4_4_ / (float)pXStack_18);
          aLStack_26[0]._version = 0;
          aLStack_26[0]._current.qname = (XmlQualifiedName *)0x0;
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
             ((pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
              pOStack_8 == (Object *)0x0 || (pMVar30 == (MoveableController *)0x0))))
          goto code_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    (pMVar30,(int32_t)pOStack_8[0x10].klass,-1.0,(MethodInfo *)0x0);
          pXStack_18 = (XmlQualifiedName *)0x0;
          uStack_36 = CONCAT44(pXStack_35,(undefined4)uStack_36);
          pOStack_44 = uStack_34._4_4_;
          fStack_20 = (float)uStack_34;
          fStack_21 = 0.0;
          fStack_22 = 0.0;
          fStack_23 = 0.0;
          while( true ) {
            if ((XmlSchemaObject *)pLVar28 == (XmlSchemaObject *)0x0) goto code_?;
            if (((XmlSchemaObject__Fields *)&pLVar28->fields)->linePos <= (int)pXStack_18) break;
            func_?((char)auStack_48,pXStack_18);
            if (pOStack_8 == (Object *)0x0) goto code_?;
            pOStack_43 = pOStack_8[0x11].klass;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCubeFunctions);
            }
            iVector.z._0_1_ = (char)(undefined2)auStack_48[1];
            iVector.x = (undefined2)auStack_48[0];
            iVector.y = auStack_48[0]._2_2_;
            iVector.z._1_1_ = (char)((ushort)(undefined2)auStack_48[1] >> 8);
            pVVar10 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                                ((Vector3 *)&stack0xfffffe40,(GameObject *)pOStack_43,iVector,
                                 (MethodInfo *)0x0);
            uStack_49._0_4_ = pVVar10->x;
            uStack_49._4_4_ = pVVar10->y;
            fStack_50 = pVVar10->z;
            uStack_12._0_4_ = (float)uStack_12 + (fStack_20 - (float)(undefined4)uStack_49);
            uStack_12._4_4_ = uStack_12._4_4_ + ((float)pOStack_44 - (float)uStack_49._4_4_);
            fStack_51 = fStack_13 + (uStack_36._4_4_ - fStack_50);
            fStack_42 = fStack_42 + _UNK_?;
            pXStack_18 = (XmlQualifiedName *)((int)&pXStack_18->klass + 1);
            uStack_39 = CONCAT44(uStack_12._4_4_,(float)uStack_12);
            uStack_40 = 0;
            uStack_41 = 0;
            fStack_13 = fStack_51;
            pOStack_43 = (Object__Class *)fStack_51;
          }
          if (_UNK_? < fStack_42) {
            fStack_52 = fStack_13 / fStack_42;
            uStack_39 = CONCAT44(uStack_12._4_4_ / fStack_42,(float)uStack_12 / fStack_42);
            pOStack_43 = (Object__Class *)fStack_52;
          }
          motion_00.y = (float)aLStack_26[0]._index;
          motion_00.x = (float)aLStack_26[0]._list;
          motion_00.z = fStack_47;
          MvCharacterController::MvCharacterController_Move
                    (controller,motion_00,0,(MethodInfo *)0x0);
          pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
              (pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
              pOStack_8 == (Object *)0x0)) || (pMVar30 == (MoveableController *)0x0))
          goto code_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    (pMVar30,(int32_t)pOStack_8[0x10].klass,1.0,(MethodInfo *)0x0);
          bVar24 = MvCharacterController::MvCharacterController_CheckOverLap
                             (controller,(MethodInfo *)0x0);
          if (bVar24 != 0) {
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
                (pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
                pOStack_8 == (Object *)0x0)) || (pMVar30 == (MoveableController *)0x0))
            goto code_?;
            MoveableController::MoveableController_UpdateSingleMoveableInChain
                      (pMVar30,(int32_t)pOStack_8[0x10].klass,-1.0,(MethodInfo *)0x0);
            pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)controller,(MethodInfo *)0x0);
            if ((pGVar32 == (GameObject *)0x0) ||
               (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar32,(MethodInfo *)0x0),
               pTVar9 == (Transform *)0x0)) goto code_?;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&puStack_53,pTVar9,(MethodInfo *)0x0);
            uStack_54._0_4_ = pVVar10->x;
            uStack_54._4_4_ = pVVar10->y;
            fStack_55 = pVVar10->z;
            fStack_56 = uStack_36._4_4_ - fStack_55;
            motion_01.y = (float)pOStack_44 - (float)uStack_54._4_4_;
            motion_01.x = fStack_20 - (float)(undefined4)uStack_54;
            motion_01.z = fStack_56;
            MvCharacterController::MvCharacterController_Move
                      (controller,motion_01,0,(MethodInfo *)0x0);
            VStack_16.x = (float)uStack_39;
            fVar57 = VStack_16.x * VStack_16.x;
            VStack_16.z = (float)pOStack_43;
            VStack_16._0_8_ = uStack_39 & 0xffffffff;
            pOVar58 = pOStack_43;
            uVar59 = VStack_16._0_8_;
            if (fVar57 + _UNK_? + (float)pOStack_43 * (float)pOStack_43 <
                tolerance * tolerance) {
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                        (&VStack_16,(MethodInfo *)0x0);
              fStack_60 = VStack_16.z * tolerance;
              pOVar58 = (Object__Class *)fStack_60;
              uVar59 = CONCAT44(VStack_16.y * tolerance,VStack_16.x * tolerance);
            }
            in_stack_38 = (MethodInfo *)0x0;
            in_stack_37 = (MethodInfo *)uVar59;
            motion.z = (float)pOVar58;
            motion.x = (float)(int)uVar59;
            motion.y = (float)(int)(uVar59 >> 0x20);
            MvCharacterController::MvCharacterController_Move(controller,motion,0,(MethodInfo *)0x0)
            ;
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
                (pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
                pOStack_8 == (Object *)0x0)) || (pMVar30 == (MoveableController *)0x0))
            goto code_?;
            MoveableController::MoveableController_UpdateSingleMoveableInChain
                      (pMVar30,(int32_t)pOStack_8[0x10].klass,1.0,(MethodInfo *)0x0);
          }
          pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)controller,(MethodInfo *)0x0);
          if ((pGVar32 == (GameObject *)0x0) ||
             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar32,(MethodInfo *)0x0),
             pTVar9 == (Transform *)0x0)) goto code_?;
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffe20,pTVar9,(MethodInfo *)0x0);
          uStack_61._0_4_ = pVVar10->x;
          uStack_61._4_4_ = pVVar10->y;
          fStack_62 = pVVar10->z;
          VStack_11.z = uStack_36._4_4_ - fStack_62;
          func_?(5,controller);
        }
      }
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_27,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                 ,in_stack_31);
    }
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
code_?:
  func_?();
  pcVar63 = (code *)swi(3);
  (*pcVar63)();
  return;
}


/* Boolean Move(Vector3, MvCharacterController, Single, MVGroundState, Vector3 ByRef) */

bool Assembly-CSharp.dll::MVMovableMotorState::MVMovableMotorState_Move
               (MVMovableMotorState *this,Vector3 velocity,MvCharacterController *controller,
               float tolerance,MVGroundState *groundState,Vector3 *movableVelocityVector,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  MVMovableMotorState_CheckMoveables(this,controller,tolerance,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  movableVelocityVector->x = (pVVar1->zeroVector).x;
  movableVelocityVector->y = fVar2;
  movableVelocityVector->z = fVar3;
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar4 = TypeInfo__MVPhysics->static_fields;
  iVar5 = (pMVar4->gravity).currentCryptoKey;
  VStack_6.x = *(float *)&(pMVar4->gravity).hiddenValue;
  VStack_6.y = (float)(pMVar4->gravity).hiddenValueOld;
  VStack_6.z = (pMVar4->gravity).fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?();
  }
  value.hiddenValue = (ACTkByte4)VStack_6.x;
  value.currentCryptoKey = iVar5;
  value.hiddenValueOld = (Byte__Array *)VStack_6.y;
  value.fakeValue = VStack_6.z;
  value.inited = (pMVar4->gravity).inited;
  value._17_3_ = *(undefined3 *)&(pMVar4->gravity).field_0x11;
  pBVar7 = (Byte__Array *)VStack_6.y;
  fVar2 = VStack_6.z;
  fStack_8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  fVar3 = fVar3 * fVar9 * fStack_8;
  if (groundState != (MVGroundState *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10 = (pVVar1->downVector).x;
    uVar11 = (pVVar1->downVector).y;
    direction.y = (float)uVar11;
    direction.x = (float)uVar10;
    pOStack_12 = (Object__Class *)(pVVar1->downVector).z;
    fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
    VStack_6.x = velocity.x * fStack_8;
    VStack_6.y = velocity.y * fStack_8;
    VStack_6.z = velocity.z * fStack_8;
    if (controller != (MvCharacterController *)0x0) {
      colliderHit = (ACTkByte4)&stack0xffffff48;
      pBVar13 = (Byte__Array *)0x0;
      direction.z = (float)pOStack_12;
      motion.y = VStack_6.y;
      motion.x = VStack_6.x;
      motion.z = VStack_6.z;
      bVar14 = MvCharacterController::MvCharacterController_TestWithOutSliding
                         (controller,fVar3 + _UNK_?,direction,motion,
                          (MVControllerColliderHit *)colliderHit,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        return 0;
      }
      VStack_6.z = in_stack_15;
      VStack_6.x = (float)colliderHit;
      VStack_6.y = (float)pBVar13;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar16 = (pVVar1->upVector).x;
      uVar17 = (pVVar1->upVector).y;
      velocity.z = (pVVar1->upVector).z;
      bVar18 = (float)((uint)((float)uVar17 * VStack_6.y + (float)uVar16 * VStack_6.x +
                             velocity.z * VStack_6.z) & _UNK_?) <= _UNK_?;
      pOStack_19 = (Object *)0x0;
      velocity.x = (float)uVar16;
      velocity.y = (float)uVar17;
      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar20 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar21 = (pMVar20->fields)._MoveableController_k__BackingField,
          pMVar21 != (MoveableController *)0x0)) &&
         (this_02 = (pMVar21->fields).CubeModelMovableMap,
         this_02 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
        value_00 = &pOStack_19;
        puVar22 = &UNK_?;
        pMVar23 = 
        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,iStack_24,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                  );
        if (pOStack_19 == (Object *)0x0) {
          return bVar18;
        }
        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar20 != (MVWorldObjectClientManager *)0x0) &&
           (velocity.z = (float)(pMVar20->fields)._MoveableController_k__BackingField,
           pOStack_19 != (Object *)0x0)) {
          pOStack_12 = pOStack_19[0x10].klass;
          puVar25 = &UNK_?;
          pMVar26 = controller;
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)controller,(MethodInfo *)0x0);
          if ((this_00 != (GameObject *)0x0) &&
             ((this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(this_00,(MethodInfo *)0x0),
              this_01 != (Transform *)0x0 &&
              (pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   (&VStack_6,this_01,(MethodInfo *)0x0), velocity.z != 0.0)))) {
            uVar28 = pVVar27->x;
            uVar29 = pVVar27->y;
            fVar9 = pVVar27->z;
            uVar30 = 0;
            __return_storage_ptr__ = &velocity;
            puVar31 = &UNK_?;
            fVar32 = velocity.z;
            pOVar33 = pOStack_12;
            pVVar27 = MoveableController::MoveableController_GetVel
                                (__return_storage_ptr__,(MoveableController *)velocity.z,
                                 (int32_t)pOStack_12,*pVVar27,(MethodInfo *)0x0);
            fVar34 = pVVar27->y;
            velocity.z = pVVar27->z;
            movableVelocityVector->x = pVVar27->x;
            movableVelocityVector->y = fVar34;
            movableVelocityVector->z = velocity.z;
            if (_UNK_? < movableVelocityVector->y) {
              movableVelocityVector->y = movableVelocityVector->y - fVar3;
            }
            uVar35 = movableVelocityVector->x;
            uVar36 = movableVelocityVector->y;
            uVar37 = 0;
            puVar38 = &UNK_?;
            velocity.x = (float)uVar35;
            velocity.y = (float)uVar36;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                               ((MethodInfo *)0x0);
            velocity.z = velocity.z / fVar3;
            uVar39 = 0;
            movableVelocityVector->x = velocity.x / fVar3;
            movableVelocityVector->y = velocity.y / fVar3;
            movableVelocityVector->z = velocity.z;
            puVar40 = (undefined4 *)&stack0xffffff48;
            puVar41 = &uStack_42;
            for (iVar43 = 0x24; iVar43 != 0; iVar43 = iVar43 + -1) {
              *puVar41 = *puVar40;
              puVar40 = puVar40 + 1;
              puVar41 = puVar41 + 1;
            }
            groundHit.slopeNormal.z = (float)puVar22;
            auVar44 = in_stack_45._0_12_;
            auVar46 = in_stack_45._12_12_;
            auVar47 = in_stack_45._24_12_;
            groundHit.positionTouchingHit.x = (float)auVar44._0_4_;
            groundHit.positionTouchingHit.y = (float)auVar44._4_4_;
            groundHit.positionTouchingHit.z = (float)auVar44._8_4_;
            groundHit.moveDirection.x = (float)auVar46._0_4_;
            groundHit.moveDirection.y = (float)auVar46._4_4_;
            groundHit.moveDirection.z = (float)auVar46._8_4_;
            groundHit.elipsoidNormal.x = (float)auVar47._0_4_;
            groundHit.elipsoidNormal.y = (float)auVar47._4_4_;
            groundHit.elipsoidNormal.z = (float)auVar47._8_4_;
            groundHit.slopeNormal.x = (float)in_stack_45._36_4_;
            groundHit.slopeNormal.y = (float)in_stack_45._40_4_;
            groundHit.impactVelocity.x = (float)this_02;
            groundHit.impactVelocity.y = (float)iStack_24;
            groundHit.impactVelocity.z = (float)value_00;
            groundHit._60_4_ = pMVar23;
            groundHit.hit.point.x = (float)pBVar7;
            groundHit.hit.point.y = fVar2;
            groundHit.hit.point.z = (float)puVar25;
            groundHit.hit.normal.x = (float)pMVar26;
            groundHit.hit.normal.y = (float)puVar31;
            groundHit.hit.normal.z = (float)__return_storage_ptr__;
            groundHit.hit.cubePos._0_4_ = fVar32;
            groundHit.hit._28_4_ = pOVar33;
            groundHit.hit.face = uVar28;
            groundHit.hit._36_4_ = uVar29;
            groundHit.hit.woId = (int32_t)fVar9;
            groundHit.hit.cube = (Cube *)uVar30;
            groundHit.hit.distance = (float)pBVar13;
            groundHit.hit.collider = (Collider *)in_stack_15;
            groundHit.hit._56_12_ = in_stack_48;
            groundHit.hit.interactionFlags._4_4_ = puVar38;
            groundHit.material = (MVMaterial *)uVar37;
            groundHit._140_4_ = uVar39;
            MVGroundState::MVGroundState_UpdateGroundStateWithHit
                      (groundState,controller,1,groundHit,in_stack_49);
            return bVar18;
          }
        }
      }
    }
  }
  func_?();
  pcVar50 = (code *)swi(3);
  bVar14 = (*pcVar50)();
  return bVar14;
}

