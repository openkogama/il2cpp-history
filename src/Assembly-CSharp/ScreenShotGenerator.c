
/* ScreenShotGenerator CreateInstance() */

ScreenShotGenerator *
Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_CreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ScreenShotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ScreenShotGenerator>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenShotGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_ScreenShotGenerator;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (self,name,(MethodInfo *)0x0);
  pMVar1 = 
  ScreenShotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ScreenShotGenerator>__;
  if (self == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (ScreenShotGenerator *)(*pcVar2)();
    return pSVar3;
  }
  if ((ScreenShotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ScreenShotGenerator>__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 ScreenShotGenerator_MethodInfo__UnityEngine__GameObject__AddComponent<ScreenShotGenerator>__
                 );
  }
  pvVar4 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar4 == (void *)0x0) {
    componentType = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar5 = FUN_?(pvVar4,1);
    componentType = (Type *)FUN_?(lVar5 + 0x20);
  }
  pSVar3 = (ScreenShotGenerator *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent
                     (self,componentType,(MethodInfo *)0x0);
  pIVar6 = (pMVar1->field7_0x38).rgctx_data[1].klass;
  if ((pIVar6->field_0x135 & 1) == 0) {
    pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
  }
  if (pSVar3 != (ScreenShotGenerator *)0x0) {
    pSVar7 = pSVar3->klass;
    cVar8 = FUN_?(pIVar6,pSVar7);
    if (cVar8 != '\0') {
      return pSVar3;
    }
    if (((pSVar7->_1).field_0x6e & 0x10) != 0) {
      if (((((pIVar6->token & 0x20) != 0) || ((pIVar6->byval_arg).type == 0x13)) ||
          ((pIVar6->byval_arg).type == 0x1e)) &&
         (((pIVar6->interopData != (Il2CppInteropData *)0x0 &&
           (pIVar6->interopData->guid != (Il2CppGuid *)0x0)) &&
          (lVar5 = FUN_?(pSVar3), lVar5 != 0)))) {
        return pSVar3;
      }
      pSVar9 = (ScreenShotGenerator *)0x0;
      if (pIVar6 == pIRam0000000182dbbbe0) {
        pSVar9 = pSVar3;
      }
      return pSVar9;
    }
  }
  return (ScreenShotGenerator *)0x0;
}


/* Void Generate(GameObject, Vector3, Vector3, Action`1[Byte[]], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Generate
               (GameObject *obj,Vector3 *cameraOffset,Vector3 *lookAtOffset,
               Action_1_Byte_ *generatedScreenShotPNGCallback,bool cloneObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenShotGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ScreenShotGenerator->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
  if (cloneObject != 0) {
    VStack_1._0_8_ = (ulonglong)_UNK_? << 0x20;
    VStack_1.z = 0.0;
    auStack_2._0_4_ = 0.0;
    auStack_2._4_4_ = 0.0;
    auStack_2._8_8_ = 0;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(&VStack_1,auStack_2);
    fVar5 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_1.z = fVar5;
    VStack_1.y = fVar5;
    VStack_1.x = fVar5;
    obj = (GameObject *)FUN_?(obj,&VStack_1,auStack_2);
    pMVar6 = 
    UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
    ;
    if (obj == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                   );
    }
    p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4(obj,0,((pMVar6->field7_0x38).rgctx_data)->method);
    uVar7 = 0;
    if (p_Var5 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var8 = p_Var5->vector;
    for (; (int)uVar7 < (int)p_Var5->max_length; uVar7 = uVar7 + 1) {
      if ((uint)p_Var5->max_length <= uVar7) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      obj_00 = (Object *)*pp_Var8;
      if (obj_00 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar8 = obj_00[1].klass;
      if (pOVar8 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pOVar8);
      pp_Var8 = pp_Var8 + 1;
    }
  }
  if (this != (ScreenShotGenerator *)0x0) {
    VStack_1.x = lookAtOffset->x;
    VStack_1.y = lookAtOffset->y;
    VStack_1.z = lookAtOffset->z;
    auStack_2._0_4_ = cameraOffset->x;
    auStack_2._4_4_ = cameraOffset->y;
    auStack_2._8_4_ = cameraOffset->z;
    ScreenShotGenerator_StartGenerate
              (this,obj,(Vector3 *)auStack_2,&VStack_1,generatedScreenShotPNGCallback,cloneObject,
               (MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator GenerateCoroutine(GameObject) */

