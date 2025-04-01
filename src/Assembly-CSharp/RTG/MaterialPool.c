
/* MaterialPool() */

void Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool__ctor
               (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::MaterialPool>__Singleton__);
  return;
}


/* Material get_CircleCull() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_CircleCull
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._circleCull;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_CircleCull);
      cRam_? = '\x01';
    }
    ppMVar6 = &pOVar4[3].monitor;
    x = (Object_1 *)*ppMVar6;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_CircleCull,(MethodInfo *)0x0);
      *ppMVar6 = (MonitorData *)pSVar7;
      func_?();
    }
    pSVar7 = (Shader *)*ppMVar6;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,pSVar7,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}


/* Material get_CylindricalTorusCull() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_CylindricalTorusCull
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._cylindricalTorusCull;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_CylindricalTorusCull);
      cRam_? = '\x01';
    }
    ppMVar6 = &pOVar4[4].monitor;
    x = (Object_1 *)*ppMVar6;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_CylindricalTorusCull,(MethodInfo *)0x0);
      *ppMVar6 = (MonitorData *)pSVar7;
      func_?();
    }
    pSVar7 = (Shader *)*ppMVar6;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,pSVar7,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}


/* Material get_GizmoSolidHandle() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_GizmoSolidHandle
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._gizmoSolidHandle;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_GizmoSolidHandle);
      cRam_? = '\x01';
    }
    pOVar4 = pOVar4 + 2;
    pOVar6 = pOVar4->klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pOVar6 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_GizmoSolidHandle,(MethodInfo *)0x0);
      pOVar4->klass = pOVar6;
      func_?();
    }
    pOVar6 = pOVar4->klass;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,(Shader *)pOVar6,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}


/* Material get_LinearGradientCameraBk() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_LinearGradientCameraBk
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  pMVar1 = &this->fields;
  pMVar2 = pMVar1->_linearGradientCameraBk;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_LinearGradientCameraB);
      cRam_? = '\x01';
    }
    pOVar4 = pOVar4 + 1;
    pOVar6 = pOVar4->klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pOVar6 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_LinearGradientCameraB,(MethodInfo *)0x0);
      pOVar4->klass = pOVar6;
      func_?();
    }
    pOVar6 = pOVar4->klass;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,(Shader *)pOVar6,(MethodInfo *)0x0);
    pMVar1->_linearGradientCameraBk = pMVar2;
    func_?();
  }
  return pMVar1->_linearGradientCameraBk;
}


/* Material get_SimpleColor() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_SimpleColor
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._simpleColor;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_SimpleColor);
      cRam_? = '\x01';
    }
    pOVar4 = pOVar4 + 3;
    pOVar6 = pOVar4->klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pOVar6 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_SimpleColor,(MethodInfo *)0x0);
      pOVar4->klass = pOVar6;
      func_?();
    }
    pOVar6 = pOVar4->klass;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,(Shader *)pOVar6,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}


/* Material get_TintedTexture() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_TintedTexture
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._tintedTexture;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_TintedTexture);
      cRam_? = '\x01';
    }
    ppMVar6 = &pOVar4[2].monitor;
    x = (Object_1 *)*ppMVar6;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_TintedTexture,(MethodInfo *)0x0);
      *ppMVar6 = (MonitorData *)pSVar7;
      func_?();
    }
    pSVar7 = (Shader *)*ppMVar6;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,pSVar7,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}


/* Material get_TorusCull() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_TorusCull
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._torusCull;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_TorusCull);
      cRam_? = '\x01';
    }
    pOVar4 = pOVar4 + 4;
    pOVar6 = pOVar4->klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pOVar6 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_TorusCull,(MethodInfo *)0x0);
      pOVar4->klass = pOVar6;
      func_?();
    }
    pOVar6 = pOVar4->klass;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,(Shader *)pOVar6,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}


/* Material get_XZGrid_Plane() */

Material *
Assembly-CSharp.dll::RTG::MaterialPool::MaterialPool_get_XZGrid_Plane
          (MaterialPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields)._xzGrid_Plane;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar4 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar4 == (Object *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar5)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_XZGrid_Plane);
      cRam_? = '\x01';
    }
    ppMVar6 = &pOVar4[1].monitor;
    x = (Object_1 *)*ppMVar6;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_XZGrid_Plane,(MethodInfo *)0x0);
      *ppMVar6 = (MonitorData *)pSVar7;
      func_?();
    }
    pSVar7 = (Shader *)*ppMVar6;
    pMVar2 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar2,pSVar7,(MethodInfo *)0x0);
    *ppMVar1 = pMVar2;
    func_?();
  }
  return *ppMVar1;
}

