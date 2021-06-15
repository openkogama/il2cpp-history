
/* Void Awake() */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_Awake
               (TeleporterTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRendererToTint;
  pMVar2 = (Material__Array *)func_?(TypeInfo__UnityEngine__Material,1);
  pMVar3 = (this->fields).materialCylinderToTint;
  if (pMVar2 == (Material__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  else {
    if (pMVar3 != (Material *)0x0) {
      iVar5 = func_?(pMVar3,(pMVar2->klass->_0).element_class);
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pMVar2->max_length != 0) {
      pMVar2->vector[0] = pMVar3;
      if (pMVar1 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterials
                  ((Renderer *)pMVar1,pMVar2,(MethodInfo *)0x0);
        pMVar1 = (this->fields).meshRendererToTint;
        if (pMVar1 != (MeshRenderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                             ((Renderer *)pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material__Array *)0x0) {
            if (pMVar2->max_length != 0) {
              (this->fields).materialCylinderToTint = pMVar2->vector[0];
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?(0,0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeleporterTintObject::TeleporterTintObject_OnDestroy
               (TeleporterTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).materialCylinderToTint;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  pOStack_5 = (Object *)0x0;
  this_00 = (this->fields).materialCylinderToTint;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,c,(MethodInfo *)0x0);
    func_?(&uStack_1);
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).particleCircleToTint;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pOStack_5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (this_01,(MethodInfo *)0x0);
      color.g = (float)uStack_2;
      color.r = (float)uStack_1;
      color.b = (float)uStack_3;
      color.a = fStack_4;
      pPVar6 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
               ParticleSystem_MinMaxGradient_op_Implicit
                         ((ParticleSystem_MinMaxGradient *)&stack0xffffffbc,color,(MethodInfo *)0x0)
      ;
      func_?(&pOStack_5,pPVar6->m_Mode,pPVar6->m_GradientMin,pPVar6->m_GradientMax,
                      (pPVar6->m_ColorMin).r,(pPVar6->m_ColorMin).g);
      this_02 = (this->fields).lightToTint;
      if (this_02 != (Light *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color(this_02,c,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

