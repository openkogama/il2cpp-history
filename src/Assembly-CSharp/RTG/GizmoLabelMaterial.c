
/* Void ResetValuesToSensibleDefaults() */

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_ResetValuesToSensibleDefaults
               (GizmoLabelMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (this_00,StringLiteral__ZWrite,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetColor
               (GizmoLabelMaterial *this,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetPass
               (GizmoLabelMaterial *this,int32_t passIndex,MethodInfo *method)

{
  pMVar1 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetTexture(Texture2D) */

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetTexture
               (GizmoLabelMaterial *this,Texture2D *texture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (this_00,StringLiteral__MainTex,(Texture *)texture,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetZTestAlways() */

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetZTestAlways
               (GizmoLabelMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetZTestLess
               (GizmoLabelMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetZTestLessEqual
               (GizmoLabelMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_SetZWriteEnabled
               (GizmoLabelMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoLabelMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* GizmoLabelMaterial() */

void Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial__ctor
               (GizmoLabelMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoLabelMaterial>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoLabelMaterial>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::GizmoLabelMaterial>__Singleton__);
  return;
}


/* Material get_Material() */

Material *
Assembly-CSharp.dll::RTG::GizmoLabelMaterial::GizmoLabelMaterial_get_Material
          (GizmoLabelMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  pMVar2 = pGVar1->_material;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    }
    this_00 = (MaterialPool *)
              Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                        (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    if (this_00 == (MaterialPool *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pMVar2 = (Material *)(*pcVar4)();
      return pMVar2;
    }
    pMVar2 = MaterialPool::MaterialPool_get_TintedTexture(this_00,(MethodInfo *)0x0);
    pGVar1->_material = pMVar2;
    func_?(pGVar1);
  }
  return pGVar1->_material;
}

