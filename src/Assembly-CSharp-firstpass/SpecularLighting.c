
/* Void Start() */

void Assembly-CSharp-firstpass.dll::SpecularLighting::SpecularLighting_Start
               (SpecularLighting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (WaterBase *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  (this->fields).waterBase = pWVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::SpecularLighting::SpecularLighting_Update
               (SpecularLighting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waterBase;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pWVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pWVar1 = (WaterBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    (this->fields).waterBase = pWVar1;
  }
  pTVar3 = (this->fields).specularLight;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar3,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pWVar1 = (this->fields).waterBase;
  if (pWVar1 != (WaterBase *)0x0) {
    pMVar4 = (pWVar1->fields).sharedMaterial;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
         (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar3,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
      {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffe8,pTVar3,(MethodInfo *)0x0);
        uVar6._0_4_ = pVVar5->x;
        uVar6._4_4_ = pVVar5->y;
        fVar7 = pVVar5->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
          func_?();
        }
        v.z = fVar7;
        v.x = (float)(int)uVar6;
        v.y = (float)(int)((ulonglong)uVar6 >> 0x20);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                           ((Vector4 *)&stack0xffffffe4,v,(MethodInfo *)0x0);
        if (pMVar4 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar4,StringLiteral__WorldLightDir,*pVVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

