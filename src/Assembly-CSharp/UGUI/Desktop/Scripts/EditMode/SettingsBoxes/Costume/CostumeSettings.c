
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_Initialize
               (CostumeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_PlayersCanCollide);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if (woID == -1) {
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    }
    pDVar1 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultData
                       ((MethodInfo *)0x0);
    ppDVar2 = &(this->fields).data;
    *ppDVar2 = pDVar1;
    func_?(ppDVar2,pDVar1);
    if ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2,
                       (Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index == 0) {
      (this->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
      ppDVar2 = &(this->fields).itemData;
      func_?();
      this_00 = (this->fields).settingsBase;
      if (this_00 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_Initialize
                (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Costume,(MethodInfo *)0x0);
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
      }
      VVar4 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                         (StringLiteral_Health,(MethodInfo *)0x0);
      VVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                         (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
      VVar6 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                         (StringLiteral_TrailLength,(MethodInfo *)0x0);
      this_01 = (this->fields).nameInputField;
      if (((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 ==
           (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                             *ppDVar2,(Object *)StringLiteral_Name,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 == (SettingsInputField *)0x0)) goto code_?;
      value.m_Index = 0;
      if (TVar3.m_Index == 0) {
code_?:
        SettingsInputField::SettingsInputField_Initialize
                  (this_01,StringLiteral_Name,(String *)value.m_Index,(MethodInfo *)0x0);
        pSVar7 = (this->fields).healthSlider;
        if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
            (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                *ppDVar2,(Object *)StringLiteral_Health,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pSVar7 == (SettingsSlider *)0x0)) || (TVar3.m_Index == 0))
        goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar8 = (float *)func_?();
          fStack_9 = VVar4.Item2;
          fStack_10 = VVar4.Item1;
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar7,StringLiteral_Health,*pfVar8,fStack_10,fStack_9,(MethodInfo *)0x0);
          pSVar11 = (this->fields).healthInputSlider;
          if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
              (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                  *ppDVar2,(Object *)StringLiteral_Health,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pSVar11 != (SettingsInputFieldSlider *)0x0)) &&
             (TVar3.m_Index != 0)) {
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                (TypeInfo__System__Single->_0).element_class) goto code_?;
            pfVar8 = (float *)func_?();
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (pSVar11,StringLiteral_Health,*pfVar8,(MethodInfo *)0x0);
            pSVar7 = (this->fields).movementSpeedSlider;
            if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
                  (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
                (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                    *ppDVar2,(Object *)StringLiteral_MovementSpeed,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pSVar7 != (SettingsSlider *)0x0)) && (TVar3.m_Index != 0)) {
              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                  (TypeInfo__System__Single->_0).element_class) goto code_?;
              pfVar8 = (float *)func_?();
              fStack_12 = VVar5.Item2;
              fStack_13 = VVar5.Item1;
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar7,StringLiteral_MovementSpeed,*pfVar8,fStack_13,fStack_12,
                         (MethodInfo *)0x0);
              pSVar11 = (this->fields).movementSpeedInputSlider;
              if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
                  (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,UnityEngine::UIElements::TextureId]::
                           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                     ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                       *)*ppDVar2,(Object *)StringLiteral_MovementSpeed,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pSVar11 != (SettingsInputFieldSlider *)0x0)) &&
                 (TVar3.m_Index != 0)) {
                if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar8 = (float *)func_?();
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                          (pSVar11,StringLiteral_MovementSpeed,*pfVar8,(MethodInfo *)0x0);
                pSVar14 = (this->fields).playerInvisibleToggle;
                if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
                      (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
                    (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,UnityEngine::UIElements::TextureId]::
                             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                       ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                         *)*ppDVar2,(Object *)StringLiteral_PlayerInvisible,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       ), pSVar14 != (SettingsToggle *)0x0)) && (TVar3.m_Index != 0))
                {
                  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                  pbVar15 = (bool *)func_?();
                  SettingsToggle::SettingsToggle_Initialize
                            (pSVar14,StringLiteral_PlayerInvisible,*pbVar15,(MethodInfo *)0x0);
                  pSVar14 = (this->fields).playersCanCollideToggle;
                  if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2 !=
                        (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
                      (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,UnityEngine::UIElements::TextureId]::
                               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                           *)*ppDVar2,(Object *)StringLiteral_PlayersCanCollide,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         ), pSVar14 != (SettingsToggle *)0x0)) &&
                     (TVar3.m_Index != 0)) {
                    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                    pbVar15 = (bool *)func_?();
                    SettingsToggle::SettingsToggle_Initialize
                              (pSVar14,StringLiteral_PlayersCanCollide,*pbVar15,(MethodInfo *)0x0);
                    pSVar14 = (this->fields).trailToggle;
                    if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)*ppDVar2
                          != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
                        (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,UnityEngine::UIElements::TextureId]::
                                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                             *)*ppDVar2,(Object *)StringLiteral_TrailEnabled,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           ), pSVar14 != (SettingsToggle *)0x0)) &&
                       (TVar3.m_Index != 0)) {
                      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                      pbVar15 = (bool *)func_?();
                      SettingsToggle::SettingsToggle_Initialize
                                (pSVar14,StringLiteral_TrailEnabled,*pbVar15,(MethodInfo *)0x0);
                      pSVar7 = (this->fields).trailLengthSlider;
                      if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                            *ppDVar2 !=
                            (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) &&
                          (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,UnityEngine::UIElements::TextureId]::
                                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                             ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                               *)*ppDVar2,(Object *)StringLiteral_TrailLength,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             ), pSVar7 != (SettingsSlider *)0x0)) &&
                         (TVar3.m_Index != 0)) {
                        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                            (TypeInfo__System__Single->_0).element_class) goto code_?;
                        pfVar8 = (float *)func_?();
                        fStack_16 = VVar6.Item2;
                        fStack_17 = VVar6.Item1;
                        SettingsSlider::SettingsSlider_Initialize
                                  (pSVar7,StringLiteral_TrailLength,*pfVar8,fStack_17,fStack_16,
                                   (MethodInfo *)0x0);
                        pSVar11 = (this->fields).trailLengthInputSlider;
                        if ((((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                              *ppDVar2 !=
                              (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
                            && (TVar3 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Object,UnityEngine::UIElements::
                                        TextureId]::
                                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                                  ((
                                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                                  *)*ppDVar2,(Object *)StringLiteral_TrailLength,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar11 != (SettingsInputFieldSlider *)0x0)) &&
                           (TVar3.m_Index != 0)) {
                          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
                              (TypeInfo__System__Single->_0).element_class) goto code_?;
                          pfVar8 = (float *)func_?();
                          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                                    (pSVar11,StringLiteral_TrailLength,*pfVar8,(MethodInfo *)0x0);
                          pIVar18 = (this->fields).trailColorImage;
                          pDVar1 = *ppDVar2;
                          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__Extensions);
                          }
                          pCVar19 = Extensions::Extensions_GetColor
                                              ((Color *)&stack0xffffffd8,pDVar1,
                                               StringLiteral_TrailColor,(MethodInfo *)0x0);
                          if (pIVar18 != (Image *)0x0) {
                            (*(code *)(pIVar18->klass->vtable).set_color.method)
                                      (pIVar18,pCVar19->r,pCVar19->g,pCVar19->b,pCVar19->a);
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
          goto code_?;
        }
        goto code_?;
      }
      if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
        value = TVar3;
      }
      if ((String *)value.m_Index != (String *)0x0) goto code_?;
      goto code_?;
    }
    bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) < bVar20) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar20 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    (this->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)TVar3.m_Index;
    bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar20 <= *(byte *)(*(int *)TVar3.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar20 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,woID,(MethodInfo *)0x0), pMVar21 != (MVWorldObject *)0x0)) {
      ppDVar2 = &(this->fields).data;
      *ppDVar2 = (pMVar21->fields).data;
      func_?(ppDVar2);
      pDVar1 = CostumeSettings_ReadWorldObjectItemData(this,*ppDVar2,(MethodInfo *)0x0);
      (this->fields).itemData = pDVar1;
      goto code_?;
    }
