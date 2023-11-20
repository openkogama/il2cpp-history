
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CFX_ShurikenThreadFix+<WaitFrame>d__2::
     CFX_ShurikenThreadFix_WaitFrame_d_2_MoveNext
               (CFX_ShurikenThreadFix_WaitFrame_d_2 *this,MethodInfo *method)

{
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  iVar2 = (this->fields).__1__state;
  pCVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__2__current = (Object *)0x0;
    (this->fields).__1__state = -1;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar2 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pCVar3 != (CFX_ShurikenThreadFix *)0x0) {
    pPVar4 = (pCVar3->fields).systems;
    uVar5 = 0;
    if (pPVar4 != (ParticleSystem__Array *)0x0) {
      ppPVar6 = pPVar4->vector;
      while( true ) {
        if ((int)pPVar4->max_length <= (int)uVar5) {
          return 0;
        }
        if (pPVar4->max_length <= uVar5) break;
        this_00 = *ppPVar6;
        if (this_00 == (ParticleSystem *)0x0) goto code_?;
        PStack_1.m_ParticleSystem =
             (ParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_enabled_Injected(&PStack_1,1,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (this_00,1,(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        ppPVar6 = ppPVar6 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
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
  func_?(&
                  MethodInfo__CFX_ShurikenThreadFix___WaitFrame_d__2__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

