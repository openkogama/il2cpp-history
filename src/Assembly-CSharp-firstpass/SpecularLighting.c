
/* Void Start() */

void Assembly-CSharp-firstpass.dll::SpecularLighting::SpecularLighting_Start
               (SpecularLighting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    cRam_? = '\x01';
  }
  pWVar1 = (WaterBase *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  (this->fields).waterBase = pWVar1;
  func_?(&(this->fields).waterBase,pWVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::SpecularLighting::SpecularLighting_Update
               (SpecularLighting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__WorldLightDir);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waterBase;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pWVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pWVar1 = (WaterBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    (this->fields).waterBase = pWVar1;
    func_?(&(this->fields).waterBase,pWVar1);
  }
  pTVar3 = (this->fields).specularLight;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar3,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pWVar1 = (this->fields).waterBase;
  if (pWVar1 != (WaterBase *)0x0) {
    pMVar4 = (pWVar1->fields).sharedMaterial;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pMVar4,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pWVar1 = (this->fields).waterBase;
    if (pWVar1 != (WaterBase *)0x0) {
      pMVar4 = (pWVar1->fields).sharedMaterial;
      pTVar3 = (this->fields).specularLight;
      if ((pTVar3 != (Transform *)0x0) &&
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar3,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
        if (pMVar4 != (Material *)0x0) {
          value.w = 0.0;
          value.x = pVVar5->x;
          value.y = pVVar5->y;
          value.z = pVVar5->z;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar4,StringLiteral__WorldLightDir,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

