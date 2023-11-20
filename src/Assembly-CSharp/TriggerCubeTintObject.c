
/* Void Awake() */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_Awake
               (TriggerCubeTintObject *this,MethodInfo *method)

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
        pMVar3 = (this->fields).materialCylinderToTint;
        if (pMVar3 != (Material *)0x0) {
          pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                             (&CStack_5,pMVar3,(MethodInfo *)0x0);
          fVar6 = pCVar4->g;
          fVar7 = pCVar4->b;
          fVar8 = pCVar4->a;
          pMVar1 = (this->fields).meshRendererToTint;
          (this->fields).OriginalColor.r = pCVar4->r;
          (this->fields).OriginalColor.g = fVar6;
          (this->fields).OriginalColor.b = fVar7;
          (this->fields).OriginalColor.a = fVar8;
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
      }
      goto code_?;
    }
    iVar9 = func_?(pMVar3,(pMVar2->klass->_0).element_class);
    if (iVar9 != 0) goto code_?;
  }
  uVar10 = func_?(0);
  func_?(uVar10);
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_OnDestroy
               (TriggerCubeTintObject *this,MethodInfo *method)

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

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_TeamTint
               (TriggerCubeTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  switch(team) {
  case MVTeam__Enum_Blue:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3c23d70a,0x3f0a3d71,0x3f800000,0x3f800000,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Red:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3f5ae148,0,0,0x3f800000,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Green:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0,0x3f27ae14,0,0x3f800000,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Yellow:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3f800000,0x3f800000,0,0x3f800000,this->klass[1]._0.image);
    return;
  default:
    (*(code *)(this->klass->vtable).Tint.method)
              (this,(this->fields).OriginalColor.r,(this->fields).OriginalColor.g,
               (this->fields).OriginalColor.b,(this->fields).OriginalColor.a,
               (this->klass->vtable).TeamTint.methodPtr);
    return;
  case MVTeam__Enum_None:
    func_?(4,this,(this->fields).OriginalColor.r,(this->fields).OriginalColor.g,
                    (this->fields).OriginalColor.b,(this->fields).OriginalColor.a);
    return;
  }
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_Tint
               (TriggerCubeTintObject *this,Color c,MethodInfo *method)

{
  this_00 = (this->fields).materialCylinderToTint;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,c,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

