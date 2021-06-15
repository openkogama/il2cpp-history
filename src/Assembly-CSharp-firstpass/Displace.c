
/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::Displace::Displace_OnDisable(Displace *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
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
  if (bVar2 != 0) {
    return;
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  handle = (WaterBase__Class *)TypeRef__WaterBase;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if (this_00 == (GameObject *)0x0) {
    func_?();
    pWStack3 = extraout_EDX;
  }
  else {
    pWStack3 =
         (WaterBase *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent
                   (this_00,type,(MethodInfo *)0x0);
    if (pWStack3 == (WaterBase *)0x0) {
      (this->fields).waterBase = (WaterBase *)0x0;
      return;
    }
    bVar4 = (TypeInfo__WaterBase->_1).naturalAligment;
    if (((((Component_1__Class *)pWStack3->klass)->_1).naturalAligment < bVar4) ||
       ((((Component_1__Class *)pWStack3->klass)->_1).typeHierarchy[bVar4 - 1] !=
        (Il2CppClass *)TypeInfo__WaterBase)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pWVar1 = (WaterBase *)0x0;
    if (bVar5) {
      pWVar1 = pWStack3;
    }
    handle = TypeInfo__WaterBase;
    if (pWVar1 != (WaterBase *)0x0) {
      (this->fields).waterBase = pWVar1;
      return;
    }
  }
  pWStack6 = handle;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

