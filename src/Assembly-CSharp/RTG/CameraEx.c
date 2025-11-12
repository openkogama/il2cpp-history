
/* AABB CalculateFrustumAABB(Camera) */

AABB * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_CalculateFrustumAABB
                 (AABB *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera == (Camera *)0x0) goto code_?;
  this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                   ((Component *)camera,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar1 != (void *)0x0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      pAVar4 = (AABB *)(*pcVar2)();
      return pAVar4;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)(pvVar1);
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar5 = CameraEx_GetFrustumWidthFromDistance(camera,fVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar1 != (void *)0x0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pAVar4 = (AABB *)(*pcVar2)();
        return pAVar4;
      }
      pcRam_? = pcVar2;
      fVar6 = (float)(*pcRam_?)(pvVar1);
      fVar6 = CameraEx_GetFrustumHeightFromDistance(camera,fVar6,(MethodInfo *)0x0);
      if (this != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = (IEnumerable_1_UnityEngine_Vector3___Class *)0x0;
        fStack_8 = 0.0;
        pvVar1 = (this->fields)._._.m_CachedPtr;
        if (pvVar1 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar1,&uStack_7);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (aVStack_10,this,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar9->x;
        uStack_11._4_4_ = pVVar9->y;
        fVar12 = pVVar9->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar1 = (camera->fields)._._._.m_CachedPtr;
        if (pvVar1 == (void *)0x0) goto code_?;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcRam_? = pcVar2;
        fVar13 = (float)(*pcRam_?)(pvVar1);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_10,this,(MethodInfo *)0x0);
        uVar14 = pVVar9->x;
        uVar15 = pVVar9->y;
        fVar16 = pVVar9->z;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (aVStack_10,this,(MethodInfo *)0x0);
        uVar17 = pVVar9->x;
        fVar18 = (((float)uStack_11 * fVar13 + (float)uStack_7) -
                 (float)uVar14 * fVar5 * _UNK_?) + (float)uVar17 * fVar6 * _UNK_?;
        fVar19 = ((uStack_11._4_4_ * fVar13 + uStack_7._4_4_) -
                 (float)uVar15 * fVar5 * _UNK_?) + pVVar9->y * fVar6 * _UNK_?;
        fVar20 = ((fVar12 * fVar13 + fStack_8) - fVar16 * fVar5 * _UNK_?) +
                 pVVar9->z * fVar6 * _UNK_?;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_10,this,(MethodInfo *)0x0);
        uVar21 = pVVar9->x;
        fVar12 = pVVar9->y;
        fVar16 = pVVar9->z;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (aVStack_10,this,(MethodInfo *)0x0);
        uVar22 = pVVar9->x;
        fVar23 = fVar18 - (float)uVar22 * fVar6;
        fVar24 = fVar19 - pVVar9->y * fVar6;
        fVar25 = fVar20 - pVVar9->z * fVar6;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (aVStack_10,this,(MethodInfo *)0x0);
        uVar26 = pVVar9->x;
        fVar6 = pVVar9->y;
        fVar13 = pVVar9->z;
        pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)
                     FUN_?(TypeInfo__UnityEngine__Vector3);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = (IEnumerable_1_UnityEngine_Vector3___Class *)0x0;
        fStack_8 = 0.0;
        pvVar1 = (this->fields)._._.m_CachedPtr;
        if (pvVar1 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar1,&uStack_7);
        if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
          if (*(int *)&pointCloud[1].monitor != 0) {
            pointCloud[2].klass = uStack_7;
            *(float *)&pointCloud[2].monitor = fStack_8;
            if (1 < *(uint *)&pointCloud[1].monitor) {
              *(ulonglong *)((longlong)&pointCloud[2].monitor + 4) = CONCAT44(fVar19,fVar18);
              *(float *)((longlong)&pointCloud[3].klass + 4) = fVar20;
              if (2 < *(uint *)&pointCloud[1].monitor) {
                pointCloud[3].monitor =
                     (MonitorData *)CONCAT44(fVar12 * fVar5 + fVar19,(float)uVar21 * fVar5 + fVar18)
                ;
                *(float *)&pointCloud[4].klass = fVar16 * fVar5 + fVar20;
                if (3 < *(uint *)&pointCloud[1].monitor) {
                  *(ulonglong *)((longlong)&pointCloud[4].klass + 4) = CONCAT44(fVar24,fVar23);
                  *(float *)((longlong)&pointCloud[4].monitor + 4) = fVar25;
                  if (4 < *(uint *)&pointCloud[1].monitor) {
                    pointCloud[5].klass =
                         (IEnumerable_1_UnityEngine_Vector3___Class *)
                         CONCAT44(fVar6 * fVar5 + fVar24,(float)uVar26 * fVar5 + fVar23);
                    *(float *)&pointCloud[5].monitor = fVar13 * fVar5 + fVar25;
                    (__return_storage_ptr__->_size).x = 0.0;
                    (__return_storage_ptr__->_size).y = 0.0;
                    *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
                    (__return_storage_ptr__->_center).y = 0.0;
                    (__return_storage_ptr__->_center).z = 0.0;
                    *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
                    AABB::AABB__ctor_2(__return_storage_ptr__,pointCloud,(MethodInfo *)0x0);
                    return __return_storage_ptr__;
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
      }
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      pAVar4 = (AABB *)(*pcVar2)();
      return pAVar4;
    }
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  pAVar4 = (AABB *)(*pcVar2)();
  return pAVar4;
}


/* AABB CalculateOrthoAABB(Camera) */

AABB * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_CalculateOrthoAABB
                 (AABB *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera == (Camera *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar1 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar1 != (void *)0x0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      pAVar4 = (AABB *)(*pcVar2)();
      return pAVar4;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)(pvVar1);
    fVar5 = fVar5 + fVar5;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar1 != (void *)0x0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pAVar4 = (AABB *)(*pcVar2)();
        return pAVar4;
      }
      pcRam_? = pcVar2;
      fVar6 = (float)(*pcRam_?)(pvVar1);
      fVar6 = fVar6 * fVar5;
      this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
      if (this == (Transform *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        pAVar4 = (AABB *)(*pcVar2)();
        return pAVar4;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      fStack_8 = 0.0;
      pvVar1 = (this->fields)._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pAVar4 = (AABB *)(*pcVar2)();
        return pAVar4;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pAVar4 = (AABB *)(*pcVar2)();
        return pAVar4;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar1,&uStack_7);
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_10,this,(MethodInfo *)0x0);
      uVar11 = pVVar9->x;
      uVar12 = pVVar9->y;
      fVar13 = pVVar9->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar1 != (void *)0x0) {
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcRam_? = pcVar2;
        fVar14 = (float)(*pcRam_?)(pvVar1);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_10,this,(MethodInfo *)0x0);
        uVar15 = pVVar9->x;
        uVar16 = pVVar9->y;
        fVar17 = pVVar9->z;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_10,this,(MethodInfo *)0x0);
        uVar18 = pVVar9->x;
        uVar19 = pVVar9->y;
        fVar20 = (((float)uVar11 * fVar14 + (float)uStack_7) -
                 (float)uVar15 * fVar6 * _UNK_?) + fVar5 * (float)uVar18 * _UNK_?;
        fVar21 = (((float)uVar12 * fVar14 + uStack_7._4_4_) -
                 (float)uVar16 * fVar6 * _UNK_?) + fVar5 * (float)uVar19 * _UNK_?;
        fVar22 = ((fVar13 * fVar14 + fStack_8) - fVar17 * fVar6 * _UNK_?) +
                 fVar5 * pVVar9->z * _UNK_?;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_10,this,(MethodInfo *)0x0);
        uVar23 = pVVar9->x;
        uVar24 = pVVar9->y;
        fVar25 = (float)uVar24 * fVar6 + fVar21;
        fVar26 = (float)uVar23 * fVar6 + fVar20;
        fVar27 = pVVar9->z * fVar6 + fVar22;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                            (&VStack_10,this,(MethodInfo *)0x0);
        uVar28 = pVVar9->x;
        uVar29 = pVVar9->y;
        fVar17 = fVar26 - fVar5 * (float)uVar28;
        fVar14 = fVar25 - fVar5 * (float)uVar29;
        fVar13 = fVar27 - fVar5 * pVVar9->z;
        fStack_30 = fVar17;
        fStack_31 = fVar14;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            (&VStack_10,this,(MethodInfo *)0x0);
        uVar32 = pVVar9->x;
        uVar33 = pVVar9->y;
        fStack_34 = fVar17 - (float)uVar32 * fVar6;
        fStack_35 = fVar14 - (float)uVar33 * fVar6;
        fStack_36 = fVar13 - pVVar9->z * fVar6;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_7 = 0;
        fStack_8 = 0.0;
        pvVar1 = (this->fields)._._.m_CachedPtr;
        if (pvVar1 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          pAVar4 = (AABB *)(*pcVar2)();
          return pAVar4;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar1,&uStack_7);
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                            (&VStack_10,this,(MethodInfo *)0x0);
        uVar37 = pVVar9->x;
        uVar38 = pVVar9->y;
        fVar17 = pVVar9->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar1 = (camera->fields)._._._.m_CachedPtr;
        if (pvVar1 != (void *)0x0) {
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            pAVar4 = (AABB *)(*pcVar2)();
            return pAVar4;
          }
          pcRam_? = pcVar2;
          fVar39 = (float)(*pcRam_?)(pvVar1);
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              (&VStack_10,this,(MethodInfo *)0x0);
          uVar40 = pVVar9->x;
          uVar41 = pVVar9->y;
          fVar14 = pVVar9->z;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (&VStack_10,this,(MethodInfo *)0x0);
          uVar42 = pVVar9->x;
          uVar43 = pVVar9->y;
          fVar44 = (((float)uVar37 * fVar39 + (float)uStack_7) -
                   (float)uVar40 * fVar6 * _UNK_?) + fVar5 * (float)uVar42 * _UNK_?;
          fVar45 = (((float)uVar38 * fVar39 + uStack_7._4_4_) -
                   (float)uVar41 * fVar6 * _UNK_?) +
                   fVar5 * (float)uVar43 * _UNK_?;
          fVar46 = ((fVar17 * fVar39 + fStack_8) - fVar14 * fVar6 * _UNK_?) +
                   fVar5 * pVVar9->z * _UNK_?;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              (&VStack_10,this,(MethodInfo *)0x0);
          uVar47 = pVVar9->x;
          fVar39 = (float)uVar47 * fVar6 + fVar44;
          fStack_48 = pVVar9->z * fVar6 + fVar46;
          uVar49 = pVVar9->y;
          uStack_7 = CONCAT44(uVar49,(float)uVar49 * fVar6 + fVar45);
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              (&VStack_10,this,(MethodInfo *)0x0);
          uVar50 = pVVar9->x;
          uVar51 = pVVar9->y;
          fStack_52 = fVar39 - fVar5 * (float)uVar50;
          fVar14 = (float)uStack_7 - fVar5 * (float)uVar51;
          fStack_53 = fStack_48 - fVar5 * pVVar9->z;
          pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              (&VStack_10,this,(MethodInfo *)0x0);
          fVar17 = fStack_53;
          fVar5 = fStack_52;
          uVar54 = pVVar9->x;
          fStack_52 = fStack_52 - (float)uVar54 * fVar6;
          fStack_55 = fVar14 - pVVar9->y * fVar6;
          fStack_53 = fStack_53 - pVVar9->z * fVar6;
          pointCloud = (IEnumerable_1_UnityEngine_Vector3_ *)
                       FUN_?(TypeInfo__UnityEngine__Vector3,8);
          if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
            if (*(int *)&pointCloud[1].monitor != 0) {
              pointCloud[2].klass =
                   (IEnumerable_1_UnityEngine_Vector3___Class *)CONCAT44(fVar21,fVar20);
              *(float *)&pointCloud[2].monitor = fVar22;
              if (1 < *(uint *)&pointCloud[1].monitor) {
                *(ulonglong *)((longlong)&pointCloud[2].monitor + 4) = CONCAT44(fVar25,fVar26);
                *(float *)((longlong)&pointCloud[3].klass + 4) = fVar27;
                if (2 < *(uint *)&pointCloud[1].monitor) {
                  pointCloud[3].monitor = (MonitorData *)CONCAT44(fStack_31,fStack_30);
                  *(float *)&pointCloud[4].klass = fVar13;
                  if (3 < *(uint *)&pointCloud[1].monitor) {
                    *(ulonglong *)((longlong)&pointCloud[4].klass + 4) =
                         CONCAT44(fStack_35,fStack_34);
                    *(float *)((longlong)&pointCloud[4].monitor + 4) = fStack_36;
                    if (4 < *(uint *)&pointCloud[1].monitor) {
                      pointCloud[5].klass =
                           (IEnumerable_1_UnityEngine_Vector3___Class *)CONCAT44(fVar45,fVar44);
                      *(float *)&pointCloud[5].monitor = fVar46;
                      if (5 < *(uint *)&pointCloud[1].monitor) {
                        *(ulonglong *)((longlong)&pointCloud[5].monitor + 4) =
                             CONCAT44((int)uStack_7,fVar39);
                        *(float *)((longlong)&pointCloud[6].klass + 4) = fStack_48;
                        if (6 < *(uint *)&pointCloud[1].monitor) {
                          pointCloud[6].monitor = (MonitorData *)CONCAT44(fVar14,fVar5);
                          *(float *)&pointCloud[7].klass = fVar17;
                          if (7 < *(uint *)&pointCloud[1].monitor) {
                            *(ulonglong *)((longlong)&pointCloud[7].klass + 4) =
                                 CONCAT44(fStack_55,fStack_52);
                            *(float *)((longlong)&pointCloud[7].monitor + 4) = fStack_53;
                            (__return_storage_ptr__->_size).x = 0.0;
                            (__return_storage_ptr__->_size).y = 0.0;
                            *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
                            (__return_storage_ptr__->_center).y = 0.0;
                            (__return_storage_ptr__->_center).z = 0.0;
                            *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
                            AABB::AABB__ctor_2(__return_storage_ptr__,pointCloud,(MethodInfo *)0x0);
                            return __return_storage_ptr__;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar2 = (code *)swi(3);
            pAVar4 = (AABB *)(*pcVar2)();
            return pAVar4;
          }
          goto code_?;
        }
      }
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  pAVar4 = (AABB *)(*pcVar2)();
  return pAVar4;
}


/* AABB CalculateVolumeAABB(Camera) */

AABB * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_CalculateVolumeAABB
                 (AABB *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pAVar2 = (AABB *)(*pcVar1)();
    return pAVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pAVar2 = (AABB *)(*pcVar1)();
    return pAVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pAVar2 = (AABB *)(*pcVar1)();
    return pAVar2;
  }
  pcRam_? = pcVar1;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 == '\0') {
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar2 = CameraEx_CalculateFrustumAABB(&AStack_6,camera,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pAVar2 = CameraEx_CalculateOrthoAABB(&AStack_6,camera,(MethodInfo *)0x0);
  }
  fVar7 = (pAVar2->_size).y;
  uVar4 = *(undefined8 *)&(pAVar2->_size).z;
  fVar8 = (pAVar2->_center).y;
  fVar9 = (pAVar2->_center).z;
  bVar10 = pAVar2->_isValid;
  uVar11 = *(undefined3 *)&pAVar2->field_0x19;
  (__return_storage_ptr__->_size).x = (pAVar2->_size).x;
  (__return_storage_ptr__->_size).y = fVar7;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = uVar4;
  (__return_storage_ptr__->_center).y = fVar8;
  (__return_storage_ptr__->_center).z = fVar9;
  __return_storage_ptr__->_isValid = bVar10;
  *(undefined3 *)&__return_storage_ptr__->field_0x19 = uVar11;
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector2] ConvertWorldToScreenPoints(Camera, List`1[UnityEngine.Vector3]) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::CameraEx::CameraEx_ConvertWorldToScreenPoints
          (Camera *camera,List_1_UnityEngine_Vector3_ *worldPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (worldPoints == (List_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar2 = (code *)swi(3);
    pLVar3 = (List_1_UnityEngine_Vector2_ *)(*pcVar2)();
    return pLVar3;
  }
  if ((worldPoints->fields)._size == 0) {
    pLVar3 = (List_1_UnityEngine_Vector2_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar3,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  }
  else {
    iVar4 = (worldPoints->fields)._size;
    pLVar3 = (List_1_UnityEngine_Vector2_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    FUN_?(pLVar3,iVar4,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List_int_);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    ppLStack_11 = (List_1_UnityEngine_Vector3_ **)
                  ((ulonglong)(uint)(worldPoints->fields)._version << 0x20);
    uStack_12 = 0;
    uStack_13 = 0;
    lStack_14 = (longlong)ppLStack_11;
    uStack_15 = 0;
    uStack_16 = 0;
    uStack_6 = 0;
    ppLStack_11 = &pLStack_17;
    pLStack_17 = worldPoints;
    while (cVar18 = FUN_?(&pLStack_17), cVar18 != '\0') {
      if (camera == (Camera *)0x0) goto code_?;
      uStack_19 = (undefined4)uStack_16;
      uStack_20 = uStack_15;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_21.x = 0.0;
      VStack_21.y = 0.0;
      uStack_22 = 0;
      pvVar23 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar23 == (void *)0x0) goto code_?;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar23,&uStack_20,2,&VStack_21);
      pMVar24 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      if (pLVar3 == (List_1_UnityEngine_Vector2_ *)0x0) goto code_?;
      piVar25 = &(pLVar3->fields)._version;
      *piVar25 = *piVar25 + 1;
      pVVar26 = (pLVar3->fields)._items;
      uVar5 = (pLVar3->fields)._size;
      if (pVVar26 == (Vector2__Array *)0x0) goto code_?;
      if (uVar5 < (uint)pVVar26->max_length) {
        (pLVar3->fields)._size = uVar5 + 1;
        if ((uint)pVVar26->max_length <= uVar5) goto code_?;
        pVVar26->vector[(int)uVar5].x = VStack_21.x;
        pVVar26->vector[(int)uVar5].y = VStack_21.y;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (pLVar3,VStack_21,pMVar24->klass->rgctx_data[0xe].method);
      }
    }
  }
  return pLVar3;
}


/* Single EstimateZoomFactor(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_EstimateZoomFactor
                (Camera *camera,Vector3 *worldPos,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 == '\0') {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (this == (Transform *)0x0) goto code_?;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (aVStack_7,this,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fVar2 = pVVar6->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (this->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar3);
    uVar10 = worldPos->x;
    uVar11 = worldPos->y;
    iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (camera,(MethodInfo *)0x0);
    fVar13 = worldPos->z;
    fVar14 = (float)iVar12 * _UNK_? * _UNK_?;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                       (camera,(MethodInfo *)0x0);
    fVar2 = (((float)uVar11 - 0.0) * (float)uVar9 + ((float)uVar10 - 0.0) * (float)uVar8 +
             (fVar13 - 0.0) * fVar2) / (fVar14 / fVar15);
  }
  else {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                       (camera,(MethodInfo *)0x0);
    iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (camera,(MethodInfo *)0x0);
    fVar2 = (fVar2 + fVar2) / ((float)iVar12 * _UNK_?);
  }
  return fVar2;
}


/* Single EstimateZoomFactorSpherical(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_EstimateZoomFactorSpherical
                (Camera *camera,Vector3 *worldPos,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 == '\0') {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)camera,(MethodInfo *)0x0);
    if (obj == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    fStack_7 = 0.0;
    pvVar3 = (obj->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar3);
    uVar8 = worldPos->x;
    fStack_7 = worldPos->z - fStack_7;
    uStack_6 = CONCAT44(worldPos->y - uStack_6._4_4_,(float)uVar8 - (float)uStack_6);
    fVar2 = (float)FUN_?(&uStack_6);
    iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (camera,(MethodInfo *)0x0);
    fVar10 = (float)iVar9 * _UNK_? * _UNK_?;
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (camera,(MethodInfo *)0x0);
    fVar2 = fVar2 / (fVar10 / fVar11);
  }
  else {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                      (camera,(MethodInfo *)0x0);
    iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight
                      (camera,(MethodInfo *)0x0);
    fVar2 = (fVar2 + fVar2) / ((float)iVar9 * _UNK_?);
  }
  return fVar2;
}


/* Single GetFOVFromDistanceAndHeight(Camera, Single, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFOVFromDistanceAndHeight
                (Camera *camera,float frustumHeight,float distance,MethodInfo *method)

{
  fVar1 = (float)func_?(frustumHeight * _UNK_?,distance);
  return (fVar1 + fVar1) * _UNK_?;
}


/* Vector3 GetFarMidOrthoTop(Camera) */

Vector3 * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFarMidOrthoTop
                    (Vector3 *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar1 = CameraEx_GetFarMidPoint(&VStack_2,camera,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  if ((camera != (Camera *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_5,this,(MethodInfo *)0x0);
    VStack_2.x = pVVar1->x;
    VStack_2.y = pVVar1->y;
    fVar6 = pVVar1->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar1 = (Vector3 *)(*pcVar8)();
      return pVVar1;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar1 = (Vector3 *)(*pcVar8)();
      return pVVar1;
    }
    pcRam_? = pcVar8;
    fVar10 = (float)(*pcRam_?)(pvVar7);
    __return_storage_ptr__->x = VStack_2.x * fVar10 + (float)uStack_3;
    __return_storage_ptr__->y = VStack_2.y * fVar10 + uStack_3._4_4_;
    __return_storage_ptr__->z = fVar6 * fVar10 + fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar8)();
  return pVVar1;
}


/* Vector3 GetFarMidPoint(Camera) */

Vector3 * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFarMidPoint
                    (Vector3 *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if ((camera == (Camera *)0x0) ||
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0), this == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
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
  pvVar5 = (this->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                     (&VStack_7,this,(MethodInfo *)0x0);
  uStack_8._0_4_ = pVVar2->x;
  uStack_8._4_4_ = pVVar2->y;
  fVar9 = pVVar2->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  fVar10 = (float)(*pcRam_?)(pvVar5);
  __return_storage_ptr__->x = (float)uStack_8 * fVar10 + (float)uStack_3;
  __return_storage_ptr__->y = uStack_8._4_4_ * fVar10 + uStack_3._4_4_;
  __return_storage_ptr__->z = fVar9 * fVar10 + fStack_4;
  return __return_storage_ptr__;
}


/* Single GetFrustumDistanceFromHeight(Camera, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFrustumDistanceFromHeight
                (Camera *camera,float frustumHeight,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  fVar5 = frustumHeight * _UNK_?;
  fVar2 = (float)(*pcRam_?)(pvVar3);
  fVar2 = (float)FUN_?(fVar2 * _UNK_? * _UNK_?);
  return fVar5 / fVar2;
}


/* Single GetFrustumHeightFromDistance(Camera, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFrustumHeightFromDistance
                (Camera *camera,float distance,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  fVar2 = (float)(*pcRam_?)(pvVar3);
  fVar2 = (float)FUN_?(fVar2 * _UNK_? * _UNK_?);
  return fVar2 * (distance + distance);
}


/* Single GetFrustumWidthFromDistance(Camera, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetFrustumWidthFromDistance
                (Camera *camera,float distance,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcRam_? = pcVar1;
    fVar2 = (float)(*pcRam_?)(pvVar3);
    fVar2 = (float)FUN_?(fVar2 * _UNK_? * _UNK_?);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        fVar2 = (float)(*pcVar1)();
        return fVar2;
      }
      pcRam_? = pcVar1;
      fVar5 = (float)(*pcRam_?)(pvVar3);
      return fVar5 * (distance + distance) * fVar2;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* Plane GetNearPlaneForward(Camera) */

Plane * Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetNearPlaneForward
                  (Plane *__return_storage_ptr__,Camera *camera,MethodInfo *method)

{
  if ((camera == (Camera *)0x0) ||
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0), this == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane *)(*pcVar1)();
    return pPVar2;
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                     (&VStack_4,this,(MethodInfo *)0x0);
  uVar5._0_4_ = pVVar3->x;
  uVar5._4_4_ = pVVar3->y;
  fVar6 = pVVar3->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  fStack_8 = 0.0;
  pvVar9 = (this->fields)._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane *)(*pcVar1)();
    return pPVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane *)(*pcVar1)();
    return pPVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar9,&uStack_7);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                     (aVStack_10,this,(MethodInfo *)0x0);
  VStack_4.x = pVVar3->x;
  VStack_4.y = pVVar3->y;
  fVar11 = pVVar3->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar9 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane *)(*pcVar1)();
    return pPVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pPVar2 = (Plane *)(*pcVar1)();
    return pPVar2;
  }
  pcRam_? = pcVar1;
  fVar12 = (float)(*pcRam_?)(pvVar9);
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  VStack_4.z = fVar11 * fVar12 + fStack_8;
  VStack_4.y = VStack_4.y * fVar12 + uStack_7._4_4_;
  VStack_4.x = VStack_4.x * fVar12 + (float)uStack_7;
  uStack_7 = uVar5;
  fStack_8 = fVar6;
  FUN_?(__return_storage_ptr__,&uStack_7,&VStack_4);
  return __return_storage_ptr__;
}


/* Single GetOrthoFOV(Camera) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetOrthoFOV(Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((camera != (Camera *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
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
    pvVar4 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      fVar6 = (float)(*pcVar5)();
      return fVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      fVar6 = (float)(*pcVar5)();
      return fVar6;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&uStack_2);
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar8 = CameraEx_GetFarMidPoint(&VStack_9,camera,(MethodInfo *)0x0);
    VStack_10.x = pVVar8->x;
    VStack_10.y = pVVar8->y;
    fVar11 = VStack_10.x - (float)uStack_2;
    fVar12 = pVVar8->z - fStack_3;
    fVar6 = VStack_10.y - uStack_2._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__CameraEx);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar8 = CameraEx_GetFarMidPoint(&VStack_10,camera,(MethodInfo *)0x0);
    VStack_9.x = pVVar8->x;
    VStack_9.y = pVVar8->y;
    fVar13 = pVVar8->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (aVStack_14,pTVar1,(MethodInfo *)0x0);
      VStack_10.x = pVVar8->x;
      VStack_10.y = pVVar8->y;
      fVar15 = pVVar8->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar5 = (code *)swi(3);
        fVar6 = (float)(*pcVar5)();
        return fVar6;
      }
      pcRam_? = pcVar5;
      fVar16 = (float)(*pcRam_?)(pvVar4);
      VStack_9.z = (fVar15 * fVar16 + fVar13) - fStack_3;
      VStack_9.y = (VStack_10.y * fVar16 + VStack_9.y) - uStack_2._4_4_;
      VStack_9.x = (VStack_10.x * fVar16 + VStack_9.x) - (float)uStack_2;
      VStack_10.y = fVar6;
      VStack_10.x = fVar11;
      VStack_10.z = fVar12;
      fVar6 = (float)FUN_?(&VStack_10,&VStack_9);
      return fVar6 + fVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float)(*pcVar5)();
  return fVar6;
}


/* Single GetPointZDistance(Camera, Vector3) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetPointZDistance
                (Camera *camera,Vector3 *point,MethodInfo *method)

{
  if ((camera == (Camera *)0x0) ||
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0), this == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
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
  pvVar5 = (this->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  uVar7 = point->x;
  uVar8 = point->y;
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                     (aVStack_10,this,(MethodInfo *)0x0);
  uVar11 = pVVar9->x;
  uVar12 = pVVar9->y;
  return ((float)uVar8 - uStack_3._4_4_) * (float)uVar12 +
         ((float)uVar7 - (float)uStack_3) * (float)uVar11 + (point->z - fStack_4) * pVVar9->z;
}


/* Void GetVisibleObjects(Camera, CameraViewVolume, List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetVisibleObjects
               (Camera *camera,CameraViewVolume *viewVolume,
               List_1_UnityEngine_GameObject_ *visibleObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectTypeHelper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectBounds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (visibleObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    piVar1 = &(visibleObjects->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (visibleObjects->fields)._size;
    (visibleObjects->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(visibleObjects->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
      FUN_?();
    }
    this = (RTScene *)
           MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    if (viewVolume != (CameraViewVolume *)0x0) {
      uVar2._0_4_ = (viewVolume->fields)._worldOBB._size.x;
      uVar2._4_4_ = (viewVolume->fields)._worldOBB._size.y;
      uVar3 = *(undefined8 *)&(viewVolume->fields)._worldOBB._size.z;
      uVar4._0_4_ = (viewVolume->fields)._worldOBB._center.y;
      uVar4._4_4_ = (viewVolume->fields)._worldOBB._center.z;
      uVar5._0_4_ = (viewVolume->fields)._worldOBB._rotation.x;
      uVar5._4_4_ = (viewVolume->fields)._worldOBB._rotation.y;
      uVar6._0_4_ = (viewVolume->fields)._worldOBB._rotation.z;
      uVar6._4_4_ = (viewVolume->fields)._worldOBB._rotation.w;
      uVar7._0_1_ = (viewVolume->fields)._worldOBB._isValid;
      uVar7._1_3_ = *(undefined3 *)&(viewVolume->fields)._worldOBB.field_0x29;
      if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__RTG__CameraEx);
      }
      if (this != (RTScene *)0x0) {
        aOStack_8[0]._size._0_8_ = uVar2;
        aOStack_8[0]._8_8_ = uVar3;
        aOStack_8[0]._center._4_8_ = uVar4;
        aOStack_8[0]._rotation._0_8_ = uVar5;
        aOStack_8[0]._rotation._8_8_ = uVar6;
        aOStack_8[0]._40_4_ = uVar7;
        RTScene::RTScene_OverlapBox
                  (this,aOStack_8,TypeInfo__RTG__CameraEx->static_fields->_objectBuffer,
                   (MethodInfo *)0x0);
        pLVar9 = TypeInfo__RTG__CameraEx->static_fields->_objectBuffer;
        if (pLVar9 != (List_1_UnityEngine_GameObject_ *)0x0) {
          if ((pLVar9->fields)._size != 0) {
            if (*(int *)&(TypeInfo__RTG__GameObjectTypeHelper->_1).field_0x1c == 0) {
              FUN_?();
            }
            AStack_10._size.x = (float)FUN_?();
            AStack_10._size.y = 1e-05;
            AStack_10._size.z = 1e-05;
            AStack_10._center.x = 1e-05;
            if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__RTG__CameraEx);
            }
            uVar2 = AStack_10._8_8_;
            uVar6 = AStack_10._size._0_8_;
            LStack_11._list =
                 (List_1_System_Object_ *)TypeInfo__RTG__CameraEx->static_fields->_objectBuffer;
            if ((List_1_UnityEngine_GameObject_ *)LStack_11._list ==
                (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
            if (iRam_? != 0) {
              uVar12 = (uint)((ulonglong)&uStack_13 >> 0xc);
              uVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                LOCK();
                bVar17 = uVar15 == *puVar16;
                if (bVar17) {
                  *puVar16 = uVar15 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
            pLStack_18 = (List_1_T_Enumerator_System_Object_ *)
                         ((ulonglong)
                          (uint)(((List_1_UnityEngine_GameObject_ *)LStack_11._list)->fields).
                                _version << 0x20);
            uStack_19 = 0;
            LStack_11._8_8_ = pLStack_18;
            LStack_11._current = (Object *)0x0;
            uStack_13 = 0;
            pLStack_18 = &LStack_11;
            while (bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System
                            ::Object]::List_1_T_Enumerator_System_Object__MoveNext
                                      (&LStack_11,
                                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                      ), gameObject = LStack_11._current, bVar20 != 0) {
              if (*(int *)&(TypeInfo__RTG__ObjectBounds->_1).field_0x1c == 0) {
                FUN_?();
              }
              AStack_10._size._0_8_ = uVar6;
              AStack_10._8_8_ = uVar2;
              pAVar21 = ObjectBounds::ObjectBounds_CalcWorldAABB
                                  ((AABB *)aOStack_8,(GameObject *)gameObject,
                                   (ObjectBounds_QueryConfig *)&AStack_10,(MethodInfo *)0x0);
              AStack_10._size.x = (pAVar21->_size).x;
              AStack_10._size.y = (pAVar21->_size).y;
              AStack_10._8_8_ = *(undefined8 *)&(pAVar21->_size).z;
              AStack_10._center.y = (pAVar21->_center).y;
              AStack_10._center.z = (pAVar21->_center).z;
              if (pAVar21->_isValid != 0) {
                AStack_10._isValid = pAVar21->_isValid;
                AStack_10._25_3_ = *(undefined3 *)&pAVar21->field_0x19;
                bVar20 = CameraViewVolume::CameraViewVolume_CheckAABB
                                   (viewVolume,&AStack_10,(MethodInfo *)0x0);
                if (bVar20 != 0) {
                  FUN_?(visibleObjects,gameObject);
                }
              }
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* List`1[UnityEngine.Vector3] GetVisibleSphereExtents(Camera, Sphere) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CameraEx::CameraEx_GetVisibleSphereExtents
          (Camera *camera,Sphere *sphere,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((camera != (Camera *)0x0) &&
     (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)camera,(MethodInfo *)0x0), this != (Transform *)0x0)) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (aVStack_2,this,(MethodInfo *)0x0);
    uVar3._0_4_ = pVVar1->x;
    uVar3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (aVStack_2,this,(MethodInfo *)0x0);
    uVar5 = 0;
    VStack_6.x = pVVar1->x;
    VStack_6.y = pVVar1->y;
    VStack_6.z = pVVar1->z;
    VStack_7.x = (sphere->_center).x;
    VStack_7.y = (sphere->_center).y;
    VStack_7.z = (sphere->_center).z;
    VStack_8._0_8_ = uVar3;
    VStack_8.z = fVar4;
    pLVar9 = SphereMath::SphereMath_CalcRightUpExtents
                        (&VStack_7,sphere->_radius,&VStack_8,&VStack_6,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
      return pLVar9;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar11 = (code *)swi(3);
      pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
      return pLVar9;
    }
    pcRam_? = pcVar11;
    cVar12 = (*pcRam_?)(pvVar10);
    fVar4 = _UNK_?;
    if (cVar12 == '\0') {
      fVar13 = sphere->_radius;
      uVar14 = uVar5;
      do {
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
        if ((this->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
          return pLVar9;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar11 = (code *)swi(3);
          pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
          return pLVar9;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)();
        fVar15 = VStack_7.z;
        if (pLVar9 == (List_1_UnityEngine_Vector3_ *)0x0) goto code_?;
        uVar16 = (uint)uVar14;
        if ((uint)(pLVar9->fields)._size <= uVar16) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
          return pLVar9;
        }
        pVVar17 = (pLVar9->fields)._items;
        if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar17->max_length <= uVar16) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
          return pLVar9;
        }
        fVar18 = VStack_7.x;
        fVar19 = (float)*(undefined8 *)((longlong)&pVVar17->vector[0].x + uVar5) - VStack_7.x;
        fVar20 = VStack_7.y;
        fVar21 = *(float *)((longlong)&pVVar17->vector[0].y + uVar5) - VStack_7.y;
        fVar22 = *(float *)((longlong)&pVVar17->vector[0].z + uVar5) - VStack_7.z;
        uStack_23 = CONCAT44(fVar21,fVar19);
        fStack_24 = fVar22;
        fVar25 = (float)FUN_?(&uStack_23);
        if (fVar4 < fVar25) {
          fVar22 = fVar22 / fVar25;
          VStack_8.y = fVar21 / fVar25;
          VStack_8.x = fVar19 / fVar25;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
            fVar18 = VStack_7.x;
            fVar20 = VStack_7.y;
            fVar15 = VStack_7.z;
          }
          pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_8.x = (pVVar26->zeroVector).x;
          VStack_8.y = (pVVar26->zeroVector).y;
          fVar22 = (pVVar26->zeroVector).z;
        }
        uVar27 = (sphere->_center).x;
        uVar28 = (sphere->_center).y;
        fVar25 = ((float)uVar28 - fVar20) * VStack_8.y + ((float)uVar27 - fVar18) * VStack_8.x +
                 ((sphere->_center).z - fVar15) * fVar22;
        uVar29 = (sphere->_center).x;
        uVar30 = (sphere->_center).y;
        fVar18 = (VStack_8.x * fVar25 + fVar18) - (float)uVar29;
        fVar20 = (VStack_8.y * fVar25 + fVar20) - (float)uVar30;
        fVar15 = (fVar22 * fVar25 + fVar15) - (sphere->_center).z;
        aVStack_2[0].y = fVar20;
        aVStack_2[0].x = fVar18;
        aVStack_2[0].z = fVar15;
        fVar22 = (float)FUN_?();
        if (fVar4 < fVar22) {
          fVar15 = fVar15 / fVar22;
          VStack_6.y = fVar20 / fVar22;
          VStack_6.x = fVar18 / fVar22;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_6.x = (pVVar26->zeroVector).x;
          VStack_6.y = (pVVar26->zeroVector).y;
          fVar15 = (pVVar26->zeroVector).z;
        }
        uVar31 = (sphere->_center).x;
        uVar32 = (sphere->_center).y;
        fVar22 = (sphere->_center).z;
        if ((uint)(pLVar9->fields)._size <= uVar16) goto code_?;
        pVVar17 = (pLVar9->fields)._items;
        if (pVVar17 == (Vector3__Array *)0x0) goto code_?;
        if ((uint)pVVar17->max_length <= uVar16) goto code_?;
        uVar14 = (ulonglong)(uVar16 + 1);
        *(ulonglong *)((longlong)&pVVar17->vector[0].x + uVar5) =
             CONCAT44(VStack_6.y * fVar13 + (float)uVar32,VStack_6.x * fVar13 + (float)uVar31);
        *(float *)((longlong)&pVVar17->vector[0].z + uVar5) = fVar15 * fVar13 + fVar22;
        uVar5 = uVar5 + 0xc;
        piVar33 = &(pLVar9->fields)._version;
        *piVar33 = *piVar33 + 1;
      } while ((longlong)uVar5 < 0x30);
    }
    return pLVar9;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
  return pLVar9;
}


