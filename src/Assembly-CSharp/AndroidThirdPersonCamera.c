
/* Void Activate() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Activate
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
                  ,this,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  this_00 = (Dictionary_2_System_Int32Enum_System_Object_ *)
            TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (this_00 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              (this_00,1,(Object *)this,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Add_MV__Common__MVGameType__ICameraSettings_
               ->klass->rgctx_data[0x22].method);
    pAVar1 = TypeInfo__MainCameraManager->static_fields->OnCameraSettingAdded;
    if (pAVar1 != (Action *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Awake
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffsetBase.y;
  fVar2 = (this->fields).lookAtOffsetBase.z;
  (this->fields).lookAtOffset.x = (this->fields).lookAtOffsetBase.x;
  (this->fields).lookAtOffset.y = fVar1;
  fVar1 = (this->fields).lookAtHeightOffsetBase.x;
  fVar3 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).lookAtOffset.z = fVar2;
  fVar2 = (this->fields).lookAtHeightOffsetBase.z;
  (this->fields).lookAtHeightOffset.x = fVar1;
  (this->fields).lookAtHeightOffset.y = fVar3;
  (this->fields).lookAtHeightOffset.z = fVar2;
  fVar2 = (this->fields).distanceToAvatarBase;
  (this->fields).currentDistanceToAvatar = fVar2;
  (this->fields).desiredDistanceToAvatar = fVar2;
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Deactivate
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
  ;
  pDVar2 = TypeInfo__MainCameraManager->static_fields->cameraSettings;
  if (pDVar2 == (Dictionary_2_MV_Common_MVGameType_ICameraSettings_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar4 = (pDVar2->fields)._comparer;
    if (pIVar4 == (IEqualityComparer_1_MV_Common_MVGameType_ *)0x0) {
      uVar5 = 1;
    }
    else {
      pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<MV::Common::MVGameType,_ICameraSettings>__Remove_MV__Common__MVGameType_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      uVar5 = FUN_?(1,pvVar6,pIVar4,1);
    }
    pIVar7 = (pDVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (int)(uVar5 & 0x7fffffff) % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = pIVar7->vector[(int)uVar8] - 1;
    uVar10 = 0xffffffff;
    while (uVar11 = uVar9, -1 < (int)uVar11) {
      pDVar12 = (pDVar2->fields)._entries;
      if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_MV_Common_MVGameType_ICameraSettings___Array *)
                    0x0) goto code_?;
      if ((uint)pDVar12->max_length <= uVar11) goto code_?;
      if (pDVar12->vector[(int)uVar11].hashCode == (uVar5 & 0x7fffffff)) {
        pIVar13 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_MV_Common_MVGameType_ *)0x0) {
          pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::
                    Int32Enum]::EqualityComparer_1_System_Int32Enum__get_Default(pIVar13[3].method);
          if (pEVar14 == (EqualityComparer_1_System_Int32Enum_ *)0x0) goto code_?;
          cVar15 = (*(pEVar14->klass->vtable).__unknown.methodPtr)
                             (pEVar14,(ulonglong)(uint)pDVar12->vector[(int)uVar11].key,1,
                              (pEVar14->klass->vtable).__unknown.method);
        }
        else {
          pvVar6 = pIVar13[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            FUN_?(pvVar6);
          }
          cVar15 = FUN_?();
        }
        if (cVar15 != '\0') {
          if ((int)uVar10 < 0) {
            pIVar7 = (pDVar2->fields)._buckets;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar7->max_length <= uVar8) goto code_?;
            pIVar7->vector[(int)uVar8] = pDVar12->vector[(int)uVar11].next + 1;
          }
          else {
            pDVar16 = (pDVar2->fields)._entries;
            if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_MV_Common_MVGameType_ICameraSettings___Array
                           *)0x0) goto code_?;
            if ((uint)pDVar16->max_length <= uVar10) goto code_?;
            pDVar16->vector[(int)uVar10].next = pDVar12->vector[(int)uVar11].next;
          }
          pDVar12->vector[(int)uVar11].hashCode = -1;
          pDVar12->vector[(int)uVar11].next = (pDVar2->fields)._freeList;
          pDVar12->vector[(int)uVar11].value = (ICameraSettings *)0x0;
          piVar17 = &(pDVar2->fields)._freeCount;
          *piVar17 = *piVar17 + 1;
          piVar17 = &(pDVar2->fields)._version;
          *piVar17 = *piVar17 + 1;
          (pDVar2->fields)._freeList = uVar11;
          return;
        }
      }
      uVar10 = uVar11;
      uVar9 = pDVar12->vector[(int)uVar11].next;
    }
  }
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Enter
               (AndroidThirdPersonCamera *this,MVCameraController *cameraController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).lookAtTransform = pTVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).lookAtTransform >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    this_01 = (HashSet_1_System_Int32_ *)
              FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar1 = (this->fields).avatarLocal;
    if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_01 != (HashSet_1_System_Int32_ *)0x0)) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__AddIfNotPresent
                (this_01,(pMVar1->fields)._._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
                 [0x15].method);
      bVar3 = iRam_? != 0;
      (this->fields).ignoreAvatarId = this_01;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).ignoreAvatarId >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleCollision() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_HandleCollision
               (AndroidThirdPersonCamera *this,MethodInfo *method)

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
    VStack_7.x = (this->fields).lookAtHeightOffset.x;
    VStack_7.y = (this->fields).lookAtHeightOffset.y;
    fVar8 = VStack_3.x + VStack_7.x;
    fVar9 = VStack_3.z + (this->fields).lookAtHeightOffset.z;
    fVar10 = VStack_3.y + VStack_7.y;
    this_00 = (this->fields).cameraCollision;
    cameraRadius = (this->fields)._.cameraRadius;
    baseDistance = (this->fields).currentDistanceToAvatar;
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
      (*pcRam_?)(pvVar4,&VStack_3);
      if (this_00 != (CameraCollisionWithSliding *)0x0) {
        aVStack_11[0].interactionFlags = 0;
        VStack_7.z = VStack_3.z;
        aVStack_11[0].point.x = 0.0;
        aVStack_11[0].point.y = 0.0;
        aVStack_11[0].point.z = 0.0;
        aVStack_11[0].normal.x = 0.0;
        aVStack_11[0].normal.y = 0.0;
        aVStack_11[0].normal.z = 0.0;
        aVStack_11[0].cubePos.x = 0;
        aVStack_11[0].cubePos.y = 0;
        aVStack_11[0].cubePos.z = 0;
        aVStack_11[0]._30_2_ = 0;
        aVStack_11[0].face = 0;
        aVStack_11[0].isCubeHit = 0;
        aVStack_11[0]._37_3_ = 0;
        aVStack_11[0].woId = 0;
        aVStack_11[0]._44_4_ = 0;
        aVStack_11[0].cube = (Cube *)0x0;
        aVStack_11[0].distance = 0.0;
        aVStack_11[0]._60_4_ = 0;
        aVStack_11[0].collider = (Collider *)0x0;
        aVStack_11[0].transform = (Transform *)0x0;
        VStack_7.x = VStack_3.x;
        VStack_7.y = VStack_3.y;
        VStack_3.y = fVar10;
        VStack_3.x = fVar8;
        VStack_3.z = fVar9;
        bVar12 = CameraCollision::CameraCollision_Collide_1
                          ((CameraCollision *)this_00,aVStack_11,&VStack_2,cameraRadius,
                           baseDistance,&VStack_3,&VStack_7,(this->fields).ignoreAvatarId,
                           (MethodInfo *)0x0);
        if (bVar12 != 0) {
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar1 == (Transform *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          VStack_7.x = VStack_2.x;
          VStack_7.y = VStack_2.y;
          VStack_7.z = VStack_2.z;
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
            VStack_7.x = VStack_2.x;
            VStack_7.y = VStack_2.y;
            VStack_2.y = fVar10;
            VStack_2.x = fVar8;
            VStack_7.z = VStack_2.z;
            VStack_2.z = fVar9;
            pVVar13 = CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                               (&VStack_3,this_01,&VStack_2,&VStack_7,(MethodInfo *)0x0);
            if (pTVar1 == (Transform *)0x0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            VStack_7.x = pVVar13->x;
            VStack_7.y = pVVar13->y;
            VStack_7.z = pVVar13->z;
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
            (*pcRam_?)(pvVar4,&VStack_7);
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


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Initialize
               (AndroidThirdPersonCamera *this,MVAvatarLocal *al,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarCameraDistTransparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarLocal = al;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarLocal >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  fVar6 = (this->fields).lookAtOffset.x;
  fVar7 = (this->fields).lookAtOffset.y;
  fVar8 = (this->fields).lookAtOffset.z;
  pAVar9 = (AvatarCameraDistTransparency *)FUN_?(TypeInfo__AvatarCameraDistTransparency);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (pAVar9->fields).camMoveTowardsOffset.x = fVar6;
  (pAVar9->fields).camMoveTowardsOffset.y = fVar7;
  (pAVar9->fields).camMoveTowardsOffset.z = fVar8;
  (pAVar9->fields).fadeStartBase = 4.0;
  (pAVar9->fields).fadeEndBase = 2.0;
  (pAVar9->fields).prevDist = -1.0;
  (pAVar9->fields).fadeStartDistance = 2.0;
  (pAVar9->fields).fadeEndDistance = 1.0;
  (this->fields).avatarCameraDistTransparency = pAVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarCameraDistTransparency >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void LerpCurrentDistanceToDesiredDistance() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_LerpCurrentDistanceToDesiredDistance
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).desiredDistanceToAvatar;
  pfVar2 = &(this->fields).currentDistanceToAvatar;
  fVar3 = (this->fields).desiredDistanceToAvatar - (this->fields).currentDistanceToAvatar;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
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
    fVar6 = (float)(*pcRam_?)();
    fVar1 = fVar6 * _UNK_?;
    if (fVar3 <= fVar6 * _UNK_?) {
      fVar1 = fVar3;
    }
  }
  else {
    fVar6 = (this->fields).currentDistanceToAvatar;
    pfVar2 = &(this->fields).desiredDistanceToAvatar;
    fVar1 = 0.0;
    if (*pfVar2 <= fVar6 && fVar6 != *pfVar2) {
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
      fVar6 = (float)(*pcRam_?)();
      fVar1 = fVar6 * _UNK_?;
      if ((float)((uint)fVar3 & _UNK_?) <= fVar6 * _UNK_?) {
        fVar1 = (float)((uint)fVar3 & _UNK_?);
      }
      fVar1 = (float)((uint)fVar1 ^ _UNK_?);
    }
  }
  (this->fields).currentDistanceToAvatar = fVar1 + (this->fields).currentDistanceToAvatar;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_Reset
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields).lookAtTransform;
  if ((pTVar1 == (Transform *)0x0) ||
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  QStack_3.x = 0.0;
  QStack_3.y = 0.0;
  QStack_3.z = 0.0;
  QStack_3.w = 0.0;
  pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar4,&QStack_3);
  QStack_6.x = QStack_3.x;
  QStack_6.y = QStack_3.y;
  QStack_6.z = QStack_3.z;
  QStack_6.w = QStack_3.w;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                     ((Vector3 *)&QStack_3,&QStack_6,in_R8);
  fVar8 = pVVar7->y;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  QStack_3.y = fVar8 * _UNK_?;
  QStack_3.x = _UNK_?;
  QStack_3._8_8_ = QStack_3._8_8_ & 0xffffffff00000000;
  QStack_6.x = 0.0;
  QStack_6.y = 0.0;
  QStack_6.z = 0.0;
  QStack_6.w = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&QStack_3);
  if (pTVar1 != (Transform *)0x0) {
    fStack_9 = QStack_6.x;
    fStack_10 = QStack_6.y;
    fStack_11 = QStack_6.z;
    fStack_12 = QStack_6.w;
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
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pTVar13 = (this->fields).targetRotation;
    if (pTVar13 != (TargetRotation *)0x0) {
      (pTVar13->fields).eulerAngles.y = fVar8;
      (pTVar13->fields).eulerAngles.x = 20.0;
      (pTVar13->fields).eulerAngles.z = 0.0;
      AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetScaledValues() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_ResetScaledValues
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffsetBase.y;
  fVar2 = (this->fields).distanceToAvatarBase;
  (this->fields).lookAtOffset.x = (this->fields).lookAtOffsetBase.x;
  (this->fields).lookAtOffset.y = fVar1;
  fVar1 = (this->fields).lookAtHeightOffsetBase.x;
  fVar3 = (this->fields).lookAtHeightOffsetBase.y;
  (this->fields).desiredDistanceToAvatar = fVar2;
  (this->fields).lookAtOffset.z = (this->fields).lookAtOffsetBase.z;
  fVar2 = (this->fields).lookAtHeightOffsetBase.z;
  (this->fields).lookAtHeightOffset.x = fVar1;
  (this->fields).lookAtHeightOffset.y = fVar3;
  (this->fields).lookAtHeightOffset.z = fVar2;
  return;
}


/* Void ScaleCameraValues(Single) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_ScaleCameraValues
               (AndroidThirdPersonCamera *this,float scale,MethodInfo *method)

{
  fVar1 = (this->fields).lookAtOffsetBase.y;
  fVar2 = (this->fields).lookAtOffsetBase.z;
  (this->fields).desiredDistanceToAvatar = scale * (this->fields).distanceToAvatarBase;
  uVar3 = (this->fields).lookAtOffsetBase.x;
  fVar4 = (this->fields).lookAtHeightOffsetBase.y;
  uVar5 = (this->fields).lookAtHeightOffsetBase.x;
  (this->fields).lookAtOffset.x = (float)uVar3 * scale;
  (this->fields).lookAtOffset.y = fVar1 * scale;
  (this->fields).lookAtOffset.z = fVar2 * scale;
  fVar1 = (this->fields).lookAtHeightOffsetBase.z;
  pAVar6 = (this->fields).avatarCameraDistTransparency;
  fVar2 = (this->fields)._.cameraRadius;
  (this->fields).lookAtHeightOffset.x = (float)uVar5 * scale;
  (this->fields).lookAtHeightOffset.y = fVar4 * scale;
  (this->fields)._.cameraRadius = scale * fVar2;
  (this->fields).lookAtHeightOffset.z = fVar1 * scale;
  if (pAVar6 != (AvatarCameraDistTransparency *)0x0) {
    uVar7 = (pAVar6->fields).camMoveTowardsOffset.x;
    fVar1 = (pAVar6->fields).camMoveTowardsOffset.z;
    (pAVar6->fields).fadeStartDistance = scale * (pAVar6->fields).fadeStartBase;
    fVar2 = (pAVar6->fields).camMoveTowardsOffset.y;
    (pAVar6->fields).fadeEndDistance = scale * (pAVar6->fields).fadeEndBase;
    (pAVar6->fields).camMoveTowardsOffset.x = (float)uVar7 * scale;
    (pAVar6->fields).camMoveTowardsOffset.y = fVar2 * scale;
    (pAVar6->fields).camMoveTowardsOffset.z = fVar1 * scale;
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetDefaultSettings() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_SetDefaultSettings
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  (this->fields).distanceToAvatarBase = 5.0;
  (this->fields).desiredDistanceToAvatar = 5.0;
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdateCamera
               (AndroidThirdPersonCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  fVar1 = (this->fields).desiredDistanceToAvatar;
  pfVar2 = &(this->fields).currentDistanceToAvatar;
  fVar3 = (this->fields).desiredDistanceToAvatar - (this->fields).currentDistanceToAvatar;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
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
    fVar6 = (float)(*pcRam_?)();
    fVar1 = fVar6 * _UNK_?;
    if (fVar3 <= fVar6 * _UNK_?) {
      fVar1 = fVar3;
    }
  }
  else {
    fVar6 = (this->fields).currentDistanceToAvatar;
    pfVar2 = &(this->fields).desiredDistanceToAvatar;
    fVar1 = 0.0;
    if (*pfVar2 <= fVar6 && fVar6 != *pfVar2) {
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
      fVar6 = (float)(*pcRam_?)();
      fVar1 = fVar6 * _UNK_?;
      if ((float)((uint)fVar3 & _UNK_?) <= fVar6 * _UNK_?) {
        fVar1 = (float)((uint)fVar3 & _UNK_?);
      }
      fVar1 = (float)((uint)fVar1 ^ _UNK_?);
    }
  }
  (this->fields).currentDistanceToAvatar = fVar1 + (this->fields).currentDistanceToAvatar;
  AndroidThirdPersonCamera_UpdateTargetRotation(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_UpdatePosition(this,(MethodInfo *)0x0);
  AndroidThirdPersonCamera_HandleCollision(this,(MethodInfo *)0x0);
  this_00 = (this->fields).cameraShake;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar7 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    fStack_9 = 0.0;
    pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar10,&uStack_8);
    pMVar11 = (this->fields).avatarLocal;
    if (pMVar11 != (MVAvatarLocal *)0x0) {
      puVar12 = (undefined8 *)(*(pMVar11->klass->vtable).get_VelocityRelative.methodPtr)(aQStack_13);
      VStack_14._0_8_ = *puVar12;
      VStack_14.z = *(float *)(puVar12 + 1);
      fVar1 = (float)FUN_?(&VStack_14);
      if (this_00 != (CameraShake *)0x0) {
        pVVar15 = CameraShake::CameraShake_Shake_1
                            ((Vector3 *)aQStack_13,this_00,fVar1,(MethodInfo *)0x0);
        VStack_14.x = pVVar15->x;
        VStack_14.y = pVVar15->y;
        if (targetTransform != (ProtectedTransform *)0x0) {
          VStack_14.y = uStack_8._4_4_ + VStack_14.y;
          VStack_14.x = (float)uStack_8 + VStack_14.x;
          VStack_14.z = fStack_9 + pVVar15->z;
          ProtectedTransform::ProtectedTransform_set_position
                    (targetTransform,&VStack_14,(MethodInfo *)0x0);
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            aQStack_13[0].x = 0.0;
            aQStack_13[0].y = 0.0;
            aQStack_13[0].z = 0.0;
            aQStack_13[0].w = 0.0;
            pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar10,aQStack_13);
            ProtectedTransform::ProtectedTransform_set_rotation
                      (targetTransform,aQStack_13,(MethodInfo *)0x0);
            pAVar16 = (this->fields).avatarCameraDistTransparency;
            if (pAVar16 != (AvatarCameraDistTransparency *)0x0) {
              pMVar11 = (this->fields).avatarLocal;
              pSVar17 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                  ((MethodInfo *)0x0);
              if ((pSVar17 != (SpawnRoleDataMediator *)0x0) &&
                 (pSVar18 = (pSVar17->fields).SpawnRoleModeTypeWrapper,
                 pSVar18 != (SpawnRoleModeTypeWrapper *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pSVar19 = (pSVar18->fields).spawnRoleType;
                if ((pSVar19 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
                   (pSVar20 = (pSVar19->fields).subscribableVariable,
                   pSVar20 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
                  if (((pSVar20->fields)._.value & 4) != 0) {
                    return;
                  }
                  if (((pMVar11 != (MVAvatarLocal *)0x0) &&
                      (pMVar21 = (pMVar11->fields)._.body, pMVar21 != (MVBody *)0x0)) &&
                     (pTVar7 = (pMVar21->fields)._._._.transform, pTVar7 != (Transform *)0x0)) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_22 = 0;
                    fStack_23 = 0.0;
                    if ((pTVar7->fields)._._.m_CachedPtr == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0)
                      ;
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
                    (*pcRam_?)();
                    uVar24 = (pAVar16->fields).camMoveTowardsOffset.x;
                    uVar25 = (pAVar16->fields).camMoveTowardsOffset.y;
                    fVar3 = (float)uStack_22 + (float)uVar24;
                    fVar6 = fStack_23 + (pAVar16->fields).camMoveTowardsOffset.z;
                    fVar1 = uStack_22._4_4_ + (float)uVar25;
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                        ((MethodInfo *)0x0);
                    if ((this_02 != (MainCameraManager *)0x0) &&
                       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)this_02,(MethodInfo *)0x0),
                       pTVar7 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_22 = 0;
                      fStack_23 = 0.0;
                      pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
                      if (pvVar10 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar7,(MethodInfo *)0x0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                      {
                        uVar5 = func_?(&UNK_?);
                        FUN_?(uVar5,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar10,&uStack_22);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Math);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      fVar3 = fVar3 - (float)uStack_22;
                      fVar1 = fVar1 - uStack_22._4_4_;
                      fVar6 = fVar6 - fStack_23;
                      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      dVar26 = (double)(fVar1 * fVar1 + fVar3 * fVar3 + fVar6 * fVar6);
                      if (dVar26 < 0.0) {
                        dVar26 = (double)FUN_?();
                      }
                      else {
                        auVar27._8_8_ = 0;
                        auVar27._0_8_ = dVar26;
                        auVar27 = sqrtpd(ZEXT816(0),auVar27);
                        dVar26 = auVar27._0_8_;
                      }
                      fVar1 = (float)dVar26;
                      if ((float)((uint)(fVar1 - (pAVar16->fields).prevDist) & _UNK_?) <=
                          _UNK_?) {
                        return;
                      }
                      (pAVar16->fields).prevDist = fVar1;
                      fVar1 = (fVar1 - (pAVar16->fields).fadeEndDistance) /
                               ((pAVar16->fields).fadeStartDistance -
                               (pAVar16->fields).fadeEndDistance);
                      if (fVar1 < 0.0) {
                        fVar1 = 0.0;
                      }
                      else if (_UNK_? < fVar1) {
                        fVar1 = _UNK_?;
                      }
                      if ((pMVar11->fields)._.isHidden != 0) {
                        return;
                      }
                      pAVar28 = (pMVar11->fields)._.avatar;
                      if ((pAVar28 != (Avatar *)0x0) &&
                         (this_01 = (pAVar28->fields).avatarFader, this_01 != (AvatarFader *)0x0)) {
                        AvatarFader::AvatarFader_SetTransparency(this_01,fVar1,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateFromCameraSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::
     AndroidThirdPersonCamera_UpdateFromCameraSettings
               (AndroidThirdPersonCamera *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_distanceToAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,(Object *)StringLiteral_distanceToAvatar,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        fVar2 = *(float *)&pOVar1[1].klass;
        (this->fields).distanceToAvatarBase = fVar2;
        (this->fields).desiredDistanceToAvatar = fVar2;
        return;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdatePosition
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aQStack_1[0].x = 0.0;
    aQStack_1[0].y = 0.0;
    aQStack_1[0].z = 0.0;
    aQStack_1[0].w = 0.0;
    pvVar2 = (this_00->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar2,aQStack_1);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_eulerAngles
                       (&VStack_6,aQStack_1,in_R8);
    uStack_7 = (ulonglong)(uint)(pVVar5->y * _UNK_?) << 0x20;
    fStack_8 = 0.0;
    aQStack_1[0].x = 0.0;
    aQStack_1[0].y = 0.0;
    aQStack_1[0].z = 0.0;
    aQStack_1[0].w = 0.0;
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
    (*pcRam_?)(&uStack_7);
    obj = (this->fields).lookAtTransform;
    if (obj != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_6.x = 0.0;
      VStack_6.y = 0.0;
      VStack_6.z = 0.0;
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
      (*pcRam_?)(pvVar2,&VStack_6);
      uVar9 = (this->fields).lookAtOffset.x;
      uVar10 = (this->fields).lookAtOffset.y;
      fVar11 = (this->fields).lookAtOffset.z;
      fVar12 = aQStack_1[0].z + aQStack_1[0].z;
      fVar13 = aQStack_1[0].y + aQStack_1[0].y;
      fVar14 = (aQStack_1[0].x + aQStack_1[0].x) * aQStack_1[0].x;
      fVar15 = fVar12 * aQStack_1[0].z;
      fVar16 = fVar13 * aQStack_1[0].y;
      fVar17 = fVar12 * aQStack_1[0].x;
      fVar18 = fVar13 * aQStack_1[0].x;
      fVar19 = (aQStack_1[0].x + aQStack_1[0].x) * aQStack_1[0].w;
      fVar20 = fVar12 * aQStack_1[0].y;
      fVar13 = fVar13 * aQStack_1[0].w;
      fVar12 = fVar12 * aQStack_1[0].w;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)aQStack_1,this_00,(MethodInfo *)0x0);
      uVar21 = pVVar5->x;
      uVar22 = pVVar5->y;
      uStack_7 = CONCAT44(((_UNK_? - (fVar15 + fVar14)) * (float)uVar10 +
                            (fVar12 + fVar18) * (float)uVar9 + (fVar20 - fVar19) * fVar11 +
                           VStack_6.y) - (float)uVar22 * (this->fields).currentDistanceToAvatar,
                           ((_UNK_? - (fVar15 + fVar16)) * (float)uVar9 +
                            (fVar18 - fVar12) * (float)uVar10 + (fVar13 + fVar17) * fVar11 +
                           VStack_6.x) - (float)uVar21 * (this->fields).currentDistanceToAvatar);
      fStack_8 = ((fVar17 - fVar13) * (float)uVar9 + (fVar19 + fVar20) * (float)uVar10 +
                   (_UNK_? - (fVar16 + fVar14)) * fVar11 + VStack_6.z) -
                  pVVar5->z * (this->fields).currentDistanceToAvatar;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (this_00->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar2,&uStack_7);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTargetRotation() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera_UpdateTargetRotation
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
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
  pTVar1 = (this->fields).targetRotation;
  if (pTVar1 != (TargetRotation *)0x0) {
    uVar2._0_4_ = (pTVar1->fields).eulerAngles.x;
    uVar2._4_4_ = (pTVar1->fields).eulerAngles.y;
    QStack_3.z = (pTVar1->fields).eulerAngles.z;
    QStack_3._0_8_ = uVar2;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      cVar4 = FUN_?(7);
      if ((cVar4 == '\0') && (((this->fields)._.ignoreInputTypes & 1) == 0)) {
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar5 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                          (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
        fVar6 = MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                          (StringLiteral_Mouse_X,(MethodInfo *)0x0);
        this_00 = (this->fields).inputMovementPrecisionModifier;
        if (this_00 == (InputMovementPrecisionModifier *)0x0) goto code_?;
        QStack_3.y = fVar6;
        QStack_3.x = fVar5;
        QStack_3.z = 0.0;
        pVVar7 = InputMovementPrecisionModifier::InputMovementPrecisionModifier_GetPrecisionInput
                           ((Vector3 *)aQStack_8,this_00,(Vector3 *)&QStack_3,(MethodInfo *)0x0);
        this_01 = (this->fields).axisBias;
        if (this_01 == (AxisBias *)0x0) goto code_?;
        QStack_3.x = pVVar7->x;
        QStack_3.y = pVVar7->y;
        QStack_3.z = pVVar7->z;
        pVVar7 = AxisBias::AxisBias_GetBiasedVector
                           ((Vector3 *)aQStack_8,this_01,(Vector3 *)&QStack_3,(MethodInfo *)0x0);
        QStack_3.x = pVVar7->x;
        QStack_3.y = pVVar7->y;
        QStack_3.z = pVVar7->z;
        uVar2._4_4_ = QStack_3.y * _UNK_? + uVar2._4_4_;
        uVar2._0_4_ = QStack_3.x * _UNK_? + (float)uVar2;
      }
      fVar5 = _UNK_?;
      uVar2._0_4_ = (float)FUN_?((float)uVar2,_UNK_?);
      if ((float)uVar2 < 0.0) {
        uVar2._0_4_ = (float)uVar2 + fVar5;
      }
      if (_UNK_? < (float)uVar2) {
        uVar2._0_4_ = (float)uVar2 - fVar5;
      }
      fVar5 = (this->fields).minimumY;
      if ((fVar5 <= (float)uVar2) &&
         (fVar6 = (this->fields).maximumY, fVar5 = (float)uVar2, fVar6 < (float)uVar2)) {
        fVar5 = fVar6;
      }
      pTVar1 = (this->fields).targetRotation;
      if (pTVar1 != (TargetRotation *)0x0) {
        (pTVar1->fields).eulerAngles.x = fVar5;
        (pTVar1->fields).eulerAngles.y = uVar2._4_4_;
        (pTVar1->fields).eulerAngles.z = 0.0;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
        pTVar1 = (this->fields).targetRotation;
        obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (obj_00 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          aQStack_8[0].x = 0.0;
          aQStack_8[0].y = 0.0;
          aQStack_8[0].z = 0.0;
          aQStack_8[0].w = 0.0;
          pvVar9 = (obj_00->fields)._._.m_CachedPtr;
          if (pvVar9 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar9,aQStack_8);
          if (pTVar1 != (TargetRotation *)0x0) {
            pQVar11 = TargetRotation::TargetRotation_GetLerpRotation
                               (&QStack_3,pTVar1,aQStack_8,(MethodInfo *)0x0);
            if (obj == (Transform *)0x0) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            aQStack_8[0].x = pQVar11->x;
            aQStack_8[0].y = pQVar11->y;
            aQStack_8[0].z = pQVar11->z;
            aQStack_8[0].w = pQVar11->w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (obj->fields)._._.m_CachedPtr;
            if (pvVar9 != (void *)0x0) {
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pcRam_? = pcVar10;
              (*pcRam_?)(pvVar9,aQStack_8);
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
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


/* AndroidThirdPersonCamera() */

