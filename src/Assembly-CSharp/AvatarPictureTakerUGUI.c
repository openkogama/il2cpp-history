
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
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI_OnPostRender
               (AvatarPictureTakerUGUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isCurrentAvatarBody != 0) {
    return;
  }
  pGVar1 = (this->fields)._avatarCloneGO;
  if (pGVar1 != (GameObject *)0x0) {
    source = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_20
                       (pGVar1,1,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                       );
    this_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source,
                         System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                        );
    if (TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache2 ==
        (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__AvatarPictureTakerUGUI___OnPostRender_m__2_UnityEngine__MeshRenderer_,
                 MethodInfo__System__Action<UnityEngine::MeshRenderer>__Action_System__Object__void__
                );
      TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache2 =
           (Action_1_UnityEngine_MeshRenderer_ *)this_01;
    }
    if (this_00 != (List_1_UseInteractor_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::GameObject]::
      List_1_UnityEngine_GameObject__ForEach
                ((List_1_UnityEngine_GameObject_ *)this_00,
                 (Action_1_UnityEngine_GameObject_ *)
                 TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache2,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                );
      pGVar1 = (this->fields)._avatarCloneGO;
      if (pGVar1 != (GameObject *)0x0) {
        t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._avatarCloneGO;
  if (pGVar1 != (GameObject *)0x0) {
    t = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                  (pGVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._avatarCloneGO;
    if (pGVar1 != (GameObject *)0x0) {
      source = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_20
                         (pGVar1,1,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                         );
      this_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)source,
                           System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                          );
      if (TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache1 ==
          (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
        this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_01,(Object *)0x0,
                   MethodInfo__AvatarPictureTakerUGUI___OnPreCull_m__1_UnityEngine__MeshRenderer_,
                   MethodInfo__System__Action<UnityEngine::MeshRenderer>__Action_System__Object__void__
                  );
        TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache1 =
             (Action_1_UnityEngine_MeshRenderer_ *)this_01;
      }
      if (this_00 != (List_1_UseInteractor_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::GameObject]::
        List_1_UnityEngine_GameObject__ForEach
                  ((List_1_UnityEngine_GameObject_ *)this_00,
                   (Action_1_UnityEngine_GameObject_ *)
                   TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache1,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isCurrentAvatarBody = isCurrentBody;
  if (avatar == (MVWorldObjectClient *)0x0) goto code_?;
  this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                      ((DayNightCycle *)avatar,(MethodInfo *)0x0);
  (this->fields)._avatarCloneGO = (GameObject *)this_00;
  if (isCurrentBody == 0) {
    if (this_00 == (CelestialParam *)0x0) goto code_?;
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this_00,
                        AvatarAccessoryParticles__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessoryParticles>______
                       );
    uVar2 = 0;
    if (pUVar1 == (UseInteratorVisualization__Array *)0x0) goto code_?;
    ppUVar3 = pUVar1->vector;
    for (; (int)uVar2 < (int)pUVar1->max_length; uVar2 = uVar2 + 1) {
      if (pUVar1->max_length <= uVar2) goto code_?;
      if (((AvatarAccessoryParticles *)*ppUVar3 == (AvatarAccessoryParticles *)0x0) ||
         (this_01 = AvatarAccessoryParticles::AvatarAccessoryParticles_get_RootParticleSystem
                              ((AvatarAccessoryParticles *)*ppUVar3,(MethodInfo *)0x0),
         this_01 == (ParticleSystem *)0x0)) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Simulate_2
                (this_01,1.0,1,(MethodInfo *)0x0);
      ppUVar3 = ppUVar3 + 1;
    }
    pGVar4 = (this->fields)._avatarCloneGO;
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    this_02 = (BoneAnimation *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        (pGVar4,
                         BoneAnimation_MethodInfo__UnityEngine__GameObject__GetComponent<BoneAnimation>__
                        );
    (this->fields)._boneAnimation = this_02;
    if (this_02 == (BoneAnimation *)0x0) goto code_?;
    BoneAnimation::BoneAnimation_PlayAndPauseAt(this_02,StringLiteral_Idle,0.01,(MethodInfo *)0x0);
  }
  pCVar5 = (this->fields).pictureCamera;
  if (pCVar5 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (pCVar5,0x84100,(MethodInfo *)0x0);
    pCVar5 = (this->fields).pictureCamera;
    if (pCVar5 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_aspect
                (pCVar5,1.0,(MethodInfo *)0x0);
      pCVar5 = (this->fields).pictureCamera;
      if (pCVar5 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pCVar5,1,(MethodInfo *)0x0);
        iVar6 = (this->fields).previewResolution;
        value_01 = UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                   RenderTexture_GetTemporary_2(iVar6,iVar6,0x10,(MethodInfo *)0x0);
        if (value_01 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                    ((Texture *)value_01,FilterMode__Enum_Bilinear,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)value_01,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          pCVar5 = (this->fields).pictureCamera;
          if (pCVar5 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_targetTexture
                      (pCVar5,value_01,(MethodInfo *)0x0);
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition((Vector3 *)&fStack_9,pTVar7,(MethodInfo *)0x0);
              uVar10._0_4_ = pVVar8->x;
              uVar10._4_4_ = pVVar8->y;
              fVar11 = pVVar8->z;
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localRotation
                                    ((Quaternion *)&stack0xffffffd4,pTVar7,(MethodInfo *)0x0);
                fVar13 = pQVar12->x;
                fVar14 = pQVar12->y;
                fVar15 = pQVar12->z;
                fVar16 = pQVar12->w;
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                pGVar4 = (this->fields)._avatarCloneGO;
                if ((pGVar4 != (GameObject *)0x0) &&
                   (value_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                   pTVar7 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                            (pTVar7,value_02,(MethodInfo *)0x0);
                  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  if (pTVar7 != (Transform *)0x0) {
                    value.z = fVar11;
                    value.x = (float)(int)uVar10;
                    value.y = (float)(int)((ulonglong)uVar10 >> 0x20);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar7,value,(MethodInfo *)0x0);
                    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                    if (pTVar7 != (Transform *)0x0) {
                      value_00.y = fVar14;
                      value_00.x = fVar13;
                      value_00.z = fVar15;
                      value_00.w = fVar16;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localRotation(pTVar7,value_00,(MethodInfo *)0x0);
                      pGVar4 = (this->fields)._avatarCloneGO;
                      if (pGVar4 != (GameObject *)0x0) {
                        source = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_GetComponentsInChildren_20
                                           (pGVar4,1,
                                            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>_bool_____
                                           );
                        this_03 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                                            ((IEnumerable_1_UseInteractor_ *)source,
                                             System__Collections__Generic__List<UnityEngine::MeshRenderer>_MethodInfo__System__Linq__Enumerable__ToList<UnityEngine::MeshRenderer>_System__Collections__Generic__IEnumerable<UnityEngine::MeshRenderer>_
                                            );
                        if (TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache0 ==
                            (Action_1_UnityEngine_MeshRenderer_ *)0x0) {
                          this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                     *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (this_04,(Object *)0x0,
                                     MethodInfo__AvatarPictureTakerUGUI___TakePicture_m__0_UnityEngine__MeshRenderer_
                                     ,
                                     MethodInfo__System__Action<UnityEngine::MeshRenderer>__Action_System__Object__void__
                                    );
                          TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache0 =
                               (Action_1_UnityEngine_MeshRenderer_ *)this_04;
                        }
                        if (this_03 != (List_1_UseInteractor_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          GameObject]::List_1_UnityEngine_GameObject__ForEach
                                    ((List_1_UnityEngine_GameObject_ *)this_03,
                                     (Action_1_UnityEngine_GameObject_ *)
                                     TypeInfo__AvatarPictureTakerUGUI->static_fields->__f__am_cache0
                                     ,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__ForEach_System__Action<UnityEngine::MeshRenderer>_
                                    );
                          pCVar5 = (this->fields).pictureCamera;
                          if (pCVar5 != (Camera *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render
                                      (pCVar5,(MethodInfo *)0x0);
                            pCVar5 = (this->fields).pictureCamera;
                            if (pCVar5 != (Camera *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)pCVar5,0,(MethodInfo *)0x0);
                              iVar6 = (this->fields).previewResolution;
                              this_05 = (Texture2D *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
                                        (this_05,iVar6,iVar6,TextureFormat__Enum_ARGB32,0,
                                         (MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::
                              RenderTexture_set_active(value_01,(MethodInfo *)0x0);
                              (*(code *)(value_01->klass->vtable).get_width.method)(value_01);
                              (*(code *)(value_01->klass->vtable).get_height.method)
                                        (value_01,(value_01->klass->vtable).set_height.methodPtr);
                              fStack_9 = 0.0;
                              func_?();
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
  func_?(0);
code_?:
  uVar17 = func_?(0,0);
  func_?(uVar17);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void <OnPostRender>m__2(MeshRenderer) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI__OnPostRender_m__2
               (MeshRenderer *mr,MethodInfo *method)

{
  if (mr != (MeshRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)mr,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPreCull>m__1(MeshRenderer) */

void Assembly-CSharp.dll::AvatarPictureTakerUGUI::AvatarPictureTakerUGUI__OnPreCull_m__1
               (MeshRenderer *mr,MethodInfo *method)

{
  if (mr != (MeshRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              ((Renderer *)mr,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

