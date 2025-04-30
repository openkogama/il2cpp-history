
/* Void Activate() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Activate(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_sunMatrix);
    func_?(&StringLiteral_moonMatrix);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pSVar2 = (pMVar1->fields).skybox, pSVar2 != (Skybox *)0x0)) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                       (pSVar2,(MethodInfo *)0x0);
    ppMVar4 = &(this->fields).previousSkyboxMaterial;
    *ppMVar4 = pMVar3;
    func_?(ppMVar4,pMVar3);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar1 != (MainCameraManager *)0x0) &&
       (pSVar2 = (pMVar1->fields).skybox, pSVar2 != (Skybox *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                (pSVar2,(this->fields).skyboxMaterial,(MethodInfo *)0x0);
      pFVar5 = (this->fields)._sun;
      pMVar3 = (this->fields).skyboxMaterial;
      if ((pFVar5 != (FlareLight *)0x0) && (pLVar6 = (pFVar5->fields).light, pLVar6 != (Light *)0x0)
         ) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pLVar6,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_get_worldToLocalMatrix
                              ((Matrix4x4 *)&stack0xffffffac,pTVar7,(MethodInfo *)0x0);
          if (pMVar3 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                      (pMVar3,StringLiteral_sunMatrix,*pMVar8,(MethodInfo *)0x0);
            pFVar5 = (this->fields)._moon;
            pMVar3 = (this->fields).skyboxMaterial;
            if ((pFVar5 != (FlareLight *)0x0) &&
               (pLVar6 = (pFVar5->fields).light, pLVar6 != (Light *)0x0)) {
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pLVar6,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_worldToLocalMatrix
                                    ((Matrix4x4 *)&stack0xffffffac,pTVar7,(MethodInfo *)0x0);
                if (pMVar3 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                            (pMVar3,StringLiteral_moonMatrix,*pMVar8,(MethodInfo *)0x0);
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                     ((MethodInfo *)0x0);
                  if ((pMVar1 != (MainCameraManager *)0x0) &&
                     (pCVar9 = (pMVar1->fields).mainCamera, pCVar9 != (Camera *)0x0)) {
                    CVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_clearFlags
                                       (pCVar9,(MethodInfo *)0x0);
                    (this->fields).previousClearFlags = CVar10;
                    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                       ((MethodInfo *)0x0);
                    if ((pMVar1 != (MainCameraManager *)0x0) &&
                       (pCVar9 = (pMVar1->fields).mainCamera, pCVar9 != (Camera *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                                (pCVar9,CameraClearFlags__Enum_Skybox,(MethodInfo *)0x0);
                      pFVar5 = (this->fields)._sun;
                      if (pFVar5 != (FlareLight *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)pFVar5,1,(MethodInfo *)0x0);
                        pFVar5 = (this->fields)._moon;
                        if (pFVar5 != (FlareLight *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)pFVar5,1,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_fog((this->fields).fogEnabled,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_fogMode
                                    (FogMode__Enum_ExponentialSquared,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_fogStartDistance
                                    ((this->fields).fogStartDist,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_fogEndDistance
                                    ((this->fields).fogEndDist,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_fogDensity((this->fields).fogDensity,(MethodInfo *)0x0)
                          ;
                          fVar11 = (this->fields)._exposure;
                          value.g = (this->fields)._bottomColor.g * fVar11;
                          value.r = (this->fields)._bottomColor.r * fVar11;
                          value.b = (this->fields)._bottomColor.b * fVar11;
                          value.a = 1.0;
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_fogColor(value,(MethodInfo *)0x0);
                          fVar11 = (this->fields)._exposure;
                          value_00.g = (this->fields)._bottomColor.g * fVar11;
                          value_00.r = (this->fields)._bottomColor.r * fVar11;
                          value_00.b = (this->fields)._bottomColor.b * fVar11;
                          value_00.a = (this->fields)._bottomColor.a * fVar11;
                          UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                          RenderSettings_set_ambientLight(value_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ApplyRenderSettings() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_ApplyRenderSettings
               (ThemeSkybox *this,MethodInfo *method)

{
  pTVar1 = this;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fog
            ((this->fields).fogEnabled,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogMode
            (FogMode__Enum_ExponentialSquared,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogStartDistance
            ((this->fields).fogStartDist,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogEndDistance
            ((this->fields).fogEndDist,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogDensity
            ((this->fields).fogDensity,(MethodInfo *)0x0);
  pTVar2 = &this->fields;
  pTVar3 = &this->fields;
  fVar4 = (this->fields)._exposure;
  puStack5 = (undefined *)0x0;
  this = (ThemeSkybox *)((this->fields)._bottomColor.b * fVar4);
  fVar6 = (pTVar3->_bottomColor).g * fVar4;
  method = (MethodInfo *)0x3f800000;
  CVar7.r = (pTVar2->_bottomColor).r * fVar4;
  CVar7 = (Color)CONCAT124(auVar8,CVar7.r);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (CVar7,(MethodInfo *)0x0);
  fVar4 = (pTVar1->fields)._exposure;
  CVar7.g = (pTVar1->fields)._bottomColor.g * fVar4;
  CVar7.r = (pTVar1->fields)._bottomColor.r * fVar4;
  CVar7.b = (pTVar1->fields)._bottomColor.b * fVar4;
  CVar7.a = (pTVar1->fields)._bottomColor.a * fVar4;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (CVar7,(MethodInfo *)0x0);
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Awake(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).skyboxMaterialSerialized;
  if (pTVar1 != (ThemeSkybox_PlatformSpecificMaterial *)0x0) {
    pMVar2 = (pTVar1->fields).skyboxMaterialStandalone;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pMVar2 = (Material *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pMVar2,
                        UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                       );
    (this->fields).skyboxMaterial = pMVar2;
    func_?();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Deactivate(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SkyboxManager);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar1->fields).skybox, this_00 != (Skybox *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
              (this_00,(this->fields).previousSkyboxMaterial,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar1 != (MainCameraManager *)0x0) &&
       (this_01 = (pMVar1->fields).mainCamera, this_01 != (Camera *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (this_01,(this->fields).previousClearFlags,(MethodInfo *)0x0);
      pFVar2 = (this->fields)._sun;
      if (pFVar2 != (FlareLight *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pFVar2,0,(MethodInfo *)0x0);
        pFVar2 = (this->fields)._moon;
        if (pFVar2 != (FlareLight *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pFVar2,0,(MethodInfo *)0x0);
          if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          SkyboxManager::SkyboxManager_ResetAmbientLight((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_OnDestroy(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = (this->fields).skyboxMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void RecalculateFogColor() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateFogColor
               (ThemeSkybox *this,MethodInfo *method)

{
  fVar1 = (this->fields)._exposure;
  value.g = (this->fields)._bottomColor.g * fVar1;
  value.r = (this->fields)._bottomColor.r * fVar1;
  value.b = (this->fields)._bottomColor.b * fVar1;
  value.a = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (value,(MethodInfo *)0x0);
  return;
}


/* Void RecalculateMoonLight() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateMoonLight
               (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    pLVar2 = (pFVar1->fields).light;
    fVar3 = (this->fields)._moonLightContrast;
    fVar4 = _UNK_? - fVar3;
    if (pLVar2 != (Light *)0x0) {
      value.g = fVar4 + (this->fields)._moonTint.g * fVar3;
      value.r = fVar4 + (this->fields)._moonTint.r * fVar3;
      value.b = fVar4 + (this->fields)._moonTint.b * fVar3;
      value.a = fVar4 + (this->fields)._moonTint.a * fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                (pLVar2,value,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._moon;
      if (pFVar1 != (FlareLight *)0x0) {
        pLVar2 = (pFVar1->fields).light;
        this_00 = (this->fields).lightIntensityByEmitterHeight;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,(this->fields).moonAngle / _UNK_? -
                                     (this->fields)._cloudsHeight,(MethodInfo *)0x0);
          if (pLVar2 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                      (pLVar2,fVar3 * (this->fields)._moonLightIntensity,(MethodInfo *)0x0);
            pFVar1 = (this->fields)._moon;
            if (pFVar1 != (FlareLight *)0x0) {
              pLVar5 = (pFVar1->fields).lensFlare;
              pLVar2 = (pFVar1->fields).light;
              if (pLVar2 != (Light *)0x0) {
                fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                                  (pLVar2,(MethodInfo *)0x0);
                if (pLVar5 != (LensFlare *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                            (pLVar5,fVar3 * (this->fields)._moonFlareBrightness,(MethodInfo *)0x0);
                  pFVar1 = (this->fields)._moon;
                  if ((pFVar1 != (FlareLight *)0x0) &&
                     (pLVar5 = (pFVar1->fields).lensFlare, pLVar5 != (LensFlare *)0x0)) {
                    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                            LensFlare_get_brightness(pLVar5,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    fVar4 = (float)((uint)fVar3 & _UNK_?);
                    if (fVar4 <= 0.0) {
                      fVar4 = 0.0;
                    }
                    fVar6 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
                    fVar7 = fVar4 * _UNK_?;
                    if (fVar4 * _UNK_? <= fVar6) {
                      fVar7 = fVar6;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pLVar5,
                               fVar7 <= (float)((uint)(0.0 - fVar3) & _UNK_?),
                               (MethodInfo *)0x0);
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RecalculateSunLight() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateSunLight
               (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    pLVar2 = (pFVar1->fields).light;
    fVar3 = (this->fields)._sunLightContrast;
    fVar4 = _UNK_? - fVar3;
    if (pLVar2 != (Light *)0x0) {
      value.g = fVar4 + (this->fields)._sunTint.g * fVar3;
      value.r = fVar4 + (this->fields)._sunTint.r * fVar3;
      value.b = fVar4 + (this->fields)._sunTint.b * fVar3;
      value.a = fVar4 + (this->fields)._sunTint.a * fVar3;
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                (pLVar2,value,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._sun;
      if (pFVar1 != (FlareLight *)0x0) {
        pLVar2 = (pFVar1->fields).light;
        this_00 = (this->fields).lightIntensityByEmitterHeight;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,(this->fields).sunAngle / _UNK_? -
                                     (this->fields)._cloudsHeight,(MethodInfo *)0x0);
          if (pLVar2 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                      (pLVar2,fVar3 * (this->fields)._sunLightIntensity,(MethodInfo *)0x0);
            pFVar1 = (this->fields)._sun;
            if (pFVar1 != (FlareLight *)0x0) {
              pLVar5 = (pFVar1->fields).lensFlare;
              pLVar2 = (pFVar1->fields).light;
              if (pLVar2 != (Light *)0x0) {
                fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                                  (pLVar2,(MethodInfo *)0x0);
                if (pLVar5 != (LensFlare *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                            (pLVar5,fVar3 * (this->fields)._sunFlareBrightness,(MethodInfo *)0x0);
                  pFVar1 = (this->fields)._sun;
                  if ((pFVar1 != (FlareLight *)0x0) &&
                     (pLVar5 = (pFVar1->fields).lensFlare, pLVar5 != (LensFlare *)0x0)) {
                    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                            LensFlare_get_brightness(pLVar5,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    fVar4 = (float)((uint)fVar3 & _UNK_?);
                    if (fVar4 <= 0.0) {
                      fVar4 = 0.0;
                    }
                    fVar6 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
                    fVar7 = fVar4 * _UNK_?;
                    if (fVar4 * _UNK_? <= fVar6) {
                      fVar7 = fVar6;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pLVar5,
                               fVar7 <= (float)((uint)(0.0 - fVar3) & _UNK_?),
                               (MethodInfo *)0x0);
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* ThemeSkybox() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox__ctor(ThemeSkybox *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._topColor.r = _UNK_?;
  (this->fields)._topColor.g = fVar3;
  (this->fields)._topColor.b = fVar2;
  (this->fields)._topColor.a = fVar1;
  (this->fields).fogStartDist = 10.0;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._bottomColor.r = _UNK_?;
  (this->fields)._bottomColor.g = fVar3;
  (this->fields)._bottomColor.b = fVar2;
  (this->fields)._bottomColor.a = fVar1;
  (this->fields).fogEndDist = 100.0;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._starsTint.r = _UNK_?;
  (this->fields)._starsTint.g = fVar3;
  (this->fields)._starsTint.b = fVar2;
  (this->fields)._starsTint.a = fVar1;
  (this->fields)._starsExtinction = 2.0;
  fVar4 = _UNK_?;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._starsTwinklingSpeed = 4.0;
  (this->fields)._sunTint.r = fVar3;
  (this->fields)._sunTint.g = fVar2;
  (this->fields)._sunTint.b = fVar1;
  (this->fields)._sunTint.a = fVar4;
  (this->fields)._sunSize = 1.0;
  fVar4 = _UNK_?;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._sunFlareBrightness = 0.3;
  (this->fields)._sunLightContrast = 0.5;
  (this->fields)._sunLightIntensity = 1.0;
  (this->fields)._moonTint.r = fVar3;
  (this->fields)._moonTint.g = fVar2;
  (this->fields)._moonTint.b = fVar1;
  (this->fields)._moonTint.a = fVar4;
  (this->fields)._moonSize = 1.0;
  (this->fields)._moonFlareBrightness = 0.3;
  (this->fields)._moonLightContrast = 0.5;
  (this->fields)._moonLightIntensity = 1.0;
  (this->fields)._cloudsOffset = 0.2;
  (this->fields)._cloudsRotationSpeed = 1.0;
  (this->fields)._exposure = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Camera get_Camera() */

