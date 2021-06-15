
/* Void Update() */

void Assembly-CSharp-firstpass.dll::WaterBase::WaterBase_Update(WaterBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).sharedMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    iVar3 = (this->fields).waterQuality;
    pMVar1 = (this->fields).sharedMaterial;
    if (iVar3 < 2) {
      if (iVar3 < 1) {
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
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pCVar4,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0)
        ;
        if (pCVar4 != (Camera *)0x0) {
          DVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                            (pCVar4,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                    (pCVar4,DVar5 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
          return;
        }
code_?:
        func_?(0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).waterQuality;
  this_00 = (this->fields).sharedMaterial;
  if (iVar1 < 2) {
    if (iVar1 < 1) {
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
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pCVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar2 != (Camera *)0x0) {
        DVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_depthTextureMode
                          (pCVar2,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode
                  (pCVar2,DVar4 | DepthTextureMode__Enum_Depth,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

