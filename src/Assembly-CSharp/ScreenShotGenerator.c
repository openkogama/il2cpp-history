
/* ScreenShotGenerator CreateInstance() */

ScreenShotGenerator *
Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_CreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this,StringLiteral_ScreenShotGenerator,(MethodInfo *)0x0);
  if (this != (GameObject *)0x0) {
    pSVar1 = (ScreenShotGenerator *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (this,
                        ScreenShotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ScreenShotGenerator>__
                       );
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (ScreenShotGenerator *)(*pcVar2)();
  return pSVar1;
}


/* Void Generate(GameObject, Vector3, Vector3, Action`1[Byte[]], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Generate
               (GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_Byte_ *generatedScreenShotPNGCallback,bool cloneObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__ScreenShotGenerator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ScreenShotGenerator->_1).cctor_started == 0)) {
    func_?(TypeInfo__ScreenShotGenerator);
  }
  this = (ScaleAnimationBase__Class *)ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
  if (cloneObject != 0) {
    func_?(&uStack_1,0x447a0000,0x447a0000,0x447a0000,0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       ((Quaternion *)&stack0xffffffd8,0.0,180.0,0.0,(MethodInfo *)0x0);
    fVar4 = fStack_2;
    uStack_5 = uStack_1;
    fVar6 = pQVar3->x;
    fVar7 = pQVar3->y;
    fVar8 = pQVar3->z;
    fVar9 = pQVar3->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_5;
    position.y = (float)uStack_5._4_4_;
    rotation.y = fVar7;
    rotation.x = fVar6;
    rotation.z = fVar8;
    rotation.w = fVar9;
    obj = (GameObject *)
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                    ((SentryGunBeam *)obj,position,rotation,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                    );
    if ((SentryGunBeam *)obj == (SentryGunBeam *)0x0) goto code_?;
    pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (obj,
                        UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                       );
    uStack_5 = CONCAT44(pUVar10,(undefined4)uStack_5);
    uVar11 = 0;
    if (pUVar10 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    ppUVar12 = pUVar10->vector;
    for (; (int)uVar11 < (int)pUVar10->max_length; uVar11 = uVar11 + 1) {
      if (pUVar10->max_length <= uVar11) goto code_?;
      if (*ppUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)*ppUVar12,0,(MethodInfo *)0x0);
      ppUVar12 = ppUVar12 + 1;
      pUVar10 = uStack_5._4_4_;
    }
  }
  if (this != (ScaleAnimationBase__Class *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (*(bool *)((int)&(this->_0).interopData + 1) != 0) {
      arg1 = (this->_0).klass;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar13 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Already_generating_a_screenshot_,(Object *)arg1,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar13,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    method_00 = (MethodInfo *)StringLiteral_Start_generate_screenshot_of_;
    pSVar13 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Start_generate_screenshot_of_,(Object *)obj,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar13,(MethodInfo *)0x0);
    bVar14 = cRam_? == '\0';
    *(bool *)&(this->_0).interopData = cloneObject;
    (this->_0).element_class = (Il2CppClass *)cameraOffset.x;
    (this->_0).castClass = (Il2CppClass *)cameraOffset.y;
    (this->_0).declaringType = (Il2CppClass *)cameraOffset.z;
    (this->_0).parent = (Il2CppClass *)lookAtOffset.x;
    (this->_0).generic_class = (Il2CppGenericClass *)lookAtOffset.y;
    (this->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)lookAtOffset.z;
    (this->_0).klass = (Il2CppClass *)obj;
    (this->_0).this_arg.data.typeHandle = (Il2CppMetadataTypeHandle)generatedScreenShotPNGCallback;
    if (bVar14) {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = obj;
      this_00[1].klass = this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar15 = func_?(0,0);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* IEnumerator GenerateCoroutine(GameObject) */

IEnumerator *
Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_GenerateCoroutine
          (ScreenShotGenerator *this,GameObject *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ScreenShotGenerator___GenerateCoroutine_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].klass = (ScaleAnimationBase__Class *)this;
    (this_00->fields)._._._._.m_CachedPtr = obj;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void GenerateTexture() */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_GenerateTexture
               (ScreenShotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Generate_screen_shot,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
            ((this->fields).genRenderTexture,(MethodInfo *)0x0);
  pTVar1 = (this->fields).genTexture;
  uVar2 = 0;
  uVar3 = 0x44000000;
  func_?(&stack0xffffffec,0,0,0x44000000);
  if (pTVar1 != (Texture2D *)0x0) {
    source.m_YMin = (float)uVar2;
    source.m_XMin = (float)uVar3;
    source.m_Width = 0.0;
    source.m_Height = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
              (pTVar1,source,0,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).genTexture;
    if (pTVar1 != (Texture2D *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (pTVar1,(MethodInfo *)0x0);
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               (this->fields).generatedScreenShotPNGCallback;
      if (pAVar4 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *
                    )0x0) {
        obj = (Dictionary_2_System_String_System_Object_ *)
              UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
              ImageConversion_EncodeToPNG((this->fields).genTexture,(MethodInfo *)0x0);
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (pAVar4,obj,MethodInfo__System__Action<System::Byte_[]>__Invoke_System__Byte____);
      }
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               (this->fields).generatedScreenShotTexCallback;
      if (pAVar4 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *
                    )0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (pAVar4,(Dictionary_2_System_String_System_Object_ *)(this->fields).genTexture,
                   MethodInfo__System__Action<UnityEngine::Texture2D>__Invoke_UnityEngine__Texture2D_
                  );
      }
      this_00 = (this->fields).shotCamera;
      if (this_00 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                  (this_00,(RenderTexture *)0x0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                  ((RenderTexture *)0x0,(MethodInfo *)0x0);
        if ((this->fields).clonedObject != 0) {
          pGVar5 = (this->fields).targetObject;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar5,(MethodInfo *)0x0);
        }
        if ((this->fields).generatedScreenShotTexCallback == (Action_1_UnityEngine_Texture2D_ *)0x0)
        {
          pTVar1 = (this->fields).genTexture;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
        }
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar5,(MethodInfo *)0x0);
        this_01 = (this->fields).genRenderTexture;
        if (this_01 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_Release
                    (this_01,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)(this->fields).genRenderTexture,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Generate(GameObject, Vector3, Vector3, Action`1[UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Generate_1
               (GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_UnityEngine_Texture2D_ *generatedScreenShotTexCallback,bool cloneObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if ((((uint)(TypeInfo__ScreenShotGenerator->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ScreenShotGenerator->_1).cctor_started == 0)) {
    func_?(TypeInfo__ScreenShotGenerator);
  }
  this = (ScaleAnimationBase__Class *)ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
  if (cloneObject != 0) {
    func_?(&uStack_1,0x447a0000,0x447a0000,0x447a0000,0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                       ((Quaternion *)&stack0xffffffd8,0.0,180.0,0.0,(MethodInfo *)0x0);
    fVar4 = fStack_2;
    uStack_5 = uStack_1;
    fVar6 = pQVar3->x;
    fVar7 = pQVar3->y;
    fVar8 = pQVar3->z;
    fVar9 = pQVar3->w;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_5;
    position.y = (float)uStack_5._4_4_;
    rotation.y = fVar7;
    rotation.x = fVar6;
    rotation.z = fVar8;
    rotation.w = fVar9;
    obj = (GameObject *)
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_161
                    ((SentryGunBeam *)obj,position,rotation,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                    );
    if ((SentryGunBeam *)obj == (SentryGunBeam *)0x0) goto code_?;
    pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (obj,
                        UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                       );
    uStack_5 = CONCAT44(pUVar10,(undefined4)uStack_5);
    uVar11 = 0;
    if (pUVar10 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    ppUVar12 = pUVar10->vector;
    for (; (int)uVar11 < (int)pUVar10->max_length; uVar11 = uVar11 + 1) {
      if (pUVar10->max_length <= uVar11) goto code_?;
      if (*ppUVar12 == (UseInteratorVisualization *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)*ppUVar12,0,(MethodInfo *)0x0);
      ppUVar12 = ppUVar12 + 1;
      pUVar10 = uStack_5._4_4_;
    }
  }
  if (this != (ScaleAnimationBase__Class *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (*(bool *)((int)&(this->_0).interopData + 1) != 0) {
      arg1 = (this->_0).klass;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar13 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Already_generating_a_screenshot_,(Object *)arg1,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar13,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    method_00 = (MethodInfo *)StringLiteral_Start_generate_screenshot_of_;
    pSVar13 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Start_generate_screenshot_of_,(Object *)obj,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar13,(MethodInfo *)0x0);
    bVar14 = cRam_? == '\0';
    *(bool *)&(this->_0).interopData = cloneObject;
    (this->_0).element_class = (Il2CppClass *)cameraOffset.x;
    (this->_0).castClass = (Il2CppClass *)cameraOffset.y;
    (this->_0).declaringType = (Il2CppClass *)cameraOffset.z;
    (this->_0).parent = (Il2CppClass *)lookAtOffset.x;
    (this->_0).generic_class = (Il2CppGenericClass *)lookAtOffset.y;
    (this->_0).typeMetadataHandle = (Il2CppMetadataTypeHandle)lookAtOffset.z;
    (this->_0).klass = (Il2CppClass *)obj;
    *(Action_1_UnityEngine_Texture2D_ **)&(this->_0).this_arg.attrs = generatedScreenShotTexCallback
    ;
    if (bVar14) {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = obj;
      this_00[1].klass = this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar15 = func_?(0,0);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitCamera(Int32, Int32) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_InitCamera
               (ScreenShotGenerator *this,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).genTexture;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
              (pTVar1,width,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    (this->fields).genTexture = pTVar1;
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pCVar4 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar3,
                        UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                       );
    (this->fields).shotCamera = pCVar4;
    if (pCVar4 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (pCVar4,CameraClearFlags__Enum_Skybox,(MethodInfo *)0x0);
      pCVar4 = (this->fields).shotCamera;
      puVar5 = &stack0xffffffc8;
      fVar6 = 0.0;
      uVar7 = 0;
      puVar8 = &UNK_?;
      func_?();
      if (pCVar4 != (Camera *)0x0) {
        value.g = (float)puVar5;
        value.r = (float)puVar8;
        value.b = (float)uVar7;
        value.a = fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                  (pCVar4,value,(MethodInfo *)0x0);
        pCVar4 = (this->fields).shotCamera;
        if (pCVar4 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                    (pCVar4,35.0,(MethodInfo *)0x0);
          pCVar4 = (this->fields).shotCamera;
          if (pCVar4 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depth
                      (pCVar4,-2.0,(MethodInfo *)0x0);
            pCVar4 = (this->fields).shotCamera;
            if (pCVar4 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                        (pCVar4,1.0,(MethodInfo *)0x0);
              pCVar4 = (this->fields).shotCamera;
              iVar9 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_Preview,(MethodInfo *)0x0);
              if (pCVar4 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                          (pCVar4,1 << ((byte)iVar9 & 0x1f),(MethodInfo *)0x0);
                this_00 = (RenderTexture *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_6
                          (this_00,width,height,0x18,(MethodInfo *)0x0);
                pCVar4 = (this->fields).shotCamera;
                (this->fields).genRenderTexture = this_00;
                if (pCVar4 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar4,this_00,(MethodInfo *)0x0);
                  puVar10 = (undefined8 *)func_?();
                  VStack_11._4_8_ = *puVar10;
                  fVar6 = *(float *)(puVar10 + 1);
                  pGVar3 = (this->fields).targetObject;
                  if (pGVar3 != (GameObject *)0x0) {
                    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                    VVar13.z = fVar6;
                    VVar13.x = VStack_11.y;
                    VVar13.y = VStack_11.z;
                    pVVar14 = ScreenShotGenerator_Translate
                                        (&VStack_11,this,VVar13,pTVar12,(this->fields).cameraOffset,
                                         (MethodInfo *)0x0);
                    VVar13 = *pVVar14;
                    puVar10 = (undefined8 *)func_?();
                    VStack_11._4_8_ = *puVar10;
                    fVar6 = *(float *)(puVar10 + 1);
                    pGVar3 = (this->fields).targetObject;
                    if (pGVar3 != (GameObject *)0x0) {
                      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                      pos.z = fVar6;
                      pos.x = VStack_11.y;
                      pos.y = VStack_11.z;
                      pVVar14 = ScreenShotGenerator_Translate
                                          ((Vector3 *)&stack0xffffffd8,this,pos,pTVar12,
                                           (this->fields).lookAtOffset,(MethodInfo *)0x0);
                      VStack_11.y = pVVar14->x;
                      VStack_11.z = pVVar14->y;
                      fVar6 = pVVar14->z;
                      pCVar4 = (this->fields).shotCamera;
                      if (pCVar4 != (Camera *)0x0) {
                        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_transform((Component_1 *)pCVar4,(MethodInfo *)0x0);
                        if (pTVar12 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                    (pTVar12,VVar13,(MethodInfo *)0x0);
                          pCVar4 = (this->fields).shotCamera;
                          if (pCVar4 != (Camera *)0x0) {
                            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_1_get_transform
                                               ((Component_1 *)pCVar4,(MethodInfo *)0x0);
                            if (pTVar12 != (Transform *)0x0) {
                              worldPosition.z = fVar6;
                              worldPosition.x = VStack_11.y;
                              worldPosition.y = VStack_11.z;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                                        (pTVar12,worldPosition,(MethodInfo *)0x0);
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
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void StartGenerate(GameObject, Vector3, Vector3, Action`1[Byte[]], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_StartGenerate
               (ScreenShotGenerator *this,GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_Byte_ *generatedScreenShotPNGCallback,bool clonedObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).generating == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Start_generate_screenshot_of_,(Object *)obj,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    (this->fields).clonedObject = clonedObject;
    (this->fields).cameraOffset.x = cameraOffset.x;
    (this->fields).cameraOffset.y = cameraOffset.y;
    (this->fields).cameraOffset.z = cameraOffset.z;
    (this->fields).lookAtOffset.x = lookAtOffset.x;
    (this->fields).lookAtOffset.y = lookAtOffset.y;
    (this->fields).lookAtOffset.z = lookAtOffset.z;
    (this->fields).targetObject = obj;
    (this->fields).generatedScreenShotPNGCallback = generatedScreenShotPNGCallback;
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
  arg1 = (this->fields).targetObject;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Already_generating_a_screenshot_,(Object *)arg1,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void StartGenerate(GameObject, Vector3, Vector3, Action`1[UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_StartGenerate_1
               (ScreenShotGenerator *this,GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_UnityEngine_Texture2D_ *generatedScreenShotTexCallback,bool clonedObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).generating == 0) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_Start_generate_screenshot_of_,(Object *)obj,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    (this->fields).clonedObject = clonedObject;
    (this->fields).cameraOffset.x = cameraOffset.x;
    (this->fields).cameraOffset.y = cameraOffset.y;
    (this->fields).cameraOffset.z = cameraOffset.z;
    (this->fields).lookAtOffset.x = lookAtOffset.x;
    (this->fields).lookAtOffset.y = lookAtOffset.y;
    (this->fields).lookAtOffset.z = lookAtOffset.z;
    (this->fields).targetObject = obj;
    (this->fields).generatedScreenShotTexCallback = generatedScreenShotTexCallback;
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
  arg1 = (this->fields).targetObject;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Already_generating_a_screenshot_,(Object *)arg1,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Vector3 Translate(Vector3, Transform, Vector3) */

Vector3 * Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Translate
                    (Vector3 *__return_storage_ptr__,ScreenShotGenerator *this,Vector3 pos,
                    Transform *relativeTo,Vector3 translation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (relativeTo != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       ((Vector3 *)&stack0xffffffe0,relativeTo,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uStack_3 = pVVar1->y;
    fVar4 = pVVar1->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_00.z = fVar4;
    uStack_3 = (undefined4)(uVar2 >> 0x20);
    a_00.x = (float)(undefined4)uVar2;
    a_00.y = (float)uStack_3;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                       ((Vector3 *)&stack0xffffffe0,a_00,translation.x,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uStack_3 = pVVar1->y;
    fVar5 = pVVar1->z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       ((Vector3 *)&stack0xffffffe0,relativeTo,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xffffffff00000000;
    VStack_6.z = (float)&UNK_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffe0,*pVVar1,translation.z,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xffffffff00000000;
    pVVar1 = (Vector3 *)pVVar7->x;
    this_00 = (Transform *)pVVar7->y;
    fVar8 = pVVar7->z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (pVVar1,this_00,(MethodInfo *)0x0);
    uVar9 = pVVar7->y;
    fVar10 = pVVar7->z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_6,*pVVar7,translation.y,(MethodInfo *)0x0);
    fVar4 = pVVar7->x;
    fVar11 = pVVar7->y;
    fVar12 = pVVar7->z;
    a.y = fVar10;
    a.x = (float)uVar9;
    a.z = translation.y;
    b.z = fVar5;
    uStack_3 = (undefined4)(uVar2 >> 0x20);
    b.x = (float)(undefined4)uVar2;
    b.y = (float)uStack_3;
    fStack13 = fVar5;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_6,a,b,(MethodInfo *)0x0);
    b_00.y = (float)this_00;
    b_00.x = (float)pVVar1;
    b_00.z = fVar8;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       (&VStack_6,*pVVar7,b_00,(MethodInfo *)0x0);
    b_01.y = fVar11;
    b_01.x = fVar4;
    b_01.z = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
              (&VStack_6,*pVVar1,b_01,(MethodInfo *)0x0);
    return &VStack_6;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar14)();
  return pVVar1;
}


/* ScreenShotGenerator() */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_PlayerSelected,(MethodInfo *)0x0);
  TypeInfo__ScreenShotGenerator->static_fields->renderLayers =
       1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  return;
}


/* ScreenShotGenerator() */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator__ctor
               (ScreenShotGenerator *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  func_?(&uStack_2,0xbf800000,0x3f000000,0x40000000,0);
  fStack_3 = 0.0;
  (this->fields).cameraOffset.x = (float)(undefined4)uStack_2;
  (this->fields).cameraOffset.y = (float)uStack_2._4_4_;
  (this->fields).cameraOffset.z = fStack_1;
  uStack_4 = 0;
  func_?(&uStack_4,0,0,0,0);
  (this->fields).lookAtOffset.x = (float)(undefined4)uStack_4;
  (this->fields).lookAtOffset.y = (float)uStack_4._4_4_;
  (this->fields).lookAtOffset.z = fStack_3;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

