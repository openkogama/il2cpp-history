
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::CFX_ShurikenThreadFix+<WaitFrame>d__2::
     CFX_ShurikenThreadFix_WaitFrame_d_2_MoveNext
               (CFX_ShurikenThreadFix_WaitFrame_d_2 *this,MethodInfo *method)

{
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  iVar2 = (this->fields).__1__state;
  pCVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    ppOVar4 = &(this->fields).__2__current;
    (this->fields).__1__state = -1;
    *ppOVar4 = (Object *)0x0;
    func_?(ppOVar4,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar2 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (pCVar3 != (CFX_ShurikenThreadFix *)0x0) {
    pPVar5 = (pCVar3->fields).systems;
    uVar6 = 0;
    if (pPVar5 != (ParticleSystem__Array *)0x0) {
      ppPVar7 = pPVar5->vector;
      while( true ) {
        if ((int)pPVar5->max_length <= (int)uVar6) {
          return 0;
        }
        if (pPVar5->max_length <= uVar6) break;
        this_00 = *ppPVar7;
        if (this_00 == (ParticleSystem *)0x0) goto code_?;
        PStack_1.m_ParticleSystem =
             (ParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_enabled_Injected(&PStack_1,1,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (this_00,1,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
        ppPVar7 = ppPVar7 + 1;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
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

