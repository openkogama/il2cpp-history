
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::
     ObjectTransparencySettings::ObjectTransparencySettings_Initialize
               (ObjectTransparencySettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
    ;
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  id = woID;
  pOVar1 = this;
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_ModelTransparency,
             (MethodInfo *)0x0);
  if (id == -1) {
    if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_05 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->
              static_fields->DefaultValues;
  }
  else {
    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (ObjectTransparencySettings *)0x0;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_04,id,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) goto code_?;
    this_01 = (pMVar2->fields).data;
    if (cRam_? == '\0') {
      method = (MethodInfo *)
               &
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
      ;
      root = (GameObject *)&UNK_?;
      func_?();
      root = (GameObject *)
             &
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
      ;
      woID = (int32_t)&UNK_?;
      func_?();
      woID = (int32_t)&
                      TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
      ;
      this = (ObjectTransparencySettings *)&UNK_?;
      func_?();
      this = (ObjectTransparencySettings *)
             &TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData;
      func_?();
      cRam_? = '\x01';
    }
    this = (ObjectTransparencySettings *)0x0;
    root = (GameObject *)0x0;
    if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->_1).
        cctor_finished_or_no_cctor == 0) {
      method = (MethodInfo *)
               TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData;
      root = (GameObject *)&UNK_?;
      func_?();
    }
    this_05 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->
              static_fields->DefaultValues;
    if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
        cctor_finished_or_no_cctor == 0) {
      method = (MethodInfo *)
               TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys;
      root = (GameObject *)&UNK_?;
      func_?();
    }
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    method = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
    ;
    root = (GameObject *)&this;
    woID = (int32_t)TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                    static_fields->ShowOutline;
    this = (ObjectTransparencySettings *)this_01;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_01,(Object *)woID,(Object **)root,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 != 0) {
      if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        in_stack_4 =
             TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys;
        in_stack_5.m_Index = (int32_t)&UNK_?;
        func_?();
      }
      value = this;
      if (this_05 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      method = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
      ;
      root = (GameObject *)this;
      woID = (int32_t)TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                      ->static_fields->ShowOutline;
      this = (ObjectTransparencySettings *)this_05;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_05,(Object *)woID,(Object *)value
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_01,(Object *)
                               TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                               ->static_fields->Alpha,(Object **)&root,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 != 0) {
      if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        method = (MethodInfo *)
                 TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys;
        root = (GameObject *)&UNK_?;
        func_?();
      }
      if (this_05 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
      goto code_?;
      method = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
      ;
      woID = (int32_t)TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                      ->static_fields->Alpha;
      this = (ObjectTransparencySettings *)this_05;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                ((Dictionary_2_System_Object_System_Object_ *)this_05,(Object *)woID,(Object *)root,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
  }
  this_02 = (pOVar1->fields).toggle;
  if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)
             TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys;
    root = (GameObject *)&UNK_?;
    func_?();
  }
  pSVar6 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->ShowOutline;
  woID = (int32_t)pSVar6;
  if (this_05 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    method = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    this = (ObjectTransparencySettings *)&UNK_?;
    woID = (int32_t)this_05;
    root = (GameObject *)pSVar6;
    TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_05,(Object *)pSVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_02 != (SettingsToggle *)0x0) && (TVar7.m_Index != 0)) {
      pSVar8 = (Single__Class *)TypeInfo__System__Boolean;
      if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
          (TypeInfo__System__Boolean->_0).element_class) {
        in_stack_9 = &UNK_?;
        in_stack_5 = TVar7;
        pbVar10 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize(this_02,(String *)woID,*pbVar10,(MethodInfo *)0x0);
        this_03 = (pOVar1->fields).alphaSlider;
        woID = (int32_t)TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                        ->static_fields->Alpha;
        TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_05,(Object *)woID,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((this_03 == (SettingsSlider *)0x0) || (TVar7.m_Index == 0)) goto code_?;
        pSVar8 = TypeInfo__System__Single;
        if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          root = (GameObject *)&UNK_?;
          method = (MethodInfo *)TVar7;
          pfVar11 = (float *)func_?();
          SettingsSlider::SettingsSlider_Initialize
                    (this_03,(String *)woID,*pfVar11 * _UNK_?,0.0,100.0,(MethodInfo *)0x0);
          pOVar1 = (ObjectTransparencySettings *)(pOVar1->fields).alphaInputField;
          pSVar6 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   static_fields->Alpha;
          TVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_05,(Object *)pSVar6,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((pOVar1 == (ObjectTransparencySettings *)0x0) || (TVar7.m_Index == 0))
          goto code_?;
          pSVar8 = TypeInfo__System__Single;
          if (*(Il2CppClass **)(*(int *)TVar7.m_Index + 0x20) ==
              (TypeInfo__System__Single->_0).element_class) {
            root = (GameObject *)&UNK_?;
            method = (MethodInfo *)TVar7;
            pfVar11 = (float *)func_?();
            root = (GameObject *)(*pfVar11 * _UNK_?);
            method = (MethodInfo *)0x0;
            this = pOVar1;
            woID = (int32_t)pSVar6;
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      ((SettingsInputFieldSlider *)pOVar1,pSVar6,(float)root,(MethodInfo *)0x0);
            return;
          }
        }
      }
      woID = (int32_t)&UNK_?;
      root = (GameObject *)TVar7.m_Index;
      method = (MethodInfo *)pSVar8;
      func_?();
    }
  }
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::
     ObjectTransparencySettings::ObjectTransparencySettings_OnSettingChanged
               (ObjectTransparencySettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
    ;
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                         ->static_fields->Alpha,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    mscorlib.dll::System::Convert::Convert_ToSingle_1
              (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    value = (Object *)func_?(TypeInfo__System__Single);
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
ObjectTransparencySettings_ReadWorldObjectData
          (ObjectTransparencySettings *this,Dictionary_2_System_Object_System_Object_ *woData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
    ;
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
  }
  pDVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->static_fields->
           DefaultValues;
  if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (woData,(Object *)
                              TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                              ->static_fields->ShowOutline,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar1,(Object *)
                        TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                        ->static_fields->ShowOutline,
                 (Object *)
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = (Object__Class *)&stack0xfffffff4;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (woData,(Object *)
                              TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                              ->static_fields->Alpha,(Object **)value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (pDVar1,(Object *)
                        TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                        ->static_fields->Alpha,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
    }
    return pDVar1;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar1;
}

