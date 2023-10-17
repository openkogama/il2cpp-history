
/* Void Awake() */

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_Awake
               (PressurePlateTintObject *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_OnDestroy
               (PressurePlateTintObject *this,MethodInfo *method)

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

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject_TeamTint
               (PressurePlateTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  switch(team) {
  case MVTeam__Enum_Blue:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (this,0x3c23d70a,0x3f0a3d71,0x3f800000,0,(this->klass->vtable).Tint_1.method);
    return;
  case MVTeam__Enum_Red:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (this,0x3f5ae148,0,0,0,(this->klass->vtable).Tint_1.method);
    return;
  case MVTeam__Enum_Green:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (this,0,0x3f27ae14,0,0,(this->klass->vtable).Tint_1.method);
    return;
  case MVTeam__Enum_Yellow:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (this,0x3f800000,0x3f800000,0,0,(this->klass->vtable).Tint_1.method);
    return;
  default:
    (*(this->klass->vtable).Tint.methodPtr)
              (this,(this->fields).OriginalColor.r,(this->fields).OriginalColor.g,
               (this->fields).OriginalColor.b,(this->fields).OriginalColor.a,
               (this->klass->vtable).Tint.method);
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
  fVar1 = c.r - (this->fields).OriginalColor.r;
  fVar2 = c.g - (this->fields).OriginalColor.g;
  fVar3 = c.b - (this->fields).OriginalColor.b;
  fVar4 = c.a - (this->fields).OriginalColor.a;
  pMVar5 = (this->fields).materialCylinderToTint;
  if (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 < _UNK_?) {
    if (pMVar5 == (Material *)0x0) goto code_?;
    value = (this->fields).defaultTexture;
  }
  else {
    if (pMVar5 == (Material *)0x0) goto code_?;
    value = (this->fields).teamTexture;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
            (pMVar5,value,(MethodInfo *)0x0);
  pMVar5 = (this->fields).materialCylinderToTint;
  if (pMVar5 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (pMVar5,c,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* PressurePlateTintObject() */

void Assembly-CSharp.dll::PressurePlateTintObject::PressurePlateTintObject__ctor
               (PressurePlateTintObject *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).OriginalColor.r = _UNK_?;
  (this->fields).OriginalColor.g = fVar3;
  (this->fields).OriginalColor.b = fVar2;
  (this->fields).OriginalColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

