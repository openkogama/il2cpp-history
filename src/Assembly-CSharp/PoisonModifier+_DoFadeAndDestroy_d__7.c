
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PoisonModifier+<DoFadeAndDestroy>d__7::
     PoisonModifier_DoFadeAndDestroy_d_7_MoveNext
               (PoisonModifier_DoFadeAndDestroy_d_7 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (PoisonModifier *)0x0) ||
       (pPVar2 = (this_00->fields).poisonParticles, pPVar2 == (ParticleSystem *)0x0))
    goto DAT_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
              (pPVar2,1,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (PoisonModifier *)0x0) goto DAT_?;
  }
  pPVar2 = (this_00->fields).poisonParticles;
  if (pPVar2 != (ParticleSystem *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pPVar2->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pcRam_? = pcVar4;
    iVar1 = (*pcRam_?)(pvVar3);
    lVar7 = lRam_?;
    if (iVar1 < 1) {
      PoisonModifier::PoisonModifier_Destroy(this_00,(MethodInfo *)0x0);
      bVar5 = 0;
    }
    else {
      pOVar8 = (Object *)0x0;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar8 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar8 + 1,&uStackX_8,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
            lVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar11 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
        }
      }
      else {
        pOVar8 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar12 = iRam_? != 0;
      (this->fields).__2__current = pOVar8;
      if (bVar12) {
        uVar9 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        lVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar11 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      (this->fields).__1__state = 1;
      bVar5 = 1;
    }
    return bVar5;
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PoisonModifier+<DoFadeAndDestroy>d__7::
     PoisonModifier_DoFadeAndDestroy_d_7_System_Collections_IEnumerator_Reset
               (PoisonModifier_DoFadeAndDestroy_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PoisonModifier___DoFadeAndDestroy_d__7__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