IEnumerator *
Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_GenerateCoroutine
          (ScreenShotGenerator *this,GameObject *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenShotGenerator___GenerateCoroutine_d__19);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ScreenShotGenerator___GenerateCoroutine_d__19);
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  pIVar1[2].klass = (IEnumerator__Class *)obj;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return pIVar1;
}


/* Void GenerateTexture() */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_GenerateTexture
               (ScreenShotGenerator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Generate_screen_shot);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Generate_screen_shot,(MethodInfo *)0x0);
  pRVar1 = (this->fields).genRenderTexture;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pRVar1 != (RenderTexture *)0x0) {
    pvVar2 = (pRVar1->fields)._._.m_CachedPtr;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar2);
  pTVar5 = (this->fields).genTexture;
  if (pTVar5 != (Texture2D *)0x0) {
    RStack_6.m_XMin = _UNK_?;
    RStack_6.m_YMin = _UNK_?;
    RStack_6.m_Width = _UNK_?;
    RStack_6.m_Height = _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
              (pTVar5,&RStack_6,0,0,(MethodInfo *)0x0);
    pTVar5 = (this->fields).genTexture;
    if (pTVar5 != (Texture2D *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply
                (pTVar5,1,0,(MethodInfo *)0x0);
      if ((this->fields).generatedScreenShotPNGCallback != (Action_1_Byte_ *)0x0) {
        pAVar7 = (this->fields).generatedScreenShotPNGCallback;
        UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
        ImageConversion_EncodeToPNG((this->fields).genTexture,(MethodInfo *)0x0);
        (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
      }
      if ((this->fields).generatedScreenShotTexCallback != (Action_1_UnityEngine_Texture2D_ *)0x0) {
        pAVar8 = (this->fields).generatedScreenShotTexCallback;
        (*(pAVar8->fields)._._.invoke_impl)((pAVar8->fields)._._.method_code);
      }
      obj = (this->fields).shotCamera;
      if (obj != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((
            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(0);
        if ((this->fields).clonedObject != 0) {
          pGVar9 = (this->fields).targetObject;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pGVar9,0.0,(MethodInfo *)0x0);
        }
        if ((this->fields).generatedScreenShotTexCallback == (Action_1_UnityEngine_Texture2D_ *)0x0)
        {
          pTVar5 = (this->fields).genTexture;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    ((Object_1 *)pTVar5,0.0,(MethodInfo *)0x0);
        }
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)pGVar9,0.0,(MethodInfo *)0x0);
        pRVar1 = (this->fields).genRenderTexture;
        if (pRVar1 != (RenderTexture *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar2 = (pRVar1->fields)._._.m_CachedPtr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar2);
          pRVar1 = (this->fields).genRenderTexture;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                          ,0,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pvVar2 = (void *)0x0;
          if (pRVar1 != (RenderTexture *)0x0) {
            pvVar2 = (pRVar1->fields)._._.m_CachedPtr;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar2,0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Generate(GameObject, Vector3, Vector3, Action`1[UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Generate_1
               (GameObject *obj,Vector3 *cameraOffset,Vector3 *lookAtOffset,
               Action_1_UnityEngine_Texture2D_ *generatedScreenShotTexCallback,bool cloneObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Vector3__UnityEngine__Quaternion_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenShotGenerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ScreenShotGenerator->_1).field_0x1c == 0) {
    FUN_?();
  }
  this = ScreenShotGenerator_CreateInstance((MethodInfo *)0x0);
  if (cloneObject != 0) {
    VStack_1._0_8_ = (ulonglong)_UNK_? << 0x20;
    VStack_1.z = 0.0;
    auStack_2._0_4_ = 0.0;
    auStack_2._4_4_ = 0.0;
    auStack_2._8_8_ = 0;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(&VStack_1,auStack_2);
    fVar5 = _UNK_?;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_1.z = fVar5;
    VStack_1.y = fVar5;
    VStack_1.x = fVar5;
    obj = (GameObject *)FUN_?(obj,&VStack_1,auStack_2);
    pMVar6 = 
    UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
    ;
    if (obj == (GameObject *)0x0) goto code_?;
    if ((
        UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Behaviour__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Behaviour>______
                   );
    }
    p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4(obj,0,((pMVar6->field7_0x38).rgctx_data)->method);
    uVar7 = 0;
    if (p_Var5 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var8 = p_Var5->vector;
    for (; (int)uVar7 < (int)p_Var5->max_length; uVar7 = uVar7 + 1) {
      if ((uint)p_Var5->max_length <= uVar7) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      obj_00 = (Object *)*pp_Var8;
      if (obj_00 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar8 = obj_00[1].klass;
      if (pOVar8 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pOVar8);
      pp_Var8 = pp_Var8 + 1;
    }
  }
  if (this != (ScreenShotGenerator *)0x0) {
    VStack_1.x = lookAtOffset->x;
    VStack_1.y = lookAtOffset->y;
    VStack_1.z = lookAtOffset->z;
    auStack_2._0_4_ = cameraOffset->x;
    auStack_2._4_4_ = cameraOffset->y;
    auStack_2._8_4_ = cameraOffset->z;
    ScreenShotGenerator_StartGenerate_1
              (this,obj,(Vector3 *)auStack_2,&VStack_1,generatedScreenShotTexCallback,cloneObject,
               (MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitCamera(Int32, Int32) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_InitCamera
               (ScreenShotGenerator *this,int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RenderTexture);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).genTexture;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Texture2D *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pTVar1 = (Texture2D *)FUN_?(TypeInfo__UnityEngine__Texture2D);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Texture);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aMStack_2[0]._useMipmapLimit_k__BackingField = 0;
  aMStack_2[0]._1_7_ = 0;
  aMStack_2[0]._groupName_k__BackingField = (String *)0x0;
  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
            (pTVar1,width,height,TextureFormat__Enum_ARGB32,1,0,(void *)0x0,0,aMStack_2,
             (MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).genTexture = pTVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).genTexture >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
code_?:
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar8 != (GameObject *)0x0) {
    pCVar9 = (Camera *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar8,
                         UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::Camera>__
                        );
    bVar3 = iRam_? != 0;
    (this->fields).shotCamera = pCVar9;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).shotCamera >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pCVar9 = (this->fields).shotCamera;
    if (pCVar9 != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pCVar9->fields)._._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar9,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pvVar10);
      pCVar9 = (this->fields).shotCamera;
      if (pCVar9 != (Camera *)0x0) {
        aMStack_2[0]._useMipmapLimit_k__BackingField = 0;
        aMStack_2[0]._1_7_ = 0;
        aMStack_2[0]._groupName_k__BackingField = (String *)0x0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (pCVar9->fields)._._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar9,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        pCVar9 = (this->fields).shotCamera;
        if (pCVar9 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
                    (pCVar9,_UNK_?,(MethodInfo *)0x0);
          pCVar9 = (this->fields).shotCamera;
          if (pCVar9 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_depth
                      (pCVar9,MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                               ._0_4_,(MethodInfo *)0x0);
            pCVar9 = (this->fields).shotCamera;
            if (pCVar9 != (Camera *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                        (pCVar9,_UNK_?,(MethodInfo *)0x0);
              pCVar9 = (this->fields).shotCamera;
              iVar13 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_Preview,(MethodInfo *)0x0);
              if (pCVar9 != (Camera *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                          (pCVar9,1 << ((byte)iVar13 & 0x1f),(MethodInfo *)0x0);
                this_00 = (RenderTexture *)FUN_?(TypeInfo__UnityEngine__RenderTexture);
                UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_9
                          (this_00,width,height,0x18,RenderTextureFormat__Enum_Default,
                           (MethodInfo *)0x0);
                bVar3 = iRam_? != 0;
                (this->fields).genRenderTexture = this_00;
                if (bVar3) {
                  uVar4 = (uint)((ulonglong)&(this->fields).genRenderTexture >> 0xc);
                  uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                  do {
                    uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                    puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                    LOCK();
                    bVar3 = uVar6 == *puVar7;
                    if (bVar3) {
                      *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar3);
                }
                pCVar9 = (this->fields).shotCamera;
                if (pCVar9 != (Camera *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                            (pCVar9,(this->fields).genRenderTexture,(MethodInfo *)0x0);
                  pGVar8 = (this->fields).targetObject;
                  uVar12._0_4_ = (this->fields).targetBounds.m_Center.x;
                  uVar12._4_4_ = (this->fields).targetBounds.m_Center.y;
                  fVar14 = (this->fields).targetBounds.m_Center.z;
                  if (pGVar8 != (GameObject *)0x0) {
                    pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                    VStack_16.z = (this->fields).cameraOffset.z;
                    VStack_16.x = (this->fields).cameraOffset.x;
                    VStack_16.y = (this->fields).cameraOffset.y;
                    VStack_17._0_8_ = uVar12;
                    VStack_17.z = fVar14;
                    pVVar18 = ScreenShotGenerator_Translate
                                        ((Vector3 *)aMStack_2,this,&VStack_17,pTVar15,&VStack_16,
                                         (MethodInfo *)0x0);
                    uVar19._0_4_ = pVVar18->x;
                    uVar19._4_4_ = pVVar18->y;
                    fVar14 = pVVar18->z;
                    pGVar8 = (this->fields).targetObject;
                    uVar20._0_4_ = (this->fields).targetBounds.m_Center.x;
                    uVar20._4_4_ = (this->fields).targetBounds.m_Center.y;
                    fVar21 = (this->fields).targetBounds.m_Center.z;
                    if (pGVar8 != (GameObject *)0x0) {
                      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar8,(MethodInfo *)0x0);
                      VStack_17.z = (this->fields).lookAtOffset.z;
                      VStack_17.x = (this->fields).lookAtOffset.x;
                      VStack_17.y = (this->fields).lookAtOffset.y;
                      VStack_16._0_8_ = uVar20;
                      VStack_16.z = fVar21;
                      pVVar18 = ScreenShotGenerator_Translate
                                          ((Vector3 *)aMStack_2,this,&VStack_16,pTVar15,&VStack_17,
                                           (MethodInfo *)0x0);
                      pCVar9 = (this->fields).shotCamera;
                      uVar22._0_4_ = pVVar18->x;
                      uVar22._4_4_ = pVVar18->y;
                      fVar21 = pVVar18->z;
                      if ((pCVar9 != (Camera *)0x0) &&
                         (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform((Component *)pCVar9,(MethodInfo *)0x0),
                         pTVar15 != (Transform *)0x0)) {
                        VStack_17._0_8_ = uVar19;
                        VStack_17.z = fVar14;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar10 = (pTVar15->fields)._._.m_CachedPtr;
                        if (pvVar10 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar15,(MethodInfo *)0x0);
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        pcVar11 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)
                           ) {
                          uVar12 = func_?(&UNK_?);
                          FUN_?(uVar12,0);
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        pcRam_? = pcVar11;
                        (*pcRam_?)(pvVar10);
                        pCVar9 = (this->fields).shotCamera;
                        if ((pCVar9 != (Camera *)0x0) &&
                           (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform
                                                ((Component *)pCVar9,(MethodInfo *)0x0),
                           pTVar15 != (Transform *)0x0)) {
                          VStack_16._0_8_ = uVar22;
                          VStack_16.z = fVar21;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                                    (pTVar15,&VStack_16,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      FUN_?();
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StartGenerate(GameObject, Vector3, Vector3, Action`1[Byte[]], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_StartGenerate
               (ScreenShotGenerator *this,GameObject *obj,Vector3 *cameraOffset,
               Vector3 *lookAtOffset,Action_1_Byte_ *generatedScreenShotPNGCallback,
               bool clonedObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Start_generate_screenshot_of_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Already_generating_a_screenshot_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Start_generate_screenshot_of_;
  pSVar2 = StringLiteral_Already_generating_a_screenshot_;
  if ((this->fields).generating == 0) {
    if (obj == (GameObject *)0x0) {
      pSVar2 = (String *)0x0;
    }
    else {
      pSVar2 = (String *)
               (*(obj->klass->vtable).ToString.methodPtr)(obj,(obj->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    iVar3 = iRam_?;
    (this->fields).clonedObject = clonedObject;
    (this->fields).targetObject = obj;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).targetObject >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar3 = iRam_?;
      } while (!bVar8);
    }
    fVar9 = cameraOffset->z;
    fVar10 = cameraOffset->y;
    (this->fields).cameraOffset.x = cameraOffset->x;
    (this->fields).cameraOffset.y = fVar10;
    fVar10 = lookAtOffset->x;
    fVar11 = lookAtOffset->y;
    (this->fields).cameraOffset.z = fVar9;
    fVar9 = lookAtOffset->z;
    (this->fields).lookAtOffset.x = fVar10;
    (this->fields).lookAtOffset.y = fVar11;
    (this->fields).lookAtOffset.z = fVar9;
    (this->fields).generatedScreenShotPNGCallback = generatedScreenShotPNGCallback;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).generatedScreenShotPNGCallback >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  else {
    pGVar12 = (this->fields).targetObject;
    if (pGVar12 == (GameObject *)0x0) {
      pSVar1 = (String *)0x0;
    }
    else {
      pSVar1 = (String *)
               (*(pGVar12->klass->vtable).ToString.methodPtr)
                         (pGVar12,(pGVar12->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void StartGenerate(GameObject, Vector3, Vector3, Action`1[UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_StartGenerate_1
               (ScreenShotGenerator *this,GameObject *obj,Vector3 *cameraOffset,
               Vector3 *lookAtOffset,Action_1_UnityEngine_Texture2D_ *generatedScreenShotTexCallback
               ,bool clonedObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Start_generate_screenshot_of_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Already_generating_a_screenshot_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Start_generate_screenshot_of_;
  pSVar2 = StringLiteral_Already_generating_a_screenshot_;
  if ((this->fields).generating == 0) {
    if (obj == (GameObject *)0x0) {
      pSVar2 = (String *)0x0;
    }
    else {
      pSVar2 = (String *)
               (*(obj->klass->vtable).ToString.methodPtr)(obj,(obj->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    iVar3 = iRam_?;
    (this->fields).clonedObject = clonedObject;
    (this->fields).targetObject = obj;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).targetObject >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar3 = iRam_?;
      } while (!bVar8);
    }
    fVar9 = cameraOffset->z;
    fVar10 = cameraOffset->y;
    (this->fields).cameraOffset.x = cameraOffset->x;
    (this->fields).cameraOffset.y = fVar10;
    fVar10 = lookAtOffset->x;
    fVar11 = lookAtOffset->y;
    (this->fields).cameraOffset.z = fVar9;
    fVar9 = lookAtOffset->z;
    (this->fields).lookAtOffset.x = fVar10;
    (this->fields).lookAtOffset.y = fVar11;
    (this->fields).lookAtOffset.z = fVar9;
    (this->fields).generatedScreenShotTexCallback = generatedScreenShotTexCallback;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).generatedScreenShotTexCallback >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    routine = ScreenShotGenerator_GenerateCoroutine(this,obj,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  else {
    pGVar12 = (this->fields).targetObject;
    if (pGVar12 == (GameObject *)0x0) {
      pSVar1 = (String *)0x0;
    }
    else {
      pSVar1 = (String *)
               (*(pGVar12->klass->vtable).ToString.methodPtr)
                         (pGVar12,(pGVar12->klass->vtable).ToString.method);
    }
    pSVar2 = mscorlib.dll::System::String::String_Concat_4(pSVar2,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Vector3 Translate(Vector3, Transform, Vector3) */

Vector3 * Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator_Translate
                    (Vector3 *__return_storage_ptr__,ScreenShotGenerator *this,Vector3 *pos,
                    Transform *relativeTo,Vector3 *translation,MethodInfo *method)

{
  if (relativeTo != (Transform *)0x0) {
    fVar1 = translation->x;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        (aVStack_3,relativeTo,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    fVar7 = translation->z;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                        (aVStack_3,relativeTo,(MethodInfo *)0x0);
    uVar8 = pVVar2->x;
    uVar9 = pVVar2->y;
    fVar10 = pVVar2->z;
    fVar11 = translation->y;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        (aVStack_3,relativeTo,(MethodInfo *)0x0);
    uVar12 = pVVar2->x;
    uVar13 = pVVar2->y;
    uVar14 = pos->x;
    uVar15 = pos->y;
    fVar16 = pVVar2->z;
    fVar17 = pos->z;
    __return_storage_ptr__->x =
         fVar1 * (float)uVar4 + (float)uVar14 + fVar7 * (float)uVar8 + fVar11 * (float)uVar12;
    __return_storage_ptr__->y =
         fVar1 * (float)uVar5 + (float)uVar15 + fVar7 * (float)uVar9 + fVar11 * (float)uVar13;
    __return_storage_ptr__->z = fVar1 * fVar6 + fVar17 + fVar7 * fVar10 + fVar11 * fVar16;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar18)();
  return pVVar2;
}


/* ScreenShotGenerator() */

void Assembly-CSharp.dll::ScreenShotGenerator::ScreenShotGenerator__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenShotGenerator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerSelected);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
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
  fVar1 = TypeRef__System__Activator__T._0_4_;
  uVar2 = _UNK_?;
  bVar3 = cRam_? == '\0';
  (this->fields).cameraOffset.x = (float)_UNK_?;
  (this->fields).cameraOffset.y = (float)uVar2;
  (this->fields).cameraOffset.z = fVar1;
  (this->fields).lookAtOffset.x = 0.0;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).lookAtOffset.z = 0.0;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar4 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar5 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar6 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar7 = ppMVar5;
  if (lVar6 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar6 = lRam_?;
  }
  else {
    do {
      uVar8 = (uint)ppMVar7;
      LOCK();
      bVar3 = uVar8 != uRam_?;
      uVar9 = uVar8;
      uVar10 = uVar8 + 1;
      if (bVar3) {
        uVar9 = uRam_?;
        uVar10 = uRam_?;
      }
      uRam_? = uVar10;
      UNLOCK();
    } while ((bVar3) && (ppMVar7 = (MethodInfo **)(ulonglong)uVar9, uVar8 = uVar9, uVar9 != 2)
            );
    while (uVar8 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar8 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar6;
  puVar11 = &(pOVar4->_1).field_0x1c;
  LOCK();
  bVar3 = *(int *)puVar11 == 1;
  if (bVar3) {
    *(undefined4 *)puVar11 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar8 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar12 = &(pOVar4->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar3 = *puVar12 == 1;
  if (bVar3) {
    *puVar12 = 1;
  }
  uVar8 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar8 = GetCurrentThreadId();
    psVar13 = &(pOVar4->_1).cctor_thread;
    LOCK();
    bVar3 = (ulonglong)uVar8 == *psVar13;
    if (bVar3) {
      *psVar13 = (ulonglong)uVar8;
    }
    UNLOCK();
    if (bVar3) {
      return;
    }
    while( true ) {
      puVar11 = &(pOVar4->_1).field_0x1c;
      LOCK();
      bVar3 = *(int *)puVar11 == 1;
      if (bVar3) {
        *(undefined4 *)puVar11 = 1;
      }
      UNLOCK();
      if (bVar3) break;
      LOCK();
      lVar6._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
      lVar6._4_4_ = (pOVar4->_1).cctor_started;
      if (lVar6 == 0) {
        (pOVar4->_1).initializationExceptionGCHandle = 0;
        (pOVar4->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar6 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar14._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
    lVar14._4_4_ = (pOVar4->_1).cctor_started;
    if (lVar14 == 0) {
      return;
    }
  }
  else {
    uVar8 = GetCurrentThreadId();
    LOCK();
    (pOVar4->_1).cctor_thread = (ulonglong)uVar8;
    UNLOCK();
    LOCK();
    (pOVar4->_1).cctor_finished_or_no_cctor = 1;
    uVar8 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar8 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar4->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar4);
      ppMVar7 = ppMVar5;
      pIVar15 = (Il2CppClass *)pOVar4;
code_?:
      do {
        if (ppMVar7 == (MethodInfo **)0x0) {
          FUN_?(pIVar15);
          if (pIVar15->field_count != 0) {
            ppMVar7 = pIVar15->methods;
            pMVar16 = *ppMVar7;
code_?:
            if (pMVar16 != (MethodInfo *)0x0) {
              if ((*pMVar16->name == '.') && ((pMVar16->flags & 0x800) != 0)) {
                ppMVar17 = ppMVar5;
                while (ppMVar18 = ppMVar17 + 0x30529dd4,
                      ppMVar17 = (MethodInfo **)((longlong)ppMVar17 + 1),
                      *(char *)ppMVar18 == (pMVar16->name + -1)[(longlong)ppMVar17]) {
                  if (ppMVar17 == (MethodInfo **)0x7) {
                    FUN_?(pMVar16,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar7 = ppMVar7 + 1;
          if (ppMVar7 < pIVar15->methods + pIVar15->field_count) {
            pMVar16 = *ppMVar7;
            goto code_?;
          }
        }
        pIVar15 = pIVar15->parent;
        ppMVar7 = ppMVar5;
      } while (pIVar15 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar4->_1).cctor_thread = 0;
    uVar19 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar4->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar4->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_23 < 0x10) {
code_?:
      lVar6 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar19;
      lVar14 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar6 != 0) {
        *(longlong *)(lVar14 + 0x28U) = lVar6;
        if (iRam_? != 0) {
          uVar8 = (uint)(lVar14 + 0x28U >> 0xc);
          puVar25 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar26 = *puVar25;
            LOCK();
            uVar19 = *puVar25;
            if (uVar26 == uVar19) {
              *puVar25 = uVar26 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar26 != uVar19);
        }
      }
      FUN_?(pOVar4,lVar14);
      if (0xf < uStack_24) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar20 = _UNK_?;
      uVar19 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar4->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar4->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