code_?:
    TVar3.m_Index = func_?();
code_?:
    func_?(TVar3.m_Index);
    TVar3.m_Index = extraout_ECX;
code_?:
    func_?(TVar3.m_Index);
  }
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_OnColorEdited(CostumeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_itemData);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).colorR;
  if (pSVar1 != (SettingsSlider *)0x0) {
    fVar2 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).colorB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        fVar4 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pSVar1 = (this->fields).colorA;
        if (pSVar1 != (SettingsSlider *)0x0) {
          fVar5 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
          pIVar6 = (this->fields).trailColorImage;
          if (pIVar6 != (Image *)0x0) {
            (*(code *)(pIVar6->klass->vtable).set_color.method)
                      (pIVar6,fVar2,fVar3,fVar4,fVar5,
                       (pIVar6->klass->vtable).get_raycastTarget.methodPtr);
            ppSVar7 = &(this->fields).editingColorKey;
            colorKey = *ppSVar7;
            hashtable = (this->fields).itemData;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Extensions);
            }
            color.g = fVar3;
            color.r = fVar2;
            color.b = fVar4;
            color.a = fVar5;
            Extensions::Extensions_SetColor(hashtable,colorKey,color,(MethodInfo *)0x0);
            this_00 = (this->fields).settingsBase;
            if (this_00 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        (this_00,StringLiteral_itemData,(Object *)(this->fields).itemData,
                         (MethodInfo *)0x0);
              *ppSVar7 = ::StringLiteral__;
              func_?(ppSVar7,::StringLiteral__);
              this_01 = (this->fields).colorPicker;
              if (this_01 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_01,0,(MethodInfo *)0x0);
                this_02 = (this->fields).canvas;
                if ((
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                    ->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(
                                 TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                                 );
                }
                if (this_02 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_sizeDelta
                            (this_02,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                                     ->static_fields->NormalEditingCanvasSize,(MethodInfo *)0x0);
                  return;
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


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_OnColorPressed(CostumeSettings *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_colorB);
    func_?(&StringLiteral_colorA);
    func_?(&StringLiteral_colorR);
    func_?(&StringLiteral_colorG);
    cRam_? = '\x01';
  }
  hashtable = (this->fields).itemData;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
  }
  pCVar1 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultColor
                     ((Color *)&fStack_2,colorKey,(MethodInfo *)0x0);
  fStack_2 = pCVar1->r;
  puStack_3 = (undefined *)pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  defaultColor.g = (float)puStack_3;
  defaultColor.r = fStack_2;
  defaultColor.b = fVar4;
  defaultColor.a = fVar5;
  pCVar1 = Extensions::Extensions_GetColorOrDefault
                     ((Color *)&fStack_2,hashtable,colorKey,defaultColor,(MethodInfo *)0x0);
  fStack_2 = pCVar1->r;
  puStack_3 = (undefined *)pCVar1->g;
  pSVar6 = (this->fields).colorR;
  if (pSVar6 != (SettingsSlider *)0x0) {
    value = StringLiteral_colorR;
    SettingsSlider::SettingsSlider_Initialize
              (pSVar6,StringLiteral_colorR,fStack_2,0.0,1.0,(MethodInfo *)0x0);
    pSVar7 = (this->fields).colorG;
    if (pSVar7 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar7,StringLiteral_colorG,(float)puStack_3,0.0,1.0,(MethodInfo *)0x0);
      pSVar7 = (this->fields).colorB;
      if (pSVar7 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar7,StringLiteral_colorB,(float)pSVar6,0.0,1.0,(MethodInfo *)0x0);
        pSVar6 = (this->fields).colorA;
        if (pSVar6 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar6,StringLiteral_colorA,(float)value,0.0,1.0,(MethodInfo *)0x0);
          pIVar8 = (this->fields).colorPickerPreview;
          if (pIVar8 != (Image *)0x0) {
            (*(code *)(pIVar8->klass->vtable).set_color.method)();
            (this->fields).editingColorKey = colorKey;
            func_?();
            this_00 = (this->fields).colorPicker;
            if (this_00 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              this_01 = (this->fields).canvas;
              if ((
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                  ->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (this_01 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                          (this_01,TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                                   ->static_fields->ColorEditingCanvasSize,(MethodInfo *)0x0);
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


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_OnSettingChanged
               (CostumeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_color);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return;
  }
  if (key != (String *)0x0) {
    if (5 < (key->fields)._stringLength) {
      a = mscorlib.dll::System::String::String_Substring_1(key,0,5,(MethodInfo *)0x0);
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_color,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pSVar2 = (this->fields).colorR;
        pIVar3 = (this->fields).colorPickerPreview;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
          pSVar2 = (this->fields).colorG;
          if (pSVar2 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
            pSVar2 = (this->fields).colorB;
            if (pSVar2 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
              pSVar2 = (this->fields).colorA;
              if ((pSVar2 != (SettingsSlider *)0x0) &&
                 (SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0),
                 pIVar3 != (Image *)0x0)) {
                (*(code *)(pIVar3->klass->vtable).set_color.method)();
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    this_00 = (this->fields).itemData;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_01 = (this->fields).settingsBase;
      if (this_01 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged
                  (this_01,StringLiteral_itemData,(Object *)(this->fields).itemData,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectItemData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings::
CostumeSettings_ReadWorldObjectItemData
          (CostumeSettings *this,Dictionary_2_System_Object_System_Object_ *woData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                   );
    func_?(&
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                   );
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&
                    System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_TrailEnabled);
    func_?(&StringLiteral_TrailLength);
    func_?(&StringLiteral_PlayersCanCollide);
    func_?(&StringLiteral_TrailColor);
    func_?(&StringLiteral_PlayerInvisible);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_MovementSpeed);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultItemData
                      ((MethodInfo *)0x0);
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)woData,
                       (Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (woData,(Object *)StringLiteral_itemData,(Object *)(this->fields).itemData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return (this->fields).itemData;
    }
    hashtable = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)woData,
                           (Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (hashtable.m_Index == 0) {
      hashtable.m_Index = 0;
    }
    else {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*(int *)hashtable.m_Index + 0xb8) < bVar2) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)hashtable.m_Index + 100) + -4 + (uint)bVar2 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_Name,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      defaultValue.m_Index = 0;
      if (TVar3.m_Index == 0) {
code_?:
        pOVar4 = Extensions::Extensions_GetValueOrDefault_3
                           ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                            StringLiteral_Name,(Object *)defaultValue.m_Index,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_Name
                   ,pOVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_Health,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        pMVar5 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (TVar3.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar6 = (float *)func_?();
          Extensions::Extensions_GetValueOrDefault_4
                    ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                     StringLiteral_Health,*pfVar6,pMVar5);
          pOVar4 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_Health,pOVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_00,(Object *)StringLiteral_MovementSpeed,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          pMVar5 = 
          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
          ;
          if (TVar3.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
              (TypeInfo__System__Single->_0).element_class) {
            pfVar6 = (float *)func_?();
            Extensions::Extensions_GetValueOrDefault_4
                      ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                       StringLiteral_MovementSpeed,*pfVar6,pMVar5);
            pOVar4 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_MovementSpeed,pOVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_00,(Object *)StringLiteral_TrailLength,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            pMVar5 = 
            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
            ;
            if (TVar3.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                (TypeInfo__System__Single->_0).element_class) {
              pfVar6 = (float *)func_?();
              Extensions::Extensions_GetValueOrDefault_4
                        ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                         StringLiteral_TrailLength,*pfVar6,pMVar5);
              pOVar4 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,
                         (Object *)StringLiteral_TrailLength,pOVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (this_00,(Object *)StringLiteral_PlayerInvisible,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              pMVar5 = 
              bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
              ;
              if (TVar3.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                  (TypeInfo__System__Boolean->_0).element_class) {
                pbVar7 = (bool *)func_?();
                Extensions::Extensions_GetValueOrDefault
                          ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                           StringLiteral_PlayerInvisible,*pbVar7,pMVar5);
                pOVar4 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                           (Object *)StringLiteral_PlayerInvisible,pOVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (this_00,(Object *)StringLiteral_PlayersCanCollide,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                pMVar5 = 
                bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                ;
                if (TVar3.m_Index == 0) goto code_?;
                if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                    (TypeInfo__System__Boolean->_0).element_class) {
                  pbVar7 = (bool *)func_?();
                  Extensions::Extensions_GetValueOrDefault
                            ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                             StringLiteral_PlayersCanCollide,*pbVar7,pMVar5);
                  pOVar4 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)StringLiteral_PlayersCanCollide,pOVar4,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                    (this_00,(Object *)StringLiteral_TrailEnabled,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                  pMVar5 = 
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                  ;
                  if (TVar3.m_Index == 0) goto code_?;
                  if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                      (TypeInfo__System__Boolean->_0).element_class) {
                    pbVar7 = (bool *)func_?();
                    Extensions::Extensions_GetValueOrDefault
                              ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,
                               StringLiteral_TrailEnabled,*pbVar7,pMVar5);
                    pOVar4 = (Object *)func_?();
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              ((Dictionary_2_System_Object_System_Object_ *)this_00,
                               (Object *)StringLiteral_TrailEnabled,pOVar4,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      (this_00,(Object *)StringLiteral_TrailColor,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                    pMVar5 = 
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                    ;
                    if (TVar3.m_Index == 0) {
                      pOVar4 = (Object *)0x0;
code_?:
                      pOVar4 = Extensions::Extensions_GetValueOrDefault_3
                                         ((Dictionary_2_System_Object_System_Object_ *)
                                          hashtable.m_Index,StringLiteral_TrailColor,pOVar4,pMVar5);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                                 (Object *)StringLiteral_TrailColor,pOVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      return (Dictionary_2_System_Object_System_Object_ *)this_00;
                    }
                    pOVar4 = (Object *)func_?();
                    if (pOVar4 != (Object *)0x0) goto code_?;
                    func_?();
                  }
                }
              }
            }
          }
        }
        func_?();
      }
      else {
        if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
          defaultValue = TVar3;
        }
        if ((Object *)defaultValue.m_Index != (Object *)0x0) goto code_?;
      }
      func_?();
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
  return pDVar9;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_UpdateColorPickerPreview(CostumeSettings *this,MethodInfo *method)

{
  pSVar1 = (this->fields).colorR;
  pIVar2 = (this->fields).colorPickerPreview;
  if (pSVar1 != (SettingsSlider *)0x0) {
    fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      fVar4 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).colorB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        fVar5 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pSVar1 = (this->fields).colorA;
        if (pSVar1 != (SettingsSlider *)0x0) {
          fVar6 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
          if (pIVar2 != (Image *)0x0) {
            (*(code *)(pIVar2->klass->vtable).set_color.method)
                      (pIVar2,fVar3,fVar4,fVar5,fVar6,
                       (pIVar2->klass->vtable).get_raycastTarget.methodPtr);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* CostumeSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                   );
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings->
           static_fields;
  (pCVar1->NormalEditingCanvasSize).x = 570.0;
  (pCVar1->NormalEditingCanvasSize).y = 945.0;
  pCVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings->
           static_fields;
  (pCVar1->ColorEditingCanvasSize).x = 800.0;
  (pCVar1->ColorEditingCanvasSize).y = 700.0;
  return;
}


/* CostumeSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings__ctor(CostumeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).editingColorKey;
  *ppSVar1 = ::StringLiteral__;
  func_?(ppSVar1,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

