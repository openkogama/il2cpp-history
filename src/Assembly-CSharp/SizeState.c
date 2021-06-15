
/* Vector3 FindValidMoveLocation(Single) */

Vector3 * Assembly-CSharp.dll::SizeState::SizeState_FindValidMoveLocation
                    (Vector3 *__return_storage_ptr__,SizeState *this,float scale,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff34;
  puVar5 = &stack0xffffff34;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  func_?();
  fStack_12 = scale * _UNK_?;
  iStack_13 = -1;
  fStack_14 = (this->fields).currentSize;
  pMVar15 = (this->fields).controllerLocal;
  puStack_16 = &stack0xffffff34;
  puStack_4 = &stack0xffffff34;
  if ((pMVar15 == (MvCharacterController *)0x0) ||
     (puStack_16 = &stack0xffffff34, puStack_4 = &stack0xffffff34,
     pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar15,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar18 = (code *)swi(3);
    pVVar19 = (Vector3 *)(*pcVar18)();
    return pVVar19;
  }
  pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)(auStack_20 + 0xc),pTVar17,(MethodInfo *)0x0);
  uStack_21._0_4_ = pVVar19->x;
  uStack_21._4_4_ = pVVar19->y;
  fStack_22 = pVVar19->z;
  iVar23 = -1;
  do {
    if (scale <= fStack_14) goto code_?;
    fStack_24 = fStack_14 + fStack_12;
    cStack_25 = '\0';
    uStack_26 = 0;
    fStack_14 = fStack_24;
    if ((((uint)(TypeInfo__SizeState->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SizeState->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__SizeState->static_fields->relativePositions == (List_1_UnityEngine_Vector3_ *)0x0)
    goto code_?;
    method_01 = (MethodInfo *)auStack_20;
    puVar27 = (uint32_t *)func_?();
    uStack_8 = *puVar27;
    uStack_9 = puVar27[1];
    uStack_10 = puVar27[2];
    uStack_11 = puVar27[3];
    uStack_7 = *(undefined8 *)(puVar27 + 4);
    uStack_1 = 0;
    do {
      method_00 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
      ;
      cVar28 = func_?(&uStack_8);
      if (cVar28 == '\0') goto code_?;
      VStack_29.y = (float)
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
      ;
      VStack_29.x = (float)&uStack_8;
      puVar30 = (undefined8 *)func_?();
      uStack_31 = *puVar30;
      fVar32 = *(float *)(puVar30 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar32;
      a.x = (float)(undefined4)uStack_31;
      a.y = uStack_31._4_4_;
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (aVStack_33,a,fStack_14,(MethodInfo *)0x0);
      auStack_20._24_4_ = pVVar19->x;
      auStack_20._28_4_ = pVVar19->y;
      fStack_34 = pVVar19->z;
      bVar35 = SizeState_GetIsValidScaledRelativePosition(this,*pVVar19,fStack_14,(MethodInfo *)0x0);
    } while (bVar35 == 0);
    pMVar15 = (this->fields).controllerLocal;
    if ((pMVar15 == (MvCharacterController *)0x0) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar15,method_00), pTVar17 == (Transform *)0x0))
    goto code_?;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_36,pTVar17,in_stack_37);
    auStack_20._16_4_ = pVVar19->x;
    auStack_20._20_4_ = pVVar19->y;
    uStack_31 = CONCAT44(pVVar19->z,(undefined4)uStack_31);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    in_stack_37 = (MethodInfo *)auStack_20._24_8_;
    a_00.z = uStack_31._4_4_;
    a_00.x = (float)auStack_20._16_4_;
    a_00.y = (float)auStack_20._20_4_;
    b.z = fStack_34;
    b.x = (float)auStack_20._24_4_;
    b.y = (float)auStack_20._28_4_;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_29,a_00,b,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar17,*pVVar19,(MethodInfo *)0x0);
    pMVar15 = (this->fields).controllerLocal;
    if ((pMVar15 == (MvCharacterController *)0x0) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pMVar15,method_01), pTVar17 == (Transform *)0x0))
    goto code_?;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffff40,pTVar17,(MethodInfo *)0x0);
    cStack_25 = '\x01';
    uStack_21._0_4_ = pVVar19->x;
    uStack_21._4_4_ = pVVar19->y;
    fStack_22 = pVVar19->z;
