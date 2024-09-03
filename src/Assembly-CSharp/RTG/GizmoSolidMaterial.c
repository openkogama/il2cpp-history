
/* Void ResetValuesToSensibleDefaults() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_ResetValuesToSensibleDefaults
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ZWrite);
    cRam_? = '\x01';
  }
  pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (pMVar1,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                (pMVar1,StringLiteral__ZTest,8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                  (pMVar1,StringLiteral__CullMode,2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                    (pMVar1,StringLiteral__IsLit,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
          if (pMVar1 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (pMVar1,StringLiteral__LightIntensity,1.23,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetColor
               (GizmoSolidMaterial *this,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__Color,(Vector4)color,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeBack() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeBack
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__CullMode,2,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeFront() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeFront
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__CullMode,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeOff() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetCullModeOff
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__CullMode,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLightDirection(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetLightDirection
               (GizmoSolidMaterial *this,Vector3 lightDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__LightDir);
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    value.w = 0.0;
    value._0_12_ = lightDir;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__LightDir,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetLightIntensity(Single) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetLightIntensity
               (GizmoSolidMaterial *this,float intensity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__LightIntensity,intensity,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLit(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetLit
               (GizmoSolidMaterial *this,bool isLit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__IsLit,(uint)isLit,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetPass(Int32) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetPass
               (GizmoSolidMaterial *this,int32_t passIndex,MethodInfo *method)

{
  pMVar1 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetZTestAlways() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZTestAlways
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__ZTest,8,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZTestEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZTestEnabled
               (GizmoSolidMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__ZTest,(isEnabled ^ 1) * 4 + 4,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZTestLess() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZTestLess
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__ZTest,2,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZWriteEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_SetZWriteEnabled
               (GizmoSolidMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__ZWrite,(uint)isEnabled,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GizmoSolidMaterial() */

void Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial__ctor
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoSolidMaterial>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::GizmoSolidMaterial>__Singleton__);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = GizmoSolidMaterial_get_Material(in_stack_2,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (pMVar1,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoSolidMaterial_get_Material(in_stack_2,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                (pMVar1,StringLiteral__ZTest,8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = GizmoSolidMaterial_get_Material(in_stack_2,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                  (pMVar1,StringLiteral__CullMode,2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoSolidMaterial_get_Material(in_stack_2,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                    (pMVar1,StringLiteral__IsLit,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar1 = GizmoSolidMaterial_get_Material(in_stack_2,(MethodInfo *)0x0);
          if (pMVar1 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                      (pMVar1,StringLiteral__LightIntensity,1.23,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_IsLit() */

bool Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_get_IsLit
               (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetInt
                      (this_00,StringLiteral__IsLit,(MethodInfo *)0x0);
    return iVar1 == 1;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Single get_LightIntensity() */

float Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_get_LightIntensity
                (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoSolidMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloat
                      (this_00,StringLiteral__LightIntensity,(MethodInfo *)0x0);
    return fVar1;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Material get_Material() */

Material *
Assembly-CSharp.dll::RTG::GizmoSolidMaterial::GizmoSolidMaterial_get_Material
          (GizmoSolidMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._material;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    }
    this_00 = (MaterialPool *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    if (this_00 == (MaterialPool *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pMVar1 = (Material *)(*pcVar3)();
      return pMVar1;
    }
    pMVar1 = MaterialPool::MaterialPool_get_GizmoSolidHandle(this_00,(MethodInfo *)0x0);
    (this->fields)._material = pMVar1;
    func_?(&this->fields);
  }
  return (this->fields)._material;
}

