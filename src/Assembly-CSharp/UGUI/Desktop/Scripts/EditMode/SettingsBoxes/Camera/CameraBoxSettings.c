
/* Object GetSetting(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxSettings::CameraBoxSettings_GetSetting
                   (CameraBoxSettings *this,String *dataKey,Object *defaultVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (this->fields).woData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_00,(Object *)dataKey,&pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      defaultVal = pOStack_1;
    }
    return defaultVal;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
}


/* Dictionary`2[System.Object,System.Object] InitData() */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings::
CameraBoxSettings_InitData(CameraBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&StringLiteral_forceFirstPersonCamera);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).cameraWorldObjectID,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      pDVar2 = (pMVar1->fields).data;
      pOVar3 = (Object *)func_?();
      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_forceFirstPersonCamera,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        this = (CameraBoxSettings *)((uint)this & 0xffffff);
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppColorsOn,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppColorsPExp,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppColorsTemp,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppColorsSatur,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppColorContr,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        if (cRam_? == '\0') {
          ppBStack4 = &TypeInfo__System__Boolean;
          func_?();
          ppMStack5 =
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
          ;
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        ppBStack4 = (Boolean__Class **)((int)&this + 3);
        this = (CameraBoxSettings *)((uint)this & 0xffffff);
        ppMStack5 = (MethodInfo **)TypeInfo__System__Boolean;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomOn,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomInty,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomSKnee,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        puStack6 = &stack0xfffffff0;
        pIStack7 = TypeInfo__System__Int32;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomDiff,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomColR,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomColG,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppBloomColB,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        if (cRam_? == '\0') {
          ppBStack8 = &TypeInfo__System__Boolean;
          func_?();
          ppMStack9 =
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
          ;
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        ppBStack8 = (Boolean__Class **)((int)&this + 3);
        this = (CameraBoxSettings *)((uint)this & 0xffffff);
        ppMStack9 = (MethodInfo **)TypeInfo__System__Boolean;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppAOOn,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppAOInty,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppAOThick,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        puStack10 = &stack0xffffffe8;
        pSStack11 = TypeInfo__System__Single;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppAOColR,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppAOColG,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppAOColB,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        if (cRam_? == '\0') {
          ppBStack12 = &TypeInfo__System__Boolean;
          func_?();
          ppMStack13 =
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
          ;
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        ppBStack12 = (Boolean__Class **)((int)&this + 3);
        this = (CameraBoxSettings *)((uint)this & 0xffffff);
        ppMStack13 = (MethodInfo **)TypeInfo__System__Boolean;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppDofOn,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppDofPFDist,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppDofApert,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        puStack14 = &stack0xffffffe8;
        pIStack15 = TypeInfo__System__Int32;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppDofFLen,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppDofMBlur,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        CameraBoxVignetteSettings::CameraBoxVignetteSettings_InitData(pDVar2,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          ppBStack16 = &TypeInfo__System__Boolean;
          func_?();
          ppMStack17 =
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
          ;
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        ppBStack16 = (Boolean__Class **)((int)&this + 3);
        this = (CameraBoxSettings *)((uint)this & 0xffffff);
        ppMStack17 = (MethodInfo **)TypeInfo__System__Boolean;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppGrainOn,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppGrainInt,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppGrainSize,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppGrainLumCon,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        if (cRam_? == '\0') {
          ppBStack18 = &TypeInfo__System__Boolean;
          func_?();
          ppMStack19 =
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
          ;
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        ppBStack18 = (Boolean__Class **)((int)&this + 3);
        this = (CameraBoxSettings *)((uint)this & 0xffffff);
        ppMStack19 = (MethodInfo **)TypeInfo__System__Boolean;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppLensDistOn,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppLensDistInt,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppLensDistXmult,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        puStack20 = &stack0xffffffe8;
        pIStack21 = TypeInfo__System__Int32;
        pOVar3 = (Object *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryAdd
                  (pDVar2,(Object *)StringLiteral_ppLensDistYmult,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                  );
        return pDVar2;
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar22)();
  return pDVar2;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_Initialize
               (CameraBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_distanceToAvatar);
    func_?(&StringLiteral_forceFirstPersonCamera);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  (this->fields).cameraWorldObjectID = woID;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CameraSettings,
               (MethodInfo *)0x0);
    pDVar1 = CameraBoxSettings_InitData(this,(MethodInfo *)0x0);
    (this->fields).woData = pDVar1;
    func_?(&(this->fields).woData,pDVar1);
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields).woData;
    this_01 = (this->fields).slider;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)StringLiteral_distanceToAvatar,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      fVar5 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                        ((Object *)TVar3.m_Index,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
      if (this_01 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (this_01,StringLiteral_distanceToAvatar,fVar5,3.0,30.0,(MethodInfo *)0x0);
        pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this->fields).woData;
        this_02 = (this->fields).inputField;
        if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (pDVar2,(Object *)StringLiteral_distanceToAvatar,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          pCVar4 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          fVar5 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                            ((Object *)TVar3.m_Index,(IFormatProvider *)pCVar4,(MethodInfo *)0x0);
          if (this_02 != (SettingsInputFieldSlider *)0x0) {
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (this_02,StringLiteral_distanceToAvatar,fVar5,(MethodInfo *)0x0);
            pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (this->fields).woData;
            this_03 = (this->fields).toggle;
            if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar2,(Object *)StringLiteral_forceFirstPersonCamera,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              uVar6 = CONCAT44(TypeInfo__System__Boolean,TVar3.m_Index);
              if ((this_03 != (SettingsToggle *)0x0) && (TVar3.m_Index != 0)) {
                if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                    (TypeInfo__System__Boolean->_0).element_class) {
                  pbVar7 = (bool *)func_?(TVar3.m_Index);
                  SettingsToggle::SettingsToggle_Initialize
                            (this_03,StringLiteral_forceFirstPersonCamera,*pbVar7,(MethodInfo *)0x0)
                  ;
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  uVar6 = func_?();
code_?:
  func_?(uVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnAmbientOcclusionSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnAmbientOcclusionSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).ambientOcclusionSettings;
  if (this_00 != (CameraBoxAmbientOcclusionSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnBloomSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnBloomSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).bloomSettings;
  if (this_00 != (CameraBoxBloomSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnColorSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnColorSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).colorsSettings;
  if (this_00 != (CameraBoxColorsSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDepthOfFieldSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnDepthOfFieldSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).depthOfFieldSettings;
  if (this_00 != (CameraBoxDepthOfFieldSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnGrainSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnGrainSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).grainSettings;
  if (this_00 != (CameraBoxGrainSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLensDistortionSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnLensDistortionSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).lensDistortionSettings;
  if (this_00 != (CameraBoxLensDistortionSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnSettingChanged
               (CameraBoxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_distanceToAvatar);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppColorsOn);
    func_?(&StringLiteral_ppColorsTemp);
    func_?(&StringLiteral_ppColorsPExp);
    func_?(&StringLiteral_ppColorContr);
    func_?(&StringLiteral_ppColorsSatur);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppColorsOn,(MethodInfo *)0x0);
  if ((((bVar1 == 0) &&
       (bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppColorsPExp,(MethodInfo *)0x0), bVar1 == 0)) &&
      (bVar1 = mscorlib.dll::System::String::String_op_Equality
                         (key,StringLiteral_ppColorsTemp,(MethodInfo *)0x0), bVar1 == 0)) &&
     ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                         (key,StringLiteral_ppColorsSatur,(MethodInfo *)0x0), bVar1 == 0 &&
      (bVar1 = mscorlib.dll::System::String::String_op_Equality
                         (key,StringLiteral_ppColorContr,(MethodInfo *)0x0), bVar1 == 0)))) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pSVar2 = StringLiteral_ppBloomOn;
    this = (CameraBoxSettings *)StringLiteral_ppBloomOn;
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppBloomOn,(MethodInfo *)0x0);
    if (((((bVar1 == 0) &&
          (bVar1 = mscorlib.dll::System::String::String_op_Equality
                             (key,StringLiteral_ppBloomInty,(MethodInfo *)0x0), bVar1 == 0)) &&
         (bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppBloomSKnee,(MethodInfo *)0x0), bVar1 == 0)) &&
        ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppBloomDiff,(MethodInfo *)0x0), bVar1 == 0 &&
         (bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppBloomColR,(MethodInfo *)0x0), bVar1 == 0)))) &&
       ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                           (key,StringLiteral_ppBloomColG,(MethodInfo *)0x0), bVar1 == 0 &&
        (bVar1 = mscorlib.dll::System::String::String_op_Equality
                           (key,StringLiteral_ppBloomColB,(MethodInfo *)0x0), bVar1 == 0)))) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppAOOn,(MethodInfo *)0x0);
      if (((bVar1 == 0) &&
          (bVar1 = mscorlib.dll::System::String::String_op_Equality
                             (key,StringLiteral_ppAOInty,(MethodInfo *)0x0), bVar1 == 0)) &&
         ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                             (key,StringLiteral_ppAOThick,(MethodInfo *)0x0), bVar1 == 0 &&
          (((bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppAOColR,(MethodInfo *)0x0), bVar1 == 0 &&
            (bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppAOColG,(MethodInfo *)0x0), bVar1 == 0)) &&
           (bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppAOColB,(MethodInfo *)0x0), bVar1 == 0)))))) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppDofOn,(MethodInfo *)0x0);
        if ((((bVar1 != 0) ||
             (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppDofPFDist,(MethodInfo *)0x0), bVar1 != 0)) ||
            (bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppDofApert,(MethodInfo *)0x0), bVar1 != 0)) ||
           ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppDofFLen,(MethodInfo *)0x0), bVar1 != 0 ||
            (bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppDofMBlur,(MethodInfo *)0x0), bVar1 != 0)))) {
          if (*(int *)&pSVar2[2].fields._firstChar == 0) goto code_?;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppDofPFDist,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            this = (CameraBoxSettings *)StringLiteral_ppDofApert;
            bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppDofApert,(MethodInfo *)0x0);
            if (((bVar1 == 0) &&
                (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                   (key,StringLiteral_ppDofFLen,(MethodInfo *)0x0), bVar1 == 0)) &&
               (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                  (key,StringLiteral_ppDofMBlur,(MethodInfo *)0x0), bVar1 == 0))
            goto code_?;
          }
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
          goto code_?;
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppVignOn,(MethodInfo *)0x0);
        if ((((bVar1 == 0) &&
             (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppVignInty,(MethodInfo *)0x0), bVar1 == 0)) &&
            (bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppVignSmooth,(MethodInfo *)0x0), bVar1 == 0)) &&
           (((bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppVignRness,(MethodInfo *)0x0), bVar1 == 0 &&
             (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppVignRnded,(MethodInfo *)0x0), bVar1 == 0)) &&
            ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppVignColR,(MethodInfo *)0x0), bVar1 == 0 &&
             ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                                 (key,StringLiteral_ppVignColG,(MethodInfo *)0x0), bVar1 == 0 &&
              (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                 (key,StringLiteral_ppVignColB,(MethodInfo *)0x0), bVar1 == 0)))))))
           ) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppGrainOn,(MethodInfo *)0x0);
          if ((((bVar1 == 0) &&
               (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                  (key,StringLiteral_ppGrainInt,(MethodInfo *)0x0), bVar1 == 0)) &&
              (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                 (key,StringLiteral_ppGrainSize,(MethodInfo *)0x0), bVar1 == 0)) &&
             (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppGrainLumCon,(MethodInfo *)0x0), bVar1 == 0)) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppLensDistOn,(MethodInfo *)0x0);
            if (((bVar1 == 0) &&
                (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                   (key,StringLiteral_ppLensDistInt,(MethodInfo *)0x0), bVar1 == 0))
               && ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                                      (key,StringLiteral_ppLensDistXmult,(MethodInfo *)0x0),
                   bVar1 == 0 &&
                   (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                      (key,StringLiteral_ppLensDistYmult,(MethodInfo *)0x0),
                   bVar1 == 0)))) {
              bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_distanceToAvatar,(MethodInfo *)0x0);
              if (bVar1 != 0) {
                if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor ==
                    0) {
                  func_?();
                }
                provider = mscorlib.dll::System::Globalization::CultureInfo::
                           CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                mscorlib.dll::System::Convert::Convert_ToSingle_1
                          (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
                value = (Object *)func_?();
              }
            }
            else {
              if (pSVar2[3].fields._stringLength == 0) goto code_?;
              if (cRam_? == '\0') {
                func_?();
                func_?();
                func_?();
                func_?();
                func_?();
                cRam_? = '\x01';
              }
              this = (CameraBoxSettings *)StringLiteral_ppLensDistInt;
              bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppLensDistInt,(MethodInfo *)0x0);
              if (((bVar1 != 0) ||
                  (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                     (key,StringLiteral_ppLensDistXmult,(MethodInfo *)0x0),
                  bVar1 != 0)) ||
                 (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                    (key,StringLiteral_ppLensDistYmult,(MethodInfo *)0x0),
                 bVar1 != 0)) {
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          else {
            if (pSVar2[3].monitor == (MonitorData *)0x0) goto code_?;
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            this = (CameraBoxSettings *)StringLiteral_ppGrainInt;
            bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppGrainInt,(MethodInfo *)0x0);
            if (((bVar1 != 0) ||
                (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                   (key,StringLiteral_ppGrainSize,(MethodInfo *)0x0), bVar1 != 0))
               || (bVar1 = mscorlib.dll::System::String::String_op_Equality
                                     (key,StringLiteral_ppGrainLumCon,(MethodInfo *)0x0), bVar1 != 0
                  )) {
              if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
          if (pSVar2[3].klass == (String__Class *)0x0) goto code_?;
          value = CameraBoxVignetteSettings::CameraBoxVignetteSettings_ValueToSend
                            ((CameraBoxVignetteSettings *)pSVar2[3].klass,key,value,
                             (MethodInfo *)0x0);
        }
      }
      else {
        iVar3 = pSVar2[2].fields._stringLength;
        if (iVar3 == 0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        this = (CameraBoxSettings *)StringLiteral_ppAOInty;
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppAOInty,(MethodInfo *)0x0);
        if ((bVar1 != 0) ||
           (bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppAOThick,(MethodInfo *)0x0), bVar1 != 0)) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
          goto code_?;
        }
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppAOColR,(MethodInfo *)0x0);
        if ((bVar1 != 0) ||
           ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppAOColG,(MethodInfo *)0x0), bVar1 != 0 ||
            (bVar1 = mscorlib.dll::System::String::String_op_Equality
                               (key,StringLiteral_ppAOColB,(MethodInfo *)0x0), bVar1 != 0)))) {
          if (*(SettingsSlider **)(iVar3 + 0x34) == (SettingsSlider *)0x0) goto code_?;
          SettingsSlider::SettingsSlider_get_Value
                    (*(SettingsSlider **)(iVar3 + 0x34),(MethodInfo *)0x0);
          if (*(SettingsSlider **)(iVar3 + 0x38) == (SettingsSlider *)0x0) goto code_?;
          SettingsSlider::SettingsSlider_get_Value
                    (*(SettingsSlider **)(iVar3 + 0x38),(MethodInfo *)0x0);
          if (*(SettingsSlider **)(iVar3 + 0x3c) == (SettingsSlider *)0x0) goto code_?;
          SettingsSlider::SettingsSlider_get_Value
                    (*(SettingsSlider **)(iVar3 + 0x3c),(MethodInfo *)0x0);
          if (*(int **)(iVar3 + 0x30) == (int *)0x0) goto code_?;
          (**(code **)(**(int **)(iVar3 + 0x30) + 0x178))();
        }
      }
    }
    else {
      if ((CameraBoxBloomSettings *)pSVar2[2].monitor == (CameraBoxBloomSettings *)0x0)
      goto code_?;
      value = CameraBoxBloomSettings::CameraBoxBloomSettings_ValueToSend
                        ((CameraBoxBloomSettings *)pSVar2[2].monitor,key,value,(MethodInfo *)0x0);
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this = (CameraBoxSettings *)StringLiteral_ppColorsPExp;
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppColorsPExp,(MethodInfo *)0x0);
    if (((bVar1 != 0) ||
        (bVar1 = mscorlib.dll::System::String::String_op_Equality
                           (key,StringLiteral_ppColorsTemp,(MethodInfo *)0x0), bVar1 != 0)) ||
       ((bVar1 = mscorlib.dll::System::String::String_op_Equality
                           (key,StringLiteral_ppColorsSatur,(MethodInfo *)0x0), bVar1 != 0 ||
        (bVar1 = mscorlib.dll::System::String::String_op_Equality
                           (key,StringLiteral_ppColorContr,(MethodInfo *)0x0), bVar1 != 0)))) {
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
code_?:
      value = (Object *)func_?();
    }
  }
code_?:
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnVignetteSettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::CameraBoxSettings
     ::CameraBoxSettings_OnVignetteSettingsOpen(CameraBoxSettings *this,MethodInfo *method)

{
  this_00 = (this->fields).vignetteSettings;
  if (this_00 != (CameraBoxVignetteSettings *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

