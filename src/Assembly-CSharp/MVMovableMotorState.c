
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
  puStack_5 = &stack0xfffffe20;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xfffffe20;
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
  if (controller == (MvCharacterController *)0x0) {
code_?:
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_01 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            MvCharacterController::MvCharacterController_GetOverlappingObjects
                      (controller,(MethodInfo *)0x0);
  bVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_3
                    ((IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                     bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                    );
  if (bVar11 != 0) {
    if (this_01 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
             XmlSchemaObjectTable+XmlSchemaObjectEntry]::
             List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__GetEnumerator
                       (aLStack_13,this_01,
                        MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__
                       );
    uStack_14 = 0;
    LStack_8._list =
         (List_1_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_ *)pLVar12->_list;
    LStack_8._index = pLVar12->_index;
    LStack_8._version = pLVar12->_version;
    LStack_8._current.parentId = (int32_t)(pLVar12->_current).qname;
    LStack_8._current.uxmlObjectAssets =
         (List_1_UnityEngine_UIElements_UxmlObjectAsset_ *)(pLVar12->_current).xso;
    uStack_2 = 1;
    pLStack_15 = &LStack_8;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::
                   UIElements::VisualTreeAsset+UxmlObjectEntry]::
                   List_1_T_Enumerator_UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry__MoveNext
                             (&LStack_8,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                             ), key = LStack_8._current.parentId, bVar11 != 0) {
      pXStack_16 = (XmlSchemaObject *)LStack_8._current.uxmlObjectAssets;
      apOStack_9[0] = (Object *)0x0;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar18 = (pMVar17->fields)._MoveableController_k__BackingField,
          pMVar18 == (MoveableController *)0x0)) ||
         (this_00 = (pMVar18->fields).CubeModelMovableMap,
         this_00 == (Dictionary_2_System_Int32_MVMovable_ *)0x0)) goto code_?;
      in_stack_19 =
           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,apOStack_9,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                );
      if (apOStack_9[0] != (Object *)0x0) {
        pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)controller,(MethodInfo *)0x0);
        if ((pGVar20 == (GameObject *)0x0) ||
           (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar20,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
        goto code_?;
        pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_23,pTVar21,(MethodInfo *)0x0);
        uStack_24._0_4_ = pVVar22->x;
        uStack_24._4_4_ = pVVar22->y;
        fStack_25 = pVVar22->z;
        uStack_26 = uStack_24;
        fStack_27 = fStack_25;
        MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                  (&VStack_28,(MVWorldObject *)0x0,in_stack_29);
        pVVar22 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                            ((Vector3 *)&stack0xfffffe70,(MVWorldObject *)0x0,in_stack_30);
        uStack_31._0_4_ = pVVar22->x;
        uStack_31._4_4_ = pVVar22->y;
        uStack_32._0_4_ = pVVar22->x;
        uStack_32._4_4_ = pVVar22->y;
        fStack_33 = pVVar22->z;
        uStack_34 = 0;
        uStack_35 = 0;
        pOStack_36 = (Object__Class *)fStack_33;
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
           ((pMVar18 = (pMVar17->fields)._MoveableController_k__BackingField,
            apOStack_9[0] == (Object *)0x0 || (pMVar18 == (MoveableController *)0x0))))
        goto code_?;
        in_stack_30 = (MethodInfo *)uStack_26;
        position.z = fStack_27;
        position.x = (float)(undefined4)uStack_26;
        position.y = uStack_26._4_4_;
        pVVar22 = MoveableController::MoveableController_GetVel
                            (&VStack_37,pMVar18,(int32_t)apOStack_9[0][0x10].klass,position,
                             (MethodInfo *)0x0);
        uStack_38._0_4_ = pVVar22->x;
        uStack_38._4_4_ = pVVar22->y;
        fStack_39 = pVVar22->z;
        fStack_27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                              ((MethodInfo *)0x0);
        pMStack_40 = (MethodInfo *)(fStack_39 / fStack_27);
        aLStack_13[0]._list =
             (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             ((float)uStack_38 / fStack_27);
        aLStack_13[0]._index = (int32_t)(uStack_38._4_4_ / fStack_27);
        aLStack_13[0]._version = 0;
        aLStack_13[0]._current.qname = (XmlQualifiedName *)0x0;
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
           ((pMVar18 = (pMVar17->fields)._MoveableController_k__BackingField,
            apOStack_9[0] == (Object *)0x0 || (pMVar18 == (MoveableController *)0x0))))
        goto code_?;
        MoveableController::MoveableController_UpdateSingleMoveableInChain
                  (pMVar18,(int32_t)apOStack_9[0][0x10].klass,-1.0,(MethodInfo *)0x0);
        iVar41 = 0;
        fStack_27 = 0.0;
        if (pXStack_16 == (XmlSchemaObject *)0x0) goto code_?;
        fStack_42 = fStack_25;
        uStack_26 = CONCAT44(uStack_24._4_4_,(undefined4)uStack_26);
        fStack_43 = (float)uStack_24;
        uStack_44 = 0;
        uStack_45 = 0;
        uStack_46 = 0;
        for (; iVar41 < (pXStack_16->fields).linePos; iVar41 = iVar41 + 1) {
          func_?(&uStack_47,iVar41);
          if (apOStack_9[0] == (Object *)0x0) goto code_?;
          pOStack_36 = apOStack_9[0][0x11].klass;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          iVector.z = iStack_48;
          iVector.x = (undefined2)uStack_47;
          iVector.y = uStack_47._2_2_;
          pVVar22 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                              ((Vector3 *)&stack0xfffffe50,(GameObject *)pOStack_36,iVector,
                               (MethodInfo *)0x0);
          uStack_49._0_4_ = pVVar22->x;
          uStack_49._4_4_ = pVVar22->y;
          fStack_50 = pVVar22->z;
          uStack_31._0_4_ = (float)uStack_31 + (fStack_43 - (float)(undefined4)uStack_49);
          uStack_31._4_4_ = uStack_31._4_4_ + (uStack_26._4_4_ - (float)uStack_49._4_4_);
          fStack_51 = fStack_33 + (fStack_42 - fStack_50);
          fStack_27 = fStack_27 + _UNK_?;
          uStack_32 = CONCAT44(uStack_31._4_4_,(float)uStack_31);
          uStack_34 = 0;
          uStack_35 = 0;
          fStack_33 = fStack_51;
          pOStack_36 = (Object__Class *)fStack_51;
        }
        pOVar52 = pOStack_36;
        if (_UNK_? < fStack_27) {
          fStack_53 = fStack_33 / fStack_27;
          uStack_32 = CONCAT44(uStack_31._4_4_ / fStack_27,(float)uStack_31 / fStack_27);
          pOVar52 = (Object__Class *)fStack_53;
        }
        motion.y = (float)aLStack_13[0]._index;
        motion.x = (float)aLStack_13[0]._list;
        motion.z = (float)pMStack_40;
        in_stack_29 = pMStack_40;
        MvCharacterController::MvCharacterController_Move(controller,motion,0,(MethodInfo *)0x0);
        pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
            (pMVar18 = (pMVar17->fields)._MoveableController_k__BackingField,
            apOStack_9[0] == (Object *)0x0)) || (pMVar18 == (MoveableController *)0x0))
        goto code_?;
        MoveableController::MoveableController_UpdateSingleMoveableInChain
                  (pMVar18,(int32_t)apOStack_9[0][0x10].klass,1.0,(MethodInfo *)0x0);
        bVar11 = MvCharacterController::MvCharacterController_CheckOverLap
                          (controller,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
              (pMVar18 = (pMVar17->fields)._MoveableController_k__BackingField,
              apOStack_9[0] == (Object *)0x0)) || (pMVar18 == (MoveableController *)0x0))
          goto code_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    (pMVar18,(int32_t)apOStack_9[0][0x10].klass,-1.0,(MethodInfo *)0x0);
          pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)controller,(MethodInfo *)0x0);
          if ((pGVar20 == (GameObject *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar20,(MethodInfo *)0x0),
             pTVar21 == (Transform *)0x0)) goto code_?;
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xfffffe40,pTVar21,(MethodInfo *)0x0);
          uStack_54._0_4_ = pVVar22->x;
          uStack_54._4_4_ = pVVar22->y;
          fStack_55 = pVVar22->z;
          fStack_56 = fStack_42 - fStack_55;
          motion_00.y = uStack_26._4_4_ - (float)uStack_54._4_4_;
          motion_00.x = fStack_43 - (float)(undefined4)uStack_54;
          motion_00.z = fStack_56;
          MvCharacterController::MvCharacterController_Move
                    (controller,motion_00,0,(MethodInfo *)0x0);
          VStack_57.x = (float)uStack_32;
          fVar58 = VStack_57.x * VStack_57.x;
          VStack_57._0_8_ = uStack_32 & 0xffffffff;
          uVar59 = VStack_57._0_8_;
          VStack_57.z = (float)pOVar52;
          if (fVar58 + 0.0 + (float)pOVar52 * (float)pOVar52 < tolerance * tolerance) {
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                      (&VStack_57,(MethodInfo *)0x0);
            pOVar52 = (Object__Class *)(VStack_57.z * tolerance);
            uVar59 = CONCAT44(VStack_57.y * tolerance,VStack_57.x * tolerance);
            fStack_60 = (float)pOVar52;
          }
          motion_01.z = (float)pOVar52;
          motion_01.x = (float)(int)uVar59;
          motion_01.y = (float)(int)(uVar59 >> 0x20);
          MvCharacterController::MvCharacterController_Move
                    (controller,motion_01,0,(MethodInfo *)0x0);
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((pMVar17 == (MVWorldObjectClientManager *)0x0) ||
              (pMVar18 = (pMVar17->fields)._MoveableController_k__BackingField,
              apOStack_9[0] == (Object *)0x0)) || (pMVar18 == (MoveableController *)0x0))
          goto code_?;
          VStack_37.z = (float)&UNK_?;
          MoveableController::MoveableController_UpdateSingleMoveableInChain
                    (pMVar18,(int32_t)apOStack_9[0][0x10].klass,1.0,(MethodInfo *)0x0);
        }
        pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)controller,(MethodInfo *)0x0);
        if ((pGVar20 == (GameObject *)0x0) ||
           (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar20,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
        goto code_?;
        pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xfffffe30,pTVar21,(MethodInfo *)0x0);
        uStack_61._0_4_ = pVVar22->x;
        uStack_61._4_4_ = pVVar22->y;
        fStack_62 = pVVar22->z;
        fStack_63 = fStack_42 - fStack_62;
        func_?(5,controller);
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
               ,in_stack_19);
  }
  *unaff_FS_OFFSET = uStack_4;
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

