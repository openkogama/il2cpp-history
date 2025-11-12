
/* Void CheckMoveables(MvCharacterController, Single) */

void Assembly-CSharp.dll::MVMovableMotorState::MVMovableMotorState_CheckMoveables
               (MVMovableMotorState *this,MvCharacterController *controller,float tolerance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVOverlapResult>__GetEnumerator__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_10 = (Object *)0x0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  if (controller != (MvCharacterController *)0x0) {
    source.genericMethod =
         (Il2CppGenericMethod *)
         MvCharacterController::MvCharacterController_GetOverlappingObjects
                   (controller,(MethodInfo *)0x0);
    bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_3
                       ((IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                        source.genericMethod,
                        bool_MethodInfo__System__Linq__Enumerable__Any<MVOverlapResult>_System__Collections__Generic__IEnumerable<MVOverlapResult>_
                       );
    if (bVar2 == 0) {
      return;
    }
    if ((List_1_MVOverlapResult_ *)source.genericMethod != (List_1_MVOverlapResult_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      directionFactor = _UNK_?;
      p_Stack_1d0 = (_union_155 *)
                    ((ulonglong)
                     (uint)*(int32_t *)((longlong)&source.genericMethod[1].methodDefinition + 4) <<
                    0x20);
      uStack_9 = 0;
      uStack_10 = 0;
      lStack_11 = (longlong)p_Stack_1d0;
      uStack_12._0_2_ = 0;
      uStack_12._2_1_ = 0;
      uStack_12._3_5_ = 0;
      lStack_13 = 0;
      uStack_4 = 0;
      p_Stack_1d0 = &_Stack_148;
      _Stack_148.genericMethod = source.genericMethod;
code_?:
      cVar14 = FUN_?(&_Stack_148,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVOverlapResult>__MoveNext__
                            );
      lVar15 = lStack_13;
      if (cVar14 == '\0') {
        return;
      }
      key = (int32_t)uStack_12;
      pOStackX_10 = (Object *)0x0;
      pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar16 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar17 = (pMVar16->fields)._MoveableController_k__BackingField;
      if (pMVar17 != (MoveableController *)0x0) {
        this_00 = (pMVar17->fields).CubeModelMovableMap;
        if (this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
code_?:
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryGetValue
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_10,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
            );
  if (pOStackX_10 == (Object *)0x0) goto code_?;
  pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)controller,(MethodInfo *)0x0);
  if (pGVar19 == (GameObject *)0x0) goto code_?;
  pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar19,(MethodInfo *)0x0);
  if (pTVar20 != (Transform *)0x0) {
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_22,pTVar20,(MethodInfo *)0x0);
    uVar23._0_4_ = pVVar21->x;
    uVar23._4_4_ = pVVar21->y;
    fVar24 = pVVar21->z;
    VStack_25._0_8_ = uVar23;
    VStack_25.z = fVar24;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_27._0_4_ = (pVVar26->zeroVector).x;
    uStack_27._4_4_ = (pVVar26->zeroVector).y;
    fVar28 = (pVVar26->zeroVector).z;
    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
      pMVar17 = (pMVar16->fields)._MoveableController_k__BackingField;
      if (pOStackX_10 != (Object *)0x0) {
        if (pMVar17 != (MoveableController *)0x0) {
          VStack_29._0_8_ = uVar23;
          VStack_29.z = fVar24;
          pVVar21 = MoveableController::MoveableController_GetVel
                              (&VStack_30,pMVar17,
                               *(int32_t *)((longlong)&pOStackX_10[0xb].monitor + 4),&VStack_29,
                               (MethodInfo *)0x0);
          uStack_31._0_4_ = pVVar21->x;
          uStack_31._4_4_ = pVVar21->y;
          fVar24 = pVVar21->z;
          fVar32 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          fVar33 = (float)uStack_31 / fVar32;
          fVar34 = uStack_31._4_4_ / fVar32;
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
            pMVar17 = (pMVar16->fields)._MoveableController_k__BackingField;
            if (pOStackX_10 != (Object *)0x0) {
              if (pMVar17 != (MoveableController *)0x0) {
                MoveableController::MoveableController_UpdateSingleMoveableInChain
                          (pMVar17,*(int32_t *)((longlong)&pOStackX_10[0xb].monitor + 4),
                           _UNK_?,(MethodInfo *)0x0);
                fVar35 = VStack_25.z;
                fVar36 = 0.0;
                if (lVar15 != 0) {
                  fVar37 = VStack_25.y;
                  fVar38 = VStack_25.x;
                  uVar3 = 0;
                  while( true ) {
                    if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar3) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar3) {
                      FUN_?();
code_?:
                      FUN_?();
                      goto code_?;
                    }
                    if (pOStackX_10 == (Object *)0x0) goto code_?;
                    pGVar19 = (GameObject *)pOStackX_10[0xc].monitor;
                    uVar39 = *(undefined4 *)(lVar15 + 0x20 + (longlong)(int)uVar3 * 6);
                    iVar40 = *(int16_t *)(lVar15 + 0x24 + (longlong)(int)uVar3 * 6);
                    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    aIStack_41[0]._0_4_ = uVar39;
                    aIStack_41[0].z = iVar40;
                    pVVar21 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                                        (&VStack_42,pGVar19,aIStack_41,(MethodInfo *)0x0);
                    uVar43 = pVVar21->x;
                    fVar28 = (fVar35 - pVVar21->z) + fVar28;
                    uStack_27 = (ulonglong)(uint)((fVar38 - (float)uVar43) + (float)uStack_27);
                    fVar36 = fVar36 + directionFactor;
                    uVar3 = uVar3 + 1;
                  }
                  if (_UNK_? < fVar36) {
                    uStack_27._0_4_ = (float)uStack_27 / fVar36;
                    fVar28 = fVar28 / fVar36;
                  }
                  (controller->fields).sendCollisionData = 0;
                  uStack_44 = CONCAT44(fVar34,fVar33);
                  fStack_45 = fVar24 / fVar32;
                  (*(controller->klass->vtable).__unknown_1.methodPtr)(controller,&uStack_44);
                  (controller->fields).sendCollisionData = 1;
                  pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
                    pMVar17 = (pMVar16->fields)._MoveableController_k__BackingField;
                    if (pOStackX_10 != (Object *)0x0) {
                      if (pMVar17 != (MoveableController *)0x0) {
                        MoveableController::MoveableController_UpdateSingleMoveableInChain
                                  (pMVar17,*(int32_t *)((longlong)&pOStackX_10[0xb].monitor + 4),
                                   directionFactor,(MethodInfo *)0x0);
                        bVar2 = MvCharacterController::MvCharacterController_CheckOverLap
                                           (controller,(MethodInfo *)0x0);
                        if (bVar2 == 0) {
code_?:
                          pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject
                                              ((Component *)controller,(MethodInfo *)0x0);
                          if (pGVar19 != (GameObject *)0x0) {
                            pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar19,(MethodInfo *)0x0);
                            if (pTVar20 != (Transform *)0x0) {
                              pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_position(aVStack_46,pTVar20,(MethodInfo *)0x0)
                              ;
                              uVar47 = pVVar21->x;
                              uVar48 = pVVar21->y;
                              fStack_49 = fVar35 - pVVar21->z;
                              pIStack_50 = (Il2CppClass *)
                                            CONCAT44(fVar37 - (float)uVar48,fVar38 - (float)uVar47);
                              (*(controller->klass->vtable).__unknown_1.methodPtr)
                                        (controller,&pIStack_50,
                                         (controller->klass->vtable).__unknown_1.method);
                              goto code_?;
                            }
                            goto code_?;
                          }
                        }
                        else {
                          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                              ((MethodInfo *)0x0);
                          if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
                            pMVar17 = (pMVar16->fields)._MoveableController_k__BackingField;
                            if (pOStackX_10 != (Object *)0x0) {
                              if (pMVar17 != (MoveableController *)0x0) {
                                MoveableController::MoveableController_UpdateSingleMoveableInChain
                                          (pMVar17,*(int32_t *)
                                                    ((longlong)&pOStackX_10[0xb].monitor + 4),
                                           _UNK_?,(MethodInfo *)0x0);
                                pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)controller,(MethodInfo *)0x0);
                                if (pGVar19 != (GameObject *)0x0) {
                                  pTVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar19,(MethodInfo *)0x0);
                                  if (pTVar20 != (Transform *)0x0) {
                                    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_position
                                                        (&VStack_51,pTVar20,(MethodInfo *)0x0);
                                    uVar52 = pVVar21->x;
                                    uVar53 = pVVar21->y;
                                    auStack_54._8_4_ = fVar35 - pVVar21->z;
                                    (controller->fields).sendCollisionData = 0;
                                    auStack_54._0_8_ =
                                         CONCAT44(fVar37 - (float)uVar53,fVar38 - (float)uVar52);
                                    method_00 = (MethodInfo *)auStack_54;
                                    (*(controller->klass->vtable).__unknown_1.methodPtr)
                                              (controller,method_00,
                                               (controller->klass->vtable).__unknown_1.method);
                                    (controller->fields).sendCollisionData = 1;
                                    fVar24 = 0.0;
                                    VStack_1.y = 0.0;
                                    VStack_1.x = (float)uStack_27;
                                    VStack_1.z = fVar28;
                                    if ((float)uStack_27 * (float)uStack_27 + 0.0 +
                                        fVar28 * fVar28 < tolerance * tolerance) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                      Vector3_Normalize_1(&VStack_1,method_00);
                                      uStack_27._0_4_ = VStack_1.x * tolerance;
                                      fVar24 = VStack_1.y * tolerance;
                                      fVar28 = VStack_1.z * tolerance;
                                    }
                                    (controller->fields).sendCollisionData = 0;
                                    pIStack_55 = (InvokerMethod)CONCAT44(fVar24,(float)uStack_27);
                                    fStack_56 = fVar28;
                                    (*(controller->klass->vtable).__unknown_1.methodPtr)
                                              (controller,&pIStack_55);
                                    (controller->fields).sendCollisionData = 1;
                                    pMVar16 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                                        ((MethodInfo *)0x0);
                                    if (pMVar16 != (MVWorldObjectClientManager *)0x0) {
                                      pMVar17 = (pMVar16->fields).
                                                _MoveableController_k__BackingField;
                                      if (pOStackX_10 != (Object *)0x0) {
                                        if (pMVar17 != (MoveableController *)0x0) {
                                          MoveableController::
                                          MoveableController_UpdateSingleMoveableInChain
                                                    (pMVar17,*(int32_t *)
                                                              ((longlong)&pOStackX_10[0xb].monitor +
                                                              4),directionFactor,(MethodInfo *)0x0);
                                          goto code_?;
                                        }
code_?:
                                        FUN_?();
                                      }
                                      FUN_?();
                                    }
                                    FUN_?();
                                  }
                                  FUN_?();
                                }
                                FUN_?();
                              }
                              FUN_?();
                            }
                            FUN_?();
                          }
                          FUN_?();
code_?:
                          FUN_?();
                        }
                        FUN_?();
                      }
                      FUN_?();
                    }
                    FUN_?();
                  }
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean Move(Vector3, MvCharacterController, Single, MVGroundState, Vector3 ByRef) */

