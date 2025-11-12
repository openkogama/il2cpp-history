
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_Enter
               (AndroidVehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Camera_enter_____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Camera_enter_____,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).originalTransformParent = pTVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).originalTransformParent >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar1,(Transform *)0x0,(MethodInfo *)0x0);
      this_00 = (HashSet_1_System_Int32_ *)
                FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      FUN_?(this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar7 = (this->fields).avatarLocal;
      if ((pMVar7 != (MVAvatarLocal *)0x0) && (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__AddIfNotPresent
                  (this_00,(pMVar7->fields)._._._._.id,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                   rgctx_data[0x15].method);
        bVar2 = iRam_? != 0;
        (this->fields).ignoreAvatarId = this_00;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).ignoreAvatarId >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pTVar8 = (this->fields).targetRotation;
        if (pTVar8 != (TargetRotation *)0x0) {
          (pTVar8->fields).eulerAngles.x = (this->fields).initialYRotation;
          (pTVar8->fields).eulerAngles.y = 0.0;
          (pTVar8->fields).eulerAngles.z = 0.0;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_9 = 0;
            uStack_10 = 0;
            pvVar11 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar11,&uStack_9);
            pTVar8 = (this->fields).targetRotation;
            if (pTVar8 != (TargetRotation *)0x0) {
              uVar14 = (pTVar8->fields).eulerAngles.x;
              uVar15 = (pTVar8->fields).eulerAngles.y;
              fStack_16 = (pTVar8->fields).eulerAngles.z * _UNK_?;
              uStack_17 = CONCAT44((float)uVar15 * _UNK_?,(float)uVar14 * _UNK_?);
              uStack_18 = 0;
              uStack_19 = 0;
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(&uStack_17);
              (this->fields).rotationX = (this->fields).initialYRotation;
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar1 == (Transform *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uStack_20 = (undefined4)uStack_18;
              uStack_21 = uStack_18._4_4_;
              uStack_22 = (undefined4)uStack_19;
              uStack_23 = uStack_19._4_4_;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar11 = (pTVar1->fields)._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar13 = func_?(&UNK_?);
                FUN_?(uVar13,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(pvVar11,&uStack_20);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_Exit
               (AndroidVehicleCamera *this,MVCameraController *camController,MethodInfo *method)

{
  context = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (context == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = (this->fields).originalTransformParent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (context != (Transform *)0x0) {
    pTVar3 = (Transform *)0x0;
    if (context->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = context;
    }
    if (pTVar3 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                ((Object *)StringLiteral_Parent_of_RectTransform_is_being,(Object_1 *)context,
                 (MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                  ,pTVar2,1,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (context == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar4 = (context->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)context,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  if (pTVar2 == (Transform *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,pvVar5,1);
  return;
}


/* Void HandleCollision() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_HandleCollision
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar4);
    this_00 = (this->fields).cameraCollision;
    cameraRadius = (this->fields)._.cameraRadius;
    baseDistance = (this->fields).distanceToLookAt;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar4,&VStack_7);
      if (this_00 != (CameraCollision *)0x0) {
        VStack_8.interactionFlags = 0;
        VStack_9.z = VStack_7.z;
        VStack_7.z = VStack_3.z;
        VStack_8.point.x = 0.0;
        VStack_8.point.y = 0.0;
        VStack_8.point.z = 0.0;
        VStack_8.normal.x = 0.0;
        VStack_8.normal.y = 0.0;
        VStack_8.normal.z = 0.0;
        VStack_8.cubePos.x = 0;
        VStack_8.cubePos.y = 0;
        VStack_8.cubePos.z = 0;
        VStack_8._30_2_ = 0;
        VStack_8.face = 0;
        VStack_8.isCubeHit = 0;
        VStack_8._37_3_ = 0;
        VStack_8.woId = 0;
        VStack_8._44_4_ = 0;
        VStack_8.cube = (Cube *)0x0;
        VStack_8.distance = 0.0;
        VStack_8._60_4_ = 0;
        VStack_8.collider = (Collider *)0x0;
        VStack_8.transform = (Transform *)0x0;
        VStack_9.x = VStack_7.x;
        VStack_9.y = VStack_7.y;
        VStack_7.x = VStack_3.x;
        VStack_7.y = VStack_3.y;
        bVar10 = CameraCollision::CameraCollision_Collide_1
                          (this_00,&VStack_8,&VStack_2,cameraRadius,baseDistance,&VStack_7,
                           &VStack_9,(this->fields).ignoreAvatarId,(MethodInfo *)0x0);
        if (bVar10 != 0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 == (Transform *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          VStack_9.x = VStack_2.x;
          VStack_9.y = VStack_2.y;
          VStack_9.z = VStack_2.z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar4);
        }
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        this_01 = (this->fields).cameraLerpToDesiredDistance;
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
          VStack_2.x = 0.0;
          VStack_2.y = 0.0;
          VStack_2.z = 0.0;
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
          (*pcRam_?)(pvVar4,&VStack_2);
          if (this_01 != (CameraLerpToDesiredDistance *)0x0) {
            VStack_9.x = VStack_2.x;
            VStack_9.y = VStack_2.y;
            VStack_9.z = VStack_2.z;
            VStack_2.x = VStack_3.x;
            VStack_2.y = VStack_3.y;
            VStack_2.z = VStack_3.z;
            pVVar11 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               (&VStack_7,this_01,&VStack_2,&VStack_9,(MethodInfo *)0x0);
            if (pTVar1 == (Transform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            VStack_9.x = pVVar11->x;
            VStack_9.y = pVVar11->y;
            VStack_9.z = pVVar11->z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar4,&VStack_9);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandlePos() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_HandlePos
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = 0;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar4);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_8._0_4_ = (pVVar7->forwardVector).x;
    uStack_8._4_4_ = (pVVar7->forwardVector).y;
    fVar9 = (float)(uStack_8._4_4_ ^ _UNK_?);
    fVar10 = (float)((undefined4)uStack_8 ^ _UNK_?);
    fVar11 = (float)((uint)(pVVar7->forwardVector).z ^ _UNK_?);
    fVar12 = (float)uStack_3 + (float)uStack_3;
    fVar13 = uStack_2._4_4_ + uStack_2._4_4_;
    fVar14 = ((float)uStack_2 + (float)uStack_2) * (float)uStack_2;
    fVar15 = ((float)uStack_2 + (float)uStack_2) * uStack_3._4_4_;
    fVar16 = (_UNK_? - (fVar12 * (float)uStack_3 + fVar13 * uStack_2._4_4_)) * fVar10 +
             (fVar13 * (float)uStack_2 - fVar12 * uStack_3._4_4_) * fVar9 +
             (fVar13 * uStack_3._4_4_ + fVar12 * (float)uStack_2) * fVar11;
    fVar17 = (fVar12 * (float)uStack_2 - fVar13 * uStack_3._4_4_) * fVar10 +
             (fVar15 + fVar12 * uStack_2._4_4_) * fVar9 +
             (_UNK_? - (fVar13 * uStack_2._4_4_ + fVar14)) * fVar11;
    fVar13 = (_UNK_? - (fVar12 * (float)uStack_3 + fVar14)) * fVar9 +
            (fVar12 * uStack_3._4_4_ + fVar13 * (float)uStack_2) * fVar10 +
            (fVar12 * uStack_2._4_4_ - fVar15) * fVar11;
    uStack_3 = CONCAT44(uStack_3._4_4_,fVar17);
    uStack_2 = CONCAT44(fVar13,fVar16);
    fVar12 = (float)FUN_?(&uStack_2);
    if (_UNK_? < fVar12) {
      fVar17 = fVar17 / fVar12;
      uStack_2 = CONCAT44(fVar13 / fVar12,fVar16 / fVar12);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_2._0_4_ = (pVVar7->zeroVector).x;
      uStack_2._4_4_ = (pVVar7->zeroVector).y;
      fVar17 = (pVVar7->zeroVector).z;
    }
    fVar12 = (this->fields).distanceToLookAt;
    fVar13 = (float)uStack_2 * fVar12;
    fVar14 = uStack_2._4_4_ * fVar12;
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).lookAtTransform;
    if (pTVar1 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_2 = 0;
      uStack_3 = uStack_3 & 0xffffffff00000000;
      pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar4);
      uStack_8._0_4_ = (this->fields).lookAtOffset.x;
      uStack_8._4_4_ = (this->fields).lookAtOffset.y;
      fStack_18 = (float)uStack_3 + fVar17 * fVar12 + (this->fields).lookAtOffset.z;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_8 = CONCAT44(uStack_2._4_4_ + fVar14 + (float)uStack_8._4_4_,
                           (float)uStack_2 + fVar13 + (float)(undefined4)uStack_8);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
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
      (*pcRam_?)(pvVar4,&uStack_8);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_UpdateCamera
               (AndroidVehicleCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  AndroidVehicleCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  AndroidVehicleCamera_HandlePos(this,(MethodInfo *)0x0);
  AndroidVehicleCamera_HandleCollision(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cameraShake;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_2 = 0;
    uStack_3 = uStack_3 & 0xffffffff00000000;
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    pMVar7 = (this->fields).avatarLocal;
    if (pMVar7 != (MVAvatarLocal *)0x0) {
      puVar8 = (undefined8 *)(*(pMVar7->klass->vtable).get_VelocityRelative.methodPtr)(aQStack_9);
      VStack_10._0_8_ = *puVar8;
      VStack_10.z = *(float *)(puVar8 + 1);
      fVar11 = (float)FUN_?(&VStack_10);
      if (this_00 != (CameraShake *)0x0) {
        pVVar12 = CameraShake::CameraShake_Shake_1
                           ((Vector3 *)aQStack_9,this_00,fVar11,(MethodInfo *)0x0);
        VStack_10.x = pVVar12->x;
        VStack_10.y = pVVar12->y;
        if (targetTransform != (ProtectedTransform *)0x0) {
          VStack_10.y = uStack_2._4_4_ + VStack_10.y;
          VStack_10.x = (float)uStack_2 + VStack_10.x;
          VStack_10.z = (float)uStack_3 + pVVar12->z;
          ProtectedTransform::ProtectedTransform_set_position
                    (targetTransform,&VStack_10,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_2 = 0;
            uStack_3 = 0;
            pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
            if (pvVar4 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
            VStack_10._0_8_ = ZEXT48((uint)((this->fields).localPitch * _UNK_?));
            VStack_10.z = 0.0;
            aQStack_9[0].x = 0.0;
            aQStack_9[0].y = 0.0;
            aQStack_9[0].z = 0.0;
            aQStack_9[0].w = 0.0;
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
            (*pcRam_?)(&VStack_10,aQStack_9);
            fVar11 = aQStack_9[0].y * (float)uStack_3;
            fVar13 = aQStack_9[0].y * (float)uStack_2;
            fVar14 = aQStack_9[0].y * uStack_2._4_4_;
            fVar15 = aQStack_9[0].w * (float)uStack_3;
            fVar16 = aQStack_9[0].x * (float)uStack_2;
            fVar17 = aQStack_9[0].x * uStack_2._4_4_;
            aQStack_9[0].y =
                 (aQStack_9[0].y * uStack_3._4_4_ + aQStack_9[0].w * uStack_2._4_4_ +
                 aQStack_9[0].x * (float)uStack_3) - aQStack_9[0].z * (float)uStack_2;
            aQStack_9[0].x =
                 (aQStack_9[0].x * uStack_3._4_4_ + aQStack_9[0].w * (float)uStack_2 +
                 aQStack_9[0].z * uStack_2._4_4_) - fVar11;
            aQStack_9[0].w =
                 ((aQStack_9[0].w * uStack_3._4_4_ - fVar16) - fVar14) -
                 aQStack_9[0].z * (float)uStack_3;
            aQStack_9[0].z = (aQStack_9[0].z * uStack_3._4_4_ + fVar15 + fVar13) - fVar17;
            ProtectedTransform::ProtectedTransform_set_rotation
                      (targetTransform,aQStack_9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera_UpdateTargetRotation
               (AndroidVehicleCamera *this,MethodInfo *method)

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
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                    (StringLiteral_Mouse_X,(MethodInfo *)0x0);
  fVar1 = fVar1 * _UNK_?;
  fVar2 = _UNK_?;
  if ((_UNK_? <= fVar1) && (fVar2 = fVar1, _UNK_? < fVar1)) {
    fVar2 = _UNK_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  lStack_4._0_4_ = (pVVar3->upVector).x;
  lStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  auStack_6 = (undefined1  [8])0x0;
  uStack_7 = (Il2CppMethodPointer)0x0;
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
  method_00 = (MethodInfo *)auStack_6;
  (*pcRam_?)(fVar2);
  pTVar10 = (this->fields).lookAtTransform;
  if (pTVar10 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_11.x = 0.0;
    QStack_11.y = 0.0;
    QStack_11.z = 0.0;
    QStack_11.w = 0.0;
    pvVar12 = (pTVar10->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar12,&QStack_11);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_14,&QStack_11,method_00);
    lStack_4 = (ulonglong)(uint)(pVVar13->y * _UNK_?) << 0x20;
    fStack_5 = 0.0;
    QStack_11.x = 0.0;
    QStack_11.y = 0.0;
    QStack_11.z = 0.0;
    QStack_11.w = 0.0;
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
    (*pcRam_?)(&lStack_4,&QStack_11);
    fVar1 = QStack_11.z * (float)auStack_6._4_4_;
    fVar15 = QStack_11.y * (float)auStack_6._0_4_;
    fVar16 = QStack_11.y * (float)auStack_6._4_4_;
    fVar17 = QStack_11.x * (float)auStack_6._0_4_;
    fVar2 = QStack_11.x * (float)auStack_6._4_4_;
    auStack_6._4_4_ =
         (QStack_11.y * uStack_7._4_4_ + QStack_11.w * (float)auStack_6._4_4_ +
         QStack_11.x * (float)uStack_7) - QStack_11.z * (float)auStack_6._0_4_;
    auStack_6._0_4_ =
         (QStack_11.x * uStack_7._4_4_ + QStack_11.w * (float)auStack_6._0_4_ + fVar1) -
         QStack_11.y * (float)uStack_7;
    uStack_7 = (Il2CppMethodPointer)
                CONCAT44(((QStack_11.w * uStack_7._4_4_ - fVar17) - fVar16) -
                         QStack_11.z * (float)uStack_7,
                         (QStack_11.z * uStack_7._4_4_ + QStack_11.w * (float)uStack_7 + fVar15) -
                         fVar2);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_14,(Quaternion *)auStack_6,method_00);
    fVar2 = (this->fields).rotationX;
    fVar1 = pVVar13->y;
    fVar16 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                       (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar15 = _UNK_?;
    fVar16 = (float)FUN_?(fVar2 - fVar16 * _UNK_?,_UNK_?);
    fVar2 = _UNK_?;
    if (fVar16 < 0.0) {
      fVar16 = fVar16 + fVar15;
    }
    (this->fields).rotationX = fVar16;
    if (fVar2 < fVar16) {
      (this->fields).rotationX = fVar16 - fVar15;
    }
    fVar2 = (this->fields).minimumY;
    fVar15 = (this->fields).rotationX;
    if ((fVar15 < fVar2) || (fVar2 = (this->fields).maximumY, fVar2 < fVar15)) {
      fVar15 = fVar2;
    }
    pTVar18 = (this->fields).targetRotation;
    (this->fields).rotationX = fVar15;
    if (pTVar18 != (TargetRotation *)0x0) {
      (pTVar18->fields).eulerAngles.x = fVar15;
      (pTVar18->fields).eulerAngles.y = fVar1;
      (pTVar18->fields).eulerAngles.z = 0.0;
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      pTVar18 = (this->fields).targetRotation;
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
        auStack_6 = (undefined1  [8])0x0;
        uStack_7 = (Il2CppMethodPointer)0x0;
        pvVar12 = (obj->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
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
        (*pcRam_?)(pvVar12,auStack_6);
        if (pTVar18 != (TargetRotation *)0x0) {
          pQVar19 = TargetRotation::TargetRotation_GetLerpRotation
                             (&QStack_11,pTVar18,(Quaternion *)auStack_6,(MethodInfo *)0x0);
          if (pTVar10 == (Transform *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          auStack_6 = *(undefined1 (*) [8])pQVar19;
          uStack_7 = *(Il2CppMethodPointer *)&pQVar19->z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar12 = (pTVar10->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar12,auStack_6);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* AndroidVehicleCamera() */

void Assembly-CSharp.dll::AndroidVehicleCamera::AndroidVehicleCamera__ctor
               (AndroidVehicleCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CameraCollision);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CameraLerpToDesiredDistance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (CameraLerpToDesiredDistance *)FUN_?(TypeInfo__CameraLerpToDesiredDistance);
  bVar2 = iRam_? != 0;
  (pCVar1->fields).newDistance = INFINITY;
  (this->fields).cameraLerpToDesiredDistance = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cameraLerpToDesiredDistance >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar7 = (CameraCollision *)FUN_?(TypeInfo__CameraCollision);
  bVar2 = iRam_? != 0;
  (this->fields).cameraCollision = pCVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).cameraCollision >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  bVar2 = cRam_? == '\0';
  (this->fields).initialYRotation = 20.0;
  (this->fields).localPitch = -20.0;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = cRam_? == '\0';
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar8->downVector).y;
  fVar10 = (pVVar8->downVector).z;
  (this->fields).lookAtOffset.x = (pVVar8->downVector).x;
  (this->fields).lookAtOffset.y = fVar9;
  (this->fields).lookAtOffset.z = fVar10;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

