
/* Void DrawQuad2D(Vector2, Vector2, Single, Camera) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawQuad2D
               (Vector2 quadCenter,Vector2 quadSize,float rotationDegrees,Camera *camera,
               MethodInfo *method)

{
  VStack_1 = quadCenter;
  VStack_2 = quadSize;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
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
    fVar6 = (float)(*pcRam_?)(pvVar3);
    fVar6 = fVar6 + _UNK_?;
    fVar7 = VStack_1.x;
    fVar8 = VStack_1.y;
    VStack_9 = VStack_1;
    uStack_10 = CONCAT44(uStack_10._4_4_,fVar6);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_11.x = 0.0;
    VStack_11.y = 0.0;
    VStack_11.z = 0.0;
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_9,2,&VStack_11);
    fVar12 = _UNK_?;
    fVar13 = VStack_2.x;
    fVar14 = VStack_2.y;
    VStack_15.y = VStack_2.y * _UNK_? + fVar8;
    VStack_15.x = fVar7 - VStack_2.x * _UNK_?;
    VStack_15.z = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_16 = 0;
    uStack_17 = (ulonglong)(uint)uStack_17._4_4_ << 0x20;
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_15,2,&uStack_16);
    VStack_18.y = fVar8 - fVar14 * fVar12;
    VStack_18.x = fVar13 * fVar12 + fVar7;
    VStack_18.z = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    uStack_10 = uStack_10 & 0xffffffff00000000;
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_18,2,&VStack_9);
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar8 = VStack_9.x;
    fVar6 = VStack_9.y;
    fVar12 = (float)uStack_10;
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = (float)uStack_16;
    fVar14 = uStack_16._4_4_;
    fVar20 = VStack_9.x - (float)uStack_16;
    fVar21 = (float)uStack_17;
    fVar22 = VStack_9.y - uStack_16._4_4_;
    VStack_18.x = (pVVar19->oneVector).x;
    VStack_18.y = (pVVar19->oneVector).y;
    fVar23 = (float)uStack_10 - (float)uStack_17;
    fVar7 = (pVVar19->oneVector).z;
    if (this != (Transform *)0x0) {
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_18,this,(MethodInfo *)0x0);
      VStack_15.x = pVVar24->x;
      VStack_15.y = pVVar24->y;
      uStack_25 = CONCAT44((uint)VStack_15.y & _UNK_?,
                            (uint)(VStack_15.x * fVar20 + VStack_15.y * fVar22 +
                                  pVVar24->z * fVar23) & _UNK_?);
      uStack_26 = 0;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_18,this,(MethodInfo *)0x0);
      VStack_15.x = pVVar24->x;
      VStack_15.y = pVVar24->y;
      fVar8 = (float)((uint)((fVar6 - fVar14) * VStack_15.y + (fVar8 - fVar13) * VStack_15.x +
                             (fVar12 - fVar21) * pVVar24->z) & _UNK_?);
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_15,this,(MethodInfo *)0x0);
      VStack_18.x = pVVar24->x;
      VStack_18.y = pVVar24->y;
      VStack_18.z = pVVar24->z;
      VStack_9.x = 0.0;
      VStack_9.y = 0.0;
      uStack_10 = 0;
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
      (*pcRam_?)(rotationDegrees,&VStack_18,&VStack_9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_16 = 0;
      uStack_17 = 0;
      pvVar3 = (this->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3,&uStack_16);
      VStack_18.y = fVar8;
      VStack_18.x = (float)uStack_25;
      fStack_27 = ((uStack_17._4_4_ * uStack_10._4_4_ - (float)uStack_16 * VStack_9.x) -
                   uStack_16._4_4_ * VStack_9.y) - (float)uStack_17 * (float)uStack_10;
      VStack_15.z = VStack_11.z;
      VStack_15.x = VStack_11.x;
      VStack_15.y = VStack_11.y;
      uStack_25 = CONCAT44((uStack_16._4_4_ * uStack_10._4_4_ + uStack_17._4_4_ * VStack_9.y +
                            (float)uStack_16 * (float)uStack_10) -
                            (float)uStack_17 * VStack_9.x,
                            ((float)uStack_16 * uStack_10._4_4_ + uStack_17._4_4_ * VStack_9.x
                            + (float)uStack_17 * VStack_9.y) -
                            uStack_16._4_4_ * (float)uStack_10);
      uStack_26 = CONCAT44(fStack_27,
                            ((float)uStack_17 * uStack_10._4_4_ +
                             uStack_17._4_4_ * (float)uStack_10 + uStack_16._4_4_ * VStack_9.x)
                            - (float)uStack_16 * VStack_9.y);
      MStack_28.m00 = 0.0;
      MStack_28.m10 = 0.0;
      MStack_28.m20 = 0.0;
      MStack_28.m30 = 0.0;
      MStack_28.m01 = 0.0;
      MStack_28.m11 = 0.0;
      MStack_28.m21 = 0.0;
      MStack_28.m31 = 0.0;
      MStack_28.m02 = 0.0;
      MStack_28.m12 = 0.0;
      MStack_28.m22 = 0.0;
      MStack_28.m32 = 0.0;
      MStack_28.m03 = 0.0;
      MStack_28.m13 = 0.0;
      MStack_28.m23 = 0.0;
      MStack_28.m33 = 0.0;
      pcVar4 = pcRam_?;
      VStack_18.z = fVar7;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&VStack_15,&uStack_25,&VStack_18);
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_00 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitQuadXY(this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Graphics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        aMStack_29[0].m00 = MStack_28.m00;
        aMStack_29[0].m10 = MStack_28.m10;
        aMStack_29[0].m20 = MStack_28.m20;
        aMStack_29[0].m30 = MStack_28.m30;
        aMStack_29[0].m01 = MStack_28.m01;
        aMStack_29[0].m11 = MStack_28.m11;
        aMStack_29[0].m21 = MStack_28.m21;
        aMStack_29[0].m31 = MStack_28.m31;
        aMStack_29[0].m02 = MStack_28.m02;
        aMStack_29[0].m12 = MStack_28.m12;
        aMStack_29[0].m22 = MStack_28.m22;
        aMStack_29[0].m32 = MStack_28.m32;
        aMStack_29[0].m03 = MStack_28.m03;
        aMStack_29[0].m13 = MStack_28.m13;
        aMStack_29[0].m23 = MStack_28.m23;
        aMStack_29[0].m33 = MStack_28.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                  (mesh,aMStack_29,-1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DrawQuadBorder2D(Vector2, Vector2, Single, Camera) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawQuadBorder2D
               (Vector2 quadCenter,Vector2 quadSize,float rotationDegrees,Camera *camera,
               MethodInfo *method)

{
  VStack_1 = quadCenter;
  VStack_2 = quadSize;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (camera != (Camera *)0x0) {
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
    fVar6 = (float)(*pcRam_?)(pvVar3);
    fVar6 = fVar6 + _UNK_?;
    fVar7 = VStack_1.x;
    fVar8 = VStack_1.y;
    VStack_9 = VStack_1;
    uStack_10 = CONCAT44(uStack_10._4_4_,fVar6);
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_11.x = 0.0;
    VStack_11.y = 0.0;
    VStack_11.z = 0.0;
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_9,2,&VStack_11);
    fVar12 = _UNK_?;
    fVar13 = VStack_2.x;
    fVar14 = VStack_2.y;
    VStack_15.y = VStack_2.y * _UNK_? + fVar8;
    VStack_15.x = fVar7 - VStack_2.x * _UNK_?;
    VStack_15.z = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_16 = 0;
    uStack_17 = (ulonglong)(uint)uStack_17._4_4_ << 0x20;
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_15,2,&uStack_16);
    VStack_18.y = fVar8 - fVar14 * fVar12;
    VStack_18.x = fVar13 * fVar12 + fVar7;
    VStack_18.z = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    uStack_10 = uStack_10 & 0xffffffff00000000;
    pvVar3 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&VStack_18,2,&VStack_9);
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)camera,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar8 = VStack_9.x;
    fVar6 = VStack_9.y;
    fVar12 = (float)uStack_10;
    pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = (float)uStack_16;
    fVar14 = uStack_16._4_4_;
    fVar20 = VStack_9.x - (float)uStack_16;
    fVar21 = (float)uStack_17;
    fVar22 = VStack_9.y - uStack_16._4_4_;
    VStack_18.x = (pVVar19->oneVector).x;
    VStack_18.y = (pVVar19->oneVector).y;
    fVar23 = (float)uStack_10 - (float)uStack_17;
    fVar7 = (pVVar19->oneVector).z;
    if (this != (Transform *)0x0) {
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         (&VStack_18,this,(MethodInfo *)0x0);
      VStack_15.x = pVVar24->x;
      VStack_15.y = pVVar24->y;
      uStack_25 = CONCAT44((uint)VStack_15.y & _UNK_?,
                            (uint)(VStack_15.x * fVar20 + VStack_15.y * fVar22 +
                                  pVVar24->z * fVar23) & _UNK_?);
      uStack_26 = 0;
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                         (&VStack_18,this,(MethodInfo *)0x0);
      VStack_15.x = pVVar24->x;
      VStack_15.y = pVVar24->y;
      fVar8 = (float)((uint)((fVar6 - fVar14) * VStack_15.y + (fVar8 - fVar13) * VStack_15.x +
                             (fVar12 - fVar21) * pVVar24->z) & _UNK_?);
      pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_15,this,(MethodInfo *)0x0);
      VStack_18.x = pVVar24->x;
      VStack_18.y = pVVar24->y;
      VStack_18.z = pVVar24->z;
      VStack_9.x = 0.0;
      VStack_9.y = 0.0;
      uStack_10 = 0;
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
      (*pcRam_?)(rotationDegrees,&VStack_18,&VStack_9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_16 = 0;
      uStack_17 = 0;
      pvVar3 = (this->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3,&uStack_16);
      VStack_18.y = fVar8;
      VStack_18.x = (float)uStack_25;
      fStack_27 = ((uStack_17._4_4_ * uStack_10._4_4_ - (float)uStack_16 * VStack_9.x) -
                   uStack_16._4_4_ * VStack_9.y) - (float)uStack_17 * (float)uStack_10;
      VStack_15.z = VStack_11.z;
      VStack_15.x = VStack_11.x;
      VStack_15.y = VStack_11.y;
      uStack_25 = CONCAT44((uStack_16._4_4_ * uStack_10._4_4_ + uStack_17._4_4_ * VStack_9.y +
                            (float)uStack_16 * (float)uStack_10) -
                            (float)uStack_17 * VStack_9.x,
                            ((float)uStack_16 * uStack_10._4_4_ + uStack_17._4_4_ * VStack_9.x
                            + (float)uStack_17 * VStack_9.y) -
                            uStack_16._4_4_ * (float)uStack_10);
      uStack_26 = CONCAT44(fStack_27,
                            ((float)uStack_17 * uStack_10._4_4_ +
                             uStack_17._4_4_ * (float)uStack_10 + uStack_16._4_4_ * VStack_9.x)
                            - (float)uStack_16 * VStack_9.y);
      MStack_28.m00 = 0.0;
      MStack_28.m10 = 0.0;
      MStack_28.m20 = 0.0;
      MStack_28.m30 = 0.0;
      MStack_28.m01 = 0.0;
      MStack_28.m11 = 0.0;
      MStack_28.m21 = 0.0;
      MStack_28.m31 = 0.0;
      MStack_28.m02 = 0.0;
      MStack_28.m12 = 0.0;
      MStack_28.m22 = 0.0;
      MStack_28.m32 = 0.0;
      MStack_28.m03 = 0.0;
      MStack_28.m13 = 0.0;
      MStack_28.m23 = 0.0;
      MStack_28.m33 = 0.0;
      pcVar4 = pcRam_?;
      VStack_18.z = fVar7;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&VStack_15,&uStack_25,&VStack_18);
      if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (MeshPool *)
                Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                          (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
      if (this_00 != (MeshPool *)0x0) {
        mesh = MeshPool::MeshPool_get_UnitWireQuadXY(this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Graphics);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        aMStack_29[0].m00 = MStack_28.m00;
        aMStack_29[0].m10 = MStack_28.m10;
        aMStack_29[0].m20 = MStack_28.m20;
        aMStack_29[0].m30 = MStack_28.m30;
        aMStack_29[0].m01 = MStack_28.m01;
        aMStack_29[0].m11 = MStack_28.m11;
        aMStack_29[0].m21 = MStack_28.m21;
        aMStack_29[0].m31 = MStack_28.m31;
        aMStack_29[0].m02 = MStack_28.m02;
        aMStack_29[0].m12 = MStack_28.m12;
        aMStack_29[0].m22 = MStack_28.m22;
        aMStack_29[0].m32 = MStack_28.m32;
        aMStack_29[0].m03 = MStack_28.m03;
        aMStack_29[0].m13 = MStack_28.m13;
        aMStack_29[0].m23 = MStack_28.m23;
        aMStack_29[0].m33 = MStack_28.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                  (mesh,aMStack_29,-1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DrawWireBox(AABB) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireBox(AABB *box,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWireBox(this,(MethodInfo *)0x0);
    pMVar1 = AABB::AABB_GetUnitBoxTransform(&MStack_2,box,(MethodInfo *)0x0);
    uVar3._0_4_ = pMVar1->m00;
    uVar3._4_4_ = pMVar1->m10;
    uVar4._0_4_ = pMVar1->m20;
    uVar4._4_4_ = pMVar1->m30;
    uVar5._0_4_ = pMVar1->m01;
    uVar5._4_4_ = pMVar1->m11;
    uVar6._0_4_ = pMVar1->m21;
    uVar6._4_4_ = pMVar1->m31;
    uVar7._0_4_ = pMVar1->m02;
    uVar7._4_4_ = pMVar1->m12;
    uVar8._0_4_ = pMVar1->m22;
    uVar8._4_4_ = pMVar1->m32;
    uVar9._0_4_ = pMVar1->m03;
    uVar9._4_4_ = pMVar1->m13;
    uVar10._0_4_ = pMVar1->m23;
    uVar10._4_4_ = pMVar1->m33;
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Graphics);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    MStack_2._0_8_ = uVar3;
    MStack_2._8_8_ = uVar4;
    MStack_2._16_8_ = uVar5;
    MStack_2._24_8_ = uVar6;
    MStack_2._32_8_ = uVar7;
    MStack_2._40_8_ = uVar8;
    MStack_2._48_8_ = uVar9;
    MStack_2._56_8_ = uVar10;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,&MStack_2,-1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DrawWireBox(OBB) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireBox_1(OBB *box,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitWireBox(this,(MethodInfo *)0x0);
    pMVar1 = OBB::OBB_GetUnitBoxTransform(&MStack_2,box,(MethodInfo *)0x0);
    uVar3._0_4_ = pMVar1->m00;
    uVar3._4_4_ = pMVar1->m10;
    uVar4._0_4_ = pMVar1->m20;
    uVar4._4_4_ = pMVar1->m30;
    uVar5._0_4_ = pMVar1->m01;
    uVar5._4_4_ = pMVar1->m11;
    uVar6._0_4_ = pMVar1->m21;
    uVar6._4_4_ = pMVar1->m31;
    uVar7._0_4_ = pMVar1->m02;
    uVar7._4_4_ = pMVar1->m12;
    uVar8._0_4_ = pMVar1->m22;
    uVar8._4_4_ = pMVar1->m32;
    uVar9._0_4_ = pMVar1->m03;
    uVar9._4_4_ = pMVar1->m13;
    uVar10._0_4_ = pMVar1->m23;
    uVar10._4_4_ = pMVar1->m33;
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Graphics);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
      FUN_?();
    }
    MStack_2._0_8_ = uVar3;
    MStack_2._8_8_ = uVar4;
    MStack_2._16_8_ = uVar5;
    MStack_2._24_8_ = uVar6;
    MStack_2._32_8_ = uVar7;
    MStack_2._40_8_ = uVar8;
    MStack_2._48_8_ = uVar9;
    MStack_2._56_8_ = uVar10;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,&MStack_2,-1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DrawWireCornerBox(AABB, Single) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireCornerBox
               (AABB *box,float wireCornerLinePercentage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitCoordSystem(this,(MethodInfo *)0x0);
    pLVar1 = AABB::AABB_GetCornerPoints(box,(MethodInfo *)0x0);
    if (wireCornerLinePercentage < 0.0) {
      wireCornerLinePercentage = 0.0;
    }
    else if (_UNK_? < wireCornerLinePercentage) {
      wireCornerLinePercentage = _UNK_?;
    }
    uStack_2._0_4_ = (box->_size).x;
    uStack_2._4_4_ = (box->_size).y;
    fVar3 = (float)uStack_2._4_4_ * _UNK_? * wireCornerLinePercentage;
    fVar4 = (float)(undefined4)uStack_2 * _UNK_? * wireCornerLinePercentage;
    fVar5 = (box->_size).z * _UNK_? * wireCornerLinePercentage;
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      if ((uint)(pLVar1->fields)._size < 4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pVVar7 = (pLVar1->fields)._items;
      if (pVVar7 != (Vector3__Array *)0x0) {
        if (3 < (uint)pVVar7->max_length) {
          uVar8._0_4_ = pVVar7->vector[3].x;
          uVar8._4_4_ = pVVar7->vector[3].y;
          fVar9 = pVVar7->vector[3].z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_10 = CONCAT44(fVar3,fVar4);
          pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
          uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
          uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
          uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
          uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
          MStack_14.m00 = 0.0;
          MStack_14.m10 = 0.0;
          MStack_14.m20 = 0.0;
          MStack_14.m30 = 0.0;
          MStack_14.m01 = 0.0;
          MStack_14.m11 = 0.0;
          MStack_14.m21 = 0.0;
          MStack_14.m31 = 0.0;
          MStack_14.m02 = 0.0;
          MStack_14.m12 = 0.0;
          MStack_14.m22 = 0.0;
          MStack_14.m32 = 0.0;
          MStack_14.m03 = 0.0;
          MStack_14.m13 = 0.0;
          MStack_14.m23 = 0.0;
          MStack_14.m33 = 0.0;
          pcVar6 = pcRam_?;
          uStack_2 = uVar8;
          fStack_15 = fVar9;
          fStack_16 = fVar5;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(&uStack_2,&uStack_12,&uStack_10);
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Graphics);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          aMStack_17[0].m00 = MStack_14.m00;
          aMStack_17[0].m10 = MStack_14.m10;
          aMStack_17[0].m20 = MStack_14.m20;
          aMStack_17[0].m30 = MStack_14.m30;
          aMStack_17[0].m01 = MStack_14.m01;
          aMStack_17[0].m11 = MStack_14.m11;
          aMStack_17[0].m21 = MStack_14.m21;
          aMStack_17[0].m31 = MStack_14.m31;
          aMStack_17[0].m02 = MStack_14.m02;
          aMStack_17[0].m12 = MStack_14.m12;
          aMStack_17[0].m22 = MStack_14.m22;
          aMStack_17[0].m32 = MStack_14.m32;
          aMStack_17[0].m03 = MStack_14.m03;
          aMStack_17[0].m13 = MStack_14.m13;
          aMStack_17[0].m23 = MStack_14.m23;
          aMStack_17[0].m33 = MStack_14.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                    (mesh,aMStack_17,-1,(MethodInfo *)0x0);
          fVar9 = _UNK_?;
          if ((uint)(pLVar1->fields)._size < 3) goto code_?;
          pVVar7 = (pLVar1->fields)._items;
          if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
          if (2 < (uint)pVVar7->max_length) {
            uVar18._0_4_ = pVVar7->vector[2].x;
            uVar18._4_4_ = pVVar7->vector[2].y;
            fVar19 = pVVar7->vector[2].z;
            fVar20 = fVar4 * _UNK_?;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Quaternion);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_2 = CONCAT44(fVar3,fVar20);
            pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
            uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
            uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
            uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
            uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
            MStack_14.m00 = 0.0;
            MStack_14.m10 = 0.0;
            MStack_14.m20 = 0.0;
            MStack_14.m30 = 0.0;
            MStack_14.m01 = 0.0;
            MStack_14.m11 = 0.0;
            MStack_14.m21 = 0.0;
            MStack_14.m31 = 0.0;
            MStack_14.m02 = 0.0;
            MStack_14.m12 = 0.0;
            MStack_14.m22 = 0.0;
            MStack_14.m32 = 0.0;
            MStack_14.m03 = 0.0;
            MStack_14.m13 = 0.0;
            MStack_14.m23 = 0.0;
            MStack_14.m33 = 0.0;
            pcVar6 = pcRam_?;
            fStack_15 = fVar5;
            uStack_10 = uVar18;
            fStack_16 = fVar19;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Graphics);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
              FUN_?();
            }
            aMStack_17[0].m00 = MStack_14.m00;
            aMStack_17[0].m10 = MStack_14.m10;
            aMStack_17[0].m20 = MStack_14.m20;
            aMStack_17[0].m30 = MStack_14.m30;
            aMStack_17[0].m01 = MStack_14.m01;
            aMStack_17[0].m11 = MStack_14.m11;
            aMStack_17[0].m21 = MStack_14.m21;
            aMStack_17[0].m31 = MStack_14.m31;
            aMStack_17[0].m02 = MStack_14.m02;
            aMStack_17[0].m12 = MStack_14.m12;
            aMStack_17[0].m22 = MStack_14.m22;
            aMStack_17[0].m32 = MStack_14.m32;
            aMStack_17[0].m03 = MStack_14.m03;
            aMStack_17[0].m13 = MStack_14.m13;
            aMStack_17[0].m23 = MStack_14.m23;
            aMStack_17[0].m33 = MStack_14.m33;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                      (mesh,aMStack_17,-1,(MethodInfo *)0x0);
            if ((uint)(pLVar1->fields)._size < 2) goto code_?;
            pVVar7 = (pLVar1->fields)._items;
            if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
            if (1 < (uint)pVVar7->max_length) {
              fVar19 = pVVar7->vector[1].z;
              uVar21._0_4_ = pVVar7->vector[1].x;
              uVar21._4_4_ = pVVar7->vector[1].y;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Quaternion);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_2 = CONCAT44(fVar3 * fVar9,fVar20);
              pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
              uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
              uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
              uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
              uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
              MStack_14.m00 = 0.0;
              MStack_14.m10 = 0.0;
              MStack_14.m20 = 0.0;
              MStack_14.m30 = 0.0;
              MStack_14.m01 = 0.0;
              MStack_14.m11 = 0.0;
              MStack_14.m21 = 0.0;
              MStack_14.m31 = 0.0;
              MStack_14.m02 = 0.0;
              MStack_14.m12 = 0.0;
              MStack_14.m22 = 0.0;
              MStack_14.m32 = 0.0;
              MStack_14.m03 = 0.0;
              MStack_14.m13 = 0.0;
              MStack_14.m23 = 0.0;
              MStack_14.m33 = 0.0;
              pcVar6 = pcRam_?;
              fStack_15 = fVar5;
              uStack_10 = uVar21;
              fStack_16 = fVar19;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Graphics);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                FUN_?();
              }
              aMStack_17[0].m00 = MStack_14.m00;
              aMStack_17[0].m10 = MStack_14.m10;
              aMStack_17[0].m20 = MStack_14.m20;
              aMStack_17[0].m30 = MStack_14.m30;
              aMStack_17[0].m01 = MStack_14.m01;
              aMStack_17[0].m11 = MStack_14.m11;
              aMStack_17[0].m21 = MStack_14.m21;
              aMStack_17[0].m31 = MStack_14.m31;
              aMStack_17[0].m02 = MStack_14.m02;
              aMStack_17[0].m12 = MStack_14.m12;
              aMStack_17[0].m22 = MStack_14.m22;
              aMStack_17[0].m32 = MStack_14.m32;
              aMStack_17[0].m03 = MStack_14.m03;
              aMStack_17[0].m13 = MStack_14.m13;
              aMStack_17[0].m23 = MStack_14.m23;
              aMStack_17[0].m33 = MStack_14.m33;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                        (mesh,aMStack_17,-1,(MethodInfo *)0x0);
              if ((pLVar1->fields)._size == 0) goto code_?;
              pVVar7 = (pLVar1->fields)._items;
              if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar7->max_length != 0) {
                uVar22._0_4_ = pVVar7->vector[0].x;
                uVar22._4_4_ = pVVar7->vector[0].y;
                fVar19 = pVVar7->vector[0].z;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Quaternion);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_2 = CONCAT44(fVar3 * fVar9,fVar4);
                pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
                uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
                uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
                uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
                uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
                MStack_14.m00 = 0.0;
                MStack_14.m10 = 0.0;
                MStack_14.m20 = 0.0;
                MStack_14.m30 = 0.0;
                MStack_14.m01 = 0.0;
                MStack_14.m11 = 0.0;
                MStack_14.m21 = 0.0;
                MStack_14.m31 = 0.0;
                MStack_14.m02 = 0.0;
                MStack_14.m12 = 0.0;
                MStack_14.m22 = 0.0;
                MStack_14.m32 = 0.0;
                MStack_14.m03 = 0.0;
                MStack_14.m13 = 0.0;
                MStack_14.m23 = 0.0;
                MStack_14.m33 = 0.0;
                pcVar6 = pcRam_?;
                fStack_15 = fVar5;
                uStack_10 = uVar22;
                fStack_16 = fVar19;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Graphics);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aMStack_17[0].m00 = MStack_14.m00;
                aMStack_17[0].m10 = MStack_14.m10;
                aMStack_17[0].m20 = MStack_14.m20;
                aMStack_17[0].m30 = MStack_14.m30;
                aMStack_17[0].m01 = MStack_14.m01;
                aMStack_17[0].m11 = MStack_14.m11;
                aMStack_17[0].m21 = MStack_14.m21;
                aMStack_17[0].m31 = MStack_14.m31;
                aMStack_17[0].m02 = MStack_14.m02;
                aMStack_17[0].m12 = MStack_14.m12;
                aMStack_17[0].m22 = MStack_14.m22;
                aMStack_17[0].m32 = MStack_14.m32;
                aMStack_17[0].m03 = MStack_14.m03;
                aMStack_17[0].m13 = MStack_14.m13;
                aMStack_17[0].m23 = MStack_14.m23;
                aMStack_17[0].m33 = MStack_14.m33;
                UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                          (mesh,aMStack_17,-1,(MethodInfo *)0x0);
                if ((uint)(pLVar1->fields)._size < 8) goto code_?;
                pVVar7 = (pLVar1->fields)._items;
                if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                if (7 < (uint)pVVar7->max_length) {
                  uVar23._0_4_ = pVVar7->vector[7].x;
                  uVar23._4_4_ = pVVar7->vector[7].y;
                  fVar19 = pVVar7->vector[7].z;
                  fVar5 = fVar5 * fVar9;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Quaternion);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_2 = CONCAT44(fVar3,fVar4 * fVar9);
                  pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
                  uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
                  uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
                  uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
                  uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
                  MStack_14.m00 = 0.0;
                  MStack_14.m10 = 0.0;
                  MStack_14.m20 = 0.0;
                  MStack_14.m30 = 0.0;
                  MStack_14.m01 = 0.0;
                  MStack_14.m11 = 0.0;
                  MStack_14.m21 = 0.0;
                  MStack_14.m31 = 0.0;
                  MStack_14.m02 = 0.0;
                  MStack_14.m12 = 0.0;
                  MStack_14.m22 = 0.0;
                  MStack_14.m32 = 0.0;
                  MStack_14.m03 = 0.0;
                  MStack_14.m13 = 0.0;
                  MStack_14.m23 = 0.0;
                  MStack_14.m33 = 0.0;
                  pcVar6 = pcRam_?;
                  fStack_15 = fVar5;
                  uStack_10 = uVar23;
                  fStack_16 = fVar19;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Graphics);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  aMStack_17[0].m00 = MStack_14.m00;
                  aMStack_17[0].m10 = MStack_14.m10;
                  aMStack_17[0].m20 = MStack_14.m20;
                  aMStack_17[0].m30 = MStack_14.m30;
                  aMStack_17[0].m01 = MStack_14.m01;
                  aMStack_17[0].m11 = MStack_14.m11;
                  aMStack_17[0].m21 = MStack_14.m21;
                  aMStack_17[0].m31 = MStack_14.m31;
                  aMStack_17[0].m02 = MStack_14.m02;
                  aMStack_17[0].m12 = MStack_14.m12;
                  aMStack_17[0].m22 = MStack_14.m22;
                  aMStack_17[0].m32 = MStack_14.m32;
                  aMStack_17[0].m03 = MStack_14.m03;
                  aMStack_17[0].m13 = MStack_14.m13;
                  aMStack_17[0].m23 = MStack_14.m23;
                  aMStack_17[0].m33 = MStack_14.m33;
                  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                            (mesh,aMStack_17,-1,(MethodInfo *)0x0);
                  if ((uint)(pLVar1->fields)._size < 7) goto code_?;
                  pVVar7 = (pLVar1->fields)._items;
                  if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                  if (6 < (uint)pVVar7->max_length) {
                    uVar24._0_4_ = pVVar7->vector[6].x;
                    uVar24._4_4_ = pVVar7->vector[6].y;
                    fVar19 = pVVar7->vector[6].z;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Quaternion);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    uStack_2 = CONCAT44(fVar3,fVar4);
                    pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
                    uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
                    uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
                    uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
                    uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
                    MStack_14.m00 = 0.0;
                    MStack_14.m10 = 0.0;
                    MStack_14.m20 = 0.0;
                    MStack_14.m30 = 0.0;
                    MStack_14.m01 = 0.0;
                    MStack_14.m11 = 0.0;
                    MStack_14.m21 = 0.0;
                    MStack_14.m31 = 0.0;
                    MStack_14.m02 = 0.0;
                    MStack_14.m12 = 0.0;
                    MStack_14.m22 = 0.0;
                    MStack_14.m32 = 0.0;
                    MStack_14.m03 = 0.0;
                    MStack_14.m13 = 0.0;
                    MStack_14.m23 = 0.0;
                    MStack_14.m33 = 0.0;
                    pcVar6 = pcRam_?;
                    fStack_15 = fVar5;
                    uStack_10 = uVar24;
                    fStack_16 = fVar19;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcRam_? = pcVar6;
                    (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Graphics);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    aMStack_17[0].m00 = MStack_14.m00;
                    aMStack_17[0].m10 = MStack_14.m10;
                    aMStack_17[0].m20 = MStack_14.m20;
                    aMStack_17[0].m30 = MStack_14.m30;
                    aMStack_17[0].m01 = MStack_14.m01;
                    aMStack_17[0].m11 = MStack_14.m11;
                    aMStack_17[0].m21 = MStack_14.m21;
                    aMStack_17[0].m31 = MStack_14.m31;
                    aMStack_17[0].m02 = MStack_14.m02;
                    aMStack_17[0].m12 = MStack_14.m12;
                    aMStack_17[0].m22 = MStack_14.m22;
                    aMStack_17[0].m32 = MStack_14.m32;
                    aMStack_17[0].m03 = MStack_14.m03;
                    aMStack_17[0].m13 = MStack_14.m13;
                    aMStack_17[0].m23 = MStack_14.m23;
                    aMStack_17[0].m33 = MStack_14.m33;
                    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                              (mesh,aMStack_17,-1,(MethodInfo *)0x0);
                    if ((uint)(pLVar1->fields)._size < 6) goto code_?;
                    pVVar7 = (pLVar1->fields)._items;
                    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                    if (5 < (uint)pVVar7->max_length) {
                      uVar25._0_4_ = pVVar7->vector[5].x;
                      uVar25._4_4_ = pVVar7->vector[5].y;
                      fVar19 = pVVar7->vector[5].z;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Quaternion);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_2 = CONCAT44(fVar3 * fVar9,fVar4);
                      pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
                      uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
                      uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
                      uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
                      uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
                      MStack_14.m00 = 0.0;
                      MStack_14.m10 = 0.0;
                      MStack_14.m20 = 0.0;
                      MStack_14.m30 = 0.0;
                      MStack_14.m01 = 0.0;
                      MStack_14.m11 = 0.0;
                      MStack_14.m21 = 0.0;
                      MStack_14.m31 = 0.0;
                      MStack_14.m02 = 0.0;
                      MStack_14.m12 = 0.0;
                      MStack_14.m22 = 0.0;
                      MStack_14.m32 = 0.0;
                      MStack_14.m03 = 0.0;
                      MStack_14.m13 = 0.0;
                      MStack_14.m23 = 0.0;
                      MStack_14.m33 = 0.0;
                      pcVar6 = pcRam_?;
                      fStack_15 = fVar5;
                      uStack_10 = uVar25;
                      fStack_16 = fVar19;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Graphics);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aMStack_17[0].m00 = MStack_14.m00;
                      aMStack_17[0].m10 = MStack_14.m10;
                      aMStack_17[0].m20 = MStack_14.m20;
                      aMStack_17[0].m30 = MStack_14.m30;
                      aMStack_17[0].m01 = MStack_14.m01;
                      aMStack_17[0].m11 = MStack_14.m11;
                      aMStack_17[0].m21 = MStack_14.m21;
                      aMStack_17[0].m31 = MStack_14.m31;
                      aMStack_17[0].m02 = MStack_14.m02;
                      aMStack_17[0].m12 = MStack_14.m12;
                      aMStack_17[0].m22 = MStack_14.m22;
                      aMStack_17[0].m32 = MStack_14.m32;
                      aMStack_17[0].m03 = MStack_14.m03;
                      aMStack_17[0].m13 = MStack_14.m13;
                      aMStack_17[0].m23 = MStack_14.m23;
                      aMStack_17[0].m33 = MStack_14.m33;
                      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                                (mesh,aMStack_17,-1,(MethodInfo *)0x0);
                      if ((uint)(pLVar1->fields)._size < 5) goto code_?;
                      pVVar7 = (pLVar1->fields)._items;
                      if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                      if (4 < (uint)pVVar7->max_length) {
                        uVar26._0_4_ = pVVar7->vector[4].x;
                        uVar26._4_4_ = pVVar7->vector[4].y;
                        fVar19 = pVVar7->vector[4].z;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Quaternion);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        uStack_2 = CONCAT44(fVar3 * fVar9,fVar4 * fVar9);
                        pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
                        uStack_12._0_4_ = (pQVar11->identityQuaternion).x;
                        uStack_12._4_4_ = (pQVar11->identityQuaternion).y;
                        uStack_13._0_4_ = (pQVar11->identityQuaternion).z;
                        uStack_13._4_4_ = (pQVar11->identityQuaternion).w;
                        MStack_14.m00 = 0.0;
                        MStack_14.m10 = 0.0;
                        MStack_14.m20 = 0.0;
                        MStack_14.m30 = 0.0;
                        MStack_14.m01 = 0.0;
                        MStack_14.m11 = 0.0;
                        MStack_14.m21 = 0.0;
                        MStack_14.m31 = 0.0;
                        MStack_14.m02 = 0.0;
                        MStack_14.m12 = 0.0;
                        MStack_14.m22 = 0.0;
                        MStack_14.m32 = 0.0;
                        MStack_14.m03 = 0.0;
                        MStack_14.m13 = 0.0;
                        MStack_14.m23 = 0.0;
                        MStack_14.m33 = 0.0;
                        pcVar6 = pcRam_?;
                        fStack_15 = fVar5;
                        uStack_10 = uVar26;
                        fStack_16 = fVar19;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)
                           ) {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcRam_? = pcVar6;
                        (*pcRam_?)(&uStack_10,&uStack_12,&uStack_2);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Graphics);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        aMStack_17[0].m00 = MStack_14.m00;
                        aMStack_17[0].m10 = MStack_14.m10;
                        aMStack_17[0].m20 = MStack_14.m20;
                        aMStack_17[0].m30 = MStack_14.m30;
                        aMStack_17[0].m01 = MStack_14.m01;
                        aMStack_17[0].m11 = MStack_14.m11;
                        aMStack_17[0].m21 = MStack_14.m21;
                        aMStack_17[0].m31 = MStack_14.m31;
                        aMStack_17[0].m02 = MStack_14.m02;
                        aMStack_17[0].m12 = MStack_14.m12;
                        aMStack_17[0].m22 = MStack_14.m22;
                        aMStack_17[0].m32 = MStack_14.m32;
                        aMStack_17[0].m03 = MStack_14.m03;
                        aMStack_17[0].m13 = MStack_14.m13;
                        aMStack_17[0].m23 = MStack_14.m23;
                        aMStack_17[0].m33 = MStack_14.m33;
                        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                                  (mesh,aMStack_17,-1,(MethodInfo *)0x0);
                        return;
                      }
                    }
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
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DrawWireCornerBox(OBB, Single) */

