
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnHoverEvent>d__43::
     AccessoryInventoryViewItem_OnHoverEvent_d_43_MoveNext
               (AccessoryInventoryViewItem_OnHoverEvent_d_43 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  pAVar2 = (this->fields).__4__this;
  iVar3 = (this->fields).__1__state;
  if (iVar3 == 0) {
    (this->fields).__1__state = -1;
    pcVar4 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar1, pcVar1 == (code *)0x0))
    {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      bVar6 = (*pcVar1)();
      return bVar6;
    }
    pcRam_? = pcVar4;
    fVar7 = (float)(*pcVar1)();
    (this->fields)._startTime_5__2 = fVar7;
    if ((pAVar2 == (AccessoryInventoryViewItem *)0x0) ||
       (pRVar8 = (pAVar2->fields).previewImage, pRVar8 == (RectTransform *)0x0))
    goto code_?;
    VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                       (pRVar8,(MethodInfo *)0x0);
    fStackX_8 = VVar9.x;
    fStackX_c = VVar9.y;
    fVar7 = (this->fields).sizeOffset;
    (this->fields)._startSize_5__3.x = fStackX_8;
    (this->fields)._targetSize_5__4.x = (this->fields).sizeOffset;
    (this->fields)._startSize_5__3.y = fStackX_c;
    (this->fields)._targetSize_5__4.y = fVar7;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return 0;
      }
      (this->fields).__1__state = -1;
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    bVar6 = (*pcVar1)();
    return bVar6;
  }
  pcRam_? = pcVar1;
  fVar7 = (float)(*pcRam_?)();
  if (pAVar2 != (AccessoryInventoryViewItem *)0x0) {
    pRVar8 = (pAVar2->fields).previewImage;
    pVVar10 = &(this->fields)._startSize_5__3;
    fVar11 = pVVar10->x;
    fVar12 = (this->fields)._startSize_5__3.y;
    pVVar13 = &(this->fields)._targetSize_5__4;
    fVar14 = pVVar13->x;
    fVar15 = (this->fields)._targetSize_5__4.y;
    if ((pAVar2->fields).effectDuration <= fVar7 - (this->fields)._startTime_5__2) {
      VVar9 = (Vector2)FUN_?(*pVVar10,*pVVar13,_UNK_?);
      if (pRVar8 == (RectTransform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar8,VVar9,(MethodInfo *)0x0);
      bVar16 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar16) {
        uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
        do {
          uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
          puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
          LOCK();
          bVar16 = uVar19 == *puVar20;
          if (bVar16) {
            *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
          }
          UNLOCK();
        } while (!bVar16);
      }
      (this->fields).__1__state = 2;
    }
    else {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar1 = (code *)swi(3);
        bVar6 = (*pcVar1)();
        return bVar6;
      }
      pcRam_? = pcVar1;
      fVar7 = (float)(*pcRam_?)();
      fVar7 = (fVar7 - (this->fields)._startTime_5__2) / (pAVar2->fields).effectDuration;
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if (_UNK_? < fVar7) {
        fVar7 = _UNK_?;
      }
      if (pRVar8 == (RectTransform *)0x0) goto code_?;
      VVar9.y = (fVar15 - fVar12) * fVar7 + fVar12;
      VVar9.x = (fVar14 - fVar11) * fVar7 + fVar11;
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (pRVar8,VVar9,(MethodInfo *)0x0);
      bVar16 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar16) {
        uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
        do {
          uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
          puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
          LOCK();
          bVar16 = uVar19 == *puVar20;
          if (bVar16) {
            *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
          }
          UNLOCK();
        } while (!bVar16);
      }
      (this->fields).__1__state = 1;
    }
    return 1;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar6 = (*pcVar1)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryInventoryViewItem+<OnHoverEvent>d__43::
     AccessoryInventoryViewItem_OnHoverEvent_d_43_System_Collections_IEnumerator_Reset
               (AccessoryInventoryViewItem_OnHoverEvent_d_43 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AccessoryInventoryViewItem___OnHoverEvent_d__43__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

