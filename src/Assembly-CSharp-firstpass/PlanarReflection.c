
/* Matrix4x4 CalculateObliqueMatrix(Matrix4x4, Vector4) */

Matrix4x4 * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateObliqueMatrix(Matrix4x4 *__return_storage_ptr__,Matrix4x4 projection,Vector4 clipPlane,MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse((Matrix4x4 *)&stack0xffffffa0,&projection,(MethodInfo *)0x0);
  VStack_2.y = 0.0;
  if (0.0 < clipPlane.x) {
    VStack_2.x = 1.0;
  }
  else if (clipPlane.x < 0.0) {
    VStack_2.x = -1.0;
  }
  else {
    VStack_2.x = 0.0;
  }
  if (0.0 < clipPlane.y) {
    VStack_2.y = 1.0;
  }
  else if (clipPlane.y < 0.0) {
    VStack_2.y = -1.0;
  }
  VStack_2.z = 1.0;
  VStack_2.w = 1.0;
  vector.y = VStack_2.y;
  vector.x = VStack_2.x;
  vector.z = 1.0;
  vector.w = 1.0;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1(&VStack_2,*pMVar1,vector,(MethodInfo *)0x0);
  fVar4 = 2.0 / (pVVar3->y * clipPlane.y + pVVar3->x * clipPlane.x + clipPlane.z * pVVar3->z + clipPlane.w * pVVar3->w);
  fStack_5 = clipPlane.y * fVar4;
  fStack_6 = clipPlane.z * fVar4;
  fStack_7 = clipPlane.w * fVar4;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1(&projection,3,(MethodInfo *)0x0);
  projection.m00 = clipPlane.x * fVar4 - fVar8;
  projection.m10 = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1(&projection,2,projection.m00,(MethodInfo *)0x0);
  projection.m10 = 0.0;
  projection.m00 = 9.80909e-45;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1(&projection,7,(MethodInfo *)0x0);
  projection.m31 = fStack_5 - fVar4;
  projection.m11 = (float)&projection;
  projection.m02 = 0.0;
  projection.m21 = 8.40779e-45;
  projection.m01 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1((Matrix4x4 *)projection.m11,6,projection.m31,(MethodInfo *)0x0);
  projection.m02 = 0.0;
  projection.m21 = (float)&projection;
  projection.m31 = 1.54143e-44;
  projection.m11 = (float)&UNK_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1((Matrix4x4 *)projection.m21,0xb,(MethodInfo *)0x0);
  projection.m23 = fStack_6 - fVar4;
  projection.m03 = (float)&projection;
  projection.m33 = 0.0;
  projection.m13 = 1.4013e-44;
  projection.m32 = (float)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1((Matrix4x4 *)projection.m03,10,projection.m23,(MethodInfo *)0x0);
  projection.m33 = 0.0;
  projection.m13 = (float)&projection;
  projection.m23 = 2.10195e-44;
  projection.m03 = (float)&UNK_?;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_Item_1((Matrix4x4 *)projection.m13,0xf,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_set_Item_1(&projection,0xe,fStack_7 - fVar4,(MethodInfo *)0x0);
  return &projection;
}


/* Matrix4x4 CalculateReflectionMatrix(Matrix4x4, Vector4) */

Matrix4x4 * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CalculateReflectionMatrix(Matrix4x4 *__return_storage_ptr__,Matrix4x4 reflectionMat,Vector4 plane,MethodInfo *method)

{
  __return_storage_ptr__->m00 = 1.0 - (plane.x + plane.x) * plane.x;
  __return_storage_ptr__->m10 = plane.y * -2.0 * plane.x;
  __return_storage_ptr__->m20 = plane.z * -2.0 * plane.x;
  __return_storage_ptr__->m30 = 0.0;
  __return_storage_ptr__->m01 = plane.x * -2.0 * plane.y;
  __return_storage_ptr__->m11 = 1.0 - (plane.y + plane.y) * plane.y;
  __return_storage_ptr__->m21 = plane.z * -2.0 * plane.y;
  __return_storage_ptr__->m31 = 0.0;
  __return_storage_ptr__->m02 = plane.x * -2.0 * plane.z;
  __return_storage_ptr__->m12 = plane.y * -2.0 * plane.z;
  __return_storage_ptr__->m22 = 1.0 - (plane.z + plane.z) * plane.z;
  __return_storage_ptr__->m32 = 0.0;
  __return_storage_ptr__->m03 = plane.w * -2.0 * plane.x;
  __return_storage_ptr__->m13 = plane.w * -2.0 * plane.y;
  __return_storage_ptr__->m23 = plane.w * -2.0 * plane.z;
  __return_storage_ptr__->m33 = 1.0;
  return __return_storage_ptr__;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CameraSpacePlane(Vector4 *__return_storage_ptr__,PlanarReflection *this,Camera *cam,Vector3 pos,Vector3 normal,float sideSign,MethodInfo *method)

{
  func_?(&MStack_1,0,0x40);
  fVar2 = (this->fields).clipPlaneOffset;
  if (cam != (Camera *)0x0) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix((Matrix4x4 *)&stack0xffffff70,cam,(MethodInfo *)0x0);
    MStack_1.m00 = pMVar3->m00;
    MStack_1.m10 = pMVar3->m10;
    MStack_1.m20 = pMVar3->m20;
    MStack_1.m30 = pMVar3->m30;
    MStack_1.m01 = pMVar3->m01;
    MStack_1.m11 = pMVar3->m11;
    MStack_1.m21 = pMVar3->m21;
    MStack_1.m31 = pMVar3->m31;
    MStack_1.m02 = pMVar3->m02;
    MStack_1.m12 = pMVar3->m12;
    MStack_1.m22 = pMVar3->m22;
    MStack_1.m32 = pMVar3->m32;
    MStack_1.m03 = pMVar3->m03;
    MStack_1.m13 = pMVar3->m13;
    MStack_1.m23 = pMVar3->m23;
    MStack_1.m33 = pMVar3->m33;
    point.y = pos.y + normal.y * fVar2;
    point.x = pos.x + normal.x * fVar2;
    point.z = pos.z + normal.z * fVar2;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint(&VStack_5,&MStack_1,point,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fVar2 = pVVar4->z;
    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector(&VStack_5,&MStack_1,normal,(MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    fVar9 = *(float *)(puVar8 + 1);
    normal.x = (float)*puVar8;
    normal.y = (float)((ulonglong)*puVar8 >> 0x20);
    __return_storage_ptr__->x = normal.x * sideSign;
    __return_storage_ptr__->y = normal.y * sideSign;
    __return_storage_ptr__->z = fVar9 * sideSign;
    __return_storage_ptr__->w = -((float)uVar6 * normal.x * sideSign + (float)uVar7 * normal.y * sideSign + fVar2 * fVar9 * sideSign);
    return __return_storage_ptr__;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector4 *)(*pcVar10)();
  return pVVar11;
}


/* Camera CreateReflectionCameraFor(Camera) */

Camera * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateReflectionCameraFor(PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__UnityEngine__Camera);
    func_?(&UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__);
    func_?(&UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__);
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Reflection);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
  if ((pGVar1 == (GameObject *)0x0) || (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name((Object_1 *)pGVar1,(MethodInfo *)0x0), cam == (Camera *)0x0)) {
code_?:
    func_?();
  }
  else {
    str2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name((Object_1 *)cam,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,StringLiteral_Reflection,str2,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Find(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pGVar1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
code_?:
      if (pGVar1 != (GameObject *)0x0) {
        exists = (Object_1 *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(pGVar1,UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit(exists,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1(pGVar1,UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__);
        }
        method_00 = (MethodInfo *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(pGVar1,UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__);
        if (method_00 != (MethodInfo *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor((Camera *)method_00,(this->fields).clearColor,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags((Camera *)method_00,((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,(MethodInfo *)0x0);
          ptr = (Void *)(this->fields).reflectionMask.m_Mask;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          p_Var7 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1(ptr,(MethodInfo *)0x0);
          uVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Water,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask((Camera *)method_00,(uint)p_Var7 & ~(1 << (uVar4 & 0x1f)),(MethodInfo *)0x0);
          value.a = 1.0;
          value.r = 0.0;
          value.g = 0.0;
          value.b = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor((Camera *)method_00,value,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)method_00,0,(MethodInfo *)0x0);
          pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture((Camera *)method_00,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pRVar5,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            return (Camera *)method_00;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth((Camera *)method_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar6 = (float10)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight((Camera *)method_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pRVar5 = (RenderTexture *)func_?();
          func_?();
          height = func_?();
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10(pRVar5,(int)fVar6,height,0xADDR,method_00);
          if (pRVar5 != (RenderTexture *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags((Object_1 *)pRVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture((Camera *)method_00,pRVar5,(MethodInfo *)0x0);
            return (Camera *)method_00;
          }
        }
      }
      goto code_?;
    }
    components = (Type__Array *)func_?();
    handle = TypeRef__UnityEngine__Camera;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar7 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (components == (Type__Array *)0x0) goto code_?;
    if ((pTVar7 == (Type *)0x0) || (iVar8 = func_?(), iVar8 != 0)) {
      if (components->max_length == 0) goto code_?;
      components->vector[0] = pTVar7;
      func_?();
      pGVar1 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2(pGVar1,pSVar2,components,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pCVar10 = (Camera *)(*pcVar9)();
  return pCVar10;
}


/* RenderTexture CreateTextureFor(Camera) */

RenderTexture * Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_CreateTextureFor(PlanarReflection *this,Camera *cam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cam != (Camera *)0x0) {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelWidth(cam,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    fVar2 = (float10)func_?((double)((float)iVar1 * 0.5));
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_pixelHeight(cam,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pRVar3 = (RenderTexture *)func_?();
    func_?((double)((float)iVar1 * 0.5));
    iVar1 = func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10(pRVar3,(int)fVar2,iVar1,in_stack_4,in_stack_5);
    if (pRVar3 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags((Object_1 *)pRVar3,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
      return pRVar3;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pRVar3 = (RenderTexture *)(*pcVar6)();
  return pRVar3;
}


/* Void LateUpdate() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_LateUpdate(PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Clear__);
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_ *)(this->fields).helperCameras,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Clear__);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnDestroy(PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).reflectionCamera;
  if (pCVar1 != (Camera *)0x0) {
    pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture(pCVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality((Object_1 *)pRVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pCVar1 = (this->fields).reflectionCamera;
    if (pCVar1 != (Camera *)0x0) {
      pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture(pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).reflectionCamera;
      if ((pCVar1 != (Camera *)0x0) && (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture(pCVar1,(RenderTexture *)0x0,(MethodInfo *)0x0), pRVar2 != (RenderTexture *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release(pRVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnDisable(PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_WATER_REFLECTIVE);
    func_?(&StringLiteral_WATER_SIMPLE);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword(StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword(StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_OnEnable(PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_WATER_REFLECTIVE);
    func_?(&StringLiteral_WATER_SIMPLE);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword(StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword(StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
  return;
}


/* Void RenderHelpCameras(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_RenderHelpCameras(PlanarReflection *this,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor(this_01,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__);
    (this->fields).helperCameras = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)this_01;
    func_?(&(this->fields).helperCameras,this_01);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).helperCameras;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey(this_00,(Object *)currentCam,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_);
    if (bVar1 == 0) {
      pDVar2 = (this->fields).helperCameras;
      if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::Dictionary_2_System_Object_System_Boolean__Add((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,0,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_);
    }
    pDVar2 = (this->fields).helperCameras;
    if (pDVar2 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::Dictionary_2_System_Object_System_Boolean__get_Item((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_);
      if (bVar1 == 0) {
        pCVar3 = (this->fields).reflectionCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pCVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pCVar3 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
          (this->fields).reflectionCamera = pCVar3;
          func_?(&(this->fields).reflectionCamera,pCVar3);
        }
        PlanarReflection_RenderReflectionFor(this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
        pDVar2 = (this->fields).helperCameras;
        if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::Dictionary_2_System_Object_System_Boolean__set_Item((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,1,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RenderReflectionFor(Camera, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_RenderReflectionFor(PlanarReflection *this,Camera *cam,Camera *reflectCamera,MethodInfo *method)

{
  pPVar1 = this;
  auVar2._0_40_ = in_stack_3._0_40_;
  auVar2._40_4_ = unaff_EBX;
  auVar4._0_28_ = in_stack_3._0_28_;
  auVar4._28_4_ = unaff_EBP;
  auVar4._36_8_ = auVar2._36_8_;
  auVar4._32_4_ = unaff_retaddr;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeRef__UnityEngine__Skybox);
    func_?(&TypeInfo__UnityEngine__Skybox);
    func_?(&TypeInfo__System__Type);
    func_?(&StringLiteral_Water);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)reflectCamera,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    return;
  }
  auVar6._28_16_ = auVar4._28_16_;
  auVar6._0_24_ = auVar4._0_24_;
  auVar6._24_4_ = (this->fields).sharedMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit(auVar6._24_4_,(MethodInfo *)0x0);
  if (bVar5 == 0) {
code_?:
    p_Var11 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1((Void *)(this->fields).reflectionMask.m_Mask,(MethodInfo *)0x0);
    auVar7._28_16_ = auVar6._28_16_;
    auVar7._0_24_ = auVar6._0_24_;
    auVar7._24_4_ = p_Var11;
    uVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Water,(MethodInfo *)0x0);
    if (reflectCamera == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(reflectCamera,auVar7._24_4_ & ~(1 << (uVar8 & 0x1f)),(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode(reflectCamera,DepthTextureMode__Enum_None,(MethodInfo *)0x0);
    value_01.a = 1.0;
    value_01.r = 0.0;
    value_01.g = 0.0;
    value_01.b = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor(reflectCamera,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags(reflectCamera,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath(reflectCamera,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor(reflectCamera,(this->fields).clearColor,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags(reflectCamera,((this->fields).reflectSkybox == 0) + CameraClearFlags__Enum_Skybox,(MethodInfo *)0x0);
    if ((this->fields).reflectSkybox == 0) {
code_?:
      auVar9._16_28_ = auVar7._16_28_;
      auVar9._0_12_ = auVar7._0_12_;
      auVar9._12_4_ = 0;
      auVar10._12_32_ = auVar9._12_32_;
      auVar10._0_8_ = auVar7._0_8_;
      auVar10._8_4_ = 1;
      auVar11._8_36_ = auVar10._8_36_;
      auVar11._0_8_ = 0x1021af0f00000000;
      UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
      auVar12._16_28_ = auVar11._16_28_;
      auVar12._0_12_ = auVar11._0_12_;
      auVar12._12_4_ = 0;
      auVar13._12_32_ = auVar12._12_32_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13._8_4_ = this;
      auVar14._8_36_ = auVar13._8_36_;
      auVar14._0_8_ = 0x1021af1700000000;
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      auVar16._24_20_ = auVar14._24_20_;
      auVar16._0_20_ = auVar14._0_20_;
      auVar16._20_4_ = pTVar15;
      if (cam == (Camera *)0x0) goto code_?;
code_?:
      auVar17._32_12_ = auVar16._32_12_;
      auVar17._0_28_ = auVar16._0_28_;
      auVar17._28_4_ = 0;
      auVar18._28_16_ = auVar17._28_16_;
      auVar18._0_24_ = auVar16._0_24_;
      auVar18._24_4_ = cam;
      auVar19._24_20_ = auVar18._24_20_;
      auVar19._0_20_ = auVar16._0_20_;
      auVar19._20_4_ = &UNK_?;
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)cam,(MethodInfo *)0x0);
      if (pTVar15 != (Transform *)0x0) {
        auVar20._40_4_ = auVar19._40_4_;
        auVar20._0_36_ = auVar19._0_36_;
        auVar20._36_4_ = 0;
        auVar21._36_8_ = auVar20._36_8_;
        auVar21._0_32_ = auVar19._0_32_;
        auVar21._32_4_ = pTVar15;
        auVar22._32_12_ = auVar21._32_12_;
        auVar22._0_28_ = auVar19._0_28_;
        auVar22._28_4_ = (Vector3 *)&stack0xffffffd8;
        auVar23._28_16_ = auVar22._28_16_;
        auVar23._0_24_ = auVar19._0_24_;
        auVar23._24_4_ = &UNK_?;
        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
        auVar25._40_4_ = auVar23._40_4_;
        auVar25._0_36_ = auVar23._0_36_;
        auVar25._36_4_ = 0;
        auVar26._36_8_ = auVar25._36_8_;
        auVar26._0_32_ = auVar23._0_32_;
        auVar26._32_4_ = reflectCamera;
        lVar27._0_4_ = pVVar24->x;
        lVar27._4_4_ = pVVar24->y;
        cam = (Camera *)pVVar24->z;
        auVar28._32_12_ = auVar26._32_12_;
        auVar28._0_28_ = auVar23._0_28_;
        auVar28._28_4_ = &UNK_?;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
        auVar29._0_8_ = lVar27 << 0x20 ^ 0x8000000000000000;
        auVar29._8_4_ = (float)((ulonglong)lVar27 >> 0x20);
        auVar30._16_28_ = auVar28._16_28_;
        auVar30._12_4_ = cam;
        auVar30._0_12_ = auVar29;
        if (pTVar15 != (Transform *)0x0) {
          unaff_retaddr = (float)auVar29._4_8_;
          this = (PlanarReflection *)SUB84(auVar29._4_8_,4);
          auVar31._0_36_ = auVar30._0_36_;
          auVar31._36_4_ = &UNK_?;
          auVar31._40_4_ = pTVar15;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles(pTVar15,VVar32,(MethodInfo *)0x0);
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
          auVar33._28_16_ = auVar31._28_16_;
          auVar33._0_24_ = auVar31._0_24_;
          auVar33._24_4_ = pTVar15;
          pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
          if (pTVar15 != (Transform *)0x0) {
            pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffc8,pTVar15,(MethodInfo *)0x0);
            if (auVar33._24_4_ != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(auVar33._24_4_,*pVVar24,(MethodInfo *)0x0);
              if ((auVar33._20_4_ != (Component *)0x0) && (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(auVar33._20_4_,(MethodInfo *)0x0), pTVar15 != (Transform *)0x0)) {
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
                fVar34 = pVVar24->x;
                fVar35 = pVVar24->z;
                pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd8,auVar33._20_4_,(MethodInfo *)0x0);
                auVar36._28_16_ = auVar33._28_16_;
                auVar36._0_24_ = auVar33._0_24_;
                auVar36._24_4_ = pVVar24->y;
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(auVar33._20_4_,(MethodInfo *)0x0);
                if (pTVar15 != (Transform *)0x0) {
                  pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffb0,pTVar15,(MethodInfo *)0x0);
                  uVar37._0_4_ = pVVar24->x;
                  uVar37._4_4_ = pVVar24->y;
                  fVar38 = pVVar24->z;
                  auVar39._12_28_ = auVar36._16_28_;
                  auVar39._0_4_ = pVVar24->x;
                  auVar39._4_4_ = pVVar24->y;
                  auVar39._8_4_ = pVVar24->z;
                  auVar40._0_20_ = auVar39._0_20_ << 0x20;
                  auVar40._24_20_ = auVar36._24_20_;
                  auVar40._20_4_ = -(auVar36._24_4_ * (float)uVar37._4_4_ + fVar34 * (float)(undefined4)uVar37 + fVar35 * fVar38) - (pPVar1->fields).clipPlaneOffset;
                  UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero((Matrix4x4 *)&puStack_41,(MethodInfo *)0x0);
                  fVar42 = auVar40._4_4_;
                  fStack_43 = 1.0 - (fVar42 + fVar42) * fVar42;
                  fVar44 = auVar40._8_4_;
                  fVar45 = fVar42 * -2.0 * fVar44;
                  fVar46 = auVar40._12_4_;
                  fVar47 = fVar42 * -2.0 * fVar46;
                  fVar48 = auVar40._20_4_ * -2.0;
                  fStack_49 = fVar44 * -2.0 * fVar42;
                  fVar50 = 1.0 - (fVar44 + fVar44) * fVar44;
                  puStack_51 = (undefined *)(fVar46 * -2.0 * fVar42);
                  fVar52 = fVar46 * -2.0 * fVar44;
                  fVar53 = 0.0;
                  fVar54 = 0.0;
                  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                  if (pTVar15 != (Transform *)0x0) {
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffb0,pTVar15,(MethodInfo *)0x0);
                    fVar55 = pVVar24->y;
                    fVar56 = pVVar24->z;
                    VVar32 = *pVVar24;
                    (pPVar1->fields).oldpos.x = pVVar24->x;
                    (pPVar1->fields).oldpos.y = fVar55;
                    (pPVar1->fields).oldpos.z = fVar56;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint((Vector3 *)&stack0xffffffb0,(Matrix4x4 *)&fStack_43,VVar32,(MethodInfo *)0x0);
                    auVar57._24_20_ = auVar40._24_20_;
                    auVar57._0_20_ = auVar40._0_20_;
                    auVar57._20_4_ = pVVar24->z;
                    pMVar58 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix((Matrix4x4 *)&puStack_41,reflectCamera,(MethodInfo *)0x0);
                    rhs.m10 = fStack_49;
                    rhs.m00 = fStack_43;
                    rhs.m20 = (float)puStack_51;
                    rhs.m30 = fVar53;
                    rhs.m01 = fVar45;
                    rhs.m11 = fVar50;
                    rhs.m21 = fVar52;
                    rhs.m31 = fVar54;
                    rhs.m02 = fVar47;
                    rhs.m12 = fVar44 * -2.0 * fVar46;
                    rhs.m22 = 1.0 - (fVar46 + fVar46) * fVar46;
                    rhs.m32 = 0.0;
                    rhs.m03 = fVar48 * fVar42;
                    rhs.m13 = fVar48 * fVar44;
                    rhs.m23 = fVar48 * fVar46;
                    rhs.m33 = 1.0;
                    pMVar58 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply((Matrix4x4 *)&puStack_41,*pMVar58,rhs,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix(reflectCamera,*pMVar58,(MethodInfo *)0x0);
                    func_?();
                    fVar45 = (pPVar1->fields).clipPlaneOffset;
                    fVar34 = fVar45 * auVar57._4_4_ + fVar34;
                    fVar35 = fVar45 * auVar57._12_4_ + fVar35;
                    auVar59._28_16_ = auVar57._28_16_;
                    auVar59._0_24_ = auVar57._0_24_;
                    auVar59._24_4_ = fVar45 * auVar57._8_4_ + auVar57._24_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix((Matrix4x4 *)&puStack_41,reflectCamera,(MethodInfo *)0x0);
                    point.y = (float)auVar59._24_4_;
                    point.x = fVar34;
                    point.z = fVar35;
                    pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint((Vector3 *)&stack0xffffffb0,(Matrix4x4 *)&stack0xffffff58,point,(MethodInfo *)0x0);
                    uVar60 = pVVar24->x;
                    uVar61 = pVVar24->y;
                    auVar62._4_4_ = uVar61;
                    auVar62._0_4_ = uVar60;
                    auVar63._16_28_ = auVar59._16_28_;
                    auVar63._0_12_ = auVar59._0_12_;
                    auVar63._12_4_ = pVVar24->z;
                    auVar62._8_32_ = auVar63._12_32_;
                    auVar62._40_4_ = 0;
                    auVar62 = auVar62 << 0x20;
                    vector.z = fVar38;
                    vector.x = (float)(int)uVar37;
                    vector.y = (float)(int)((ulonglong)uVar37 >> 0x20);
                    UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector((Vector3 *)&stack0xffffffb0,(Matrix4x4 *)&stack0xffffff58,vector,(MethodInfo *)0x0);
                    puVar64 = (undefined8 *)func_?();
                    fVar34 = *(float *)(puVar64 + 1);
                    fVar50 = (float)*puVar64;
                    fVar47 = (float)((ulonglong)*puVar64 >> 0x20);
                    fVar45 = -(fVar50 * auVar62._4_4_ + fVar47 * auVar62._8_4_ + fVar34 * auVar62._12_4_);
                    pMVar58 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_projectionMatrix((Matrix4x4 *)&puStack_41,reflectCamera,(MethodInfo *)0x0);
                    fVar35 = pMVar58->m13;
                    fVar38 = pMVar58->m23;
                    clipPlane.y = fVar47;
                    clipPlane.x = fVar50;
                    clipPlane.z = fVar34;
                    clipPlane.w = fVar45;
                    pMVar58 = PlanarReflection_CalculateObliqueMatrix((Matrix4x4 *)&puStack_41,*pMVar58,clipPlane,(MethodInfo *)0x0);
                    auVar65._0_4_ = pMVar58->m00;
                    auVar65._4_4_ = pMVar58->m10;
                    auVar65._8_4_ = pMVar58->m20;
                    auVar65._12_4_ = pMVar58->m30;
                    auVar65._16_4_ = pMVar58->m01;
                    auVar65._20_4_ = pMVar58->m11;
                    auVar65._24_4_ = pMVar58->m21;
                    auVar65._28_4_ = pMVar58->m31;
                    auVar65._32_4_ = pMVar58->m02;
                    auVar65._36_4_ = pMVar58->m12;
                    auVar65._40_4_ = pMVar58->m22;
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix(reflectCamera,*pMVar58,(MethodInfo *)0x0);
                    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                    if (pTVar15 != (Transform *)0x0) {
                      value.y = fVar38;
                      value.x = fVar35;
                      value.z = auVar65._20_4_;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar15,value,(MethodInfo *)0x0);
                      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                      if (pTVar15 != (Transform *)0x0) {
                        pVVar24 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles((Vector3 *)&stack0xffffffb0,pTVar15,(MethodInfo *)0x0);
                        lVar66._0_4_ = pVVar24->x;
                        lVar66._4_4_ = pVVar24->y;
                        fVar34 = pVVar24->z;
                        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)reflectCamera,(MethodInfo *)0x0);
                        auVar67._0_8_ = lVar66 << 0x20 ^ 0x8000000000000000;
                        auVar67._8_4_ = (float)((ulonglong)lVar66 >> 0x20);
                        if (pTVar15 != (Transform *)0x0) {
                          value_00.z = fVar34;
                          value_00.x = (float)auVar67._4_8_;
                          value_00.y = SUB84(auVar67._4_8_,4);
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles(pTVar15,value_00,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(reflectCamera,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(0,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (cam == (Camera *)0x0) goto code_?;
    pGVar68 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)cam,(MethodInfo *)0x0);
    pIVar69 = TypeRef__UnityEngine__Skybox;
    auVar7._24_4_ = pGVar68;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar70 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar69,(MethodInfo *)0x0);
    if (auVar7._24_4_ == (GameObject *)0x0) goto code_?;
    pCVar71 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent(auVar7._24_4_,pTVar70,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pCVar71,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    pGVar68 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar69 = TypeRef__UnityEngine__Skybox;
    auVar72._28_16_ = auVar7._28_16_;
    auVar72._0_24_ = auVar7._0_24_;
    auVar72._24_4_ = pGVar68;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar70 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar69,(MethodInfo *)0x0);
    if (auVar72._24_4_ == (GameObject *)0x0) goto code_?;
    pCVar73 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent(auVar72._24_4_,pTVar70,(MethodInfo *)0x0);
    pCVar71 = (Component *)0x0;
    auVar74._0_20_ = auVar72._0_20_;
    auVar75._24_20_ = auVar72._24_20_;
    if (pCVar73 == (Component *)0x0) {
      auVar74._20_4_ = 0;
    }
    else {
      if ((Skybox__Class *)pCVar73->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar71 = pCVar73;
      }
      auVar74._20_4_ = pCVar71;
      if (pCVar71 == (Component *)0x0) goto code_?;
    }
    auVar75._0_24_ = auVar74;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pCVar71,(MethodInfo *)0x0);
    if (bVar5 != 0) goto code_?;
    pGVar68 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)reflectCamera,(MethodInfo *)0x0);
    pIVar69 = TypeRef__UnityEngine__Skybox;
    auVar76._28_16_ = auVar75._28_16_;
    auVar76._0_24_ = auVar75._0_24_;
    auVar76._24_4_ = pGVar68;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar70 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar69,(MethodInfo *)0x0);
    if (auVar76._24_4_ == (GameObject *)0x0) goto code_?;
    pCVar71 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent(auVar76._24_4_,pTVar70,(MethodInfo *)0x0);
    auVar75._0_20_ = auVar76._0_20_;
    auVar75._24_20_ = auVar76._24_20_;
    if (pCVar71 != (Component *)0x0) {
      pCVar73 = (Component *)0x0;
      if ((Skybox__Class *)pCVar71->klass == TypeInfo__UnityEngine__Skybox) {
        pCVar73 = pCVar71;
      }
      auVar75._20_4_ = pCVar73;
      if (pCVar73 != (Component *)0x0) goto code_?;
      goto code_?;
    }
    auVar75._20_4_ = 0;
code_?:
    pIVar69 = TypeRef__UnityEngine__Skybox;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar70 = mscorlib.dll::System::Type::Type_GetTypeFromHandle((RuntimeTypeHandle)pIVar69,(MethodInfo *)0x0);
    pSVar77 = (Skybox *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent((Component *)cam,pTVar70,(MethodInfo *)0x0);
    if (pSVar77 == (Skybox *)0x0) goto code_?;
    pSVar78 = (Skybox *)0x0;
    if (pSVar77->klass == TypeInfo__UnityEngine__Skybox) {
      pSVar78 = pSVar77;
    }
    if (pSVar78 != (Skybox *)0x0) {
      pSVar78 = (Skybox *)0x0;
      if (pSVar77->klass == TypeInfo__UnityEngine__Skybox) {
        pSVar78 = pSVar77;
      }
      pMVar79 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material(pSVar78,(MethodInfo *)0x0);
      if (auVar75._20_4_ != (Skybox *)0x0) {
        auVar80._40_4_ = 0;
        auVar80._0_40_ = auVar75._4_40_;
        auVar80 = auVar80 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material(auVar75._20_4_,pMVar79,(MethodInfo *)0x0);
        auVar81._40_4_ = 0;
        auVar81._0_40_ = auVar80._4_40_;
        auVar81 = auVar81 << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
        auVar82._40_4_ = 0;
        auVar82._0_40_ = auVar81._4_40_;
        auVar82 = auVar82 << 0x20;
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        auVar16._24_20_ = auVar82._24_20_;
        auVar16._0_20_ = auVar82._0_20_;
        auVar16._20_4_ = pTVar15;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    pMVar79 = (this->fields).sharedMaterial;
    if (pMVar79 != (Material *)0x0) {
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1(pMVar79,(this->fields).reflectionSampler,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        return;
      }
      goto code_?;
    }
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar83 = (code *)swi(3);
  (*pcVar83)();
  return;
}


/* Void SaneCameraSettings(Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SaneCameraSettings(PlanarReflection *this,Camera *helperCam,MethodInfo *method)

{
  if (helperCam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depthTextureMode(helperCam,DepthTextureMode__Enum_None,(MethodInfo *)0x0);
    value.a = 1.0;
    value.r = 0.0;
    value.g = 0.0;
    value.b = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor(helperCam,value,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags(helperCam,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_renderingPath(helperCam,RenderingPath__Enum_Forward,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetStandardCameraParameter(Camera, LayerMask) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_SetStandardCameraParameter(PlanarReflection *this,Camera *cam,LayerMask mask,MethodInfo *method)

{
  this_00 = cam;
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Water);
    cRam_? = '\x01';
  }
  p_Var3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::UnsafeUtility_AsRef_1((Void *)mask.m_Mask,(MethodInfo *)0x0);
  uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Water,(MethodInfo *)0x0);
  if (cam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(cam,(uint)p_Var3 & ~(1 << (uVar1 & 0x1f)),(MethodInfo *)0x0);
    auVar2 = ZEXT412(0x3f800000) << 0x40;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor(this_00,(Color)(auVar3 << 0x20),(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_Start(PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    cRam_? = '\x01';
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  if (pOVar1 != (Object *)0x0) {
    pOVar2 = pOVar1[2].klass;
    (this->fields).sharedMaterial = (Material *)pOVar2;
    func_?(&(this->fields).sharedMaterial,pOVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void WaterTileBeingRendered(Transform, Camera) */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_WaterTileBeingRendered(PlanarReflection *this,Transform *tr,Camera *currentCam,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).helperCameras == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor(this_01,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Dictionary__);
    (this->fields).helperCameras = (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)this_01;
    func_?(&(this->fields).helperCameras,this_01);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).helperCameras;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey(this_00,(Object *)currentCam,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__ContainsKey_UnityEngine__Camera_);
    if (bVar1 == 0) {
      pDVar2 = (this->fields).helperCameras;
      if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::Dictionary_2_System_Object_System_Boolean__Add((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,0,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__Add_UnityEngine__Camera__bool_);
    }
    pDVar2 = (this->fields).helperCameras;
    if (pDVar2 != (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::Dictionary_2_System_Object_System_Boolean__get_Item((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__get_Item_UnityEngine__Camera_);
      if (bVar1 == 0) {
        pCVar3 = (this->fields).reflectionCamera;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pCVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          pCVar3 = PlanarReflection_CreateReflectionCameraFor(this,currentCam,(MethodInfo *)0x0);
          (this->fields).reflectionCamera = pCVar3;
          func_?(&(this->fields).reflectionCamera,pCVar3);
        }
        PlanarReflection_RenderReflectionFor(this,currentCam,(this->fields).reflectionCamera,(MethodInfo *)0x0);
        pDVar2 = (this->fields).helperCameras;
        if (pDVar2 == (Dictionary_2_UnityEngine_Camera_System_Boolean_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Boolean]::Dictionary_2_System_Object_System_Boolean__set_Item((Dictionary_2_System_Object_System_Boolean_ *)pDVar2,(Object *)currentCam,1,MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Camera,_bool>__set_Item_UnityEngine__Camera__bool_);
      }
      pCVar3 = (this->fields).reflectionCamera;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pCVar3,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pMVar4 = (this->fields).sharedMaterial;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)pMVar4,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pCVar3 = (this->fields).reflectionCamera;
          pMVar4 = (this->fields).sharedMaterial;
          name = (this->fields).reflectionSampler;
          if ((pCVar3 != (Camera *)0x0) && (value = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_targetTexture(pCVar3,(MethodInfo *)0x0), pMVar4 != (Material *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture(pMVar4,name,(Texture *)value,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlanarReflection() */

void Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection__ctor(PlanarReflection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__ReflectionTex);
    cRam_? = '\x01';
  }
  (this->fields).clearColor.r = 0.5;
  (this->fields).clearColor.g = 0.5;
  (this->fields).clearColor.b = 0.5;
  (this->fields).clearColor.a = 1.0;
  (this->fields).reflectionSampler = StringLiteral__ReflectionTex;
  func_?(&(this->fields).reflectionSampler,StringLiteral__ReflectionTex);
  (this->fields).clipPlaneOffset = 0.07;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).oldpos.x = (pVVar1->zeroVector).x;
  (this->fields).oldpos.y = fVar2;
  (this->fields).oldpos.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Single sgn(Single) */

float Assembly-CSharp-firstpass.dll::PlanarReflection::PlanarReflection_sgn(float a,MethodInfo *method)

{
  if (0.0 < a) {
    return 1.0;
  }
  if (0.0 <= a) {
    return 0.0;
  }
  return -1.0;
}