code_?:
    iVar38 = iStack_6;
    iVar39 = iVar23 + 1;
    *(undefined4 *)(puStack_16 + iVar39 * 4) = 0xb1;
    uStack_1 = 0xffffffff;
    VStack_29.y = (float)
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
    ;
    VStack_29.x = (float)&uStack_8;
    iStack_13 = iVar39;
    func_?();
    if (iVar38 != 0) goto code_?;
    if (((iVar39 != -1) && (*(int *)(puStack_16 + iVar39 * 4) == 0xb1)) && (-1 < iVar39)) {
      iVar39 = iVar23;
      iStack_13 = iVar23;
    }
    iVar23 = iVar39;
  } while (cStack_25 != '\0');
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_no_position_found_,(MethodInfo *)0x0);
code_?:
  __return_storage_ptr__->x = (float)(undefined4)uStack_21;
  __return_storage_ptr__->y = (float)uStack_21._4_4_;
  __return_storage_ptr__->z = fStack_22;
  *unaff_FS_OFFSET = uStack_3;
  return __return_storage_ptr__;
}


/* Boolean GetIsValidScaledPosition(Vector3, Single) */

bool Assembly-CSharp.dll::SizeState::SizeState_GetIsValidScaledPosition
               (SizeState *this,Vector3 position,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    uStack_2._0_4_ = (pMVar1->fields).centerBase.x;
    uStack_2._4_4_ = (pMVar1->fields).centerBase.y;
    fVar3 = (pMVar1->fields).centerBase.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_00.z = fVar3;
    a_00.x = (float)(undefined4)uStack_2;
    a_00.y = (float)uStack_2._4_4_;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_5,a_00,scale,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar4->x;
    uStack_2._4_4_ = pVVar4->y;
    fVar3 = pVVar4->z;
    pMVar1 = (this->fields).controllerLocal;
    if (pMVar1 != (MvCharacterController *)0x0) {
      auStack_6._4_4_ = (pMVar1->fields).radiusBase.z;
      auStack_6._0_4_ = (pMVar1->fields).radiusBase.y;
      fStack_7 = 0.0;
      uStack_8 = 0;
      fStack_9 = 0.0;
      func_?(&uStack_8,(pMVar1->fields).radiusBase.x);
      a.z = fStack_9;
      a.x = (float)(undefined4)uStack_8;
      a.y = (float)uStack_8._4_4_;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)(auStack_6 + 4),a,scale,(MethodInfo *)0x0);
      VStack_5.y = pVVar4->x;
      VStack_5.z = pVVar4->y;
      fVar10 = pVVar4->z;
      b.z = fVar3;
      b.x = (float)(undefined4)uStack_2;
      b.y = (float)uStack_2._4_4_;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)(auStack_6 + 4),position,b,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar4->x;
      uStack_2._4_4_ = pVVar4->y;
      fVar3 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)auStack_6,(MethodInfo *)0x0);
      auStack_6._0_4_ = pQVar11->x;
      auStack_6._4_4_ = pQVar11->y;
      fStack_7 = pQVar11->z;
      fStack_12 = pQVar11->w;
      if ((((uint)(TypeInfo__SizeState->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SizeState->_1).cctor_started == 0)) {
        func_?(TypeInfo__SizeState);
      }
      layerMask = TypeInfo__SizeState->static_fields->layerMask;
      pMVar1 = (this->fields).controllerLocal;
      if (pMVar1 != (MvCharacterController *)0x0) {
        ignoreWoIds = (pMVar1->fields).IgnoreWoIds;
        if ((((uint)(TypeInfo__MVElipsoidOverlapCheck->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVElipsoidOverlapCheck);
        }
        radius.z = fVar10;
        radius.x = VStack_5.y;
        radius.y = VStack_5.z;
        position_00.z = fVar3;
        position_00.x = (float)(undefined4)uStack_2;
        position_00.y = (float)uStack_2._4_4_;
        rotation.y = (float)auStack_6._4_4_;
        rotation.x = (float)auStack_6._0_4_;
        rotation.z = fStack_7;
        rotation.w = fStack_12;
        bVar13 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                          (radius,position_00,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
        return bVar13 == 0;
      }
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  bVar13 = (*pcVar14)();
  return bVar13;
}


/* Boolean GetIsValidScaledRelativePosition(Vector3, Single) */

bool Assembly-CSharp.dll::SizeState::SizeState_GetIsValidScaledRelativePosition
               (SizeState *this,Vector3 relativeTestPos,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).controllerLocal;
  if (this_00 != (MvCharacterController *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      a = *pVVar1;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,relativeTestPos,(MethodInfo *)0x0);
      bVar2 = SizeState_GetIsValidScaledPosition(this,*pVVar1,scale,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void MoveOutOfScalingCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::SizeState::SizeState_MoveOutOfScalingCollision
               (SizeState *this,MVControllerColliderHit hitData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pMVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar3->x;
      uStack_4._4_4_ = pVVar3->y;
      fVar5 = pVVar3->z;
      pMVar1 = (this->fields).controllerLocal;
      if (pMVar1 != (MvCharacterController *)0x0) {
        pCVar6 = mscorlib.dll::System::
                  Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::Reflection::
                  CustomAttributeNamedArgument]::
                  Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                            ((CustomAttributeNamedArgument *)&stack0xffffffd4,
                             (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument_
                              *)pMVar1,(MethodInfo *)0x0);
        CVar7 = pCVar6->typedArgument;
        pMVar8 = pCVar6->memberInfo;
        pTStack_9 = CVar7.argumentType;
        pOStack_10 = CVar7.value;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          CVar7.value = pOStack_10;
          CVar7.argumentType = pTStack_9;
        }
        VVar11.z = fVar5;
        VVar11.x = (float)(undefined4)uStack_4;
        VVar11.y = uStack_4._4_4_;
        b.z = (float)pMVar8;
        b.x = (float)CVar7.argumentType;
        b.y = (float)CVar7.value;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffd4,VVar11,b,(MethodInfo *)0x0);
        b_00.y = hitData.positionTouchingHit.x;
        b_00.x = (float)in_stack_12;
        b_00.z = hitData.positionTouchingHit.y;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                            (&VStack_13,*pVVar3,b_00,(MethodInfo *)0x0);
        uVar14 = pVVar3->x;
        uVar15 = pVVar3->y;
        a_00.y = (float)uVar15;
        a_00.x = (float)uVar14;
        pOStack_10 = (Object *)pVVar3->z;
        pMVar1 = (this->fields).controllerLocal;
        if (pMVar1 != (MvCharacterController *)0x0) {
          fVar5 = System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Object,System::Single]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single__System_Collections_Generic_IEnumerator_TResult__get_Current
                             ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Object_System_Single_
                               *)pMVar1,(MethodInfo *)0x0);
          pMVar1 = (this->fields).controllerLocal;
          if (pMVar1 != (MvCharacterController *)0x0) {
            fVar16 = (pMVar1->fields).centerBase.z;
            uStack_4 = CONCAT44((pMVar1->fields).radiusBase.x,(undefined4)uStack_4);
            uVar17 = (pMVar1->fields).centerBase.x;
            uVar18 = (pMVar1->fields).centerBase.y;
            VStack_13.y = (float)uVar17;
            VStack_13.z = (float)uVar18;
            pVVar3 = (Vector3 *)
                      mscorlib.dll::System::
                      Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::Reflection::
                      CustomAttributeNamedArgument]::
                      Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                                ((CustomAttributeNamedArgument *)&stack0xffffffc8,
                                 (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument_
                                  *)pMVar1,(MethodInfo *)0x0);
            a.y = VStack_13.z;
            a.x = VStack_13.y;
            a.z = fVar16;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xffffffc8,a,*pVVar3,(MethodInfo *)0x0);
            uVar19 = pVVar3->x;
            uVar20 = pVVar3->y;
            fVar16 = pVVar3->z;
            a_00.z = (float)pOStack_10;
            VStack_13.y = (float)uVar19;
            VStack_13.z = (float)uVar20;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                ((Vector3 *)&stack0xffffffc8,a_00,fVar5 / uStack_4._4_4_,
                                 (MethodInfo *)0x0);
            a_01.y = VStack_13.z;
            a_01.x = VStack_13.y;
            a_01.z = fVar16;
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffc8,a_01,*pVVar3,(MethodInfo *)0x0);
            uVar21 = pVVar3->x;
            uVar22 = pVVar3->y;
            fVar5 = pVVar3->z;
            pMVar1 = (this->fields).controllerLocal;
            VStack_13.y = (float)uVar21;
            VStack_13.z = (float)uVar22;
            if (pMVar1 != (MvCharacterController *)0x0) {
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pMVar1,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
                VVar11 = *pVVar3;
                pMVar1 = (this->fields).controllerLocal;
                if (pMVar1 != (MvCharacterController *)0x0) {
                  pVVar3 = (Vector3 *)
                            mscorlib.dll::System::
                            Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
                            Reflection::CustomAttributeNamedArgument]::
                            Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                                      ((CustomAttributeNamedArgument *)&stack0xffffffc8,
                                       (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument_
                                        *)pMVar1,(MethodInfo *)0x0);
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                      ((Vector3 *)&stack0xffffffc8,VVar11,*pVVar3,(MethodInfo *)0x0
                                      );
                  b_01.y = hitData.positionTouchingHit.x;
                  b_01.x = (float)in_stack_12;
                  b_01.z = hitData.positionTouchingHit.y;
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                      ((Vector3 *)&stack0xffffffc8,*pVVar3,b_01,(MethodInfo *)0x0);
                  uVar23 = pVVar3->x;
                  uVar24 = pVVar3->y;
                  pOStack_10 = (Object *)pVVar3->z;
                  uStack_4 = uStack_4 & 0xffffffff00000000;
                  VStack_13.x = hitData.slopeNormal.x;
                  VStack_13.y = hitData.slopeNormal.y;
                  VStack_13.z = (float)uVar23;
                  pTStack_9 = (Type *)uVar24;
                  func_?();
                  pTStack_9 = (Type *)VStack_13.z;
                  uStack_4 = uStack_4 & 0xffffffff00000000;
                  VStack_13.z = VStack_13.y;
                  VStack_13.y = (float)&stack0xffffffb8;
                  VStack_13.x = (float)&UNK_?;
                  pOStack_10 = (Object *)fVar5;
                  fVar25 = (float10)func_?();
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)&stack0xffffffc8,hitData._32_12_,(float)fVar25,
                                       (MethodInfo *)0x0);
                  VVar11 = *pVVar3;
                  pMVar1 = (this->fields).controllerLocal;
                  if (pMVar1 != (MvCharacterController *)0x0) {
                    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_transform((Component_1 *)pMVar1,(MethodInfo *)0x0);
                    pMVar1 = (this->fields).controllerLocal;
                    if (pMVar1 != (MvCharacterController *)0x0) {
                      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pMVar1,(MethodInfo *)0x0);
                      if (this_00 != (Transform *)0x0) {
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffc8,this_00,(MethodInfo *)0x0);
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Addition((Vector3 *)&stack0xffffffc8,*pVVar3,VVar11,
                                                      (MethodInfo *)0x0);
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
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

/* decompilation failed: Recoverable Error: Unable to find unique hash for varnode */


/* Void ScaleChanged() */

void Assembly-CSharp.dll::SizeState::SizeState_ScaleChanged(SizeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  scale = (MVInteractable *)SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  pfVar1 = &(this->fields).currentSize;
  if (*pfVar1 <= (float)scale && (float)scale != *pfVar1) {
    pVVar2 = SizeState_FindValidMoveLocation
                       ((Vector3 *)&stack0xffffffe8,this,(float)scale,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar6 = (this->fields).controllerLocal;
    if ((pMVar6 == (MvCharacterController *)0x0) ||
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pMVar6,(MethodInfo *)0x0), this_00 == (Transform *)0x0))
    goto code_?;
    value.y = (float)uVar4;
    value.x = (float)uVar3;
    value.z = fVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    scale = (this->fields).interactableLocal;
    if (scale == (MVInteractable *)0x0) goto code_?;
    cVar7 = (*(code *)(scale->klass->vtable).HasModifierEffect.method)();
    if (cVar7 != '\0') {
      pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).EquipSlapGunEvent
      ;
      if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
        func_?();
      }
      if (pEVar8 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (pEVar8,(Object *)this,
                 (InitializedGameQueryDataEventArgs *)
                 TypeInfo__System__EventArgs->static_fields->Empty,(MethodInfo *)0x0);
      scale = (MVInteractable *)this;
    }
  }
  else {
    pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).UnEquipSlapGunEvent
    ;
    if (pEVar8 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__EventArgs);
      }
      if (pEVar8 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) goto code_?;
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (pEVar8,(Object *)this,
                 (InitializedGameQueryDataEventArgs *)
                 TypeInfo__System__EventArgs->static_fields->Empty,
                 MethodInfo__System__EventHandler<System::EventArgs>__Invoke_System__Object__System__EventArgs_
                );
      scale = (MVInteractable *)this;
    }
  }
  pMVar6 = (this->fields).controllerLocal;
  if (pMVar6 != (MvCharacterController *)0x0) {
    MvCharacterController::MvCharacterController_SetScale(pMVar6,(float)scale,(MethodInfo *)0x0);
    pEVar8 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).CameraScaleEvent;
    if (pEVar8 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      e = (InitializedGameQueryDataEventArgs *)func_?();
      ScaleArgs::ScaleArgs__ctor((ScaleArgs *)e,(float)pMVar6,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (pEVar8,(Object *)this,e,
                 MethodInfo__System__EventHandler<ScaleArgs>__Invoke_System__Object__ScaleArgs_);
    }
    (this->fields).currentSize = (float)pMVar6;
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SizeState->static_fields->layerMask =
       ~(1 << (uVar1 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar2 & 0x1f));
  this = (List_1_UnityEngine_Vector4_ *)
         func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar3 = (ManualResetEvent *)0x0;
  uVar4 = 0;
  uVar5 = 0;
  func_?();
  if (this != (List_1_UnityEngine_Vector4_ *)0x0) {
    item_08.m_DelagateState = (Object *)uVar5;
    item_08.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_08.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_08,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_09.m_DelagateState = (Object *)uVar5;
    item_09.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_09.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_09,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_10.m_DelagateState = (Object *)uVar5;
    item_10.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_10.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_10,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar6 = 0;
    func_?();
    item_11.m_WaitHandle = pMVar3;
    item_11.m_DelagateCallback = (SendOrPostCallback *)(int)uVar6;
    item_11.m_DelagateState = (Object *)(int)((ulonglong)uVar6 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_11,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_12.m_DelagateState = (Object *)uVar5;
    item_12.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_12.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_12,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_13.m_DelagateState = (Object *)uVar5;
    item_13.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_13.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_13,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_14.m_DelagateState = (Object *)uVar5;
    item_14.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_14.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_14,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_15.m_DelagateState = (Object *)uVar5;
    item_15.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_15.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_15,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar6 = 0;
    func_?();
    item_16.m_WaitHandle = pMVar3;
    item_16.m_DelagateCallback = (SendOrPostCallback *)(int)uVar6;
    item_16.m_DelagateState = (Object *)(int)((ulonglong)uVar6 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_16,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    pSVar7 = (SafeWaitHandle *)0x0;
    uVar4._0_1_ = 0;
    uVar4._1_3_ = 0;
    func_?();
    item_17.m_DelagateState = (Object *)uVar4;
    item_17.m_DelagateCallback = (SendOrPostCallback *)pSVar7;
    item_17.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_17,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    MVar8._identity = (ServerIdentity *)&stack0xffffff78;
    pMVar9 = (ManualResetEvent__Class *)0x0;
    pMVar10 = (MonitorData *)&UNK_?;
    func_?();
    item_18.m_DelagateState = (Object *)pMVar10;
    item_18.m_DelagateCallback = (SendOrPostCallback *)pMVar9;
    item_18.m_WaitHandle = (ManualResetEvent *)MVar8._identity;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_18,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_19.m_DelagateState = (Object *)uVar5;
    item_19.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_19.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_19,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_20.m_DelagateState = (Object *)uVar5;
    item_20.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_20.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_20,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar6 = 0;
    func_?();
    item_21.m_WaitHandle = pMVar3;
    item_21.m_DelagateCallback = (SendOrPostCallback *)(int)uVar6;
    item_21.m_DelagateState = (Object *)(int)((ulonglong)uVar6 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_21,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_22.m_DelagateState = (Object *)uVar5;
    item_22.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_22.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_22,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_23.m_DelagateState = (Object *)uVar5;
    item_23.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_23.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_23,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    method = (MethodInfo *)0x0;
    pSVar11 = (SendOrPostCallback *)0x0;
    uVar4 = 0;
    func_?();
    pOVar12 = (Object *)uVar4;
    UVar13.m_DelagateCallback = pSVar11;
    UVar13 = (UnitySynchronizationContext_WorkRequest)CONCAT84(uVar14,UVar13.m_DelagateCallback);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,UVar13,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    UVar13.m_DelagateState = (Object *)uVar5;
    UVar13.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    UVar13.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,UVar13,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar6 = 0;
    func_?();
    item.m_WaitHandle = pMVar3;
    item.m_DelagateCallback = (SendOrPostCallback *)(int)uVar6;
    item.m_DelagateState = (Object *)(int)((ulonglong)uVar6 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_00.m_DelagateState = (Object *)uVar5;
    item_00.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_00.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_00,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_01.m_DelagateState = (Object *)uVar5;
    item_01.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_01.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_02.m_DelagateState = (Object *)uVar5;
    item_02.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_02.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_02,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_03.m_DelagateState = (Object *)uVar5;
    item_03.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_03.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_03,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar6 = 0;
    func_?();
    item_04.m_WaitHandle = pMVar3;
    item_04.m_DelagateCallback = (SendOrPostCallback *)(int)uVar6;
    item_04.m_DelagateState = (Object *)(int)((ulonglong)uVar6 >> 0x20);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_04,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_05.m_DelagateState = (Object *)uVar5;
    item_05.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_05.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_05,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_06.m_DelagateState = (Object *)uVar5;
    item_06.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_06.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_06,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    pMVar3 = (ManualResetEvent *)0x0;
    uVar4 = 0;
    uVar5 = 0;
    func_?();
    item_07.m_DelagateState = (Object *)uVar5;
    item_07.m_DelagateCallback = (SendOrPostCallback *)uVar4;
    item_07.m_WaitHandle = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
              ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this,item_07,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
              );
    TypeInfo__SizeState->static_fields->relativePositions = (List_1_UnityEngine_Vector3_ *)this;
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* SizeState(MVInteractable, MvCharacterController) */

void Assembly-CSharp.dll::SizeState::SizeState__ctor
               (SizeState *this,MVInteractable *interactable,MvCharacterController *controller,
               MethodInfo *method)

{
  (this->fields).currentSize = 1.0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).interactableLocal = interactable;
  (this->fields).controllerLocal = controller;
  return;
}


/* Void add_CameraScaleEvent(EventHandler`1[ScaleArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_add_CameraScaleEvent
               (SizeState *this,EventHandler_1_ScaleArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).CameraScaleEvent;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ScaleArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ScaleArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ScaleArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScaleArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_EquipSlapGunEvent(EventHandler) */

void Assembly-CSharp.dll::SizeState::SizeState_add_EquipSlapGunEvent
               (SizeState *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).EquipSlapGunEvent;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar2->klass == TypeInfo__System__EventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_UnEquipSlapGunEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_add_UnEquipSlapGunEvent
               (SizeState *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).UnEquipSlapGunEvent;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Single get_AvatarScale() */

float Assembly-CSharp.dll::SizeState::SizeState_get_AvatarScale(SizeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactableLocal;
  if (pMVar1 != (MVInteractable *)0x0) {
    cVar2 = (*(code *)(pMVar1->klass->vtable).HasModifierEffect.method)
                      (pMVar1,5,(pMVar1->klass->vtable).HandleModifierEffect.methodPtr);
    if (cVar2 == '\0') {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = (AvatarUIHandlerRemote *)
                MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (this_00 != (AvatarUIHandlerRemote *)0x0) {
        this_01 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                            (this_00,(MethodInfo *)0x0);
        if (this_01 != (ShieldBar *)0x0) {
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
          Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                    ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *
                     )this_01,
                     MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                    );
          return (float)extraout_ST0;
        }
      }
    }
    else {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractable *)0x0) {
        fVar3 = (float10)(*(code *)(pMVar1->klass->vtable).HandleModifierEffect.method)
                                   (pMVar1,5,0x3f800000,
                                    (pMVar1->klass->vtable).ClearModifiers.methodPtr);
        return (float)fVar3;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  fVar3 = (float10)(*pcVar4)();
  return (float)fVar3;
}


/* Single get_ControllerCenterY() */

float Assembly-CSharp.dll::SizeState::SizeState_get_ControllerCenterY
                (SizeState *this,MethodInfo *method)

{
  this_00 = (this->fields).controllerLocal;
  if (this_00 != (MvCharacterController *)0x0) {
    pCVar1 = mscorlib.dll::System::Array+ArrayReadOnlyList`1[T]+<GetEnumerator>c__Iterator0[System::
             Reflection::CustomAttributeNamedArgument]::
             Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument__System_Collections_Generic_IEnumerator_T__get_Current
                       (&CStack_2,
                        (Array_ArrayReadOnlyList_1_T_GetEnumerator_c_Iterator0_System_Reflection_CustomAttributeNamedArgument_
                         *)this_00,(MethodInfo *)0x0);
    pOStack_3 = (pCVar1->typedArgument).value;
    return (float)pOStack_3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Single get_ControllerRadius() */

float Assembly-CSharp.dll::SizeState::SizeState_get_ControllerRadius
                (SizeState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    return (pMVar1->fields).elipsoidRadius.x;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  fVar3 = (float10)(*pcVar2)();
  return (float)fVar3;
}


/* Void remove_CameraScaleEvent(EventHandler`1[ScaleArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_CameraScaleEvent
               (SizeState *this,EventHandler_1_ScaleArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).CameraScaleEvent;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_ScaleArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<ScaleArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<ScaleArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_ScaleArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_EquipSlapGunEvent(EventHandler) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_EquipSlapGunEvent
               (SizeState *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).EquipSlapGunEvent;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler__Class *)pDVar2->klass == TypeInfo__System__EventHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_UnEquipSlapGunEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_UnEquipSlapGunEvent
               (SizeState *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).UnEquipSlapGunEvent;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_EventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<System::EventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_EventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

