
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
  pMVar1 = (this->fields)._circleCull;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_CircleCull);
      cRam_? = '\x01';
    }
    x = (Object_1 *)pOVar3[3].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_CircleCull,(MethodInfo *)0x0);
      pOVar3[3].monitor = (MonitorData *)pSVar5;
      func_?();
    }
    pSVar5 = (Shader *)pOVar3[3].monitor;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,pSVar5,(MethodInfo *)0x0);
    (this->fields)._circleCull = pMVar1;
    func_?();
  }
  return (this->fields)._circleCull;
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
  pMVar1 = (this->fields)._cylindricalTorusCull;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_CylindricalTorusCull);
      cRam_? = '\x01';
    }
    x = (Object_1 *)pOVar3[4].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_CylindricalTorusCull,(MethodInfo *)0x0);
      pOVar3[4].monitor = (MonitorData *)pSVar5;
      func_?();
    }
    pSVar5 = (Shader *)pOVar3[4].monitor;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,pSVar5,(MethodInfo *)0x0);
    (this->fields)._cylindricalTorusCull = pMVar1;
    func_?();
  }
  return (this->fields)._cylindricalTorusCull;
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
  pMVar1 = (this->fields)._gizmoSolidHandle;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_GizmoSolidHandle);
      cRam_? = '\x01';
    }
    pOVar5 = pOVar3[2].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_GizmoSolidHandle,(MethodInfo *)0x0);
      pOVar3[2].klass = pOVar5;
      func_?();
    }
    pOVar5 = pOVar3[2].klass;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,(Shader *)pOVar5,(MethodInfo *)0x0);
    (this->fields)._gizmoSolidHandle = pMVar1;
    func_?();
  }
  return (this->fields)._gizmoSolidHandle;
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
  pMVar1 = (this->fields)._linearGradientCameraBk;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_LinearGradientCameraB);
      cRam_? = '\x01';
    }
    pOVar5 = pOVar3[1].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_LinearGradientCameraB,(MethodInfo *)0x0);
      pOVar3[1].klass = pOVar5;
      func_?();
    }
    pOVar5 = pOVar3[1].klass;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,(Shader *)pOVar5,(MethodInfo *)0x0);
    (this->fields)._linearGradientCameraBk = pMVar1;
    func_?();
  }
  return (this->fields)._linearGradientCameraBk;
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
  pMVar1 = (this->fields)._simpleColor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_SimpleColor);
      cRam_? = '\x01';
    }
    pOVar5 = pOVar3[3].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_SimpleColor,(MethodInfo *)0x0);
      pOVar3[3].klass = pOVar5;
      func_?();
    }
    pOVar5 = pOVar3[3].klass;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,(Shader *)pOVar5,(MethodInfo *)0x0);
    (this->fields)._simpleColor = pMVar1;
    func_?();
  }
  return (this->fields)._simpleColor;
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
  pMVar1 = (this->fields)._tintedTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_TintedTexture);
      cRam_? = '\x01';
    }
    x = (Object_1 *)pOVar3[2].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_TintedTexture,(MethodInfo *)0x0);
      pOVar3[2].monitor = (MonitorData *)pSVar5;
      func_?();
    }
    pSVar5 = (Shader *)pOVar3[2].monitor;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,pSVar5,(MethodInfo *)0x0);
    (this->fields)._tintedTexture = pMVar1;
    func_?();
  }
  return (this->fields)._tintedTexture;
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
  pMVar1 = (this->fields)._torusCull;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_TorusCull);
      cRam_? = '\x01';
    }
    pOVar5 = pOVar3[4].klass;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pOVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pOVar5 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_TorusCull,(MethodInfo *)0x0);
      pOVar3[4].klass = pOVar5;
      func_?();
    }
    pOVar5 = pOVar3[4].klass;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,(Shader *)pOVar5,(MethodInfo *)0x0);
    (this->fields)._torusCull = pMVar1;
    func_?();
  }
  return (this->fields)._torusCull;
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
  pMVar1 = (this->fields)._xzGrid_Plane;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    }
    pOVar3 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::ShaderPool>__get_Get__);
    if (pOVar3 == (Object *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar4)();
      return pMVar1;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_RTUnityApp_XZGrid_Plane);
      cRam_? = '\x01';
    }
    x = (Object_1 *)pOVar3[1].monitor;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                         (StringLiteral_RTUnityApp_XZGrid_Plane,(MethodInfo *)0x0);
      pOVar3[1].monitor = (MonitorData *)pSVar5;
      func_?();
    }
    pSVar5 = (Shader *)pOVar3[1].monitor;
    pMVar1 = (Material *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor
              (pMVar1,pSVar5,(MethodInfo *)0x0);
    (this->fields)._xzGrid_Plane = pMVar1;
    func_?();
  }
  return (this->fields)._xzGrid_Plane;
}

