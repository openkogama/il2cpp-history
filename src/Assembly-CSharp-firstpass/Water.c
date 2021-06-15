
/* Void CalculateObliqueMatrix(Matrix4x4 ByRef, Vector4) */

void Assembly-CSharp-firstpass.dll::Water::Water_CalculateObliqueMatrix
               (Matrix4x4 *projection,Vector4 clipPlane,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Matrix4x4 lhs;
  Vector4 vector;
  Vector4 a;
  Vector4 b;
  Vector4 a_00;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 (*pauVar10) [16];
  Vector4 *pVVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_16 [44];
  undefined *puStack_17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pauVar10 = (undefined1 (*) [16])func_?(auStack_16,projection,0);
  auVar5 = *pauVar10;
  uVar22 = *(undefined4 *)pauVar10[1];
  uVar2 = *(undefined4 *)(pauVar10[1] + 4);
  uVar3 = *(undefined4 *)(pauVar10[1] + 8);
  uVar23 = *(undefined4 *)(pauVar10[1] + 0xc);
  uVar18 = *(undefined4 *)pauVar10[2];
  uVar19 = *(undefined4 *)(pauVar10[2] + 4);
  uVar20 = *(undefined4 *)(pauVar10[2] + 8);
  uVar21 = *(undefined4 *)(pauVar10[2] + 0xc);
  fVar15 = *(float *)pauVar10[3];
  fVar13 = *(float *)(pauVar10[3] + 4);
  uVar4 = *(undefined4 *)(pauVar10[3] + 8);
  fVar1 = *(float *)(pauVar10[3] + 0xc);
  if ((((uint)(TypeInfo__Water->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Water->_1).cctor_started == 0)) {
    func_?(TypeInfo__Water);
  }
  uVar14 = _UNK_?;
  if ((clipPlane.x <= 0.0) && (uVar14 = _UNK_?, 0.0 <= clipPlane.x)) {
    uVar14 = 0;
  }
  uVar12 = _UNK_?;
  if ((clipPlane.y <= 0.0) && (uVar12 = 0, clipPlane.y < 0.0)) {
    uVar12 = _UNK_?;
  }
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  fVar27 = 0.0;
  func_?(&stack0xffffffcc,uVar14,uVar12,0x3f800000,0x3f800000,0);
  if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Matrix4x4);
  }
  lhs.m01 = (float)uVar22;
  lhs._0_16_ = auVar5;
  lhs.m11 = (float)uVar2;
  lhs.m21 = (float)uVar3;
  lhs.m31 = (float)uVar23;
  lhs.m02 = (float)uVar18;
  lhs.m12 = (float)uVar19;
  lhs.m22 = (float)uVar20;
  lhs.m32 = (float)uVar21;
  lhs.m03 = fVar15;
  lhs.m13 = fVar13;
  lhs.m23 = (float)uVar4;
  lhs.m33 = fVar1;
  vector.y = (float)uVar25;
  vector.x = (float)uVar24;
  vector.z = (float)uVar26;
  vector.w = fVar27;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                      ((Vector4 *)&stack0xffffffdc,lhs,vector,(MethodInfo *)0x0);
  fVar9 = clipPlane.w;
  fVar8 = clipPlane.z;
  fVar7 = clipPlane.y;
  fVar6 = clipPlane.x;
  fVar15 = pVVar11->x;
  fVar13 = pVVar11->y;
  fVar1 = pVVar11->z;
  fVar27 = pVVar11->w;
  if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
    func_?();
  }
  a.y = clipPlane.y;
  a.x = clipPlane.x;
  a.z = clipPlane.z;
  a.w = clipPlane.w;
  b.y = fVar13;
  b.x = fVar15;
  b.z = fVar1;
  b.w = fVar27;
  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_Dot(a,b,(MethodInfo *)0x0);
  a_00.y = fVar7;
  a_00.x = fVar6;
  a_00.z = fVar8;
  a_00.w = fVar9;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                      (&clipPlane,a_00,_UNK_? / fVar15,(MethodInfo *)0x0);
  clipPlane.x = pVVar11->x;
  clipPlane.y = pVVar11->y;
  clipPlane.z = pVVar11->z;
  clipPlane.w = pVVar11->w;
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  func_?();
  return;
}


/* Void CalculateReflectionMatrix(Matrix4x4 ByRef, Vector4) */

void Assembly-CSharp-firstpass.dll::Water::Water_CalculateReflectionMatrix
               (Matrix4x4 *reflectionMat,Vector4 plane,MethodInfo *method)

