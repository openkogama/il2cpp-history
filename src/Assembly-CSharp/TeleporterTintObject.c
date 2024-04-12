
/* Void Awake() */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_Awake
               (TeleporterTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRendererToTint;
  pMVar2 = (Material__Array *)func_?(TypeInfo__UnityEngine__Material,1);
  pMVar3 = (this->fields).materialCylinderToTint;
  if (pMVar2 == (Material__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    if (pMVar3 == (Material *)0x0) {
code_?:
      if (pMVar2->max_length == 0) goto code_?;
      pMVar2->vector[0] = pMVar3;
      func_?(pMVar2->vector,pMVar3);
      if (pMVar1 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterials
                  ((Renderer *)pMVar1,pMVar2,(MethodInfo *)0x0);
        pMVar1 = (this->fields).meshRendererToTint;
        if (pMVar1 != (MeshRenderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                             ((Renderer *)pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material__Array *)0x0) {
            if (pMVar2->max_length != 0) {
              pMVar3 = pMVar2->vector[0];
              (this->fields).materialCylinderToTint = pMVar3;
              func_?(&(this->fields).materialCylinderToTint,pMVar3);
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    iVar4 = func_?(pMVar3,(pMVar2->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_OnDestroy
               (TeleporterTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).materialCylinderToTint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_TeamTint
               (TeleporterTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  switch(team) {
  case MVTeam__Enum_Blue:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3d99999a,0x3ebe76c9,0x3f5be76d,0,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Red:
    (*(code *)(this->klass->vtable).Tint_1.method)(this,0x3f5ae148,0,0,0,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Green:
    (*(code *)(this->klass->vtable).Tint_1.method)(this,0,0x3f27ae14,0,0,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Yellow:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3f333333,0x3f333333,0,0,this->klass[1]._0.image);
    return;
  default:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3f51eb85,0x3f51eb85,0x3f800000,0,this->klass[1]._0.image);
    return;
  }
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_Tint
               (TeleporterTintObject *this,Color c,MethodInfo *method)

{
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  this_00 = (this->fields).materialCylinderToTint;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,c,(MethodInfo *)0x0);
    this_01 = (this->fields).particleCircleToTint;
    fVar2 = c.r * _UNK_?;
    fVar3 = c.g * _UNK_?;
    fVar4 = c.b * _UNK_?;
    if (this_01 != (ParticleSystem *)0x0) {
      PStack_1.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_01,(MethodInfo *)0x0);
      color.g = fVar3;
      color.r = fVar2;
      color.b = fVar4;
      color.a = 1.0;
      pPVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
               ParticleSystem_MinMaxGradient_op_Implicit
                         ((ParticleSystem_MinMaxGradient *)&stack0xffffffbc,color,(MethodInfo *)0x0)
      ;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor(&PStack_1,*pPVar5,(MethodInfo *)0x0);
      this_02 = (this->fields).lightToTint;
      if (this_02 != (Light *)0x0) {
        fStack6 = c.a;
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color(this_02,c,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

