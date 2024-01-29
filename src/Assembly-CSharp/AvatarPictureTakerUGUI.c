
/* Void CleanupRenderTex() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_CleanupRenderTex
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  this_00 = (this->fields).pictureCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
              (this_00,(RenderTexture *)0x0,(MethodInfo *)0x0);
    temp = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_get_active
                     ((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_set_active
              ((RenderTexture *)0x0,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture_ReleaseTemporary
              (temp,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_OnPostRender
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::MeshRenderer>);
    func_?(&
                    System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__AvatarPictureTakerUGUI____c___OnPostRender_b__7_0_UnityEngine__MeshRenderer_
                   );
    func_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    cRam_? = '\x01';
  }
  if ((this->fields).isCurrentAvatarBody != 0) {
    return;
  }
  pGVar1 = (this->fields)._avatarCloneGO;
  if (pGVar1 != (GameObject *)0x0) {
    source = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_3
                       (pGVar1,1,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                       );
    this_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                        ((IEnumerable_1_System_Object_ *)source,
                         System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                        );
    if ((TypeInfo__AvatarPictureTakerUGUI____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__7_0;
    if (this_01 ==
        (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
         *)0x0) {
      if ((TypeInfo__AvatarPictureTakerUGUI____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      object = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9;
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)object,
                 MethodInfo__AvatarPictureTakerUGUI____c___OnPostRender_b__7_0_UnityEngine__MeshRenderer_
                 ,(MethodInfo *)0x0);
      TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__7_0 =
           (Action_1_UnityEngine_MeshRenderer_ *)this_01;
      func_?(&TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__7_0,this_01);
      this_00 = unaff_EBX;
    }
    if (this_00 != (List_1_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
      List_1_System_UInt32__ForEach
                ((List_1_System_UInt32_ *)this_00,(Action_1_UInt32_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                );
      pGVar1 = (this->fields)._avatarCloneGO;
      if (pGVar1 != (GameObject *)0x0) {
        t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPreCull() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_OnPreCull
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::MeshRenderer>);
    func_?(&
                    System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__AvatarPictureTakerUGUI____c___OnPreCull_b__6_0_UnityEngine__MeshRenderer_
                   );
    func_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._avatarCloneGO;
  if (pGVar1 != (GameObject *)0x0) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (pGVar1,(MethodInfo *)0x0);
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._avatarCloneGO;
    if (pGVar1 != (GameObject *)0x0) {
      source = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_3
                         (pGVar1,1,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                         );
      this_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                          ((IEnumerable_1_System_Object_ *)source,
                           System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                          );
      if ((TypeInfo__AvatarPictureTakerUGUI____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__6_0;
      if (this_01 ==
          (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
           *)0x0) {
        if ((TypeInfo__AvatarPictureTakerUGUI____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9;
        this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *)func_?();
        DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata
        ::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
        DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_01,(Object *)object,
                   MethodInfo__AvatarPictureTakerUGUI____c___OnPreCull_b__6_0_UnityEngine__MeshRenderer_
                   ,(MethodInfo *)0x0);
        TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__6_0 =
             (Action_1_UnityEngine_MeshRenderer_ *)this_01;
        func_?();
      }
      if (this_00 != (List_1_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
        List_1_System_UInt32__ForEach
                  ((List_1_System_UInt32_ *)this_00,(Action_1_UInt32_ *)this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TakePicture(MVWorldObjectClient, Int32, Action`2[Int32,UnityEngine.Texture2D], Boolean) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_TakePicture
               (AvatarPictureTakerUGUI *this,MVWorldObjectClient *avatar,int32_t avatarIndex,
               Action_2_Int32_UnityEngine_Texture2D_ *OnPictureTaken,bool isCurrentBody,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::MeshRenderer>);
    func_?(&
                    System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                   );
    func_?(&
                    BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponent<BoneAnimation>__
                   );
    func_?(&
                    AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                   );
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&
                    MethodInfo__AvatarPictureTakerUGUI____c___TakePicture_b__5_0_UnityEngine__MeshRenderer_
                   );
    func_?(&TypeInfo__AvatarPictureTakerUGUI____c);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  (this->fields).isCurrentAvatarBody = isCurrentBody;
  if (avatar == (MVWorldObjectClient *)0x0) goto code_?;
  pGVar1 = (avatar->fields).gameObject;
  (this->fields)._avatarCloneGO = pGVar1;
  func_?(&(this->fields)._avatarCloneGO,pGVar1);
  if (isCurrentBody == 0) {
    pGVar1 = (this->fields)._avatarCloneGO;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (pGVar1,
                        AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
                       );
    uVar3 = 0;
    if (pOVar2 == (Object__Array *)0x0) goto code_?;
    ppOVar4 = pOVar2->vector;
    for (; (int)uVar3 < (int)pOVar2->max_length; uVar3 = uVar3 + 1) {
      if (pOVar2->max_length <= uVar3) goto code_?;
      if (((AvatarAccessoryParticles *)*ppOVar4 == (AvatarAccessoryParticles *)0x0) ||
         (this_00 = AvatarAccessoryParticles::AvatarAccessoryParticles_get_RootParticleSystem
                              ((AvatarAccessoryParticles *)*ppOVar4,(MethodInfo *)0x0),
         this_00 == (ParticleSystem *)0x0)) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Simulate_2
                (this_00,1.0,1,(MethodInfo *)0x0);
      ppOVar4 = ppOVar4 + 1;
    }
    pGVar1 = (this->fields)._avatarCloneGO;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pBVar5 = (BoneAnimation *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (pGVar1,
                        BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponent<BoneAnimation>__
                       );
    (this->fields)._boneAnimation = pBVar5;
    func_?(&(this->fields)._boneAnimation,pBVar5);
    pBVar5 = (this->fields)._boneAnimation;
    if (pBVar5 == (BoneAnimation *)0x0) goto code_?;
    BoneAnimation::BoneAnimation_PlayAndPauseAt(pBVar5,StringLiteral_Idle,0.01,(MethodInfo *)0x0);
  }
  pCVar6 = (this->fields).pictureCamera;
  if (pCVar6 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar6,0x84100,(MethodInfo *)0x0);
    pCVar6 = (this->fields).pictureCamera;
    if (pCVar6 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                (pCVar6,1.0,(MethodInfo *)0x0);
      pCVar6 = (this->fields).pictureCamera;
      if (pCVar6 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pCVar6,1,(MethodInfo *)0x0);
        pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                 RenderTexture_GetTemporary_7
                           ((this->fields).previewResolution,(this->fields).previewResolution,0x10,
                            (MethodInfo *)0x0);
        if (pRVar7 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)pRVar7,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)pRVar7,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          pCVar6 = (this->fields).pictureCamera;
          if (pCVar6 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar6,pRVar7,(MethodInfo *)0x0);
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar8 != (Transform *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localPosition((Vector3 *)&fStack_10,pTVar8,(MethodInfo *)0x0)
              ;
              uVar11._0_4_ = pVVar9->x;
              uVar11._4_4_ = pVVar9->y;
              fVar12 = pVVar9->z;
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localRotation
                                    ((Quaternion *)&stack0xffffffd4,pTVar8,(MethodInfo *)0x0);
                fVar14 = pQVar13->x;
                fVar15 = pQVar13->y;
                fVar16 = pQVar13->z;
                fVar17 = pQVar13->w;
                pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                pGVar1 = (this->fields)._avatarCloneGO;
                if ((pGVar1 != (GameObject *)0x0) &&
                   (value_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                   pTVar8 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (pTVar8,value_03,(MethodInfo *)0x0);
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    value.z = fVar12;
                    value.x = (float)(int)uVar11;
                    value.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar8,value,(MethodInfo *)0x0);
                    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)this,(MethodInfo *)0x0);
                    if (pTVar8 != (Transform *)0x0) {
                      value_00.y = fVar15;
                      value_00.x = fVar14;
                      value_00.z = fVar16;
                      value_00.w = fVar17;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localRotation(pTVar8,value_00,(MethodInfo *)0x0);
                      pGVar1 = (this->fields)._avatarCloneGO;
                      if (pGVar1 != (GameObject *)0x0) {
                        source = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_GetComponentsInChildren_3
                                           (pGVar1,1,
                                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                                           );
                        this_01 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                                            ((IEnumerable_1_System_Object_ *)source,
                                             System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                                            );
                        if ((TypeInfo__AvatarPictureTakerUGUI____c->_1).cctor_finished_or_no_cctor
                            == 0) {
                          func_?();
                        }
                        this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                   *)TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__5_0;
                        if (this_02 ==
                            (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                             *)0x0) {
                          if ((TypeInfo__AvatarPictureTakerUGUI____c->_1).cctor_finished_or_no_cctor
                              == 0) {
                            func_?(TypeInfo__AvatarPictureTakerUGUI____c);
                          }
                          object = TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9;
                          this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                     *)func_?(
                                                  TypeInfo__System__Action<UnityEngine::MeshRenderer>
                                                  );
                          DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity
                          ::IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata
                          ::__Il2CppFullySharedGenericType]::
                          DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                    (this_02,(Object *)object,
                                     MethodInfo__AvatarPictureTakerUGUI____c___TakePicture_b__5_0_UnityEngine__MeshRenderer_
                                     ,(MethodInfo *)0x0);
                          TypeInfo__AvatarPictureTakerUGUI____c->static_fields->__9__5_0 =
                               (Action_1_UnityEngine_MeshRenderer_ *)this_02;
                          func_?(&TypeInfo__AvatarPictureTakerUGUI____c->static_fields->
                                           __9__5_0,this_02);
                        }
                        if (this_01 != (List_1_System_Object_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
                          List_1_System_UInt32__ForEach
                                    ((List_1_System_UInt32_ *)this_01,(Action_1_UInt32_ *)this_02,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                                    );
                          pCVar6 = (this->fields).pictureCamera;
                          if (pCVar6 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                      (pCVar6,(MethodInfo *)0x0);
                            pCVar6 = (this->fields).pictureCamera;
                            if (pCVar6 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)pCVar6,0,(MethodInfo *)0x0);
                              width = (this->fields).previewResolution;
                              pTVar18 = TypeInfo__UnityEngine__Texture2D;
                              this_03 = (Texture2D *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_3
                                        (this_03,width,width,TextureFormat__Enum_ARGB32,0,
                                         (MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                              RenderTexture_set_active
                                        ((RenderTexture *)&UNK_?,(MethodInfo *)0x0);
                              fVar14 = *(float *)(_UNK_? + 0xe4);
                              iVar19 = (**(code **)(_UNK_? + 0xe0))(&UNK_?);
                              fStack_10 = 0.0;
                              puStack_20 = (undefined *)(float)iVar19;
                              iVar19 = (**(code **)(_UNK_? + 0xf0))
                                                 (&UNK_?,
                                                  *(undefined4 *)(_UNK_? + 0xf4));
                              if (this_03 != (Texture2D *)0x0) {
                                auVar21._4_4_ = puStack_20;
                                auVar21._0_4_ = fStack_10;
                                auVar21._8_4_ = (float)iVar19;
                                auVar21._12_4_ = 0;
                                UnityEngine.CoreModule.dll::UnityEngine::Texture2D::
                                Texture2D_ReadPixels_1
                                          (this_03,(Rect)(auVar21 << 0x20),0,0,(MethodInfo *)0x0);
                                UnityEngine.CoreModule.dll::UnityEngine::Texture2D::
                                Texture2D_Apply_1(this_03,(MethodInfo *)0x0);
                                pCVar6 = (this->fields).pictureCamera;
                                if (pCVar6 != (Camera *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                  Camera_set_targetTexture
                                            (pCVar6,(RenderTexture *)0x0,(MethodInfo *)0x0);
                                  pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                           RenderTexture_get_active((MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture_set_active((RenderTexture *)0x0,(MethodInfo *)0x0);
                                  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                                  RenderTexture_ReleaseTemporary(pRVar7,(MethodInfo *)0x0);
                                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)this,(MethodInfo *)0x0);
                                  if (pTVar8 != (Transform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_parent(pTVar8,(Transform *)0x0,(MethodInfo *)0x0)
                                    ;
                                    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_transform
                                                        ((Component *)this,(MethodInfo *)0x0);
                                    if (pTVar8 != (Transform *)0x0) {
                                      value_01.z = fVar12;
                                      value_01.x = (float)(int)uVar11;
                                      value_01.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_position(pTVar8,value_01,(MethodInfo *)0x0);
                                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_transform
                                                          ((Component *)this,(MethodInfo *)0x0);
                                      if (pTVar8 != (Transform *)0x0) {
                                        value_02.y = (float)pTVar18;
                                        value_02.x = fVar14;
                                        value_02.z = fVar16;
                                        value_02.w = fVar17;
                                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_set_rotation(pTVar8,value_02,(MethodInfo *)0x0);
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
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* AvatarPictureTakerUGUI() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI__ctor
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  (this->fields).previewResolution = 0x80;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

