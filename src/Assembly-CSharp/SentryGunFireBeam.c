
/* Void OnUpdate() */

void Assembly-CSharp.dll::SentryGunFireBeam::SentryGunFireBeam_OnUpdate
               (SentryGunFireBeam *this,MethodInfo *method)

{
  uVar1 = (this->fields)._._EndPosition_k__BackingField.x;
  uVar2 = (this->fields)._._EndPosition_k__BackingField.y;
  uVar3 = (this->fields)._._StartPosition_k__BackingField.x;
  uVar4 = (this->fields)._._StartPosition_k__BackingField.y;
  fStack_5 = (this->fields)._._EndPosition_k__BackingField.z -
              (this->fields)._._StartPosition_k__BackingField.z;
  apPStackX_8[0] = (this->fields).fireParticles;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  if (apPStackX_8[0] == (ParticleSystem *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    method = (MethodInfo *)(ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)((longlong)method * 8 + 0xADDR);
      puVar10 = (ulonglong *)((longlong)method * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  apPStackX_18[0] = apPStackX_8[0];
  uVar12 = FUN_?(&uStack_6,method);
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(apPStackX_18,uVar12);
  return;
}

