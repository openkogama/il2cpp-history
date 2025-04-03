
/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::ImageEffectBase::ImageEffectBase_OnDisable
               (ImageEffectBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).m_Material;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (this->fields).m_Material;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DestroyImmediate_1
              ((Object_1 *)pMVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::ImageEffectBase::ImageEffectBase_Start
               (ImageEffectBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).shader;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pSVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar1 = (this->fields).shader;
    if (pSVar1 == (Shader *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_get_isSupported
                      (pSVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Material get_material() */

Material *
Assembly-CSharp-firstpass.dll::ImageEffectBase::ImageEffectBase_get_material
          (ImageEffectBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).m_Material;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    shader = (this->fields).shader;
    pMVar2 = (Material *)func_?(TypeInfo__UnityEngine__Material);
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,shader,(MethodInfo *)0x0);
    if (pMVar2 == (Material *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar4)();
      return pMVar2;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
              ((Object_1 *)pMVar2,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}

