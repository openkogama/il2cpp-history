
/* Void Update() */

void Assembly-CSharp-firstpass.dll::WaterBase::WaterBase_Update(WaterBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).sharedMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&StringLiteral_WATER_EDGEBLEND_OFF);
      func_?(&StringLiteral_WATER_EDGEBLEND_ON);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields).sharedMaterial;
    if ((this->fields).waterQuality < 2) {
      if ((this->fields).waterQuality < 1) {
        if (pMVar1 == (Material *)0x0) goto code_?;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                            (pMVar1,(MethodInfo *)0x0);
        if (this_00 == (Shader *)0x0) goto code_?;
        value = 0xc9;
      }
      else {
        if (pMVar1 == (Material *)0x0) goto code_?;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                            (pMVar1,(MethodInfo *)0x0);
        if (this_00 == (Shader *)0x0) goto code_?;
        value = 0x12d;
      }
    }
    else {
      if (pMVar1 == (Material *)0x0) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                          (pMVar1,(MethodInfo *)0x0);
      if (this_00 == (Shader *)0x0) goto code_?;
      value = 0x1f5;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_set_maximumLOD
              (this_00,value,(MethodInfo *)0x0);
    if ((this->fields).edgeBlend == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
                (StringLiteral_WATER_EDGEBLEND_OFF,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
                (StringLiteral_WATER_EDGEBLEND_ON,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
                (StringLiteral_WATER_EDGEBLEND_ON,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
                (StringLiteral_WATER_EDGEBLEND_OFF,(MethodInfo *)0x0);
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pCVar3,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0)
        ;
        if (pCVar3 != (Camera *)0x0) {
          DVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                            (pCVar3,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                    (pCVar3,DVar4 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
          return;
        }
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}


/* Void UpdateShader() */

void Assembly-CSharp-firstpass.dll::WaterBase::WaterBase_UpdateShader
               (WaterBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_WATER_EDGEBLEND_OFF);
    func_?(&StringLiteral_WATER_EDGEBLEND_ON);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sharedMaterial;
  if ((this->fields).waterQuality < 2) {
    if ((this->fields).waterQuality < 1) {
      if (this_00 == (Material *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                          (this_00,(MethodInfo *)0x0);
      if (this_01 == (Shader *)0x0) goto code_?;
      value = 0xc9;
    }
    else {
      if (this_00 == (Material *)0x0) goto code_?;
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                          (this_00,(MethodInfo *)0x0);
      if (this_01 == (Shader *)0x0) goto code_?;
      value = 0x12d;
    }
  }
  else {
    if (this_00 == (Material *)0x0) goto code_?;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                        (this_00,(MethodInfo *)0x0);
    if (this_01 == (Shader *)0x0) goto code_?;
    value = 0x1f5;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_set_maximumLOD
            (this_01,value,(MethodInfo *)0x0);
  if ((this->fields).edgeBlend == 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
              (StringLiteral_WATER_EDGEBLEND_OFF,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
              (StringLiteral_WATER_EDGEBLEND_ON,(MethodInfo *)0x0);
  }
  else {
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
              (StringLiteral_WATER_EDGEBLEND_ON,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
              (StringLiteral_WATER_EDGEBLEND_OFF,(MethodInfo *)0x0);
    pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pCVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar1 != (Camera *)0x0) {
        DVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                          (pCVar1,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                  (pCVar1,DVar3 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void WaterTileBeingRendered(Transform, Camera) */

void Assembly-CSharp-firstpass.dll::WaterBase::WaterBase_WaterTileBeingRendered
               (WaterBase *this,Transform *tr,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)currentCam,(MethodInfo *)0x0);
  if ((bVar1 != 0) && ((this->fields).edgeBlend != 0)) {
    if (currentCam == (Camera *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                      (currentCam,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
              (currentCam,DVar3 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
  }
  return;
}


/* WaterBase() */

void Assembly-CSharp-firstpass.dll::WaterBase::WaterBase__ctor(WaterBase *this,MethodInfo *method)

{
  (this->fields).waterQuality = 2;
  (this->fields).edgeBlend = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

