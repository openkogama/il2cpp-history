
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CFX_ShurikenThreadFix+<WaitFrame>d__2::
     CFX_ShurikenThreadFix_WaitFrame_d_2_MoveNext
               (CFX_ShurikenThreadFix_WaitFrame_d_2 *this,MethodInfo *method)

{
  uVar1 = 0;
  iVar2 = (this->fields).__1__state;
  apPStackX_18[0] = (ParticleSystem *)0x0;
  pCVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    bVar4 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar4) {
      uVar1 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      lVar5 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar4 = uVar6 == *puVar7;
        if (bVar4) {
          *puVar7 = uVar6 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar2 == 1) {
    (this->fields).__1__state = -1;
    if ((pCVar3 == (CFX_ShurikenThreadFix *)0x0) ||
       (pPVar8 = (pCVar3->fields).systems, pPVar8 == (ParticleSystem__Array *)0x0)) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar10 = (*pcVar9)();
      return bVar10;
    }
    ppPVar11 = pPVar8->vector;
    for (; (int)uVar1 < (int)pPVar8->max_length; uVar1 = uVar1 + 1) {
      if ((uint)pPVar8->max_length <= uVar1) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      obj = *ppPVar11;
      if (obj == (ParticleSystem *)0x0) goto code_?;
      if (iRam_? != 0) {
        uVar12 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
        lVar5 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar4 = uVar6 == *puVar7;
          if (bVar4) {
            *puVar7 = uVar6 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pcVar9 = pcRam_?;
      pPStackX_8 = obj;
      apPStackX_18[0] = obj;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(apPStackX_18);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (obj->fields)._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar9 = (code *)swi(3);
        bVar10 = (*pcVar9)();
        return bVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar14);
      ppPVar11 = ppPVar11 + 1;
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::CFX_ShurikenThreadFix+<WaitFrame>d__2::
     CFX_ShurikenThreadFix_WaitFrame_d_2_System_Collections_IEnumerator_Reset
               (CFX_ShurikenThreadFix_WaitFrame_d_2 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__CFX_ShurikenThreadFix___WaitFrame_d__2__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

