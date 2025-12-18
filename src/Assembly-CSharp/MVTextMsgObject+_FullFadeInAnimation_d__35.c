
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVTextMsgObject+<FullFadeInAnimation>d__35::MVTextMsgObject_FullFadeInAnimation_d_35_MoveNext(MVTextMsgObject_FullFadeInAnimation_d_35 *this,MethodInfo *method)

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
        MVTextMsgObject::MVTextMsgObject_SetFont(this_00,(this->fields).fontAsset,(MethodInfo *)0x0);
        this_01 = (this_00->fields).canvas;
        if (this_01 == (Canvas *)0x0) goto code_?;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
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
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta((RectTransform *)pTVar4,value,(MethodInfo *)0x0);
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
  pfVar5 = &(this->fields)._fadeTime_5__2;
  if (*pfVar5 <= 0.15 && *pfVar5 != 0.15) {
    fVar6 = (this->fields)._fadeTime_5__2;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      bVar9 = (*pcVar7)();
      return bVar9;
    }
    pcRam_? = pcVar7;
    fVar10 = (float)(*pcRam_?)();
    fVar10 = fVar10 + fVar6;
    (this->fields)._fadeTime_5__2 = fVar10;
    if ((this_00 != (MVTextMsgObject *)0x0) && (pCVar11 = (this_00->fields).canvasGroup, pCVar11 != (CanvasGroup *)0x0)) {
      fVar6 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.15,fVar10,(MethodInfo *)0x0);
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar11,fVar6,(MethodInfo *)0x0);
      bVar12 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar15 == *puVar16;
          if (bVar12) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else if ((this_00 != (MVTextMsgObject *)0x0) && (pCVar11 = (this_00->fields).canvasGroup, pCVar11 != (CanvasGroup *)0x0)) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar11,1.0,(MethodInfo *)0x0);
    return 0;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar9 = (*pcVar7)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVTextMsgObject+<FullFadeInAnimation>d__35::MVTextMsgObject_FullFadeInAnimation_d_35_System_Collections_IEnumerator_Reset(MVTextMsgObject_FullFadeInAnimation_d_35 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MVTextMsgObject___FullFadeInAnimation_d__35__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

