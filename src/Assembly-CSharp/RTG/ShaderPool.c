
/* ShaderPool() */

void Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool__ctor(ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::ShaderPool>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::ShaderPool>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::ShaderPool>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::ShaderPool>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::ShaderPool>__Singleton__);
  return;
}


/* Shader get_CircleCull() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_CircleCull
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_CircleCull);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._circleCull;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_CircleCull,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}


/* Shader get_CylindricalTorusCull() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_CylindricalTorusCull
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_CylindricalTorusCull);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._cylindricalTorusCull;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_CylindricalTorusCull,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}


/* Shader get_GizmoSolidHandle() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_GizmoSolidHandle
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_GizmoSolidHandle);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._gizmoSolidHandle;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_GizmoSolidHandle,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}


/* Shader get_LinearGradientCameraBk() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_LinearGradientCameraBk
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_LinearGradientCameraB);
    cRam_? = '\x01';
  }
  pSVar1 = &this->fields;
  pSVar2 = pSVar1->_linearGradientCameraBk;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_LinearGradientCameraB,(MethodInfo *)0x0);
    pSVar1->_linearGradientCameraBk = pSVar2;
    func_?(pSVar1,pSVar2);
  }
  return pSVar1->_linearGradientCameraBk;
}


/* Shader get_SimpleColor() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_SimpleColor
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_SimpleColor);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._simpleColor;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_SimpleColor,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}


/* Shader get_TintedTexture() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_TintedTexture
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_TintedTexture);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._tintedTexture;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_TintedTexture,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}


/* Shader get_TorusCull() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_TorusCull
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_TorusCull);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._torusCull;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_TorusCull,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}


/* Shader get_XZGrid_Plane() */

Shader * Assembly-CSharp.dll::RTG::ShaderPool::ShaderPool_get_XZGrid_Plane
                   (ShaderPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_RTUnityApp_XZGrid_Plane);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._xzGrid_Plane;
  pSVar2 = *ppSVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pSVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_Find
                       (StringLiteral_RTUnityApp_XZGrid_Plane,(MethodInfo *)0x0);
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
  }
  return *ppSVar1;
}

