
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVTextMsgObject+<FullFadeInAnimation>d__35::
     MVTextMsgObject_FullFadeInAnimation_d_35_MoveNext
               (MVTextMsgObject_FullFadeInAnimation_d_35 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    pTVar2 = (this->fields).fontAsset;
    (this->fields).__1__state = -1;
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
    if (pTVar2 != (TMP_FontAsset *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar2->fields)._._._.m_CachedPtr != (void *)0x0) {
        if (this_00 == (MVTextMsgObject *)0x0) goto code_?;
        MVTextMsgObject::MVTextMsgObject_SetFont(this_00,(this->fields).fontAsset,(MethodInfo *)0x0)
        ;
        this_01 = (this_00->fields).canvas;
        if (this_01 == (Canvas *)0x0) goto code_?;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_01,(MethodInfo *)0x0);
        value = MVTextMsgObject::MVTextMsgObject_CalculateSizeDeltas(this_00,(MethodInfo *)0x0);
        if (pTVar3 == (Transform *)0x0) goto code_?;
        pTVar4 = (Transform *)0x0;
        if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar4 = pTVar3;
        }
        if (pTVar4 == (Transform *)0x0) goto code_?;
        pTVar4 = (Transform *)0x0;
        if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar4 = pTVar3;
        }
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  ((RectTransform *)pTVar4,value,(MethodInfo *)0x0);
      }
    }
    (this->fields)._fadeTime_5__2 = 0.0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar5 = _UNK_?;
  pfVar6 = &(this->fields)._fadeTime_5__2;
  if (*pfVar6 <= _UNK_? && _UNK_? != *pfVar6) {
    fVar7 = (this->fields)._fadeTime_5__2;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
    pcRam_? = pcVar8;
    fVar11 = (float)(*pcRam_?)();
    fVar11 = fVar11 + fVar7;
    (this->fields)._fadeTime_5__2 = fVar11;
    if ((this_00 != (MVTextMsgObject *)0x0) &&
       (pCVar12 = (this_00->fields).canvasGroup, pCVar12 != (CanvasGroup *)0x0)) {
      fVar5 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,fVar5,fVar11,(MethodInfo *)0x0);
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar12,fVar5,(MethodInfo *)0x0);
      bVar13 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar13) {
        uVar14 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
        do {
          uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar16 == *puVar17;
          if (bVar13) {
            *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else if ((this_00 != (MVTextMsgObject *)0x0) &&
          (pCVar12 = (this_00->fields).canvasGroup, pCVar12 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar12,_UNK_?,(MethodInfo *)0x0);
    return 0;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar10 = (*pcVar8)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVTextMsgObject+<FullFadeInAnimation>d__35::
     MVTextMsgObject_FullFadeInAnimation_d_35_System_Collections_IEnumerator_Reset
               (MVTextMsgObject_FullFadeInAnimation_d_35 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MVTextMsgObject___FullFadeInAnimation_d__35__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

