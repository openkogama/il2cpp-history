
/* Vector3 FindValidMoveLocation(Single) */

Vector3 * Assembly-CSharp.dll::SizeState::SizeState_FindValidMoveLocation
                    (Vector3 *__return_storage_ptr__,SizeState *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Vector3>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SizeState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_no_position_found_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  pLStack_1 = (List_1_UnityEngine_Vector3_ *)0x0;
  lStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  fVar5 = scale * _UNK_?;
  scale_00 = (this->fields).currentSize;
  pMVar6 = (this->fields).controllerLocal;
  fStack_7 = fVar5;
  if ((pMVar6 != (MvCharacterController *)0x0) &&
     (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    VStack_9.z = 0.0;
    this_00 = (pTVar8->fields)._._.m_CachedPtr;
    if (this_00 == (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      pVVar11 = (Vector3 *)(*pcVar10)();
      return pVVar11;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
code_?:
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12);
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar10 = (code *)swi(3);
      pVVar11 = (Vector3 *)(*pcVar10)();
      return pVVar11;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(this_00,&VStack_9);
    __return_storage_ptr__->x = VStack_9.x;
    __return_storage_ptr__->y = VStack_9.y;
    __return_storage_ptr__->z = VStack_9.z;
    while( true ) {
      if (scale <= scale_00) {
        return __return_storage_ptr__;
      }
      scale_00 = scale_00 + fVar5;
      fStack_13 = scale_00;
      if (*(int *)&(TypeInfo__SizeState->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SizeState);
      }
      pLVar14 = TypeInfo__SizeState->static_fields->relativePositions;
      if (pLVar14 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      if (iRam_? != 0) {
        uVar15 = (uint)((ulonglong)&pLStack_16 >> 0xc);
        uVar17 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
        do {
          uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
          puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
          LOCK();
          bVar20 = uVar18 == *puVar19;
          if (bVar20) {
            *puVar19 = uVar18 | 1L << (ulonglong)(uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar20);
      }
      lStack_21 = (ulonglong)(uint)(pLVar14->fields)._version << 0x20;
      uStack_22 = 0;
      uStack_23 = 0;
      lStack_2 = lStack_21;
      uStack_3 = 0;
      uStack_4 = 0;
      uStack_24 = 0;
      ppLStack_25 = &pLStack_1;
      pLStack_16 = pLVar14;
      pLStack_1 = pLVar14;
      do {
        cVar26 = FUN_?(&pLStack_1);
        if (cVar26 == '\0') {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_no_position_found_,(MethodInfo *)0x0);
          return __return_storage_ptr__;
        }
        fVar27 = (float)uStack_4 * scale_00;
        fVar28 = uStack_3._4_4_ * scale_00;
        fVar29 = (float)uStack_3 * scale_00;
        VStack_9.y = fVar28;
        VStack_9.x = fVar29;
        VStack_9.z = fVar27;
        bVar30 = SizeState_GetIsValidScaledRelativePosition
                          (this,&VStack_9,scale_00,(MethodInfo *)0x0);
      } while (bVar30 == 0);
      pMVar6 = (this->fields).controllerLocal;
      if (pMVar6 == (MvCharacterController *)0x0) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar6,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) goto code_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (aVStack_31,this_00,(MethodInfo *)0x0);
      uVar32 = pVVar11->x;
      uVar33 = pVVar11->y;
      fStack_34 = pVVar11->z + fVar27;
      uStack_35 = CONCAT44((float)uVar33 + fVar28,(float)uVar32 + fVar29);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar36 = (this_00->fields)._._.m_CachedPtr;
      if (pvVar36 == (void *)0x0) goto code_?;
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar36);
      pMVar6 = (this->fields).controllerLocal;
      if (pMVar6 == (MvCharacterController *)0x0) goto code_?;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar6,(MethodInfo *)0x0);
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (aVStack_37,pTVar8,(MethodInfo *)0x0);
      fVar29 = pVVar11->y;
      __return_storage_ptr__->x = pVVar11->x;
      __return_storage_ptr__->y = fVar29;
      __return_storage_ptr__->z = pVVar11->z;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar10)();
  return pVVar11;
}


/* Boolean GetIsValidScaledPosition(Vector3, Single) */

bool Assembly-CSharp.dll::SizeState::SizeState_GetIsValidScaledPosition
               (SizeState *this,Vector3 *position,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVElipsoidOverlapCheck);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SizeState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    uVar2 = (pMVar1->fields).centerBase.x;
    uVar3 = (pMVar1->fields).centerBase.y;
    fVar4 = (pMVar1->fields).centerBase.z;
    VStack_5.x = position->x;
    VStack_5.y = position->y;
    fVar6 = (pMVar1->fields).radiusBase.x;
    fVar7 = (pMVar1->fields).radiusBase.y;
    fVar8 = (pMVar1->fields).radiusBase.z;
    fVar9 = (float)uVar2 * scale + VStack_5.x;
    fVar10 = position->z;
    fVar11 = (float)uVar3 * scale + VStack_5.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
    uVar13._0_4_ = (pQVar12->identityQuaternion).x;
    uVar13._4_4_ = (pQVar12->identityQuaternion).y;
    uVar14._0_4_ = (pQVar12->identityQuaternion).z;
    uVar14._4_4_ = (pQVar12->identityQuaternion).w;
    if (*(int *)&(TypeInfo__SizeState->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SizeState);
    }
    layerMask = TypeInfo__SizeState->static_fields->layerMask;
    pMVar1 = (this->fields).controllerLocal;
    if (pMVar1 != (MvCharacterController *)0x0) {
      ignoreWoIds = (pMVar1->fields).IgnoreWoIds;
      if (*(int *)&(TypeInfo__MVElipsoidOverlapCheck->_1).field_0x1c == 0) {
        FUN_?();
      }
      VStack_15.y = fVar11;
      VStack_15.x = fVar9;
      VStack_5.y = scale * fVar7;
      VStack_5.x = scale * fVar6;
      VStack_15.z = fVar4 * scale + fVar10;
      VStack_5.z = scale * fVar8;
      aQStack_16[0]._0_8_ = uVar13;
      aQStack_16[0]._8_8_ = uVar14;
      bVar17 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                         (&VStack_5,&VStack_15,aQStack_16,layerMask,ignoreWoIds,(MethodInfo *)0x0);
      return bVar17 ^ 1;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar17 = (*pcVar18)();
  return bVar17;
}


/* Boolean GetIsValidScaledRelativePosition(Vector3, Single) */

bool Assembly-CSharp.dll::SizeState::SizeState_GetIsValidScaledRelativePosition
               (SizeState *this,Vector3 *relativeTestPos,float scale,MethodInfo *method)

{
  this_00 = (this->fields).controllerLocal;
  if ((this_00 == (MvCharacterController *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_3[0].x = 0.0;
  aVStack_3[0].y = 0.0;
  aVStack_3[0].z = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,aVStack_3);
  uVar6 = relativeTestPos->x;
  uVar7 = relativeTestPos->y;
  aVStack_3[0].z = aVStack_3[0].z + relativeTestPos->z;
  aVStack_3[0].y = aVStack_3[0].y + (float)uVar7;
  aVStack_3[0].x = aVStack_3[0].x + (float)uVar6;
  bVar2 = SizeState_GetIsValidScaledPosition(this,aVStack_3,scale,(MethodInfo *)0x0);
  return bVar2;
}


/* Void MoveOutOfScalingCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::SizeState::SizeState_MoveOutOfScalingCollision
               (SizeState *this,MVControllerColliderHit *hitData,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  if ((pMVar1 != (MvCharacterController *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    fStack_4 = 0.0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar5,&uStack_3);
    pMVar1 = (this->fields).controllerLocal;
    if (pMVar1 != (MvCharacterController *)0x0) {
      uStack_8._0_4_ = (pMVar1->fields).center.x;
      uStack_8._4_4_ = (pMVar1->fields).center.y;
      uVar9 = (hitData->positionTouchingHit).x;
      uVar10 = (hitData->positionTouchingHit).y;
      uStack_11 = *(undefined8 *)&hitData->testWithOutMoving;
      fVar12 = (float)uStack_3 + (float)(undefined4)uStack_8;
      uStack_13._0_4_ = (float)*(undefined8 *)&(hitData->positionTouchingHit).z;
      fVar14 = (fStack_4 + (pMVar1->fields).center.z) - (float)uStack_13;
      fVar15 = uStack_3._4_4_ + (float)uStack_8._4_4_;
      fVar16 = (pMVar1->fields).center.z;
      uVar17 = (pMVar1->fields).centerBase.x;
      uVar18 = (pMVar1->fields).centerBase.y;
      fVar19 = (pMVar1->fields).elipsoidRadius.x / (pMVar1->fields).radiusBase.x;
      fVar20 = (float)uVar17 - (float)(undefined4)uStack_8;
      fVar21 = (float)uVar18 - (float)uStack_8._4_4_;
      fVar22 = (pMVar1->fields).centerBase.z;
      uStack_23._0_4_ = (hitData->positionTouchingHit).x;
      uStack_23._4_4_ = (hitData->positionTouchingHit).y;
      uStack_13 = *(undefined8 *)&(hitData->positionTouchingHit).z;
      uStack_24._0_4_ = (hitData->moveDirection).y;
      uStack_24._4_4_ = (hitData->moveDirection).z;
      uStack_25._0_4_ = (hitData->elipsoidNormal).x;
      uStack_25._4_4_ = (hitData->elipsoidNormal).y;
      uVar7 = *(undefined8 *)&(hitData->elipsoidNormal).z;
      uVar26 = (hitData->slopeNormal).y;
      uVar27 = (hitData->slopeNormal).z;
      uStack_28._0_4_ = (hitData->impactVelocity).x;
      uStack_28._4_4_ = (hitData->impactVelocity).y;
      uStack_29 = *(undefined8 *)&(hitData->impactVelocity).z;
      uStack_30 = (undefined4)uVar7;
      fStack_31 = (float)((ulonglong)uVar7 >> 0x20);
      uStack_32._0_4_ = (hitData->hit).point.x;
      uStack_32._4_4_ = (hitData->hit).point.y;
      uStack_33 = *(undefined8 *)&(hitData->hit).point.z;
      uStack_34._0_4_ = (hitData->hit).normal.y;
      uStack_34._4_4_ = (hitData->hit).normal.z;
      uStack_35 = *(undefined8 *)&(hitData->hit).cubePos;
      uStack_36._0_4_ = (hitData->hit).face;
      uStack_36._4_1_ = (hitData->hit).isCubeHit;
      uStack_36._5_3_ = *(undefined3 *)&(hitData->hit).field_0x25;
      uStack_37 = *(undefined8 *)&(hitData->hit).woId;
      pCStack_38 = (hitData->hit).cube;
      uStack_39 = *(undefined8 *)&(hitData->hit).distance;
      pCStack_40 = (hitData->hit).collider;
      pTStack_41 = (hitData->hit).transform;
      iStack_42 = (hitData->hit).interactionFlags;
      pMStack_43 = hitData->material;
      fStack_44 = (float)uVar26;
      fStack_45 = (float)uVar27;
      if ((pMVar1 != (MvCharacterController *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_3 = 0;
        fStack_4 = 0.0;
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&uStack_3);
        fVar46 = fStack_45;
        pMVar1 = (this->fields).controllerLocal;
        if (pMVar1 != (MvCharacterController *)0x0) {
          uStack_8._0_4_ = (pMVar1->fields).center.x;
          uStack_8._4_4_ = (pMVar1->fields).center.y;
          uStack_47._0_4_ = (hitData->positionTouchingHit).x;
          uStack_47._4_4_ = (hitData->positionTouchingHit).y;
          uStack_48 = *(undefined8 *)&(hitData->positionTouchingHit).z;
          uStack_49 = *(undefined8 *)&hitData->testWithOutMoving;
          uStack_50._0_4_ = (hitData->moveDirection).y;
          uStack_50._4_4_ = (hitData->moveDirection).z;
          uStack_51._0_4_ = (hitData->elipsoidNormal).x;
          uStack_51._4_4_ = (hitData->elipsoidNormal).y;
          uStack_52 = *(undefined8 *)&(hitData->elipsoidNormal).z;
          uStack_53._0_4_ = (hitData->slopeNormal).y;
          uStack_53._4_4_ = (hitData->slopeNormal).z;
          uStack_54._0_4_ = (hitData->impactVelocity).x;
          uStack_54._4_4_ = (hitData->impactVelocity).y;
          uStack_55 = *(undefined8 *)&(hitData->impactVelocity).z;
          uStack_56._0_4_ = (hitData->hit).point.x;
          uStack_56._4_4_ = (hitData->hit).point.y;
          uStack_57 = *(undefined8 *)&(hitData->hit).point.z;
          uStack_58._0_4_ = (hitData->hit).normal.y;
          uStack_58._4_4_ = (hitData->hit).normal.z;
          uStack_59 = *(undefined8 *)&(hitData->hit).cubePos;
          uStack_60._0_4_ = (hitData->hit).face;
          uStack_60._4_1_ = (hitData->hit).isCubeHit;
          uStack_60._5_3_ = *(undefined3 *)&(hitData->hit).field_0x25;
          uStack_61 = *(undefined8 *)&(hitData->hit).woId;
          pCStack_62 = (hitData->hit).cube;
          uStack_63 = *(undefined8 *)&(hitData->hit).distance;
          pCStack_64 = (hitData->hit).collider;
          pTStack_65 = (hitData->hit).transform;
          iStack_66 = (hitData->hit).interactionFlags;
          pMStack_67 = hitData->material;
          fVar68 = ((pMVar1->fields).center.z + fStack_4) - (float)uStack_48;
          fVar69 = ((float)(undefined4)uStack_8 + (float)uStack_3) -
                   (float)(undefined4)uStack_47;
          fVar70 = ((float)uStack_8._4_4_ + uStack_3._4_4_) - (float)uStack_47._4_4_;
          uStack_3 = CONCAT44(fStack_44,fStack_31);
          fStack_4 = fStack_45;
          fVar71 = (float)FUN_?(&uStack_3);
          if (_UNK_? < fVar71) {
            fVar46 = fVar46 / fVar71;
            uVar7 = CONCAT44(fStack_44 / fVar71,fStack_31 / fVar71);
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar72 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar7._0_4_ = (pVVar72->zeroVector).x;
            uVar7._4_4_ = (pVVar72->zeroVector).y;
            fVar46 = (pVVar72->zeroVector).z;
          }
          uStack_47._0_4_ = (hitData->positionTouchingHit).x;
          uStack_47._4_4_ = (hitData->positionTouchingHit).y;
          uStack_48 = *(undefined8 *)&(hitData->positionTouchingHit).z;
          uStack_49 = *(undefined8 *)&hitData->testWithOutMoving;
          uStack_50._0_4_ = (hitData->moveDirection).y;
          uStack_50._4_4_ = (hitData->moveDirection).z;
          uStack_51._0_4_ = (hitData->elipsoidNormal).x;
          uStack_51._4_4_ = (hitData->elipsoidNormal).y;
          uStack_3._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
          uVar73 = *(undefined8 *)&(hitData->elipsoidNormal).z;
          uStack_53._0_4_ = (hitData->slopeNormal).y;
          uStack_53._4_4_ = (hitData->slopeNormal).z;
          uStack_54._0_4_ = (hitData->impactVelocity).x;
          uStack_54._4_4_ = (hitData->impactVelocity).y;
          uStack_55 = *(undefined8 *)&(hitData->impactVelocity).z;
          uStack_56._0_4_ = (hitData->hit).point.x;
          uStack_56._4_4_ = (hitData->hit).point.y;
          uStack_57 = *(undefined8 *)&(hitData->hit).point.z;
          uStack_58._0_4_ = (hitData->hit).normal.y;
          uStack_58._4_4_ = (hitData->hit).normal.z;
          uStack_59 = *(undefined8 *)&(hitData->hit).cubePos;
          uStack_60._0_4_ = (hitData->hit).face;
          uStack_60._4_1_ = (hitData->hit).isCubeHit;
          uStack_60._5_3_ = *(undefined3 *)&(hitData->hit).field_0x25;
          uStack_61 = *(undefined8 *)&(hitData->hit).woId;
          pCStack_62 = (hitData->hit).cube;
          uStack_63 = *(undefined8 *)&(hitData->hit).distance;
          pCStack_64 = (hitData->hit).collider;
          pTStack_65 = (hitData->hit).transform;
          iStack_66 = (hitData->hit).interactionFlags;
          pMStack_67 = hitData->material;
          uStack_3._0_4_ = (float)uVar7;
          fVar22 = (float)((uint)(fVar70 * uStack_3._4_4_ + fVar69 * (float)uStack_3 +
                                 fVar68 * fVar46) ^ _UNK_?) +
                   uStack_3._4_4_ * (fVar19 * (fVar15 - (float)uVar10) + fVar21) +
                   (float)uStack_3 * (fVar19 * (fVar12 - (float)uVar9) + fVar20) +
                   fVar46 * (fVar19 * fVar14 + (fVar22 - fVar16));
          uStack_52._4_4_ = (float)((ulonglong)uVar73 >> 0x20);
          fVar16 = fVar22 * uStack_52._4_4_;
          fVar20 = fVar22 * (float)(undefined4)uStack_53;
          fVar22 = fVar22 * (float)uStack_53._4_4_;
          pMVar1 = (this->fields).controllerLocal;
          uStack_3 = uVar7;
          uStack_52 = uVar73;
          if (pMVar1 != (MvCharacterController *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pMVar1,(MethodInfo *)0x0);
            pMVar1 = (this->fields).controllerLocal;
            if ((pMVar1 != (MvCharacterController *)0x0) &&
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pMVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_3 = 0;
              fStack_4 = 0.0;
              pvVar5 = (obj->fields)._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar5);
              fStack_74 = fVar22 + fStack_4;
              if (pTVar2 == (Transform *)0x0) {
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uStack_8 = CONCAT44(fVar20 + uStack_3._4_4_,fVar16 + (float)uStack_3);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pvVar5,&uStack_8);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnScalingWhileColliding(MVControllerColliderHit) */

void Assembly-CSharp.dll::SizeState::SizeState_OnScalingWhileColliding
               (SizeState *this,MVControllerColliderHit *hitData,MethodInfo *method)

{
  fVar1 = SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  pfVar2 = &(this->fields).currentSize;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    MStack_3.positionTouchingHit.x = (hitData->positionTouchingHit).x;
    MStack_3.positionTouchingHit.y = (hitData->positionTouchingHit).y;
    MStack_3._8_8_ = *(undefined8 *)&(hitData->positionTouchingHit).z;
    MStack_3.testWithOutMoving = hitData->testWithOutMoving;
    MStack_3._161_7_ = *(undefined7 *)&hitData->field_0xa1;
    MStack_3.moveDirection.y = (hitData->moveDirection).y;
    MStack_3.moveDirection.z = (hitData->moveDirection).z;
    MStack_3.elipsoidNormal.x = (hitData->elipsoidNormal).x;
    MStack_3.elipsoidNormal.y = (hitData->elipsoidNormal).y;
    MStack_3._32_8_ = *(undefined8 *)&(hitData->elipsoidNormal).z;
    MStack_3.slopeNormal.y = (hitData->slopeNormal).y;
    MStack_3.slopeNormal.z = (hitData->slopeNormal).z;
    MStack_3.impactVelocity.x = (hitData->impactVelocity).x;
    MStack_3.impactVelocity.y = (hitData->impactVelocity).y;
    MStack_3._56_8_ = *(undefined8 *)&(hitData->impactVelocity).z;
    MStack_3.hit.point.x = (hitData->hit).point.x;
    MStack_3.hit.point.y = (hitData->hit).point.y;
    MStack_3.hit._8_8_ = *(undefined8 *)&(hitData->hit).point.z;
    MStack_3.hit.normal.y = (hitData->hit).normal.y;
    MStack_3.hit.normal.z = (hitData->hit).normal.z;
    MStack_3.hit.cubePos = (hitData->hit).cubePos;
    MStack_3.hit._30_2_ = *(undefined2 *)&(hitData->hit).field_0x1e;
    MStack_3.hit.face = (hitData->hit).face;
    MStack_3.hit.isCubeHit = (hitData->hit).isCubeHit;
    MStack_3.hit._37_3_ = *(undefined3 *)&(hitData->hit).field_0x25;
    MStack_3.hit.woId = (hitData->hit).woId;
    MStack_3.hit._44_4_ = *(undefined4 *)&(hitData->hit).field_0x2c;
    MStack_3.hit.collider = (hitData->hit).collider;
    MStack_3.hit.transform = (hitData->hit).transform;
    MStack_3.hit.cube = (hitData->hit).cube;
    MStack_3.hit.distance = (hitData->hit).distance;
    MStack_3.hit._60_4_ = *(undefined4 *)&(hitData->hit).field_0x3c;
    MStack_3.hit.interactionFlags = (hitData->hit).interactionFlags;
    MStack_3.material = hitData->material;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5 = (pVVar4->upVector).x;
    uVar6 = (pVVar4->upVector).y;
    MStack_3.slopeNormal.z = MStack_3.slopeNormal.z - (pVVar4->upVector).z;
    if (_UNK_? <=
        (MStack_3.slopeNormal.y - (float)uVar6) * (MStack_3.slopeNormal.y - (float)uVar6) +
        (MStack_3.slopeNormal.x - (float)uVar5) * (MStack_3.slopeNormal.x - (float)uVar5) +
        MStack_3.slopeNormal.z * MStack_3.slopeNormal.z) {
      MStack_3.positionTouchingHit.x = (hitData->positionTouchingHit).x;
      MStack_3.positionTouchingHit.y = (hitData->positionTouchingHit).y;
      MStack_3._8_8_ = *(undefined8 *)&(hitData->positionTouchingHit).z;
      MStack_3.testWithOutMoving = hitData->testWithOutMoving;
      MStack_3._161_7_ = *(undefined7 *)&hitData->field_0xa1;
      MStack_3.moveDirection.y = (hitData->moveDirection).y;
      MStack_3.moveDirection.z = (hitData->moveDirection).z;
      MStack_3.elipsoidNormal.x = (hitData->elipsoidNormal).x;
      MStack_3.elipsoidNormal.y = (hitData->elipsoidNormal).y;
      MStack_3._32_8_ = *(undefined8 *)&(hitData->elipsoidNormal).z;
      MStack_3.slopeNormal.y = (hitData->slopeNormal).y;
      MStack_3.slopeNormal.z = (hitData->slopeNormal).z;
      MStack_3.impactVelocity.x = (hitData->impactVelocity).x;
      MStack_3.impactVelocity.y = (hitData->impactVelocity).y;
      MStack_3._56_8_ = *(undefined8 *)&(hitData->impactVelocity).z;
      MStack_3.hit.point.x = (hitData->hit).point.x;
      MStack_3.hit.point.y = (hitData->hit).point.y;
      MStack_3.hit._8_8_ = *(undefined8 *)&(hitData->hit).point.z;
      MStack_3.hit.normal.y = (hitData->hit).normal.y;
      MStack_3.hit.normal.z = (hitData->hit).normal.z;
      MStack_3.hit.cubePos = (hitData->hit).cubePos;
      MStack_3.hit._30_2_ = *(undefined2 *)&(hitData->hit).field_0x1e;
      MStack_3.hit.face = (hitData->hit).face;
      MStack_3.hit.isCubeHit = (hitData->hit).isCubeHit;
      MStack_3.hit._37_3_ = *(undefined3 *)&(hitData->hit).field_0x25;
      MStack_3.hit.woId = (hitData->hit).woId;
      MStack_3.hit._44_4_ = *(undefined4 *)&(hitData->hit).field_0x2c;
      MStack_3.hit.cube = (hitData->hit).cube;
      MStack_3.hit.distance = (hitData->hit).distance;
      MStack_3.hit._60_4_ = *(undefined4 *)&(hitData->hit).field_0x3c;
      MStack_3.hit.collider = (hitData->hit).collider;
      MStack_3.hit.transform = (hitData->hit).transform;
      MStack_3.hit.interactionFlags = (hitData->hit).interactionFlags;
      MStack_3.material = hitData->material;
      SizeState_MoveOutOfScalingCollision(this,&MStack_3,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ScaleChanged() */

void Assembly-CSharp.dll::SizeState::SizeState_ScaleChanged(SizeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScaleArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  scale = SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  pfVar1 = &(this->fields).currentSize;
  if (*pfVar1 <= scale && scale != *pfVar1) {
    pVVar2 = SizeState_FindValidMoveLocation(aVStack_3,this,scale,(MethodInfo *)0x0);
    pMVar4 = (this->fields).controllerLocal;
    uVar5._0_4_ = pVVar2->x;
    uVar5._4_4_ = pVVar2->y;
    fVar6 = pVVar2->z;
    if ((pMVar4 == (MvCharacterController *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar4,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    aVStack_3[0]._0_8_ = uVar5;
    aVStack_3[0].z = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar8,aVStack_3);
    pMVar9 = (this->fields).interactableLocal;
    if (pMVar9 == (MVInteractable *)0x0) goto code_?;
    cVar10 = (*(pMVar9->klass->vtable).HasModifierEffect.methodPtr)
                      (pMVar9,5,(pMVar9->klass->vtable).HasModifierEffect.method);
    if (cVar10 != '\0') {
      pEVar11 = (EventHandler_1_EventArgs_ *)(this->fields).EquipSlapGunEvent;
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__System__EventArgs);
      }
      if (pEVar11 == (EventHandler_1_EventArgs_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  else if ((this->fields).UnEquipSlapGunEvent != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar11 = (this->fields).UnEquipSlapGunEvent;
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__EventArgs);
    }
code_?:
    (*(pEVar11->fields)._._.invoke_impl)
              ((pEVar11->fields)._._.method_code,this,
               TypeInfo__System__EventArgs->static_fields->Empty,(pEVar11->fields)._._.method);
  }
  pMVar4 = (this->fields).controllerLocal;
  if (pMVar4 != (MvCharacterController *)0x0) {
    aVStack_3[0].x = (pMVar4->fields).centerBase.x;
    aVStack_3[0].y = (pMVar4->fields).centerBase.y;
    fVar6 = (pMVar4->fields).centerBase.z;
    (pMVar4->fields).center.x = aVStack_3[0].x * scale;
    (pMVar4->fields).center.y = aVStack_3[0].y * scale;
    (pMVar4->fields).center.z = fVar6 * scale;
    fVar6 = (pMVar4->fields).radiusBase.y;
    fVar12 = (pMVar4->fields).radiusBase.z;
    (pMVar4->fields).elipsoidRadius.x = scale * (pMVar4->fields).radiusBase.x;
    (pMVar4->fields).elipsoidRadius.y = scale * fVar6;
    fVar6 = (pMVar4->fields).offsetBase;
    (pMVar4->fields).elipsoidRadius.z = scale * fVar12;
    (pMVar4->fields).offsetFactor = scale * fVar6;
    if ((this->fields).CameraScaleEvent != (EventHandler_1_ScaleArgs_ *)0x0) {
      pEVar13 = (this->fields).CameraScaleEvent;
      lVar14 = FUN_?(TypeInfo__ScaleArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(float *)(lVar14 + 0x10) = scale;
      (*(pEVar13->fields)._._.invoke_impl)
                ((pEVar13->fields)._._.method_code,this,lVar14,(pEVar13->fields)._._.method);
    }
    (this->fields).currentSize = scale;
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateScale() */

void Assembly-CSharp.dll::SizeState::SizeState_UpdateScale(SizeState *this,MethodInfo *method)

{
  auStack_1._8_8_ = &UNK_?;
  fVar2 = SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  if ((this->fields).currentSize == fVar2) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScaleArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = SizeState_get_AvatarScale(this,(MethodInfo *)0x0);
  pfVar3 = &(this->fields).currentSize;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    pVVar4 = SizeState_FindValidMoveLocation((Vector3 *)auStack_1,this,fVar2,(MethodInfo *)0x0);
    pMVar5 = (this->fields).controllerLocal;
    uVar6._0_4_ = pVVar4->x;
    uVar6._4_4_ = pVVar4->y;
    fVar7 = pVVar4->z;
    if ((pMVar5 == (MvCharacterController *)0x0) ||
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar5,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    auStack_1._8_4_ = fVar7;
    auStack_1._0_8_ = uVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (obj->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar9,auStack_1);
    pMVar10 = (this->fields).interactableLocal;
    if (pMVar10 == (MVInteractable *)0x0) goto code_?;
    cVar11 = (*(pMVar10->klass->vtable).HasModifierEffect.methodPtr)
                      (pMVar10,5,(pMVar10->klass->vtable).HasModifierEffect.method);
    if (cVar11 != '\0') {
      pEVar12 = (EventHandler_1_EventArgs_ *)(this->fields).EquipSlapGunEvent;
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__System__EventArgs);
      }
      if (pEVar12 == (EventHandler_1_EventArgs_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  else if ((this->fields).UnEquipSlapGunEvent != (EventHandler_1_EventArgs_ *)0x0) {
    pEVar12 = (this->fields).UnEquipSlapGunEvent;
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__System__EventArgs);
    }
code_?:
    (*(pEVar12->fields)._._.invoke_impl)
              ((pEVar12->fields)._._.method_code,this,
               TypeInfo__System__EventArgs->static_fields->Empty,(pEVar12->fields)._._.method);
  }
  pMVar5 = (this->fields).controllerLocal;
  if (pMVar5 != (MvCharacterController *)0x0) {
    auStack_1._0_4_ = (pMVar5->fields).centerBase.x;
    auStack_1._4_4_ = (pMVar5->fields).centerBase.y;
    fVar7 = (pMVar5->fields).centerBase.z;
    (pMVar5->fields).center.x = auStack_1._0_4_ * fVar2;
    (pMVar5->fields).center.y = auStack_1._4_4_ * fVar2;
    (pMVar5->fields).center.z = fVar7 * fVar2;
    fVar7 = (pMVar5->fields).radiusBase.y;
    fVar13 = (pMVar5->fields).radiusBase.z;
    (pMVar5->fields).elipsoidRadius.x = fVar2 * (pMVar5->fields).radiusBase.x;
    (pMVar5->fields).elipsoidRadius.y = fVar2 * fVar7;
    fVar7 = (pMVar5->fields).offsetBase;
    (pMVar5->fields).elipsoidRadius.z = fVar2 * fVar13;
    (pMVar5->fields).offsetFactor = fVar2 * fVar7;
    if ((this->fields).CameraScaleEvent != (EventHandler_1_ScaleArgs_ *)0x0) {
      pEVar14 = (this->fields).CameraScaleEvent;
      lVar15 = FUN_?(TypeInfo__ScaleArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(float *)(lVar15 + 0x10) = fVar2;
      (*(pEVar14->fields)._._.invoke_impl)
                ((pEVar14->fields)._._.method_code,this,lVar15,(pEVar14->fields)._._.method);
    }
    (this->fields).currentSize = fVar2;
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* SizeState() */

void Assembly-CSharp.dll::SizeState::SizeState__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SizeState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  TypeInfo__SizeState->static_fields->layerMask =
       ~(1 << (uVar1 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar2 & 0x1f));
  this = (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
  if (this != (List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo_ *)0x0) {
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar1 = (this->fields)._size;
    if (uVar1 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar1 + 1;
      if ((uint)pPVar5->max_length <= uVar1) goto code_?;
      pPVar5->vector[(int)uVar1].Quadrant = 0;
      pPVar5->vector[(int)uVar1].FirstAxisSign = 0;
      pPVar5->vector[(int)uVar1].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0].Quadrant = 0;
      aPStack_6[0].FirstAxisSign = 0;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    uVar1 = _UNK_?;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar2 = (this->fields)._size;
    if (uVar2 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar2 + 1;
      if ((uint)pPVar5->max_length <= uVar2) goto code_?;
      pPVar5->vector[(int)uVar2].Quadrant = (int)((ulonglong)uVar1 << 0x20);
      pPVar5->vector[(int)uVar2].FirstAxisSign = (int)(((ulonglong)uVar1 << 0x20) >> 0x20);
      pPVar5->vector[(int)uVar2].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = (ulonglong)_UNK_? << 0x20;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    uVar2 = _UNK_?;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)((ulonglong)uVar2 << 0x20);
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = (ulonglong)_UNK_? << 0x20;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = 0;
      pPVar5->vector[(int)uVar7].FirstAxisSign = 0;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0].Quadrant = 0;
      aPStack_6[0].FirstAxisSign = 0;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)(ulonglong)uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)((ulonglong)uVar1 >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = ZEXT48(uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)(ulonglong)uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)((ulonglong)uVar2 >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = ZEXT48(uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = 0;
      pPVar5->vector[(int)uVar7].FirstAxisSign = 0;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0].Quadrant = 0;
      aPStack_6[0].FirstAxisSign = 0;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)(ulonglong)uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)((ulonglong)uVar1 >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = ZEXT48(uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)(ulonglong)uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)((ulonglong)uVar2 >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = ZEXT48(uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)(ulonglong)uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)((ulonglong)uVar2 >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = ZEXT48(uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)(ulonglong)uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)((ulonglong)uVar1 >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = ZEXT48(uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)((ulonglong)uVar1 << 0x20);
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)(((ulonglong)uVar1 << 0x20) >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = (ulonglong)uVar1 << 0x20;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar1;
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = CONCAT44(uVar1,uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar1;
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = CONCAT44(uVar1,uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)((ulonglong)uVar1 << 0x20);
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)(((ulonglong)uVar1 << 0x20) >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = (ulonglong)uVar1 << 0x20;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar1;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = CONCAT44(uVar1,uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar1;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = CONCAT44(uVar1,uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar1;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = CONCAT44(uVar1,uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)((ulonglong)uVar2 << 0x20);
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = (ulonglong)uVar2 << 0x20;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar2;
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = CONCAT44(uVar2,uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar2;
      pPVar5->vector[(int)uVar7].SecondAxisSign = 0;
    }
    else {
      aPStack_6[0].SecondAxisSign = 0;
      aPStack_6[0]._0_8_ = CONCAT44(uVar2,uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = (int)((ulonglong)uVar2 << 0x20);
      pPVar5->vector[(int)uVar7].FirstAxisSign = (int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = (ulonglong)uVar2 << 0x20;
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar2;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = CONCAT44(uVar2,uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar2;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = CONCAT44(uVar2,uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar2;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar2;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar1;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar1;
      aPStack_6[0]._0_8_ = CONCAT44(uVar2,uVar2);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 == (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) goto code_?;
    uVar7 = (this->fields)._size;
    if (uVar7 < (uint)pPVar5->max_length) {
      (this->fields)._size = uVar7 + 1;
      if ((uint)pPVar5->max_length <= uVar7) goto code_?;
      pPVar5->vector[(int)uVar7].Quadrant = uVar1;
      pPVar5->vector[(int)uVar7].FirstAxisSign = uVar2;
      pPVar5->vector[(int)uVar7].SecondAxisSign = uVar2;
    }
    else {
      aPStack_6[0].SecondAxisSign = uVar2;
      aPStack_6[0]._0_8_ = CONCAT44(uVar2,uVar1);
      mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
      List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    piVar4 = &(this->fields)._version;
    *piVar4 = *piVar4 + 1;
    pPVar5 = (this->fields)._items;
    if (pPVar5 != (PlaneIdHelper_PlaneQuadrantInfo__Array *)0x0) {
      uVar2 = (this->fields)._size;
      if (uVar2 < (uint)pPVar5->max_length) {
        (this->fields)._size = uVar2 + 1;
        if ((uint)pPVar5->max_length <= uVar2) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pPVar5->vector[(int)uVar2].Quadrant = uVar1;
        pPVar5->vector[(int)uVar2].FirstAxisSign = uVar1;
        pPVar5->vector[(int)uVar2].SecondAxisSign = uVar1;
      }
      else {
        aPStack_6[0].SecondAxisSign = uVar1;
        aPStack_6[0].FirstAxisSign = uVar1;
        aPStack_6[0].Quadrant = uVar1;
        mscorlib.dll::System::Collections::Generic::List`1[RTG::PlaneIdHelper+PlaneQuadrantInfo]::
        List_1_RTG_PlaneIdHelper_PlaneQuadrantInfo__AddWithResize
                  (this,aPStack_6,pMVar3->klass->rgctx_data[0xe].method);
      }
      TypeInfo__SizeState->static_fields->relativePositions = (List_1_UnityEngine_Vector3_ *)this;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__SizeState->static_fields->relativePositions >> 0xc);
        uVar9 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* SizeState(MVInteractable, MvCharacterController) */

void Assembly-CSharp.dll::SizeState::SizeState__ctor
               (SizeState *this,MVInteractable *interactable,MvCharacterController *controller,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).currentSize = 1.0;
  (this->fields).interactableLocal = interactable;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).controllerLocal = controller;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).controllerLocal >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void add_CameraScaleEvent(EventHandler`1[ScaleArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_add_CameraScaleEvent
               (SizeState *this,EventHandler_1_ScaleArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ScaleArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).CameraScaleEvent;
  a = (this->fields).CameraScaleEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ScaleArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ScaleArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ScaleArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ScaleArgs>);
      if (pEVar4 == (EventHandler_1_ScaleArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void add_EquipSlapGunEvent(EventHandler) */

void Assembly-CSharp.dll::SizeState::SizeState_add_EquipSlapGunEvent
               (SizeState *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).EquipSlapGunEvent;
  a = (this->fields).EquipSlapGunEvent;
  do {
    pEVar2 = (EventHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = (EventHandler *)0x0;
    if (pEVar2 != (EventHandler *)0x0) {
      if (pEVar2->klass == TypeInfo__System__EventHandler) {
        pEVar3 = pEVar2;
      }
      if (pEVar3 == (EventHandler *)0x0) {
        FUN_?(pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pEVar2 = *ppEVar1;
    bVar5 = a == pEVar2;
    if (bVar5) {
      *ppEVar1 = pEVar3;
      pEVar2 = a;
    }
    UNLOCK();
    pEVar3 = a;
    if (!bVar5) {
      pEVar3 = pEVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pEVar3 != a;
    a = pEVar3;
  } while (bVar5);
  return;
}


/* Void add_UnEquipSlapGunEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_add_UnEquipSlapGunEvent
               (SizeState *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).UnEquipSlapGunEvent;
  a = (this->fields).UnEquipSlapGunEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Single get_AvatarScale() */

float Assembly-CSharp.dll::SizeState::SizeState_get_AvatarScale(SizeState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<float>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactableLocal;
  if (pMVar1 != (MVInteractable *)0x0) {
    cVar2 = (*(pMVar1->klass->vtable).HasModifierEffect.methodPtr)
                      (pMVar1,5,(pMVar1->klass->vtable).HasModifierEffect.method);
    if (cVar2 == '\0') {
      pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                         ((MethodInfo *)0x0);
      if (((pSVar3 != (SpawnRoleDataMediator *)0x0) &&
          (pSVar4 = (pSVar3->fields).size,
          pSVar4 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Single_ *)0x0)) &&
         (pSVar5 = (pSVar4->fields)._.subscribableVariable,
         pSVar5 != (SubscribableVariable_1_System_Single_ *)0x0)) {
        return (pSVar5->fields)._.value;
      }
    }
    else {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractable *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar6 = (float)(*(pMVar1->klass->vtable).HandleModifierEffect.methodPtr)
                                 (pMVar1,5,_UNK_?,
                                  (pMVar1->klass->vtable).HandleModifierEffect.method);
        return fVar6;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  fVar6 = (float)(*pcVar7)();
  return fVar6;
}


/* Single get_ControllerCenterY() */

float Assembly-CSharp.dll::SizeState::SizeState_get_ControllerCenterY
                (SizeState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    return (pMVar1->fields).center.y;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Single get_ControllerRadius() */

float Assembly-CSharp.dll::SizeState::SizeState_get_ControllerRadius
                (SizeState *this,MethodInfo *method)

{
  pMVar1 = (this->fields).controllerLocal;
  if (pMVar1 != (MvCharacterController *)0x0) {
    return (pMVar1->fields).elipsoidRadius.x;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  fVar3 = (float)(*pcVar2)();
  return fVar3;
}


/* Void remove_CameraScaleEvent(EventHandler`1[ScaleArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_CameraScaleEvent
               (SizeState *this,EventHandler_1_ScaleArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<ScaleArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).CameraScaleEvent;
  source = (this->fields).CameraScaleEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<ScaleArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_ScaleArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_ScaleArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<ScaleArgs>);
      if (pEVar4 == (EventHandler_1_ScaleArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_EquipSlapGunEvent(EventHandler) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_EquipSlapGunEvent
               (SizeState *this,EventHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).EquipSlapGunEvent;
  source = (this->fields).EquipSlapGunEvent;
  do {
    pEVar2 = (EventHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = (EventHandler *)0x0;
    if (pEVar2 != (EventHandler *)0x0) {
      if (pEVar2->klass == TypeInfo__System__EventHandler) {
        pEVar3 = pEVar2;
      }
      if (pEVar3 == (EventHandler *)0x0) {
        FUN_?(pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pEVar2 = *ppEVar1;
    bVar5 = source == pEVar2;
    if (bVar5) {
      *ppEVar1 = pEVar3;
      pEVar2 = source;
    }
    UNLOCK();
    pEVar3 = source;
    if (!bVar5) {
      pEVar3 = pEVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pEVar3 != source;
    source = pEVar3;
  } while (bVar5);
  return;
}


/* Void remove_UnEquipSlapGunEvent(EventHandler`1[EventArgs]) */

void Assembly-CSharp.dll::SizeState::SizeState_remove_UnEquipSlapGunEvent
               (SizeState *this,EventHandler_1_EventArgs_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<System::EventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).UnEquipSlapGunEvent;
  source = (this->fields).UnEquipSlapGunEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<System::EventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_EventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_EventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<System::EventArgs>);
      if (pEVar4 == (EventHandler_1_EventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

