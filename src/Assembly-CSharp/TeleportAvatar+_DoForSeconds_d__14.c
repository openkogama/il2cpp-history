
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>d__14::
     TeleportAvatar_DoForSeconds_d_14_MoveNext
               (TeleportAvatar_DoForSeconds_d_14 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pOVar2 = (Object *)0x0;
  if (iVar1 == 0) {
    (this->fields)._t_5__2 = 0.0;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar3 = (this->fields).duration;
  pfVar4 = &(this->fields)._t_5__2;
  (this->fields).__1__state = -1;
  pTVar5 = (this->fields).body;
  if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
    if (pTVar5 != (TeleportAvatar_ActionDelegate *)0x0) {
      (*(pTVar5->fields)._._.invoke_impl)
                ((pTVar5->fields)._._.method_code,_UNK_?,(pTVar5->fields)._._.method);
      return 0;
    }
  }
  else if (pTVar5 != (TeleportAvatar_ActionDelegate *)0x0) {
    (*(pTVar5->fields)._._.invoke_impl)
              ((pTVar5->fields)._._.method_code,(this->fields)._t_5__2 / fVar3,
               (pTVar5->fields)._._.method);
    fVar3 = (this->fields)._t_5__2;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      bVar8 = (*pcVar6)();
      return bVar8;
    }
    pcRam_? = pcVar6;
    fVar9 = (float)(*pcRam_?)();
    uStackX_8 = 0;
    (this->fields)._t_5__2 = fVar9 + fVar3;
    lVar10 = lRam_?;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar10 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar11 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
          do {
            uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
            puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
            LOCK();
            bVar15 = uVar13 == *puVar14;
            if (bVar15) {
              *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
            }
            UNLOCK();
          } while (!bVar15);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar15 = iRam_? != 0;
    (this->fields).__2__current = pOVar2;
    if (bVar15) {
      uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar8 = (*pcVar6)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<DoForSeconds>d__14::
     TeleportAvatar_DoForSeconds_d_14_System_Collections_IEnumerator_Reset
               (TeleportAvatar_DoForSeconds_d_14 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__TeleportAvatar___DoForSeconds_d__14__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

