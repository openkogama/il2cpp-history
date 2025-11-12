
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::SizeModifier+<DoForSeconds>d__17::SizeModifier_DoForSeconds_d_17_MoveNext
               (SizeModifier_DoForSeconds_d_17 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (SizeModifier *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pSVar3 = (this->fields).body;
      if (pSVar3 == (SizeModifier_ActionDelegate *)0x0) goto code_?;
      (*(pSVar3->fields)._._.invoke_impl)
                ((pSVar3->fields)._._.method_code,(this_00->fields).timeToSize,
                 (pSVar3->fields)._._.method);
    }
    (this->fields)._t_5__2 = 0.0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar4 = (this->fields).duration;
  pfVar5 = &(this->fields)._t_5__2;
  if (fVar4 < *pfVar5 || fVar4 == *pfVar5) {
    if ((this_00 != (SizeModifier *)0x0) &&
       (pSVar3 = (this->fields).body, pSVar3 != (SizeModifier_ActionDelegate *)0x0)) {
      (*(pSVar3->fields)._._.invoke_impl)
                ((pSVar3->fields)._._.method_code,(this_00->fields).timeToSize,
                 (pSVar3->fields)._._.method);
      return 0;
    }
  }
  else {
    pSVar3 = (this->fields).body;
    if (pSVar3 != (SizeModifier_ActionDelegate *)0x0) {
      (*(pSVar3->fields)._._.invoke_impl)
                ((pSVar3->fields)._._.method_code,(this->fields)._t_5__2 / fVar4,
                 (pSVar3->fields)._._.method);
      fVar4 = (this->fields)._t_5__2;
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        bVar2 = (*pcVar6)();
        return bVar2;
      }
      pcRam_? = pcVar6;
      fVar8 = (float)(*pcRam_?)();
      auStackX_8[0] = 0;
      (this->fields)._t_5__2 = fVar8 + fVar4;
      pOVar9 = (Object *)FUN_?(uRam_?,auStackX_8);
      bVar10 = iRam_? != 0;
      (this->fields).__2__current = pOVar9;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar13 == *puVar14;
          if (bVar10) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::SizeModifier+<DoForSeconds>d__17::
     SizeModifier_DoForSeconds_d_17_System_Collections_IEnumerator_Reset
               (SizeModifier_DoForSeconds_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__SizeModifier___DoForSeconds_d__17__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

