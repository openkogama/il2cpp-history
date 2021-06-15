
/* Void Activate() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Activate(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = ThemeSkybox_get_Skybox(this,(MethodInfo *)0x0);
  if (pSVar1 != (Skybox *)0x0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                       (pSVar1,(MethodInfo *)0x0);
    (this->fields).previousSkyboxMaterial = pMVar2;
    pSVar1 = ThemeSkybox_get_Skybox(this,(MethodInfo *)0x0);
    if (pSVar1 != (Skybox *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                (pSVar1,(this->fields).skyboxMaterial,(MethodInfo *)0x0);
      pFVar3 = (this->fields)._sun;
      pMVar2 = (this->fields).skyboxMaterial;
      if (pFVar3 != (FlareLight *)0x0) {
        pCVar4 = (Component_1 *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pFVar3,
                            (MethodInfo *)0x0);
        if (pCVar4 != (Component_1 *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             (pCVar4,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_worldToLocalMatrix
                                ((Matrix4x4 *)&stack0xffffffac,pTVar5,(MethodInfo *)0x0);
            if (pMVar2 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                        (pMVar2,StringLiteral_sunMatrix,*pMVar6,(MethodInfo *)0x0);
              pFVar3 = (this->fields)._moon;
              pMVar2 = (this->fields).skyboxMaterial;
              if (pFVar3 != (FlareLight *)0x0) {
                pCVar4 = (Component_1 *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pFVar3,(MethodInfo *)0x0);
                if (pCVar4 != (Component_1 *)0x0) {
                  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform(pCVar4,(MethodInfo *)0x0);
                  if (pTVar5 != (Transform *)0x0) {
                    pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_worldToLocalMatrix
                                        ((Matrix4x4 *)&stack0xffffffac,pTVar5,(MethodInfo *)0x0);
                    if (pMVar2 != (Material *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                                (pMVar2,StringLiteral_moonMatrix,*pMVar6,(MethodInfo *)0x0);
                      pCVar7 = ThemeSkybox_get_Camera(this,(MethodInfo *)0x0);
                      if (pCVar7 != (Camera *)0x0) {
                        CVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                 Camera_get_clearFlags(pCVar7,(MethodInfo *)0x0);
                        (this->fields).previousClearFlags = CVar8;
                        pCVar7 = ThemeSkybox_get_Camera(this,(MethodInfo *)0x0);
                        if (pCVar7 != (Camera *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                                    (pCVar7,CameraClearFlags__Enum_Skybox,(MethodInfo *)0x0);
                          pFVar3 = (this->fields)._sun;
                          if (pFVar3 != (FlareLight *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                            Behaviour_set_enabled((Behaviour *)pFVar3,1,(MethodInfo *)0x0);
                            pFVar3 = (this->fields)._moon;
                            if (pFVar3 != (FlareLight *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)pFVar3,1,(MethodInfo *)0x0);
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
                              RenderSettings_set_fogDensity
                                        ((this->fields).fogDensity,(MethodInfo *)0x0);
                              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::
                                        Vector4_op_Multiply(&VStack_10,
                                                            (Vector4)(this->fields)._bottomColor,
                                                            (this->fields)._exposure,
                                                            (MethodInfo *)0x0);
                              VStack_10.x = pVVar9->x;
                              VStack_10.y = pVVar9->y;
                              VStack_10.z = pVVar9->z;
                              uVar11 = pVVar9->x;
                              uVar12 = pVVar9->y;
                              uVar13 = pVVar9->z;
                              value.b = (float)uVar13;
                              value.g = (float)uVar12;
                              value.r = (float)uVar11;
                              VStack_10.w = 1.0;
                              value.a = 1.0;
                              UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                              RenderSettings_set_fogColor(value,(MethodInfo *)0x0);
                              pCVar14 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::
                                                 Vector4_op_Multiply(&VStack_10,
                                                                     (Vector4)(this->fields).
                                                                              _bottomColor,
                                                                     (this->fields)._exposure,
                                                                     (MethodInfo *)0x0);
                              UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::
                              RenderSettings_set_ambientLight(*pCVar14,(MethodInfo *)0x0);
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


/* Void ApplyRenderSettings() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_ApplyRenderSettings
               (ThemeSkybox *this,MethodInfo *method)

{
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
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                     ((Vector4 *)&puStack_2,(Vector4)(this->fields)._bottomColor,
                      (this->fields)._exposure,(MethodInfo *)0x0);
  puStack_2 = (undefined *)pVVar1->x;
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  uVar5 = pVVar1->z;
  value.b = (float)uVar5;
  value.g = (float)uVar4;
  value.r = (float)uVar3;
  value.a = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (value,(MethodInfo *)0x0);
  pCVar6 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                              ((Vector4 *)&puStack_2,(Vector4)(this->fields)._bottomColor,
                               (this->fields)._exposure,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (*pCVar6,(MethodInfo *)0x0);
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Awake(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).skyboxMaterialSerialized;
  if (pTVar1 != (ThemeSkybox_PlatformSpecificMaterial *)0x0) {
    pXVar2 = (XpBoostParticlePreviewer *)(pTVar1->fields).skyboxMaterialStandalone;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                       );
    (this->fields).skyboxMaterial = (Material *)pXVar2;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Deactivate(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = ThemeSkybox_get_Skybox(this,(MethodInfo *)0x0);
  if (this_00 != (Skybox *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
              (this_00,(this->fields).previousSkyboxMaterial,(MethodInfo *)0x0);
    this_01 = ThemeSkybox_get_Camera(this,(MethodInfo *)0x0);
    if (this_01 != (Camera *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_clearFlags
                (this_01,(this->fields).previousClearFlags,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._sun;
      if (pFVar1 != (FlareLight *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pFVar1,0,(MethodInfo *)0x0);
        pFVar1 = (this->fields)._moon;
        if (pFVar1 != (FlareLight *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pFVar1,0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SkyboxManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SkyboxManager->_1).cctor_started == 0)) {
            func_?();
          }
          SkyboxManager::SkyboxManager_ResetAmbientLight((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_OnDestroy(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).skyboxMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                     (&VStack_2,(Vector4)(this->fields)._bottomColor,(this->fields)._exposure,
                      (MethodInfo *)0x0);
  VStack_2.x = pVVar1->x;
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  uVar5 = pVVar1->z;
  fVar6 = (float)uVar5;
  VStack_2.w = (float)uVar4;
  VStack_2.z = (float)uVar3;
  VStack_2.y = (float)&UNK_?;
  value.a = 1.0;
  value = (Color)CONCAT412(value.a,VStack_2._0_12_);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (value,(MethodInfo *)0x0);
  return;
}


/* Void RecalculateMoonLight() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateMoonLight
               (ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    pLVar2 = (Light *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pFVar1,
                                 (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
              ((Vector4 *)&stack0xffffffe8,(Vector4)(this->fields)._moonTint,
               (this->fields)._moonLightContrast,(MethodInfo *)0x0);
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                       ((Color *)&stack0xffffffd8,(MethodInfo *)0x0);
    d = _UNK_? - (this->fields)._moonLightContrast;
    fVar4 = pCVar3->g;
    fVar5 = pCVar3->b;
    fVar6 = pCVar3->a;
    pCVar3 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                                ((Vector4 *)&stack0xffffffd8,(Vector4)*pCVar3,d,(MethodInfo *)0x0);
    auVar7._4_4_ = fVar5;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = fVar6;
    a.a = d;
    a.r = fVar4;
    a.g = fVar5;
    a.b = fVar6;
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                       ((Color *)&stack0xffffffd8,a,*pCVar3,(MethodInfo *)0x0);
    if (pLVar2 != (Light *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                (pLVar2,*pCVar3,(MethodInfo *)0x0);
      auVar8._4_4_ = auVar7._8_4_;
      auVar8._0_4_ = (this->fields)._cloudsHeight;
      auVar8._8_4_ = 0;
      auVar8 = auVar8 << 0x20;
      fVar4 = (this->fields).moonAngle / _UNK_?;
      pFVar1 = (this->fields)._moon;
      if (pFVar1 != (FlareLight *)0x0) {
        pLVar2 = (Light *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pFVar1,(MethodInfo *)0x0);
        this_00 = (this->fields).lightIntensityByEmitterHeight;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,fVar4 - auVar8._4_4_,(MethodInfo *)0x0);
          if (pLVar2 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                      (pLVar2,(this->fields)._moonLightIntensity * fVar4,(MethodInfo *)0x0);
            pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)(this->fields)._moon;
            if (pSVar9 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)0x0) {
              pLVar10 = (LensFlare *)
                       System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 (pSVar9,(MethodInfo *)0x0);
              pFVar1 = (this->fields)._moon;
              if (pFVar1 != (FlareLight *)0x0) {
                pLVar2 = (Light *)mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                              *)pFVar1,(MethodInfo *)0x0);
                if (pLVar2 != (Light *)0x0) {
                  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                                    (pLVar2,(MethodInfo *)0x0);
                  if (pLVar10 != (LensFlare *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                              (pLVar10,(this->fields)._moonFlareBrightness * fVar4,(MethodInfo *)0x0)
                    ;
                    pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)(this->fields)._moon;
                    if (pSVar9 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)0x0) {
                      this_01 = (Behaviour *)
                                System.dll::System::Collections::Generic::
                                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                ::Single,System::Object]::
                                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                          (pSVar9,(MethodInfo *)0x0);
                      pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                *)(this->fields)._moon;
                      if (pSVar9 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                     *)0x0) {
                        pLVar10 = (LensFlare *)
                                 System.dll::System::Collections::Generic::
                                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                 ::Single,System::Object]::
                                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                           (pSVar9,(MethodInfo *)0x0);
                        if (pLVar10 != (LensFlare *)0x0) {
                          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                  LensFlare_get_brightness(pLVar10,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                            func_?();
                          }
                          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::
                                  Mathf_Approximately(fVar4,0.0,(MethodInfo *)0x0);
                          if (this_01 != (Behaviour *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                            Behaviour_set_enabled(this_01,bVar11 == 0,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RecalculateSunLight() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateSunLight
               (ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    pLVar2 = (Light *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pFVar1,
                                 (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
              ((Vector4 *)&stack0xffffffe8,(Vector4)(this->fields)._sunTint,
               (this->fields)._sunLightContrast,(MethodInfo *)0x0);
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_white
                       ((Color *)&stack0xffffffd8,(MethodInfo *)0x0);
    d = _UNK_? - (this->fields)._sunLightContrast;
    fVar4 = pCVar3->g;
    fVar5 = pCVar3->b;
    fVar6 = pCVar3->a;
    pCVar3 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                                ((Vector4 *)&stack0xffffffd8,(Vector4)*pCVar3,d,(MethodInfo *)0x0);
    auVar7._4_4_ = fVar5;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = fVar6;
    a.a = d;
    a.r = fVar4;
    a.g = fVar5;
    a.b = fVar6;
    pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_op_Addition
                       ((Color *)&stack0xffffffd8,a,*pCVar3,(MethodInfo *)0x0);
    if (pLVar2 != (Light *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                (pLVar2,*pCVar3,(MethodInfo *)0x0);
      auVar8._4_4_ = auVar7._8_4_;
      auVar8._0_4_ = (this->fields)._cloudsHeight;
      auVar8._8_4_ = 0;
      auVar8 = auVar8 << 0x20;
      fVar4 = (this->fields).sunAngle / _UNK_?;
      pFVar1 = (this->fields)._sun;
      if (pFVar1 != (FlareLight *)0x0) {
        pLVar2 = (Light *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     pFVar1,(MethodInfo *)0x0);
        this_00 = (this->fields).lightIntensityByEmitterHeight;
        if (this_00 != (AnimationCurve *)0x0) {
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                            (this_00,fVar4 - auVar8._4_4_,(MethodInfo *)0x0);
          if (pLVar2 != (Light *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                      (pLVar2,(this->fields)._sunLightIntensity * fVar4,(MethodInfo *)0x0);
            pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)(this->fields)._sun;
            if (pSVar9 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)0x0) {
              pLVar10 = (LensFlare *)
                       System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 (pSVar9,(MethodInfo *)0x0);
              pFVar1 = (this->fields)._sun;
              if (pFVar1 != (FlareLight *)0x0) {
                pLVar2 = (Light *)mscorlib.dll::System::Collections::ObjectModel::
                                  Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                              *)pFVar1,(MethodInfo *)0x0);
                if (pLVar2 != (Light *)0x0) {
                  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                                    (pLVar2,(MethodInfo *)0x0);
                  if (pLVar10 != (LensFlare *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                              (pLVar10,(this->fields)._sunFlareBrightness * fVar4,(MethodInfo *)0x0);
                    pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)(this->fields)._sun;
                    if (pSVar9 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                   *)0x0) {
                      this_01 = (Behaviour *)
                                System.dll::System::Collections::Generic::
                                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                ::Single,System::Object]::
                                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                          (pSVar9,(MethodInfo *)0x0);
                      pSVar9 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                *)(this->fields)._sun;
                      if (pSVar9 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                     *)0x0) {
                        pLVar10 = (LensFlare *)
                                 System.dll::System::Collections::Generic::
                                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                 ::Single,System::Object]::
                                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                           (pSVar9,(MethodInfo *)0x0);
                        if (pLVar10 != (LensFlare *)0x0) {
                          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                  LensFlare_get_brightness(pLVar10,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                            func_?();
                          }
                          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::
                                  Mathf_Approximately(fVar4,0.0,(MethodInfo *)0x0);
                          if (this_01 != (Behaviour *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                            Behaviour_set_enabled(this_01,bVar11 == 0,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ThemeSkybox() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox__ctor(ThemeSkybox *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  func_?(&fStack_1,0x3e7ced91,0x3ea2d0e5,0x3f0f9db2,0);
  (this->fields)._topColor.r = fStack_1;
  (this->fields)._topColor.g = fStack_2;
  (this->fields)._topColor.b = fStack_3;
  (this->fields)._topColor.a = fStack_4;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  func_?(&fStack_5,0x3f45e354,0x3ee8f5c3,0x3f2e978d,0);
  (this->fields).fogStartDist = 10.0;
  (this->fields)._bottomColor.r = fStack_5;
  (this->fields)._bottomColor.g = fStack_6;
  (this->fields)._bottomColor.b = fStack_7;
  (this->fields)._bottomColor.a = fStack_8;
  (this->fields).fogEndDist = 100.0;
  pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_10,(MethodInfo *)0x0);
  fVar11 = pCVar9->r;
  fVar12 = pCVar9->g;
  fVar13 = pCVar9->b;
  fVar14 = pCVar9->a;
  (this->fields)._starsExtinction = 2.0;
  (this->fields)._starsTint.r = fVar11;
  (this->fields)._starsTint.g = fVar12;
  (this->fields)._starsTint.b = fVar13;
  (this->fields)._starsTint.a = fVar14;
  (this->fields)._starsTwinklingSpeed = 4.0;
  pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_10,(MethodInfo *)0x0);
  fVar11 = pCVar9->r;
  fVar12 = pCVar9->g;
  fVar13 = pCVar9->b;
  fVar14 = pCVar9->a;
  (this->fields)._sunSize = 1.0;
  (this->fields)._sunTint.r = fVar11;
  (this->fields)._sunTint.g = fVar12;
  (this->fields)._sunTint.b = fVar13;
  (this->fields)._sunTint.a = fVar14;
  (this->fields)._sunFlareBrightness = 0.3;
  (this->fields)._sunLightContrast = 0.5;
  (this->fields)._sunLightIntensity = 1.0;
  pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                     (&CStack_10,(MethodInfo *)0x0);
  fVar11 = pCVar9->r;
  fVar12 = pCVar9->g;
  fVar13 = pCVar9->b;
  fVar14 = pCVar9->a;
  (this->fields)._moonSize = 1.0;
  (this->fields)._moonFlareBrightness = 0.3;
  (this->fields)._moonTint.r = fVar11;
  (this->fields)._moonTint.g = fVar12;
  (this->fields)._moonTint.b = fVar13;
  (this->fields)._moonTint.a = fVar14;
  (this->fields)._moonLightContrast = 0.5;
  (this->fields)._moonLightIntensity = 1.0;
  (this->fields)._cloudsOffset = 0.2;
  (this->fields)._cloudsRotationSpeed = 1.0;
  (this->fields)._exposure = 1.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Color get_BottomColor() */

