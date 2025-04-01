
/* Void Start() */

void Assembly-CSharp.dll::DestroyOnParticleSystemFinish::DestroyOnParticleSystemFinish_Start
               (DestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTStack_1 = (ThemeAttribute_1_System_Single___Class *)0x0;
  pMStack_2 = (MonitorData *)0x0;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  pPVar3 = (this->fields).system;
  if (pPVar3 != (ParticleSystem *)0x0) {
    PStack_4.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
    fVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_get_duration_Injected(&PStack_4,(MethodInfo *)0x0);
    pPVar3 = (this->fields).system;
    if (pPVar3 != (ParticleSystem *)0x0) {
      PStack_4.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
      pPVar6 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
               ParticleSystem_MainModule_get_startLifetime
                         ((ParticleSystem_MinMaxCurve *)&puStack_7,&PStack_4,(MethodInfo *)0x0);
      pTStack_1 = (ThemeAttribute_1_System_Single___Class *)pPVar6->m_Mode;
      pMStack_2 = (MonitorData *)pPVar6->m_CurveMultiplier;
      fVar8 = ThemeAttributes::ThemeAttribute`1[System::Single]::
              ThemeAttribute_1_System_Single__get_Value
                        ((ThemeAttribute_1_System_Single_ *)&pTStack_1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,fVar8 + fVar5,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

