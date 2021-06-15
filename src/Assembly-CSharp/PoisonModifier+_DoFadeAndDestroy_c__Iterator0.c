
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PoisonModifier+<DoFadeAndDestroy>c__Iterator0::
     PoisonModifier_DoFadeAndDestroy_c_Iterator0_MoveNext
               (PoisonModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pPVar3 = (this->fields)._this;
    if ((pPVar3 == (PoisonModifier *)0x0) ||
       (pPVar4 = (pPVar3->fields).poisonParticles, pPVar4 == (ParticleSystem *)0x0))
    goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar4,(MethodInfo *)0x0);
  }
  else if (iVar2 != 1) {
    return 0;
  }
  pPVar3 = (pPVar1->fields)._this;
  if ((pPVar3 != (PoisonModifier *)0x0) &&
     (pPVar4 = (pPVar3->fields).poisonParticles, pPVar4 != (ParticleSystem *)0x0)) {
    iVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(pPVar4,(MethodInfo *)0x0);
    if (0 < iVar5) {
      this = (PoisonModifier_DoFadeAndDestroy_c_Iterator0 *)&this;
      pOVar6 = (Object *)func_?();
      (pPVar1->fields)._current = pOVar6;
      if ((pPVar1->fields)._disposing == 0) {
        (pPVar1->fields)._PC = 1;
      }
      return 1;
    }
    pPVar3 = (pPVar1->fields)._this;
    if (pPVar3 != (PoisonModifier *)0x0) {
      this = (PoisonModifier_DoFadeAndDestroy_c_Iterator0 *)0x0;
      PoisonModifier::PoisonModifier_Destroy(pPVar3,(MethodInfo *)0x0);
      (pPVar1->fields)._PC = -1;
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

void Assembly-CSharp.dll::PoisonModifier+<DoFadeAndDestroy>c__Iterator0::
     PoisonModifier_DoFadeAndDestroy_c_Iterator0_Reset
               (PoisonModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

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

