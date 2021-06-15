
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FrozenModifier+<DoFadeAndDestroy>c__Iterator0::
     FrozenModifier_DoFadeAndDestroy_c_Iterator0_MoveNext
               (FrozenModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    pFVar3 = (this->fields)._this;
    if ((pFVar3 == (FrozenModifier *)0x0) ||
       (pPVar4 = (pFVar3->fields).fireParticles, pPVar4 == (ParticleSystem *)0x0))
    goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar4,(MethodInfo *)0x0);
  }
  else if (iVar2 != 1) {
    return 0;
  }
  pFVar3 = (pFVar1->fields)._this;
  if ((pFVar3 != (FrozenModifier *)0x0) &&
     (pPVar4 = (pFVar3->fields).fireParticles, pPVar4 != (ParticleSystem *)0x0)) {
    iVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(pPVar4,(MethodInfo *)0x0);
    if (0 < iVar5) {
      this = (FrozenModifier_DoFadeAndDestroy_c_Iterator0 *)&this;
      pOVar6 = (Object *)func_?();
      (pFVar1->fields)._current = pOVar6;
      if ((pFVar1->fields)._disposing == 0) {
        (pFVar1->fields)._PC = 1;
      }
      return 1;
    }
    pFVar3 = (pFVar1->fields)._this;
    if (pFVar3 != (FrozenModifier *)0x0) {
      obj = (FrozenModifier_DoFadeAndDestroy_c_Iterator0 *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pFVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        method = (MethodInfo *)TypeInfo__UnityEngine__Object;
        this = (FrozenModifier_DoFadeAndDestroy_c_Iterator0 *)&UNK_?;
        func_?();
      }
      method = (MethodInfo *)0x0;
      this = obj;
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      (pFVar1->fields)._PC = -1;
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

void Assembly-CSharp.dll::FrozenModifier+<DoFadeAndDestroy>c__Iterator0::
     FrozenModifier_DoFadeAndDestroy_c_Iterator0_Reset
               (FrozenModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

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