Color * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_BottomColor
                  (Color *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  fVar1 = (this->fields)._bottomColor.g;
  fVar2 = (this->fields)._bottomColor.b;
  fVar3 = (this->fields)._bottomColor.a;
  __return_storage_ptr__->r = (this->fields)._bottomColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Camera get_Camera() */

Camera * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_Camera
                   (ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pCVar1 = (Camera *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        (MethodInfo *)0x0);
    return pCVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pCVar1 = (Camera *)(*pcVar2)();
  return pCVar1;
}


/* Single get_CloudsHeight() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_CloudsHeight
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._cloudsHeight;
}


/* Single get_CloudsOffset() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_CloudsOffset
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._cloudsOffset;
}


/* Single get_CloudsRotationSpeed() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_CloudsRotationSpeed
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._cloudsRotationSpeed;
}


/* Single get_Exposure() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_Exposure
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._exposure;
}


/* Single get_FogDensity() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_FogDensity
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields).fogDensity;
}


/* Boolean get_FogEnabled() */

bool Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_FogEnabled
               (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields).fogEnabled;
}


/* Single get_FogEndDistance() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_FogEndDistance
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields).fogEndDist;
}


/* Single get_FogStartDistance() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_FogStartDistance
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields).fogStartDist;
}


/* LensFlare get_MoonFlare() */

