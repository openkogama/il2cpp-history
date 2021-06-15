
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CrumbleMatModifier+<DoFadeAndDestroy>c__Iterator0::
     CrumbleMatModifier_DoFadeAndDestroy_c_Iterator0_MoveNext
               (CrumbleMatModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pCVar3 = (this->fields)._this;
    if ((pCVar3 == (CrumbleMatModifier *)0x0) ||
       (pPVar4 = (pCVar3->fields).CrumbleParticles, pPVar4 == (ParticleSystem *)0x0))
    goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar4,(MethodInfo *)0x0);
  }
  else if (iVar2 != 1) {
    return 0;
  }
  pCVar3 = (pCVar1->fields)._this;
  if ((pCVar3 != (CrumbleMatModifier *)0x0) &&
     (pPVar4 = (pCVar3->fields).CrumbleParticles, pPVar4 != (ParticleSystem *)0x0)) {
    iVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(pPVar4,(MethodInfo *)0x0);
    if (0 < iVar5) {
      this = (CrumbleMatModifier_DoFadeAndDestroy_c_Iterator0 *)&this;
      pOVar6 = (Object *)func_?();
      (pCVar1->fields)._current = pOVar6;
      if ((pCVar1->fields)._disposing == 0) {
        (pCVar1->fields)._PC = 1;
      }
      return 1;
    }
    pCVar3 = (pCVar1->fields)._this;
    if (pCVar3 != (CrumbleMatModifier *)0x0) {
      this = (CrumbleMatModifier_DoFadeAndDestroy_c_Iterator0 *)0x0;
      CrumbleMatModifier::CrumbleMatModifier_Destroy(pCVar3,(MethodInfo *)0x0);
      (pCVar1->fields)._PC = -1;
      return 0;
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::CrumbleMatModifier+<DoFadeAndDestroy>c__Iterator0::
     CrumbleMatModifier_DoFadeAndDestroy_c_Iterator0_Reset
               (CrumbleMatModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

