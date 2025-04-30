
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
  func_?();
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
  ppWVar1 = &(this->fields).waterBase;
  pWVar2 = *ppWVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pWVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pWVar2 = (WaterBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    *ppWVar1 = pWVar2;
    func_?(ppWVar1,pWVar2);
  }
  pTVar4 = (this->fields).specularLight;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar4,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if (*ppWVar1 != (WaterBase *)0x0) {
    pMVar5 = ((*ppWVar1)->fields).sharedMaterial;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pMVar5,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    if (*ppWVar1 != (WaterBase *)0x0) {
      pMVar5 = ((*ppWVar1)->fields).sharedMaterial;
      pTVar4 = (this->fields).specularLight;
      if ((pTVar4 != (Transform *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar4,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
        if (pMVar5 != (Material *)0x0) {
          value.w = 0.0;
          value.x = pVVar6->x;
          value.y = pVVar6->y;
          value.z = pVVar6->z;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar5,StringLiteral__WorldLightDir,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

