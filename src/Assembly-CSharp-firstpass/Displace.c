
/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_OnDisable(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF);
    func_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_ON);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
            (StringLiteral_WATER_VERTEX_DISPLACEMENT_ON,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_OnEnable(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF);
    func_?(&StringLiteral_WATER_VERTEX_DISPLACEMENT_ON);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
            (StringLiteral_WATER_VERTEX_DISPLACEMENT_ON,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
            (StringLiteral_WATER_VERTEX_DISPLACEMENT_OFF,(MethodInfo *)0x0);
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_Start(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeRef__WaterBase);
    func_?(&TypeInfo__WaterBase);
    cRam_? = '\x01';
  }
  exists = (this->fields).waterBase;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  handle = (WaterBase__Class *)TypeRef__WaterBase;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 == (GameObject *)0x0) {
    func_?();
    pWStack2 = extraout_EDX;
  }
  else {
    pWStack2 =
         (WaterBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                   (this_00,type,(MethodInfo *)0x0);
    pWStack3 = (WaterBase__Class *)pWStack2;
    if (pWStack2 == (WaterBase *)0x0) {
      (this->fields).waterBase = (WaterBase *)0x0;
      pWStack2 = (WaterBase *)&(this->fields).waterBase;
      func_?();
      return;
    }
    handle = TypeInfo__WaterBase;
    if (((TypeInfo__WaterBase->_1).typeHierarchyDepth <=
         (((Component__Class *)pWStack2->klass)->_1).typeHierarchyDepth) &&
       ((((Component__Class *)pWStack2->klass)->_1).typeHierarchy
        [(TypeInfo__WaterBase->_1).typeHierarchyDepth - 1] == (Il2CppClass *)TypeInfo__WaterBase)) {
      (this->fields).waterBase = pWStack2;
      handle = TypeInfo__WaterBase;
      if (((TypeInfo__WaterBase->_1).typeHierarchyDepth <=
           (((Component__Class *)pWStack2->klass)->_1).typeHierarchyDepth) &&
         ((((Component__Class *)pWStack2->klass)->_1).typeHierarchy
          [(TypeInfo__WaterBase->_1).typeHierarchyDepth - 1] == (Il2CppClass *)TypeInfo__WaterBase))
      {
        pWStack2 = (WaterBase *)&(this->fields).waterBase;
        func_?();
        return;
      }
    }
  }
  pWStack3 = handle;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

