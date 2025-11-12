
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TabMenuButtonAccessory+<LerpToSize>d__15::
     TabMenuButtonAccessory_LerpToSize_d_15_MoveNext
               (TabMenuButtonAccessory_LerpToSize_d_15 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  iVar2 = (this->fields).__1__state;
  pTVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
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
    if (pTVar3 == (TabMenuButtonAccessory *)0x0) goto code_?;
    pLVar8 = (pTVar3->fields).layoutElement;
    (pTVar3->fields).startTime = fVar7;
    if (pLVar8 == (LayoutElement *)0x0) goto code_?;
    fVar7 = (float)(*(pLVar8->klass->vtable).get_minHeight_1.methodPtr)
                              (pLVar8,(pLVar8->klass->vtable).get_minHeight_1.method);
    (this->fields)._height_5__2 = fVar7;
  }
  else {
    if (iVar2 != 1) {
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
  if (pTVar3 != (TabMenuButtonAccessory *)0x0) {
    pLVar8 = (pTVar3->fields).layoutElement;
    fVar9 = (this->fields)._height_5__2;
    fVar10 = (this->fields).size;
    if (fVar7 - (pTVar3->fields).startTime <= (pTVar3->fields).lerpTime) {
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
      fVar7 = (fVar7 - (pTVar3->fields).startTime) / (pTVar3->fields).lerpTime;
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if (_UNK_? < fVar7) {
        fVar7 = _UNK_?;
      }
      if (pLVar8 != (LayoutElement *)0x0) {
        (*(pLVar8->klass->vtable).set_minHeight.methodPtr)
                  (pLVar8,(fVar10 - fVar9) * fVar7 + fVar9,
                   (pLVar8->klass->vtable).set_minHeight.method);
        lVar11 = lRam_?;
        pOVar12 = (Object *)0x0;
        uStackX_8 = 0;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar12 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar12 + 1,&uStackX_8,(longlong)*(int *)(lVar11 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar13 = (uint)((ulonglong)(pOVar12 + 1) >> 0xc);
              uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
              do {
                uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
                puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
                LOCK();
                bVar17 = uVar15 == *puVar16;
                if (bVar17) {
                  *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
          }
        }
        else {
          pOVar12 = (Object *)((ulonglong)uStackX_c << 0x20);
        }
        bVar17 = iRam_? != 0;
        (this->fields).__2__current = pOVar12;
        if (bVar17) {
          uVar13 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    else if (pLVar8 != (LayoutElement *)0x0) {
      (*(pLVar8->klass->vtable).set_minHeight.methodPtr)
                (pLVar8,(fVar10 - fVar9) + fVar9,(pLVar8->klass->vtable).set_minHeight.method);
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar6 = (*pcVar1)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TabMenuButtonAccessory+<LerpToSize>d__15::
     TabMenuButtonAccessory_LerpToSize_d_15_System_Collections_IEnumerator_Reset
               (TabMenuButtonAccessory_LerpToSize_d_15 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__TabMenuButtonAccessory___LerpToSize_d__15__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

