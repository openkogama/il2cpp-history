
/* Void Activate() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Activate(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_sunMatrix);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pSVar2 = (pMVar1->fields).skybox, pSVar2 != (Skybox *)0x0)) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_get_material
                        (pSVar2,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).previousSkyboxMaterial = pMVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).previousSkyboxMaterial >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((pMVar1 != (MainCameraManager *)0x0) &&
       (pSVar2 = (pMVar1->fields).skybox, pSVar2 != (Skybox *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Skybox::Skybox_set_material
                (pSVar2,(this->fields).skyboxMaterial,(MethodInfo *)0x0);
      pFVar9 = (this->fields)._sun;
      pMVar3 = (this->fields).skyboxMaterial;
      if ((pFVar9 != (FlareLight *)0x0) &&
         ((pLVar10 = (pFVar9->fields).light, pLVar10 != (Light *)0x0 &&
          (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pLVar10,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)
          ))) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_12._0_4_ = 0.0;
        auStack_12._4_4_ = 0.0;
        auStack_12._8_4_ = 0.0;
        auStack_12._12_4_ = 0.0;
        auStack_12._16_4_ = 0.0;
        auStack_12._20_4_ = 0.0;
        auStack_12._24_4_ = 0.0;
        auStack_12._28_4_ = 0.0;
        auStack_12._32_4_ = 0.0;
        auStack_12._36_4_ = 0.0;
        auStack_12._40_4_ = 0.0;
        auStack_12._44_4_ = 0.0;
        auStack_12._48_4_ = 0.0;
        auStack_12._52_4_ = 0.0;
        uStack_13._0_4_ = 0.0;
        uStack_13._4_4_ = 0.0;
        pvVar14 = (pTVar11->fields)._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar14,auStack_12);
        if (pMVar3 != (Material *)0x0) {
          MStack_17.m00 = (float)auStack_12._0_4_;
          MStack_17.m10 = (float)auStack_12._4_4_;
          MStack_17.m20 = (float)auStack_12._8_4_;
          MStack_17.m30 = (float)auStack_12._12_4_;
          MStack_17.m01 = (float)auStack_12._16_4_;
          MStack_17.m11 = (float)auStack_12._20_4_;
          MStack_17.m21 = (float)auStack_12._24_4_;
          MStack_17.m31 = (float)auStack_12._28_4_;
          MStack_17.m02 = (float)auStack_12._32_4_;
          MStack_17.m12 = (float)auStack_12._36_4_;
          MStack_17.m22 = (float)auStack_12._40_4_;
          MStack_17.m32 = (float)auStack_12._44_4_;
          MStack_17.m03 = (float)auStack_12._48_4_;
          MStack_17.m13 = (float)auStack_12._52_4_;
          MStack_17.m23 = (float)uStack_13;
          MStack_17.m33 = uStack_13._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (pMVar3,StringLiteral_sunMatrix,&MStack_17,(MethodInfo *)0x0);
          pFVar9 = (this->fields)._moon;
          pMVar3 = (this->fields).skyboxMaterial;
          if (((pFVar9 != (FlareLight *)0x0) &&
              (pLVar10 = (pFVar9->fields).light, pLVar10 != (Light *)0x0)) &&
             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pLVar10,(MethodInfo *)0x0),
             pTVar11 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_12._0_4_ = 0.0;
            auStack_12._4_4_ = 0.0;
            auStack_12._8_4_ = 0.0;
            auStack_12._12_4_ = 0.0;
            auStack_12._16_4_ = 0.0;
            auStack_12._20_4_ = 0.0;
            auStack_12._24_4_ = 0.0;
            auStack_12._28_4_ = 0.0;
            auStack_12._32_4_ = 0.0;
            auStack_12._36_4_ = 0.0;
            auStack_12._40_4_ = 0.0;
            auStack_12._44_4_ = 0.0;
            auStack_12._48_4_ = 0.0;
            auStack_12._52_4_ = 0.0;
            uStack_13._0_4_ = 0.0;
            uStack_13._4_4_ = 0.0;
            pvVar14 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar14 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcRam_? = pcVar15;
            (*pcRam_?)(pvVar14,auStack_12);
            if (pMVar3 != (Material *)0x0) {
              MStack_17.m00 = (float)auStack_12._0_4_;
              MStack_17.m10 = (float)auStack_12._4_4_;
              MStack_17.m20 = (float)auStack_12._8_4_;
              MStack_17.m30 = (float)auStack_12._12_4_;
              MStack_17.m01 = (float)auStack_12._16_4_;
              MStack_17.m11 = (float)auStack_12._20_4_;
              MStack_17.m21 = (float)auStack_12._24_4_;
              MStack_17.m31 = (float)auStack_12._28_4_;
              MStack_17.m02 = (float)auStack_12._32_4_;
              MStack_17.m12 = (float)auStack_12._36_4_;
              MStack_17.m22 = (float)auStack_12._40_4_;
              MStack_17.m32 = (float)auStack_12._44_4_;
              MStack_17.m03 = (float)auStack_12._48_4_;
              MStack_17.m13 = (float)auStack_12._52_4_;
              MStack_17.m23 = (float)uStack_13;
              MStack_17.m33 = uStack_13._4_4_;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                        (pMVar3,StringLiteral_moonMatrix,&MStack_17,(MethodInfo *)0x0);
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if ((pMVar1 != (MainCameraManager *)0x0) &&
                 (pCVar18 = (pMVar1->fields).mainCamera, pCVar18 != (Camera *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((pCVar18->fields)._._._.m_CachedPtr == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar18,(MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcVar15 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                  uVar16 = func_?(&UNK_?);
                  FUN_?(uVar16,0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcRam_? = pcVar15;
                iVar19 = (*pcRam_?)();
                (this->fields).previousClearFlags = iVar19;
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if ((pMVar1 != (MainCameraManager *)0x0) &&
                   (pCVar18 = (pMVar1->fields).mainCamera, pCVar18 != (Camera *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar14 = (pCVar18->fields)._._._.m_CachedPtr;
                  if (pvVar14 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar18,(MethodInfo *)0x0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pcVar15 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                    uVar16 = func_?(&UNK_?);
                    FUN_?(uVar16,0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pcRam_? = pcVar15;
                  (*pcRam_?)(pvVar14,1);
                  pFVar9 = (this->fields)._sun;
                  if (pFVar9 != (FlareLight *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                              ((Behaviour *)pFVar9,1,(MethodInfo *)0x0);
                    pFVar9 = (this->fields)._moon;
                    if (pFVar9 != (FlareLight *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pFVar9,1,(MethodInfo *)0x0);
                      bVar20 = (this->fields).fogEnabled;
                      pcVar15 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar15 = (code *)FUN_?(&UNK_?);
                        if (pcVar15 == (code *)0x0) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(bVar20);
                      pcVar15 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar15 = (code *)FUN_?(&UNK_?);
                        if (pcVar15 == (code *)0x0) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(3);
                      fVar21 = (this->fields).fogStartDist;
                      pcVar15 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar15 = (code *)FUN_?(&UNK_?);
                        if (pcVar15 == (code *)0x0) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(fVar21);
                      fVar21 = (this->fields).fogEndDist;
                      pcVar15 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar15 = (code *)FUN_?(&UNK_?);
                        if (pcVar15 == (code *)0x0) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(fVar21);
                      fVar21 = (this->fields).fogDensity;
                      pcVar15 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar15 = (code *)FUN_?(&UNK_?);
                        if (pcVar15 == (code *)0x0) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(fVar21);
                      ThemeSkybox_RecalculateFogColor(this,(MethodInfo *)0x0);
                      fVar21 = (this->fields)._exposure;
                      MStack_17.m12 = fVar21 * (this->fields)._bottomColor.g;
                      MStack_17.m02 = fVar21 * (this->fields)._bottomColor.r;
                      MStack_17.m32 = fVar21 * (this->fields)._bottomColor.a;
                      MStack_17.m22 = fVar21 * (this->fields)._bottomColor.b;
                      pcVar15 = pcRam_?;
                      if (pcRam_? == (code *)0x0) {
                        pcVar15 = (code *)FUN_?(&UNK_?);
                        if (pcVar15 == (code *)0x0) {
                          uVar16 = func_?(&UNK_?);
                          FUN_?(uVar16,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      pcRam_? = pcVar15;
                      (*pcRam_?)(&MStack_17.m02);
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ApplyRenderSettings() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_ApplyRenderSettings
               (ThemeSkybox *this,MethodInfo *method)

{
  bVar1 = (this->fields).fogEnabled;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(bVar1);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(3);
  fVar4 = (this->fields).fogStartDist;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar4);
  fVar4 = (this->fields).fogEndDist;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar4);
  fVar4 = (this->fields).fogDensity;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(fVar4);
  ThemeSkybox_RecalculateFogColor(this,(MethodInfo *)0x0);
  fStack_5 = (this->fields)._exposure;
  fStack_6 = fStack_5 * (this->fields)._bottomColor.r;
  fStack_7 = fStack_5 * (this->fields)._bottomColor.a;
  fStack_8 = fStack_5 * (this->fields)._bottomColor.g;
  fStack_5 = fStack_5 * (this->fields)._bottomColor.b;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&fStack_6);
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Awake(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).skyboxMaterialSerialized;
  if (pTVar1 == (ThemeSkybox_PlatformSpecificMaterial *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pTVar1->fields).skyboxMaterialStandalone;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar3 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pMVar3,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  bVar4 = iRam_? != 0;
  (this->fields).skyboxMaterial = pMVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).skyboxMaterial >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_Deactivate(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
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
          if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          uStack_3 = _UNK_?;
          uStack_4 = _UNK_?;
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(&uStack_3);
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_OnDestroy(ThemeSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).skyboxMaterial;
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
  if (pMVar1 != (Material *)0x0) {
    pvVar2 = (pMVar1->fields)._.m_CachedPtr;
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


/* Void RecalculateFogColor() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateFogColor
               (ThemeSkybox *this,MethodInfo *method)

{
  fStack_1 = (this->fields)._exposure;
  fStack_2 = fStack_1 * (this->fields)._bottomColor.r;
  uStack_3 = 0x3f800000;
  fStack_4 = fStack_1 * (this->fields)._bottomColor.b;
  fStack_1 = fStack_1 * (this->fields)._bottomColor.g;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&fStack_2);
  return;
}


/* Void RecalculateMoonLight() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateMoonLight
               (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._moon;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).moonAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._moonLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._moon;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._moonFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._moon;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RecalculateSunLight() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_RecalculateSunLight
               (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._sun;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._sun;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).sunAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._sunLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._sun;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._sunFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._sun;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ThemeSkybox() */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox__ctor(ThemeSkybox *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  bVar4 = cRam_? == '\0';
  uVar5 = _UNK_?;
  (this->fields)._topColor.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields)._topColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._topColor.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._topColor.a = (float)uVar5;
  (this->fields).fogStartDist = 10.0;
  uVar7 = _UNK_?;
  uVar3 = _UNK_?;
  uVar5 = _UNK_?;
  (this->fields)._starsTint.r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (this->fields)._starsTint.g = (float)uVar5;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar5 = _UNK_?;
  (this->fields)._starsTint.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._starsTint.a = (float)uVar5;
  (this->fields).fogEndDist = 100.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._sunTint.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar6 = _UNK_?;
  (this->fields)._sunTint.g = (float)uVar5;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar5 = _UNK_?;
  (this->fields)._sunTint.b = (float)_UNK_?;
  _UNK_? = uVar6;
  (this->fields)._sunTint.a = (float)uVar5;
  (this->fields)._starsExtinction = 2.0;
  uVar6 = _UNK_?;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (this->fields)._moonTint.r = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar3 = _UNK_?;
  (this->fields)._moonTint.g = (float)uVar5;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar5 = _UNK_?;
  (this->fields)._moonTint.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._moonTint.a = (float)uVar5;
  (this->fields)._starsTwinklingSpeed = 4.0;
  uVar3 = _UNK_?;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (this->fields)._bottomColor.r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (this->fields)._bottomColor.g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (this->fields)._bottomColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (this->fields)._bottomColor.a = (float)uVar5;
  (this->fields)._sunSize = 1.0;
  (this->fields)._sunFlareBrightness = 0.3;
  (this->fields)._sunLightContrast = 0.5;
  (this->fields)._sunLightIntensity = 1.0;
  (this->fields)._moonSize = 1.0;
  (this->fields)._moonFlareBrightness = 0.3;
  (this->fields)._moonLightContrast = 0.5;
  (this->fields)._moonLightIntensity = 1.0;
  (this->fields)._cloudsOffset = 0.2;
  (this->fields)._cloudsRotationSpeed = 1.0;
  (this->fields)._exposure = 1.0;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar8 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar9 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar10 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar11 = ppMVar9;
  if (lVar10 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar10 = lRam_?;
  }
  else {
    do {
      uVar12 = (uint)ppMVar11;
      LOCK();
      bVar4 = uVar12 != uRam_?;
      uVar13 = uVar12;
      uVar14 = uVar12 + 1;
      if (bVar4) {
        uVar13 = uRam_?;
        uVar14 = uRam_?;
      }
      uRam_? = uVar14;
      UNLOCK();
    } while ((bVar4) && (ppMVar11 = (MethodInfo **)(ulonglong)uVar13, uVar12 = uVar13, uVar13 != 2)
            );
    while (uVar12 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar12 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar10;
  puVar15 = &(pOVar8->_1).field_0x1c;
  LOCK();
  bVar4 = *(int *)puVar15 == 1;
  if (bVar4) {
    *(undefined4 *)puVar15 = 1;
  }
  uVar12 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar12 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar16 = &(pOVar8->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar4 = *puVar16 == 1;
  if (bVar4) {
    *puVar16 = 1;
  }
  uVar12 = uRam_?;
  UNLOCK();
  if (bVar4) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar12 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar12 = GetCurrentThreadId();
    psVar17 = &(pOVar8->_1).cctor_thread;
    LOCK();
    bVar4 = (ulonglong)uVar12 == *psVar17;
    if (bVar4) {
      *psVar17 = (ulonglong)uVar12;
    }
    UNLOCK();
    if (bVar4) {
      return;
    }
    while( true ) {
      puVar15 = &(pOVar8->_1).field_0x1c;
      LOCK();
      bVar4 = *(int *)puVar15 == 1;
      if (bVar4) {
        *(undefined4 *)puVar15 = 1;
      }
      UNLOCK();
      if (bVar4) break;
      LOCK();
      lVar10._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
      lVar10._4_4_ = (pOVar8->_1).cctor_started;
      if (lVar10 == 0) {
        (pOVar8->_1).initializationExceptionGCHandle = 0;
        (pOVar8->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar10 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar18._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
    lVar18._4_4_ = (pOVar8->_1).cctor_started;
    if (lVar18 == 0) {
      return;
    }
  }
  else {
    uVar12 = GetCurrentThreadId();
    LOCK();
    (pOVar8->_1).cctor_thread = (ulonglong)uVar12;
    UNLOCK();
    LOCK();
    (pOVar8->_1).cctor_finished_or_no_cctor = 1;
    uVar12 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar12 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar8->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar8);
      ppMVar11 = ppMVar9;
      pIVar19 = (Il2CppClass *)pOVar8;
code_?:
      do {
        if (ppMVar11 == (MethodInfo **)0x0) {
          FUN_?(pIVar19);
          if (pIVar19->field_count != 0) {
            ppMVar11 = pIVar19->methods;
            pMVar20 = *ppMVar11;
code_?:
            if (pMVar20 != (MethodInfo *)0x0) {
              if ((*pMVar20->name == '.') && ((pMVar20->flags & 0x800) != 0)) {
                ppMVar21 = ppMVar9;
                while (ppMVar22 = ppMVar21 + 0x3052aacd,
                      ppMVar21 = (MethodInfo **)((longlong)ppMVar21 + 1),
                      *(char *)ppMVar22 == (pMVar20->name + -1)[(longlong)ppMVar21]) {
                  if (ppMVar21 == (MethodInfo **)0x7) {
                    FUN_?(pMVar20,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar11 = ppMVar11 + 1;
          if (ppMVar11 < pIVar19->methods + pIVar19->field_count) {
            pMVar20 = *ppMVar11;
            goto code_?;
          }
        }
        pIVar19 = pIVar19->parent;
        ppMVar11 = ppMVar9;
      } while (pIVar19 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar8->_1).cctor_thread = 0;
    uVar23 = _UNK_?;
    uVar3 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar8->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_24 = 0;
    uStack_25 = _UNK_?;
    uStack_26 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar8->_0).byval_arg,0,0);
    pppppppuVar21 = &pppppppuStack_78;
    if (0xf < uStack_26) {
      pppppppuVar21 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar21);
    if (uStack_26 < 0x10) {
code_?:
      lVar10 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar21 = apppppppuStack_58;
      if (0xf < uStack_27) {
        pppppppuVar21 = apppppppuStack_58[0];
      }
      uStack_25 = uVar3;
      uStack_26 = uVar23;
      lVar18 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar21);
      if (lVar10 != 0) {
        *(longlong *)(lVar18 + 0x28U) = lVar10;
        if (iRam_? != 0) {
          uVar12 = (uint)(lVar18 + 0x28U >> 0xc);
          puVar28 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar29 = *puVar28;
            LOCK();
            uVar23 = *puVar28;
            if (uVar29 == uVar23) {
              *puVar28 = uVar29 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (uVar29 != uVar23);
        }
      }
      FUN_?(pOVar8,lVar18);
      if (0xf < uStack_27) {
        pppppppuVar21 = apppppppuStack_58[0];
        if ((0xfff < uStack_27 + 1) &&
           (pppppppuVar21 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar21))))
        goto code_?;
        func_?(pppppppuVar21);
      }
      goto code_?;
    }
    pppppppuVar21 = pppppppuStack_78;
    if ((uStack_26 + 1 < 0x1000) ||
       (pppppppuVar21 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar21)) < 0x20)) {
      func_?(pppppppuVar21);
      uVar3 = _UNK_?;
      uVar23 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar3._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
  uVar3._4_4_ = (pOVar8->_1).cctor_started;
  uVar3 = FUN_?(uVar3);
  FUN_?(uVar3,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Camera *)(*pcVar2)();
  return pCVar3;
}


/* Single get_Exposure() */

float Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_Exposure
                (ThemeSkybox *this,MethodInfo *method)

{
  return (this->fields)._exposure;
}


/* LensFlare get_MoonFlare() */

LensFlare *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonFlare(ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    return (pFVar1->fields).lensFlare;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (LensFlare *)(*pcVar2)();
  return pLVar3;
}


/* Light get_MoonLight() */

Light * Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonLight
                  (ThemeSkybox *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  if (pFVar1 != (FlareLight *)0x0) {
    return (pFVar1->fields).light;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pLVar3 = (Light *)(*pcVar2)();
  return pLVar3;
}


/* Quaternion get_MoonRotation() */

Quaternion *
Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_get_MoonRotation
          (Quaternion *__return_storage_ptr__,ThemeSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields)._sun;
  if ((this_00 == (FlareLight *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pQVar2 = (Quaternion *)(*pcVar1)();
    return pQVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_4;
  __return_storage_ptr__->w = (float)uStack_4._4_4_;
  return __return_storage_ptr__;
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    return (pMVar1->fields).skybox;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (Skybox *)(*pcVar2)();
  return pSVar3;
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
  FUN_?();
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
  FUN_?();
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
               (ThemeSkybox *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__BottomColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_1.r = value->r;
  CStack_1.g = value->g;
  CStack_1.b = value->b;
  CStack_1.a = value->a;
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._bottomColor.r = CStack_1.r;
  (this->fields)._bottomColor.g = CStack_1.g;
  (this->fields)._bottomColor.b = CStack_1.b;
  (this->fields)._bottomColor.a = CStack_1.a;
  if (this_00 == (Material *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
            (this_00,StringLiteral__BottomColor,&CStack_1,(MethodInfo *)0x0);
  ThemeSkybox_RecalculateFogColor(this,(MethodInfo *)0x0);
  fStack_3 = (this->fields)._bottomColor.r;
  fStack_4 = (this->fields)._bottomColor.g;
  fStack_5 = (this->fields)._bottomColor.b;
  fStack_6 = (this->fields)._bottomColor.a;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&fStack_3);
  return;
}


/* Void set_CloudsHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CloudsHeight);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._cloudsHeight = value;
  if (this_00 == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                   (StringLiteral__CloudsHeight,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
            (this_00,name,value,(MethodInfo *)0x0);
  ThemeSkybox_RecalculateMoonLight(this,(MethodInfo *)0x0);
  pFVar2 = (this->fields)._sun;
  if (pFVar2 == (FlareLight *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pLVar3 = (pFVar2->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar4);
    pFVar2 = (this->fields)._sun;
    if (pFVar2 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar2->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar6 = (this->fields).sunAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._sunLightIntensity,(MethodInfo *)0x0);
          pFVar2 = (this->fields)._sun;
          if (pFVar2 != (FlareLight *)0x0) {
            pLVar3 = (pFVar2->fields).light;
            pLVar8 = (pFVar2->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._sunFlareBrightness,(MethodInfo *)0x0);
                pFVar2 = (this->fields)._sun;
                if ((pFVar2 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar2->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcVar1 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcRam_? = pcVar1;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CloudsOffset(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsOffset
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CloudsOffset,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._cloudsOffset = value;
  obj = (this->fields).skyboxMaterial;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__CloudsOffset,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,value,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,value);
  return;
}


/* Void set_CloudsRotationSpeed(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_CloudsRotationSpeed
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__CloudsRotationSpeed,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._cloudsRotationSpeed = value;
  obj = (this->fields).skyboxMaterial;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__CloudsRotationSpeed,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,value,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,value);
  return;
}


/* Void set_Exposure(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_Exposure
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__Exposure);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._exposure = value;
  if (this_00 == (Material *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                   (StringLiteral__Exposure,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
            (this_00,name,value,(MethodInfo *)0x0);
  fStack_2 = (this->fields)._exposure;
  fStack_3 = fStack_2 * (this->fields)._bottomColor.r;
  fStack_4 = fStack_2 * (this->fields)._bottomColor.a;
  fStack_5 = fStack_2 * (this->fields)._bottomColor.g;
  fStack_2 = fStack_2 * (this->fields)._bottomColor.b;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&fStack_3);
  ThemeSkybox_RecalculateFogColor(this,(MethodInfo *)0x0);
  return;
}


/* Void set_FogDensity(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogDensity
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  UNRECOVERED_JUMPTABLE = pcRam_?;
  (this->fields).fogDensity = value;
  pcVar1 = pcRam_?;
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?), pcVar1 = UNRECOVERED_JUMPTABLE,
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(value);
  return;
}


/* Void set_FogEnabled(Boolean) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogEnabled
               (ThemeSkybox *this,bool value,MethodInfo *method)

{
  UNRECOVERED_JUMPTABLE = pcRam_?;
  (this->fields).fogEnabled = value;
  pcVar1 = pcRam_?;
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?), pcVar1 = UNRECOVERED_JUMPTABLE,
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(value);
  return;
}


/* Void set_FogEndDistance(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogEndDistance
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  UNRECOVERED_JUMPTABLE = pcRam_?;
  (this->fields).fogEndDist = value;
  pcVar1 = pcRam_?;
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?), pcVar1 = UNRECOVERED_JUMPTABLE,
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(value);
  return;
}


/* Void set_FogStartDistance(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_FogStartDistance
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  UNRECOVERED_JUMPTABLE = pcRam_?;
  (this->fields).fogStartDist = value;
  pcVar1 = pcRam_?;
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)FUN_?(&UNK_?), pcVar1 = UNRECOVERED_JUMPTABLE,
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(value);
  return;
}


/* Void set_MoonAxisDegrees(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonAxisDegrees
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_moonMatrix);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if ((pFVar1 != (FlareLight *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    pFVar1 = (this->fields)._moon;
    uVar5 = pVVar3->x;
    fVar6 = pVVar3->z;
    VStack_7.y = value;
    VStack_7.x = (float)uVar5;
    if ((pFVar1 != (FlareLight *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      VStack_7.z = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                (pTVar2,&VStack_7,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._moon;
      this_00 = (this->fields).skyboxMaterial;
      if ((pFVar1 != (FlareLight *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MStack_8.m00 = 0.0;
        MStack_8.m10 = 0.0;
        MStack_8.m20 = 0.0;
        MStack_8.m30 = 0.0;
        MStack_8.m01 = 0.0;
        MStack_8.m11 = 0.0;
        MStack_8.m21 = 0.0;
        MStack_8.m31 = 0.0;
        MStack_8.m02 = 0.0;
        MStack_8.m12 = 0.0;
        MStack_8.m22 = 0.0;
        MStack_8.m32 = 0.0;
        MStack_8.m03 = 0.0;
        MStack_8.m13 = 0.0;
        MStack_8.m23 = 0.0;
        MStack_8.m33 = 0.0;
        pvVar9 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&MStack_8);
        if (this_00 != (Material *)0x0) {
          MStack_12.m00 = MStack_8.m00;
          MStack_12.m10 = MStack_8.m10;
          MStack_12.m20 = MStack_8.m20;
          MStack_12.m30 = MStack_8.m30;
          MStack_12.m01 = MStack_8.m01;
          MStack_12.m11 = MStack_8.m11;
          MStack_12.m21 = MStack_8.m21;
          MStack_12.m31 = MStack_8.m31;
          MStack_12.m02 = MStack_8.m02;
          MStack_12.m12 = MStack_8.m12;
          MStack_12.m22 = MStack_8.m22;
          MStack_12.m32 = MStack_8.m32;
          MStack_12.m03 = MStack_8.m03;
          MStack_12.m13 = MStack_8.m13;
          MStack_12.m23 = MStack_8.m23;
          MStack_12.m33 = MStack_8.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral_moonMatrix,&MStack_12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_MoonFlareBrightness(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonFlareBrightness
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  pFVar1 = (this->fields)._moon;
  uVar2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar3 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  (this->fields)._moonFlareBrightness = value;
  if (pFVar1 != (FlareLight *)0x0) {
    obj = (pFVar1->fields).light;
    obj_00 = (pFVar1->fields).lensFlare;
    if (obj != (Light *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                      ,in_RDX,method,in_R9,uVar2,uVar3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      fVar6 = (float)(*pcRam_?)(pvVar4);
      if (obj_00 != (LensFlare *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                        ,fVar6 * value,0,in_R9,uVar2,uVar3,unaff_RBX);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj_00 == (LensFlare *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar4 = (obj_00->fields)._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,fVar6 * value);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_MoonHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_moonMatrix);
    LOCK();
    UNLOCK();
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
    pFVar3 = (this->fields)._moon;
    uVar7 = pVVar5->y;
    fVar2 = pVVar5->z;
    VStack_8.y = (float)uVar7;
    VStack_8.x = (this->fields).moonAngle;
    if ((pFVar3 != (FlareLight *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      VStack_8.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                (pTVar4,&VStack_8,(MethodInfo *)0x0);
      pFVar3 = (this->fields)._moon;
      this_00 = (this->fields).skyboxMaterial;
      if ((pFVar3 != (FlareLight *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MStack_9.m00 = 0.0;
        MStack_9.m10 = 0.0;
        MStack_9.m20 = 0.0;
        MStack_9.m30 = 0.0;
        MStack_9.m01 = 0.0;
        MStack_9.m11 = 0.0;
        MStack_9.m21 = 0.0;
        MStack_9.m31 = 0.0;
        MStack_9.m02 = 0.0;
        MStack_9.m12 = 0.0;
        MStack_9.m22 = 0.0;
        MStack_9.m32 = 0.0;
        MStack_9.m03 = 0.0;
        MStack_9.m13 = 0.0;
        MStack_9.m23 = 0.0;
        MStack_9.m33 = 0.0;
        pvVar10 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar10,&MStack_9);
        if (this_00 != (Material *)0x0) {
          MStack_13.m00 = MStack_9.m00;
          MStack_13.m10 = MStack_9.m10;
          MStack_13.m20 = MStack_9.m20;
          MStack_13.m30 = MStack_9.m30;
          MStack_13.m01 = MStack_9.m01;
          MStack_13.m11 = MStack_9.m11;
          MStack_13.m21 = MStack_9.m21;
          MStack_13.m31 = MStack_9.m31;
          MStack_13.m02 = MStack_9.m02;
          MStack_13.m12 = MStack_9.m12;
          MStack_13.m22 = MStack_9.m22;
          MStack_13.m32 = MStack_9.m32;
          MStack_13.m03 = MStack_9.m03;
          MStack_13.m13 = MStack_9.m13;
          MStack_13.m23 = MStack_9.m23;
          MStack_13.m33 = MStack_9.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral_moonMatrix,&MStack_13,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void set_MoonLightContrast(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonLightContrast
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._moonLightContrast = value;
  pFVar1 = (this->fields)._moon;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._moon;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).moonAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._moonLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._moon;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._moonFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._moon;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MoonLightIntensity(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonLightIntensity
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._moonLightIntensity = value;
  pFVar1 = (this->fields)._moon;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._moon;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).moonAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._moonLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._moon;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._moonFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._moon;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_MoonRotation(Quaternion) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonRotation
               (ThemeSkybox *this,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_moonMatrix);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._moon;
  if ((pFVar1 != (FlareLight *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    fStack_3 = value->x;
    fStack_4 = value->y;
    fStack_5 = value->z;
    fStack_6 = value->w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7);
    pFVar1 = (this->fields)._moon;
    this_00 = (this->fields).skyboxMaterial;
    if ((pFVar1 != (FlareLight *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MStack_10.m00 = 0.0;
      MStack_10.m10 = 0.0;
      MStack_10.m20 = 0.0;
      MStack_10.m30 = 0.0;
      MStack_10.m01 = 0.0;
      MStack_10.m11 = 0.0;
      MStack_10.m21 = 0.0;
      MStack_10.m31 = 0.0;
      MStack_10.m02 = 0.0;
      MStack_10.m12 = 0.0;
      MStack_10.m22 = 0.0;
      MStack_10.m32 = 0.0;
      MStack_10.m03 = 0.0;
      MStack_10.m13 = 0.0;
      MStack_10.m23 = 0.0;
      MStack_10.m33 = 0.0;
      pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar7 != (void *)0x0) {
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&MStack_10);
        if (this_00 == (Material *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        MStack_11.m00 = MStack_10.m00;
        MStack_11.m10 = MStack_10.m10;
        MStack_11.m20 = MStack_10.m20;
        MStack_11.m30 = MStack_10.m30;
        MStack_11.m01 = MStack_10.m01;
        MStack_11.m11 = MStack_10.m11;
        MStack_11.m21 = MStack_10.m21;
        MStack_11.m31 = MStack_10.m31;
        MStack_11.m02 = MStack_10.m02;
        MStack_11.m12 = MStack_10.m12;
        MStack_11.m22 = MStack_10.m22;
        MStack_11.m32 = MStack_10.m32;
        MStack_11.m03 = MStack_10.m03;
        MStack_11.m13 = MStack_10.m13;
        MStack_11.m23 = MStack_10.m23;
        MStack_11.m33 = MStack_10.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral_moonMatrix,&MStack_11,(MethodInfo *)0x0);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_MoonSize(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonSize
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MoonSize,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._moonSize = value;
  obj = (this->fields).skyboxMaterial;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__MoonSize,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,value,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,value);
  return;
}


/* Void set_MoonTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_MoonTint
               (ThemeSkybox *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__MoonTint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_1.r = value->r;
  CStack_1.g = value->g;
  CStack_1.b = value->b;
  CStack_1.a = value->a;
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._moonTint.r = CStack_1.r;
  (this->fields)._moonTint.g = CStack_1.g;
  (this->fields)._moonTint.b = CStack_1.b;
  (this->fields)._moonTint.a = CStack_1.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_00,StringLiteral__MoonTint,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_StarsExtinction(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsExtinction
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__StarsExtinction,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._starsExtinction = value;
  obj = (this->fields).skyboxMaterial;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__StarsExtinction,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,value,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,value);
  return;
}


/* Void set_StarsTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsTint
               (ThemeSkybox *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__StarsTint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_1.r = value->r;
  CStack_1.g = value->g;
  CStack_1.b = value->b;
  CStack_1.a = value->a;
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._starsTint.r = CStack_1.r;
  (this->fields)._starsTint.g = CStack_1.g;
  (this->fields)._starsTint.b = CStack_1.b;
  (this->fields)._starsTint.a = CStack_1.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_00,StringLiteral__StarsTint,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_StarsTwinklingSpeed(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_StarsTwinklingSpeed
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__StarsTwinklingSpeed,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._starsTwinklingSpeed = value;
  obj = (this->fields).skyboxMaterial;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__StarsTwinklingSpeed,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,value,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,value);
  return;
}


/* Void set_SunAxisDegrees(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunAxisDegrees
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_sunMatrix);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if ((pFVar1 != (FlareLight *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                       (&VStack_4,pTVar2,(MethodInfo *)0x0);
    pFVar1 = (this->fields)._sun;
    uVar5 = pVVar3->x;
    fVar6 = pVVar3->z;
    VStack_7.y = value;
    VStack_7.x = (float)uVar5;
    if ((pFVar1 != (FlareLight *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      VStack_7.z = fVar6;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                (pTVar2,&VStack_7,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._sun;
      this_00 = (this->fields).skyboxMaterial;
      if ((pFVar1 != (FlareLight *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MStack_8.m00 = 0.0;
        MStack_8.m10 = 0.0;
        MStack_8.m20 = 0.0;
        MStack_8.m30 = 0.0;
        MStack_8.m01 = 0.0;
        MStack_8.m11 = 0.0;
        MStack_8.m21 = 0.0;
        MStack_8.m31 = 0.0;
        MStack_8.m02 = 0.0;
        MStack_8.m12 = 0.0;
        MStack_8.m22 = 0.0;
        MStack_8.m32 = 0.0;
        MStack_8.m03 = 0.0;
        MStack_8.m13 = 0.0;
        MStack_8.m23 = 0.0;
        MStack_8.m33 = 0.0;
        pvVar9 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(pvVar9,&MStack_8);
        if (this_00 != (Material *)0x0) {
          MStack_12.m00 = MStack_8.m00;
          MStack_12.m10 = MStack_8.m10;
          MStack_12.m20 = MStack_8.m20;
          MStack_12.m30 = MStack_8.m30;
          MStack_12.m01 = MStack_8.m01;
          MStack_12.m11 = MStack_8.m11;
          MStack_12.m21 = MStack_8.m21;
          MStack_12.m31 = MStack_8.m31;
          MStack_12.m02 = MStack_8.m02;
          MStack_12.m12 = MStack_8.m12;
          MStack_12.m22 = MStack_8.m22;
          MStack_12.m32 = MStack_8.m32;
          MStack_12.m03 = MStack_8.m03;
          MStack_12.m13 = MStack_8.m13;
          MStack_12.m23 = MStack_8.m23;
          MStack_12.m33 = MStack_8.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral_sunMatrix,&MStack_12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void set_SunFlareBrightness(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunFlareBrightness
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._sunFlareBrightness = value;
  pFVar1 = (this->fields)._sun;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._sun;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).sunAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._sunLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._sun;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._sunFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._sun;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SunHeight(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunHeight
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_sunMatrix);
    LOCK();
    UNLOCK();
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
    pFVar3 = (this->fields)._sun;
    uVar7 = pVVar5->y;
    fVar2 = pVVar5->z;
    VStack_8.y = (float)uVar7;
    VStack_8.x = (this->fields).sunAngle;
    if ((pFVar3 != (FlareLight *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      VStack_8.z = fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                (pTVar4,&VStack_8,(MethodInfo *)0x0);
      pFVar3 = (this->fields)._sun;
      this_00 = (this->fields).skyboxMaterial;
      if ((pFVar3 != (FlareLight *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MStack_9.m00 = 0.0;
        MStack_9.m10 = 0.0;
        MStack_9.m20 = 0.0;
        MStack_9.m30 = 0.0;
        MStack_9.m01 = 0.0;
        MStack_9.m11 = 0.0;
        MStack_9.m21 = 0.0;
        MStack_9.m31 = 0.0;
        MStack_9.m02 = 0.0;
        MStack_9.m12 = 0.0;
        MStack_9.m22 = 0.0;
        MStack_9.m32 = 0.0;
        MStack_9.m03 = 0.0;
        MStack_9.m13 = 0.0;
        MStack_9.m23 = 0.0;
        MStack_9.m33 = 0.0;
        pvVar10 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar10,&MStack_9);
        if (this_00 != (Material *)0x0) {
          MStack_13.m00 = MStack_9.m00;
          MStack_13.m10 = MStack_9.m10;
          MStack_13.m20 = MStack_9.m20;
          MStack_13.m30 = MStack_9.m30;
          MStack_13.m01 = MStack_9.m01;
          MStack_13.m11 = MStack_9.m11;
          MStack_13.m21 = MStack_9.m21;
          MStack_13.m31 = MStack_9.m31;
          MStack_13.m02 = MStack_9.m02;
          MStack_13.m12 = MStack_9.m12;
          MStack_13.m22 = MStack_9.m22;
          MStack_13.m32 = MStack_9.m32;
          MStack_13.m03 = MStack_9.m03;
          MStack_13.m13 = MStack_9.m13;
          MStack_13.m23 = MStack_9.m23;
          MStack_13.m33 = MStack_9.m33;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral_sunMatrix,&MStack_13,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void set_SunLightContrast(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunLightContrast
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._sunLightContrast = value;
  pFVar1 = (this->fields)._sun;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._sun;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).sunAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._sunLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._sun;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._sunFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._sun;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SunLightIntensity(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunLightIntensity
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  (this->fields)._sunLightIntensity = value;
  pFVar1 = (this->fields)._sun;
  if (pFVar1 == (FlareLight *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pLVar3 = (pFVar1->fields).light;
  if (pLVar3 != (Light *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar4);
    pFVar1 = (this->fields)._sun;
    if (pFVar1 != (FlareLight *)0x0) {
      obj = (this->fields).lightIntensityByEmitterHeight;
      pLVar3 = (pFVar1->fields).light;
      if (obj != (AnimationCurve *)0x0) {
        pvVar4 = (obj->fields).m_Ptr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar6 = (this->fields).sunAngle / _UNK_?;
        fVar7 = (this->fields)._cloudsHeight;
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        fVar7 = (float)(*pcRam_?)(pvVar4,fVar6 - fVar7);
        if (pLVar3 != (Light *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                    (pLVar3,fVar7 * (this->fields)._sunLightIntensity,(MethodInfo *)0x0);
          pFVar1 = (this->fields)._sun;
          if (pFVar1 != (FlareLight *)0x0) {
            pLVar3 = (pFVar1->fields).light;
            pLVar8 = (pFVar1->fields).lensFlare;
            if (pLVar3 != (Light *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar4 = (pLVar3->fields)._._._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar3,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)(pvVar4);
              if (pLVar8 != (LensFlare *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                          (pLVar8,fVar7 * (this->fields)._sunFlareBrightness,(MethodInfo *)0x0);
                pFVar1 = (this->fields)._sun;
                if ((pFVar1 != (FlareLight *)0x0) &&
                   (pLVar8 = (pFVar1->fields).lensFlare, pLVar8 != (LensFlare *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar4 = (pLVar8->fields)._._._.m_CachedPtr;
                  if (pvVar4 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar8,(MethodInfo *)0x0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcVar2 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pcRam_? = pcVar2;
                  uVar9 = (*pcRam_?)(pvVar4);
                  bVar10 = FUN_?(uVar9,0);
                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                            ((Behaviour *)pLVar8,bVar10 ^ 1,(MethodInfo *)0x0);
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_SunRotation(Quaternion) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunRotation
               (ThemeSkybox *this,Quaternion *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_sunMatrix);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._sun;
  if ((pFVar1 != (FlareLight *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    fStack_3 = value->x;
    fStack_4 = value->y;
    fStack_5 = value->z;
    fStack_6 = value->w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7);
    pFVar1 = (this->fields)._sun;
    this_00 = (this->fields).skyboxMaterial;
    if ((pFVar1 != (FlareLight *)0x0) &&
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      MStack_10.m00 = 0.0;
      MStack_10.m10 = 0.0;
      MStack_10.m20 = 0.0;
      MStack_10.m30 = 0.0;
      MStack_10.m01 = 0.0;
      MStack_10.m11 = 0.0;
      MStack_10.m21 = 0.0;
      MStack_10.m31 = 0.0;
      MStack_10.m02 = 0.0;
      MStack_10.m12 = 0.0;
      MStack_10.m22 = 0.0;
      MStack_10.m32 = 0.0;
      MStack_10.m03 = 0.0;
      MStack_10.m13 = 0.0;
      MStack_10.m23 = 0.0;
      MStack_10.m33 = 0.0;
      pvVar7 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar7 != (void *)0x0) {
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&MStack_10);
        if (this_00 == (Material *)0x0) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        MStack_11.m00 = MStack_10.m00;
        MStack_11.m10 = MStack_10.m10;
        MStack_11.m20 = MStack_10.m20;
        MStack_11.m30 = MStack_10.m30;
        MStack_11.m01 = MStack_10.m01;
        MStack_11.m11 = MStack_10.m11;
        MStack_11.m21 = MStack_10.m21;
        MStack_11.m31 = MStack_10.m31;
        MStack_11.m02 = MStack_10.m02;
        MStack_11.m12 = MStack_10.m12;
        MStack_11.m22 = MStack_10.m22;
        MStack_11.m32 = MStack_10.m32;
        MStack_11.m03 = MStack_10.m03;
        MStack_11.m13 = MStack_10.m13;
        MStack_11.m23 = MStack_10.m23;
        MStack_11.m33 = MStack_10.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                  (this_00,StringLiteral_sunMatrix,&MStack_11,(MethodInfo *)0x0);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_SunSize(Single) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunSize
               (ThemeSkybox *this,float value,MethodInfo *method)

{
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__SunSize,in_RDX,method,in_R9,uVar1,uVar2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._sunSize = value;
  obj = (this->fields).skyboxMaterial;
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                    (StringLiteral__SunSize,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Material>_UnityEngine__Material_
                  ,iVar4,value,0,uVar1,uVar2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Material *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar5 = (obj->fields)._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar1 = func_?(&UNK_?);
    FUN_?(uVar1,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,iVar4,value);
  return;
}


/* Void set_SunTint(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_SunTint
               (ThemeSkybox *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__SunTint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_1.r = value->r;
  CStack_1.g = value->g;
  CStack_1.b = value->b;
  CStack_1.a = value->a;
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._sunTint.r = CStack_1.r;
  (this->fields)._sunTint.g = CStack_1.g;
  (this->fields)._sunTint.b = CStack_1.b;
  (this->fields)._sunTint.a = CStack_1.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_00,StringLiteral__SunTint,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_TopColor(Color) */

void Assembly-CSharp.dll::ThemeSkybox::ThemeSkybox_set_TopColor
               (ThemeSkybox *this,Color *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__TopColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_1.r = value->r;
  CStack_1.g = value->g;
  CStack_1.b = value->b;
  CStack_1.a = value->a;
  this_00 = (this->fields).skyboxMaterial;
  (this->fields)._topColor.r = CStack_1.r;
  (this->fields)._topColor.g = CStack_1.g;
  (this->fields)._topColor.b = CStack_1.b;
  (this->fields)._topColor.a = CStack_1.a;
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
              (this_00,StringLiteral__TopColor,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

