
/* Void CheckAvatarRotation() */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_CheckAvatarRotation
               (AvatarLimbManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarWO;
  if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
     (pTVar2 = (pMVar1->fields).transform, pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_3.x = 0.0;
    QStack_3.y = 0.0;
    QStack_3.z = 0.0;
    QStack_3.w = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar4,&QStack_3);
    aQStack_7[0].x = QStack_3.x;
    aQStack_7[0].y = QStack_3.y;
    aQStack_7[0].z = QStack_3.z;
    aQStack_7[0].w = QStack_3.w;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       ((Vector3 *)&QStack_3,aQStack_7,in_R8);
    fVar9 = _UNK_?;
    fVar10 = pVVar8->y;
    if (_UNK_? < fVar10) {
      fVar10 = _UNK_? - (fVar10 - _UNK_?);
    }
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       ((Vector3 *)&QStack_3,&(this->fields).previousTransformRotation,in_R8);
    fVar11 = pVVar8->y;
    if (fVar9 < fVar11) {
      fVar11 = fVar9 - (fVar11 - fVar9);
    }
    if ((_UNK_? < (float)((uint)(fVar10 - fVar11) & _UNK_?)) &&
       ((this->fields).OnAvatarRotate != (Action *)0x0)) {
      pAVar12 = (this->fields).OnAvatarRotate;
      (*(pAVar12->fields)._._.invoke_impl)((pAVar12->fields)._._.method_code);
    }
    pMVar1 = (this->fields).avatarWO;
    if ((pMVar1 != (MVWorldObjectClient *)0x0) &&
       (pTVar2 = (pMVar1->fields).transform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aQStack_7[0].x = 0.0;
      aQStack_7[0].y = 0.0;
      aQStack_7[0].z = 0.0;
      aQStack_7[0].w = 0.0;
      pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar4,aQStack_7);
      (this->fields).previousTransformRotation.x = aQStack_7[0].x;
      (this->fields).previousTransformRotation.y = aQStack_7[0].y;
      (this->fields).previousTransformRotation.z = aQStack_7[0].z;
      (this->fields).previousTransformRotation.w = aQStack_7[0].w;
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(MVWorldObjectClient, MVBody, AvatarEnabledChangeHandler, LimbRotationRuntimeData)
    */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_Initialize
               (AvatarLimbManager *this,MVWorldObjectClient *avatarWO,MVBody *body,
               AvatarEnabledChangeHandler *enabledChangeHandler,
               LimbRotationRuntimeData *limbRotationRuntimeData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarLimbManager__LimbRotator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarWO = avatarWO;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarWO >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (AvatarLimbManager_AvatarLookDirectionHandler *)
           FUN_?(TypeInfo__AvatarLimbManager__AvatarLookDirectionHandler);
  (this->fields).lookDirectionHandler = pAVar6;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).lookDirectionHandler >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar7 = iRam_?;
  pAVar6 = (this->fields).lookDirectionHandler;
  if (pAVar6 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    (pAVar6->fields).avatarWO = avatarWO;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)&(pAVar6->fields).avatarWO >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar8 = (AvatarLimbManager_LimbRotator *)
             FUN_?(TypeInfo__AvatarLimbManager__LimbRotator);
    bVar1 = iRam_? != 0;
    (pAVar8->fields).isActive = 1;
    (this->fields).limbRotator = pAVar8;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).limbRotator >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar8 = (this->fields).limbRotator;
    if (pAVar8 != (AvatarLimbManager_LimbRotator *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<System::String>);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__Dictionary__
                );
      bVar1 = iRam_? != 0;
      (pAVar8->fields).limbControllers = (Dictionary_2_BodyData_PartIndex_LimbController_ *)this_00;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&pAVar8->fields >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      if (((body == (MVBody *)0x0) ||
          (pMVar9 = (body->fields).bodyObject, pMVar9 == (MVBodyObject *)0x0)) ||
         (pBVar10 = (pMVar9->fields).boneAnimation, pBVar10 == (BoneAnimation *)0x0)) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pAVar12 = (pBVar10->fields).OnAnimationChange;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)pAVar8,
                 MethodInfo__AvatarLimbManager__LimbRotator__OnAnimationChange_System__String_,
                 (MethodInfo *)0x0);
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar12,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar14 = TypeInfo__System__Action<System::String>;
      if (pDVar13 == (Delegate *)0x0) {
        (pBVar10->fields).OnAnimationChange = (Action_1_String_ *)0x0;
      }
      else {
        pAVar12 = (Action_1_String_ *)
                  FUN_?(pDVar13,TypeInfo__System__Action<System::String>);
        if (pAVar12 == (Action_1_String_ *)0x0) {
          FUN_?(pDVar13,pAVar14);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (pBVar10->fields).OnAnimationChange = pAVar12;
        pAVar14 = TypeInfo__System__Action<System::String>;
        lVar3 = FUN_?(pDVar13,TypeInfo__System__Action<System::String>);
        if (lVar3 == 0) {
          FUN_?(pDVar13,pAVar14);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pBVar10->fields).OnAnimationChange >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                (pAVar8,BodyData_PartIndex__Enum_Torso,avatarWO,body,this,(MethodInfo *)0x0);
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                (pAVar8,BodyData_PartIndex__Enum_Head,avatarWO,body,this,(MethodInfo *)0x0);
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                (pAVar8,BodyData_PartIndex__Enum_RArm,avatarWO,body,this,(MethodInfo *)0x0);
      AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_CreateLimbController
                (pAVar8,BodyData_PartIndex__Enum_LArm,avatarWO,body,this,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Single QuaternionAngleToNormalAngle(Single) */

float Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_QuaternionAngleToNormalAngle
                (AvatarLimbManager *this,float angle,MethodInfo *method)

{
  if (_UNK_? < angle) {
    return _UNK_? - (angle - _UNK_?);
  }
  return angle;
}


/* Void SetLimbRotatorActivity(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_SetLimbRotatorActivity
               (AvatarLimbManager *this,bool shouldBeActive,MethodInfo *method)

{
  pAVar1 = (this->fields).limbRotator;
  if (pAVar1 != (AvatarLimbManager_LimbRotator *)0x0) {
    (pAVar1->fields).isActive = shouldBeActive;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateLimbRotations(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager::AvatarLimbManager_UpdateLimbRotations
               (AvatarLimbManager *this,Vector3 *lookDirection,MethodInfo *method)

{
  this_00 = (this->fields).lookDirectionHandler;
  if (this_00 != (AvatarLimbManager_AvatarLookDirectionHandler *)0x0) {
    aVStack_1[0].x = lookDirection->x;
    aVStack_1[0].y = lookDirection->y;
    aVStack_1[0].z = lookDirection->z;
    AvatarLimbManager+AvatarLookDirectionHandler::
    AvatarLimbManager_AvatarLookDirectionHandler_Update(this_00,aVStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

