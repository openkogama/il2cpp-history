
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_Enter
               (JetPackCamera *this,MVCameraController *camController,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).lookAtTransform = pTVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).lookAtTransform >> 0xc);
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    aVStack_9[0].x = (pVVar8->upVector).x;
    aVStack_9[0].y = (pVVar8->upVector).y;
    fVar10 = (pVVar8->upVector).z;
    (this->fields).lookAtOffset.x = aVStack_9[0].x * TypeRef__System__Activator__T._0_4_;
    (this->fields).lookAtOffset.y = aVStack_9[0].y + aVStack_9[0].y;
    (this->fields).lookAtOffset.z = fVar10 + fVar10;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    pTVar2 = (this->fields).lookAtTransform;
    if (pTVar2 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_11.x = 0.0;
      VStack_11.y = 0.0;
      VStack_11.z = 0.0;
      pvVar12 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(pvVar12);
      aVStack_9[0].x = (this->fields).lookAtOffset.x;
      aVStack_9[0].y = (this->fields).lookAtOffset.y;
      fVar10 = VStack_11.z + (this->fields).lookAtOffset.z;
      if (obj != (Transform *)0x0) {
        aVStack_9[0].y = VStack_11.y + aVStack_9[0].y;
        aVStack_9[0].x = VStack_11.x + aVStack_9[0].x;
        aVStack_9[0].z = fVar10;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((obj->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)();
        pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if ((pMVar15 != (MainCameraManager *)0x0) &&
           (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pMVar15,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0))
        {
          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                             (&VStack_11,pTVar2,(MethodInfo *)0x0);
          fVar10 = pVVar16->x;
          (this->fields).xAxisTarget = fVar10;
          (this->fields).xAxis = fVar10;
          pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if ((pMVar15 != (MainCameraManager *)0x0) &&
             (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pMVar15,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0
             )) {
            pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                               (aVStack_9,pTVar2,(MethodInfo *)0x0);
            fVar10 = pVVar16->y;
            (this->fields).yAxisTarget = fVar10;
            (this->fields).yAxis = fVar10;
            pCVar17 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                ((MethodInfo *)0x0);
            bVar3 = iRam_? != 0;
            (this->fields).mainCamera = pCVar17;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
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
            pMVar15 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                               ((MethodInfo *)0x0);
            if ((pMVar15 != (MainCameraManager *)0x0) &&
               (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pMVar15,(MethodInfo *)0x0),
               pTVar2 != (Transform *)0x0)) {
              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                                 (aVStack_9,pTVar2,(MethodInfo *)0x0);
              uVar14._0_4_ = pVVar16->x;
              uVar14._4_4_ = pVVar16->y;
              fVar10 = pVVar16->z;
              pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar2 != (Transform *)0x0) {
                aVStack_9[0]._0_8_ = uVar14;
                aVStack_9[0].z = fVar10;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                          (pTVar2,aVStack_9,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
      }
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void FocusOnObject(MVWorldObjectClient, Single, Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnObject
               (JetPackCamera *this,MVWorldObjectClient *wo,float transitionTime,
               Vector3 *avatarOffset,Vector3 *cameraOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_r_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    value = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(wo,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = mscorlib.dll::System::Number::Number_FormatSingle
                        (value,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_r_,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0)
    ;
    obj = (this->fields).mainCamera;
    if (obj != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (obj->fields)._._._.m_CachedPtr;
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
      fVar5 = (float)(*pcRam_?)(pvVar2);
      fVar6 = (float)FUN_?(fVar5 * _UNK_? * _UNK_? * _UNK_?);
      puVar7 = (undefined8 *)(*(wo->klass->vtable).get_WorldPivot.methodPtr)(aVStackY_b8);
      pMVar8 = (this->fields).avatarLocal;
      fVar5 = *(float *)(puVar7 + 1);
      VStackY_c8._0_8_ = *puVar7;
      if (((pMVar8 != (MVBuildModeAvatarLocal *)0x0) &&
          (this_00 = (pMVar8->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStackY_d8 = 0;
        fStackY_d0 = 0.0;
        pvVar2 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar2);
        uVar10 = (this->fields).lookAtOffset.x;
        uVar11 = (this->fields).lookAtOffset.y;
        fVar12 = VStackY_c8.x;
        fVar13 = VStackY_c8.y;
        fVar14 = VStackY_c8.x - ((float)uStackY_d8 + (float)uVar10);
        fVar15 = VStackY_c8.y - (uStackY_d8._4_4_ + (float)uVar11);
        fVar16 = fVar5 - (fStackY_d0 + (this->fields).lookAtOffset.z);
        aVStackY_b8[0].y = fVar15;
        aVStackY_b8[0].x = fVar14;
        aVStackY_b8[0].z = fVar16;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStackY_c8.x = 0.0;
        VStackY_c8.y = 0.0;
        VStackY_c8.z = 0.0;
        pvVar2 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar2);
        uStackY_d8 = CONCAT44(fVar15,fVar14);
        fStackY_d0 = fVar16;
        fVar17 = (float)FUN_?(&uStackY_d8);
        if (_UNK_? < fVar17) {
          fVar16 = fVar16 / fVar17;
          uStackY_d8 = CONCAT44(fVar15 / fVar17,fVar14 / fVar17);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStackY_d8._0_4_ = (pVVar18->zeroVector).x;
          uStackY_d8._4_4_ = (pVVar18->zeroVector).y;
          fVar16 = (pVVar18->zeroVector).z;
        }
        fVar14 = (float)FUN_?(aVStackY_b8);
        fVar14 = fVar14 - value / fVar6;
        uVar19 = avatarOffset->x;
        uVar20 = avatarOffset->y;
        aVStackY_b8[0].z = fVar16 * fVar14 + avatarOffset->z + VStackY_c8.z;
        aVStackY_b8[0].y = uStackY_d8._4_4_ * fVar14 + (float)uVar20 + VStackY_c8.y;
        aVStackY_b8[0].x = (float)uStackY_d8 * fVar14 + (float)uVar19 + VStackY_c8.x;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar2);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStackY_c8.x = 0.0;
        VStackY_c8.y = 0.0;
        VStackY_c8.z = 0.0;
        pvVar2 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar2,&VStackY_c8);
        aVStackY_b8[0].x = VStackY_c8.x;
        aVStackY_b8[0].y = VStackY_c8.y;
        aVStackY_b8[0].z = VStackY_c8.z;
        JetPackCamera_SetToPosition(this,aVStackY_b8,(MethodInfo *)0x0);
        uVar21 = cameraOffset->x;
        uVar22 = cameraOffset->y;
        aVStackY_b8[0].z = fVar5 + cameraOffset->z;
        aVStackY_b8[0].y = fVar13 + (float)uVar22;
        aVStackY_b8[0].x = fVar12 + (float)uVar21;
        JetPackCamera_LookAt(this,aVStackY_b8,(MethodInfo *)0x0);
        pMVar23 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (pMVar23 != (MainCameraManager *)0x0) {
          this_01 = (pMVar23->fields).transitionCamera;
          pMVar24 = (pMVar23->fields).cameraController;
          if ((pMVar24 != (MVCameraController *)0x0) &&
             (this_02 = (pMVar24->fields).cameraStack,
             this_02 != (MVCameraController_CameraStack *)0x0)) {
            puStackY_50 = &UNK_?;
            this_03 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                                (this_02,(MethodInfo *)0x0);
            if (this_03 != (MVCameraBase *)0x0) {
              puStackY_50 = &UNK_?;
              pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_03,(MethodInfo *)0x0);
              if (this_01 != (TransitionCamera *)0x0) {
                puStackY_50 = &UNK_?;
                TransitionCamera::TransitionCamera_InitTransition
                          (this_01,pTVar9,transitionTime,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          puStackY_50 = &UNK_?;
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FocusOnPointFromAvatarPosition(Vector3, Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
               (JetPackCamera *this,Vector3 *focusPoint,Vector3 *avatarPosition,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if (pMVar1 == (MVBuildModeAvatarLocal *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (pMVar1->fields)._._._.transform;
  VStack_4.x = (this->fields).lookAtOffset.x;
  VStack_4.y = (this->fields).lookAtOffset.y;
  uVar5 = avatarPosition->x;
  uVar6 = avatarPosition->y;
  fVar7 = avatarPosition->z - (this->fields).lookAtOffset.z;
  if (pTVar3 != (Transform *)0x0) {
    VStack_4.y = (float)uVar6 - VStack_4.y;
    VStack_4.x = (float)uVar5 - VStack_4.x;
    VStack_4.z = fVar7;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar8);
    pMVar1 = (this->fields).avatarLocal;
    if ((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
       (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_10.x = 0.0;
      VStack_10.y = 0.0;
      VStack_10.z = 0.0;
      pvVar8 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar8,&VStack_10);
      VStack_4.x = VStack_10.x;
      VStack_4.y = VStack_10.y;
      VStack_4.z = VStack_10.z;
      JetPackCamera_SetToPosition(this,&VStack_4,(MethodInfo *)0x0);
      VStack_4.x = focusPoint->x;
      VStack_4.y = focusPoint->y;
      VStack_4.z = focusPoint->z;
      JetPackCamera_LookAt(this,&VStack_4,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FocusOnPosition(Vector3, Single) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_FocusOnPosition
               (JetPackCamera *this,Vector3 *lookAtPosition,float transitionTime,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if (((pMVar1 != (MVBuildModeAvatarLocal *)0x0) &&
      (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStackY_38 = 0;
    uStackY_30 = 0;
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
    (*pcRam_?)(pvVar3,&uStackY_38);
    JetPackCamera_SetToPosition(this,(Vector3 *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    JetPackCamera_LookAt(this,(Vector3 *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar6 != (MainCameraManager *)0x0) {
      this_01 = (pMVar6->fields).transitionCamera;
      pMVar7 = (pMVar6->fields).cameraController;
      if (((pMVar7 != (MVCameraController *)0x0) &&
          (this_02 = (pMVar7->fields).cameraStack, this_02 != (MVCameraController_CameraStack *)0x0)
          ) && ((this_03 = MVCameraController+CameraStack::
                           MVCameraController_CameraStack_get_CurCamera(this_02,(MethodInfo *)0x0),
                this_03 != (MVCameraBase *)0x0 &&
                (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_03,(MethodInfo *)0x0),
                this_01 != (TransitionCamera *)0x0)))) {
        TransitionCamera::TransitionCamera_InitTransition
                  (this_01,pTVar2,transitionTime,1,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 GetLookAtAvatarPosition(Vector3) */

Vector3 * Assembly-CSharp.dll::JetPackCamera::JetPackCamera_GetLookAtAvatarPosition
                    (Vector3 *__return_storage_ptr__,JetPackCamera *this,Vector3 *position,
                    MethodInfo *method)

{
  uVar1 = (this->fields).lookAtOffset.x;
  uVar2 = (this->fields).lookAtOffset.y;
  uVar3 = position->x;
  fVar4 = position->y;
  fVar5 = position->z;
  fVar6 = (this->fields).lookAtOffset.z;
  __return_storage_ptr__->x = (float)uVar3 - (float)uVar1;
  __return_storage_ptr__->y = fVar4 - (float)uVar2;
  __return_storage_ptr__->z = fVar5 - fVar6;
  return __return_storage_ptr__;
}


/* Void HandleInput(MVCameraController) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_HandleInput
               (JetPackCamera *this,MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Pressed,(MethodInfo *)0x0)
  ;
  if ((bVar1 != 0) && (((this->fields)._.ignoreInputTypes & 1) == 0)) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar2 = fVar2 * _UNK_?;
    fVar3 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    fVar3 = fVar3 * _UNK_?;
    if (this_00 == (Camera *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (this_00,(MethodInfo *)0x0);
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    iVar7 = (*pcRam_?)();
    fVar3 = (float)((uint)fVar3 ^ _UNK_?);
    (this->fields).yAxisTarget = (fVar5 / (float)iVar7) * fVar2 + (this->fields).yAxisTarget;
    for (fVar2 = fVar3 * (fVar5 / (float)iVar7) + (this->fields).xAxisTarget; fVar2 < _UNK_?
        ; fVar2 = fVar2 + _UNK_?) {
    }
    for (; _UNK_? < fVar2; fVar2 = fVar2 + _UNK_?) {
    }
    fVar3 = (float)(this->fields).xMinLimit;
    if ((fVar3 <= fVar2) && (fVar5 = (float)(this->fields).xMaxLimit, fVar3 = fVar2, fVar5 < fVar2))
    {
      fVar3 = fVar5;
    }
    (this->fields).xAxisTarget = fVar3;
    (this->fields).rotationSmoothTime = 0.1;
  }
  return;
}


/* Void LookAt(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_LookAt
               (JetPackCamera *this,Vector3 *position,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
              (pTVar1,&VStack_2,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         (&VStack_2,pTVar1,(MethodInfo *)0x0);
      for (fVar4 = pVVar3->x; fVar4 < _UNK_?; fVar4 = fVar4 + _UNK_?) {
      }
      for (; _UNK_? < fVar4; fVar4 = fVar4 + _UNK_?) {
      }
      (this->fields).xAxisTarget = fVar4;
      (this->fields).xAxis = fVar4;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           (&VStack_2,pTVar1,(MethodInfo *)0x0);
        fVar4 = pVVar3->y;
        (this->fields).yAxisVelocity = 0.0;
        (this->fields).xAxisVelocity = 0.0;
        (this->fields).yAxisTarget = fVar4;
        (this->fields).yAxis = fVar4;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single NormalizeAngle(Single) */

float Assembly-CSharp.dll::JetPackCamera::JetPackCamera_NormalizeAngle
                (float angle,MethodInfo *method)

{
  for (; angle < _UNK_?; angle = angle + _UNK_?) {
  }
  for (; _UNK_? < angle; angle = angle + _UNK_?) {
  }
  return angle;
}


/* Void Reset() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_Reset(JetPackCamera *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                       (aVStack_3,pTVar1,(MethodInfo *)0x0);
    pMVar4 = (this->fields).avatarLocal;
    VStack_5.x = pVVar2->x;
    VStack_5.y = pVVar2->y;
    fVar6 = pVVar2->z;
    if ((pMVar4 != (MVBuildModeAvatarLocal *)0x0) &&
       (this_00 = (pMVar4->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                           (aVStack_3,pTVar1,(MethodInfo *)0x0);
        fVar7 = VStack_5.x;
        fVar8 = pVVar2->y;
        (this->fields).yAxisTarget = fVar8;
        (this->fields).yAxis = fVar8;
        (this->fields).xAxisTarget = VStack_5.x;
        (this->fields).xAxis = VStack_5.x;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          VStack_5.y = fVar8;
          VStack_5.x = fVar7;
          VStack_5.z = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                    (pTVar1,&VStack_5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetDistanceAndDirectionToAvatar(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_ResetDistanceAndDirectionToAvatar
               (JetPackCamera *this,Vector3 *lookAtPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointBlue);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__JetPackCamera____c___ResetDistanceAndDirectionToAvatar_b__35_0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__JetPackCamera____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__JetPackCamera____c);
  }
  this_01 = TypeInfo__JetPackCamera____c->static_fields->__9__35_0;
  if (this_01 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__JetPackCamera____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__JetPackCamera____c);
    }
    object = TypeInfo__JetPackCamera____c->static_fields->__9;
    this_01 = (Func_2_MVWorldObjectClient_Boolean_ *)
              FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__JetPackCamera____c___ResetDistanceAndDirectionToAvatar_b__35_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__JetPackCamera____c->static_fields->__9__35_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__JetPackCamera____c->static_fields->__9__35_0 >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                         (this_00,this_01,(MethodInfo *)0x0), pMVar8 != (MVWorldObjectClient *)0x0))
  {
    pMVar9 = pMVar8->klass;
    bVar10 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
    if (((pMVar9->_1).naturalAligment < bVar10) ||
       ((MVSpawnPointBlue__Class *)(pMVar9->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        TypeInfo__MVSpawnPointBlue)) {
      FUN_?(pMVar8);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar12 = (undefined8 *)
              (*(pMVar9->vtable).get_WorldPosition_1.methodPtr)
                        (&VStack_13,pMVar8,(pMVar9->vtable).get_WorldPosition_1.method);
    auStack_14[0]._0_4_ = lookAtPosition->x;
    auStack_14[0]._4_4_ = lookAtPosition->y;
    VStack_13.z = *(float *)(puVar12 + 1) - lookAtPosition->z;
    VStack_13._0_8_ =
         CONCAT44((float)((ulonglong)*puVar12 >> 0x20) - (float)auStack_14[0]._4_4_,
                  (float)*puVar12 - (float)(undefined4)auStack_14[0]);
    fVar15 = (float)FUN_?(&VStack_13);
    pMVar16 = (this->fields).avatarLocal;
    if (pMVar16 != (MVBuildModeAvatarLocal *)0x0) {
      puVar12 = (undefined8 *)
                (*(pMVar16->klass->vtable).get_WorldPosition_1.methodPtr)
                          (auStack_14,pMVar16,(pMVar16->klass->vtable).get_WorldPosition_1.method);
      VStack_13.x = lookAtPosition->x;
      VStack_13.y = lookAtPosition->y;
      fVar17 = *(float *)(puVar12 + 1) - lookAtPosition->z;
      uVar18._0_4_ = (float)*puVar12 - VStack_13.x;
      uStack_1 = (ulonglong)(uint)(float)uVar18;
      fStack_2 = fVar17;
      fVar19 = (float)FUN_?(&uStack_1);
      VStack_13._0_8_ = ZEXT48((uint)(float)uVar18);
      VStack_13.z = fVar17;
      fVar20 = (float)FUN_?(&VStack_13);
      if (_UNK_? < fVar20) {
        uVar18._0_4_ = (float)uVar18 / fVar20;
        uVar18._4_4_ = 0.0 / fVar20;
        fVar17 = fVar17 / fVar20;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar18._0_4_ = (pVVar21->zeroVector).x;
        uVar18._4_4_ = (pVVar21->zeroVector).y;
        fVar17 = (pVVar21->zeroVector).z;
        auStack_14[0] = uVar18;
      }
      pMVar16 = (this->fields).avatarLocal;
      if (pMVar16 != (MVBuildModeAvatarLocal *)0x0) {
        puVar12 = (undefined8 *)
                  (*(pMVar16->klass->vtable).get_WorldPosition_1.methodPtr)
                            (auStack_14,pMVar16,(pMVar16->klass->vtable).get_WorldPosition_1.method);
        fVar15 = fVar15 - fVar19;
        VStack_13.z = fVar17 * fVar15 + *(float *)(puVar12 + 1);
        VStack_13.y = fVar15 * uVar18._4_4_ + (float)((ulonglong)*puVar12 >> 0x20);
        VStack_13.x = (float)uVar18 * fVar15 + (float)*puVar12;
        (*(pMVar16->klass->vtable).set_WorldPosition.methodPtr)
                  (pMVar16,&VStack_13,(pMVar16->klass->vtable).set_WorldPosition.method);
        VStack_13.x = lookAtPosition->x;
        VStack_13.y = lookAtPosition->y;
        VStack_13.z = lookAtPosition->z;
        JetPackCamera_FocusOnPosition
                  (this,&VStack_13,TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetRotationToTargetTransform() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_ResetRotationToTargetTransform
               (JetPackCamera *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
                         (&VStack_3,pTVar1,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar2->x;
      uVar4._4_4_ = pVVar2->y;
      fVar5 = pVVar2->z;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        VStack_3._0_8_ = uVar4;
        VStack_3.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
                  (pTVar1,&VStack_3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetToPosition(Vector3) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_SetToPosition
               (JetPackCamera *this,Vector3 *position,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  uVar1 = (this->fields).lookAtOffset.x;
  uVar2 = (this->fields).lookAtOffset.y;
  uStack_3._0_4_ = position->x;
  uStack_3._4_4_ = position->y;
  fStack_4 = (this->fields).lookAtOffset.z + position->z;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_3 = CONCAT44((float)uVar2 + (float)uStack_3._4_4_,
                       (float)uVar1 + (float)(undefined4)uStack_3);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar6,&uStack_3);
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera_UpdateCamera
               (JetPackCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  JetPackCamera_HandleInput(this,camController,(MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothDampAngle
                    ((this->fields).xAxis,(this->fields).xAxisTarget,&(this->fields).xAxisVelocity,
                     (this->fields).rotationSmoothTime,in_stack_2);
  (this->fields).xAxis = fVar1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_SmoothDampAngle
                    ((this->fields).yAxis,(this->fields).yAxisTarget,&(this->fields).yAxisVelocity,
                     (this->fields).rotationSmoothTime,in_stack_2);
  (this->fields).yAxis = fVar1;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  fStack_4 = 0.0;
  uStack_5 = CONCAT44((this->fields).yAxis * _UNK_?,(this->fields).xAxis * _UNK_?);
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&uStack_5);
  if (pTVar3 != (Transform *)0x0) {
    uStack_10 = (undefined4)uStack_6;
    uStack_11 = uStack_6._4_4_;
    uStack_12 = (undefined4)uStack_7;
    uStack_13 = uStack_7._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar14);
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    pTVar3 = (this->fields).lookAtTransform;
    if (pTVar3 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      fStack_4 = 0.0;
      pvVar14 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar14);
      uStack_6._0_4_ = (this->fields).lookAtOffset.x;
      uStack_6._4_4_ = (this->fields).lookAtOffset.y;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uStack_6 = CONCAT44(uStack_5._4_4_ + (float)uStack_6._4_4_,
                           (float)uStack_5 + (float)(undefined4)uStack_6);
      uStack_7 = CONCAT44(uStack_7._4_4_,fStack_4 + (this->fields).lookAtOffset.z);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (obj->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar14,&uStack_6);
      MVCameraBase::MVCameraBase_UpdateCamera
                ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* JetPackCamera() */

void Assembly-CSharp.dll::JetPackCamera::JetPackCamera__ctor(JetPackCamera *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).sensitivityX = 15.0;
  (this->fields).sensitivityY = 15.0;
  (this->fields).aroundXInertia = 0.5;
  (this->fields).aroundYInertiaMouseControlled = 0.5;
  (this->fields).aroundYInertiaAvatarControlled = 1.0;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  (this->fields).scrollSpeed = 0.5;
  (this->fields).xMinLimit = -0x57;
  (this->fields).xMaxLimit = 0x57;
  (this->fields).rotationSmoothTime = 0.1;
  (this->fields)._.cameraRadius = 0.3;
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
                while (ppMVar16 = ppMVar15 + 0x3052aacd,
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

