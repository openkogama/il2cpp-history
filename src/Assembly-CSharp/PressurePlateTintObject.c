
/* Void Awake() */

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_Awake
               (PressurePlateTintObject *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_OnDestroy
               (PressurePlateTintObject *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_TeamTint
               (PressurePlateTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  switch(team) {
  case MVTeam__Enum_Blue:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3c23d70a,0x3f0a3d71,0x3f800000,0,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Red:
    (*(code *)(this->klass->vtable).Tint_1.method)(this,0x3f5ae148,0,0,0,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Green:
    (*(code *)(this->klass->vtable).Tint_1.method)(this,0,0x3f27ae14,0,0,this->klass[1]._0.image);
    return;
  case MVTeam__Enum_Yellow:
    (*(code *)(this->klass->vtable).Tint_1.method)
              (this,0x3f800000,0x3f800000,0,0,this->klass[1]._0.image);
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

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_Tint
               (PressurePlateTintObject *this,Color c,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Equality
                    (c,(this->fields).OriginalColor,(MethodInfo *)0x0);
  pMStack2 = (this->fields).materialCylinderToTint;
  if (pMStack2 != (Material *)0x0) {
    if (bVar1 == 0) {
      value_00 = (this->fields).teamTexture;
    }
    else {
      value_00 = (this->fields).defaultTexture;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
              (pMStack2,value_00,(MethodInfo *)0x0);
    this_00 = (this->fields).materialCylinderToTint;
    if (this_00 != (Material *)0x0) {
      value.g = (float)&UNK_?;
      value.r = c.r;
      value.b = (float)pMStack2;
      value.a = (float)value_00;
      pTStack3 = value_00;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PressurePlateTintObject() */

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject__ctor
               (PressurePlateTintObject *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0x3f800000,0x3f800000,0x3f800000,0,0);
  (this->fields).OriginalColor.r = fStack_1;
  (this->fields).OriginalColor.g = fStack_2;
  (this->fields).OriginalColor.b = fStack_3;
  (this->fields).OriginalColor.a = fStack_4;
  LockCursorManager3DMode::LockCursorManager3DMode__ctor
            ((LockCursorManager3DMode *)this,(MethodInfo *)0x0);
  return;
}

