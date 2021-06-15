
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealingMatModifier+<DoFadeAndDestroy>c__Iterator0::
     HealingMatModifier_DoFadeAndDestroy_c_Iterator0_MoveNext
               (HealingMatModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pHVar3 = (this->fields)._this;
    if ((pHVar3 == (HealingMatModifier *)0x0) ||
       (pPVar4 = (pHVar3->fields).healingParticles, pPVar4 == (ParticleSystem *)0x0))
    goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar4,(MethodInfo *)0x0);
  }
  else if (iVar2 != 1) {
    return 0;
  }
  pHVar3 = (pHVar1->fields)._this;
  if ((pHVar3 != (HealingMatModifier *)0x0) &&
     (pPVar4 = (pHVar3->fields).healingParticles, pPVar4 != (ParticleSystem *)0x0)) {
    iVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(pPVar4,(MethodInfo *)0x0);
    if (0 < iVar5) {
      this = (HealingMatModifier_DoFadeAndDestroy_c_Iterator0 *)&this;
      pOVar6 = (Object *)func_?();
      (pHVar1->fields)._current = pOVar6;
      if ((pHVar1->fields)._disposing == 0) {
        (pHVar1->fields)._PC = 1;
      }
      return 1;
    }
    pHVar3 = (pHVar1->fields)._this;
    if (pHVar3 != (HealingMatModifier *)0x0) {
      this = (HealingMatModifier_DoFadeAndDestroy_c_Iterator0 *)0x0;
      HealingMatModifier::HealingMatModifier_Destroy(pHVar3,(MethodInfo *)0x0);
      (pHVar1->fields)._PC = -1;
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

void Assembly-CSharp.dll::HealingMatModifier+<DoFadeAndDestroy>c__Iterator0::
     HealingMatModifier_DoFadeAndDestroy_c_Iterator0_Reset
               (HealingMatModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

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