void Assembly-CSharp.dll::AndroidThirdPersonCamera::AndroidThirdPersonCamera__ctor
               (AndroidThirdPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CameraCollisionWithSliding);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CameraLerpToDesiredDistance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).lookAtOffsetBase.x = (float)(int)(uVar2 << 0x20);
  (this->fields).lookAtOffsetBase.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).lookAtHeightOffsetBase.x = (float)(int)((ulonglong)uVar1 << 0x20);
  (this->fields).lookAtHeightOffsetBase.y = (float)(int)(((ulonglong)uVar1 << 0x20) >> 0x20);
  (this->fields).lookAtHeightOffsetBase.z = 0.0;
  (this->fields).lookAtOffsetBase.z = 0.0;
  (this->fields).minimumY = -60.0;
  (this->fields).maximumY = 60.0;
  pCVar3 = (CameraCollisionWithSliding *)FUN_?(TypeInfo__CameraCollisionWithSliding);
  bVar4 = iRam_? != 0;
  (pCVar3->fields).checkDistanceFactor = 0.5;
  (this->fields).cameraCollision = pCVar3;
  if (bVar4) {
    uVar1 = (uint)((ulonglong)&(this->fields).cameraCollision >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar5 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pCVar7 = (CameraLerpToDesiredDistance *)FUN_?(TypeInfo__CameraLerpToDesiredDistance);
  bVar4 = iRam_? != 0;
  (pCVar7->fields).newDistance = INFINITY;
  (this->fields).cameraLerpToDesiredDistance = pCVar7;
  if (bVar4) {
    uVar1 = (uint)((ulonglong)&(this->fields).cameraLerpToDesiredDistance >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar5 == *puVar6;
      if (bVar4) {
        *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = cRam_? == '\0';
  (this->fields).distanceToAvatarBase = 5.0;
  (this->fields)._.cameraRadius = 0.3;
  if (bVar4) {
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

