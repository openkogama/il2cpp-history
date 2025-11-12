
/* Void PopColor() */

void Assembly-CSharp.dll::RTG::GUIEx::GUIEx_PopColor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GUIEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GUIEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = TypeInfo__RTG__GUIEx->static_fields->_colorStack;
  if (pSVar1 != (Stack_1_UnityEngine_Color_ *)0x0) {
    if ((pSVar1->fields)._size < 1) {
      return;
    }
    if (*(int *)&(TypeInfo__RTG__GUIEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = TypeInfo__RTG__GUIEx->static_fields->_colorStack;
    if (pSVar1 != (Stack_1_UnityEngine_Color_ *)0x0) {
      iVar2 = (pSVar1->fields)._size;
      pCVar3 = (pSVar1->fields)._array;
      if (pCVar3 != (Color__Array *)0x0) {
        if ((uint)pCVar3->max_length <= iVar2 - 1U) {
          uVar4 = func_?(MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Pop__
                                      ->klass->rgctx_data,10);
          FUN_?(pSVar1,uVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar6 = &(pSVar1->fields)._version;
        *piVar6 = *piVar6 + 1;
        (pSVar1->fields)._size = iVar2 - 1U;
        if (iVar2 - 1U < (uint)pCVar3->max_length) {
          pCVar7 = pCVar3->vector + (longlong)iVar2 + -1;
          uVar4._0_4_ = pCVar7->r;
          uVar4._4_4_ = pCVar7->g;
          uVar8._0_4_ = pCVar7->b;
          uVar8._4_4_ = pCVar7->a;
          if (*(int *)&(TypeInfo__UnityEngine__GUI->_1).field_0x1c == 0) {
            FUN_?();
          }
          uStack_9 = uVar4;
          uStack_10 = uVar8;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__GUI);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__GUI->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(&uStack_9);
          return;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PushColor(Color) */

void Assembly-CSharp.dll::RTG::GUIEx::GUIEx_PushColor(Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GUIEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Push_UnityEngine__Color_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GUIEx->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__RTG__GUIEx);
  }
  this = (Stack_1_UnityEngine_Rect_ *)TypeInfo__RTG__GUIEx->static_fields->_colorStack;
  if (*(int *)&(TypeInfo__UnityEngine__GUI->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  RStack_1.m_XMin = 0.0;
  RStack_1.m_YMin = 0.0;
  RStack_1.m_Width = 0.0;
  RStack_1.m_Height = 0.0;
  if (*(int *)&(TypeInfo__UnityEngine__GUI->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(&RStack_1);
  if ((this == (Stack_1_UnityEngine_Rect_ *)0x0) ||
     (pRVar4 = (this->fields)._array, pRVar4 == (Rect__Array *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = (this->fields)._size;
  if (uVar5 < (uint)pRVar4->max_length) {
    pRVar6 = pRVar4->vector + (int)uVar5;
    pRVar6->m_XMin = RStack_1.m_XMin;
    pRVar6->m_YMin = RStack_1.m_YMin;
    pRVar6->m_Width = RStack_1.m_Width;
    pRVar6->m_Height = RStack_1.m_Height;
    piVar7 = &(this->fields)._version;
    *piVar7 = *piVar7 + 1;
    (this->fields)._size = uVar5 + 1;
  }
  else {
    RStack_8.m_XMin = RStack_1.m_XMin;
    RStack_8.m_YMin = RStack_1.m_YMin;
    RStack_8.m_Width = RStack_1.m_Width;
    RStack_8.m_Height = RStack_1.m_Height;
    mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::Rect]::
    Stack_1_UnityEngine_Rect__PushWithResize
              (this,&RStack_8,
               MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Push_UnityEngine__Color_
               ->klass->rgctx_data[0xc].method);
  }
  fStack_9 = color->r;
  fStack_10 = color->g;
  fStack_11 = color->b;
  fStack_12 = color->a;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__GUI->_1).field_0x1c == 0) {
    FUN_?();
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
  (*pcRam_?)(&fStack_9);
  return;
}


/* GUIEx() */

void Assembly-CSharp.dll::RTG::GUIEx::GUIEx__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GUIEx);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Stack__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Stack<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (Stack_1_UnityEngine_Color_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Stack<UnityEngine::Color>);
  pCVar2 = (Color__Array *)
           FUN_?(MethodInfo__System__Collections__Generic__Stack<UnityEngine::Color>__Stack__
                         ->klass->rgctx_data->rgctxDataDummy);
  bVar3 = iRam_? != 0;
  (pSVar1->fields)._array = pCVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
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
  TypeInfo__RTG__GUIEx->static_fields->_colorStack = pSVar1;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__RTG__GUIEx->static_fields >> 0xc);
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
  return;
}

