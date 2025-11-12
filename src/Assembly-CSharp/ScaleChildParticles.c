
/* Void Start() */

void Assembly-CSharp.dll::ScaleChildParticles::ScaleChildParticles_Start
               (ScaleChildParticles *this,MethodInfo *method)

{
  pPVar1 = (this->fields).ToScale;
  uVar2 = 0;
  apPStackX_8[0] = (ParticleSystem *)0x0;
  pPStackX_20 = (ParticleSystem *)0x0;
  if (pPVar1 != (ParticleSystem__Array *)0x0) {
    ppPVar3 = pPVar1->vector;
    while( true ) {
      if ((int)pPVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pPVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pPVar5 = *ppPVar3;
      if (pPVar5 == (ParticleSystem *)0x0) break;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pcVar4 = pcRam_?;
      apPStackX_8[0] = pPVar5;
      pPStackX_18 = pPVar5;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar12 = (float)(*pcRam_?)(apPStackX_8);
      pPVar5 = (this->fields).Source;
      if (pPVar5 == (ParticleSystem *)0x0) break;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pcVar4 = pcRam_?;
      pPStackX_18 = pPVar5;
      pPStackX_20 = pPVar5;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar13 = (float)(*pcRam_?)(&pPStackX_20);
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(apPStackX_8,fVar13 * fVar12);
      uVar2 = uVar2 + 1;
      ppPVar3 = ppPVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

