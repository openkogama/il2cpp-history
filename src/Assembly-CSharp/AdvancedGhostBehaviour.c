
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Awake
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OStack_1.fakeValue = 0.0;
  OStack_1.inited = 0;
  OStack_1._21_3_ = 0;
  OStack_1.currentCryptoKey = 0;
  OStack_1.hiddenValue.b1 = 0;
  OStack_1.hiddenValue.b2 = 0;
  OStack_1.hiddenValue.b3 = 0;
  OStack_1.hiddenValue.b4 = 0;
  OStack_1.hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(_UNK_?,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(&OStack_1,value,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    OStack_1.fakeValue = 10.0;
  }
  bVar3 = iRam_? != 0;
  (this->fields).speed.currentCryptoKey = OStack_1.currentCryptoKey;
  (this->fields).speed.hiddenValue = OStack_1.hiddenValue;
  (this->fields).speed.hiddenValueOld = OStack_1.hiddenValueOld;
  (this->fields).speed.fakeValue = OStack_1.fakeValue;
  (this->fields).speed.inited = OStack_1.inited;
  *(undefined3 *)&(this->fields).speed.field_0x15 = OStack_1._21_3_;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).speed.hiddenValueOld >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* Void DoRespawn() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_DoRespawn
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).clearEffectsBecauseOfReset != 0) {
    this_00 = (this->fields).GhostVisualization;
    if (this_00 == (AdvancedGhostVisualizaton *)0x0) goto code_?;
    AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
              (this_00,AdvancedGhostVisualizaton_Effect__Enum_None,0.0,(MethodInfo *)0x0);
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).networkedValues;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  uVar4 = (*pcRam_?)();
  if (pAVar1 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar5 = (float)(uVar4 ^ _UNK_?) * _UNK_?;
    pFVar6 = (pAVar1->fields).patrolPattern;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar7 != (MVGameControllerBase *)0x0) &&
       (this_01 = (pMVar7->fields).game, this_01 != (MVNetworkGame *)0x0)) {
      iVar8 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
      pAVar9 = (pAVar1->fields).ghostBehaviour;
      if (pAVar9 != (AdvancedGhostBehaviour *)0x0) {
        uVar10._0_4_ = (pAVar9->fields).speed.currentCryptoKey;
        uVar10._4_4_ = (pAVar9->fields).speed.hiddenValue;
        pBVar11 = (pAVar9->fields).speed.hiddenValueOld;
        uVar3._0_4_ = (pAVar9->fields).speed.fakeValue;
        uVar3._4_1_ = (pAVar9->fields).speed.inited;
        uVar3._5_3_ = *(undefined3 *)&(pAVar9->fields).speed.field_0x15;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        aOStack_12[0]._0_8_ = uVar10;
        aOStack_12[0].hiddenValueOld = pBVar11;
        aOStack_12[0]._16_8_ = uVar3;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c
            == 0) {
          FUN_?();
        }
        fVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_InternalDecrypt(aOStack_12,(MethodInfo *)0x0);
        pAVar9 = (pAVar1->fields).ghostBehaviour;
        if (pAVar9 != (AdvancedGhostBehaviour *)0x0) {
          fVar14 = (pAVar9->fields).radius;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pAVar9,(MethodInfo *)0x0);
          if ((pTVar15 != (Transform *)0x0) &&
             (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                  (pTVar15,(MethodInfo *)0x0),
             pFVar6 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0)
             ) {
            puVar16 = (undefined8 *)
                      (*(pFVar6->fields)._._.invoke_impl)
                                (aOStack_12,(pFVar6->fields)._._.method_code,(int)fVar5 + iVar8,
                                 fVar13,fVar14,pTVar15,(pFVar6->fields)._._.method);
            if (obj != (Transform *)0x0) {
              VStack_17._0_8_ = *puVar16;
              VStack_17.z = *(float *)(puVar16 + 1);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar18 = (obj->fields)._._.m_CachedPtr;
              if (pvVar18 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar3 = func_?(&UNK_?);
                FUN_?(uVar3,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar18,&VStack_17);
              pAVar1 = (this->fields).networkedValues;
              if (pAVar1 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
                VStack_17.x = (pAVar1->fields).nextPosition.x;
                VStack_17.y = (pAVar1->fields).nextPosition.y;
                VStack_17.z = (pAVar1->fields).nextPosition.z;
                pAVar19 = (this->fields).advancedGhostMotor;
                (this->fields).nextPosition.x = VStack_17.x;
                (this->fields).nextPosition.y = VStack_17.y;
                (this->fields).nextPosition.z = VStack_17.z;
                pVVar20 = AdvancedGhostBehaviour_GetMoveVector
                                    ((Vector3 *)aOStack_12,this,&VStack_17,(MethodInfo *)0x0);
                if (pAVar19 != (AdvancedGhostMotor *)0x0) {
                  fVar13 = pVVar20->x;
                  fVar14 = pVVar20->y;
                  fVar5 = pVVar20->z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pLVar21 = (pAVar19->fields)._.impulseVectors;
                  if (pLVar21 != (List_1_UnityEngine_Vector3_ *)0x0) {
                    piVar22 = &(pLVar21->fields)._version;
                    *piVar22 = *piVar22 + 1;
                    (pLVar21->fields)._size = 0;
                    this_02 = (pAVar19->fields).smoothPhysicsMovement;
                    (pAVar19->fields).velocity.x = fVar13;
                    (pAVar19->fields).velocity.y = fVar14;
                    (pAVar19->fields).velocity.z = fVar5;
                    if (this_02 != (SmoothPhysicsMovement *)0x0) {
                      SmoothPhysicsMovement::SmoothPhysicsMovement_Reset(this_02,(MethodInfo *)0x0);
                      (this->fields).respawn = 0;
                      (this->fields).clearEffectsBecauseOfReset = 0;
                      return;
                    }
                  }
                }
                goto code_?;
              }
            }
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EditModeUpdateCulling() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_EditModeUpdateCulling
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pCVar1 = (this->fields).cullingSubscriberBase;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    fStack_3 = 0.0;
    pvVar4 = (obj->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    if (pCVar1 != (CullingSubscriberBase *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CullingApiWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      pBVar7 = TypeInfo__CullingApiWrapper->static_fields->spheres;
      if (pBVar7 != (BoundingSphere__Array *)0x0) {
        uVar8 = (pCVar1->fields)._CullingIndex_k__BackingField;
        if ((uint)pBVar7->max_length <= uVar8) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pBVar9 = pBVar7->vector + (int)uVar8;
        (pBVar9->position).x = (float)(undefined4)uStack_2;
        (pBVar9->position).y = (float)uStack_2._4_4_;
        (pBVar9->position).z = fStack_3;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_FixedUpdate
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostMotor;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pAVar1 != (AdvancedGhostMotor *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
      AdvancedGhostBehaviour_UpdatePositionAndRotation(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Vector3 GetMoveVector(Vector3) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_GetMoveVector
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour *this,Vector3 *targetPos
                    ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2._0_4_ = targetPos->x;
  uStack_2._4_4_ = targetPos->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->upVector).x;
  uVar5 = (pVVar3->upVector).y;
  fVar6 = (pVVar3->upVector).z + targetPos->z;
  fVar7 = (float)uVar4 + (float)uStack_2;
  fVar8 = (float)uVar5 + uStack_2._4_4_;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar9 = _UNK_?;
  pIVar10 = _UNK_?;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_11._0_4_ = targetPos->x;
  uStack_11._4_4_ = targetPos->y;
  fStack_12 = targetPos->z;
  VStack_13.y = fVar8;
  VStack_13.x = fVar7;
  pIStack_14 = pIVar10;
  pIStack_15 = pIVar9;
  VStack_13.z = fVar6;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    pVVar18 = (Vector3 *)(*pcVar16)();
    return pVVar18;
  }
  pcRam_? = pcVar16;
  uVar19 = _UNK_?;
  (*pcRam_?)(&uStack_11,&VStack_13,&pIStack_14,_UNK_?,1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2._0_4_ = targetPos->x;
  uStack_2._4_4_ = targetPos->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar20 = (pVVar3->rightVector).x;
  uVar21 = (pVVar3->rightVector).y;
  fVar6 = (pVVar3->rightVector).z + targetPos->z;
  fVar7 = (float)uVar20 + (float)uStack_2;
  fVar8 = (float)uVar21 + uStack_2._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar9 = _UNK_?;
  pIVar10 = _UNK_?;
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  uStack_2._0_4_ = targetPos->x;
  uStack_2._4_4_ = targetPos->y;
  fStack_22 = targetPos->z;
  VStack_23.y = fVar8;
  VStack_23.x = fVar7;
  MStack_24.methodPointer = pIVar10;
  MStack_24.virtualMethodPointer = pIVar9;
  VStack_23.z = fVar6;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar16 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar16 = (code *)swi(3);
    pVVar18 = (Vector3 *)(*pcVar16)();
    return pVVar18;
  }
  pcRam_? = pcVar16;
  (*pcRam_?)(&uStack_2,&VStack_23,&MStack_24,uVar19,1);
  pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar25 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_13.x = 0.0;
    VStack_13.y = 0.0;
    VStack_13.z = 0.0;
    pvVar26 = (pTVar25->fields)._._.m_CachedPtr;
    if (pvVar26 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
      pcVar16 = (code *)swi(3);
      pVVar18 = (Vector3 *)(*pcVar16)();
      return pVVar18;
    }
    pcVar16 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
      uVar17 = func_?(&UNK_?);
      FUN_?(uVar17,0);
      pcVar16 = (code *)swi(3);
      pVVar18 = (Vector3 *)(*pcVar16)();
      return pVVar18;
    }
    pcRam_? = pcVar16;
    (*pcRam_?)(pvVar26);
    pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar25 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_11 = 0;
      fStack_12 = 0.0;
      pvVar26 = (pTVar25->fields)._._.m_CachedPtr;
      if (pvVar26 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
        pcVar16 = (code *)swi(3);
        pVVar18 = (Vector3 *)(*pcVar16)();
        return pVVar18;
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar16 = (code *)swi(3);
        pVVar18 = (Vector3 *)(*pcVar16)();
        return pVVar18;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(pvVar26,&uStack_11);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_2._0_4_ = (pVVar3->upVector).x;
      uStack_2._4_4_ = (pVVar3->upVector).y;
      fVar6 = (pVVar3->upVector).z + fStack_12;
      fVar8 = uStack_2._4_4_ + uStack_11._4_4_;
      fVar7 = (float)uStack_2 + (float)uStack_11;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar9 = _UNK_?;
      pIVar10 = _UNK_?;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      uStack_2 = CONCAT44(fVar8,fVar7);
      VStack_23.x = VStack_13.x;
      VStack_23.y = VStack_13.y;
      MStack_24.methodPointer = pIVar10;
      MStack_24.virtualMethodPointer = pIVar9;
      VStack_23.z = VStack_13.z;
      fStack_22 = fVar6;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar16 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar16 = (code *)swi(3);
        pVVar18 = (Vector3 *)(*pcVar16)();
        return pVVar18;
      }
      pcRam_? = pcVar16;
      (*pcRam_?)(&VStack_23,&uStack_2,&MStack_24,uVar19,1);
      pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar25 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_13.x = 0.0;
        VStack_13.y = 0.0;
        VStack_13.z = 0.0;
        pvVar26 = (pTVar25->fields)._._.m_CachedPtr;
        if (pvVar26 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
          pcVar16 = (code *)swi(3);
          pVVar18 = (Vector3 *)(*pcVar16)();
          return pVVar18;
        }
        pcVar16 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar16 = (code *)swi(3);
          pVVar18 = (Vector3 *)(*pcVar16)();
          return pVVar18;
        }
        pcRam_? = pcVar16;
        (*pcRam_?)(pvVar26);
        pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar25 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_11 = 0;
          fStack_12 = 0.0;
          pvVar26 = (pTVar25->fields)._._.m_CachedPtr;
          if (pvVar26 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
            pcVar16 = (code *)swi(3);
            pVVar18 = (Vector3 *)(*pcVar16)();
            return pVVar18;
          }
          pcVar16 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
            uVar17 = func_?(&UNK_?);
            FUN_?(uVar17,0);
            pcVar16 = (code *)swi(3);
            pVVar18 = (Vector3 *)(*pcVar16)();
            return pVVar18;
          }
          pcRam_? = pcVar16;
          (*pcRam_?)(pvVar26,&uStack_11);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_2._0_4_ = (pVVar3->rightVector).x;
          uStack_2._4_4_ = (pVVar3->rightVector).y;
          fVar6 = (pVVar3->rightVector).z + fStack_12;
          fVar8 = uStack_2._4_4_ + uStack_11._4_4_;
          fVar7 = (float)uStack_2 + (float)uStack_11;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar9 = _UNK_?;
          pIVar10 = _UNK_?;
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          uStack_2 = CONCAT44(fVar8,fVar7);
          VStack_23.x = VStack_13.x;
          VStack_23.y = VStack_13.y;
          MStack_24.methodPointer = pIVar10;
          MStack_24.virtualMethodPointer = pIVar9;
          VStack_23.z = VStack_13.z;
          fStack_22 = fVar6;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar16 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
            uVar17 = func_?(&UNK_?);
            FUN_?(uVar17,0);
            pcVar16 = (code *)swi(3);
            pVVar18 = (Vector3 *)(*pcVar16)();
            return pVVar18;
          }
          pcRam_? = pcVar16;
          (*pcRam_?)(&VStack_23,&uStack_2,&MStack_24,uVar19,1);
          pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar25 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_13.x = 0.0;
            VStack_13.y = 0.0;
            VStack_13.z = 0.0;
            pvVar26 = (pTVar25->fields)._._.m_CachedPtr;
            if (pvVar26 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
              pcVar16 = (code *)swi(3);
              pVVar18 = (Vector3 *)(*pcVar16)();
              return pVVar18;
            }
            pcVar16 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar16 = (code *)swi(3);
              pVVar18 = (Vector3 *)(*pcVar16)();
              return pVVar18;
            }
            pcRam_? = pcVar16;
            (*pcRam_?)(pvVar26,&VStack_13);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar9 = _UNK_?;
            pIVar10 = _UNK_?;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            uStack_2._0_4_ = targetPos->x;
            uStack_2._4_4_ = targetPos->y;
            fStack_22 = targetPos->z;
            VStack_23.x = VStack_13.x;
            VStack_23.y = VStack_13.y;
            MStack_24.methodPointer = pIVar10;
            MStack_24.virtualMethodPointer = pIVar9;
            VStack_23.z = VStack_13.z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            pcVar16 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
              uVar17 = func_?(&UNK_?);
              FUN_?(uVar17,0);
              pcVar16 = (code *)swi(3);
              pVVar18 = (Vector3 *)(*pcVar16)();
              return pVVar18;
            }
            pcRam_? = pcVar16;
            method_00 = &MStack_24;
            (*pcRam_?)(&VStack_23,&uStack_2,method_00,uVar19,1);
            pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar25 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_11 = 0;
              fStack_12 = 0.0;
              pvVar26 = (pTVar25->fields)._._.m_CachedPtr;
              if (pvVar26 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar25,(MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                pVVar18 = (Vector3 *)(*pcVar16)();
                return pVVar18;
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                pVVar18 = (Vector3 *)(*pcVar16)();
                return pVVar18;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)(pvVar26);
              uStack_2._0_4_ = targetPos->x;
              uStack_2._4_4_ = targetPos->y;
              fVar6 = targetPos->z - fStack_12;
              fVar8 = uStack_2._4_4_ - uStack_11._4_4_;
              fVar7 = (float)uStack_2 - (float)uStack_11;
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                pVVar18 = (Vector3 *)(*pcVar16)();
                return pVVar18;
              }
              pcRam_? = pcVar16;
              fVar27 = (float)(*pcRam_?)();
              __return_storage_ptr__->x = fVar7 / fVar27;
              __return_storage_ptr__->y = fVar8 / fVar27;
              __return_storage_ptr__->z = fVar6 / fVar27;
              fVar8 = (float)FUN_?(__return_storage_ptr__);
              pIVar10 = *(Il2CppMethodPointer *)&(this->fields).speed;
              pBVar28 = (this->fields).speed.hiddenValueOld;
              MStack_24.invoker_method = *(InvokerMethod *)&(this->fields).speed.fakeValue;
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              MStack_24.methodPointer = pIVar10;
              MStack_24.virtualMethodPointer = (Il2CppMethodPointer)pBVar28;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_InternalDecrypt
                                 ((ObscuredFloat *)&MStack_24,(MethodInfo *)0x0);
              if (fVar7 < fVar8) {
                pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                    (&VStack_23,__return_storage_ptr__,method_00);
                pIVar10 = *(Il2CppMethodPointer *)&(this->fields).speed;
                pBVar28 = (this->fields).speed.hiddenValueOld;
                uStack_2._0_4_ = pVVar18->x;
                uStack_2._4_4_ = pVVar18->y;
                fVar8 = pVVar18->z;
                pIVar29 = *(InvokerMethod *)&(this->fields).speed.fakeValue;
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                MStack_24.methodPointer = pIVar10;
                MStack_24.virtualMethodPointer = (Il2CppMethodPointer)pBVar28;
                MStack_24.invoker_method = pIVar29;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                             field_0x1c == 0) {
                  FUN_?();
                }
                fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_InternalDecrypt
                                   ((ObscuredFloat *)&MStack_24,(MethodInfo *)0x0);
                __return_storage_ptr__->x = fVar7 * (float)uStack_2;
                __return_storage_ptr__->y = fVar7 * uStack_2._4_4_;
                __return_storage_ptr__->z = fVar7 * fVar8;
              }
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  pVVar18 = (Vector3 *)(*pcVar16)();
  return pVVar18;
}


