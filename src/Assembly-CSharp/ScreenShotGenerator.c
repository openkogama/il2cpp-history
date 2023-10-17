
/* ScreenShotGenerator CreateInstance() */

ScreenShotGenerator *
Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_CreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ScreenShotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ScreenShotGenerator>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_ScreenShotGenerator);
    cRam_? = '\x01';
  }
  this = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  if (this != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this,StringLiteral_ScreenShotGenerator,(MethodInfo *)0x0);
    pSVar1 = (ScreenShotGenerator *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
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
    func_?(&
                    UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__ScreenShotGenerator);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ScreenShotGenerator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ScreenShotGenerator);
  }
  this = ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
  if (cloneObject != 0) {
    auVar1._4_8_ = 0;
    auVar1._0_4_ = _UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffdc,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    puVar4 = (undefined *)pQVar2->y;
    pOVar5 = (Object_1__Class *)pQVar2->z;
    fVar6 = pQVar2->w;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      puVar4 = &UNK_?;
      pOVar5 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    position.z = 1000.0;
    position.x = 1000.0;
    position.y = 1000.0;
    rotation.y = (float)puVar4;
    rotation.x = fVar3;
    rotation.z = (float)pOVar5;
    rotation.w = fVar6;
    obj = (GameObject *)
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                    ((Object *)obj,position,rotation,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                    );
    if (obj == (GameObject *)0x0) goto code_?;
    pIVar7 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)obj,
                        UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                       );
    pMVar8 = (MonitorData *)0x0;
    if (pIVar7 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    pIVar9 = pIVar7 + 2;
    for (; (int)pMVar8 < (int)pIVar7[1].monitor; pMVar8 = pMVar8 + 1) {
      if (pIVar7[1].monitor <= pMVar8) goto code_?;
      if (pIVar9->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
      obj = (GameObject *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar9->klass,0,(MethodInfo *)0x0);
      pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
    }
  }
  if (this != (ScreenShotGenerator *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      obj = (GameObject *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pSVar10 = StringLiteral_Already_generating_a_screenshot_;
    pSVar11 = StringLiteral_Start_generate_screenshot_of_;
    if ((this->fields).generating != 0) {
      pGVar12 = (this->fields).targetObject;
      if (pGVar12 == (GameObject *)0x0) {
        pSVar11 = (String *)0x0;
      }
      else {
        pSVar11 = (String *)(*(pGVar12->klass->vtable).ToString.methodPtr)();
      }
      pSVar11 = mscorlib.dll::System::String::String_Concat_3(pSVar10,pSVar11,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar11,(MethodInfo *)0x0);
      return;
    }
    if (obj == (GameObject *)0x0) {
      pSVar10 = (String *)0x0;
    }
    else {
      pSVar10 = (String *)(*(obj->klass->vtable).ToString.methodPtr)();
    }
    message = mscorlib.dll::System::String::String_Concat_3(pSVar11,pSVar10,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    (this->fields).clonedObject = cloneObject;
    (this->fields).targetObject = obj;
    func_?();
    (this->fields).cameraOffset.x = (float)pSVar11;
    (this->fields).cameraOffset.y = (float)pSVar10;
    (this->fields).cameraOffset.z = 0.0;
    (this->fields).lookAtOffset.x = (float)&UNK_?;
    (this->fields).lookAtOffset.y = (float)&(this->fields).targetObject;
    (this->fields).lookAtOffset.z = (float)obj;
    (this->fields).generatedScreenShotPNGCallback = generatedScreenShotPNGCallback;
    func_?();
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* IEnumerator GenerateCoroutine(GameObject) */

IEnumerator *
Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_GenerateCoroutine
          (ScreenShotGenerator *this,GameObject *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenShotGenerator___GenerateCoroutine_d__19);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ScreenShotGenerator___GenerateCoroutine_d__19);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].monitor = (MonitorData *)this;
    func_?(&value[2].monitor,this);
    value[2].klass = (Object__Class *)obj;
    func_?(value + 2,obj);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void GenerateTexture() */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_GenerateTexture
               (ScreenShotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Generate_screen_shot);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Generate_screen_shot,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
            ((this->fields).genRenderTexture,(MethodInfo *)0x0);
  pTVar1 = (this->fields).genTexture;
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 512.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4__ctor
            ((Vector4 *)&stack0xffffffec,0.0,0.0,512.0,512.0,(MethodInfo *)0x0);
  if (pTVar1 != (Texture2D *)0x0) {
    source.m_YMin = fVar4;
    source.m_XMin = fVar5;
    source.m_Width = fVar2;
    source.m_Height = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
              (pTVar1,source,0,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).genTexture;
    if (pTVar1 != (Texture2D *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (pTVar1,(MethodInfo *)0x0);
      if ((this->fields).generatedScreenShotPNGCallback != (Action_1_Byte_ *)0x0) {
        pAVar6 = (this->fields).generatedScreenShotPNGCallback;
        UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
        ImageConversion_EncodeToPNG((this->fields).genTexture,(MethodInfo *)0x0);
        (*(pAVar6->fields)._._.invoke_impl)();
      }
      if ((this->fields).generatedScreenShotTexCallback != (Action_1_UnityEngine_Texture2D_ *)0x0) {
        (*(((this->fields).generatedScreenShotTexCallback)->fields)._._.invoke_impl)();
      }
      this_00 = (this->fields).shotCamera;
      if (this_00 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                  (this_00,(RenderTexture *)0x0,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
                  ((RenderTexture *)0x0,(MethodInfo *)0x0);
        if ((this->fields).clonedObject != 0) {
          pGVar7 = (this->fields).targetObject;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar7,(MethodInfo *)0x0);
        }
        if ((this->fields).generatedScreenShotTexCallback == (Action_1_UnityEngine_Texture2D_ *)0x0)
        {
          pTVar1 = (this->fields).genTexture;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
        }
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar7,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Generate(GameObject, Vector3, Vector3, Action`1[UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Generate_1
               (GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_UnityEngine_Texture2D_ *generatedScreenShotTexCallback,bool cloneObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__ScreenShotGenerator);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ScreenShotGenerator->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ScreenShotGenerator);
  }
  this = ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
  if (cloneObject != 0) {
    auVar1._4_8_ = 0;
    auVar1._0_4_ = _UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffdc,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    puVar4 = (undefined *)pQVar2->y;
    pOVar5 = (Object_1__Class *)pQVar2->z;
    fVar6 = pQVar2->w;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      puVar4 = &UNK_?;
      pOVar5 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    position.z = 1000.0;
    position.x = 1000.0;
    position.y = 1000.0;
    rotation.y = (float)puVar4;
    rotation.x = fVar3;
    rotation.z = (float)pOVar5;
    rotation.w = fVar6;
    obj = (GameObject *)
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                    ((Object *)obj,position,rotation,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                    );
    if (obj == (GameObject *)0x0) goto code_?;
    pIVar7 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)obj,
                        UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                       );
    pMVar8 = (MonitorData *)0x0;
    if (pIVar7 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    pIVar9 = pIVar7 + 2;
    for (; (int)pMVar8 < (int)pIVar7[1].monitor; pMVar8 = pMVar8 + 1) {
      if (pIVar7[1].monitor <= pMVar8) goto code_?;
      if (pIVar9->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
      obj = (GameObject *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar9->klass,0,(MethodInfo *)0x0);
      pIVar9 = (IEnumerable_1_System_Object_ *)&pIVar9->monitor;
    }
  }
  if (this != (ScreenShotGenerator *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      obj = (GameObject *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pSVar10 = StringLiteral_Already_generating_a_screenshot_;
    pSVar11 = StringLiteral_Start_generate_screenshot_of_;
    if ((this->fields).generating != 0) {
      pGVar12 = (this->fields).targetObject;
      if (pGVar12 == (GameObject *)0x0) {
        pSVar11 = (String *)0x0;
      }
      else {
        pSVar11 = (String *)(*(pGVar12->klass->vtable).ToString.methodPtr)();
      }
      pSVar11 = mscorlib.dll::System::String::String_Concat_3(pSVar10,pSVar11,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar11,(MethodInfo *)0x0);
      return;
    }
    if (obj == (GameObject *)0x0) {
      pSVar10 = (String *)0x0;
    }
    else {
      pSVar10 = (String *)(*(obj->klass->vtable).ToString.methodPtr)();
    }
    message = mscorlib.dll::System::String::String_Concat_3(pSVar11,pSVar10,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    (this->fields).clonedObject = cloneObject;
    (this->fields).targetObject = obj;
    func_?();
    (this->fields).cameraOffset.x = (float)pSVar11;
    (this->fields).cameraOffset.y = (float)pSVar10;
    (this->fields).cameraOffset.z = 0.0;
    (this->fields).lookAtOffset.x = (float)&UNK_?;
    (this->fields).lookAtOffset.y = (float)&(this->fields).targetObject;
    (this->fields).lookAtOffset.z = (float)obj;
    (this->fields).generatedScreenShotTexCallback = generatedScreenShotTexCallback;
    func_?();
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitCamera(Int32, Int32) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_InitCamera
               (ScreenShotGenerator *this,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RenderTexture);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_Preview);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).genTexture;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    if (pTVar1 == (Texture2D *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
              (pTVar1,width,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    (this->fields).genTexture = pTVar1;
    func_?();
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar3 != (GameObject *)0x0) {
    pCVar4 = (Camera *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar3,
                        UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                       );
    (this->fields).shotCamera = pCVar4;
    func_?();
    pCVar4 = (this->fields).shotCamera;
    if (pCVar4 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (pCVar4,CameraClearFlags__Enum_Color,(MethodInfo *)0x0);
      pCVar4 = (this->fields).shotCamera;
      if (pCVar4 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                  (pCVar4,(Color)ZEXT816(0),(MethodInfo *)0x0);
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
              iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_Preview,(MethodInfo *)0x0);
              if (pCVar4 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                          (pCVar4,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
                this_00 = (RenderTexture *)func_?();
                if (this_00 != (RenderTexture *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_10
                            (this_00,width,height,0x18,(MethodInfo *)0x0);
                  (this->fields).genRenderTexture = this_00;
                  func_?();
                  pCVar4 = (this->fields).shotCamera;
                  if (pCVar4 != (Camera *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                              (pCVar4,(this->fields).genRenderTexture,(MethodInfo *)0x0);
                    pRVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                              Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                              KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                        (&RStack_7,
                                         (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                          *)&(this->fields).targetBounds,(MethodInfo *)0x0);
                    VStack_8.y = (float)pRVar6->_options;
                    VStack_8.z = (float)pRVar6->_cultureKey;
                    pSVar9 = pRVar6->_pattern;
                    pGVar3 = (this->fields).targetObject;
                    if (pGVar3 != (GameObject *)0x0) {
                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                      pos.z = (float)pSVar9;
                      pos.x = VStack_8.y;
                      pos.y = VStack_8.z;
                      pVVar11 = ScreenShotGenerator_Translate
                                          (&VStack_8,this,pos,pTVar10,(this->fields).cameraOffset,
                                           (MethodInfo *)0x0);
                      RStack_7._cultureKey = (String *)pVVar11->x;
                      RStack_7._pattern = (String *)pVVar11->y;
                      fVar12 = pVVar11->z;
                      pRVar6 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::
                                Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                                KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                          ((Regex_CachedCodeEntryKey *)&stack0xffffffd8,
                                           (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                                            *)&(this->fields).targetBounds,(MethodInfo *)0x0);
                      VStack_8.y = (float)pRVar6->_options;
                      VStack_8.z = (float)pRVar6->_cultureKey;
                      pSVar9 = pRVar6->_pattern;
                      pGVar3 = (this->fields).targetObject;
                      if (pGVar3 != (GameObject *)0x0) {
                        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
                        pos_00.z = (float)pSVar9;
                        pos_00.x = VStack_8.y;
                        pos_00.y = VStack_8.z;
                        pVVar11 = ScreenShotGenerator_Translate
                                            ((Vector3 *)&stack0xffffffd8,this,pos_00,pTVar10,
                                             (this->fields).lookAtOffset,(MethodInfo *)0x0);
                        VStack_8.y = pVVar11->x;
                        VStack_8.z = pVVar11->y;
                        fVar13 = pVVar11->z;
                        pCVar4 = (this->fields).shotCamera;
                        if (pCVar4 != (Camera *)0x0) {
                          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pCVar4,(MethodInfo *)0x0);
                          if (pTVar10 != (Transform *)0x0) {
                            value.z = fVar12;
                            value.x = (float)RStack_7._cultureKey;
                            value.y = (float)RStack_7._pattern;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_position(pTVar10,value,(MethodInfo *)0x0);
                            pCVar4 = (this->fields).shotCamera;
                            if (pCVar4 != (Camera *)0x0) {
                              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pCVar4,(MethodInfo *)0x0);
                              if (pTVar10 != (Transform *)0x0) {
                                worldPosition.z = fVar13;
                                worldPosition.x = VStack_8.y;
                                worldPosition.y = VStack_8.z;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_LookAt_2(pTVar10,worldPosition,(MethodInfo *)0x0);
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
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void StartGenerate(GameObject, Vector3, Vector3, Action`1[Byte[]], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_StartGenerate
               (ScreenShotGenerator *this,GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_Byte_ *generatedScreenShotPNGCallback,bool clonedObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Start_generate_screenshot_of_);
    func_?(&StringLiteral_Already_generating_a_screenshot_);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Already_generating_a_screenshot_;
  pSVar2 = StringLiteral_Start_generate_screenshot_of_;
  if ((this->fields).generating == 0) {
    if (obj == (GameObject *)0x0) {
      pSVar1 = (String *)0x0;
    }
    else {
      pSVar1 = (String *)
               (*(obj->klass->vtable).ToString.methodPtr)(obj,(obj->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    (this->fields).clonedObject = clonedObject;
    (this->fields).targetObject = obj;
    func_?(&(this->fields).targetObject,obj);
    (this->fields).cameraOffset.x = cameraOffset.x;
    (this->fields).cameraOffset.y = cameraOffset.y;
    (this->fields).cameraOffset.z = cameraOffset.z;
    (this->fields).lookAtOffset.x = lookAtOffset.x;
    (this->fields).lookAtOffset.y = lookAtOffset.y;
    (this->fields).lookAtOffset.z = lookAtOffset.z;
    (this->fields).generatedScreenShotPNGCallback = generatedScreenShotPNGCallback;
    func_?(&(this->fields).generatedScreenShotPNGCallback,generatedScreenShotPNGCallback);
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
  pGVar3 = (this->fields).targetObject;
  if (pGVar3 == (GameObject *)0x0) {
    pSVar2 = (String *)0x0;
  }
  else {
    pSVar2 = (String *)
             (*(pGVar3->klass->vtable).ToString.methodPtr)
                       (pGVar3,(pGVar3->klass->vtable).ToString.method);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Void StartGenerate(GameObject, Vector3, Vector3, Action`1[UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_StartGenerate_1
               (ScreenShotGenerator *this,GameObject *obj,Vector3 cameraOffset,Vector3 lookAtOffset,
               Action_1_UnityEngine_Texture2D_ *generatedScreenShotTexCallback,bool clonedObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Start_generate_screenshot_of_);
    func_?(&StringLiteral_Already_generating_a_screenshot_);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Already_generating_a_screenshot_;
  pSVar2 = StringLiteral_Start_generate_screenshot_of_;
  if ((this->fields).generating == 0) {
    if (obj == (GameObject *)0x0) {
      pSVar1 = (String *)0x0;
    }
    else {
      pSVar1 = (String *)
               (*(obj->klass->vtable).ToString.methodPtr)(obj,(obj->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar2,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    (this->fields).clonedObject = clonedObject;
    (this->fields).targetObject = obj;
    func_?(&(this->fields).targetObject,obj);
    (this->fields).cameraOffset.x = cameraOffset.x;
    (this->fields).cameraOffset.y = cameraOffset.y;
    (this->fields).cameraOffset.z = cameraOffset.z;
    (this->fields).lookAtOffset.x = lookAtOffset.x;
    (this->fields).lookAtOffset.y = lookAtOffset.y;
    (this->fields).lookAtOffset.z = lookAtOffset.z;
    (this->fields).generatedScreenShotTexCallback = generatedScreenShotTexCallback;
    func_?(&(this->fields).generatedScreenShotTexCallback,generatedScreenShotTexCallback);
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
  pGVar3 = (this->fields).targetObject;
  if (pGVar3 == (GameObject *)0x0) {
    pSVar2 = (String *)0x0;
  }
  else {
    pSVar2 = (String *)
             (*(pGVar3->klass->vtable).ToString.methodPtr)
                       (pGVar3,(pGVar3->klass->vtable).ToString.method);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)pSVar2,(MethodInfo *)0x0);
  return;
}


/* Vector3 Translate(Vector3, Transform, Vector3) */

Vector3 * Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Translate
                    (Vector3 *__return_storage_ptr__,ScreenShotGenerator *this,Vector3 pos,
                    Transform *relativeTo,Vector3 translation,MethodInfo *method)

{
  if (relativeTo != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_2,relativeTo,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fStack_4 = pVVar1->z;
    fVar5 = (float)(undefined4)uStack_3 * translation.x;
    fStack_6 = (float)uStack_3._4_4_ * translation.x;
    fStack_7 = fStack_4 * translation.x;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,relativeTo,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fStack_4 = pVVar1->z;
    fStack_8 = (float)(undefined4)uStack_3 * translation.z;
    fStack_9 = (float)uStack_3._4_4_ * translation.z;
    fStack_10 = fStack_4 * translation.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_2,relativeTo,(MethodInfo *)0x0);
    uVar11 = pVVar1->x;
    uVar12 = pVVar1->y;
    fVar13 = pVVar1->z;
    __return_storage_ptr__->x = pos.x + fVar5 + fStack_8 + (float)uVar11 * translation.y;
    __return_storage_ptr__->y = pos.y + fStack_6 + fStack_9 + (float)uVar12 * translation.y;
    __return_storage_ptr__->z = pos.z + fStack_7 + fStack_10 + fVar13 * translation.y;
    return __return_storage_ptr__;
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
    func_?(&TypeInfo__ScreenShotGenerator);
    func_?(&StringLiteral_PlayerSelected);
    func_?(&StringLiteral_CamRotateTarget);
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
  uVar1 = _UNK_?;
  (this->fields).cameraOffset.x = (float)_UNK_?;
  (this->fields).cameraOffset.y = (float)uVar1;
  (this->fields).cameraOffset.z = 2.0;
  (this->fields).lookAtOffset.x = 0.0;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).lookAtOffset.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