LensFlare *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonFlare(ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    return (pFVar1->fields).lensFlare;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (LensFlare *)(*pcVar2)();
  return pLVar3;
}


/* Single get_MoonFlareBrightness() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonFlareBrightness
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._moonFlareBrightness;
}


/* Light get_MoonLight() */

Light * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonLight
                  (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    return (pFVar1->fields).light;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (Light *)(*pcVar2)();
  return pLVar3;
}


/* Single get_MoonLightContrast() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonLightContrast
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._moonLightContrast;
}


/* Single get_MoonLightIntensity() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonLightIntensity
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._moonLightIntensity;
}


/* Quaternion get_MoonRotation() */

Quaternion *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonRotation
          (Quaternion *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields)._sun;
  if (this_00 != (FlareLight *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
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


/* Single get_MoonSize() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonSize
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._moonSize;
}


/* Color get_MoonTint() */

Color * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonTint
                  (Color *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  fVar1 = (this->fields)._moonTint.g;
  fVar2 = (this->fields)._moonTint.b;
  fVar3 = (this->fields)._moonTint.a;
  __return_storage_ptr__->r = (this->fields)._moonTint.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Skybox get_Skybox() */

Skybox * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_Skybox
                   (ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pSVar1 = (Skybox *)
             UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
             TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
             TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                       ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pSVar1 = (Skybox *)(*pcVar2)();
  return pSVar1;
}


/* Single get_StarsExtinction() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_StarsExtinction
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._starsExtinction;
}


/* Color get_StarsTint() */

Color * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_StarsTint
                  (Color *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  fVar1 = (this->fields)._starsTint.g;
  fVar2 = (this->fields)._starsTint.b;
  fVar3 = (this->fields)._starsTint.a;
  __return_storage_ptr__->r = (this->fields)._starsTint.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
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
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    return (pFVar1->fields).lensFlare;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (LensFlare *)(*pcVar2)();
  return pLVar3;
}


/* Single get_SunFlareBrightness() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunFlareBrightness
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._sunFlareBrightness;
}


/* Light get_SunLight() */

Light * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunLight
                  (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    return (pFVar1->fields).light;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (Light *)(*pcVar2)();
  return pLVar3;
}


/* Single get_SunLightContrast() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunLightContrast
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._sunLightContrast;
}


/* Single get_SunLightIntensity() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunLightIntensity
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._sunLightIntensity;
}


/* Single get_SunSize() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunSize
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._sunSize;
}


/* Color get_SunTint() */

Color * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_SunTint
                  (Color *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  fVar1 = (this->fields)._sunTint.g;
  fVar2 = (this->fields)._sunTint.b;
  fVar3 = (this->fields)._sunTint.a;
  __return_storage_ptr__->r = (this->fields)._sunTint.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}


/* Void set_BottomColor(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_BottomColor
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._bottomColor.r = value.r;
  (this->fields)._bottomColor.g = value.g;
  (this->fields)._bottomColor.b = value.b;
  (this->fields)._bottomColor.a = value.a;
  if (this_00 != (Material *)0x0) {
    value_01.y = value.g;
    value_01.x = value.r;
    value_01.z = value.b;
    value_01.w = value.a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
              (this_00,StringLiteral__BottomColor,value_01,(MethodInfo *)0x0);
    value.g = (this->fields)._exposure;
    value.b = 0.0;
    value.r = (this->fields)._bottomColor.a;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                       ((Vector4 *)&value,(Vector4)(this->fields)._bottomColor,value.g,
                        (MethodInfo *)0x0);
    value.r = pVVar1->x;
    value.g = pVVar1->y;
    value.b = pVVar1->z;
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    uVar4 = pVVar1->z;
    value_00.b = (float)uVar4;
    value_00.g = (float)uVar3;
    value_00.r = (float)uVar2;
    value.a = 1.0;
    value_00.a = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
              (value_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
              ((this->fields)._bottomColor,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_CloudsHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._cloudsOffset = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__CloudsOffset,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CloudsRotationSpeed(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsRotationSpeed
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._cloudsRotationSpeed = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__CloudsRotationSpeed,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Exposure(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_Exposure
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._exposure = value;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__Exposure,value,(MethodInfo *)0x0);
    pCVar1 = (Color *)UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                                ((Vector4 *)&stack0xffffffec,(Vector4)(this->fields)._bottomColor,
                                 (this->fields)._exposure,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
              (*pCVar1,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Multiply
                       ((Vector4 *)&stack0xffffffec,(Vector4)(this->fields)._bottomColor,
                        (this->fields)._exposure,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    uVar5 = pVVar2->z;
    value_00.b = (float)uVar5;
    value_00.g = (float)uVar4;
    value_00.r = (float)uVar3;
    value_00.a = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
              (value_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      uVar5 = pVVar3->x;
      fVar6 = pVVar3->z;
      pFVar1 = (this->fields)._moon;
      uStack_7 = CONCAT44(value,uVar5);
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pFVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          value_00.z = fVar6;
          value_00.x = (float)(undefined4)uStack_7;
          value_00.y = (float)uStack_7._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar2,value_00,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._moon;
          this_00 = (this->fields).skyboxMaterial;
          if (pFVar1 != (FlareLight *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pFVar1,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_MoonFlareBrightness(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonFlareBrightness
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
             *)(this->fields)._moon;
  (this->fields)._moonFlareBrightness = value;
  if (this_00 !=
      (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
       *)0x0) {
    this_02 = (LensFlare *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields)._moon;
    if (this_01 != (FlareLight *)0x0) {
      this_03 = (Light *)mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    this_01,(MethodInfo *)0x0);
      if (this_03 != (Light *)0x0) {
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                          (this_03,(MethodInfo *)0x0);
        if (this_02 != (LensFlare *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                    (this_02,fVar1 * value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MoonHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (value * _UNK_?,-90.0,90.0,(MethodInfo *)0x0);
  pFVar2 = (this->fields)._moon;
  (this->fields).moonAngle = fVar1;
  if (pFVar2 != (FlareLight *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      fVar6 = pVVar4->z;
      pFVar2 = (this->fields)._moon;
      fVar1 = (this->fields).moonAngle;
      if (pFVar2 != (FlareLight *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pFVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          value_00.y = (float)uVar5;
          value_00.x = fVar1;
          value_00.z = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar3,value_00,(MethodInfo *)0x0);
          pFVar2 = (this->fields)._moon;
          this_00 = (this->fields).skyboxMaterial;
          if (pFVar2 != (FlareLight *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pFVar2,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_worldToLocalMatrix
                                 ((Matrix4x4 *)&stack0xffffffa4,pTVar3,(MethodInfo *)0x0);
              if (this_00 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                          (this_00,StringLiteral_moonMatrix,*pMVar7,(MethodInfo *)0x0);
                return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,value,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._moon;
      this_00 = (this->fields).skyboxMaterial;
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pFVar1,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_MoonSize(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonSize
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._moonSize = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__MoonSize,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_MoonTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonTint
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_StarsExtinction(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsExtinction
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._starsExtinction = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__StarsExtinction,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_StarsTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsTint
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_StarsTwinklingSpeed(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsTwinklingSpeed
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._starsTwinklingSpeed = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__StarsTwinklingSpeed,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_SunAxisDegrees(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunAxisDegrees
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      uVar5 = pVVar3->x;
      fVar6 = pVVar3->z;
      pFVar1 = (this->fields)._sun;
      uStack_7 = CONCAT44(value,uVar5);
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pFVar1,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          value_00.z = fVar6;
          value_00.x = (float)(undefined4)uStack_7;
          value_00.y = (float)uStack_7._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar2,value_00,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._sun;
          this_00 = (this->fields).skyboxMaterial;
          if (pFVar1 != (FlareLight *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pFVar1,(MethodInfo *)0x0);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (value * _UNK_?,-90.0,90.0,(MethodInfo *)0x0);
  pFVar2 = (this->fields)._sun;
  (this->fields).sunAngle = fVar1;
  if (pFVar2 != (FlareLight *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         ((Vector3 *)&stack0xffffffe4,pTVar3,(MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      fVar6 = pVVar4->z;
      pFVar2 = (this->fields)._sun;
      fVar1 = (this->fields).sunAngle;
      if (pFVar2 != (FlareLight *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pFVar2,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          value_00.y = (float)uVar5;
          value_00.x = fVar1;
          value_00.z = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                    (pTVar3,value_00,(MethodInfo *)0x0);
          pFVar2 = (this->fields)._sun;
          this_00 = (this->fields).skyboxMaterial;
          if (pFVar2 != (FlareLight *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pFVar2,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_worldToLocalMatrix
                                 ((Matrix4x4 *)&stack0xffffffa4,pTVar3,(MethodInfo *)0x0);
              if (this_00 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                          (this_00,StringLiteral_sunMatrix,*pMVar7,(MethodInfo *)0x0);
                return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if (pFVar1 != (FlareLight *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pFVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,value,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._sun;
      this_00 = (this->fields).skyboxMaterial;
      if (pFVar1 != (FlareLight *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pFVar1,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_SunSize(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunSize
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._sunSize = value;
  this_00 = (this->fields).skyboxMaterial;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
              (this_00,StringLiteral__SunSize,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_SunTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunTint
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_TopColor(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_TopColor
               (ThemeSkybox *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

