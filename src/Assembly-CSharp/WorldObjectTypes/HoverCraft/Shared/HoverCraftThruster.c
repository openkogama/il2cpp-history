
/* Void Disable() */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_Disable(HoverCraftThruster *this,MethodInfo *method)

{
  pHVar1 = this;
  pPVar2 = (this->fields).thrusterParticleSystem;
  if (pPVar2 != (ParticleSystem *)0x0) {
    this = (HoverCraftThruster *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,0,(MethodInfo *)0x0);
    this_00 = (HoverCraftThruster *)(pHVar1->fields).thrusterParticleSystem;
    if (this_00 != (HoverCraftThruster *)0x0) {
      method = (MethodInfo *)0x0;
      this = this_00;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Clear_1
                ((ParticleSystem *)this_00,(MethodInfo *)0x0);
      pPVar2 = (pHVar1->fields).thrusterParticleSystem;
      if (pPVar2 != (ParticleSystem *)0x0) {
        in_stack_3 = &UNK_?;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar2,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ToggleOnOff(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_ToggleOnOff(HoverCraftThruster *this,bool useThrusters,MethodInfo *method)

{
  pHVar1 = this;
  pPVar2 = (this->fields).thrusterParticleSystem;
  if (pPVar2 != (ParticleSystem *)0x0) {
    this = (HoverCraftThruster *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
    uVar3 = _useThrusters;
    value = (bool)_useThrusters;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,value,(MethodInfo *)0x0);
    pPVar2 = (pHVar1->fields).thrusterParticleSystem;
    if (pPVar2 != (ParticleSystem *)0x0) {
      this = (HoverCraftThruster *)0x0;
      this_01 = (HoverCraftThruster *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar2,(MethodInfo *)0x0);
      if (this_01 != (HoverCraftThruster *)0x0) {
        method = (MethodInfo *)0x0;
        this = this_01;
        _useThrusters = uVar3;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_01,value,(MethodInfo *)0x0);
        this_00 = (pHVar1->fields).thrusterMesh;
        if (this_00 != (GameObject *)0x0) {
          method = (MethodInfo *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateColor(Gradient) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_UpdateColor
               (HoverCraftThruster *this,Gradient *thrustersColor,MethodInfo *method)

{
  this_00 = (this->fields).thrusterParticleSystem;
  if (this_00 != (ParticleSystem *)0x0) {
    this = (HoverCraftThruster *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    func_?(&stack0xffffffd0,0,0x2c);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
    ParticleSystem_MinMaxGradient__ctor_1
              ((ParticleSystem_MinMaxGradient *)&stack0xffffffd0,thrustersColor,(MethodInfo *)0x0);
    value.m_GradientMin = in_stack_1;
    value.m_Mode = in_stack_2;
    value.m_GradientMax = in_stack_3;
    value.m_ColorMin.r = in_stack_4;
    value.m_ColorMin.g = 0.0;
    value.m_ColorMin.b = fStack_5;
    value.m_ColorMin.a = fStack_6;
    value.m_ColorMax.r = fStack_7;
    value.m_ColorMax.g = (float)(Gradient *)uStack_8;
    value.m_ColorMax.b = (float)SUB84(uStack_8,4);
    value.m_ColorMax.a = fStack_9;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+ColorOverLifetimeModule::
    ParticleSystem_ColorOverLifetimeModule_set_color
              ((ParticleSystem_ColorOverLifetimeModule *)&this,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateSize(Single) */

void Assembly-CSharp.dll::WorldObjectTypes::HoverCraft::Shared::HoverCraftThruster::
     HoverCraftThruster_UpdateSize(HoverCraftThruster *this,float thrustersSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).thrusterParticleSystem;
  if (this_00 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (this_00,(MethodInfo *)0x0);
    this_01 = (AnimationCurve *)func_?(TypeInfo__UnityEngine__AnimationCurve);
    if (this_01 != (AnimationCurve *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve__ctor_1
                (this_01,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                (this_01,0.0,1.0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_AddKey
                (this_01,thrustersSize,0.0,(MethodInfo *)0x0);
      uVar1 = 0;
      uVar2 = 0;
      uVar3 = 0;
      this = (HoverCraftThruster *)0x0;
      uVar4 = 0xADDR;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
      ParticleSystem_MinMaxCurve__ctor_1
                ((ParticleSystem_MinMaxCurve *)0x0,1.0,this_01,(MethodInfo *)0x0);
      fVar5 = (float)uVar2;
      iVar6 = uVar1;
      uVar7 = CONCAT44(fVar5,iVar6);
      pAVar8 = (AnimationCurve *)uVar3;
      thrustersSize = (float)(int)uVar4;
      method = (MethodInfo *)(int)((ulonglong)uVar4 >> 0x20);
      value = (ParticleSystem_MinMaxCurve)CONCAT168(auVar9,uVar7);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+SizeOverLifetimeModule::
      ParticleSystem_SizeOverLifetimeModule_set_size
                ((ParticleSystem_SizeOverLifetimeModule *)&stack0xfffffff8,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

