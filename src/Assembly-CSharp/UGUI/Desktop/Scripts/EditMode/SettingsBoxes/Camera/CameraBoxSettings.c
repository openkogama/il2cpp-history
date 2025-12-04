
/* Object GetSetting(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxSettings::CameraBoxSettings_GetSetting
                   (CameraBoxSettings *this,String *dataKey,Object *defaultVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woData;
  pOStackX_8 = (Object *)0x0;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)dataKey,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar1 != 0) {
      defaultVal = pOStackX_8;
    }
    return defaultVal;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pOVar3 = (Object *)(*pcVar2)();
  return pOVar3;
}


/* Dictionary`2[System.Object,System.Object] InitData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
CameraBoxSettings_InitData(CameraBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,(this->fields).cameraWorldObjectID,(MethodInfo *)0x0),
     lVar2 = lRam_?, pMVar1 != (MVWorldObjectClient *)0x0)) {
    pDVar3 = (pMVar1->fields)._.data;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        value = (Object *)FUN_?(lRam_?);
        FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(value + 1) >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
      }
      else {
        value = (Object *)0x0;
      }
    }
    else {
      value = (Object *)((ulonglong)uStackX_9 << 8);
    }
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,(Object *)StringLiteral_forceFirstPersonCamera,value,
                 InsertionBehavior__Enum_None,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      CameraBoxColorsSettings::CameraBoxColorsSettings_InitData(pDVar3,(MethodInfo *)0x0);
      CameraBoxBloomSettings::CameraBoxBloomSettings_InitData(pDVar3,(MethodInfo *)0x0);
      CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_InitData
                (pDVar3,(MethodInfo *)0x0);
      CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_InitData
                (pDVar3,(MethodInfo *)0x0);
      CameraBoxVignetteSettings::CameraBoxVignetteSettings_InitData(pDVar3,(MethodInfo *)0x0);
      CameraBoxGrainSettings::CameraBoxGrainSettings_InitData(pDVar3,(MethodInfo *)0x0);
      CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_InitData
                (pDVar3,(MethodInfo *)0x0);
      return pDVar3;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar3;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_Initialize
               (CameraBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_distanceToAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_forceFirstPersonCamera);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).cameraWorldObjectID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CameraSettings,
               (MethodInfo *)0x0);
    pDVar1 = CameraBoxSettings_InitData(this,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).woData = pDVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).woData >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pDVar1 = (this->fields).woData;
    this_01 = (this->fields).slider;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_distanceToAvatar,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Globalization__CultureInfo);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      provider = TypeInfo__System__Globalization__CultureInfo->static_fields->invariant_culture_info
      ;
      LOCK();
      UNLOCK();
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar8 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                         (pOVar7,(IFormatProvider *)provider,(MethodInfo *)0x0);
      if (this_01 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (this_01,StringLiteral_distanceToAvatar,fVar8,_UNK_?,_UNK_?,
                   (MethodInfo *)0x0);
        pDVar1 = (this->fields).woData;
        this_02 = (this->fields).inputField;
        if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar1,(Object *)StringLiteral_distanceToAvatar,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Globalization__CultureInfo);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__System__Globalization__CultureInfo);
          }
          LOCK();
          UNLOCK();
          fVar8 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                             (pOVar7,(IFormatProvider *)
                                      TypeInfo__System__Globalization__CultureInfo->static_fields->
                                      invariant_culture_info,(MethodInfo *)0x0);
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                      (this_02,StringLiteral_distanceToAvatar,fVar8,(MethodInfo *)0x0);
            pDVar1 = (this->fields).woData;
            pSVar9 = (this->fields).toggle;
            if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar1,(Object *)StringLiteral_forceFirstPersonCamera,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pSVar10 = StringLiteral_forceFirstPersonCamera,
                pSVar9 != (SettingsToggle *)0x0)) && (pOVar7 != (Object *)0x0)) {
              if ((pOVar7->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar7,lRam_?);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              value = *(bool *)&pOVar7[1].klass;
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_,
                              StringLiteral_forceFirstPersonCamera,value,0,unaff_RDI);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              bVar2 = iRam_? != 0;
              (pSVar9->fields).key = pSVar10;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(pSVar9->fields).key >> 0xc);
                puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar5 = *puVar6;
                  LOCK();
                  uVar4 = *puVar6;
                  if (uVar5 == uVar4) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar5 != uVar4);
              }
              pTVar12 = (pSVar9->fields).toggle;
              if (pTVar12 != (Toggle *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                          (pTVar12,value,1,(MethodInfo *)0x0);
                pTVar12 = (pSVar9->fields).toggle;
                if (pTVar12 != (Toggle *)0x0) {
                  pTVar13 = (pTVar12->fields).onValueChanged;
                  uVar14 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
                  FUN_?(uVar14,pSVar9,MethodInfo__SettingsToggle__ValueChanged_bool_);
                  if (pTVar13 != (Toggle_ToggleEvent *)0x0) {
                    pMVar15 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                             ->klass->rgctx_data[2].method;
                    pIVar16 = pMVar15->klass;
                    if ((pIVar16->field_0x135 & 1) == 0) {
                      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
                    }
                    pvVar17 = pIVar16->rgctx_data[5].rgctxDataDummy;
                    if ((*(byte *)((longlong)pvVar17 + 0x135) & 1) == 0) {
                      pvVar17 = (void *)FUN_?(pvVar17);
                    }
                    uVar18 = FUN_?(pvVar17);
                    pIVar16 = pMVar15->klass;
                    if ((pIVar16->field_0x135 & 1) == 0) {
                      pIVar16 = (Il2CppClass *)FUN_?(pIVar16);
                    }
                    FUN_?(uVar18,uVar14,
                                  (pIVar16->rgctx_data[7].method)->klass->rgctx_data[4].
                                  rgctxDataDummy);
                    if ((pTVar13 != (Toggle_ToggleEvent *)0x0) &&
                       (pIVar19 = (pTVar13->fields)._._.m_Calls, pIVar19 != (InvokableCallList *)0x0))
                    {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pLVar20 = (pIVar19->fields).m_RuntimeCalls;
                      if (pLVar20 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                        FUN_?(pLVar20,uVar18);
                        (pIVar19->fields).m_NeedsUpdate = 1;
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnAmbientOcclusionSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnAmbientOcclusionSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).ambientOcclusionSettings;
  if ((this_00 == (CameraBoxAmbientOcclusionSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnBloomSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnBloomSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).bloomSettings;
  if ((this_00 == (CameraBoxBloomSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnColorSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnColorSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).colorsSettings;
  if ((this_00 == (CameraBoxColorsSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnDepthOfFieldSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnDepthOfFieldSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).depthOfFieldSettings;
  if ((this_00 == (CameraBoxDepthOfFieldSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnGrainSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnGrainSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).grainSettings;
  if ((this_00 == (CameraBoxGrainSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnLensDistortionSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnLensDistortionSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).lensDistortionSettings;
  if ((this_00 == (CameraBoxLensDistortionSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnSettingChanged
               (CameraBoxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_distanceToAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = CameraBoxColorsSettings::CameraBoxColorsSettings_IsKey(key,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = CameraBoxBloomSettings::CameraBoxBloomSettings_IsKey(key,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_IsKey
                        (key,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_IsKey
                          (key,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = CameraBoxVignetteSettings::CameraBoxVignetteSettings_IsKey(key,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            bVar1 = CameraBoxGrainSettings::CameraBoxGrainSettings_IsKey(key,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              bVar1 = CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_IsKey
                                (key,(MethodInfo *)0x0);
              if (bVar1 == 0) {
                if ((key == StringLiteral_distanceToAvatar) ||
                   ((((key != (String *)0x0 && (StringLiteral_distanceToAvatar != (String *)0x0)) &&
                     ((key->fields)._stringLength ==
                      (StringLiteral_distanceToAvatar->fields)._stringLength)) &&
                    (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                       ((uint8_t *)&(key->fields)._firstChar,
                                        (uint8_t *)
                                        &(StringLiteral_distanceToAvatar->fields)._firstChar,
                                        (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0)
                    , bVar1 != 0)))) {
                  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  provider = mscorlib.dll::System::Globalization::CultureInfo::
                             CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  afStackX_10[0] =
                       mscorlib.dll::System::Convert::Convert_ToSingle_1
                                 (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
                  value = (Object *)FUN_?(uRam_?,afStackX_10);
                }
              }
              else {
                this_01 = (this->fields).lensDistortionSettings;
                if (this_01 == (CameraBoxLensDistortionSettings *)0x0) goto code_?;
                value = CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_ValueToSend
                                  (this_01,key,value,(MethodInfo *)0x0);
              }
            }
            else {
              this_02 = (this->fields).grainSettings;
              if (this_02 == (CameraBoxGrainSettings *)0x0) goto code_?;
              value = CameraBoxGrainSettings::CameraBoxGrainSettings_ValueToSend
                                (this_02,key,value,(MethodInfo *)0x0);
            }
          }
          else {
            this_03 = (this->fields).vignetteSettings;
            if (this_03 == (CameraBoxVignetteSettings *)0x0) goto code_?;
            value = CameraBoxVignetteSettings::CameraBoxVignetteSettings_ValueToSend
                              (this_03,key,value,(MethodInfo *)0x0);
          }
        }
        else {
          this_04 = (this->fields).depthOfFieldSettings;
          if (this_04 == (CameraBoxDepthOfFieldSettings *)0x0) goto code_?;
          value = CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_ValueToSend
                            (this_04,key,value,(MethodInfo *)0x0);
        }
      }
      else {
        this_05 = (this->fields).ambientOcclusionSettings;
        if (this_05 == (CameraBoxAmbientOcclusionSettings *)0x0) goto code_?;
        value = CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_ValueToSend
                          (this_05,key,value,(MethodInfo *)0x0);
      }
    }
    else {
      this_06 = (this->fields).bloomSettings;
      if (this_06 == (CameraBoxBloomSettings *)0x0) goto code_?;
      value = CameraBoxBloomSettings::CameraBoxBloomSettings_ValueToSend
                        (this_06,key,value,(MethodInfo *)0x0);
    }
  }
  else {
    value = CameraBoxColorsSettings::CameraBoxColorsSettings_ValueToSend
                      (key,value,(MethodInfo *)0x0);
  }
  pSVar2 = (this->fields).settingsBase;
  if (pSVar2 != (SettingsBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((((pSVar2->fields).woID != -1) && (key != (String *)0x0)) &&
       ((key->fields)._stringLength != 0)) {
      this_07 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_07 != (MVWorldObjectClientManager *)0x0) {
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_07,(pSVar2->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar3 = 0;
        WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
        this_00 = (pSVar2->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,value,(InsertionBehavior__Enum)uVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          this_08 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_08,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_08 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_08,(Object *)key,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                      (wo,this_08,(wo->klass->vtable).PartialUpdateWOData.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVignetteSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnVignetteSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).vignetteSettings;
  if ((this_00 == (CameraBoxVignetteSettings *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
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
  (*pcRam_?)(pvVar2,1);
  return;
}

