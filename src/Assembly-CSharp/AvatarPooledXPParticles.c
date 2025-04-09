
/* Void Initialize(Int32) */

void Assembly-CSharp.dll::AvatarPooledXPParticles::AvatarPooledXPParticles_Initialize
               (AvatarPooledXPParticles *this,int32_t xpDelta,MethodInfo *method)

{
  pAVar1 = this;
  pTStack_2 = (ThemeAttribute_1_System_Single___Class *)0x0;
  pPVar3 = (this->fields).xpParticleSystem;
  (this->fields).hasStarted = 0;
  if (pPVar3 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (pPVar3,(MethodInfo *)0x0);
    pPVar3 = (pAVar1->fields).xpParticleSystem;
    if (pPVar3 != (ParticleSystem *)0x0) {
      this = (AvatarPooledXPParticles *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
      pPVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
                ParticleSystem_EmissionModule_get_rateOverTime
                          ((ParticleSystem_MinMaxCurve *)&stack0xffffffcc,
                           (ParticleSystem_EmissionModule *)&this,(MethodInfo *)0x0);
      pTStack_2 = (ThemeAttribute_1_System_Single___Class *)pPVar4->m_Mode;
      uVar5 = pPVar4->m_CurveMin;
      uVar6 = pPVar4->m_CurveMax;
      uVar7 = pPVar4->m_ConstantMin;
      uVar8 = pPVar4->m_ConstantMax;
      TVar9.value = (float)uVar8;
      TVar9._.themeSettings = (SettingsWrapper *)uVar7;
      TVar9._._Groups_k__BackingField = uVar6;
      TVar9._._Key_k__BackingField = (String *)uVar5;
      pPVar3 = (pAVar1->fields).xpParticleSystem;
      TVar9.themeCallback = unaff_EBP;
      if (pPVar3 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar3,(MethodInfo *)0x0);
        ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single__get_Value
                  ((ThemeAttribute_1_System_Single_ *)&pTStack_2,(MethodInfo *)0x0);
        auVar10._12_8_ = 0;
        auVar10._0_12_ = TVar9._8_12_;
        TVar11._4_16_ = SUB2016(auVar10 << 0x40,4);
        TVar11._._Key_k__BackingField = (String *)(float)xpDelta;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
        ParticleSystem_MinMaxCurve_set_constant
                  ((ParticleSystem_MinMaxCurve *)&pTStack_2,(float)xpDelta,(MethodInfo *)0x0);
        auVar12._12_8_ = 0;
        auVar12._0_12_ = TVar11._8_12_;
        TVar13._4_16_ = SUB2016(auVar12 << 0x40,4);
        TVar13._._Key_k__BackingField = (String *)&pTStack_2;
        pMVar14 = (MonitorData *)&UNK_?;
        ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single__get_Value
                  ((ThemeAttribute_1_System_Single_ *)&pTStack_2,(MethodInfo *)0x0);
        this = (AvatarPooledXPParticles *)0x0;
        value.m_CurveMultiplier = (float)pMVar14;
        value.m_Mode = (int32_t)pTStack_2;
        value.m_CurveMin = (AnimationCurve *)TVar13._._Key_k__BackingField;
        value.m_CurveMax = TVar13._._Groups_k__BackingField;
        value.m_ConstantMin = (float)TVar13._._Key_k__BackingField;
        value.m_ConstantMax = (float)TVar13._._Groups_k__BackingField;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_rateOverTime
                  ((ParticleSystem_EmissionModule *)&this,value,(MethodInfo *)0x0);
        this = (AvatarPooledXPParticles *)0x0;
        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (pAVar1->fields).initStartTime = fVar15;
        return;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarPooledXPParticles::AvatarPooledXPParticles_Update
               (AvatarPooledXPParticles *this,MethodInfo *method)

{
  if ((this->fields).hasStarted == 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).initStartTime + _UNK_? < fVar1) {
      pPVar2 = (this->fields).xpParticleSystem;
      if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (pPVar2,(MethodInfo *)0x0);
      (this->fields).hasStarted = 1;
    }
  }
  pPVar2 = (this->fields).xpParticleSystem;
  if (pPVar2 != (ParticleSystem *)0x0) {
    bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar2,(MethodInfo *)0x0);
    if ((bVar3 == 0) && ((this->fields).hasStarted != 0)) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar4 == (PrefabPool *)0x0) ||
         (this_00 = (pPVar4->fields).enumPoolManager, this_00 == (EnumPoolManager *)0x0))
      goto code_?;
      EnumPoolManager::EnumPoolManager_Return
                (this_00,(MonoBehaviour *)this,PoolEnums__Enum_XP,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

