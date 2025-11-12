
/* Void CleanupRenderTex() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_CleanupRenderTex
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  obj = (this->fields).pictureCamera;
  if (obj == (Camera *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar2,0);
  pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active
                     ((MethodInfo *)0x0);
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
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(0);
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
  if (pRVar4 != (RenderTexture *)0x0) {
    pvVar2 = (pRVar4->fields)._._.m_CachedPtr;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2);
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_OnPostRender
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarPictureTakerUGUI____c___OnPostRender_b__7_0_UnityEngine__MeshRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isCurrentAvatarBody != 0) {
    return;
  }
  pGVar1 = (this->fields)._avatarCloneGO;
  if (pGVar1 != (GameObject *)0x0) {
    collection = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_4
                           (pGVar1,1,
                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                           );
    pMVar2 = 
    System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
    ;
    if ((
        System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                   );
    }
    if (collection == (_Il2CppFullySharedGenericType__Array *)0x0) {
      s = (String *)func_?(&StringLiteral_source);
      pEVar3 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar3,pMVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar5 = (pMVar2->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
              FUN_?(pvVar5);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object___ctor_1
              ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)collection,
               (pMVar2->field7_0x38).rgctx_data[2].method);
    if (*(int *)&(TypeInfo__AvatarPictureTakerUGUI____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_01 = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__7_0;
    if (this_01 == (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
      if (*(int *)&(TypeInfo__AvatarPictureTakerUGUI____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9;
      this_01 = (Action_1_UnityEngine_MeshRenderer_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::MeshRenderer>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                ((UnityAction_1_System_Object_ *)this_01,(Object *)object,
                 MethodInfo__AvatarPictureTakerUGUI____c___OnPostRender_b__7_0_UnityEngine__MeshRenderer_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__7_0 = this_01;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__7_0 >>
                      0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
    }
    if (this_00 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      EntryPreProcessor+AllocSize]::
      List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__ForEach
                (this_00,(Action_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)this_01
                 ,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                );
      pGVar1 = (this->fields)._avatarCloneGO;
      if (pGVar1 != (GameObject *)0x0) {
        t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_OnPreCull
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarPictureTakerUGUI____c___OnPreCull_b__6_0_UnityEngine__MeshRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._avatarCloneGO;
  if (pGVar1 != (GameObject *)0x0) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (pGVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._avatarCloneGO;
    if (pGVar1 != (GameObject *)0x0) {
      collection = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_4
                             (pGVar1,1,
                              UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                             );
      pMVar2 = 
      System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
      ;
      if ((
          System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                     );
      }
      if (collection == (_Il2CppFullySharedGenericType__Array *)0x0) {
        s = (String *)func_?(&StringLiteral_source);
        pEVar3 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
        FUN_?(pEVar3,pMVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (pMVar2->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
        pvVar5 = (void *)FUN_?(pvVar5);
      }
      this_00 = (List_1_System_Object_ *)FUN_?(pvVar5);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (this_00,(IEnumerable_1_System_Object_ *)collection,
                 (pMVar2->field7_0x38).rgctx_data[2].method);
      if (*(int *)&(TypeInfo__AvatarPictureTakerUGUI____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__6_0;
      if (this_01 == (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
        if (*(int *)&(TypeInfo__AvatarPictureTakerUGUI____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        object = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9;
        this_01 = (Action_1_UnityEngine_MeshRenderer_ *)
                  FUN_?(TypeInfo__System__Action<UnityEngine::MeshRenderer>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  ((UnityAction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__AvatarPictureTakerUGUI____c___OnPreCull_b__6_0_UnityEngine__MeshRenderer_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__6_0 = this_01;
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__6_0
                         >> 0xc);
          puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar8 = *puVar7;
            LOCK();
            uVar9 = *puVar7;
            if (uVar8 == uVar9) {
              *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar8 != uVar9);
        }
      }
      if (this_00 != (List_1_System_Object_ *)0x0) {
        if (this_01 == (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
                    (ExceptionArgument__Enum_action,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this_00->fields)._version;
        uVar6 = 0;
        if (0 < (this_00->fields)._size) {
          lVar11 = 0x20;
          do {
            if (iVar10 != (this_00->fields)._version) goto DAT_?;
            pOVar12 = (this_00->fields)._items;
            if (pOVar12 == (Object__Array *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((uint)pOVar12->max_length <= uVar6) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*(this_01->fields)._._.invoke_impl)
                      ((this_01->fields)._._.method_code,
                       *(undefined8 *)((longlong)pOVar12->vector + lVar11 + -0x20),
                       (this_01->fields)._._.method);
            uVar6 = uVar6 + 1;
            lVar11 = lVar11 + 8;
          } while ((int)uVar6 < (this_00->fields)._size);
        }
        if (iVar10 == (this_00->fields)._version) {
          return;
        }
DAT_?:
        mscorlib.dll::System::ThrowHelper::
        ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TakePicture(MVWorldObjectClient, Int32, Action`2[Int32,UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
               (AvatarPictureTakerUGUI *this,MVWorldObjectClient *avatar,int32_t avatarIndex,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,bool isCurrentBody,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::MeshRenderer>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponent<BoneAnimation>__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Texture2D);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarPictureTakerUGUI____c___TakePicture_b__5_0_UnityEngine__MeshRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).isCurrentAvatarBody = isCurrentBody;
  if (avatar == (MVWorldObjectClient *)0x0) goto code_?;
  (this->fields)._avatarCloneGO = (avatar->fields).gameObject;
  func_?(&(this->fields)._avatarCloneGO);
  pMVar1 = 
  AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
  ;
  pTVar2 = (Transform *)0x0;
  if (isCurrentBody == 0) {
    pGVar3 = (this->fields)._avatarCloneGO;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    if ((
        AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
                   );
    }
    p_Var11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentsInChildren_4
                        (pGVar3,0,((pMVar1->field7_0x38).rgctx_data)->method);
    if (p_Var11 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
    pp_Var22 = p_Var11->vector;
    pTVar4 = pTVar2;
    while (uVar5 = (uint)pTVar4, (int)uVar5 < (int)p_Var11->max_length) {
      if ((uint)p_Var11->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((AvatarAccessoryParticles *)*pp_Var22 == (AvatarAccessoryParticles *)0x0) ||
         (obj = AvatarAccessoryParticles::AvatarAccessoryParticles_get_RootParticleSystem
                          ((AvatarAccessoryParticles *)*pp_Var22,(MethodInfo *)0x0),
         obj == (ParticleSystem *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar7);
      pp_Var22 = pp_Var22 + 1;
      pTVar4 = (Transform *)(ulonglong)(uVar5 + 1);
    }
    pGVar3 = (this->fields)._avatarCloneGO;
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pBVar9 = (BoneAnimation *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar3,
                         BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponent<BoneAnimation>__
                        );
    (this->fields)._boneAnimation = pBVar9;
    func_?(&(this->fields)._boneAnimation);
    pBVar9 = (this->fields)._boneAnimation;
    if (pBVar9 == (BoneAnimation *)0x0) goto code_?;
    BoneAnimation::BoneAnimation_PlayAndPauseAt
              (pBVar9,StringLiteral_Idle,_UNK_?,(MethodInfo *)0x0);
  }
  pCVar10 = (this->fields).pictureCamera;
  if (pCVar10 != (Camera *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pCVar10->fields)._._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar7);
    pCVar10 = (this->fields).pictureCamera;
    if (pCVar10 != (Camera *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pCVar10->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar7);
      pCVar10 = (this->fields).pictureCamera;
      if (pCVar10 != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (pCVar10->fields)._._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar7,1);
        iVar11 = (this->fields).previewResolution;
        obj_00 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                 RenderTexture_GetTemporary_7(iVar11,iVar11,0x10,(MethodInfo *)0x0);
        if (obj_00 != (RenderTexture *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Texture>_UnityEngine__Texture_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Texture);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (obj_00->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Texture->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar7);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Object>_UnityEngine__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (obj_00->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar7);
          pCVar10 = (this->fields).pictureCamera;
          if (pCVar10 != (Camera *)0x0) {
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
            pvVar7 = (pCVar10->fields)._._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar10,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((
                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::RenderTexture>_UnityEngine__RenderTexture_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?();
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar7);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (this->fields)._._._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
code_?:
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            pvVar7 = (void *)(*pcRam_?)(pvVar7);
            pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar7,
                                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                );
            if (pOVar12 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar13 = pOVar12[1].klass;
              if (pOVar13 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              (*pcRam_?)(pOVar13);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar7 = (this->fields)._._._._.m_CachedPtr;
              if (pvVar7 == (void *)0x0) goto code_?;
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pcRam_? = pcVar6;
              pvVar7 = (void *)(*pcRam_?)(pvVar7);
              pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar7,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pOVar12 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                MStack_14._useMipmapLimit_k__BackingField = 0;
                MStack_14._1_7_ = 0;
                MStack_14._groupName_k__BackingField = (String *)0x0;
                pOVar13 = pOVar12[1].klass;
                if (pOVar13 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pOVar13);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar7 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) goto code_?;
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pcRam_? = pcVar6;
                pvVar7 = (void *)(*pcRam_?)(pvVar7);
                pTVar4 = (Transform *)
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar7,
                                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                    );
                pGVar3 = (this->fields)._avatarCloneGO;
                if (pGVar3 != (GameObject *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar7 = (pGVar3->fields)._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  pvVar7 = (void *)(*pcRam_?)(pvVar7);
                  parent = (Transform *)
                           UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                           Unmarshal_UnmarshalUnityObject
                                     (pvVar7,
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                  if (pTVar4 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Debug);
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__UnityEngine__RectTransform);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_Parent_of_RectTransform_is_being);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pTVar15 = pTVar2;
                    if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)
                    {
                      pTVar15 = pTVar4;
                    }
                    if (pTVar15 != (Transform *)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                                ((Object *)StringLiteral_Parent_of_RectTransform_is_being,
                                 (Object_1 *)pTVar4,(MethodInfo *)0x0);
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                              (pTVar4,parent,1,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar7 = (this->fields)._._._._.m_CachedPtr;
                    if (pvVar7 == (void *)0x0) {
code_?:
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcVar6 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                      uVar8 = func_?(&UNK_?);
                      FUN_?(uVar8,0);
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pcRam_? = pcVar6;
                    pvVar7 = (void *)(*pcRam_?)(pvVar7);
                    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                              Unmarshal_UnmarshalUnityObject
                                        (pvVar7,
                                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                        );
                    if (pOVar12 != (Object *)0x0) {
                      RStack_16.m_XMin = 0.0;
                      RStack_16.m_YMin = 0.0;
                      RStack_16.m_Width = 0.0;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar13 = pOVar12[1].klass;
                      if (pOVar13 == (Object__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      (*pcRam_?)(pOVar13);
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                     );
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar7 = (this->fields)._._._._.m_CachedPtr;
                      if (pvVar7 == (void *)0x0) goto code_?;
                      pcVar6 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                      {
                        uVar8 = func_?(&UNK_?);
                        FUN_?(uVar8,0);
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pcRam_? = pcVar6;
                      pvVar7 = (void *)(*pcRam_?)(pvVar7);
                      pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                                Unmarshal_UnmarshalUnityObject
                                          (pvVar7,
                                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                          );
                      if (pOVar12 != (Object *)0x0) {
                        MStack_17._useMipmapLimit_k__BackingField =
                             MStack_14._useMipmapLimit_k__BackingField;
                        MStack_17._1_7_ = MStack_14._1_7_;
                        MStack_17._groupName_k__BackingField = MStack_14._groupName_k__BackingField;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar13 = pOVar12[1].klass;
                        if (pOVar13 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcVar6 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)
                           ) {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcRam_? = pcVar6;
                        (*pcRam_?)(pOVar13,&MStack_17);
                        pGVar3 = (this->fields)._avatarCloneGO;
                        if (pGVar3 != (GameObject *)0x0) {
                          p_Var11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_4
                                              (pGVar3,1,
                                               UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                                              );
                          pMVar1 = 
                          System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                          ;
                          if ((
                              System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                            FUN_?(
                                         System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                                         );
                          }
                          if (p_Var11 == (_Il2CppFullySharedGenericType__Array *)0x0) {
                            s = (String *)func_?(&StringLiteral_source);
                            pEVar18 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                                                (s,(MethodInfo *)0x0);
                            FUN_?(pEVar18,pMVar1);
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pvVar7 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
                          if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
                            pvVar7 = (void *)FUN_?(pvVar7);
                          }
                          this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                     *)FUN_?(pvVar7);
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object___ctor_1
                                    ((List_1_System_Object_ *)this_00,
                                     (IEnumerable_1_System_Object_ *)p_Var11,
                                     (pMVar1->field7_0x38).rgctx_data[2].method);
                          if (*(int *)&(TypeInfo__AvatarPictureTakerUGUI____c->_1).field_0x1c == 0)
                          {
                            FUN_?();
                          }
                          this_01 = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__5_0;
                          if (this_01 == (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
                            if (*(int *)&(TypeInfo__AvatarPictureTakerUGUI____c->_1).field_0x1c == 0
                               ) {
                              FUN_?();
                            }
                            object = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9;
                            this_01 = (Action_1_UnityEngine_MeshRenderer_ *)
                                      FUN_?(
                                                  TypeInfo__System__Action<UnityEngine::MeshRenderer>
                                                  );
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      ((UnityAction_1_System_Object_ *)this_01,(Object *)object,
                                       MethodInfo__AvatarPictureTakerUGUI____c___TakePicture_b__5_0_UnityEngine__MeshRenderer_
                                       ,(MethodInfo *)0x0);
                            TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__5_0 = this_01
                            ;
                            if (iRam_? != 0) {
                              uVar5 = (uint)((ulonglong)
                                             &TypeInfo__AvatarPictureTakerUGUI____c->static_fields->
                                              __9__5_0 >> 0xc);
                              uVar19 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                              do {
                                uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                                puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                                LOCK();
                                bVar22 = uVar20 == *puVar21;
                                if (bVar22) {
                                  *puVar21 = uVar20 | 1L << (uVar5 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar22);
                            }
                          }
                          if (this_00 !=
                              (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
                          {
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            UIElements::UIR::EntryPreProcessor+AllocSize]::
                            List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__ForEach
                                      (this_00,(Action_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                                *)this_01,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                                      );
                            pCVar10 = (this->fields).pictureCamera;
                            if (pCVar10 != (Camera *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar7 = (pCVar10->fields)._._._.m_CachedPtr;
                              if (pvVar7 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pCVar10,(MethodInfo *)0x0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcVar6 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar6 = (code *)FUN_?(&UNK_?),
                                 pcVar6 == (code *)0x0)) {
                                uVar8 = func_?(&UNK_?);
                                FUN_?(uVar8,0);
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pcRam_? = pcVar6;
                              (*pcRam_?)(pvVar7);
                              pCVar10 = (this->fields).pictureCamera;
                              if (pCVar10 != (Camera *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar7 = (pCVar10->fields)._._._.m_CachedPtr;
                                if (pvVar7 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pCVar10,(MethodInfo *)0x0);
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                pcVar6 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar6 = (code *)FUN_?(&UNK_?),
                                   pcVar6 == (code *)0x0)) {
                                  uVar8 = func_?(&UNK_?);
                                  FUN_?(uVar8,0);
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                pcRam_? = pcVar6;
                                (*pcRam_?)(pvVar7,0);
                                iVar11 = (this->fields).previewResolution;
                                this_02 = (Texture2D *)
                                          FUN_?(TypeInfo__UnityEngine__Texture2D);
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Texture);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                MStack_17._useMipmapLimit_k__BackingField = 0;
                                MStack_17._1_7_ = 0;
                                MStack_17._groupName_k__BackingField = (String *)0x0;
                                UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor
                                          (this_02,iVar11,iVar11,TextureFormat__Enum_ARGB32,1,0,
                                           (void *)0x0,0,&MStack_17,(MethodInfo *)0x0);
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
                                pvVar7 = (obj_00->fields)._._.m_CachedPtr;
                                pcVar6 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar6 = (code *)FUN_?(&UNK_?),
                                   pcVar6 == (code *)0x0)) {
                                  uVar8 = func_?(&UNK_?);
                                  FUN_?(uVar8,0);
                                  pcVar6 = (code *)swi(3);
                                  (*pcVar6)();
                                  return;
                                }
                                pcRam_? = pcVar6;
                                (*pcRam_?)(pvVar7);
                                iVar23 = (*(obj_00->klass->vtable).get_width.methodPtr)
                                                  (obj_00,(obj_00->klass->vtable).get_width.method);
                                iVar24 = (*(obj_00->klass->vtable).get_height.methodPtr)
                                                   (obj_00,(obj_00->klass->vtable).get_height.method
                                                   );
                                if (this_02 != (Texture2D *)0x0) {
                                  RStack_16.m_XMin = 0.0;
                                  RStack_16.m_YMin = 0.0;
                                  RStack_16.m_Width = (float)iVar23;
                                  RStack_16.m_Height = (float)iVar24;
                                  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::
                                  Texture2D_ReadPixels_1(this_02,&RStack_16,0,0,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::Texture2D::
                                  Texture2D_Apply(this_02,1,0,(MethodInfo *)0x0);
                                  AvatarPictureTakerUGUI_CleanupRenderTex(this,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar7 = (this->fields)._._._._.m_CachedPtr;
                                  if (pvVar7 == (void *)0x0) {
code_?:
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)this,(MethodInfo *)0x0);
                                    pcVar6 = (code *)swi(3);
                                    (*pcVar6)();
                                    return;
                                  }
                                  pcVar6 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar6 = (code *)FUN_?(&UNK_?),
                                     pcVar6 == (code *)0x0)) {
                                    uVar8 = func_?(&UNK_?);
                                    FUN_?(uVar8,0);
                                    pcVar6 = (code *)swi(3);
                                    (*pcVar6)();
                                    return;
                                  }
                                  pcRam_? = pcVar6;
                                  pvVar7 = (void *)(*pcRam_?)(pvVar7);
                                  pTVar4 = (Transform *)
                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            Unmarshal::Unmarshal_UnmarshalUnityObject
                                                      (pvVar7,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                  if (pTVar4 != (Transform *)0x0) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__UnityEngine__Debug);
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&TypeInfo__UnityEngine__RectTransform);
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&StringLiteral_Parent_of_RectTransform_is_being)
                                      ;
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (pTVar4->klass ==
                                        (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                                      pTVar2 = pTVar4;
                                    }
                                    if (pTVar2 != (Transform *)0x0) {
                                      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c ==
                                          0) {
                                        FUN_?();
                                      }
                                      UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                      Debug_2_LogWarning_1
                                                ((Object *)
                                                 StringLiteral_Parent_of_RectTransform_is_being,
                                                 (Object_1 *)pTVar4,(MethodInfo *)0x0);
                                    }
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
                                    if (pvVar7 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pTVar4,(MethodInfo *)0x0);
                                      pcVar6 = (code *)swi(3);
                                      (*pcVar6)();
                                      return;
                                    }
                                    if ((
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                                      FUN_?();
                                    }
                                    pcVar6 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar6 = (code *)FUN_?(&UNK_?),
                                       pcVar6 == (code *)0x0)) {
                                      uVar8 = func_?(&UNK_?);
                                      FUN_?(uVar8,0);
                                      pcVar6 = (code *)swi(3);
                                      (*pcVar6)();
                                      return;
                                    }
                                    pcRam_? = pcVar6;
                                    (*pcRam_?)(pvVar7,0,1);
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar7 = (this->fields)._._._._.m_CachedPtr;
                                    if (pvVar7 == (void *)0x0) goto code_?;
                                    pcVar6 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar6 = (code *)FUN_?(&UNK_?),
                                       pcVar6 == (code *)0x0)) {
                                      uVar8 = func_?(&UNK_?);
                                      FUN_?(uVar8,0);
                                      pcVar6 = (code *)swi(3);
                                      (*pcVar6)();
                                      return;
                                    }
                                    pcRam_? = pcVar6;
                                    pvVar7 = (void *)(*pcRam_?)(pvVar7);
                                    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                              Unmarshal::Unmarshal_UnmarshalUnityObject
                                                        (pvVar7,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                    if (pOVar12 != (Object *)0x0) {
                                      uStack_25 = 0;
                                      uStack_26 = 0;
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pOVar13 = pOVar12[1].klass;
                                      if (pOVar13 == (Object__Class *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  (pOVar12,(MethodInfo *)0x0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcVar6 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar6 = (code *)FUN_?(&UNK_?),
                                         pcVar6 == (code *)0x0)) {
                                        uVar8 = func_?(&UNK_?);
                                        FUN_?(uVar8,0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcRam_? = pcVar6;
                                      (*pcRam_?)(pOVar13);
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        FUN_?(&
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pvVar7 = (this->fields)._._._._.m_CachedPtr;
                                      if (pvVar7 == (void *)0x0) goto code_?;
                                      pcVar6 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar6 = (code *)FUN_?(&UNK_?),
                                         pcVar6 == (code *)0x0)) {
                                        uVar8 = func_?(&UNK_?);
                                        FUN_?(uVar8,0);
                                        pcVar6 = (code *)swi(3);
                                        (*pcVar6)();
                                        return;
                                      }
                                      pcRam_? = pcVar6;
                                      pvVar7 = (void *)(*pcRam_?)(pvVar7);
                                      pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                                Unmarshal::Unmarshal_UnmarshalUnityObject
                                                          (pvVar7,
                                                  UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                                  );
                                      if (pOVar12 != (Object *)0x0) {
                                        uStack_27 = MStack_14._0_4_;
                                        uStack_28 = MStack_14._4_4_;
                                        uStack_29 = MStack_14._groupName_k__BackingField._0_4_;
                                        uStack_30 = MStack_14._groupName_k__BackingField._4_4_;
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pOVar13 = pOVar12[1].klass;
                                        if (pOVar13 == (Object__Class *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    (pOVar12,(MethodInfo *)0x0);
                                          pcVar6 = (code *)swi(3);
                                          (*pcVar6)();
                                          return;
                                        }
                                        pcVar6 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar6 = (code *)FUN_?(&UNK_?),
                                           pcVar6 == (code *)0x0)) {
                                          uVar8 = func_?(&UNK_?);
                                          FUN_?(uVar8,0);
                                          pcVar6 = (code *)swi(3);
                                          (*pcVar6)();
                                          return;
                                        }
                                        pcRam_? = pcVar6;
                                        (*pcRam_?)(pOVar13,&uStack_27);
                                        if (OnPictureTaken !=
                                            (Action_2_Int32_UnityEngine_Texture2D_ *)0x0) {
                                          (*(OnPictureTaken->fields)._._.invoke_impl)
                                                    ((OnPictureTaken->fields)._._.method_code,
                                                     avatarIndex,this_02,
                                                     (OnPictureTaken->fields)._._.method);
                                        }
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          FUN_?();
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                    }
                  }
                }
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* AvatarPictureTakerUGUI() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI__ctor
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).previewResolution = 0x80;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

