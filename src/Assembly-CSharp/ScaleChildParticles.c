
/* Void Start() */

void Assembly-CSharp.dll::ScaleChildParticles::ScaleChildParticles_Start
               (ScaleChildParticles *this,MethodInfo *method)

{
  uVar1 = 0;
  PStack_2.m_ParticleSystem = (ParticleSystem *)0x0;
  pPVar3 = (this->fields).ToScale;
  if (pPVar3 != (ParticleSystem__Array *)0x0) {
    ppPVar4 = pPVar3->vector;
    while( true ) {
      if ((int)pPVar3->max_length <= (int)uVar1) {
        return;
      }
      if (pPVar3->max_length <= uVar1) break;
      if (*ppPVar4 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(*ppPVar4,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,(MethodInfo *)0x0);
      this_00 = (this->fields).Source;
      if (this_00 == (ParticleSystem *)0x0) goto code_?;
      PStack_2.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
      fVar5 = 0.0;
      fVar6 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                        (&PStack_2,(MethodInfo *)0x0);
      PStack_2.m_ParticleSystem = (ParticleSystem *)&UNK_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,fVar6 * fVar5,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppPVar4 = ppPVar4 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