{
  fVar1 = (float10)func_?(&plane,0,0);
  fVar2 = (float10)func_?(&plane,0,0);
  reflectionMat->m00 = (float)((float10)1 - fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,0,0);
  fVar2 = (float10)func_?(&plane,1,0);
  reflectionMat->m01 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,0,0);
  fVar2 = (float10)func_?(&plane,2,0);
  reflectionMat->m02 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,3,0);
  fVar2 = (float10)func_?(&plane,0,0);
  reflectionMat->m03 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,1,0);
  fVar2 = (float10)func_?(&plane,0,0);
  reflectionMat->m10 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,1,0);
  fVar2 = (float10)func_?(&plane,1,0);
  reflectionMat->m11 = (float)((float10)1 - fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,1,0);
  fVar2 = (float10)func_?(&plane,2,0);
  reflectionMat->m12 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,3,0);
  fVar2 = (float10)func_?(&plane,1,0);
  reflectionMat->m13 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,2,0);
  fVar2 = (float10)func_?(&plane,0,0);
  reflectionMat->m20 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,2,0);
  fVar2 = (float10)func_?(&plane,1,0);
  reflectionMat->m21 = (float)(fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,2,0);
  fVar2 = (float10)func_?(&plane,2,0);
  reflectionMat->m22 = (float)((float10)1 - fVar2 * (float10)((float)fVar1 * _UNK_?));
  fVar1 = (float10)func_?(&plane,3,0);
  fVar2 = (float10)func_?(&plane,2,0);
  fVar3 = (float)fVar1 * _UNK_?;
  reflectionMat->m30 = 0.0;
  reflectionMat->m31 = 0.0;
  reflectionMat->m32 = 0.0;
  reflectionMat->m33 = 1.0;
  reflectionMat->m23 = (float)(fVar2 * (float10)fVar3);
  return;
}


/* Vector4 CameraSpacePlane(Camera, Vector3, Vector3, Single) */

Vector4 * Assembly-CSharp-firstpass.dll::Water::Water_CameraSpacePlane
                    (Vector4 *__return_storage_ptr__,Water *this,Camera *cam,Vector3 pos,
                    Vector3 normal,float sideSign,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x40);
  uStack_1 = 0;
  uStack_2 = 0;
  d = (this->fields).m_ClipPlaneOffset;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_4,normal,d,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
            (&VStack_4,pos,*pVVar3,(MethodInfo *)0x0);
  if (cam != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
              ((Matrix4x4 *)&stack0xffffff64,cam,(MethodInfo *)0x0);
    pVVar3 = (Vector3 *)func_?();
    lhs = *pVVar3;
    puVar5 = (undefined8 *)func_?();
    uStack_1 = *puVar5;
    uStack_2 = *(undefined4 *)(puVar5 + 1);
    pVVar3 = (Vector3 *)func_?();
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       (&VStack_4,*pVVar3,sideSign,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot(lhs,*pVVar3,(MethodInfo *)0x0);
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = 0.0;
    __return_storage_ptr__->w = 0.0;
    func_?();
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector4 *)(*pcVar6)();
  return pVVar7;
}


/* Void CreateWaterObjects(Camera, Camera ByRef, Camera ByRef) */

void Assembly-CSharp-firstpass.dll::Water::Water_CreateWaterObjects
               (Water *this,Camera *currentCamera,Camera **reflectionCamera,
               Camera **refractionCamera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppCVar1 = reflectionCamera;
  this_01 = this;
  iVar2 = (this->fields).m_HardwareWaterSupport;
  iVar3 = (this->fields).m_WaterMode;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  *reflectionCamera = (Camera *)0x0;
  *refractionCamera = (Camera *)0x0;
  if (iVar3 < 1) {
    return;
  }
  pRVar4 = (this->fields).m_ReflectionTexture;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar4,(MethodInfo *)0x0);
  if ((bVar5 == 0) ||
     ((this_01->fields).m_OldReflectionTextureSize != (this_01->fields).m_TextureSize)) {
    pRVar4 = (this_01->fields).m_ReflectionTexture;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pRVar4,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pRVar4 = (this_01->fields).m_ReflectionTexture;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DestroyImmediate_1
                ((Object_1 *)pRVar4,(MethodInfo *)0x0);
    }
    width = (this_01->fields).m_TextureSize;
    pRVar4 = (RenderTexture *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_6
              (pRVar4,width,width,0x10,(MethodInfo *)0x0);
    (this_01->fields).m_ReflectionTexture = pRVar4;
    this = (Water *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                              ((Object_1 *)this_01,(MethodInfo *)0x0);
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral___WaterReflection,pOVar6,(MethodInfo *)0x0);
    if (pRVar4 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
                ((Object_1 *)pRVar4,pSVar7,(MethodInfo *)0x0);
      this_00 = (ScaleAnimationBase *)(this_01->fields).m_ReflectionTexture;
      if (this_00 != (ScaleAnimationBase *)0x0) {
        Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                  (this_00,1.4013e-45,(MethodInfo *)0x0);
        pRVar4 = (this_01->fields).m_ReflectionTexture;
        if (pRVar4 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)pRVar4,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          (this_01->fields).m_OldReflectionTextureSize = (this_01->fields).m_TextureSize;
          ppCVar1 = reflectionCamera;
          goto code_?;
        }
      }
    }
