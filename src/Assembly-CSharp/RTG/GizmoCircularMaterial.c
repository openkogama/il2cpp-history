
/* Void ResetValuesToSensibleDefaults() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::
     GizmoCircularMaterial_ResetValuesToSensibleDefaults
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ZWrite);
    cRam_? = '\x01';
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (pMVar1,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                (pMVar1,StringLiteral__ZTest,8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                  (pMVar1,StringLiteral__CullMode,2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                    (pMVar1,StringLiteral__IsLit,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetCamera(Camera) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCamera
               (GizmoCircularMaterial *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__CamLook);
    func_?(&StringLiteral__OrthoCam);
    cRam_? = '\x01';
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (camera != (Camera *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)camera,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        value.w = 0.0;
        value.x = pVVar2->x;
        value.y = pVVar2->y;
        value.z = pVVar2->z;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (pMVar1,StringLiteral__CamLook,value,(MethodInfo *)0x0);
        pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                          (camera,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                    (pMVar1,StringLiteral__OrthoCam,(uint)bVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetColor(Color) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetColor
               (GizmoCircularMaterial *this,Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetCullAlphaScale(Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullAlphaScale
               (GizmoCircularMaterial *this,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__CullAlphaScale,scale,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCullModeBack() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullModeBack
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullModeFront
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCullModeOff
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetCylindricalTorusRadii(Single, Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetCylindricalTorusRadii
               (GizmoCircularMaterial *this,float hrzRadius,float vertRadius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__TorusVertRadius);
    func_?(&StringLiteral__TorusHrzRadius);
    cRam_? = '\x01';
  }
  if ((this->fields)._circularType != 2) {
    return;
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (pMVar1,StringLiteral__TorusHrzRadius,hrzRadius,(MethodInfo *)0x0);
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (pMVar1,StringLiteral__TorusVertRadius,vertRadius,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLightDirection(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetLightDirection
               (GizmoCircularMaterial *this,Vector3 lightDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__LightDir);
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetLightIntensity
               (GizmoCircularMaterial *this,float intensity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetLit
               (GizmoCircularMaterial *this,bool isLit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetPass
               (GizmoCircularMaterial *this,int32_t passIndex,MethodInfo *method)

{
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Void SetShapeCenter(Vector3) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetShapeCenter
               (GizmoCircularMaterial *this,Vector3 center,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__CircleCenter);
    func_?(&StringLiteral__TorusCenter);
    cRam_? = '\x01';
  }
  if ((this->fields)._circularType == 0) {
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      value_00.w = 0.0;
      value_00._0_12_ = center;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar1,StringLiteral__CircleCenter,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      value.w = 0.0;
      value._0_12_ = center;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar1,StringLiteral__TorusCenter,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTorusCoreRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetTorusCoreRadius
               (GizmoCircularMaterial *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (((this->fields)._circularType == 1) || ((this->fields)._circularType == 2)) {
    this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (this_00 == (Material *)0x0) {
      uVar1 = func_?(&stack0xfffffff8);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__TorusCoreRadius,radius,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetTorusTubeRadius(Single) */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetTorusTubeRadius
               (GizmoCircularMaterial *this,float radius,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((this->fields)._circularType == 1) {
    this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (this_00 == (Material *)0x0) {
      uVar1 = func_?(&stack0xfffffff8);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__TorusTubeRadius,radius,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetZTestAlways() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZTestAlways
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZTestEnabled
               (GizmoCircularMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZTestLess
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_SetZWriteEnabled
               (GizmoCircularMaterial *this,bool isEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* GizmoCircularMaterial() */

void Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial__ctor
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::GizmoCircularMaterial>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::GizmoCircularMaterial>__Singleton__);
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ZWrite);
    cRam_? = '\x01';
  }
  pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
  if (pMVar1 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
              (pMVar1,StringLiteral__ZWrite,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
    if (pMVar1 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                (pMVar1,StringLiteral__ZTest,8,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
      if (pMVar1 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                  (pMVar1,StringLiteral__CullMode,2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
        if (pMVar1 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetInt
                    (pMVar1,StringLiteral__IsLit,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pMVar1 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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


/* Material get_CircleMaterial() */

Material *
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_CircleMaterial
          (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._circleMaterial;
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
    pMVar1 = MaterialPool::MaterialPool_get_CircleCull(this_00,(MethodInfo *)0x0);
    (this->fields)._circleMaterial = pMVar1;
    func_?(&(this->fields)._circleMaterial);
  }
  return (this->fields)._circleMaterial;
}


/* Material get_CylindricalTorusMaterial() */

Material *
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_CylindricalTorusMaterial
          (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._cylindricalTorusMaterial;
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
    pMVar1 = MaterialPool::MaterialPool_get_CylindricalTorusCull(this_00,(MethodInfo *)0x0);
    (this->fields)._cylindricalTorusMaterial = pMVar1;
    func_?(&(this->fields)._cylindricalTorusMaterial);
  }
  return (this->fields)._cylindricalTorusMaterial;
}


/* Boolean get_IsLit() */

bool Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_IsLit
               (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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

float Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_LightIntensity
                (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = GizmoCircularMaterial_get_Material(this,(MethodInfo *)0x0);
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
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_Material
          (GizmoCircularMaterial *this,MethodInfo *method)

{
  if ((this->fields)._circularType == 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
      func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields)._circleMaterial;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
      }
      pMVar3 = (MaterialPool *)
               Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                         (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
      if (pMVar3 == (MaterialPool *)0x0) goto code_?;
      pMVar1 = MaterialPool::MaterialPool_get_CircleCull(pMVar3,(MethodInfo *)0x0);
      (this->fields)._circleMaterial = pMVar1;
      func_?(&(this->fields)._circleMaterial);
    }
    return (this->fields)._circleMaterial;
  }
  if ((this->fields)._circularType != 1) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
      func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields)._cylindricalTorusMaterial;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
      }
      pMVar3 = (MaterialPool *)
               Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                         (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
      if (pMVar3 == (MaterialPool *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        pMVar1 = (Material *)(*pcVar4)();
        return pMVar1;
      }
      pMVar1 = MaterialPool::MaterialPool_get_CylindricalTorusCull(pMVar3,(MethodInfo *)0x0);
      (this->fields)._cylindricalTorusMaterial = pMVar1;
      func_?(&(this->fields)._cylindricalTorusMaterial);
    }
    return (this->fields)._cylindricalTorusMaterial;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._torusMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((TypeInfo__RTG__Singleton<RTG::MaterialPool>->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    }
    pMVar3 = (MaterialPool *)
             Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                       (MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    if (pMVar3 == (MaterialPool *)0x0) goto code_?;
    pMVar1 = MaterialPool::MaterialPool_get_TorusCull(pMVar3,(MethodInfo *)0x0);
    (this->fields)._torusMaterial = pMVar1;
    func_?(&(this->fields)._torusMaterial);
  }
  return (this->fields)._torusMaterial;
}


/* Material get_TorusMaterial() */

Material *
Assembly-CSharp.dll::RTG::GizmoCircularMaterial::GizmoCircularMaterial_get_TorusMaterial
          (GizmoCircularMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::MaterialPool>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::MaterialPool>);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._torusMaterial;
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
    pMVar1 = MaterialPool::MaterialPool_get_TorusCull(this_00,(MethodInfo *)0x0);
    (this->fields)._torusMaterial = pMVar1;
    func_?(&(this->fields)._torusMaterial);
  }
  return (this->fields)._torusMaterial;
}