Camera * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_Camera
                   (ThemeSkybox *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    return (pMVar1->fields).mainCamera;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Camera *)(*pcVar4)();
  return pCVar5;
}


/* LensFlare get_MoonFlare() */

LensFlare *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonFlare(ThemeSkybox *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pFVar2 = (this->fields)._moon;
  if (pFVar2 != (FlareLight *)0x0) {
    return (pFVar2->fields).lensFlare;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pLVar6 = (LensFlare *)(*pcVar5)();
  return pLVar6;
}


/* Single get_MoonFlareBrightness() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonFlareBrightness
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._moonFlareBrightness;
}


/* Single get_MoonLightContrast() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonLightContrast
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._moonLightContrast;
}


/* Quaternion get_MoonRotation() */

Quaternion *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonRotation
          (Quaternion *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields)._sun;
  if (this_00 != (FlareLight *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->y;
      fVar3 = pQVar1->z;
      fVar4 = pQVar1->w;
      __return_storage_ptr__->x = pQVar1->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      __return_storage_ptr__->w = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar5)();
  return pQVar1;
}


/* Skybox get_Skybox() */

Skybox * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_Skybox
                   (ThemeSkybox *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    return (pMVar1->fields).skybox;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pSVar5 = (Skybox *)(*pcVar4)();
  return pSVar5;
}


/* Single get_StarsTwinklingSpeed() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_StarsTwinklingSpeed
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._starsTwinklingSpeed;
}


/* LensFlare get_SunFlare() */

LensFlare *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunFlare(ThemeSkybox *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pFVar2 = (this->fields)._sun;
  if (pFVar2 != (FlareLight *)0x0) {
    return (pFVar2->fields).lensFlare;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pLVar6 = (LensFlare *)(*pcVar5)();
  return pLVar6;
}


/* Light get_SunLight() */

Light * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunLight
                  (ThemeSkybox *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pFVar2 = (this->fields)._sun;
  if (pFVar2 != (FlareLight *)0x0) {
    return (pFVar2->fields).light;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pLVar6 = (Light *)(*pcVar5)();
  return pLVar6;
}


/* Single get_SunLightIntensity() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunLightIntensity
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._sunLightIntensity;
}


/* Void set_BottomColor(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_BottomColor
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__BottomColor);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._bottomColor.r = value.r;
  (this->fields)._bottomColor.g = value.g;
  (this->fields)._bottomColor.b = value.b;
  (this->fields)._bottomColor.a = value.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__BottomColor,(Vector4)value,(MethodInfo *)0x0);
    fVar1 = (this->fields)._exposure;
    method_00 = (MethodInfo *)((this->fields)._bottomColor.b * fVar1);
    value_00.g = (this->fields)._bottomColor.g * fVar1;
    value_00.r = (this->fields)._bottomColor.r * fVar1;
    value_00.b = (float)method_00;
    value_00.a = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
              (value_00,method_00);
    fStack2 = (this->fields)._bottomColor.b;
    fStack3 = (this->fields)._bottomColor.a;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
              ((this->fields)._bottomColor,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_CloudsHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__CloudsHeight);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._cloudsHeight = value;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__CloudsHeight,value,(MethodInfo *)0x0);
    ThemeSkybox_RecalculateMoonLight(this,(MethodInfo *)0x0);
    ThemeSkybox_RecalculateSunLight(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CloudsOffset(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsOffset
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._cloudsOffset = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__CloudsOffset,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_CloudsRotationSpeed(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsRotationSpeed
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._cloudsRotationSpeed = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__CloudsRotationSpeed,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Exposure(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_Exposure
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__Exposure);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._exposure = value;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__Exposure,value,(MethodInfo *)0x0);
    fVar1 = (this->fields)._exposure;
    CVar2.g = (this->fields)._bottomColor.g * fVar1;
    CVar2.r = (this->fields)._bottomColor.r * fVar1;
    CVar2.b = (this->fields)._bottomColor.b * fVar1;
    CVar2.a = (this->fields)._bottomColor.a * fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
              (CVar2,(MethodInfo *)0x0);
    pTVar3 = &this->fields;
    fVar1 = (this->fields)._exposure;
    _fStack_8 = CONCAT44((this->fields)._bottomColor.g * fVar1,(this->fields)._bottomColor.r * fVar1
                        );
    this = (ThemeSkybox *)0x3f800000;
    fVar4 = (pTVar3->_bottomColor).b * fVar1;
    CVar2 = (Color)CONCAT88(uVar5,_fStack_8);
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
              (CVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void set_FogDensity(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogDensity
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields).fogDensity = value;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogDensity
            (value,(MethodInfo *)0x0);
  return;
}


/* Void set_FogEnabled(Boolean) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogEnabled
               (ThemeSkybox *this,bool value,MethodInfo *method)

{
  (this->fields).fogEnabled = value;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fog
            (value,(MethodInfo *)0x0);
  return;
}


/* Void set_FogEndDistance(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogEndDistance
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields).fogEndDist = value;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogEndDistance
            (value,(MethodInfo *)0x0);
  return;
}


/* Void set_FogStartDistance(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogStartDistance
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields).fogStartDist = value;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogStartDistance
            (value,(MethodInfo *)0x0);
  return;
}


/* Void set_MoonAxisDegrees(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonAxisDegrees
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_moonMatrix);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      uVar5 = pVVar3->x;
      fVar6 = pVVar3->z;
      pFVar1 = (this->fields)._moon;
      uStack_7 = CONCAT44(value,uVar5);
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          value_00.z = fVar6;
          value_00.x = (float)(undefined4)uStack_7;
          value_00.y = (float)uStack_7._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar2,value_00,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._moon;
          this_00 = (this->fields).skyboxMaterial;
          if (pFVar1 != (FlareLight *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pFVar1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_worldToLocalMatrix
                                 ((Matrix4x4 *)&stack0xffffffa4,pTVar2,(MethodInfo *)0x0);
              if (this_00 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                          (this_00,StringLiteral_moonMatrix,*pMVar8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_MoonFlareBrightness(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonFlareBrightness
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._moonFlareBrightness = value;
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    this_00 = (pFVar1->fields).lensFlare;
    this_01 = (pFVar1->fields).light;
    if (this_01 != (Light *)0x0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                        (this_01,(MethodInfo *)0x0);
      if (this_00 != (LensFlare *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                  (this_00,fVar2 * value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_MoonHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_moonMatrix);
    cRam_? = '\x01';
  }
  fVar1 = value * _UNK_?;
  fVar2 = _UNK_?;
  if ((_UNK_? <= fVar1) && (fVar2 = fVar1, _UNK_? < fVar1)) {
    fVar2 = _UNK_?;
  }
  pFVar3 = (this->fields)._moon;
  (this->fields).moonAngle = fVar2;
  if ((pFVar3 != (FlareLight *)0x0) &&
     (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_6,pTVar4,(MethodInfo *)0x0);
    uVar7 = pVVar5->y;
    fVar2 = pVVar5->z;
    pFVar3 = (this->fields)._moon;
    uStack_8 = CONCAT44(uVar7,(this->fields).moonAngle);
    if ((pFVar3 != (FlareLight *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      value_00.z = fVar2;
      value_00.x = (float)(undefined4)uStack_8;
      value_00.y = (float)uStack_8._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                (pTVar4,value_00,(MethodInfo *)0x0);
      pFVar3 = (this->fields)._moon;
      this_00 = (this->fields).skyboxMaterial;
      if (((pFVar3 != (FlareLight *)0x0) &&
          (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
         && (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xffffffa4,pTVar4,(MethodInfo *)0x0),
            this_00 != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral_moonMatrix,*pMVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_MoonLightContrast(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonLightContrast
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._moonLightContrast = value;
  ThemeSkybox_RecalculateMoonLight(this,(MethodInfo *)0x0);
  return;
}


/* Void set_MoonLightIntensity(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonLightIntensity
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._moonLightIntensity = value;
  ThemeSkybox_RecalculateMoonLight(this,(MethodInfo *)0x0);
  return;
}


/* Void set_MoonRotation(Quaternion) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonRotation
               (ThemeSkybox *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_moonMatrix);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,value,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._moon;
      this_00 = (this->fields).skyboxMaterial;
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_get_worldToLocalMatrix
                             ((Matrix4x4 *)&stack0xffffffbc,pTVar2,(MethodInfo *)0x0);
          if (this_00 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                      (this_00,StringLiteral_moonMatrix,*pMVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_MoonSize(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonSize
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._moonSize = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__MoonSize,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MoonTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonTint
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._moonTint.r = value.r;
  (this->fields)._moonTint.g = value.g;
  (this->fields)._moonTint.b = value.b;
  (this->fields)._moonTint.a = value.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__MoonTint,(Vector4)value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_StarsExtinction(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsExtinction
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._starsExtinction = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__StarsExtinction,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_StarsTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsTint
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._starsTint.r = value.r;
  (this->fields)._starsTint.g = value.g;
  (this->fields)._starsTint.b = value.b;
  (this->fields)._starsTint.a = value.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__StarsTint,(Vector4)value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_StarsTwinklingSpeed(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsTwinklingSpeed
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._starsTwinklingSpeed = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__StarsTwinklingSpeed,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SunAxisDegrees(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunAxisDegrees
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_sunMatrix);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      uVar5 = pVVar3->x;
      fVar6 = pVVar3->z;
      pFVar1 = (this->fields)._sun;
      uStack_7 = CONCAT44(value,uVar5);
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          value_00.z = fVar6;
          value_00.x = (float)(undefined4)uStack_7;
          value_00.y = (float)uStack_7._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar2,value_00,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._sun;
          this_00 = (this->fields).skyboxMaterial;
          if (pFVar1 != (FlareLight *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pFVar1,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_worldToLocalMatrix
                                 ((Matrix4x4 *)&stack0xffffffa4,pTVar2,(MethodInfo *)0x0);
              if (this_00 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                          (this_00,StringLiteral_sunMatrix,*pMVar8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_SunFlareBrightness(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunFlareBrightness
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._sunFlareBrightness = value;
  ThemeSkybox_RecalculateSunLight(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SunHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_sunMatrix);
    cRam_? = '\x01';
  }
  fVar1 = value * _UNK_?;
  fVar2 = _UNK_?;
  if ((_UNK_? <= fVar1) && (fVar2 = fVar1, _UNK_? < fVar1)) {
    fVar2 = _UNK_?;
  }
  pFVar3 = (this->fields)._sun;
  (this->fields).sunAngle = fVar2;
  if ((pFVar3 != (FlareLight *)0x0) &&
     (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_6,pTVar4,(MethodInfo *)0x0);
    uVar7 = pVVar5->y;
    fVar2 = pVVar5->z;
    pFVar3 = (this->fields)._sun;
    uStack_8 = CONCAT44(uVar7,(this->fields).sunAngle);
    if ((pFVar3 != (FlareLight *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      value_00.z = fVar2;
      value_00.x = (float)(undefined4)uStack_8;
      value_00.y = (float)uStack_8._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                (pTVar4,value_00,(MethodInfo *)0x0);
      pFVar3 = (this->fields)._sun;
      this_00 = (this->fields).skyboxMaterial;
      if (((pFVar3 != (FlareLight *)0x0) &&
          (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0))
         && (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xffffffa4,pTVar4,(MethodInfo *)0x0),
            this_00 != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral_sunMatrix,*pMVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_SunLightContrast(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunLightContrast
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._sunLightContrast = value;
  ThemeSkybox_RecalculateSunLight(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SunLightIntensity(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunLightIntensity
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._sunLightIntensity = value;
  ThemeSkybox_RecalculateSunLight(this,(MethodInfo *)0x0);
  return;
}


/* Void set_SunRotation(Quaternion) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunRotation
               (ThemeSkybox *this,Quaternion value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_sunMatrix);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,value,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._sun;
      this_00 = (this->fields).skyboxMaterial;
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_get_worldToLocalMatrix
                             ((Matrix4x4 *)&stack0xffffffbc,pTVar2,(MethodInfo *)0x0);
          if (this_00 != (Material *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                      (this_00,StringLiteral_sunMatrix,*pMVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_SunSize(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunSize
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields)._sunSize = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__SunSize,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SunTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunTint
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._sunTint.r = value.r;
  (this->fields)._sunTint.g = value.g;
  (this->fields)._sunTint.b = value.b;
  (this->fields)._sunTint.a = value.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__SunTint,(Vector4)value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_TopColor(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_TopColor
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._topColor.r = value.r;
  (this->fields)._topColor.g = value.g;
  (this->fields)._topColor.b = value.b;
  (this->fields)._topColor.a = value.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__TopColor,(Vector4)value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

