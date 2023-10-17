
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
    (this->fields).data = pDVar1;
    func_?(&(this->fields).data,pDVar1);
    pDVar1 = (this->fields).data;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_itemData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else if (((((pDVar1->klass->_1).typeHierarchyDepth <
                  (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth) ||
                ((Dictionary_2_System_Object_System_Object___Class *)
                 (pDVar1->klass->_1).typeHierarchy
                 [(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ) || ((this->fields).itemData = pDVar1,
                     (pDVar1->klass->_1).typeHierarchyDepth <
                     (
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).typeHierarchyDepth)) ||
              ((Dictionary_2_System_Object_System_Object___Class *)
               (pDVar1->klass->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).typeHierarchyDepth - 1] !=
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      goto code_?;
    }
code_?:
    pOVar2 = (Object *)func_?();
code_?:
    func_?(pOVar2);
    pSVar3 = extraout_ECX;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,woID,(MethodInfo *)0x0), pMVar4 == (MVWorldObject *)0x0))
    goto code_?;
    (this->fields).data = (pMVar4->fields).data;
    func_?(&(this->fields).data);
    pDVar1 = CostumeSettings_ReadWorldObjectItemData(this,(this->fields).data,(MethodInfo *)0x0);
    (this->fields).itemData = pDVar1;
code_?:
    func_?();
    this_00 = (this->fields).settingsBase;
    if (this_00 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Costume,(MethodInfo *)0x0);
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    }
    VVar5 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                       (StringLiteral_Health,(MethodInfo *)0x0);
    VVar6 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                       (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
    VVar7 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                       (StringLiteral_TrailLength,(MethodInfo *)0x0);
    this_01 = (this->fields).nameInputField;
    pDVar1 = (this->fields).itemData;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pSVar3 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_Name,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), this_01 == (SettingsInputField *)0x0)) goto code_?;
    value = (String *)0x0;
    if (pSVar3 == (String *)0x0) {
code_?:
      SettingsInputField::SettingsInputField_Initialize
                (this_01,StringLiteral_Name,value,(MethodInfo *)0x0);
      pDVar1 = (this->fields).itemData;
      pSVar8 = (this->fields).healthSlider;
      if (((pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
          (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar1,(Object *)StringLiteral_Health,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pSVar8 == (SettingsSlider *)0x0)) || (pOVar2 == (Object *)0x0))
      goto code_?;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar9 = (float *)func_?();
        fStack_10 = VVar5.Item2;
        fStack_11 = VVar5.Item1;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar8,StringLiteral_Health,*pfVar9,fStack_11,fStack_10,(MethodInfo *)0x0);
        pDVar1 = (this->fields).itemData;
        pSVar12 = (this->fields).healthInputSlider;
        if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
            (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar1,(Object *)StringLiteral_Health,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), pSVar12 != (SettingsInputFieldSlider *)0x0)) &&
           (pOVar2 != (Object *)0x0)) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
          goto code_?;
          pfVar9 = (float *)func_?();
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                    (pSVar12,StringLiteral_Health,*pfVar9,(MethodInfo *)0x0);
          pDVar1 = (this->fields).itemData;
          pSVar8 = (this->fields).movementSpeedSlider;
          if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
              (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  (pDVar1,(Object *)StringLiteral_MovementSpeed,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  ), pSVar8 != (SettingsSlider *)0x0)) && (pOVar2 != (Object *)0x0))
          {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
            goto code_?;
            pfVar9 = (float *)func_?();
            fStack_13 = VVar6.Item2;
            fStack_14 = VVar6.Item1;
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar8,StringLiteral_MovementSpeed,*pfVar9,fStack_14,fStack_13,
                       (MethodInfo *)0x0);
            pDVar1 = (this->fields).itemData;
            pSVar12 = (this->fields).movementSpeedInputSlider;
            if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (pDVar1,(Object *)StringLiteral_MovementSpeed,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    ), pSVar12 != (SettingsInputFieldSlider *)0x0)) &&
               (pOVar2 != (Object *)0x0)) {
              if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
              goto code_?;
              pfVar9 = (float *)func_?();
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                        (pSVar12,StringLiteral_MovementSpeed,*pfVar9,(MethodInfo *)0x0);
              pDVar1 = (this->fields).itemData;
              pSVar15 = (this->fields).playerInvisibleToggle;
              if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                  (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      (pDVar1,(Object *)StringLiteral_PlayerInvisible,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      ), pSVar15 != (SettingsToggle *)0x0)) &&
                 (pOVar2 != (Object *)0x0)) {
                if ((pOVar2->klass->_0).element_class !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar16 = (bool *)func_?();
                SettingsToggle::SettingsToggle_Initialize
                          (pSVar15,StringLiteral_PlayerInvisible,*pbVar16,(MethodInfo *)0x0);
                pDVar1 = (this->fields).itemData;
                pSVar15 = (this->fields).playersCanCollideToggle;
                if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                    (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        (pDVar1,(Object *)StringLiteral_PlayersCanCollide,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        ), pSVar15 != (SettingsToggle *)0x0)) &&
                   (pOVar2 != (Object *)0x0)) {
                  if ((pOVar2->klass->_0).element_class !=
                      (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                  pbVar16 = (bool *)func_?();
                  SettingsToggle::SettingsToggle_Initialize
                            (pSVar15,StringLiteral_PlayersCanCollide,*pbVar16,(MethodInfo *)0x0);
                  pDVar1 = (this->fields).itemData;
                  pSVar15 = (this->fields).trailToggle;
                  if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__get_Item
                                          (pDVar1,(Object *)StringLiteral_TrailEnabled,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          ), pSVar15 != (SettingsToggle *)0x0)) &&
                     (pOVar2 != (Object *)0x0)) {
                    if ((pOVar2->klass->_0).element_class !=
                        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                    pbVar16 = (bool *)func_?();
                    SettingsToggle::SettingsToggle_Initialize
                              (pSVar15,StringLiteral_TrailEnabled,*pbVar16,(MethodInfo *)0x0);
                    pDVar1 = (this->fields).itemData;
                    pSVar8 = (this->fields).trailLengthSlider;
                    if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__get_Item
                                            (pDVar1,(Object *)StringLiteral_TrailLength,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            ), pSVar8 != (SettingsSlider *)0x0)) &&
                       (pOVar2 != (Object *)0x0)) {
                      if ((pOVar2->klass->_0).element_class !=
                          (TypeInfo__System__Single->_0).element_class) goto code_?;
                      pfVar9 = (float *)func_?();
                      fStack_17 = VVar7.Item2;
                      fStack_18 = VVar7.Item1;
                      SettingsSlider::SettingsSlider_Initialize
                                (pSVar8,StringLiteral_TrailLength,*pfVar9,fStack_18,fStack_17,
                                 (MethodInfo *)0x0);
                      pDVar1 = (this->fields).itemData;
                      pSVar12 = (this->fields).trailLengthInputSlider;
                      if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                          (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__get_Item
                                              (pDVar1,(Object *)StringLiteral_TrailLength,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                              ), pSVar12 != (SettingsInputFieldSlider *)0x0)) &&
                         (pOVar2 != (Object *)0x0)) {
                        if ((pOVar2->klass->_0).element_class !=
                            (TypeInfo__System__Single->_0).element_class) goto code_?;
                        pfVar9 = (float *)func_?();
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                                  (pSVar12,StringLiteral_TrailLength,*pfVar9,(MethodInfo *)0x0);
                        pIVar19 = (this->fields).trailColorImage;
                        pDVar1 = (this->fields).itemData;
                        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__Extensions);
                        }
                        pCVar20 = Extensions::Extensions_GetColor
                                            ((Color *)&stack0xffffffdc,pDVar1,
                                             StringLiteral_TrailColor,(MethodInfo *)0x0);
                        if (pIVar19 != (Image *)0x0) {
                          (*(pIVar19->klass->vtable).set_color.methodPtr)
                                    (pIVar19,pCVar20->r,pCVar20->g,pCVar20->b,pCVar20->a);
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
    if (pSVar3->klass == TypeInfo__System__String) {
      value = pSVar3;
    }
    if (value != (String *)0x0) goto code_?;
  }
  func_?(pSVar3);
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
            (*(pIVar6->klass->vtable).set_color.methodPtr)
                      (pIVar6,fVar2,fVar3,fVar4,fVar5,(pIVar6->klass->vtable).set_color.method);
            hashtable = (this->fields).itemData;
            colorKey = (this->fields).editingColorKey;
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
              (this->fields).editingColorKey = ::StringLiteral__;
              func_?(&(this->fields).editingColorKey,::StringLiteral__);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
            (*(pIVar8->klass->vtable).set_color.methodPtr)();
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
                (*(pIVar3->klass->vtable).set_color.methodPtr)();
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
  pDVar1 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultItemData
                     ((MethodInfo *)0x0);
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)woData,
                       (Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (woData,(Object *)StringLiteral_itemData,(Object *)(this->fields).itemData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      return (this->fields).itemData;
    }
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (woData,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (hashtable == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      hashtable = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else if (((hashtable->klass->_1).typeHierarchyDepth <
              (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth) ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (hashtable->klass->_1).typeHierarchy
             [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_Name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      defaultValue = (Object *)0x0;
      if (pOVar3 == (Object *)0x0) {
code_?:
        pOVar3 = Extensions::Extensions_GetValueOrDefault_3
                           (hashtable,StringLiteral_Name,defaultValue,
                            System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                           );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar1,(Object *)StringLiteral_Name,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_Health,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pMVar4 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        if (pOVar3 == (Object *)0x0) goto code_?;
        if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar5 = (float *)func_?();
          Extensions::Extensions_GetValueOrDefault_4(hashtable,StringLiteral_Health,*pfVar5,pMVar4);
          pOVar3 = (Object *)func_?();
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar1,(Object *)StringLiteral_Health,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar1,(Object *)StringLiteral_MovementSpeed,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          pMVar4 = 
          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
          ;
          if (pOVar3 == (Object *)0x0) goto code_?;
          if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar5 = (float *)func_?();
            Extensions::Extensions_GetValueOrDefault_4
                      (hashtable,StringLiteral_MovementSpeed,*pfVar5,pMVar4);
            pOVar3 = (Object *)func_?();
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      (pDVar1,(Object *)StringLiteral_MovementSpeed,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_TrailLength,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            pMVar4 = 
            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
            ;
            if (pOVar3 == (Object *)0x0) goto code_?;
            if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar5 = (float *)func_?();
              Extensions::Extensions_GetValueOrDefault_4
                        (hashtable,StringLiteral_TrailLength,*pfVar5,pMVar4);
              pOVar3 = (Object *)func_?();
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__set_Item
                        (pDVar1,(Object *)StringLiteral_TrailLength,pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                        );
              pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar1,(Object *)StringLiteral_PlayerInvisible,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pMVar4 = 
              bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
              ;
              if (pOVar3 == (Object *)0x0) goto code_?;
              if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class
                 ) {
                pbVar6 = (bool *)func_?();
                Extensions::Extensions_GetValueOrDefault
                          (hashtable,StringLiteral_PlayerInvisible,*pbVar6,pMVar4);
                pOVar3 = (Object *)func_?();
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (pDVar1,(Object *)StringLiteral_PlayerInvisible,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar1,(Object *)StringLiteral_PlayersCanCollide,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                pMVar4 = 
                bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                ;
                if (pOVar3 == (Object *)0x0) goto code_?;
                if ((pOVar3->klass->_0).element_class ==
                    (TypeInfo__System__Boolean->_0).element_class) {
                  pbVar6 = (bool *)func_?();
                  Extensions::Extensions_GetValueOrDefault
                            (hashtable,StringLiteral_PlayersCanCollide,*pbVar6,pMVar4);
                  pOVar3 = (Object *)func_?();
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__set_Item
                            (pDVar1,(Object *)StringLiteral_PlayersCanCollide,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                            );
                  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar1,(Object *)StringLiteral_TrailEnabled,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  pMVar4 = 
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                  ;
                  if (pOVar3 == (Object *)0x0) goto code_?;
                  if ((pOVar3->klass->_0).element_class ==
                      (TypeInfo__System__Boolean->_0).element_class) {
                    pbVar6 = (bool *)func_?();
                    Extensions::Extensions_GetValueOrDefault
                              (hashtable,StringLiteral_TrailEnabled,*pbVar6,pMVar4);
                    pOVar3 = (Object *)func_?();
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__set_Item
                              (pDVar1,(Object *)StringLiteral_TrailEnabled,pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                              );
                    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar1,(Object *)StringLiteral_TrailColor,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    pMVar4 = 
                    System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                    ;
                    if (pOVar3 == (Object *)0x0) {
                      pOVar3 = (Object *)0x0;
code_?:
                      pOVar3 = Extensions::Extensions_GetValueOrDefault_3
                                         (hashtable,StringLiteral_TrailColor,pOVar3,pMVar4);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__set_Item
                                (pDVar1,(Object *)StringLiteral_TrailColor,pOVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                );
                      return pDVar1;
                    }
                    pOVar3 = (Object *)func_?();
                    if (pOVar3 != (Object *)0x0) goto code_?;
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
        if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
          defaultValue = pOVar3;
        }
        if (defaultValue != (Object *)0x0) goto code_?;
      }
      func_?();
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar1;
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
            (*(pIVar2->klass->vtable).set_color.methodPtr)
                      (pIVar2,fVar3,fVar4,fVar5,fVar6,(pIVar2->klass->vtable).set_color.method);
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
  (this->fields).editingColorKey = ::StringLiteral__;
  func_?(&(this->fields).editingColorKey,::StringLiteral__);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

