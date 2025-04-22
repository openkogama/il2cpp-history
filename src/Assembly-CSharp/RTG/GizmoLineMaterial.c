
/* Void ResetValuesToSensibleDefaults() */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_ResetValuesToSensibleDefaults
               (GizmoLineMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ZWrite);
    cRam_? = '\x01';
  }
  pMVar1 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (pMVar1,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                (pMVar1,StringLiteral__ZTest,8,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_SetColor
               (GizmoLineMaterial *this,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetPass(Int32) */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_SetPass
               (GizmoLineMaterial *this,int32_t passIndex,MethodInfo *method)

{
  pMVar1 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_SetZTestAlways
               (GizmoLineMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetZTestLess() */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_SetZTestLess
               (GizmoLineMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetZTestLessEqual() */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_SetZTestLessEqual
               (GizmoLineMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__ZTest,4,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZWriteEnabled(Boolean) */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_SetZWriteEnabled
               (GizmoLineMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLineMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* GizmoLineMaterial() */

void Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial__ctor
               (GizmoLineMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLineMaterial>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::GizmoLineMaterial>__Singleton__);
  return;
}


/* Material get_Material() */

Material *
Assembly-CSharp.dll::RTG::GizmoLineMaterial::GizmoLineMaterial_get_Material
          (GizmoLineMaterial *this,MethodInfo *method)

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
    pMVar1 = MaterialPool::MaterialPool_get_SimpleColor(this_00,(MethodInfo *)0x0);
    (this->fields)._material = pMVar1;
    func_?(&this->fields);
  }
  return (this->fields)._material;
}