void Assembly-CSharp.dll::RTG::GraphicsEx::GraphicsEx_DrawWireCornerBox_1
               (OBB *box,float wireCornerLinePercentage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = (MeshPool *)
         Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                   (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (this != (MeshPool *)0x0) {
    mesh = MeshPool::MeshPool_get_UnitCoordSystem(this,(MethodInfo *)0x0);
    pLVar1 = OBB::OBB_GetCornerPoints(box,(MethodInfo *)0x0);
    if (wireCornerLinePercentage < 0.0) {
      wireCornerLinePercentage = 0.0;
    }
    else if (_UNK_? < wireCornerLinePercentage) {
      wireCornerLinePercentage = _UNK_?;
    }
    uStack_2._0_4_ = (box->_size).x;
    uStack_2._4_4_ = (box->_size).y;
    fVar3 = (float)uStack_2._4_4_ * _UNK_? * wireCornerLinePercentage;
    fVar4 = (float)(undefined4)uStack_2 * _UNK_? * wireCornerLinePercentage;
    fVar5 = (box->_size).z * _UNK_? * wireCornerLinePercentage;
    if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
      if ((uint)(pLVar1->fields)._size < 4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pVVar7 = (pLVar1->fields)._items;
      if (pVVar7 != (Vector3__Array *)0x0) {
        if (3 < (uint)pVVar7->max_length) {
          uStack_2._0_4_ = pVVar7->vector[3].x;
          uStack_2._4_4_ = pVVar7->vector[3].y;
          fStack_8 = pVVar7->vector[3].z;
          uStack_9 = CONCAT44(fVar3,fVar4);
          uStack_10 = CONCAT44(fVar3,fVar4);
          uStack_11._0_4_ = (box->_rotation).x;
          uStack_11._4_4_ = (box->_rotation).y;
          uStack_12._0_4_ = (box->_rotation).z;
          uStack_12._4_4_ = (box->_rotation).w;
          MStack_13.m00 = 0.0;
          MStack_13.m10 = 0.0;
          MStack_13.m20 = 0.0;
          MStack_13.m30 = 0.0;
          MStack_13.m01 = 0.0;
          MStack_13.m11 = 0.0;
          MStack_13.m21 = 0.0;
          MStack_13.m31 = 0.0;
          MStack_13.m02 = 0.0;
          MStack_13.m12 = 0.0;
          MStack_13.m22 = 0.0;
          MStack_13.m32 = 0.0;
          MStack_13.m03 = 0.0;
          MStack_13.m13 = 0.0;
          MStack_13.m23 = 0.0;
          MStack_13.m33 = 0.0;
          pcVar6 = pcRam_?;
          fStack_14 = fVar5;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar15 = func_?(&UNK_?);
            FUN_?(uVar15,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(&uStack_2,&uStack_11,&uStack_10);
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Graphics);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
            FUN_?();
          }
          aMStack_16[0].m00 = MStack_13.m00;
          aMStack_16[0].m10 = MStack_13.m10;
          aMStack_16[0].m20 = MStack_13.m20;
          aMStack_16[0].m30 = MStack_13.m30;
          aMStack_16[0].m01 = MStack_13.m01;
          aMStack_16[0].m11 = MStack_13.m11;
          aMStack_16[0].m21 = MStack_13.m21;
          aMStack_16[0].m31 = MStack_13.m31;
          aMStack_16[0].m02 = MStack_13.m02;
          aMStack_16[0].m12 = MStack_13.m12;
          aMStack_16[0].m22 = MStack_13.m22;
          aMStack_16[0].m32 = MStack_13.m32;
          aMStack_16[0].m03 = MStack_13.m03;
          aMStack_16[0].m13 = MStack_13.m13;
          aMStack_16[0].m23 = MStack_13.m23;
          aMStack_16[0].m33 = MStack_13.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                    (mesh,aMStack_16,-1,(MethodInfo *)0x0);
          fVar17 = _UNK_?;
          if ((uint)(pLVar1->fields)._size < 3) goto code_?;
          pVVar7 = (pLVar1->fields)._items;
          if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
          if (2 < (uint)pVVar7->max_length) {
            uVar18 = (undefined4)((ulonglong)uStack_9 >> 0x20);
            uStack_10._0_4_ = pVVar7->vector[2].x;
            uStack_10._4_4_ = pVVar7->vector[2].y;
            fStack_14 = pVVar7->vector[2].z;
            uStack_9 = CONCAT44(uVar18,fVar4 * _UNK_?);
            uStack_2 = CONCAT44(uVar18,fVar4 * _UNK_?);
            uStack_11._0_4_ = (box->_rotation).x;
            uStack_11._4_4_ = (box->_rotation).y;
            uStack_12._0_4_ = (box->_rotation).z;
            uStack_12._4_4_ = (box->_rotation).w;
            MStack_13.m00 = 0.0;
            MStack_13.m10 = 0.0;
            MStack_13.m20 = 0.0;
            MStack_13.m30 = 0.0;
            MStack_13.m01 = 0.0;
            MStack_13.m11 = 0.0;
            MStack_13.m21 = 0.0;
            MStack_13.m31 = 0.0;
            MStack_13.m02 = 0.0;
            MStack_13.m12 = 0.0;
            MStack_13.m22 = 0.0;
            MStack_13.m32 = 0.0;
            MStack_13.m03 = 0.0;
            MStack_13.m13 = 0.0;
            MStack_13.m23 = 0.0;
            MStack_13.m33 = 0.0;
            pcVar6 = pcRam_?;
            fStack_8 = fVar5;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Graphics);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
              FUN_?();
            }
            aMStack_16[0].m00 = MStack_13.m00;
            aMStack_16[0].m10 = MStack_13.m10;
            aMStack_16[0].m20 = MStack_13.m20;
            aMStack_16[0].m30 = MStack_13.m30;
            aMStack_16[0].m01 = MStack_13.m01;
            aMStack_16[0].m11 = MStack_13.m11;
            aMStack_16[0].m21 = MStack_13.m21;
            aMStack_16[0].m31 = MStack_13.m31;
            aMStack_16[0].m02 = MStack_13.m02;
            aMStack_16[0].m12 = MStack_13.m12;
            aMStack_16[0].m22 = MStack_13.m22;
            aMStack_16[0].m32 = MStack_13.m32;
            aMStack_16[0].m03 = MStack_13.m03;
            aMStack_16[0].m13 = MStack_13.m13;
            aMStack_16[0].m23 = MStack_13.m23;
            aMStack_16[0].m33 = MStack_13.m33;
            UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                      (mesh,aMStack_16,-1,(MethodInfo *)0x0);
            if ((uint)(pLVar1->fields)._size < 2) goto code_?;
            pVVar7 = (pLVar1->fields)._items;
            if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
            if (1 < (uint)pVVar7->max_length) {
              uVar18 = (undefined4)uStack_9;
              uStack_11._0_4_ = (box->_rotation).x;
              uStack_11._4_4_ = (box->_rotation).y;
              uStack_12._0_4_ = (box->_rotation).z;
              uStack_12._4_4_ = (box->_rotation).w;
              uStack_9 = CONCAT44(fVar3 * fVar17,uVar18);
              uStack_2 = CONCAT44(fVar3 * fVar17,uVar18);
              uStack_10._0_4_ = pVVar7->vector[1].x;
              uStack_10._4_4_ = pVVar7->vector[1].y;
              fStack_14 = pVVar7->vector[1].z;
              MStack_13.m00 = 0.0;
              MStack_13.m10 = 0.0;
              MStack_13.m20 = 0.0;
              MStack_13.m30 = 0.0;
              MStack_13.m01 = 0.0;
              MStack_13.m11 = 0.0;
              MStack_13.m21 = 0.0;
              MStack_13.m31 = 0.0;
              MStack_13.m02 = 0.0;
              MStack_13.m12 = 0.0;
              MStack_13.m22 = 0.0;
              MStack_13.m32 = 0.0;
              MStack_13.m03 = 0.0;
              MStack_13.m13 = 0.0;
              MStack_13.m23 = 0.0;
              MStack_13.m33 = 0.0;
              pcVar6 = pcRam_?;
              fStack_8 = fVar5;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar15 = func_?(&UNK_?);
                FUN_?(uVar15,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Graphics);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                FUN_?();
              }
              aMStack_16[0].m00 = MStack_13.m00;
              aMStack_16[0].m10 = MStack_13.m10;
              aMStack_16[0].m20 = MStack_13.m20;
              aMStack_16[0].m30 = MStack_13.m30;
              aMStack_16[0].m01 = MStack_13.m01;
              aMStack_16[0].m11 = MStack_13.m11;
              aMStack_16[0].m21 = MStack_13.m21;
              aMStack_16[0].m31 = MStack_13.m31;
              aMStack_16[0].m02 = MStack_13.m02;
              aMStack_16[0].m12 = MStack_13.m12;
              aMStack_16[0].m22 = MStack_13.m22;
              aMStack_16[0].m32 = MStack_13.m32;
              aMStack_16[0].m03 = MStack_13.m03;
              aMStack_16[0].m13 = MStack_13.m13;
              aMStack_16[0].m23 = MStack_13.m23;
              aMStack_16[0].m33 = MStack_13.m33;
              UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                        (mesh,aMStack_16,-1,(MethodInfo *)0x0);
              if ((pLVar1->fields)._size == 0) goto code_?;
              pVVar7 = (pLVar1->fields)._items;
              if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
              if ((int)pVVar7->max_length != 0) {
                uStack_10._0_4_ = pVVar7->vector[0].x;
                uStack_10._4_4_ = pVVar7->vector[0].y;
                uVar18 = (undefined4)((ulonglong)uStack_9 >> 0x20);
                fStack_14 = pVVar7->vector[0].z;
                uStack_9 = CONCAT44(uVar18,fVar4);
                uStack_2 = CONCAT44(uVar18,fVar4);
                uStack_11._0_4_ = (box->_rotation).x;
                uStack_11._4_4_ = (box->_rotation).y;
                uStack_12._0_4_ = (box->_rotation).z;
                uStack_12._4_4_ = (box->_rotation).w;
                MStack_13.m00 = 0.0;
                MStack_13.m10 = 0.0;
                MStack_13.m20 = 0.0;
                MStack_13.m30 = 0.0;
                MStack_13.m01 = 0.0;
                MStack_13.m11 = 0.0;
                MStack_13.m21 = 0.0;
                MStack_13.m31 = 0.0;
                MStack_13.m02 = 0.0;
                MStack_13.m12 = 0.0;
                MStack_13.m22 = 0.0;
                MStack_13.m32 = 0.0;
                MStack_13.m03 = 0.0;
                MStack_13.m13 = 0.0;
                MStack_13.m23 = 0.0;
                MStack_13.m33 = 0.0;
                pcVar6 = pcRam_?;
                fStack_8 = fVar5;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar15 = func_?(&UNK_?);
                  FUN_?(uVar15,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Graphics);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aMStack_16[0].m00 = MStack_13.m00;
                aMStack_16[0].m10 = MStack_13.m10;
                aMStack_16[0].m20 = MStack_13.m20;
                aMStack_16[0].m30 = MStack_13.m30;
                aMStack_16[0].m01 = MStack_13.m01;
                aMStack_16[0].m11 = MStack_13.m11;
                aMStack_16[0].m21 = MStack_13.m21;
                aMStack_16[0].m31 = MStack_13.m31;
                aMStack_16[0].m02 = MStack_13.m02;
                aMStack_16[0].m12 = MStack_13.m12;
                aMStack_16[0].m22 = MStack_13.m22;
                aMStack_16[0].m32 = MStack_13.m32;
                aMStack_16[0].m03 = MStack_13.m03;
                aMStack_16[0].m13 = MStack_13.m13;
                aMStack_16[0].m23 = MStack_13.m23;
                aMStack_16[0].m33 = MStack_13.m33;
                UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                          (mesh,aMStack_16,-1,(MethodInfo *)0x0);
                if ((uint)(pLVar1->fields)._size < 8) goto code_?;
                pVVar7 = (pLVar1->fields)._items;
                if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                if (7 < (uint)pVVar7->max_length) {
                  uStack_10._0_4_ = pVVar7->vector[7].x;
                  uStack_10._4_4_ = pVVar7->vector[7].y;
                  fStack_14 = pVVar7->vector[7].z;
                  fVar5 = fVar5 * fVar17;
                  uStack_9 = CONCAT44(fVar3,fVar4 * fVar17);
                  uStack_2 = CONCAT44(fVar3,fVar4 * fVar17);
                  uStack_11._0_4_ = (box->_rotation).x;
                  uStack_11._4_4_ = (box->_rotation).y;
                  uStack_12._0_4_ = (box->_rotation).z;
                  uStack_12._4_4_ = (box->_rotation).w;
                  MStack_13.m00 = 0.0;
                  MStack_13.m10 = 0.0;
                  MStack_13.m20 = 0.0;
                  MStack_13.m30 = 0.0;
                  MStack_13.m01 = 0.0;
                  MStack_13.m11 = 0.0;
                  MStack_13.m21 = 0.0;
                  MStack_13.m31 = 0.0;
                  MStack_13.m02 = 0.0;
                  MStack_13.m12 = 0.0;
                  MStack_13.m22 = 0.0;
                  MStack_13.m32 = 0.0;
                  MStack_13.m03 = 0.0;
                  MStack_13.m13 = 0.0;
                  MStack_13.m23 = 0.0;
                  MStack_13.m33 = 0.0;
                  pcVar6 = pcRam_?;
                  fStack_8 = fVar5;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar15 = func_?(&UNK_?);
                    FUN_?(uVar15,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Graphics);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  aMStack_16[0].m00 = MStack_13.m00;
                  aMStack_16[0].m10 = MStack_13.m10;
                  aMStack_16[0].m20 = MStack_13.m20;
                  aMStack_16[0].m30 = MStack_13.m30;
                  aMStack_16[0].m01 = MStack_13.m01;
                  aMStack_16[0].m11 = MStack_13.m11;
                  aMStack_16[0].m21 = MStack_13.m21;
                  aMStack_16[0].m31 = MStack_13.m31;
                  aMStack_16[0].m02 = MStack_13.m02;
                  aMStack_16[0].m12 = MStack_13.m12;
                  aMStack_16[0].m22 = MStack_13.m22;
                  aMStack_16[0].m32 = MStack_13.m32;
                  aMStack_16[0].m03 = MStack_13.m03;
                  aMStack_16[0].m13 = MStack_13.m13;
                  aMStack_16[0].m23 = MStack_13.m23;
                  aMStack_16[0].m33 = MStack_13.m33;
                  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                            (mesh,aMStack_16,-1,(MethodInfo *)0x0);
                  if ((uint)(pLVar1->fields)._size < 7) goto code_?;
                  pVVar7 = (pLVar1->fields)._items;
                  if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                  if (6 < (uint)pVVar7->max_length) {
                    uStack_10._0_4_ = pVVar7->vector[6].x;
                    uStack_10._4_4_ = pVVar7->vector[6].y;
                    uVar18 = (undefined4)((ulonglong)uStack_9 >> 0x20);
                    fStack_14 = pVVar7->vector[6].z;
                    uStack_9 = CONCAT44(uVar18,fVar4);
                    uStack_2 = CONCAT44(uVar18,fVar4);
                    uStack_11._0_4_ = (box->_rotation).x;
                    uStack_11._4_4_ = (box->_rotation).y;
                    uStack_12._0_4_ = (box->_rotation).z;
                    uStack_12._4_4_ = (box->_rotation).w;
                    MStack_13.m00 = 0.0;
                    MStack_13.m10 = 0.0;
                    MStack_13.m20 = 0.0;
                    MStack_13.m30 = 0.0;
                    MStack_13.m01 = 0.0;
                    MStack_13.m11 = 0.0;
                    MStack_13.m21 = 0.0;
                    MStack_13.m31 = 0.0;
                    MStack_13.m02 = 0.0;
                    MStack_13.m12 = 0.0;
                    MStack_13.m22 = 0.0;
                    MStack_13.m32 = 0.0;
                    MStack_13.m03 = 0.0;
                    MStack_13.m13 = 0.0;
                    MStack_13.m23 = 0.0;
                    MStack_13.m33 = 0.0;
                    pcVar6 = pcRam_?;
                    fStack_8 = fVar5;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                      uVar15 = func_?(&UNK_?);
                      FUN_?(uVar15,0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcRam_? = pcVar6;
                    (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Graphics);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    aMStack_16[0].m00 = MStack_13.m00;
                    aMStack_16[0].m10 = MStack_13.m10;
                    aMStack_16[0].m20 = MStack_13.m20;
                    aMStack_16[0].m30 = MStack_13.m30;
                    aMStack_16[0].m01 = MStack_13.m01;
                    aMStack_16[0].m11 = MStack_13.m11;
                    aMStack_16[0].m21 = MStack_13.m21;
                    aMStack_16[0].m31 = MStack_13.m31;
                    aMStack_16[0].m02 = MStack_13.m02;
                    aMStack_16[0].m12 = MStack_13.m12;
                    aMStack_16[0].m22 = MStack_13.m22;
                    aMStack_16[0].m32 = MStack_13.m32;
                    aMStack_16[0].m03 = MStack_13.m03;
                    aMStack_16[0].m13 = MStack_13.m13;
                    aMStack_16[0].m23 = MStack_13.m23;
                    aMStack_16[0].m33 = MStack_13.m33;
                    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                              (mesh,aMStack_16,-1,(MethodInfo *)0x0);
                    if ((uint)(pLVar1->fields)._size < 6) goto code_?;
                    pVVar7 = (pLVar1->fields)._items;
                    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                    if (5 < (uint)pVVar7->max_length) {
                      uVar18 = (undefined4)uStack_9;
                      uStack_10._0_4_ = pVVar7->vector[5].x;
                      uStack_10._4_4_ = pVVar7->vector[5].y;
                      fStack_14 = pVVar7->vector[5].z;
                      uStack_9 = CONCAT44(fVar3 * fVar17,uVar18);
                      uStack_2 = CONCAT44(fVar3 * fVar17,uVar18);
                      uStack_11._0_4_ = (box->_rotation).x;
                      uStack_11._4_4_ = (box->_rotation).y;
                      uStack_12._0_4_ = (box->_rotation).z;
                      uStack_12._4_4_ = (box->_rotation).w;
                      MStack_13.m00 = 0.0;
                      MStack_13.m10 = 0.0;
                      MStack_13.m20 = 0.0;
                      MStack_13.m30 = 0.0;
                      MStack_13.m01 = 0.0;
                      MStack_13.m11 = 0.0;
                      MStack_13.m21 = 0.0;
                      MStack_13.m31 = 0.0;
                      MStack_13.m02 = 0.0;
                      MStack_13.m12 = 0.0;
                      MStack_13.m22 = 0.0;
                      MStack_13.m32 = 0.0;
                      MStack_13.m03 = 0.0;
                      MStack_13.m13 = 0.0;
                      MStack_13.m23 = 0.0;
                      MStack_13.m33 = 0.0;
                      pcVar6 = pcRam_?;
                      fStack_8 = fVar5;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                        uVar15 = func_?(&UNK_?);
                        FUN_?(uVar15,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Graphics);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aMStack_16[0].m00 = MStack_13.m00;
                      aMStack_16[0].m10 = MStack_13.m10;
                      aMStack_16[0].m20 = MStack_13.m20;
                      aMStack_16[0].m30 = MStack_13.m30;
                      aMStack_16[0].m01 = MStack_13.m01;
                      aMStack_16[0].m11 = MStack_13.m11;
                      aMStack_16[0].m21 = MStack_13.m21;
                      aMStack_16[0].m31 = MStack_13.m31;
                      aMStack_16[0].m02 = MStack_13.m02;
                      aMStack_16[0].m12 = MStack_13.m12;
                      aMStack_16[0].m22 = MStack_13.m22;
                      aMStack_16[0].m32 = MStack_13.m32;
                      aMStack_16[0].m03 = MStack_13.m03;
                      aMStack_16[0].m13 = MStack_13.m13;
                      aMStack_16[0].m23 = MStack_13.m23;
                      aMStack_16[0].m33 = MStack_13.m33;
                      UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                                (mesh,aMStack_16,-1,(MethodInfo *)0x0);
                      if ((uint)(pLVar1->fields)._size < 5) goto code_?;
                      pVVar7 = (pLVar1->fields)._items;
                      if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                      if (4 < (uint)pVVar7->max_length) {
                        uStack_10._0_4_ = pVVar7->vector[4].x;
                        uStack_10._4_4_ = pVVar7->vector[4].y;
                        fStack_14 = pVVar7->vector[4].z;
                        uStack_2 = CONCAT44((int)((ulonglong)uStack_9 >> 0x20),fVar4 * fVar17);
                        uStack_11._0_4_ = (box->_rotation).x;
                        uStack_11._4_4_ = (box->_rotation).y;
                        uStack_12._0_4_ = (box->_rotation).z;
                        uStack_12._4_4_ = (box->_rotation).w;
                        MStack_13.m00 = 0.0;
                        MStack_13.m10 = 0.0;
                        MStack_13.m20 = 0.0;
                        MStack_13.m30 = 0.0;
                        MStack_13.m01 = 0.0;
                        MStack_13.m11 = 0.0;
                        MStack_13.m21 = 0.0;
                        MStack_13.m31 = 0.0;
                        MStack_13.m02 = 0.0;
                        MStack_13.m12 = 0.0;
                        MStack_13.m22 = 0.0;
                        MStack_13.m32 = 0.0;
                        MStack_13.m03 = 0.0;
                        MStack_13.m13 = 0.0;
                        MStack_13.m23 = 0.0;
                        MStack_13.m33 = 0.0;
                        pcVar6 = pcRam_?;
                        fStack_8 = fVar5;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                        {
                          uVar15 = func_?(&UNK_?);
                          FUN_?(uVar15,0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcRam_? = pcVar6;
                        (*pcRam_?)(&uStack_10,&uStack_11,&uStack_2);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Graphics);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        aMStack_16[0].m00 = MStack_13.m00;
                        aMStack_16[0].m10 = MStack_13.m10;
                        aMStack_16[0].m20 = MStack_13.m20;
                        aMStack_16[0].m30 = MStack_13.m30;
                        aMStack_16[0].m01 = MStack_13.m01;
                        aMStack_16[0].m11 = MStack_13.m11;
                        aMStack_16[0].m21 = MStack_13.m21;
                        aMStack_16[0].m31 = MStack_13.m31;
                        aMStack_16[0].m02 = MStack_13.m02;
                        aMStack_16[0].m12 = MStack_13.m12;
                        aMStack_16[0].m22 = MStack_13.m22;
                        aMStack_16[0].m32 = MStack_13.m32;
                        aMStack_16[0].m03 = MStack_13.m03;
                        aMStack_16[0].m13 = MStack_13.m13;
                        aMStack_16[0].m23 = MStack_13.m23;
                        aMStack_16[0].m33 = MStack_13.m33;
                        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
                                  (mesh,aMStack_16,-1,(MethodInfo *)0x0);
                        return;
                      }
                    }
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
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

