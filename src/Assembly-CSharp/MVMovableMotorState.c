
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
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                   );
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
  LStack_8._current.uxmlObjectAssets = (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)0x0;
  apOStack_9[0] = (Object *)0x0;
  LStack_8._list = (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current.parentId = 0;
  if ((controller != (MvCharacterController *)0x0) &&
     (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)controller,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0))
  {
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (aVStack_12,pTVar10,(MethodInfo *)0x0);
    uStack_13._0_4_ = pVVar11->x;
    uStack_13._4_4_ = pVVar11->y;
    fStack_14 = pVVar11->z;
    uVar15 = (controller->fields).center.x;
    uVar16 = (controller->fields).center.y;
    VStack_17.z = (controller->fields).center.z + fStack_14;
    VStack_17.y = (float)uVar16 + uStack_13._4_4_;
    VStack_17.x = (float)uVar15 + (float)uStack_13;
    if (cRam_? == '\0') {
      VStack_18.x = (float)&TypeInfo__MVElipsoidOverlapCheck;
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    lStack_19._0_4_ = (controller->fields).elipsoidRadius.x;
    lStack_19._4_4_ = (controller->fields).elipsoidRadius.y;
    uStack_20 = CONCAT44((controller->fields).elipsoidRadius.z,(undefined4)uStack_20);
    if (cRam_? == '\0') {
      func_?(0xc760);
      cRam_? = '\x01';
    }
    pQVar21 = TypeInfo__UnityEngine__Quaternion->static_fields;
    aLStack_22[0]._list =
         (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
         (pQVar21->identityQuaternion).x;
    aLStack_22[0]._index = (int32_t)(pQVar21->identityQuaternion).y;
    aLStack_22[0]._version = (int32_t)(pQVar21->identityQuaternion).z;
    aLStack_22[0]._current.qname = (XmlQualifiedName *)(pQVar21->identityQuaternion).w;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__MvCharacterController);
    }
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    pHStack_23 = (controller->fields).IgnoreWoIds;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__MVElipsoidOverlapCheck);
    }
    radius.z = uStack_20._4_4_;
    radius.x = (float)(undefined4)lStack_19;
    radius.y = (float)lStack_19._4_4_;
    position.z = VStack_17.z;
    position.x = VStack_17.x;
    position.y = VStack_17.y;
    rotation.y = (float)aLStack_22[0]._index;
    rotation.x = (float)aLStack_22[0]._list;
    rotation.z = (float)aLStack_22[0]._version;
    rotation.w = (float)aLStack_22[0]._current.qname;
    this_01 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                        (radius,position,rotation,layerMask,pHStack_23,(MethodInfo *)0x0);
    bVar24 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_3
                      ((IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                       bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                      );
    if (bVar24 != 0) {
      if (this_01 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      goto code_?;
      pLVar25 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                          (aLStack_22,this_01,
                           MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                          );
      lStack_19 = ZEXT48(&LStack_8) << 0x20;
      LStack_8._list =
           (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar25->_list;
      LStack_8._index = pLVar25->_index;
      LStack_8._version = pLVar25->_version;
      LStack_8._current.parentId = (int32_t)(pLVar25->_current).qname;
      LStack_8._current.uxmlObjectAssets =
           (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)(pLVar25->_current).xso;
      uStack_2 = 1;
      while (bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                     UIElements::VisualTreeAsset+UxmlObjectEntry]::
                     List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__MoveNext
                               (&LStack_8,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                               ), bVar24 != 0) {
        uStack_20 = CONCAT44(LStack_8._current.parentId,(undefined4)uStack_20);
        pHStack_23 = (HashSet_1_System_Int32_ *)LStack_8._current.uxmlObjectAssets;
        apOStack_9[0] = (Object *)0x0;
        pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
            (pMVar27 = (pMVar26->fields)._MoveableController_k__BackingField,
            pMVar27 == (MoveableController *)0x0)) ||
           (this_00 = (pMVar27->fields).CubeModelMovableMap,
           this_00 == (Dictionary_2_System_Int32_MVMovable_ *)0x0)) goto code_?;
        in_stack_28 =
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)uStack_20._4_4_,
                   apOStack_9,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                  );
        if (apOStack_9[0] != (Object *)0x0) {
          pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)controller,(MethodInfo *)0x0);
          if ((pGVar29 == (GameObject *)0x0) ||
             (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar29,(MethodInfo *)0x0),
             pTVar10 == (Transform *)0x0)) goto code_?;
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (aVStack_30,pTVar10,(MethodInfo *)0x0);
          uStack_31._0_4_ =
               (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)pVVar11->x;
          uStack_31._4_4_ = pVVar11->y;
          fVar32 = pVVar11->z;
          fStack_33 = fVar32;
          uStack_20 = uStack_31;
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                    (&VStack_34,(MVWorldObject *)0x0,in_stack_35);
          pVVar11 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                    MVWorldObject_get_WorldPosition
                              ((Vector3 *)(auStack_36 + 0x10),(MVWorldObject *)0x0,
                               in_stack_37);
          uStack_13._0_4_ = pVVar11->x;
          uStack_13._4_4_ = pVVar11->y;
          uStack_38._0_4_ = pVVar11->x;
          uStack_38._4_4_ = pVVar11->y;
          fStack_14 = pVVar11->z;
          uStack_39 = 0;
          uStack_40 = 0;
          pOStack_41 = (Object__Class *)fStack_14;
          pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
             ((pMVar27 = (pMVar26->fields)._MoveableController_k__BackingField,
              apOStack_9[0] == (Object *)0x0 || (pMVar27 == (MoveableController *)0x0))))
          goto code_?;
          in_stack_37 = (MethodInfo *)uStack_20;
          in_stack_35 = (MethodInfo *)auStack_36;
          position_00.z = fVar32;
          position_00.x = (float)(undefined4)uStack_20;
          position_00.y = uStack_20._4_4_;
          pVVar11 = MoveableController::MoveableController_GetVel
                              ((Vector3 *)in_stack_35,pMVar27,
                               (int32_t)apOStack_9[0][0x10].klass,position_00,(MethodInfo *)0x0);
          uStack_42._0_4_ = pVVar11->x;
          uStack_42._4_4_ = pVVar11->y;
          fStack_43 = pVVar11->z;
          fStack_44 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                ((MethodInfo *)0x0);
          uStack_20 = CONCAT44(fStack_44,(undefined4)uStack_20);
          fStack_45 = (float)uStack_42 / fStack_44;
          fStack_46 = uStack_42._4_4_ / fStack_44;
          fStack_44 = fStack_43 / fStack_44;
          pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
             ((pMVar27 = (pMVar26->fields)._MoveableController_k__BackingField,
              apOStack_9[0] == (Object *)0x0 || (pMVar27 == (MoveableController *)0x0))))
          goto code_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    (pMVar27,(int32_t)apOStack_9[0][0x10].klass,-1.0,(MethodInfo *)0x0);
          fVar32 = 0.0;
          iVar47 = 0;
          uStack_20 = uStack_20 & 0xffffffff;
          if (pHStack_23 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
          fStack_48 = fStack_33;
          fStack_49 = uStack_31._4_4_;
          aLStack_22[0]._list =
               (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)uStack_31;
          aLStack_22[0]._index = 0;
          aLStack_22[0]._version = 0;
          aLStack_22[0]._current.qname = (XmlQualifiedName *)0x0;
          for (; iVar47 < (int)(pHStack_23->fields)._slots; iVar47 = iVar47 + 1) {
            func_?(&uStack_50,iVar47);
            if (apOStack_9[0] == (Object *)0x0) goto code_?;
            pOStack_41 = apOStack_9[0][0x11].klass;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCubeFunctions);
            }
            iVector.z = iStack_51;
            iVector.x = (undefined2)uStack_50;
            iVector.y = uStack_50._2_2_;
            pVVar11 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                                (&VStack_52,(GameObject *)pOStack_41,iVector,(MethodInfo *)0x0);
            uStack_53._0_4_ = pVVar11->x;
            uStack_53._4_4_ = pVVar11->y;
            fStack_54 = pVVar11->z;
            uStack_13._0_4_ =
                 (float)uStack_13 + ((float)aLStack_22[0]._list - (float)(undefined4)uStack_53);
            uStack_13._4_4_ = uStack_13._4_4_ + (fStack_49 - (float)uStack_53._4_4_);
            fStack_55 = fStack_14 + (fStack_48 - fStack_54);
            fVar32 = uStack_20._4_4_ + _UNK_?;
            uStack_38 = CONCAT44(uStack_13._4_4_,(float)uStack_13);
            uStack_39 = 0;
            uStack_40 = 0;
            uStack_20 = CONCAT44(fVar32,(undefined4)uStack_20);
            fStack_14 = fStack_55;
            pOStack_41 = (Object__Class *)fStack_55;
          }
          if (_UNK_? < fVar32) {
            fStack_56 = fStack_14 / fVar32;
            uStack_38 = CONCAT44(uStack_13._4_4_ / fVar32,(float)uStack_13 / fVar32);
            pOStack_41 = (Object__Class *)fStack_56;
          }
          motion.y = fStack_46;
          motion.x = fStack_45;
          motion.z = fStack_44;
          MvCharacterController::MvCharacterController_Move(controller,motion,0,(MethodInfo *)0x0);
          pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
              (pMVar27 = (pMVar26->fields)._MoveableController_k__BackingField,
              apOStack_9[0] == (Object *)0x0)) || (pMVar27 == (MoveableController *)0x0))
          goto code_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    (pMVar27,(int32_t)apOStack_9[0][0x10].klass,1.0,(MethodInfo *)0x0);
          bVar24 = MvCharacterController::MvCharacterController_CheckOverLap
                            (controller,(MethodInfo *)0x0);
          if (bVar24 != 0) {
            pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
                (pMVar27 = (pMVar26->fields)._MoveableController_k__BackingField,
                apOStack_9[0] == (Object *)0x0)) || (pMVar27 == (MoveableController *)0x0))
            goto code_?;
            MoveableController::MoveableController_UpdateSingleMoveableInChain
                      (pMVar27,(int32_t)apOStack_9[0][0x10].klass,-1.0,(MethodInfo *)0x0);
            pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)controller,(MethodInfo *)0x0);
            if ((pGVar29 == (GameObject *)0x0) ||
               (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar29,(MethodInfo *)0x0),
               pTVar10 == (Transform *)0x0)) goto code_?;
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_57,pTVar10,(MethodInfo *)0x0);
            uStack_58._0_4_ = pVVar11->x;
            uStack_58._4_4_ = pVVar11->y;
            fStack_59 = pVVar11->z;
            fStack_60 = fStack_48 - fStack_59;
            motion_00.y = fStack_49 - (float)uStack_58._4_4_;
            motion_00.x = (float)aLStack_22[0]._list - (float)(undefined4)uStack_58;
            motion_00.z = fStack_60;
            MvCharacterController::MvCharacterController_Move
                      (controller,motion_00,0,(MethodInfo *)0x0);
            VStack_17.x = (float)uStack_38;
            fVar32 = VStack_17.x * VStack_17.x;
            VStack_17.z = (float)pOStack_41;
            VStack_17._0_8_ = uStack_38 & 0xffffffff;
            pOVar61 = pOStack_41;
            uVar62 = VStack_17._0_8_;
            if (fVar32 + 0.0 + (float)pOStack_41 * (float)pOStack_41 < tolerance * tolerance) {
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                        (&VStack_17,(MethodInfo *)0x0);
              fStack_63 = VStack_17.z * tolerance;
              pOVar61 = (Object__Class *)fStack_63;
              uVar62 = CONCAT44(VStack_17.y * tolerance,VStack_17.x * tolerance);
            }
            in_stack_37 = (MethodInfo *)0x0;
            in_stack_35 = (MethodInfo *)uVar62;
            motion_01.z = (float)pOVar61;
            motion_01.x = (float)(int)uVar62;
            motion_01.y = (float)(int)(uVar62 >> 0x20);
            MvCharacterController::MvCharacterController_Move
                      (controller,motion_01,0,(MethodInfo *)0x0);
            pMVar26 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (((pMVar26 == (MVWorldObjectClientManager *)0x0) ||
                (pMVar27 = (pMVar26->fields)._MoveableController_k__BackingField,
                apOStack_9[0] == (Object *)0x0)) || (pMVar27 == (MoveableController *)0x0))
            goto code_?;
            MoveableController::MoveableController_UpdateSingleMoveableInChain
                      (pMVar27,(int32_t)apOStack_9[0][0x10].klass,1.0,(MethodInfo *)0x0);
          }
          pGVar29 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)controller,(MethodInfo *)0x0);
          if ((pGVar29 == (GameObject *)0x0) ||
             (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar29,(MethodInfo *)0x0),
             pTVar10 == (Transform *)0x0)) goto code_?;
          pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_18,pTVar10,(MethodInfo *)0x0);
          uStack_64._0_4_ = pVVar11->x;
          uStack_64._4_4_ = pVVar11->y;
          fStack_65 = pVVar11->z;
          aVStack_12[0].z = fStack_48 - fStack_65;
          func_?(5,controller);
        }
      }
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&LStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                 ,in_stack_28);
    }
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
code_?:
  func_?();
  pcVar66 = (code *)swi(3);
  (*pcVar66)();
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
    pOStack_12 = (Object__Class *)(pVVar1->downVector).z;
    VStack_6.y = (float)uVar10;
    VStack_6.z = (float)uVar11;
    fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
    velocity.x = velocity.x * fStack_8;
    velocity.y = velocity.y * fStack_8;
    velocity.z = velocity.z * fStack_8;
    if (controller != (MvCharacterController *)0x0) {
      colliderHit = (ACTkByte4)&stack0xffffff50;
      pBVar13 = (Byte__Array *)0x0;
      direction.y = VStack_6.z;
      direction.x = VStack_6.y;
      direction.z = (float)pOStack_12;
      motion.y = velocity.y;
      motion.x = velocity.x;
      motion.z = velocity.z;
      bVar14 = MvCharacterController::MvCharacterController_TestWithOutSliding
                         (controller,fVar3 + _UNK_?,direction,motion,
                          (MVControllerColliderHit *)colliderHit,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        return 0;
      }
      VStack_6.x = (float)colliderHit;
      VStack_6.y = (float)pBVar13;
      VStack_6.z = in_stack_15;
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
            puVar40 = (undefined4 *)&stack0xffffff50;
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

