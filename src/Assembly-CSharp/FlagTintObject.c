
/* Void Awake() */

void Assembly-CSharp.dll::FlagTintObject::FlagTintObject_Awake
               (FlagTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  pMVar2 = (Material__Array *)func_?(TypeInfo__UnityEngine__Material,2);
  pMVar3 = (this->fields).materialToTint;
  ppMVar4 = &(this->fields).materialToTint;
  if (pMVar2 == (Material__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
  }
  else {
    if (pMVar3 != (Material *)0x0) {
      iVar6 = func_?(pMVar3,(pMVar2->klass->_0).element_class);
      if (iVar6 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pMVar2->max_length == 0) goto code_?;
    pMVar2->vector[0] = pMVar3;
    func_?(pMVar2->vector,pMVar3);
    pMVar3 = (this->fields).materialBlack;
    if (pMVar3 == (Material *)0x0) {
code_?:
      if (pMVar2->max_length < 2) goto code_?;
      pMVar2->vector[1] = pMVar3;
      func_?(pMVar2->vector + 1,pMVar3);
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
              *ppMVar4 = pMVar3;
              func_?(ppMVar4,pMVar3);
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
    iVar6 = func_?(pMVar3,(pMVar2->klass->_0).element_class);
    if (iVar6 != 0) goto code_?;
  }
  uVar5 = func_?(0);
  func_?(uVar5);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FlagTintObject::FlagTintObject_OnDestroy
               (FlagTintObject *this,MethodInfo *method)

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

