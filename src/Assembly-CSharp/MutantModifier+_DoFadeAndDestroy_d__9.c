
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MutantModifier+<DoFadeAndDestroy>d__9::
     MutantModifier_DoFadeAndDestroy_d_9_MoveNext
               (MutantModifier_DoFadeAndDestroy_d_9 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  pPStackX_18 = (ParticleSystem *)0x0;
  pPStackX_20 = (ParticleSystem *)0x0;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (MutantModifier *)0x0) ||
       (pPVar2 = (this_00->fields).fireParticles, pPVar2 == (ParticleSystem *)0x0))
    goto DAT_?;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pcVar8 = pcRam_?;
    pPStackX_8 = pPVar2;
    pPStackX_18 = pPVar2;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&pPStackX_18);
    pPVar2 = (this_00->fields).fireParticles;
    if (pPVar2 == (ParticleSystem *)0x0) goto DAT_?;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pcVar8 = pcRam_?;
    pPStackX_8 = pPVar2;
    pPStackX_20 = pPVar2;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&pPStackX_20);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (MutantModifier *)0x0) goto DAT_?;
  }
  pPVar2 = (this_00->fields).fireParticles;
  if (pPVar2 != (ParticleSystem *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar11 = (pPVar2->fields)._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar2,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      bVar10 = (*pcVar8)();
      return bVar10;
    }
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
    iVar1 = (*pcRam_?)(pvVar11);
    lVar12 = lRam_?;
    if (iVar1 < 1) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      bVar10 = 0;
    }
    else {
      pPStackX_8 = (ParticleSystem *)((ulonglong)pPStackX_8 & 0xffffffff00000000);
      pPVar2 = pPStackX_8;
      if ((*(int *)(lRam_? + 0x28) < 0) &&
         ((*(longlong *)(lRam_? + 0x60) == 0 ||
          (pPVar2 = (ParticleSystem *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
        pPVar2 = (ParticleSystem *)FUN_?(lRam_?);
        FUN_?(&pPVar2->fields,&pPStackX_8,(longlong)*(int *)(lVar12 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&pPVar2->fields >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar5 == *puVar6;
            if (bVar7) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
      }
      bVar7 = iRam_? != 0;
      (this->fields).__2__current = (Object *)pPVar2;
      if (bVar7) {
        uVar3 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      (this->fields).__1__state = 1;
      bVar10 = 1;
    }
    return bVar10;
  }
DAT_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar10 = (*pcVar8)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MutantModifier+<DoFadeAndDestroy>d__9::
     MutantModifier_DoFadeAndDestroy_d_9_System_Collections_IEnumerator_Reset
               (MutantModifier_DoFadeAndDestroy_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MutantModifier___DoFadeAndDestroy_d__9__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

