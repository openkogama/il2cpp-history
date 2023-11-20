
/* Void Awake() */

void Assembly-CSharp.dll::SpawnRolePlateTintObject::SpawnRolePlateTintObject_Awake
               (SpawnRolePlateTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  pMVar2 = (Material__Array *)func_?(TypeInfo__UnityEngine__Material,1);
  pMVar3 = (this->fields).materialToTint;
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
        pMVar1 = (this->fields).meshRenderer;
        if (pMVar1 != (MeshRenderer *)0x0) {
          pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                             ((Renderer *)pMVar1,(MethodInfo *)0x0);
          if (pMVar2 != (Material__Array *)0x0) {
            if (pMVar2->max_length != 0) {
              pMVar3 = pMVar2->vector[0];
              (this->fields).materialToTint = pMVar3;
              func_?(&(this->fields).materialToTint,pMVar3);
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

void Assembly-CSharp.dll::SpawnRolePlateTintObject::SpawnRolePlateTintObject_OnDestroy
               (SpawnRolePlateTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).materialToTint;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::SpawnRolePlateTintObject::SpawnRolePlateTintObject_TeamTint
               (SpawnRolePlateTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  switch(team) {
  case MVTeam__Enum_Blue:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamBlue;
    break;
  case MVTeam__Enum_Red:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamRed;
    break;
  case MVTeam__Enum_Green:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamGreen;
    break;
  case MVTeam__Enum_Yellow:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_TeamYellow;
    break;
  default:
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Styles);
    }
    colorStyle = ColorStyle__Enum_OffWhite;
  }
  pCVar1 = Styles::Styles_GetColor(&CStack_2,colorStyle,(MethodInfo *)0x0);
  CStack_2.r = pCVar1->a;
  CStack_2.g = (float)(this->klass->vtable).TeamTint.methodPtr;
  (*(code *)(this->klass->vtable).Tint.method)(this,pCVar1->r,pCVar1->g,pCVar1->b);
  return;
}

