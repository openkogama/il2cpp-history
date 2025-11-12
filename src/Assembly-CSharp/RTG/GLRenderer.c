
/* Void DrawCircle2D(Vector2, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircle2D
               (Vector2 circleCenter,float circleRadius,int32_t numPoints,Camera *camera,
               MethodInfo *method)

{
  pLVar1 = PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
                     (circleCenter,circleRadius,numPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,pLVar1,camera,0,circleCenter);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (pLVar1->fields)._size + -1;
  if (0 < iVar3) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(4);
    if (camera == (Camera *)0x0) goto code_?;
    uStack_5 = 0;
    VStack_6 = circleCenter;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_7 = 0;
    uStack_8 = 0;
    pvVar9 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar9,&VStack_6,&uStack_7);
    uVar10 = 0;
    lVar11 = 0x28;
    uVar12 = uVar10;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_7,uStack_7._4_4_,0.0,(MethodInfo *)0x0);
      uVar13 = (uint)uVar10;
      if ((uint)(pLVar1->fields)._size <= uVar13) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pVVar14 = (pLVar1->fields)._items;
      if (pVVar14 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar14->max_length <= uVar13) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_15 = CONCAT44(*(undefined4 *)((longlong)pVVar14->vector + lVar11 + -0x24),
                           *(undefined4 *)((longlong)(pVVar14->vector + -5) + lVar11));
      uStack_16 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_17 = 0;
      fStack_18 = 0.0;
      pvVar9 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar9,&uStack_15,&uStack_17);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_17,uStack_17._4_4_,fStack_18,(MethodInfo *)0x0);
      if ((uint)(pLVar1->fields)._size <= uVar13 + 1) goto code_?;
      pVVar14 = (pLVar1->fields)._items;
      if (pVVar14 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar14->max_length <= uVar13 + 1) goto code_?;
      uStack_19 = CONCAT44(*(undefined4 *)((longlong)pVVar14->vector + lVar11 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar14->vector + -4))->klass + lVar11));
      puStack_20 = (undefined *)((ulonglong)puStack_20 & 0xffffffff00000000);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_21 = 0;
      fStack_22 = 0.0;
      pvVar9 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar9,&uStack_19,&uStack_21);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_21,uStack_21._4_4_,fStack_22,(MethodInfo *)0x0);
      uVar10 = (ulonglong)(uVar13 + 1);
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 8;
    } while ((longlong)uVar12 < (longlong)iVar3);
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawCircle3D(Vector2, Single, Vector3, Vector3, Int32) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircle3D
               (Vector2 circleCenter,float circleRadius,Vector3 *circleRight,Vector3 *circleUp,
               int32_t numPoints,MethodInfo *method)

{
  VStack_1.x = circleUp->x;
  VStack_1.y = circleUp->y;
  VStack_1.z = circleUp->z;
  VStack_2.x = circleRight->x;
  VStack_2.y = circleRight->y;
  VStack_2.z = circleRight->z;
  fStack_3 = 0.0;
  VStack_4 = circleCenter;
  points = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                     ((Vector3 *)&VStack_4,circleRadius,&VStack_2,&VStack_1,numPoints,
                      (MethodInfo *)0x0);
  fStack_3 = 0.0;
  VStack_4 = circleCenter;
  GLRenderer_DrawTriangleFan3D_1((Vector3 *)&VStack_4,points,(MethodInfo *)0x0);
  return;
}


/* Void DrawCircleBorder2D(Vector2, Single, Int32, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircleBorder2D
               (Vector2 circleCenter,float circleRadius,int32_t numPoints,Camera *camera,
               MethodInfo *method)

{
  pLVar1 = PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
                     (circleCenter,circleRadius,numPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,camera,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (1 < (pLVar1->fields)._size) {
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
    (*pcRam_?)();
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
    (*pcRam_?)();
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
    (*pcRam_?)();
    lVar4 = 0x20;
    for (uVar5 = 0; (int)uVar5 < (pLVar1->fields)._size; uVar5 = uVar5 + 1) {
      if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pVVar6 = (pLVar1->fields)._items;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (int)(uVar5 + 1) % (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= uVar7) goto code_?;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar7) goto code_?;
      fVar8 = pVVar6->vector[(int)uVar7].x;
      fVar9 = pVVar6->vector[(int)uVar7].y;
      if (camera == (Camera *)0x0) goto code_?;
      uStack_10 = CONCAT44(*(undefined4 *)((longlong)pVVar6->vector + lVar4 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar6->vector + -4))->klass + lVar4));
      uStack_11 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar14,&uStack_10,&uStack_12);
      uStack_15 = CONCAT44(fVar9,fVar8);
      uStack_16 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_17 = 0;
      uStack_18 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar14,&uStack_15,&uStack_17);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_12,uStack_12._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_17,uStack_17._4_4_,0.0,(MethodInfo *)0x0);
      lVar4 = lVar4 + 8;
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
    (*pcRam_?)();
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
    (*pcRam_?)();
  }
  return;
}


/* Void DrawCircleBorder3D(Vector3, Single, Vector3, Vector3, Int32) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawCircleBorder3D
               (Vector3 *circleCenter,float circleRadius,Vector3 *circleRight,Vector3 *circleUp,
               int32_t numPoints,MethodInfo *method)

{
  VStack_1.x = circleUp->x;
  VStack_1.y = circleUp->y;
  VStack_1.z = circleUp->z;
  VStack_2.z = circleRight->z;
  VStack_2.x = circleRight->x;
  VStack_2.y = circleRight->y;
  VStack_3.z = circleCenter->z;
  VStack_3.x = circleCenter->x;
  VStack_3.y = circleCenter->y;
  pLVar4 = PrimitiveFactory::PrimitiveFactory_Generate3DCircleBorderPoints
                     (&VStack_3,circleRadius,&VStack_2,&VStack_1,numPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar4 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (1 < (pLVar4->fields)._size) {
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
    (*pcRam_?)();
    uVar7 = 0;
    uVar8 = uVar7;
    while (uVar9 = (uint)uVar8, (int)uVar9 < (pLVar4->fields)._size) {
      if ((uint)(pLVar4->fields)._size <= uVar9) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pVVar10 = (pLVar4->fields)._items;
      if (pVVar10 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar10->max_length <= uVar9) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = (int)(uVar9 + 1) % (pLVar4->fields)._size;
      if ((uint)(pLVar4->fields)._size <= uVar11) goto code_?;
      if ((uint)pVVar10->max_length <= uVar11) goto code_?;
      x = pVVar10->vector[(int)uVar11].x;
      y = pVVar10->vector[(int)uVar11].y;
      z = pVVar10->vector[(int)uVar11].z;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar10->vector[0].x + uVar7),
                 *(float *)((longlong)&pVVar10->vector[0].y + uVar7),
                 *(float *)((longlong)&pVVar10->vector[0].z + uVar7),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)x,(float)y,z,(MethodInfo *)0x0)
      ;
      uVar7 = uVar7 + 0xc;
      uVar8 = (ulonglong)(uVar9 + 1);
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
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLine2D(Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLine2D
               (Vector2 startPoint,Vector2 endPoint,Camera *camera,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?,endPoint,camera,method,startPoint,endPoint),
     pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  if (camera == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_3 = 0;
  VStack_4 = startPoint;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7,&VStack_4,&uStack_5);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)uStack_5,uStack_5._4_4_,fStack_6,(MethodInfo *)0x0);
  uStack_3 = 0;
  VStack_4 = endPoint;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (camera->fields)._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar7,&VStack_4,&uStack_5);
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)uStack_5,uStack_5._4_4_,fStack_6,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void DrawLine3D(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLine3D
               (Vector3 *startPoint,Vector3 *endPoint,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  x = startPoint->x;
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)x,startPoint->y,startPoint->z,(MethodInfo *)0x0);
  x_00 = endPoint->x;
  UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
            ((float)x_00,endPoint->y,endPoint->z,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)();
  return;
}


/* Void DrawLineLoop2D(List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop2D
               (List_1_UnityEngine_Vector2_ *linePoints,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    lVar3 = 0x20;
    for (uVar4 = 0; (int)uVar4 < (linePoints->fields)._size; uVar4 = uVar4 + 1) {
      if ((uint)(linePoints->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar5 = (linePoints->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = (int)(uVar4 + 1) % (linePoints->fields)._size;
      if ((uint)(linePoints->fields)._size <= uVar6) goto code_?;
      if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar6) goto code_?;
      fVar7 = pVVar5->vector[(int)uVar6].x;
      fVar8 = pVVar5->vector[(int)uVar6].y;
      if (camera == (Camera *)0x0) goto code_?;
      uStack_9 = CONCAT44(*(undefined4 *)((longlong)pVVar5->vector + lVar3 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3));
      uStack_10 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_11 = 0;
      uStack_12 = 0;
      pvVar13 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar13,&uStack_9,&uStack_11);
      uStack_14 = CONCAT44(fVar8,fVar7);
      uStack_15 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_16 = 0;
      uStack_17 = 0;
      pvVar13 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar13,&uStack_14,&uStack_16);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_11,uStack_11._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_16,uStack_16._4_4_,0.0,(MethodInfo *)0x0);
      lVar3 = lVar3 + 8;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLineLoop2D(List`1[UnityEngine.Vector2], Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop2D_1
               (List_1_UnityEngine_Vector2_ *linePoints,Vector2 translation,Vector2 scale,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,translation,scale,camera,scale,translation);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    lVar3 = 0x20;
    for (uVar4 = 0; (int)uVar4 < (linePoints->fields)._size; uVar4 = uVar4 + 1) {
      if ((uint)(linePoints->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar5 = (linePoints->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = (int)(uVar4 + 1) % (linePoints->fields)._size;
      if ((uint)(linePoints->fields)._size <= uVar6) goto code_?;
      pVVar7 = (linePoints->fields)._items;
      if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar7->max_length <= uVar6) goto code_?;
      fVar8 = pVVar7->vector[(int)uVar6].x;
      fVar9 = pVVar7->vector[(int)uVar6].y;
      if (camera == (Camera *)0x0) goto code_?;
      uStack_10 = CONCAT44(scale.y * *(float *)((longlong)pVVar5->vector + lVar3 + -0x1c) +
                           translation.y,
                           scale.x * *(float *)((longlong)
                                                &((Vector2__Array *)(pVVar5->vector + -4))->klass +
                                               lVar3) + translation.x);
      uStack_11 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar14,&uStack_10,&uStack_12);
      uStack_15 = CONCAT44(scale.y * fVar9 + translation.y,scale.x * fVar8 + translation.x);
      uStack_16 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_17 = 0;
      uStack_18 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar14,&uStack_15,&uStack_17);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_12,uStack_12._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_17,uStack_17._4_4_,0.0,(MethodInfo *)0x0);
      lVar3 = lVar3 + 8;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLineLoop3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop3D
               (List_1_UnityEngine_Vector3_ *linePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    uVar3 = 0;
    uVar4 = uVar3;
    while (uVar5 = (uint)uVar4, (int)uVar5 < (linePoints->fields)._size) {
      if ((uint)(linePoints->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar6 = (linePoints->fields)._items;
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = (int)(uVar5 + 1) % (linePoints->fields)._size;
      if ((uint)(linePoints->fields)._size <= uVar7) goto code_?;
      if ((uint)pVVar6->max_length <= uVar7) goto code_?;
      x = pVVar6->vector[(int)uVar7].x;
      y = pVVar6->vector[(int)uVar7].y;
      z = pVVar6->vector[(int)uVar7].z;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar6->vector[0].x + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].y + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].z + uVar3),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)x,(float)y,z,(MethodInfo *)0x0)
      ;
      uVar3 = uVar3 + 0xc;
      uVar4 = (ulonglong)(uVar5 + 1);
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLineLoop3D(List`1[UnityEngine.Vector3], Vector3) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineLoop3D_1
               (List_1_UnityEngine_Vector3_ *linePoints,Vector3 *pointOffset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    lVar3 = 0;
    for (uVar4 = 0; (int)uVar4 < (linePoints->fields)._size; uVar4 = uVar4 + 1) {
      if ((uint)(linePoints->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar5 = (linePoints->fields)._items;
      if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar2 = *(undefined8 *)((longlong)&pVVar5->vector[0].x + lVar3);
      uVar6 = pointOffset->y;
      uVar7 = pointOffset->x;
      uVar8 = (int)(uVar4 + 1) % (linePoints->fields)._size;
      if ((uint)(linePoints->fields)._size <= uVar8) goto code_?;
      pVVar9 = (linePoints->fields)._items;
      if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar9->max_length <= uVar8) goto code_?;
      uVar10 = pointOffset->x;
      uVar11 = pointOffset->y;
      uVar12 = pVVar9->vector[(int)uVar8].x;
      uVar13 = pVVar9->vector[(int)uVar8].y;
      fVar14 = pVVar9->vector[(int)uVar8].z;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar7 + (float)uVar2,(float)uVar6 + (float)((ulonglong)uVar2 >> 0x20),
                 pointOffset->z + *(float *)((longlong)&pVVar5->vector[0].z + lVar3),
                 (MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar10 + (float)uVar12,(float)uVar11 + (float)uVar13,pointOffset->z + fVar14,
                 (MethodInfo *)0x0);
      lVar3 = lVar3 + 0xc;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLinePairs3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLinePairs3D
               (List_1_UnityEngine_Vector3_ *pairPoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pairPoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((1 < (pairPoints->fields)._size) && (((pairPoints->fields)._size & 1) == 0)) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    uVar3 = 0;
    uVar4 = uVar3;
    while (uVar5 = (uint)uVar4, (int)uVar5 < (pairPoints->fields)._size) {
      if ((uint)(pairPoints->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar6 = (pairPoints->fields)._items;
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((uint)(pairPoints->fields)._size <= uVar5 + 1) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5 + 1) goto code_?;
      uVar2 = *(undefined8 *)((longlong)&pVVar6->vector[1].x + uVar3);
      z = *(float *)((longlong)&pVVar6->vector[1].z + uVar3);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar6->vector[0].x + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].y + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].z + uVar3),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),z,(MethodInfo *)0x0);
      uVar3 = uVar3 + 0x18;
      uVar4 = (ulonglong)(uVar5 + 2);
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLineStrip3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLineStrip3D
               (List_1_UnityEngine_Vector3_ *linePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(1);
    uVar3 = 0;
    uVar4 = uVar3;
    while (uVar5 = (uint)uVar4, (int)uVar5 < (linePoints->fields)._size + -1) {
      if ((uint)(linePoints->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar6 = (linePoints->fields)._items;
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar6->vector[0].x + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].y + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].z + uVar3),(MethodInfo *)0x0);
      if ((uint)(linePoints->fields)._size <= uVar5 + 1) goto code_?;
      pVVar6 = (linePoints->fields)._items;
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5 + 1) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar6->vector[1].x + uVar3),
                 *(float *)((longlong)&pVVar6->vector[1].y + uVar3),
                 *(float *)((longlong)&pVVar6->vector[1].z + uVar3),(MethodInfo *)0x0);
      uVar3 = uVar3 + 0xc;
      uVar4 = (ulonglong)(uVar5 + 1);
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLines2D(List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLines2D
               (List_1_UnityEngine_Vector2_ *linePoints,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(1);
    lVar3 = 0x28;
    for (uVar4 = 0; (int)uVar4 < (linePoints->fields)._size + -1; uVar4 = uVar4 + 1) {
      if ((uint)(linePoints->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar5 = (linePoints->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((uint)(linePoints->fields)._size <= uVar4 + 1) goto code_?;
      if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar4 + 1) goto code_?;
      uVar6 = *(undefined4 *)((longlong)&((Vector2__Array *)(pVVar5->vector + -4))->klass + lVar3);
      uVar7 = *(undefined4 *)((longlong)pVVar5->vector + lVar3 + -0x1c);
      if (camera == (Camera *)0x0) goto code_?;
      uStack_8 = CONCAT44(*(undefined4 *)((longlong)pVVar5->vector + lVar3 + -0x24),
                           *(undefined4 *)((longlong)(pVVar5->vector + -5) + lVar3));
      uStack_9 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_10 = 0;
      uStack_11 = 0;
      pvVar12 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_8,&uStack_10);
      uStack_13 = CONCAT44(uVar7,uVar6);
      uStack_14 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_15 = 0;
      uStack_16 = 0;
      pvVar12 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_13,&uStack_15);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_10,uStack_10._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_15,uStack_15._4_4_,0.0,(MethodInfo *)0x0);
      lVar3 = lVar3 + 8;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLines2D(List`1[UnityEngine.Vector2], Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLines2D_1
               (List_1_UnityEngine_Vector2_ *linePoints,Vector2 translation,Vector2 scale,
               Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,translation,scale,camera,scale,translation);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(1);
    lVar3 = 0x28;
    for (uVar4 = 0; (int)uVar4 < (linePoints->fields)._size + -1; uVar4 = uVar4 + 1) {
      if ((uint)(linePoints->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar5 = (linePoints->fields)._items;
      if (pVVar5 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar5->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((uint)(linePoints->fields)._size <= uVar4 + 1) goto code_?;
      pVVar6 = (linePoints->fields)._items;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar4 + 1) goto code_?;
      fVar7 = *(float *)((longlong)&((Vector2__Array *)(pVVar6->vector + -4))->klass + lVar3);
      fVar8 = *(float *)((longlong)pVVar6->vector + lVar3 + -0x1c);
      if (camera == (Camera *)0x0) goto code_?;
      uStack_9 = CONCAT44(scale.y * *(float *)((longlong)pVVar5->vector + lVar3 + -0x24) +
                           translation.y,
                           scale.x * *(float *)((longlong)(pVVar5->vector + -5) + lVar3) +
                           translation.x);
      uStack_10 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_11 = 0;
      uStack_12 = 0;
      pvVar13 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar13,&uStack_9,&uStack_11);
      uStack_14 = CONCAT44(scale.y * fVar8 + translation.y,scale.x * fVar7 + translation.x);
      uStack_15 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_16 = 0;
      uStack_17 = 0;
      pvVar13 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar13 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar13,&uStack_14,&uStack_16);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_11,uStack_11._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_16,uStack_16._4_4_,0.0,(MethodInfo *)0x0);
      lVar3 = lVar3 + 8;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawLines3D(List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawLines3D
               (List_1_UnityEngine_Vector3_ *linePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (linePoints == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (linePoints->fields)._size) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(1);
    uVar3 = 0;
    uVar4 = uVar3;
    while (uVar5 = (uint)uVar4, (int)uVar5 < (linePoints->fields)._size + -1) {
      if ((uint)(linePoints->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar6 = (linePoints->fields)._items;
      if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((uint)(linePoints->fields)._size <= uVar5 + 1) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5 + 1) goto code_?;
      uVar2 = *(undefined8 *)((longlong)&pVVar6->vector[1].x + uVar3);
      z = *(float *)((longlong)&pVVar6->vector[1].z + uVar3);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar6->vector[0].x + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].y + uVar3),
                 *(float *)((longlong)&pVVar6->vector[0].z + uVar3),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),z,(MethodInfo *)0x0);
      uVar3 = uVar3 + 0xc;
      uVar4 = (ulonglong)(uVar5 + 1);
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawQuads2D(List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawQuads2D
               (List_1_UnityEngine_Vector2_ *quadPoints,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (quadPoints == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (quadPoints->fields)._size;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  if (0 < iVar2) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    lVar4 = 0;
    uVar5 = 2;
    lVar6 = 0x28;
    do {
      if ((uint)(quadPoints->fields)._size <= uVar5 - 2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar7 = (quadPoints->fields)._items;
      if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar7->max_length <= uVar5 - 2) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (camera == (Camera *)0x0) goto code_?;
      uStack_8 = CONCAT44(*(undefined4 *)((longlong)pVVar7->vector + lVar6 + -0x24),
                           *(undefined4 *)((longlong)(pVVar7->vector + -5) + lVar6));
      uStack_9 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_10 = 0;
      fStack_11 = 0.0;
      pvVar12 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_8,&uStack_10);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_10,uStack_10._4_4_,fStack_11,(MethodInfo *)0x0);
      if ((uint)(quadPoints->fields)._size <= uVar5 - 1) goto code_?;
      pVVar7 = (quadPoints->fields)._items;
      if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar7->max_length <= uVar5 - 1) goto code_?;
      uStack_13 = CONCAT44(*(undefined4 *)((longlong)pVVar7->vector + lVar6 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar7->vector + -4))->klass + lVar6));
      uStack_14 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_15 = 0;
      fStack_16 = 0.0;
      pvVar12 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_13,&uStack_15);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_15,uStack_15._4_4_,fStack_16,(MethodInfo *)0x0);
      if ((uint)(quadPoints->fields)._size <= uVar5) goto code_?;
      pVVar7 = (quadPoints->fields)._items;
      if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar7->max_length <= uVar5) goto code_?;
      uStack_17 = CONCAT44(*(undefined4 *)((longlong)pVVar7->vector + lVar6 + -0x14),
                           *(undefined4 *)((longlong)(pVVar7->vector + -3) + lVar6));
      uStack_18 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_19 = 0;
      fStack_20 = 0.0;
      pvVar12 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_17,&uStack_19);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_19,uStack_19._4_4_,fStack_20,(MethodInfo *)0x0);
      if ((uint)(quadPoints->fields)._size <= uVar5 + 1) goto code_?;
      pVVar7 = (quadPoints->fields)._items;
      if (pVVar7 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar7->max_length <= uVar5 + 1) goto code_?;
      uStack_21 = CONCAT44(*(undefined4 *)((longlong)pVVar7->vector + lVar6 + -0xc),
                           *(undefined4 *)((longlong)(pVVar7->vector + -2) + lVar6));
      uStack_22 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_23 = 0;
      fStack_24 = 0.0;
      pvVar12 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12,&uStack_21,&uStack_23);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_23,uStack_23._4_4_,fStack_24,(MethodInfo *)0x0);
      uVar5 = uVar5 + 4;
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar4 < iVar2);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawRect2D(Rect, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawRect2D
               (Rect *rect,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__set_Item_int__UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(7);
  aRStack_3[0].m_XMin = rect->m_XMin;
  aRStack_3[0].m_YMin = rect->m_YMin;
  aRStack_3[0].m_Width = rect->m_Width;
  aRStack_3[0].m_Height = rect->m_Height;
  pLVar4 = RectEx::RectEx_GetCornerPoints(aRStack_3,(MethodInfo *)0x0);
  if (pLVar4 != (List_1_UnityEngine_Vector2_ *)0x0) {
    if ((pLVar4->fields)._size == 0) goto code_?;
    pVVar5 = (pLVar4->fields)._items;
    if (pVVar5 != (Vector2__Array *)0x0) {
      if ((int)pVVar5->max_length == 0) goto code_?;
      if (camera != (Camera *)0x0) {
        VStack_6.y = pVVar5->vector[0].y;
        VStack_6.x = pVVar5->vector[0].x;
        uStack_7 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_8 = 0;
        uStack_9 = 0;
        pvVar10 = (camera->fields)._._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar10,&VStack_6,&uStack_8);
        if ((pLVar4->fields)._size == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pVVar5 = (pLVar4->fields)._items;
        if (pVVar5 != (Vector2__Array *)0x0) {
          if ((int)pVVar5->max_length != 0) {
            pVVar5->vector[0].x = (float)uStack_8;
            pVVar5->vector[0].y = uStack_8._4_4_;
            piVar11 = &(pLVar4->fields)._version;
            *piVar11 = *piVar11 + 1;
            if ((uint)(pLVar4->fields)._size < 2) goto code_?;
            pVVar5 = (pLVar4->fields)._items;
            if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
            if (1 < (uint)pVVar5->max_length) {
              aRStack_3[0]._0_8_ = pVVar5->vector[1];
              aRStack_3[0]._8_8_ = aRStack_3[0]._8_8_ & 0xffffffff00000000;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_12 = 0;
              uStack_13 = 0;
              pvVar10 = (camera->fields)._._._.m_CachedPtr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar10,aRStack_3,&uStack_12);
              if ((uint)(pLVar4->fields)._size < 2) goto code_?;
              pVVar5 = (pLVar4->fields)._items;
              if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
              if (1 < (uint)pVVar5->max_length) {
                pVVar5->vector[1].x = (float)uStack_12;
                pVVar5->vector[1].y = uStack_12._4_4_;
                piVar11 = &(pLVar4->fields)._version;
                *piVar11 = *piVar11 + 1;
                if ((uint)(pLVar4->fields)._size < 3) goto code_?;
                pVVar5 = (pLVar4->fields)._items;
                if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                if (2 < (uint)pVVar5->max_length) {
                  VStack_6 = pVVar5->vector[2];
                  uStack_7 = 0;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_8 = 0;
                  uStack_9 = 0;
                  pvVar10 = (camera->fields)._._._.m_CachedPtr;
                  if (pvVar10 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcVar1 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                    uVar2 = func_?(&UNK_?);
                    FUN_?(uVar2,0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcRam_? = pcVar1;
                  (*pcRam_?)(pvVar10,&VStack_6,&uStack_8);
                  if ((uint)(pLVar4->fields)._size < 3) goto code_?;
                  pVVar5 = (pLVar4->fields)._items;
                  if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                  if (2 < (uint)pVVar5->max_length) {
                    pVVar5->vector[2].x = (float)uStack_8;
                    pVVar5->vector[2].y = uStack_8._4_4_;
                    piVar11 = &(pLVar4->fields)._version;
                    *piVar11 = *piVar11 + 1;
                    if ((uint)(pLVar4->fields)._size < 4) goto code_?;
                    pVVar5 = (pLVar4->fields)._items;
                    if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                    if (3 < (uint)pVVar5->max_length) {
                      aRStack_3[0]._0_8_ = pVVar5->vector[3];
                      aRStack_3[0]._8_8_ = aRStack_3[0]._8_8_ & 0xffffffff00000000;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_12 = 0;
                      uStack_13 = 0;
                      pvVar10 = (camera->fields)._._._.m_CachedPtr;
                      if (pvVar10 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)camera,(MethodInfo *)0x0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                      }
                      pcVar1 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                        uVar2 = func_?(&UNK_?);
                        FUN_?(uVar2,0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                      }
                      pcRam_? = pcVar1;
                      (*pcRam_?)(pvVar10,aRStack_3,&uStack_12);
                      if ((uint)(pLVar4->fields)._size < 4) goto code_?;
                      pVVar5 = (pLVar4->fields)._items;
                      if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                      if (3 < (uint)pVVar5->max_length) {
                        pVVar5->vector[3].x = (float)uStack_12;
                        pVVar5->vector[3].y = uStack_12._4_4_;
                        piVar11 = &(pLVar4->fields)._version;
                        *piVar11 = *piVar11 + 1;
                        if ((pLVar4->fields)._size == 0) goto code_?;
                        pVVar5 = (pLVar4->fields)._items;
                        if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                        if ((int)pVVar5->max_length != 0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                                    (pVVar5->vector[0].x,pVVar5->vector[0].y,0.0,(MethodInfo *)0x0);
                          if ((uint)(pLVar4->fields)._size < 2) goto code_?;
                          pVVar5 = (pLVar4->fields)._items;
                          if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                          if (1 < (uint)pVVar5->max_length) {
                            UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                                      (pVVar5->vector[1].x,pVVar5->vector[1].y,0.0,(MethodInfo *)0x0
                                      );
                            if ((uint)(pLVar4->fields)._size < 3) goto code_?;
                            pVVar5 = (pLVar4->fields)._items;
                            if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                            if (2 < (uint)pVVar5->max_length) {
                              UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                                        (pVVar5->vector[2].x,pVVar5->vector[2].y,0.0,
                                         (MethodInfo *)0x0);
                              if ((uint)(pLVar4->fields)._size < 4) goto code_?;
                              pVVar5 = (pLVar4->fields)._items;
                              if (pVVar5 == (Vector2__Array *)0x0) goto DAT_?;
                              if (3 < (uint)pVVar5->max_length) {
                                UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                                          (pVVar5->vector[3].x,pVVar5->vector[3].y,0.0,
                                           (MethodInfo *)0x0);
                                pcVar1 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar1 = (code *)FUN_?(&UNK_?),
                                   pcVar1 == (code *)0x0)) {
                                  uVar2 = func_?(&UNK_?);
                                  FUN_?(uVar2,0);
                                  pcVar1 = (code *)swi(3);
                                  (*pcVar1)();
                                  return;
                                }
                                pcRam_? = pcVar1;
                                (*pcRam_?)();
                                pcVar1 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar1 = (code *)FUN_?(&UNK_?),
                                   pcVar1 == (code *)0x0)) {
                                  uVar2 = func_?(&UNK_?);
                                  FUN_?(uVar2,0);
                                  pcVar1 = (code *)swi(3);
                                  (*pcVar1)();
                                  return;
                                }
                                pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*pcRam_?)();
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DrawRectBorder2D(Rect, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawRectBorder2D
               (Rect *rect,Camera *camera,MethodInfo *method)

{
  pLVar1 = RectEx::RectEx_GetCornerPoints((Rect *)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,camera,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar1 == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (1 < (pLVar1->fields)._size) {
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
    (*pcRam_?)();
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
    (*pcRam_?)();
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
    (*pcRam_?)();
    lVar4 = 0x20;
    for (uVar5 = 0; (int)uVar5 < (pLVar1->fields)._size; uVar5 = uVar5 + 1) {
      if ((uint)(pLVar1->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pVVar6 = (pLVar1->fields)._items;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (int)(uVar5 + 1) % (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= uVar7) goto code_?;
      if (pVVar6 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar6->max_length <= uVar7) goto code_?;
      fVar8 = pVVar6->vector[(int)uVar7].x;
      fVar9 = pVVar6->vector[(int)uVar7].y;
      if (camera == (Camera *)0x0) goto code_?;
      uStack_10 = CONCAT44(*(undefined4 *)((longlong)pVVar6->vector + lVar4 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar6->vector + -4))->klass + lVar4));
      uStack_11 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      uStack_13 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar14,&uStack_10,&uStack_12);
      uStack_15 = CONCAT44(fVar9,fVar8);
      uStack_16 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_17 = 0;
      uStack_18 = 0;
      pvVar14 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar14,&uStack_15,&uStack_17);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_12,uStack_12._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_17,uStack_17._4_4_,0.0,(MethodInfo *)0x0);
      lVar4 = lVar4 + 8;
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
    (*pcRam_?)();
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
    (*pcRam_?)();
  }
  return;
}


/* Void DrawSphereBorder(Camera, Vector3, Single, Int32) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawSphereBorder
               (Camera *camera,Vector3 *sphereCenter,float sphereRadius,int32_t numPoints,
               MethodInfo *method)

{
  VStack_1.x = sphereCenter->x;
  VStack_1.y = sphereCenter->y;
  VStack_1.z = sphereCenter->z;
  pLVar2 = PrimitiveFactory::PrimitiveFactory_GenerateSphereBorderPoints
                     (camera,&VStack_1,sphereRadius,numPoints,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pLVar2 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (1 < (pLVar2->fields)._size) {
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
    (*pcRam_?)();
    uVar5 = 0;
    uVar6 = uVar5;
    while (uVar7 = (uint)uVar6, (int)uVar7 < (pLVar2->fields)._size) {
      if ((uint)(pLVar2->fields)._size <= uVar7) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pVVar8 = (pLVar2->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar8->max_length <= uVar7) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = (int)(uVar7 + 1) % (pLVar2->fields)._size;
      if ((uint)(pLVar2->fields)._size <= uVar9) goto code_?;
      if ((uint)pVVar8->max_length <= uVar9) goto code_?;
      x = pVVar8->vector[(int)uVar9].x;
      y = pVVar8->vector[(int)uVar9].y;
      z = pVVar8->vector[(int)uVar9].z;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar8->vector[0].x + uVar5),
                 *(float *)((longlong)&pVVar8->vector[0].y + uVar5),
                 *(float *)((longlong)&pVVar8->vector[0].z + uVar5),(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)x,(float)y,z,(MethodInfo *)0x0)
      ;
      uVar5 = uVar5 + 0xc;
      uVar6 = (ulonglong)(uVar7 + 1);
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
    (*pcRam_?)();
  }
  return;
}


/* Void DrawTriangleFan2D(Vector2, List`1[UnityEngine.Vector2], Vector2, Vector2, Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan2D
               (Vector2 origin,List_1_UnityEngine_Vector2_ *points,Vector2 translation,Vector2 scale
               ,Camera *camera,MethodInfo *method)

{
  VStack_1 = scale;
  VStack_2 = origin;
  VStack_3 = translation;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (points->fields)._size + -1;
  if (0 < iVar5) {
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
    (*pcRam_?)();
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
    (*pcRam_?)();
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
    (*pcRam_?)(4);
    fVar7 = VStack_1.x;
    fVar8 = VStack_1.y;
    fVar9 = VStack_3.x;
    fVar10 = VStack_3.y;
    if (camera == (Camera *)0x0) goto code_?;
    uStack_11 = CONCAT44(VStack_1.y * VStack_2.y + VStack_3.y,
                         VStack_1.x * VStack_2.x + VStack_3.x);
    uStack_12 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_13 = 0;
    uStack_14 = 0;
    pvVar15 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
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
    (*pcRam_?)(pvVar15,&uStack_11,&uStack_13);
    uVar16 = 0;
    lVar17 = 0x28;
    uVar18 = uVar16;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_13,uStack_13._4_4_,0.0,(MethodInfo *)0x0);
      uVar19 = (uint)uVar16;
      if ((uint)(points->fields)._size <= uVar19) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pVVar20 = (points->fields)._items;
      if (pVVar20 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar20->max_length <= uVar19) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_21 = 0;
      uStack_22 = CONCAT44(fVar8 * *(float *)((longlong)pVVar20->vector + lVar17 + -0x24) + fVar10,
                           fVar7 * *(float *)((longlong)(pVVar20->vector + -5) + lVar17) + fVar9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_23 = 0;
      fStack_24 = 0.0;
      pvVar15 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
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
      (*pcRam_?)(pvVar15,&uStack_22,&uStack_23);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_23,uStack_23._4_4_,fStack_24,(MethodInfo *)0x0);
      if ((uint)(points->fields)._size <= uVar19 + 1) goto code_?;
      pVVar20 = (points->fields)._items;
      if (pVVar20 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar20->max_length <= uVar19 + 1) goto code_?;
      uStack_25 = 0;
      uStack_26 = CONCAT44(fVar8 * *(float *)((longlong)pVVar20->vector + lVar17 + -0x1c) + fVar10,
                           fVar7 * *(float *)((longlong)
                                              &((Vector2__Array *)(pVVar20->vector + -4))->klass +
                                             lVar17) + fVar9);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_27 = 0;
      fStack_28 = 0.0;
      pvVar15 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
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
      (*pcRam_?)(pvVar15,&uStack_26,&uStack_27);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_27,uStack_27._4_4_,fStack_28,(MethodInfo *)0x0);
      uVar16 = (ulonglong)(uVar19 + 1);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 8;
    } while ((longlong)uVar18 < (longlong)iVar5);
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
    (*pcRam_?)();
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
    (*pcRam_?)();
  }
  return;
}


/* Void DrawTriangleFan2D(Vector2, List`1[UnityEngine.Vector2], Camera) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan2D_1
               (Vector2 origin,List_1_UnityEngine_Vector2_ *points,Camera *camera,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,points,camera,method,origin);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (List_1_UnityEngine_Vector2_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (points->fields)._size + -1;
  if (0 < iVar2) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(4);
    if (camera == (Camera *)0x0) goto code_?;
    uStack_4 = 0;
    VStack_5 = origin;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_6 = 0;
    uStack_7 = 0;
    pvVar8 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar8,&VStack_5,&uStack_6);
    uVar9 = 0;
    lVar10 = 0x28;
    uVar11 = uVar9;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_6,uStack_6._4_4_,0.0,(MethodInfo *)0x0);
      uVar12 = (uint)uVar9;
      if ((uint)(points->fields)._size <= uVar12) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar13 = (points->fields)._items;
      if (pVVar13 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar13->max_length <= uVar12) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_14 = CONCAT44(*(undefined4 *)((longlong)pVVar13->vector + lVar10 + -0x24),
                           *(undefined4 *)((longlong)(pVVar13->vector + -5) + lVar10));
      uStack_15 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_16 = 0;
      fStack_17 = 0.0;
      pvVar8 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar8,&uStack_14,&uStack_16);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_16,uStack_16._4_4_,fStack_17,(MethodInfo *)0x0);
      if ((uint)(points->fields)._size <= uVar12 + 1) goto code_?;
      pVVar13 = (points->fields)._items;
      if (pVVar13 == (Vector2__Array *)0x0) goto code_?;
      if ((uint)pVVar13->max_length <= uVar12 + 1) goto code_?;
      uStack_18 = CONCAT44(*(undefined4 *)((longlong)pVVar13->vector + lVar10 + -0x1c),
                           *(undefined4 *)
                            ((longlong)&((Vector2__Array *)(pVVar13->vector + -4))->klass + lVar10));
      uStack_19 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_20 = 0;
      fStack_21 = 0.0;
      pvVar8 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar8,&uStack_18,&uStack_20);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_20,uStack_20._4_4_,fStack_21,(MethodInfo *)0x0);
      uVar9 = (ulonglong)(uVar12 + 1);
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 8;
    } while ((longlong)uVar11 < (longlong)iVar2);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawTriangleFan3D(Vector3, List`1[UnityEngine.Vector3], Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan3D
               (Vector3 *origin,List_1_UnityEngine_Vector3_ *points,Vector3 *translation,
               Vector3 *scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (points->fields)._size + -1;
  if (0 < iVar2) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    uVar4 = origin->x;
    uVar5 = origin->y;
    uVar6 = translation->x;
    uVar7 = translation->y;
    uVar8 = scale->y;
    uVar9 = scale->x;
    fVar10 = scale->z;
    fVar11 = origin->z;
    fVar12 = translation->z;
    uVar13 = 0;
    lVar14 = 0;
    lVar15 = 0;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar9 * (float)uVar4 + (float)uVar6,
                 (float)uVar8 * (float)uVar5 + (float)uVar7,fVar10 * fVar11 + fVar12,
                 (MethodInfo *)0x0);
      if ((uint)(points->fields)._size <= uVar13) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar16 = (points->fields)._items;
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar16->max_length <= uVar13) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar17 = scale->x;
      uVar18 = scale->y;
      uVar3 = *(undefined8 *)((longlong)&pVVar16->vector[0].x + lVar15);
      uVar19 = translation->x;
      uVar20 = translation->y;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar17 * (float)uVar3 + (float)uVar19,
                 (float)uVar18 * (float)((ulonglong)uVar3 >> 0x20) + (float)uVar20,
                 scale->z * *(float *)((longlong)&pVVar16->vector[0].z + lVar15) + translation->z,
                 (MethodInfo *)0x0);
      if ((uint)(points->fields)._size <= uVar13 + 1) goto code_?;
      pVVar16 = (points->fields)._items;
      if (pVVar16 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar16->max_length <= uVar13 + 1) goto code_?;
      uVar21 = scale->x;
      uVar22 = scale->y;
      uVar3 = *(undefined8 *)((longlong)&pVVar16->vector[1].x + lVar15);
      uVar23 = translation->x;
      uVar24 = translation->y;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uVar21 * (float)uVar3 + (float)uVar23,
                 (float)uVar22 * (float)((ulonglong)uVar3 >> 0x20) + (float)uVar24,
                 scale->z * *(float *)((longlong)&pVVar16->vector[1].z + lVar15) + translation->z,
                 (MethodInfo *)0x0);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0xc;
    } while (lVar14 < iVar2);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}


/* Void DrawTriangleFan3D(Vector3, List`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::GLRenderer::GLRenderer_DrawTriangleFan3D_1
               (Vector3 *origin,List_1_UnityEngine_Vector3_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (points->fields)._size + -1;
  if (0 < iVar2) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    x = origin->x;
    y = origin->y;
    uVar4 = 0;
    z = origin->z;
    uVar5 = uVar4;
    uVar6 = uVar4;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3((float)x,(float)y,z,(MethodInfo *)0x0)
      ;
      uVar7 = (uint)uVar4;
      if ((uint)(points->fields)._size <= uVar7) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar8->max_length <= uVar7) {
code_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar8->vector[0].x + uVar5),
                 *(float *)((longlong)&pVVar8->vector[0].y + uVar5),
                 *(float *)((longlong)&pVVar8->vector[0].z + uVar5),(MethodInfo *)0x0);
      if ((uint)(points->fields)._size <= uVar7 + 1) goto code_?;
      pVVar8 = (points->fields)._items;
      if (pVVar8 == (Vector3__Array *)0x0) goto code_?;
      if ((uint)pVVar8->max_length <= uVar7 + 1) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)*(undefined8 *)((longlong)&pVVar8->vector[1].x + uVar5),
                 *(float *)((longlong)&pVVar8->vector[1].y + uVar5),
                 *(float *)((longlong)&pVVar8->vector[1].z + uVar5),(MethodInfo *)0x0);
      uVar4 = (ulonglong)(uVar7 + 1);
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + 0xc;
    } while ((longlong)uVar6 < (longlong)iVar2);
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
  }
  return;
}

