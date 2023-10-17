
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
  bVar1 = System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[System::
          Single,System::Object]::
          SortedList_2_TKey_TValue_ValueList_System_Single_System_Object__get_IsReadOnly
                    ((SortedList_2_TKey_TValue_ValueList_System_Single_System_Object_ *)0x0,
                     unaff_ESI);
  if (bVar1 != 0) {
    pSVar2 = (this->fields).shader;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pSVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pSVar2 = (this->fields).shader;
      if (pSVar2 == (Shader *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_get_isSupported
                        (pSVar2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        return;
      }
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
  pMVar1 = (this->fields).m_Material;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    shader = (this->fields).shader;
    pMVar1 = (Material *)func_?(TypeInfo__UnityEngine__Material);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
                (pMVar1,shader,(MethodInfo *)0x0);
      (this->fields).m_Material = pMVar1;
      func_?(&(this->fields).m_Material,pMVar1);
      pMVar1 = (this->fields).m_Material;
      if (pMVar1 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)pMVar1,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    pMVar1 = (Material *)(*pcVar3)();
    return pMVar1;
  }
code_?:
  return (this->fields).m_Material;
}