code_?:
    func_?(0);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0,0);
    func_?(uVar8);
code_?:
    uVar8 = func_?(0);
    func_?(uVar8);
  }
  else {
code_?:
    pCVar9 = currentCamera;
    pDVar10 = (this_01->fields).m_ReflectionCameras;
    if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)pDVar10,(String *)currentCamera,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar5 != 0) {
      pDVar10 = (this_01->fields).m_ReflectionCameras;
      if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)pCVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pPVar12 = (Pool *)0x0;
      if ((pPVar11 != (Pool *)0x0) &&
         ((Camera__Class *)pPVar11->klass == TypeInfo__UnityEngine__Camera)) {
        pPVar12 = pPVar11;
      }
      *ppCVar1 = (Camera *)pPVar12;
    }
    pCVar9 = *ppCVar1;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pCVar9,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      return;
    }
    args = (Object__Array *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_Water_Refl_Camera_id != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Water_Refl_Camera_id,(args->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_Water_Refl_Camera_id;
    this = (Water *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                              ((Object_1 *)this_01,(MethodInfo *)0x0);
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((pOVar6 != (Object *)0x0) &&
       (iVar2 = func_?(pOVar6,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar6;
    if ((StringLiteral__for_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__for_,(args->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral__for_;
    if (currentCamera == (Camera *)0x0) goto code_?;
    refractionCamera =
         (Camera **)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                   ((Object_1 *)currentCamera,(MethodInfo *)0x0);
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&refractionCamera);
    if ((pOVar6 != (Object *)0x0) && (iVar2 = func_?(pOVar6), iVar2 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar6;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar7 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
    components = (Type__Array *)func_?(TypeInfo__System__Type);
    handle = TypeRef__UnityEngine__Camera;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if (components == (Type__Array *)0x0) goto code_?;
    if ((pTVar13 != (Type *)0x0) &&
       (iVar2 = func_?(pTVar13,(components->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (components->max_length == 0) goto code_?;
    components->vector[0] = pTVar13;
    pTVar13 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)TypeRef__UnityEngine__Skybox,(MethodInfo *)0x0);
    if ((pTVar13 == (Type *)0x0) || (iVar2 = func_?(pTVar13), iVar2 != 0)) {
      if (components->max_length < 2) goto code_?;
      components->vector[1] = pTVar13;
      this_02 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_2
                (this_02,pSVar7,components,(MethodInfo *)0x0);
      if (this_02 != (GameObject *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            (this_02,
                             UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                            );
        ppCVar1 = reflectionCamera;
        *reflectionCamera = (Camera *)this_03;
        if (this_03 != (UseInteractorHandler *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_03,0,(MethodInfo *)0x0);
          if (*ppCVar1 != (Camera *)0x0) {
            reflectionCamera =
                 (Camera **)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)*ppCVar1,(MethodInfo *)0x0);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_01,(MethodInfo *)0x0);
            if ((pTVar14 != (Transform *)0x0) &&
               (pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffec,pTVar14,(MethodInfo *)0x0),
               reflectionCamera != (Camera **)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        ((Transform *)reflectionCamera,*pVVar15,(MethodInfo *)0x0);
              if (*ppCVar1 != (Camera *)0x0) {
                reflectionCamera =
                     (Camera **)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)*ppCVar1,(MethodInfo *)0x0);
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_01,(MethodInfo *)0x0);
                if ((pTVar14 != (Transform *)0x0) &&
                   (pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_rotation
                                        ((Quaternion *)&stack0xffffffe8,pTVar14,(MethodInfo *)0x0),
                   reflectionCamera != (Camera **)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            ((Transform *)reflectionCamera,*pQVar16,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                            ((Object_1 *)this_02,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
                  pDVar10 = (this_01->fields).m_ReflectionCameras;
                  if (pDVar10 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                    Dictionary_2_System_String_Theme__set_Item
                              ((Dictionary_2_System_String_Theme_ *)pDVar10,(String *)currentCamera,
                               (Theme *)*ppCVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  uVar8 = func_?(0);
  func_?(uVar8);
code_?:
  uVar8 = func_?(0);
  func_?(uVar8);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Water+WaterMode FindHardwareWaterSupport() */

Water_WaterMode__Enum
Assembly-CSharp-firstpass.dll::Water::Water_FindHardwareWaterSupport(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar1 = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return Water_WaterMode__Enum_Simple;
  }
  pRVar1 = (this->fields).meshRenderer;
  if (pRVar1 != (Renderer *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                        (pRVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return Water_WaterMode__Enum_Simple;
    }
    if (this_00 != (Material *)0x0) {
      a = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTag
                    (this_00,StringLiteral_WATERMODE,0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_Reflective,(MethodInfo *)0x0);
      return (uint)(bVar2 != 0);
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  WVar4 = (*pcVar3)();
  return WVar4;
}


/* Water+WaterMode GetWaterMode() */

Water_WaterMode__Enum
Assembly-CSharp-firstpass.dll::Water::Water_GetWaterMode(Water *this,MethodInfo *method)

{
  WVar1 = (this->fields).m_HardwareWaterSupport;
  WVar2 = (this->fields).m_WaterMode;
  if ((int)WVar2 <= (int)WVar1) {
    WVar1 = WVar2;
  }
  return WVar1;
}


/* Boolean IsNanCheck(Vector3) */

bool Assembly-CSharp-firstpass.dll::Water::Water_IsNanCheck
               (Water *this,Vector3 v,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::Single::Single_IsNaN(v.x,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::Single::Single_IsNaN(v.y,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::Single::Single_IsNaN(v.z,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::Water::Water_OnDisable(Water *this,MethodInfo *method)

{
  uStack_1._0_2_ = 0xffff;
  uStack_1._2_1_ = 0xff;
  uStack_1._3_1_ = 0xff;
  _Stack_c.dummy = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  _Stack_14.dummy = &stack0xffffffa8;
  _Var4.dummy = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    _Var4 = _Stack_14;
  }
  _Stack_14 = _Var4;
  auStack_3._16_4_ = (Object *)0x0;
  KStack_4.key = 0;
  KStack_4.value = 0;
  auStack_3._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_3._4_4_ = (MethodInfo *)0x0;
  auStack_3._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_3._12_4_ = 0;
  func_?();
  pRVar5 = (this->fields).m_ReflectionTexture;
  pcStack_6 = &stack0xffffffa8;
  _Stack_14.dummy = &stack0xffffffa8;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (pcStack_6 = &stack0xffffffa8, _Stack_14.dummy = &stack0xffffffa8,
     (TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    pcStack_6 = &stack0xffffffa8;
    _Stack_14.dummy = &stack0xffffffa8;
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar5,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    pRVar5 = (this->fields).m_ReflectionTexture;
    if (pRVar5 == (RenderTexture *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
              (pRVar5,(MethodInfo *)0x0);
    (this->fields).m_ReflectionTexture = (RenderTexture *)0x0;
  }
  this_00 = (this->fields).m_ReflectionCameras;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb4,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_3._0_4_ = pDVar8->dictionary;
    auStack_3._4_4_ = pDVar8->next;
    auStack_3._8_4_ = pDVar8->stamp;
    auStack_3._12_4_ = (pDVar8->current).key;
    auStack_3._16_4_ = (pDVar8->current).value;
    uStack_1._0_2_ = 0;
    uStack_1._2_1_ = 0;
    uStack_1._3_1_ = 0;
    while (cVar9 = func_?(), cVar9 != '\0') {
      KStack_4 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_3,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      auStack_3._0_4_ = &KStack_4;
      auStack_3._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
      ;
      pCVar10 = (Component_1 *)func_?();
      if (pCVar10 == (Component_1 *)0x0) goto code_?;
      this_02 = (Component_1 *)0x0;
      if ((Camera__Class *)pCVar10->klass == TypeInfo__UnityEngine__Camera) {
        this_02 = pCVar10;
      }
      if (this_02 == (Component_1 *)0x0) {
        func_?();
        goto code_?;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    pcVar11 = pcStack_6;
    pcVar11[0] = 'p';
    pcVar11[1] = '\0';
    pcVar11[2] = '\0';
    pcVar11[3] = '\0';
    uStack_1._0_2_ = 0xffff;
    uStack_1._2_1_ = 0xff;
    uStack_1._3_1_ = 0xff;
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).m_ReflectionCameras;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
      *unaff_FS_OFFSET = uStack_2;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnWillRenderObject() */

void Assembly-CSharp-firstpass.dll::Water::Water_OnWillRenderObject(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  dest = (Camera *)0x0;
  pCVar1 = (Camera *)0x0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  fVar5 = 0.0;
  func_?(&puStack_6,0,0x40);
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  pRVar8 = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar8,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  pRVar8 = (this->fields).meshRenderer;
  if (pRVar8 == (Renderer *)0x0) goto code_?;
  pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                     (pRVar8,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar9,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  pRVar8 = (this->fields).meshRenderer;
  if (pRVar8 == (Renderer *)0x0) goto code_?;
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                    (pRVar8,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_current((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pCVar10,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__Water->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Water->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__Water->static_fields->s_InsideWater != 0) {
    return;
  }
  if ((((uint)(TypeInfo__Water->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Water->_1).cctor_started == 0)) {
    func_?();
  }
  bVar11 = cRam_? == '\0';
  TypeInfo__Water->static_fields->s_InsideWater = 1;
  if (bVar11) {
    func_?();
    cRam_? = '\x01';
  }
  pRVar8 = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar8,(MethodInfo *)0x0);
  if (bVar7 == 0) {
code_?:
    fVar12 = 0.0;
  }
  else {
    pRVar8 = (this->fields).meshRenderer;
    if (pRVar8 == (Renderer *)0x0) goto code_?;
    pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                       (pRVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pMVar9,(MethodInfo *)0x0);
    if (bVar7 == 0) goto code_?;
    if (pMVar9 == (Material *)0x0) goto code_?;
    a_01 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetTag
                     (pMVar9,StringLiteral_WATERMODE,0,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      (a_01,StringLiteral_Reflective,(MethodInfo *)0x0);
    fVar12 = (float)(uint)(bVar7 != 0);
  }
  fVar13 = (float)(this->fields).m_WaterMode;
  (this->fields).m_HardwareWaterSupport = (int32_t)fVar12;
  if ((int)fVar12 < (int)fVar13) {
    fVar13 = fVar12;
  }
  Water_CreateWaterObjects
            (this,pCVar10,(Camera **)&stack0xfffffff8,(Camera **)&stack0xfffffff0,(MethodInfo *)0x0)
  ;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) {
code_?:
    func_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffac,pTVar14,(MethodInfo *)0x0);
  uVar17 = pVVar16->x;
  uVar18 = pVVar16->y;
  fVar12 = pVVar16->z;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                      ((Vector3 *)&stack0xffffffac,pTVar14,(MethodInfo *)0x0);
  fVar19 = pVVar16->x;
  fVar20 = pVVar16->y;
  fVar21 = pVVar16->z;
  fVar22 = fVar19;
  fVar23 = fVar20;
  fVar24 = fVar21;
  value = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
          QualitySettings_get_pixelLightCount((MethodInfo *)0x0);
  if ((this->fields).m_DisablePixelLights != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
              (0,(MethodInfo *)0x0);
  }
  Water_UpdateCameraModes(this,pCVar10,dest,(MethodInfo *)0x0);
  Water_UpdateCameraModes(this,pCVar10,pCVar1,(MethodInfo *)0x0);
  if (0 < (int)fVar13) {
    fStack_25 = fVar19;
    fStack_26 = fVar20;
    fStack_27 = fVar21;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      fStack_25 = fVar19;
      fStack_26 = fVar20;
      fStack_27 = fVar21;
    }
    lhs.y = fVar23;
    lhs.x = fVar22;
    lhs.z = fVar24;
    rhs_00.y = (float)uVar18;
    rhs_00.x = (float)uVar17;
    rhs_00.z = fVar12;
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                       (lhs,rhs_00,(MethodInfo *)0x0);
    puStack_28 = &stack0xffffff78;
    fStack_29 = (float)((uint)fVar13 ^ _UNK_?) - (this->fields).m_ClipPlaneOffset;
    fStack_30 = 0.0;
    func_?();
    if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_zero
                        ((Matrix4x4 *)&stack0xfffffeec,(MethodInfo *)0x0);
    puStack_6 = (undefined *)pMVar31->m00;
    puStack_28 = (undefined1 *)pMVar31->m10;
    fStack_25 = pMVar31->m20;
    fStack_26 = pMVar31->m30;
    fStack_27 = pMVar31->m01;
    fStack_29 = pMVar31->m11;
    fStack_30 = pMVar31->m21;
    puStack_32 = (undefined *)pMVar31->m31;
    fVar13 = pMVar31->m02;
    fVar19 = pMVar31->m12;
    fVar20 = pMVar31->m22;
    fVar21 = pMVar31->m32;
    fVar33 = pMVar31->m03;
    fVar34 = pMVar31->m13;
    fVar35 = pMVar31->m23;
    fVar36 = pMVar31->m33;
    if ((((uint)(TypeInfo__Water->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Water->_1).cctor_started == 0)) {
      func_?();
    }
    plane.y = (float)uVar3;
    plane.x = (float)uVar2;
    plane.z = (float)uVar4;
    plane.w = fVar5;
    Water_CalculateReflectionMatrix((Matrix4x4 *)&puStack_6,plane,(MethodInfo *)0x0);
    if ((pCVar10 == (Camera *)0x0) ||
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pCVar10,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0)
       ) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffd8,pTVar14,(MethodInfo *)0x0);
    puVar37 = (undefined8 *)func_?();
    uVar38 = *puVar37;
    pMVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
                        ((Matrix4x4 *)&stack0xfffffeec,pCVar10,(MethodInfo *)0x0);
    rhs.m10 = (float)puStack_28;
    rhs.m00 = (float)puStack_6;
    rhs.m20 = fStack_25;
    rhs.m30 = fStack_26;
    rhs.m01 = fStack_27;
    rhs.m11 = fStack_29;
    rhs.m21 = fStack_30;
    rhs.m31 = (float)puStack_32;
    rhs.m02 = fVar13;
    rhs.m12 = fVar19;
    rhs.m22 = fVar20;
    rhs.m32 = fVar21;
    rhs.m03 = fVar33;
    rhs.m13 = fVar34;
    rhs.m23 = fVar35;
    rhs.m33 = fVar36;
    pMVar31 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply
                        ((Matrix4x4 *)&stack0xfffffeec,*pMVar31,rhs,(MethodInfo *)0x0);
    if (dest == (Camera *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_worldToCameraMatrix
              (dest,*pMVar31,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    func_?();
    pCVar1 = (Camera *)(this->fields).m_ClipPlaneOffset;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.y = fVar23;
    a.x = fVar22;
    a.z = fVar24;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xfffffee0,a,(float)pCVar1,(MethodInfo *)0x0);
    a_00.y = (float)uVar18;
    a_00.x = (float)uVar17;
    a_00.z = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
              ((Vector3 *)&stack0xfffffed4,a_00,*pVVar16,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_worldToCameraMatrix
              ((Matrix4x4 *)&stack0xfffffe70,dest,(MethodInfo *)0x0);
    puVar37 = (undefined8 *)func_?();
    fVar12 = *(float *)(puVar37 + 1);
    uVar2 = (undefined4)*puVar37;
    uVar3 = (undefined4)((ulonglong)*puVar37 >> 0x20);
    func_?();
    uStack_39 = (undefined4)uVar38;
    pVVar16 = (Vector3 *)func_?();
    value = (int32_t)pVVar16->x;
    fVar5 = pVVar16->y;
    pCVar1 = (Camera *)pVVar16->z;
    pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffff2c,*pVVar16,1.0,(MethodInfo *)0x0);
    method_00 = pVVar16->y;
    lhs_00.y = (float)uVar3;
    lhs_00.x = (float)uVar2;
    lhs_00.z = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
              (lhs_00,*pVVar16,(MethodInfo *)method_00);
    fVar12 = 0.0;
    func_?();
    clipPlane.w = fVar12;
    clipPlane.x = 0.0;
    clipPlane.y = 0.0;
    clipPlane.z = 0.0;
    pMVar31 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_CalculateObliqueMatrix
                        ((Matrix4x4 *)&stack0xfffffe70,pCVar1,clipPlane,(MethodInfo *)0x0);
    fVar12 = pMVar31->m00;
    fVar19 = pMVar31->m12;
    fVar13 = pMVar31->m32;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_projectionMatrix
              (dest,*pMVar31,(MethodInfo *)0x0);
    pCVar10 = (Camera *)&UNK_?;
    uVar40 = func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar10,uVar40 & 0xffffffef,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (pCVar10,(this->fields).m_ReflectionTexture,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(1,(MethodInfo *)0x0);
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar10,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    value_02.y = (float)&UNK_?;
    value_02.x = (float)uStack_39;
    value_02.z = fVar19;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar14,value_02,(MethodInfo *)0x0);
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_eulerAngles
              ((Vector3 *)&stack0xffffff2c,pTVar14,(MethodInfo *)0x0);
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar10,(MethodInfo *)0x0);
    fVar21 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    puStack_6 = (undefined *)0x0;
    func_?();
    if (pTVar14 == (Transform *)0x0) goto code_?;
    value_00.y = fVar20;
    value_00.x = fVar19;
    value_00.z = fVar21;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_eulerAngles
              (pTVar14,value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(pCVar10,(MethodInfo *)0x0);
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pCVar10,(MethodInfo *)0x0);
    if (pTVar14 == (Transform *)0x0) goto code_?;
    value_01.y = fVar12;
    value_01.x = (float)dest;
    value_01.z = fVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar14,value_01,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_set_invertCulling(0,(MethodInfo *)0x0);
    pRVar8 = (this->fields).meshRenderer;
    if ((pRVar8 == (Renderer *)0x0) ||
       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                           (pRVar8,(MethodInfo *)0x0), pMVar9 == (Material *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTexture
              (pMVar9,StringLiteral__ReflectionTex,(Texture *)(this->fields).m_ReflectionTexture,
               (MethodInfo *)0x0);
  }
  if ((this->fields).m_DisablePixelLights != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_set_pixelLightCount
              (value,(MethodInfo *)0x0);
  }
  if (fVar13 == 0.0) {
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
              (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
              (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  }
  else {
    if (fVar13 != 1.4013e-45) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
              (StringLiteral_WATER_SIMPLE,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_EnableKeyword
              (StringLiteral_WATER_REFLECTIVE,(MethodInfo *)0x0);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_DisableKeyword
            (StringLiteral_WATER_REFRACTIVE,(MethodInfo *)0x0);
code_?:
  if ((((uint)(TypeInfo__Water->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Water->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__Water->static_fields->s_InsideWater = 0;
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::Water::Water_Update(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  fVar9 = 0.0;
  pRVar10 = (this->fields).meshRenderer;
  uVar11 = 0;
  uVar12 = 0;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pRVar10,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    pRVar10 = (this->fields).meshRenderer;
    if (pRVar10 != (Renderer *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                          (pRVar10,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)this_00,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        return;
      }
      if (this_00 != (Material *)0x0) {
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                           ((Vector4 *)&stack0xffffffbc,this_00,StringLiteral_WaveSpeed,
                            (MethodInfo *)0x0);
        fVar15 = pVVar14->x;
        fVar16 = pVVar14->y;
        fVar17 = pVVar14->z;
        fVar18 = pVVar14->w;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFloat
                  (this_00,StringLiteral__WaveScale,(MethodInfo *)0x0);
        func_?();
        fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                           ((MethodInfo *)0x0);
        dVar20 = (double)(fVar19 / (float)_UNK_?);
        mscorlib.dll::System::Math::Math_IEEERemainder
                  ((double)(fVar1 * fVar15) * dVar20,_UNK_?,(MethodInfo *)0x0);
        mscorlib.dll::System::Math::Math_IEEERemainder
                  ((double)(fVar2 * fVar16) * dVar20,_UNK_?,(MethodInfo *)0x0);
        mscorlib.dll::System::Math::Math_IEEERemainder
                  ((double)(fVar3 * fVar17) * dVar20,_UNK_?,(MethodInfo *)0x0);
        mscorlib.dll::System::Math::Math_IEEERemainder
                  ((double)(fVar4 * fVar18) * dVar20,_UNK_?,(MethodInfo *)0x0);
        func_?();
        value.y = (float)uVar7;
        value.x = (float)uVar6;
        value.z = (float)uVar8;
        value.w = fVar9;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_00,StringLiteral__WaveOffset,value,(MethodInfo *)0x0);
        value_00.y = fVar2;
        value_00.x = fVar1;
        value_00.z = fVar3;
        value_00.w = fVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_00,StringLiteral__WaveScale4,value_00,(MethodInfo *)0x0);
        pRVar10 = (this->fields).meshRenderer;
        if (pRVar10 != (Renderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                    ((Bounds *)&stack0xffffffb4,pRVar10,(MethodInfo *)0x0);
          func_?();
          func_?();
          func_?();
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&stack0xffffffbc,(MethodInfo *)0x0);
          fVar9 = pQVar21->x;
          fVar1 = pQVar21->y;
          fVar2 = pQVar21->z;
          fVar3 = pQVar21->w;
          uVar6 = uVar11;
          uVar7 = uVar12;
          fVar4 = fVar5;
          if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
            func_?();
          }
          q.y = fVar1;
          q.x = fVar9;
          q.z = fVar2;
          q.w = fVar3;
          s.y = (float)uVar12;
          s.x = (float)uVar11;
          s.z = fVar5;
          pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                             ((Matrix4x4 *)&stack0xffffff20,(Vector3)ZEXT812(0),q,s,
                              (MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral__WaveMatrix,*pMVar22,(MethodInfo *)0x0);
          func_?();
          fVar9 = 0.0;
          uVar23 = 0;
          func_?();
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                             ((Quaternion *)&stack0xffffffbc,(MethodInfo *)0x0);
          pos.z = fVar9;
          pos.x = (float)(int)uVar23;
          pos.y = (float)(int)((ulonglong)uVar23 >> 0x20);
          s_00.y = (float)uVar7;
          s_00.x = (float)uVar6;
          s_00.z = fVar4;
          pMVar22 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                             ((Matrix4x4 *)&stack0xffffff20,pos,*pQVar21,s_00,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral__WaveMatrix2,*pMVar22,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?();
    pcVar24 = (code *)swi(3);
    (*pcVar24)();
    return;
  }
  return;
}


/* Void UpdateCameraModes(Camera, Camera) */

void Assembly-CSharp-firstpass.dll::Water::Water_UpdateCameraModes
               (Water *this,Camera *src,Camera *dest,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)dest,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if ((src == (Camera *)0x0) ||
     (CVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                        (src,(MethodInfo *)0x0), dest == (Camera *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
            (dest,CVar2,(MethodInfo *)0x0);
  pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_backgroundColor
                     ((Color *)&stack0xffffffe8,src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
            (dest,*pCVar3,(MethodInfo *)0x0);
  CVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                    (src,(MethodInfo *)0x0);
  handle = TypeRef__UnityEngine__Skybox;
  if (CVar2 == CameraClearFlags__Enum_Skybox) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?();
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    pSVar5 = (Skybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent
                       ((Component_1 *)src,pTVar4,(MethodInfo *)0x0);
    this_00 = (Skybox *)0x0;
    if ((pSVar5 != (Skybox *)0x0) && (pSVar5->klass == TypeInfo__UnityEngine__Skybox)) {
      this_00 = pSVar5;
    }
    pTVar4 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__UnityEngine__Skybox,(MethodInfo *)0x0);
    pSVar6 = (Skybox *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent
                       ((Component_1 *)dest,pTVar4,(MethodInfo *)0x0);
    pSVar5 = (Skybox *)0x0;
    if ((pSVar6 != (Skybox *)0x0) && (pSVar6->klass == TypeInfo__UnityEngine__Skybox)) {
      pSVar5 = pSVar6;
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar6 = this_00;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (this_00 == (Skybox *)0x0) goto code_?;
      pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                         (this_00,(MethodInfo *)0x0);
      auVar8._4_4_ = pSVar6;
      auVar8._0_4_ = pMVar7;
      auVar8._8_4_ = 0;
      auVar8 = auVar8 << 0x20;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
        pMVar7 = auVar8._4_4_;
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                        ((Object_1 *)pMVar7,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if (pSVar5 != (Skybox *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pSVar5,1,(MethodInfo *)0x0);
          pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                             (this_00,(MethodInfo *)0x0);
          dest = (Camera *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                    (pSVar5,pMVar7,(MethodInfo *)0x0);
          goto code_?;
        }
        goto code_?;
      }
    }
    if (pSVar5 == (Skybox *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    dest = (Camera *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pSVar5,0,(MethodInfo *)0x0);
  }
code_?:
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_farClipPlane
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_farClipPlane
            (dest,fVar10,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_nearClipPlane
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_nearClipPlane
            (dest,fVar10,(MethodInfo *)0x0);
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
            (dest,bVar1,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
            (dest,fVar10,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_aspect(src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect(dest,fVar10,(MethodInfo *)0x0);
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographicSize
                    (src,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
            (dest,fVar10,(MethodInfo *)0x0);
  return;
}


/* Water() */

void Assembly-CSharp-firstpass.dll::Water::Water__ctor(Water *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).m_DisablePixelLights = 1;
  (this->fields).m_TextureSize = 0x100;
  (this->fields).m_ClipPlaneOffset = 0.07;
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0xffffffff,(MethodInfo *)0x0);
  (this->fields).m_ReflectLayers.m_Mask = (int32_t)pOVar1;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).m_ReflectionCameras = this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