bool Assembly-CSharp.dll::MVMovableMotorState::MVMovableMotorState_Move
               (MVMovableMotorState *this,Vector3 *velocity,MvCharacterController *controller,
               float tolerance,MVGroundState *groundState,Vector3 *movableVelocityVector,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(&MStack_1,0,0xa8);
  MVMovableMotorState_CheckMoveables(this,controller,tolerance,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).z;
  fVar4 = (pVVar2->zeroVector).y;
  movableVelocityVector->x = (pVVar2->zeroVector).x;
  movableVelocityVector->y = fVar4;
  movableVelocityVector->z = fVar3;
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar5 = TypeInfo__MVPhysics->static_fields;
  uVar6._0_4_ = (pMVar5->gravity).currentCryptoKey;
  uVar6._4_4_ = (pMVar5->gravity).hiddenValue;
  pBVar7 = (pMVar5->gravity).hiddenValueOld;
  uVar8._0_4_ = (pMVar5->gravity).fakeValue;
  uVar8._4_1_ = (pMVar5->gravity).inited;
  uVar8._5_3_ = *(undefined3 *)&(pMVar5->gravity).field_0x15;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_9 = (undefined1  [8])uVar6;
  pBStack_10 = pBVar7;
  uStack_11 = uVar8;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_9,(MethodInfo *)0x0);
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  pcRam_? = pcVar12;
  fVar4 = (float)(*pcRam_?)();
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  pcRam_? = pcVar12;
  fVar14 = (float)(*pcRam_?)();
  fVar14 = fVar14 * fVar4 * fVar3;
  if (groundState != (MVGroundState *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15._0_4_ = (int32_t)(pVVar2->downVector).x;
    uVar15._4_4_ = (ACTkByte4)(pVVar2->downVector).y;
    fVar3 = (pVVar2->downVector).z;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcRam_? = pcVar12;
    fVar4 = (float)(*pcRam_?)();
    auStack_9._0_4_ = velocity->x;
    auStack_9._4_4_ = velocity->y;
    if (controller != (MvCharacterController *)0x0) {
      pBStack_10 = (Byte__Array *)CONCAT44(pBStack_10._4_4_,fVar3);
      auStack_16._4_4_ = (float)auStack_9._4_4_ * fVar4;
      auStack_16._0_4_ = (float)auStack_9._0_4_ * fVar4;
      fStack_17 = velocity->z * fVar4;
      auStack_9 = (undefined1  [8])uVar15;
      bVar13 = MvCharacterController::MvCharacterController_TestWithOutSliding
                         (controller,fVar14 + _UNK_?,(Vector3 *)auStack_9,
                          (Vector3 *)auStack_16,&MStack_1,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        return 0;
      }
      auStack_9._0_4_ = MStack_1.slopeNormal.x;
      auStack_9._4_4_ = MStack_1.slopeNormal.y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar18._0_4_ = (int32_t)(pVVar2->upVector).x;
      uVar18._4_4_ = (ACTkByte4)(pVVar2->upVector).y;
      bVar19 = (float)((uint)((float)auStack_9._4_4_ * (float)uVar18._4_4_ +
                             (float)auStack_9._0_4_ * (float)(int32_t)uVar18 +
                            MStack_1.slopeNormal.z * (pVVar2->upVector).z) & _UNK_?) <=
              _UNK_?;
      pOStackX_18 = (Object *)0x0;
      auStack_9 = (undefined1  [8])uVar18;
      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar20 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar21 = (pMVar20->fields)._MoveableController_k__BackingField,
          pMVar21 != (MoveableController *)0x0)) &&
         (this_00 = (pMVar21->fields).CubeModelMovableMap,
         this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,MStack_1.hit.woId,
                   &pOStackX_18,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                  );
        if (pOStackX_18 == (Object *)0x0) {
          return bVar19;
        }
        pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar20 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar21 = (pMVar20->fields)._MoveableController_k__BackingField,
           pOStackX_18 != (Object *)0x0)) {
          movableGameObjectID = *(int32_t *)((longlong)&pOStackX_18[0xb].monitor + 4);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)controller,(MethodInfo *)0x0);
          if ((this_01 != (GameObject *)0x0) &&
             (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_16._0_4_ = 0;
            auStack_16[4] = 0;
            auStack_16[5] = 0;
            auStack_16[6] = 0;
            auStack_16[7] = 0;
            fStack_17 = 0.0;
            pvVar22 = (obj->fields)._._.m_CachedPtr;
            if (pvVar22 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              bVar13 = (*pcVar12)();
              return bVar13;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar12 = (code *)swi(3);
              bVar13 = (*pcVar12)();
              return bVar13;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar22,auStack_16);
            if (pMVar21 != (MoveableController *)0x0) {
              auStack_9 = auStack_16;
              pBStack_10 = (Byte__Array *)CONCAT44(pBStack_10._4_4_,fStack_17);
              pVVar23 = MoveableController::MoveableController_GetVel
                                  ((Vector3 *)auStack_16,pMVar21,movableGameObjectID,
                                   (Vector3 *)auStack_9,(MethodInfo *)0x0);
              fVar4 = pVVar23->y;
              fVar3 = pVVar23->z;
              movableVelocityVector->x = pVVar23->x;
              movableVelocityVector->y = fVar4;
              movableVelocityVector->z = fVar3;
              if (0.0 < movableVelocityVector->y) {
                movableVelocityVector->y = movableVelocityVector->y - fVar14;
              }
              auStack_9._0_4_ = movableVelocityVector->x;
              auStack_9._4_4_ = movableVelocityVector->y;
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar12 = (code *)swi(3);
                bVar13 = (*pcVar12)();
                return bVar13;
              }
              pcRam_? = pcVar12;
              fVar4 = (float)(*pcRam_?)();
              MStack_24.positionTouchingHit.x = MStack_1.positionTouchingHit.x;
              MStack_24.positionTouchingHit.y = MStack_1.positionTouchingHit.y;
              MStack_24.positionTouchingHit.z = MStack_1.positionTouchingHit.z;
              MStack_24.moveDirection.x = MStack_1.moveDirection.x;
              MStack_24.moveDirection.y = MStack_1.moveDirection.y;
              MStack_24.moveDirection.z = MStack_1.moveDirection.z;
              MStack_24.elipsoidNormal.x = MStack_1.elipsoidNormal.x;
              MStack_24.elipsoidNormal.y = MStack_1.elipsoidNormal.y;
              MStack_24.impactVelocity.x = MStack_1.impactVelocity.x;
              MStack_24.impactVelocity.y = MStack_1.impactVelocity.y;
              MStack_24.impactVelocity.z = MStack_1.impactVelocity.z;
              MStack_24._60_4_ = MStack_1._60_4_;
              MStack_24.hit.point.x = MStack_1.hit.point.x;
              MStack_24.hit.point.y = MStack_1.hit.point.y;
              MStack_24.hit.point.z = MStack_1.hit.point.z;
              MStack_24.hit.normal.x = MStack_1.hit.normal.x;
              MStack_24.hit.normal.y = MStack_1.hit.normal.y;
              MStack_24.hit.normal.z = MStack_1.hit.normal.z;
              MStack_24.hit.cubePos = MStack_1.hit.cubePos;
              MStack_24.hit._30_2_ = MStack_1.hit._30_2_;
              MStack_24.hit.face = MStack_1.hit.face;
              MStack_24.hit.isCubeHit = MStack_1.hit.isCubeHit;
              MStack_24.hit._37_3_ = MStack_1.hit._37_3_;
              movableVelocityVector->x = (float)auStack_9._0_4_ / fVar4;
              movableVelocityVector->y = (float)auStack_9._4_4_ / fVar4;
              MStack_24.hit.cube = MStack_1.hit.cube;
              MStack_24.hit.distance = MStack_1.hit.distance;
              MStack_24.hit._60_4_ = MStack_1.hit._60_4_;
              MStack_24.hit.collider = MStack_1.hit.collider;
              MStack_24.hit.transform = MStack_1.hit.transform;
              MStack_24.hit.interactionFlags = MStack_1.hit.interactionFlags;
              MStack_24.material = MStack_1.material;
              MStack_24.testWithOutMoving = MStack_1.testWithOutMoving;
              MStack_24._161_7_ = MStack_1._161_7_;
              movableVelocityVector->z = fVar3 / fVar4;
              MVGroundState::MVGroundState_UpdateGroundData
                        (groundState,controller,1,&MStack_24,(MethodInfo *)0x0);
              MVGroundState::MVGroundState_UpdateGroundChange(groundState,(MethodInfo *)0x0);
              return bVar19;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}

