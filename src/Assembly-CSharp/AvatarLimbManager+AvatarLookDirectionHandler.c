
/* Void CheckForRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_CheckForRotation
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  uVar1 = (this->fields).localLookDirection.x;
  uVar2 = (this->fields).localLookDirection.y;
  uVar3 = (this->fields).previousLookDirection.x;
  uVar4 = (this->fields).previousLookDirection.y;
  fStack_5 = (this->fields).localLookDirection.z - (this->fields).previousLookDirection.z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fVar7 = (float)FUN_?(&uStack_6);
  if ((_UNK_? < fVar7) && ((this->fields).OnRotationChange != (Action *)0x0)) {
    pAVar8 = (this->fields).OnRotationChange;
    (*(pAVar8->fields)._._.invoke_impl)
              ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
  }
  fVar9 = (this->fields).localLookDirection.y;
  fVar7 = (this->fields).localLookDirection.z;
  (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
  (this->fields).previousLookDirection.y = fVar9;
  (this->fields).previousLookDirection.z = fVar7;
  return;
}


/* Void Update(Vector3) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_Update
               (AvatarLimbManager_AvatarLookDirectionHandler *this,Vector3 *lookDirection,
               MethodInfo *method)

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
    pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    uVar6 = lookDirection->x;
    uVar7 = lookDirection->y;
    pIStack_8 = (Il2CppMethodPointer)CONCAT44(pIStack_8._4_4_,lookDirection->z + 0.0);
    auStack_9 = (undefined1  [8])CONCAT44((float)uVar7 + 0.0,(float)uVar6 + 0.0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_10 = (undefined1  [8])0x0;
    uStack_11 = (Il2CppMethodPointer)((ulonglong)(uint)uStack_11._4_4_ << 0x20);
    if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    method_00 = (MethodInfo *)auStack_10;
    (*pcRam_?)();
    (this->fields).localLookDirection.x = (float)auStack_10._0_4_;
    (this->fields).localLookDirection.y = (float)auStack_10._4_4_;
    (this->fields).localLookDirection.z = (float)uStack_11;
    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar12 != (MainCameraManager *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar12,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0))
    {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_9 = (undefined1  [8])0x0;
      pIStack_8 = (Il2CppMethodPointer)0x0;
      pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3,auStack_9);
      auStack_10 = auStack_9;
      uStack_11 = pIStack_8;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                          ((Vector3 *)auStack_9,(Quaternion *)auStack_10,method_00);
      fVar14 = pVVar13->y;
      if (fVar14 != (this->fields).previousYaw) {
        if ((this->fields).OnLookDirectionYawChange != (Action_1_Single_ *)0x0) {
          pAVar15 = (this->fields).OnLookDirectionYawChange;
          method_00 = (pAVar15->fields)._._.method;
          (*(pAVar15->fields)._._.invoke_impl)((pAVar15->fields)._._.method_code,fVar14);
        }
        (this->fields).previousYaw = fVar14;
      }
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar12 != (MainCameraManager *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar12,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)
         ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_9 = (undefined1  [8])0x0;
        pIStack_8 = (Il2CppMethodPointer)0x0;
        pvVar3 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar3 != (void *)0x0) {
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,auStack_9);
          auStack_10 = auStack_9;
          uStack_11 = pIStack_8;
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                              ((Vector3 *)auStack_9,(Quaternion *)auStack_10,method_00);
          fVar14 = pVVar13->x;
          if (fVar14 != (this->fields).previousPitch) {
            if ((this->fields).OnLookDirectionPitchChange != (Action_1_Single_ *)0x0) {
              pAVar15 = (this->fields).OnLookDirectionPitchChange;
              (*(pAVar15->fields)._._.invoke_impl)
                        ((pAVar15->fields)._._.method_code,fVar14,(pAVar15->fields)._._.method);
            }
            (this->fields).previousPitch = fVar14;
          }
          uVar16 = (this->fields).localLookDirection.x;
          uVar17 = (this->fields).localLookDirection.y;
          uVar18 = (this->fields).previousLookDirection.x;
          uVar19 = (this->fields).previousLookDirection.y;
          auStack_9 = (undefined1  [8])
                       CONCAT44((float)uVar17 - (float)uVar19,(float)uVar16 - (float)uVar18);
          pIStack_8 = (Il2CppMethodPointer)
                       CONCAT44(pIStack_8._4_4_,
                                (this->fields).localLookDirection.z -
                                (this->fields).previousLookDirection.z);
          fVar14 = (float)FUN_?(auStack_9);
          if ((_UNK_? < fVar14) && ((this->fields).OnRotationChange != (Action *)0x0)) {
            pAVar20 = (this->fields).OnRotationChange;
            (*(pAVar20->fields)._._.invoke_impl)
                      ((pAVar20->fields)._._.method_code,(pAVar20->fields)._._.method);
          }
          fVar21 = (this->fields).localLookDirection.y;
          fVar14 = (this->fields).localLookDirection.z;
          (this->fields).previousLookDirection.x = (this->fields).localLookDirection.x;
          (this->fields).previousLookDirection.y = fVar21;
          (this->fields).previousLookDirection.z = fVar14;
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePitch() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_UpdatePitch
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_00 == (MainCameraManager *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar3,&QStack_2);
    aQStack_5[0].x = QStack_2.x;
    aQStack_5[0].y = QStack_2.y;
    aQStack_5[0].z = QStack_2.z;
    aQStack_5[0].w = QStack_2.w;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       ((Vector3 *)&QStack_2,aQStack_5,in_R8);
    fVar7 = pVVar6->x;
    if (fVar7 != (this->fields).previousPitch) {
      if ((this->fields).OnLookDirectionPitchChange != (Action_1_Single_ *)0x0) {
        pAVar8 = (this->fields).OnLookDirectionPitchChange;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,fVar7,(pAVar8->fields)._._.method);
      }
      (this->fields).previousPitch = fVar7;
    }
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateYaw() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarLookDirectionHandler::
     AvatarLimbManager_AvatarLookDirectionHandler_UpdateYaw
               (AvatarLimbManager_AvatarLookDirectionHandler *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((this_00 == (MainCameraManager *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar3,&QStack_2);
    aQStack_5[0].x = QStack_2.x;
    aQStack_5[0].y = QStack_2.y;
    aQStack_5[0].z = QStack_2.z;
    aQStack_5[0].w = QStack_2.w;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       ((Vector3 *)&QStack_2,aQStack_5,in_R8);
    fVar7 = pVVar6->y;
    if (fVar7 != (this->fields).previousYaw) {
      if ((this->fields).OnLookDirectionYawChange != (Action_1_Single_ *)0x0) {
        pAVar8 = (this->fields).OnLookDirectionYawChange;
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,fVar7,(pAVar8->fields)._._.method);
      }
      (this->fields).previousYaw = fVar7;
    }
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

