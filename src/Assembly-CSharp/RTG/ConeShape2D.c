
/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_ContainsPoint
               (ConeShape2D *this,Vector2 point,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._baseRadius;
  fStackX_c = VVar3.y;
  fVar5 = fVar4 * fStackX_c;
  fStackX_8 = VVar3.x;
  fVar4 = fVar4 * fStackX_8;
  fVar6 = (this->fields)._baseCenter.x;
  fVar7 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Up(this,(MethodInfo *)0x0);
  fVar8 = (this->fields)._height;
  fStackX_c = VVar3.y;
  fVar9 = fVar8 * fStackX_c;
  fStackX_8 = VVar3.x;
  fVar8 = fVar8 * fStackX_8;
  fVar10 = (this->fields)._baseCenter.x;
  fVar11 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar12 = (this->fields)._baseRadius;
  fStackX_c = VVar3.y;
  fStackX_8 = VVar3.x;
  aTStack_13[0]._areaEps = 0.0;
  aTStack_13[0]._extrudeEps = 0.0;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  p2.y = fVar12 * fStackX_c + fVar11;
  p2.x = fVar12 * fStackX_8 + fVar10;
  VVar3.y = fVar9 + fVar7;
  VVar3.x = fVar8 + fVar6;
  p0.y = fVar2 - fVar5;
  p0.x = fVar1 - fVar4;
  aTStack_13[0]._wireEps = 0.0;
  bVar14 = TriangleMath::TriangleMath_Contains2DPoint(point,p0,VVar3,p2,aTStack_13,(MethodInfo *)0x0)
  ;
  return bVar14;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,ConeShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  points = (IEnumerable_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(points);
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._baseRadius;
  fStackX_c = VVar3.y;
  fStackX_8 = VVar3.x;
  if (points != (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(points,CONCAT44(fVar2 - fVar4 * fStackX_c,fVar1 - fVar4 * fStackX_8),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    fVar1 = (this->fields)._baseCenter.x;
    fVar2 = (this->fields)._baseCenter.y;
    VVar3 = ConeShape2D_get_Up(this,(MethodInfo *)0x0);
    fVar4 = (this->fields)._height;
    fStackX_c = VVar3.y;
    fStackX_8 = VVar3.x;
    FUN_?(points,CONCAT44(fVar4 * fStackX_c + fVar2,fVar4 * fStackX_8 + fVar1),
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    fVar1 = (this->fields)._baseCenter.x;
    fVar2 = (this->fields)._baseCenter.y;
    VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
    fVar4 = (this->fields)._baseRadius;
    fStackX_c = VVar3.y;
    fStackX_8 = VVar3.x;
    FUN_?(points,CONCAT44(fVar4 * fStackX_c + fVar2,fVar4 * fStackX_8 + fVar1));
    pRVar5 = RectEx::RectEx_FromPoints(aRStack_6,points,(MethodInfo *)0x0);
    fVar1 = pRVar5->m_YMin;
    fVar2 = pRVar5->m_Width;
    fVar4 = pRVar5->m_Height;
    __return_storage_ptr__->m_XMin = pRVar5->m_XMin;
    __return_storage_ptr__->m_YMin = fVar1;
    __return_storage_ptr__->m_Width = fVar2;
    __return_storage_ptr__->m_Height = fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pRVar5 = (Rect *)(*pcVar7)();
  return pRVar5;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_RenderArea
               (ConeShape2D *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
  uStack_2 = unaff_XMM9_Dc;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar3 = (this->fields)._baseCenter.x;
  fVar4 = (this->fields)._baseCenter.y;
  VVar5 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar6 = (this->fields)._baseRadius;
  fStackX_c = VVar5.y;
  fVar7 = fVar6 * fStackX_c;
  fStackX_8 = VVar5.x;
  fVar6 = fVar6 * fStackX_8;
  lVar8 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(lVar8);
  fVar9 = (this->fields)._baseCenter.x;
  fVar10 = (this->fields)._baseCenter.y;
  VVar5 = ConeShape2D_get_Up(this,(MethodInfo *)0x0);
  fVar11 = (this->fields)._height;
  fStackX_c = VVar5.y;
  fStackX_8 = VVar5.x;
  if (lVar8 == 0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FUN_?(lVar8,CONCAT44(fVar11 * fStackX_c + fVar10,fVar11 * fStackX_8 + fVar9),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  fVar9 = (this->fields)._baseCenter.x;
  fVar10 = (this->fields)._baseCenter.y;
  VVar5 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar11 = (this->fields)._baseRadius;
  fStackX_c = VVar5.y;
  fStackX_8 = VVar5.x;
  FUN_?(lVar8,CONCAT44(fVar11 * fStackX_c + fVar10,fVar11 * fStackX_8 + fVar9),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  uVar13 = CONCAT44(fVar4 - fVar7,fVar3 - fVar6);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Count__
                  ,lVar8,camera,0,uVar13);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (lVar8 == 0) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar14 = *(int *)(lVar8 + 0x18) + -1;
  if (0 < iVar14) {
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
    (*pcRam_?)();
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
    (*pcRam_?)();
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
    (*pcRam_?)(4);
    if (camera == (Camera *)0x0) goto code_?;
    uStack_15 = 0;
    uStack_16 = uVar13;
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
    pvVar19 = (camera->fields)._._._.m_CachedPtr;
    if (pvVar19 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar19,&uStack_16,&uStack_17);
    uVar20 = 0;
    lVar21 = 0x28;
    uVar22 = uVar20;
    do {
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_17,uStack_17._4_4_,0.0,(MethodInfo *)0x0);
      uVar23 = (uint)uVar20;
      if (*(uint *)(lVar8 + 0x18) <= uVar23) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar24 = *(longlong *)(lVar8 + 0x10);
      if (lVar24 == 0) goto code_?;
      if (*(uint *)(lVar24 + 0x18) <= uVar23) {
code_?:
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uStack_25 = CONCAT44(*(undefined4 *)(lVar21 + -4 + lVar24),*(undefined4 *)(lVar21 + -8 + lVar24)
                          );
      uStack_26 = 0;
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
      pvVar19 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar19 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar19,&uStack_25,&uStack_27);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_27,uStack_27._4_4_,fStack_28,(MethodInfo *)0x0);
      if (*(uint *)(lVar8 + 0x18) <= uVar23 + 1) goto code_?;
      lVar24 = *(longlong *)(lVar8 + 0x10);
      if (lVar24 == 0) goto code_?;
      if (*(uint *)(lVar24 + 0x18) <= uVar23 + 1) goto code_?;
      uStack_1 = CONCAT44(*(undefined4 *)(lVar24 + 4 + lVar21),*(undefined4 *)(lVar24 + lVar21));
      uStack_2 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_29 = 0;
      fStack_30 = 0.0;
      pvVar19 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar19 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar19,&uStack_1,&uStack_29);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_29,uStack_29._4_4_,fStack_30,(MethodInfo *)0x0);
      uVar20 = (ulonglong)(uVar23 + 1);
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 8;
    } while ((longlong)uVar22 < (longlong)iVar14);
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
    (*pcRam_?)();
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
    (*pcRam_?)();
  }
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_RenderBorder
               (ConeShape2D *this,Camera *camera,MethodInfo *method)

{
  uStack_1 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_2 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar3 = FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(lVar3);
  fVar4 = (this->fields)._baseCenter.x;
  fVar5 = (this->fields)._baseCenter.y;
  VVar6 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar7 = (this->fields)._baseRadius;
  fStackX_c = VVar6.y;
  fStackX_8 = VVar6.x;
  if (lVar3 == 0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FUN_?(lVar3,CONCAT44(fVar5 - fVar7 * fStackX_c,fVar4 - fVar7 * fStackX_8),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  fVar4 = (this->fields)._baseCenter.x;
  fVar5 = (this->fields)._baseCenter.y;
  VVar6 = ConeShape2D_get_Up(this,(MethodInfo *)0x0);
  fVar7 = (this->fields)._height;
  fStackX_c = VVar6.y;
  fStackX_8 = VVar6.x;
  FUN_?(lVar3,CONCAT44(fVar7 * fStackX_c + fVar5,fVar7 * fStackX_8 + fVar4),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  fVar4 = (this->fields)._baseCenter.x;
  fVar5 = (this->fields)._baseCenter.y;
  VVar6 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar7 = (this->fields)._baseRadius;
  fStackX_c = VVar6.y;
  fStackX_8 = VVar6.x;
  FUN_?(lVar3,CONCAT44(fVar7 * fStackX_c + fVar5,fVar7 * fStackX_8 + fVar4),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
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
  uStack_9 = uStack_1;
  uStack_10 = uStack_2;
  if (lVar3 == 0) {
code_?:
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (1 < *(int *)(lVar3 + 0x18)) {
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)();
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)();
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)();
    lVar12 = 0x20;
    for (uVar13 = 0; (int)uVar13 < *(int *)(lVar3 + 0x18); uVar13 = uVar13 + 1) {
      if (*(uint *)(lVar3 + 0x18) <= uVar13) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar14 = *(longlong *)(lVar3 + 0x10);
      if (lVar14 == 0) goto code_?;
      if (*(uint *)(lVar14 + 0x18) <= uVar13) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar15 = (int)(uVar13 + 1) % *(int *)(lVar3 + 0x18);
      if (*(uint *)(lVar3 + 0x18) <= uVar15) goto code_?;
      if (lVar14 == 0) goto code_?;
      if (*(uint *)(lVar14 + 0x18) <= uVar15) goto code_?;
      uVar16 = *(undefined4 *)(lVar14 + 0x20 + (longlong)(int)uVar15 * 8);
      uVar17 = *(undefined4 *)(lVar14 + 0x24 + (longlong)(int)uVar15 * 8);
      if (camera == (Camera *)0x0) goto code_?;
      uStack_18 = CONCAT44(*(undefined4 *)(lVar12 + 4 + lVar14),*(undefined4 *)(lVar12 + lVar14));
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
      uStack_21 = 0;
      pvVar22 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar22,&uStack_18,&uStack_20);
      uStack_23 = CONCAT44(uVar17,uVar16);
      uStack_24 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_25 = 0;
      uStack_26 = 0;
      pvVar22 = (camera->fields)._._._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)camera,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      (*pcRam_?)(pvVar22,&uStack_23,&uStack_25);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_20,uStack_20._4_4_,0.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
                ((float)uStack_25,uStack_25._4_4_,0.0,(MethodInfo *)0x0);
      lVar12 = lVar12 + 8;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)();
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)();
  }
  return;
}


/* ConeShape2D() */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D__ctor(ConeShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._baseCenter.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._baseCenter.y = fVar1;
  (this->fields)._baseRadius = 15.0;
  (this->fields)._height = 15.0;
  return;
}


/* Vector2 get_BaseLeft() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_BaseLeft
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._baseRadius;
  fStackX_c = VVar3.y;
  fStackX_8 = VVar3.x;
  VVar3.y = fVar2 - fVar4 * fStackX_c;
  VVar3.x = fVar1 - fVar4 * fStackX_8;
  return VVar3;
}


/* Vector2 get_BaseRight() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_BaseRight
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._baseRadius;
  fStackX_c = VVar3.y;
  fStackX_8 = VVar3.x;
  VVar3.y = fVar4 * fStackX_c + fVar2;
  VVar3.x = fVar4 * fStackX_8 + fVar1;
  return VVar3;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Right
                  (ConeShape2D *this,MethodInfo *method)

{
  pQVar1 = ConeShape2D_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar4 + fVar4;
  VVar10.y = (_UNK_? - ((fVar3 + fVar3) * fVar3 + fVar8 * fVar5)) * (pVVar7->rightVector).y +
            (fVar8 * fVar6 + fVar9 * fVar3) * (pVVar7->rightVector).x +
            (fVar8 * fVar4 - (fVar3 + fVar3) * fVar6) * 0.0;
  VVar10.x = (_UNK_? - (fVar9 * fVar4 + fVar8 * fVar5)) * (pVVar7->rightVector).x +
            (fVar9 * fVar3 - fVar8 * fVar6) * (pVVar7->rightVector).y +
            (fVar8 * fVar3 + fVar9 * fVar6) * 0.0;
  return VVar10;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Rotation
          (Quaternion *__return_storage_ptr__,ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar2->forwardVector).x;
  uStack_3._4_4_ = (pVVar2->forwardVector).y;
  fStack_4 = (pVVar2->forwardVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  __return_storage_ptr__->x = (float)(undefined4)uStack_5;
  __return_storage_ptr__->y = (float)uStack_5._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_6;
  __return_storage_ptr__->w = (float)uStack_6._4_4_;
  return __return_storage_ptr__;
}


/* Vector2 get_Tip() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Tip
                  (ConeShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._baseCenter.x;
  fVar2 = (this->fields)._baseCenter.y;
  VVar3 = ConeShape2D_get_Up(this,(MethodInfo *)0x0);
  fVar4 = (this->fields)._height;
  fStackX_c = VVar3.y;
  fStackX_8 = VVar3.x;
  VVar3.y = fVar4 * fStackX_c + fVar2;
  VVar3.x = fVar4 * fStackX_8 + fVar1;
  return VVar3;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_get_Up
                  (ConeShape2D *this,MethodInfo *method)

{
  pQVar1 = ConeShape2D_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar8 = fVar5 + fVar5;
  fVar9 = fVar4 + fVar4;
  VVar10.y = (_UNK_? - ((fVar3 + fVar3) * fVar3 + fVar8 * fVar5)) * (pVVar7->upVector).y +
            (fVar8 * fVar6 + fVar9 * fVar3) * (pVVar7->upVector).x +
            (fVar8 * fVar4 - (fVar3 + fVar3) * fVar6) * 0.0;
  VVar10.x = (_UNK_? - (fVar9 * fVar4 + fVar8 * fVar5)) * (pVVar7->upVector).x +
            (fVar9 * fVar3 - fVar8 * fVar6) * (pVVar7->upVector).y +
            (fVar8 * fVar3 + fVar9 * fVar6) * 0.0;
  return VVar10;
}


/* Void set_BaseLeft(Vector2) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_BaseLeft
               (ConeShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar2 = (this->fields)._baseRadius;
  fStackX_c = VVar1.y;
  fStackX_8 = VVar1.x;
  fStackX_24 = value.y;
  fStackX_20 = value.x;
  (this->fields)._baseCenter.y = fVar2 * fStackX_c + fStackX_24;
  (this->fields)._baseCenter.x = fVar2 * fStackX_8 + fStackX_20;
  return;
}


/* Void set_BaseRight(Vector2) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_BaseRight
               (ConeShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = ConeShape2D_get_Right(this,(MethodInfo *)0x0);
  fVar2 = (this->fields)._baseRadius;
  fStackX_20 = value.x;
  fStackX_8 = VVar1.x;
  fStackX_c = VVar1.y;
  (this->fields)._baseCenter.x = fStackX_20 - fVar2 * fStackX_8;
  fStackX_24 = value.y;
  (this->fields)._baseCenter.y = fStackX_24 - fVar2 * fStackX_c;
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_RotationDegrees
               (ConeShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float)FUN_?(value,_UNK_?);
  (this->fields)._rotationDegrees = fVar1;
  return;
}


/* Void set_Tip(Vector2) */

void Assembly-CSharp.dll::RTG::ConeShape2D::ConeShape2D_set_Tip
               (ConeShape2D *this,Vector2 value,MethodInfo *method)

{
  VVar1 = ConeShape2D_get_Up(this,(MethodInfo *)0x0);
  fVar2 = (this->fields)._height;
  fStackX_20 = value.x;
  fStackX_8 = VVar1.x;
  fStackX_c = VVar1.y;
  (this->fields)._baseCenter.x = fStackX_20 - fVar2 * fStackX_8;
  fStackX_24 = value.y;
  (this->fields)._baseCenter.y = fStackX_24 - fVar2 * fStackX_c;
  return;
}

