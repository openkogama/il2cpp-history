
/* Boolean ContainsAllPoints(Rect, IEnumerable`1[UnityEngine.Vector2]) */

bool Assembly-CSharp.dll::RTG::RectEx::RectEx_ContainsAllPoints(Rect *rect,IEnumerable_1_UnityEngine_Vector2_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (points == (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    lVar1 = FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>,points);
    while (lVar1 != 0) {
      cVar2 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar2 == '\0') {
        if (lVar1 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lVar1);
        }
        return 1;
      }
      if (lVar1 == 0) goto code_?;
      uVar3 = FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
      fStackX_10 = (float)uVar3;
      if (((0.0 < rect->m_Width || rect->m_Width == 0.0) || (rect->m_XMin < fStackX_10)) || (fStackX_10 <= rect->m_Width + rect->m_XMin)) {
        if ((rect->m_Width < 0.0) || (fStackX_10 < rect->m_XMin)) {
          bVar4 = false;
        }
        else {
          bVar4 = fStackX_10 < rect->m_Width + rect->m_XMin;
        }
      }
      else {
        bVar4 = true;
      }
      fStackX_14 = (float)((ulonglong)uVar3 >> 0x20);
      if (((0.0 < rect->m_Height || rect->m_Height == 0.0) || (rect->m_YMin < fStackX_14)) || (fStackX_14 <= rect->m_Height + rect->m_YMin)) {
        if ((rect->m_Height < 0.0) || (fStackX_14 < rect->m_YMin)) {
          bVar5 = false;
        }
        else {
          bVar5 = fStackX_14 < rect->m_Height + rect->m_YMin;
        }
      }
      else {
        bVar5 = true;
      }
      if (!(bool)(bVar5 & bVar4)) {
        if (lVar1 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lVar1);
        }
        return 0;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Rect FromCenterAndSize(Vector2, Vector2) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_FromCenterAndSize(Rect *__return_storage_ptr__,Vector2 center,Vector2 size,MethodInfo *method)

{
  fStackX_8 = size.x;
  fStackX_c = size.y;
  fStack_1 = center.x;
  __return_storage_ptr__->m_Width = fStackX_8;
  __return_storage_ptr__->m_Height = fStackX_c;
  __return_storage_ptr__->m_XMin = fStack_1 - fStackX_8 * 0.5;
  fStack_2 = center.y;
  __return_storage_ptr__->m_YMin = fStack_2 - fStackX_c * 0.5;
  return __return_storage_ptr__;
}


/* Rect FromPoints(IEnumerable`1[UnityEngine.Vector2]) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_FromPoints(Rect *__return_storage_ptr__,IEnumerable_1_UnityEngine_Vector2_ *points,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  __return_storage_ptr__->m_XMin = 0.0;
  __return_storage_ptr__->m_YMin = 0.0;
  __return_storage_ptr__->m_Width = 0.0;
  __return_storage_ptr__->m_Height = 0.0;
  fVar1 = 3.4028235e+38;
  fVar2 = 3.4028235e+38;
  fVar3 = -3.4028235e+38;
  fVar4 = -3.4028235e+38;
  if (points == (IEnumerable_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    plStack_5 = (longlong *)FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector2>,points);
    uStack_6 = 0;
    pplStack_7 = &plStack_5;
    fVar8 = -3.4028235e+38;
    uVar9 = uStack_10;
    while (uStack_10 = uVar9, plStack_5 != (longlong *)0x0) {
      cVar11 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar12 = plStack_5;
      if (cVar11 == '\0') {
        if (plStack_5 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_5);
        }
        __return_storage_ptr__->m_XMin = fVar1;
        __return_storage_ptr__->m_YMin = fVar2;
        __return_storage_ptr__->m_Width = fVar3 - fVar1;
        __return_storage_ptr__->m_Height = fVar8 - fVar2;
        return __return_storage_ptr__;
      }
      if (plStack_5 == (longlong *)0x0) goto code_?;
      lVar13 = *plStack_5;
      uVar14 = 0;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector2___Class **)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) == TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>) {
            puVar15 = (undefined8 *)((longlong)*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) * 0x10 + 0x138 + lVar13);
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar15 = (undefined8 *)FUN_?(plStack_5,TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>,0,TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector2>,fVar4);
code_?:
      uVar9 = (*(code *)*puVar15)(plVar12,puVar15[1]);
      uStack_10._0_4_ = (float)uVar9;
      if ((float)uStack_10 < fVar1) {
        fVar1 = (float)uStack_10;
      }
      uStack_10._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      if (uStack_10._4_4_ < fVar2) {
        fVar2 = uStack_10._4_4_;
      }
      if (fVar3 < (float)uStack_10) {
        fVar3 = (float)uStack_10;
      }
      fVar4 = fVar3;
      if (fVar8 < uStack_10._4_4_) {
        fVar8 = uStack_10._4_4_;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar16 = (code *)swi(3);
  pRVar17 = (Rect *)(*pcVar16)();
  return pRVar17;
}


/* Rect FromTexture2D(Texture2D) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_FromTexture2D(Rect *__return_storage_ptr__,Texture2D *texture2D,MethodInfo *method)

{
  if (texture2D != (Texture2D *)0x0) {
    iVar1 = (*(texture2D->klass->vtable).get_width.methodPtr)(texture2D,(texture2D->klass->vtable).get_width.method);
    iVar2 = (*(texture2D->klass->vtable).get_height.methodPtr)(texture2D,(texture2D->klass->vtable).get_height.method);
    __return_storage_ptr__->m_XMin = 0.0;
    __return_storage_ptr__->m_YMin = 0.0;
    __return_storage_ptr__->m_Width = (float)iVar1;
    __return_storage_ptr__->m_Height = (float)iVar2;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pRVar4 = (Rect *)(*pcVar3)();
  return pRVar4;
}


/* List`1[UnityEngine.Vector2] GetCornerPoints(Rect) */

List_1_UnityEngine_Vector2_ * Assembly-CSharp.dll::RTG::RectEx::RectEx_GetCornerPoints(Rect *rect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
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
  pLVar1 = (List_1_UnityEngine_Vector2_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar1,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  if (pLVar1 != (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(pLVar1,CONCAT44(rect->m_Height + rect->m_YMin,rect->m_XMin),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    FUN_?(pLVar1,CONCAT44(rect->m_Height + rect->m_YMin,rect->m_Width + rect->m_XMin),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    FUN_?(pLVar1,CONCAT44(rect->m_YMin,rect->m_Width + rect->m_XMin),MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    uVar2._0_4_ = rect->m_XMin;
    uVar2._4_4_ = rect->m_YMin;
    FUN_?(pLVar1,uVar2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_);
    return pLVar1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_Vector2_ *)(*pcVar3)();
  return pLVar1;
}


/* Rect Inflate(Rect, Single) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_Inflate(Rect *__return_storage_ptr__,Rect *rect,float inflateAmount,MethodInfo *method)

{
  fVar1 = rect->m_Width;
  if (fVar1 < 0.0) {
    fVar2 = fVar1 - inflateAmount;
  }
  else {
    fVar2 = fVar1 + inflateAmount;
  }
  fVar3 = rect->m_Height;
  if (fVar3 < 0.0) {
    fVar3 = fVar3 - inflateAmount;
  }
  else {
    fVar3 = fVar3 + inflateAmount;
  }
  fVar4 = rect->m_Height;
  fVar5 = rect->m_YMin;
  __return_storage_ptr__->m_XMin = (fVar1 * 0.5 + rect->m_XMin) - fVar2 * 0.5;
  __return_storage_ptr__->m_YMin = (fVar4 * 0.5 + fVar5) - fVar3 * 0.5;
  __return_storage_ptr__->m_Width = fVar2;
  __return_storage_ptr__->m_Height = fVar3;
  return __return_storage_ptr__;
}


/* Rect InvertScreenY(Rect) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_InvertScreenY(Rect *__return_storage_ptr__,Rect *rect,MethodInfo *method)

{
  fVar1 = rect->m_Width;
  fVar2 = rect->m_Height;
  fVar3 = rect->m_XMin;
  fVar4 = rect->m_YMin;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    pRVar7 = (Rect *)(*pcVar5)();
    return pRVar7;
  }
  pcRam_? = pcVar5;
  fVar8 = rect->m_Width;
  fVar9 = rect->m_Height;
  iVar10 = (*pcRam_?)();
  __return_storage_ptr__->m_XMin = (fVar1 * 0.5 + fVar3) - fVar8 * 0.5;
  __return_storage_ptr__->m_YMin = ((float)(iVar10 + -1) - (fVar2 * 0.5 + fVar4)) - fVar9 * 0.5;
  __return_storage_ptr__->m_Width = fVar8;
  __return_storage_ptr__->m_Height = fVar9;
  return __return_storage_ptr__;
}


/* Rect PlaceBelowCenterHrz(Rect, Rect) */

Rect * Assembly-CSharp.dll::RTG::RectEx::RectEx_PlaceBelowCenterHrz(Rect *__return_storage_ptr__,Rect *rect,Rect *other,MethodInfo *method)

{
  fVar1 = rect->m_Width;
  fVar2 = rect->m_Height;
  fVar3 = other->m_Height;
  fVar4 = other->m_YMin;
  fVar5 = other->m_Height;
  __return_storage_ptr__->m_XMin = (other->m_Width * 0.5 + other->m_XMin) - fVar1 * 0.5;
  __return_storage_ptr__->m_YMin = (((fVar3 * 0.5 + fVar4) - fVar5 * 0.5) - fVar2 * 0.5) - fVar2 * 0.5;
  __return_storage_ptr__->m_Width = fVar1;
  __return_storage_ptr__->m_Height = fVar2;
  return __return_storage_ptr__;
}