/* Void Init(MVCubeModelBase, AdvancedGhostMotor, Func`1[Boolean], Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Init
               (AdvancedGhostBehaviour *this,MVCubeModelBase *body,
               AdvancedGhostMotor *advancedGhostMotor,Func_1_Boolean_ *deathCheckFunc,int32_t woID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdvancedGhostBehaviour__AdvancedGhostPerception);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdvancedGhostBehaviour__NetworkedValues);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).transformParent = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).transformParent >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_00 = (AdvancedGhostBehaviour_AdvancedGhostPerception *)
              FUN_?(TypeInfo__AdvancedGhostBehaviour__AdvancedGhostPerception);
    AdvancedGhostBehaviour+AdvancedGhostPerception::
    AdvancedGhostBehaviour_AdvancedGhostPerception__ctor(this_00,this,woID,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).perception = this_00;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).perception >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pAVar7 = (AdvancedGhostBehaviour_NetworkedValues *)
             FUN_?(TypeInfo__AdvancedGhostBehaviour__NetworkedValues);
    AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues__ctor
              (pAVar7,this,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).networkedValues = pAVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).networkedValues >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pAVar7 = (this->fields).networkedValues;
    if (pAVar7 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
      fVar8 = (pAVar7->fields).nextPosition.y;
      fVar9 = (pAVar7->fields).nextPosition.z;
      (this->fields).nextPosition.x = (pAVar7->fields).nextPosition.x;
      (this->fields).nextPosition.y = fVar8;
      (this->fields).nextPosition.z = fVar9;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 == (Transform *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uStack_11._0_4_ = (this->fields).nextPosition.x;
      uStack_11._4_4_ = (this->fields).nextPosition.y;
      fStack_12 = (this->fields).nextPosition.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar13,&uStack_11);
      iVar15 = iRam_?;
      (this->fields).advancedGhostMotor = advancedGhostMotor;
      if (iVar15 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).advancedGhostMotor >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
          iVar15 = iRam_?;
        } while (!bVar2);
      }
      (this->fields).deathCheckFunc = deathCheckFunc;
      if (iVar15 != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields).deathCheckFunc >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      AdvancedGhostBehaviour_InitBody(this,body,(MethodInfo *)0x0);
      AdvancedGhostBehaviour_SetInitialState(this,(MethodInfo *)0x0);
      AdvancedGhostBehaviour_SetupCulling(this,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitBody(MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_InitBody
               (AdvancedGhostBehaviour *this,MVCubeModelBase *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AdvancedGhostBodyRotateWeapon_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostBodyRotateWeapon>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&GhostBody_MethodInfo__UnityEngine__GameObject__AddComponent<GhostBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (body != (MVCubeModelBase *)0x0) {
    pGVar1 = (body->fields)._.gameObject;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Player,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar1,iVar2,(MethodInfo *)0x0);
    pGVar1 = (body->fields)._.gameObject;
    pAVar3 = (this->fields).GhostVisualization;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pGVar4 = (GhostBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             GhostBody_MethodInfo__UnityEngine__GameObject__AddComponent<GhostBody>__
                            ), pAVar3 != (AdvancedGhostVisualizaton *)0x0)) {
      bVar5 = iRam_? != 0;
      (pAVar3->fields).ghostBody = pGVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pAVar3->fields).ghostBody >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      pGVar1 = (body->fields)._.gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        pAVar10 = (AdvancedGhostBodyRotateWeapon *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             AdvancedGhostBodyRotateWeapon_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostBodyRotateWeapon>__
                            );
        bVar5 = iRam_? != 0;
        (this->fields).weapon = pAVar10;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).weapon >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pAVar3 = (this->fields).GhostVisualization;
        if (pAVar3 != (AdvancedGhostVisualizaton *)0x0) {
          pAVar10 = (this->fields).weapon;
          pAVar11 = (pAVar3->fields).weaponHitSound;
          if (pAVar10 != (AdvancedGhostBodyRotateWeapon *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            bVar5 = iRam_? != 0;
            (pAVar10->fields).weaponHitSound = pAVar11;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(pAVar10->fields).weaponHitSound >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            pAVar12 = (body->fields).Changed;
            this_00 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_00,(Object *)pAVar10,
                       MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                       ,(MethodInfo *)0x0);
            pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar12,(Delegate *)this_00,(MethodInfo *)0x0);
            pAVar14 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
            if (pDVar13 == (Delegate *)0x0) {
              (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
            }
            else {
              pAVar12 = (Action_1_CubeModelChangedEventArgs_ *)
                        FUN_?(pDVar13,TypeInfo__System__Action<CubeModelChangedEventArgs>);
              if (pAVar12 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
                FUN_?(pDVar13,pAVar14);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              (body->fields).Changed = pAVar12;
              pAVar14 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
              lVar7 = FUN_?();
              if (lVar7 == 0) {
                FUN_?(pDVar13,pAVar14);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&(body->fields).Changed >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__IDisposable);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__System__Collections__IEnumerator);
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Transform);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar16 = (pAVar10->fields).ghostTriggers;
            if (pLVar16 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
              piVar17 = &(pLVar16->fields)._version;
              *piVar17 = *piVar17 + 1;
              iVar2 = (pLVar16->fields)._size;
              (pLVar16->fields)._size = 0;
              if (0 < iVar2) {
                mscorlib.dll::System::Array::Array_Clear
                          ((Array *)(pLVar16->fields)._items,0,iVar2,(MethodInfo *)0x0);
              }
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pAVar10,(MethodInfo *)0x0);
              if (this_01 != (Transform *)0x0) {
                pIVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_GetEnumerator(this_01,(MethodInfo *)0x0);
code_?:
                if (pIVar18 != (IEnumerator *)0x0) {
                  cVar19 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
                  if (cVar19 == '\0') {
                    lVar7 = FUN_?(pIVar18,TypeInfo__System__IDisposable);
                    if (lVar7 != 0) {
                      FUN_?(0,TypeInfo__System__IDisposable,lVar7);
                    }
                    return;
                  }
                  if (pIVar18 != (IEnumerator *)0x0) {
                    pIVar20 = pIVar18->klass;
                    uVar21 = 0;
                    uVar22._0_1_ = (pIVar20->_1).rank;
                    uVar22._1_1_ = (pIVar20->_1).minimumAlignment;
                    if (uVar22 != 0) {
                      do {
                        if (pIVar20->interfaceOffsets[uVar21].interfaceType ==
                            (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                          pVVar23 = &(pIVar20->vtable).MoveNext +
                                    (pIVar20->interfaceOffsets[uVar21].offset + 1);
                          goto code_?;
                        }
                        uVar21 = uVar21 + 1;
                      } while (uVar21 < uVar22);
                    }
                    pVVar23 = (VirtualInvokeData *)
                              FUN_?(pIVar18,TypeInfo__System__Collections__IEnumerator,1);
code_?:
                    this_02 = (Component *)(*pVVar23->methodPtr)(pIVar18,pVVar23->method);
                    if (this_02 == (Component *)0x0) {
                      FUN_?();
                      goto code_?;
                    }
                    bVar24 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
                    if ((bVar24 <= (this_02->klass->_1).naturalAligment) &&
                       ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar24 - 1] ==
                        (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
                    goto code_?;
                  }
                  goto code_?;
                }
code_?:
                FUN_?();
                FUN_?();
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
            }
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
code_?:
  pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_02,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar25 == (Object *)0x0) {
    bVar5 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar5 = pOVar25[1].klass != (Object__Class *)0x0;
  }
  if (!bVar5) goto code_?;
  this_03 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_02,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
  if (this_03 == (Collider *)0x0) goto code_?;
  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
            (this_03,1,(MethodInfo *)0x0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_02,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar1,
                         AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                        );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar25 == (Object *)0x0) {
code_?:
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_02,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        pOVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar1,
                             AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                            );
        goto code_?;
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar25[1].klass == (Object__Class *)0x0) goto code_?;
code_?:
      pLVar16 = (pAVar10->fields).ghostTriggers;
      if (pLVar16 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar16,pOVar25,
                   MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                  );
        goto code_?;
      }
code_?:
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(this_02);
code_?:
  FUN_?();
  goto code_?;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_OnDestroy
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_OnStateChange
               (AdvancedGhostBehaviour *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  (this->fields).behaviourOnlyEnabled = 0;
  (this->fields).allVisible = 0;
  if (pCVar1 == (CullingSubscriberBase *)0x0) goto code_?;
  distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                    (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
  (this->fields).allVisible = bVar2;
  bVar3 = cullingGroupEvent.m_ThisState;
  if ((((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0) &&
     (((ulonglong)cullingGroupEvent >> 0x20 & 0x80) != 0)) {
code_?:
    bVar4 = false;
  }
  else if (((bVar3 & 0x7f) < 4) || (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0)) {
    if (((((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0) ||
        (((ulonglong)cullingGroupEvent >> 0x20 & 0x80) != 0)) &&
       ((((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0 || (3 < (bVar3 & 0x7f))))) {
      if (((ulonglong)cullingGroupEvent >> 0x28 & 0x80) == 0) goto code_?;
      bVar4 = (bVar3 & 0x7f) < 4;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  (this->fields).behaviourOnlyEnabled = bVar4;
  if ((bVar3 & 0x7f) < 4) {
    (this->fields).behaviourOnlyEnabled = 1;
  }
  if ((this->fields).lives == 0) {
    cVar5 = '\x01';
  }
  else {
    pFVar6 = (this->fields).deathCheckFunc;
    if (pFVar6 == (Func_1_Boolean_ *)0x0) goto code_?;
    cVar5 = (*(pFVar6->fields)._._.invoke_impl)((pFVar6->fields)._._.method_code);
  }
  this_00 = (this->fields).GhostVisualization;
  if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (((this->fields).allVisible == 0) || ((this->fields).wantsVisible == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = cVar5 == '\0';
    }
    if (pGVar7 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,bVar4,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      bVar4 = (this->fields).behaviourOnlyEnabled != 0 && cVar5 == '\0';
      if (pGVar7 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar4,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar7 == (GameObject *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pvVar9 = (pGVar7->fields)._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar7,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar9,bVar4);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ReceivedDamage() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedDamage
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).GhostVisualization;
  if ((this_00 != (AdvancedGhostVisualizaton *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      return;
    }
    this_01 = (this_00->fields).receiveDamage;
    if (this_01 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (this_01,(MethodInfo *)0x0);
      this_02 = (this_00->fields).blinker;
      if (this_02 != (AdvancedGhostBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_02,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivedHealing() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedHealing
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).GhostVisualization;
  if ((this_00 != (AdvancedGhostVisualizaton *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 != '\0') {
      this_01 = (this_00->fields).blinker;
      if (this_01 == (AdvancedGhostBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_01,BlinkType__Enum_Healing,_UNK_?,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Reset
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).respawn = 1;
  pIVar1 = TypeRef__AdvancedGhostBehaviour__Idle;
  (this->fields).clearEffectsBecauseOfReset = 1;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar1 == (Il2CppType *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pIVar1,1);
    type = (Type *)FUN_?(lVar2 + 0x20);
  }
  AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
  (this->fields).lives = (this->fields).maxLives;
  return;
}


/* Void SetCurrentState(Type) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetCurrentState
               (AdvancedGhostBehaviour *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentState != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    FUN_?(2);
  }
  pOVar1 = mscorlib.dll::System::Activator::Activator_CreateInstance_6(type,0,1,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState;
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (AdvancedGhostBehaviour_IGhostBehaviourState *)
           FUN_?(pOVar1,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
  if (pAVar4 == (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    FUN_?(pOVar1,pAVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(0);
  bVar5 = iRam_? != 0;
  (this->fields).currentState = pAVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).currentState >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void SetDesiredPosition(Vector3) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetDesiredPosition
               (AdvancedGhostBehaviour *this,Vector3 *position,MethodInfo *method)

{
  fVar1 = position->y;
  fVar2 = position->z;
  (this->fields).nextPosition.x = position->x;
  (this->fields).nextPosition.y = fVar1;
  (this->fields).nextPosition.z = fVar2;
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetGameMode
               (AdvancedGhostBehaviour *this,bool isPlayMode,MethodInfo *method)

{
  if (isPlayMode == 0) {
    bVar1 = 0;
  }
  else {
    AdvancedGhostBehaviour_SetInitialState(this,(MethodInfo *)0x0);
    pAVar2 = (this->fields).perception;
    if ((pAVar2 == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) ||
       (this_01 = (pAVar2->fields).syncedInterval, this_01 == (DeterministicSyncedInterval *)0x0)) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_01,(MethodInfo *)0x0);
    bVar1 = 1;
  }
  (this->fields).wantsVisible = bVar1;
  if ((this->fields).lives == 0) {
    cVar4 = '\x01';
  }
  else {
    pFVar5 = (this->fields).deathCheckFunc;
    if (pFVar5 == (Func_1_Boolean_ *)0x0) goto code_?;
    cVar4 = (*(pFVar5->fields)._._.invoke_impl)((pFVar5->fields)._._.method_code);
  }
  this_00 = (this->fields).GhostVisualization;
  if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
    pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (((this->fields).allVisible == 0) || ((this->fields).wantsVisible == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = cVar4 == '\0';
    }
    if (pGVar6 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,bVar7,(MethodInfo *)0x0);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      bVar7 = (this->fields).behaviourOnlyEnabled != 0 && cVar4 == '\0';
      if (pGVar6 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar7,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar6 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar8 = (pGVar6->fields)._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar8,bVar7);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetInitialState() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeRef__AdvancedGhostBehaviour__Dead);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).lives != 0) {
    pFVar1 = (this->fields).deathCheckFunc;
    if (pFVar1 == (Func_1_Boolean_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = (*(pFVar1->fields)._._.invoke_impl)
                      ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
    if (cVar3 == '\0') {
      if (cRam_? == '\0') {
        FUN_?(&TypeRef__AdvancedGhostBehaviour__Idle,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this->fields).respawn = 1;
      pIVar4 = TypeRef__AdvancedGhostBehaviour__Idle;
      (this->fields).clearEffectsBecauseOfReset = 1;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar4 == (Il2CppType *)0x0) {
        pTVar5 = (Type *)0x0;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar6 = FUN_?(pIVar4,1);
        pTVar5 = (Type *)FUN_?(lVar6 + 0x20);
      }
      AdvancedGhostBehaviour_SetCurrentState(this,pTVar5,(MethodInfo *)0x0);
      AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
      (this->fields).lives = (this->fields).maxLives;
      return;
    }
  }
  pIVar4 = TypeRef__AdvancedGhostBehaviour__Dead;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pIVar4 == (Il2CppType *)0x0) {
    pTVar5 = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar6 = FUN_?(pIVar4,1);
    pTVar5 = (Type *)FUN_?(lVar6 + 0x20);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,pTVar5,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).currentState != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    FUN_?(2);
  }
  pOVar7 = mscorlib.dll::System::Activator::Activator_CreateInstance_6
                      (pTVar5,0,1,(MethodInfo *)0x0);
  pAVar8 = TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState;
  if (pOVar7 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar9 = (AdvancedGhostBehaviour_IGhostBehaviourState *)
            FUN_?(pOVar7,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
  if (pAVar9 == (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    FUN_?(pOVar7,pAVar8);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_?(0);
  bVar10 = iRam_? != 0;
  (this->fields).currentState = pAVar9;
  if (bVar10) {
    uVar11 = (uint)((ulonglong)&(this->fields).currentState >> 0xc);
    puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar13 = *puVar12;
      LOCK();
      uVar14 = *puVar12;
      if (uVar13 == uVar14) {
        *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (uVar13 != uVar14);
  }
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).lives == 0) {
    cVar1 = '\x01';
  }
  else {
    pFVar2 = (this->fields).deathCheckFunc;
    if (pFVar2 == (Func_1_Boolean_ *)0x0) goto code_?;
    cVar1 = (*(pFVar2->fields)._._.invoke_impl)((pFVar2->fields)._._.method_code);
  }
  this_00 = (this->fields).GhostVisualization;
  if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (((this->fields).allVisible == 0) || ((this->fields).wantsVisible == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = cVar1 == '\0';
    }
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,bVar4,(MethodInfo *)0x0);
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      bVar4 = (this->fields).behaviourOnlyEnabled != 0 && cVar1 == '\0';
      if (pGVar3 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar4,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar3 == (GameObject *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar6 = (pGVar3->fields)._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar6,bVar4);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetupCulling
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_1.x = 0.0;
    VStack_1.y = 0.0;
    VStack_1.z = 0.0;
    pvVar2 = (obj->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar2,&VStack_1);
    callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    FUN_?(callback,this);
    pCVar5 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar5,callback,(MethodInfo *)0x0);
    VStack_6.z = VStack_1.z;
    VStack_6.x = VStack_1.x;
    VStack_6.y = VStack_1.y;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (pCVar5,_UNK_?,&VStack_6,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = pCVar5;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pCVar5 = (this->fields).cullingSubscriberBase;
    if (pCVar5 != (CullingSubscriberBase *)0x0) {
      (pCVar5->fields)._DistanceBandIndex_k__BackingField = 3;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Update
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).perception == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    return;
  }
  pAVar1 = (this->fields).perception;
  this_00 = (pAVar1->fields).syncedInterval;
  if (this_00 == (DeterministicSyncedInterval *)0x0) goto code_?;
  bVar2 = DeterministicSyncedInterval::DeterministicSyncedInterval_Update
                     (this_00,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar3 = (pAVar1->fields).ghostBehaviour;
    if ((pAVar3 == (AdvancedGhostBehaviour *)0x0) ||
       (pAVar4 = (pAVar3->fields).networkedValues,
       pAVar4 == (AdvancedGhostBehaviour_NetworkedValues *)0x0)) goto code_?;
    this_01 = (pAVar1->fields).perception;
    fVar5 = (pAVar3->fields).perceptionRadius;
    if (this_01 == (OptimizedPerception *)0x0) goto code_?;
    fVar6 = (pAVar4->fields).nextPosition.y;
    fVar7 = (pAVar4->fields).nextPosition.z;
    (this_01->fields).position.x = (pAVar4->fields).nextPosition.x;
    (this_01->fields).position.y = fVar6;
    (this_01->fields).position.z = fVar7;
    (this_01->fields).radius = fVar5;
    OptimizedPerception::OptimizedPerception_UpdatePotentialTargets(this_01,(MethodInfo *)0x0);
  }
  pAVar4 = (this->fields).networkedValues;
  if (pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
    AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Update
              (pAVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar8 = (this->fields).currentState;
    if (pAVar8 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
      pAVar9 = pAVar8->klass;
      uVar10 = 0;
      uVar11._0_1_ = (pAVar9->_1).rank;
      uVar11._1_1_ = (pAVar9->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pAVar9->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState) {
            pVVar12 = &(pAVar9->vtable).Enter + (pAVar9->interfaceOffsets[uVar10].offset + 1);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      pVVar12 = (VirtualInvokeData *)
                FUN_?(pAVar8,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,1);
code_?:
      type = (Type *)(*pVVar12->methodPtr)(pAVar8);
      pAVar8 = (this->fields).currentState;
      if (pAVar8 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
        pTVar13 = (Type *)FUN_?(&(pAVar8->klass->_0).byval_arg);
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        if (pTVar13 != type) {
          AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
        }
        pAVar14 = (this->fields).advancedGhostMotor;
        if ((pAVar14 != (AdvancedGhostMotor *)0x0) &&
           (this_02 = (pAVar14->fields).smoothPhysicsMovement,
           this_02 != (SmoothPhysicsMovement *)0x0)) {
          SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_02,(MethodInfo *)0x0);
          if ((this->fields).respawn == 0) {
            return;
          }
          AdvancedGhostBehaviour_DoRespawn(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateBehaviourState() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_UpdateBehaviourState
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentState;
  if (pAVar1 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    pAVar2 = pAVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pAVar2->_1).rank;
    uVar4._1_1_ = (pAVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pAVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState) {
          pVVar5 = &(pAVar2->vtable).Enter + (pAVar2->interfaceOffsets[uVar3].offset + 1);
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_?(pAVar1,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,1);
code_?:
    type = (Type *)(*pVVar5->methodPtr)(pAVar1,this);
    pAVar1 = (this->fields).currentState;
    if (pAVar1 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
      pTVar6 = (Type *)FUN_?(&(pAVar1->klass->_0).byval_arg);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pTVar6 != type) {
        AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdatePositionAndRotation() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_UpdatePositionAndRotation
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  VStack_1.x = (this->fields).nextPosition.x;
  VStack_1.y = (this->fields).nextPosition.y;
  VStack_1.z = (this->fields).nextPosition.z;
  pVVar2 = AdvancedGhostBehaviour_GetMoveVector(aVStack_3,this,&VStack_1,(MethodInfo *)0x0);
  pAVar4 = (this->fields).advancedGhostMotor;
  if (pAVar4 != (AdvancedGhostMotor *)0x0) {
    fVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    (pAVar4->fields)._MoveDirection_k__BackingField.x = pVVar2->x;
    (pAVar4->fields)._MoveDirection_k__BackingField.y = fVar5;
    (pAVar4->fields)._MoveDirection_k__BackingField.z = fVar6;
    pAVar4 = (this->fields).advancedGhostMotor;
    if (pAVar4 != (AdvancedGhostMotor *)0x0) {
      VStack_1.x = (pAVar4->fields).velocity.x;
      VStack_1.y = (pAVar4->fields).velocity.y;
      pMVar7 = (pAVar4->fields).interactable;
      fVar6 = (pAVar4->fields).velocity.z;
      aVStack_3[0]._0_8_ = VStack_1._0_8_;
      if (pMVar7 != (MVInteractableBase *)0x0) {
        fVar5 = (float)(*(pMVar7->klass->vtable).__unknown_8.methodPtr)(pMVar7,0xc);
        fVar5 = fVar5 * fVar5;
        fVar8 = fVar5 * VStack_1.x;
        fVar9 = fVar5 * VStack_1.y;
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        fVar12 = (float)(*pcRam_?)();
        (pAVar4->fields).velocity.x = aVStack_3[0].x - fVar8 * fVar12;
        (pAVar4->fields).velocity.y = aVStack_3[0].y - fVar9 * fVar12;
        (pAVar4->fields).velocity.z = fVar6 - fVar5 * fVar6 * fVar12;
        pVVar2 = AdvancedGhostMotor::AdvancedGhostMotor_ApplyInputVelocityChange
                           (aVStack_3,pAVar4,(MethodInfo *)0x0);
        pMVar7 = (pAVar4->fields).interactable;
        aVStack_3[0].z = pVVar2->z;
        aVStack_3[0].x = pVVar2->x;
        aVStack_3[0].y = pVVar2->y;
        (pAVar4->fields).velocity.x = aVStack_3[0].x;
        (pAVar4->fields).velocity.y = aVStack_3[0].y;
        (pAVar4->fields).velocity.z = aVStack_3[0].z;
        pVVar2 = MVRigidBody::MVRigidBody_GetImpulse
                           (&VStack_1,(MVRigidBody *)pAVar4,aVStack_3,pMVar7,(MethodInfo *)0x0);
        fVar6 = _UNK_?;
        pMVar7 = (pAVar4->fields).interactable;
        aVStack_3[0].z = pVVar2->z;
        aVStack_3[0].x = pVVar2->x;
        aVStack_3[0].y = pVVar2->y;
        (pAVar4->fields).velocity.x = aVStack_3[0].x;
        (pAVar4->fields).velocity.y = aVStack_3[0].y;
        (pAVar4->fields).velocity.z = aVStack_3[0].z;
        MVRigidBody::MVRigidBody_VelocityDamping
                  (&VStack_1,aVStack_3,fVar6,pMVar7,(MethodInfo *)0x0);
        aVStack_3[0].x = (pAVar4->fields).velocity.x;
        aVStack_3[0].y = (pAVar4->fields).velocity.y;
        aVStack_3[0].z = (pAVar4->fields).velocity.z;
        AdvancedGhostMotor::AdvancedGhostMotor_Move(pAVar4,aVStack_3,(MethodInfo *)0x0);
        this_00 = (this->fields).GhostVisualization;
        if ((this_00 != (AdvancedGhostVisualizaton *)0x0) &&
           (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar13 = (obj->fields)._.m_CachedPtr;
          if (pvVar13 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          cVar14 = (*pcRam_?)(pvVar13);
          if (cVar14 != '\0') {
            pAVar4 = (this->fields).advancedGhostMotor;
            if (pAVar4 == (AdvancedGhostMotor *)0x0) goto code_?;
            AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation(pAVar4,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* AdvancedGhostBehaviour() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour__ctor
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).lives = -1;
  (this->fields).maxLives = -1;
  (this->fields).radius = 10.0;
  (this->fields).perceptionRadius = 15.0;
  (this->fields).minPerceptionRadius = 15.0;
  (this->fields).speedPerceptionFactor = 0.3;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_IsDead
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).lives == 0) {
    return 1;
  }
  pFVar1 = (this->fields).deathCheckFunc;
  if (pFVar1 != (Func_1_Boolean_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pFVar1->fields)._._.invoke_impl)
                      ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Single get_RoamRadius() */

float Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_RoamRadius
                (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  return (this->fields).perceptionRadius + (this->fields).radius;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_Team
          (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pAVar1 = (this->fields).perception;
  if (pAVar1 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    return (pAVar1->fields).alliedTeam;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* Void set_Lives(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Lives
               (AdvancedGhostBehaviour *this,int32_t value,MethodInfo *method)

{
  (this->fields).lives = value;
  (this->fields).maxLives = value;
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Radius
               (AdvancedGhostBehaviour *this,float value,MethodInfo *method)

{
  (this->fields).radius = value;
  return;
}


/* Void set_Speed(Single) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Speed
               (AdvancedGhostBehaviour *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_1[0].fakeValue = 0.0;
  aOStack_1[0].inited = 0;
  aOStack_1[0]._21_3_ = 0;
  aOStack_1[0].currentCryptoKey = 0;
  aOStack_1[0].hiddenValue.b1 = 0;
  aOStack_1[0].hiddenValue.b2 = 0;
  aOStack_1[0].hiddenValue.b3 = 0;
  aOStack_1[0].hiddenValue.b4 = 0;
  aOStack_1[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_InternalEncrypt(value,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_1,value_00,(MethodInfo *)0x0);
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar2 != 0) {
    aOStack_1[0].fakeValue = value;
  }
  bVar3 = iRam_? != 0;
  (this->fields).speed.currentCryptoKey = aOStack_1[0].currentCryptoKey;
  (this->fields).speed.hiddenValue = aOStack_1[0].hiddenValue;
  (this->fields).speed.hiddenValueOld = aOStack_1[0].hiddenValueOld;
  (this->fields).speed.fakeValue = aOStack_1[0].fakeValue;
  (this->fields).speed.inited = aOStack_1[0].inited;
  *(undefined3 *)&(this->fields).speed.field_0x15 = aOStack_1[0]._21_3_;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).speed.hiddenValueOld >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  aOStack_1[0].currentCryptoKey = (this->fields).speed.currentCryptoKey;
  aOStack_1[0].hiddenValue = (this->fields).speed.hiddenValue;
  aOStack_1[0].hiddenValueOld = (this->fields).speed.hiddenValueOld;
  aOStack_1[0].fakeValue = (this->fields).speed.fakeValue;
  aOStack_1[0].inited = (this->fields).speed.inited;
  aOStack_1[0]._21_3_ = *(undefined3 *)&(this->fields).speed.field_0x15;
  fVar8 = (this->fields).minPerceptionRadius;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalDecrypt(aOStack_1,(MethodInfo *)0x0);
  (this->fields).perceptionRadius = fVar9 * (this->fields).speedPerceptionFactor + fVar8;
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Team
               (AdvancedGhostBehaviour *this,MVTeam__Enum value,MethodInfo *method)

{
  pAVar1 = (this->fields).perception;
  if (pAVar1 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    (pAVar1->fields).alliedTeam = value;
    pAVar2 = (this->fields).weapon;
    if (pAVar2 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      (pAVar2->fields).alliedTeam = value;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

