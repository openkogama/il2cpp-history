
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FrozenModifier+<DoFadeAndDestroy>d__7::
     FrozenModifier_DoFadeAndDestroy_d_7_MoveNext
               (FrozenModifier_DoFadeAndDestroy_d_7 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (FrozenModifier *)0x0) ||
       (pPVar2 = (this_00->fields).fireParticles, pPVar2 == (ParticleSystem *)0x0))
    goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar2,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (FrozenModifier *)0x0) goto code_?;
  }
  pPVar2 = (this_00->fields).fireParticles;
  if (pPVar2 != (ParticleSystem *)0x0) {
    iVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(pPVar2,(MethodInfo *)0x0);
    if (iVar3 < 1) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return 0;
    }
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32);
    (this->fields).__2__current = pOVar4;
    func_?(&(this->fields).__2__current,pOVar4);
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::FrozenModifier+<DoFadeAndDestroy>d__7::
     FrozenModifier_DoFadeAndDestroy_d_7_System_Collections_IEnumerator_Reset
               (FrozenModifier_DoFadeAndDestroy_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__FrozenModifier___DoFadeAndDestroy_d__7__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