/* Boolean IsCurrent(Camera) */

bool Assembly-CSharp.dll::RTG::CameraEx::CameraEx_IsCurrent(Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_currentInternal
                     ((MethodInfo *)0x0);
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
  if (camera == (Camera *)0x0 && pCVar1 == (Camera *)0x0) {
    return 1;
  }
  if (camera != (Camera *)0x0) {
    if (pCVar1 != (Camera *)0x0) {
      return pCVar1 == camera;
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (camera->fields)._._._.m_CachedPtr == (void *)0x0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pCVar1 != (Camera *)0x0) {
    return (pCVar1->fields)._._._.m_CachedPtr == (void *)0x0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsPointFacingCamera(Camera, Vector3, Vector3) */

bool Assembly-CSharp.dll::RTG::CameraEx::CameraEx_IsPointFacingCamera
               (Camera *camera,Vector3 *point,Vector3 *pointNormal,MethodInfo *method)

{
  if ((camera != (Camera *)0x0) &&
     (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
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
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar3);
    uVar7 = point->x;
    uVar8 = point->y;
    fVar9 = point->z - VStack_2.z;
    uStack_10 = CONCAT44((float)uVar8 - VStack_2.y,(float)uVar7 - VStack_2.x);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    cVar11 = (*pcRam_?)(pvVar3);
    if (cVar11 != '\0') {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0);
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_2,pTVar1,(MethodInfo *)0x0);
      uStack_10._0_4_ = pVVar12->x;
      uStack_10._4_4_ = pVVar12->y;
      fVar9 = pVVar12->z;
    }
    uVar13 = pointNormal->x;
    uVar14 = pointNormal->y;
    return uStack_10._4_4_ * (float)uVar14 + (float)uStack_10 * (float)uVar13 +
           fVar9 * pointNormal->z < 0.0;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean IsPointInFrontNearPlane(Camera, Vector3) */

bool Assembly-CSharp.dll::RTG::CameraEx::CameraEx_IsPointInFrontNearPlane
               (Camera *camera,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__CameraEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pPVar1 = CameraEx_GetNearPlaneForward(&PStack_2,camera,(MethodInfo *)0x0);
  uVar3 = position->x;
  uVar4 = position->y;
  return 0.0 < (pPVar1->m_Normal).y * (float)uVar4 + (pPVar1->m_Normal).x * (float)uVar3 +
               (pPVar1->m_Normal).z * position->z + pPVar1->m_Distance;
}


/* Single ScreenToEstimatedWorldSize(Camera, Vector3, Single) */

float Assembly-CSharp.dll::RTG::CameraEx::CameraEx_ScreenToEstimatedWorldSize
                (Camera *camera,Vector3 *worldPos,float screenSize,MethodInfo *method)

{
  if (camera == (Camera *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      fVar2 = (float)(*pcVar1)();
      return fVar2;
    }
    pcRam_? = pcVar1;
    iVar5 = (*pcRam_?)(pvVar3);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 != (void *)0x0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        fVar2 = (float)(*pcVar1)();
        return fVar2;
      }
      pcRam_? = pcVar1;
      cVar6 = (*pcRam_?)(pvVar3);
      if (cVar6 == '\0') {
        this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0);
        if (this == (Transform *)0x0) goto code_?;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           (aVStack_8,this,(MethodInfo *)0x0);
        uVar9 = pVVar7->x;
        uVar10 = pVVar7->y;
        fVar2 = pVVar7->z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (this->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          fVar2 = (float)(*pcVar1)();
          return fVar2;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar1 = (code *)swi(3);
          fVar2 = (float)(*pcVar1)();
          return fVar2;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar3);
        uVar11 = worldPos->x;
        uVar12 = worldPos->y;
        fVar13 = ((float)uVar12 - 0.0) * (float)uVar10 + ((float)uVar11 - 0.0) * (float)uVar9 +
                 (worldPos->z - 0.0) * fVar2;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                           (camera,(MethodInfo *)0x0);
        auVar14._0_4_ = fVar2 * _UNK_? * _UNK_?;
        auVar14._4_12_ = extraout_var;
        fVar2 = (float)FUN_?(auVar14._0_8_);
        fVar2 = fVar2 * (fVar13 + fVar13);
      }
      else {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                           (camera,(MethodInfo *)0x0);
        fVar2 = fVar2 + fVar2;
      }
      return (fVar2 / (float)iVar5) * screenSize;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* CameraEx() */

void Assembly-CSharp.dll::RTG::CameraEx::CameraEx__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__CameraEx);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_GameObject_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  TypeInfo__RTG__CameraEx->static_fields->_objectBuffer = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__RTG__CameraEx->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

