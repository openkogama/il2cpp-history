
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_Initialize
               (MessageBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<int>_MethodInfo__Extensions__ValidIndexes<System::String>_System__Collections__Generic__List<System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__ToArray__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fontSelection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundWidth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textUnderscored);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundRadius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textItalic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textThickness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_background);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    pSVar1 = (String *)0x0;
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Text,(MethodInfo *)0x0);
    if (woID == -1) {
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
      }
      dictionary = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                   static_fields->DefaultData;
      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object___ctor_4
                (pDVar2,(IDictionary_2_System_Object_System_Object_ *)dictionary,
                 (IEqualityComparer_1_System_Object_ *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 ->klass->rgctx_data[8].method);
    }
    else {
      pDVar2 = MessageBoxSettings_ReadData(this,woID,(MethodInfo *)0x0);
    }
    bVar3 = iRam_? != 0;
    (this->fields).data = pDVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).data >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pDVar2 = (this->fields).data;
    this_01 = (this->fields).messageInputField;
    if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pSVar8 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,(Object *)StringLiteral_text,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 != (SettingsInputField *)0x0)) {
      value_01 = pSVar1;
      if (pSVar8 != (String *)0x0) {
        if (pSVar8->klass == pSRam0000000182dc50c0) {
          value_01 = pSVar8;
        }
        if (value_01 == (String *)0x0) {
          FUN_?(pSVar8);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      SettingsInputField::SettingsInputField_Initialize
                (this_01,StringLiteral_text,value_01,(MethodInfo *)0x0);
      pSVar10 = (this->fields).fontList;
      if (pSVar10 != (StreamedTextMeshProFontList *)0x0) {
        this_04 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontNames
                               (pSVar10,(MethodInfo *)0x0);
        pDVar2 = (this->fields).data;
        this_02 = (this->fields).fontSelectionDropdown;
        if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           (pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar2,(Object *)StringLiteral_fontSelection,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ),
           this_04 !=
           (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
            *)0x0)) {
          options = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                    ::RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                              (this_04,
                               MethodInfo__System__Collections__Generic__List<System::String>__ToArray__
                              );
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar12 = 
          System__Collections__Generic__List<int>_MethodInfo__Extensions__ValidIndexes<System::String>_System__Collections__Generic__List<System::String>_
          ;
          if ((
              System__Collections__Generic__List<int>_MethodInfo__Extensions__ValidIndexes<System::String>_System__Collections__Generic__List<System::String>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
            LOCK();
            UNLOCK();
            if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar12);
            }
          }
          iVar13 = (this_04->fields)._size;
          this_05 = (List_1_System_UInt32Enum_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__List<int>);
          FUN_?(this_05,iVar13,MethodInfo__System__Collections__Generic__List<int>__List_int_
                       );
          while (pMVar12 = MethodInfo__System__Collections__Generic__List<int>__Add_int_,
                item = (UInt32Enum__Enum)pSVar1, (int)item < (this_04->fields)._size) {
            if (this_05 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            piVar14 = &(this_05->fields)._version;
            *piVar14 = *piVar14 + 1;
            pUVar15 = (this_05->fields)._items;
            if (pUVar15 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
            uVar4 = (this_05->fields)._size;
            if (uVar4 < (uint)pUVar15->max_length) {
              (this_05->fields)._size = uVar4 + 1;
              if ((uint)pUVar15->max_length <= uVar4) {
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pUVar15->vector[(int)uVar4] = item;
              pSVar1 = (String *)(ulonglong)(item + 1);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
              List_1_System_UInt32Enum__AddWithResize
                        (this_05,item,pMVar12->klass->rgctx_data[0xe].method);
              pSVar1 = (String *)(ulonglong)(item + 1);
            }
          }
          if ((this_02 != (SettingsTMPDropdown *)0x0) && (pOVar11 != (Object *)0x0)) {
            if ((pOVar11->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar11,lRam_?);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            SettingsTMPDropdown::SettingsTMPDropdown_Initialize
                      (this_02,StringLiteral_fontSelection,*(int32_t *)&pOVar11[1].klass,
                       (String__Array *)options,(List_1_System_Int32_ *)this_05,(MethodInfo *)0x0);
            pSVar16 = (this->fields).fontSizeSlider;
            pDVar2 = (this->fields).data;
            if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1)
                         .field_0x1c == 0) {
              FUN_?();
            }
            fVar17 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                     MvTextMsgData_MinValue(StringLiteral_textSize,(MethodInfo *)0x0);
            fVar18 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                     MvTextMsgData_MaxValue(StringLiteral_textSize,(MethodInfo *)0x0);
            if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                        (pSVar16,StringLiteral_textSize,pDVar2,fVar17,fVar18,_UNK_?,
                         (MethodInfo *)0x0);
              pSVar16 = (this->fields).textThicknessSlider;
              pDVar2 = (this->fields).data;
              fVar18 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                       MvTextMsgData_MinValue(StringLiteral_textThickness,(MethodInfo *)0x0);
              fVar19 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                       MvTextMsgData_MaxValue(StringLiteral_textThickness,(MethodInfo *)0x0);
              fVar17 = _UNK_?;
              if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          (pSVar16,StringLiteral_textThickness,pDVar2,fVar18,fVar19,_UNK_?,
                           (MethodInfo *)0x0);
                pSVar16 = (this->fields).textOutlineThicknessSlider;
                pDVar2 = (this->fields).data;
                fVar18 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                         MvTextMsgData_MinValue
                                   (StringLiteral_textOutlineThickness,(MethodInfo *)0x0);
                fVar19 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                         MvTextMsgData_MaxValue
                                   (StringLiteral_textOutlineThickness,(MethodInfo *)0x0);
                if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar16,StringLiteral_textOutlineThickness,pDVar2,fVar18,fVar19,fVar17,
                             (MethodInfo *)0x0);
                  pSVar16 = (this->fields).bakgroundWidthSlider;
                  pDVar2 = (this->fields).data;
                  fVar18 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                           MvTextMsgData_MinValue(StringLiteral_backgroundWidth,(MethodInfo *)0x0);
                  fVar19 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                           MvTextMsgData_MaxValue(StringLiteral_backgroundWidth,(MethodInfo *)0x0);
                  if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                    SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                              (pSVar16,StringLiteral_backgroundWidth,pDVar2,fVar18,fVar19,fVar17,
                               (MethodInfo *)0x0);
                    pSVar16 = (this->fields).backgroundRadiusSlider;
                    pDVar2 = (this->fields).data;
                    fVar18 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                             MvTextMsgData_MinValue
                                       (StringLiteral_backgroundRadius,(MethodInfo *)0x0);
                    fVar19 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                             MvTextMsgData_MaxValue
                                       (StringLiteral_backgroundRadius,(MethodInfo *)0x0);
                    if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                (pSVar16,StringLiteral_backgroundRadius,pDVar2,fVar18,fVar19,fVar17,
                                 (MethodInfo *)0x0);
                      pSVar16 = (this->fields).backgroundOutlineThicknessSlider;
                      pDVar2 = (this->fields).data;
                      fVar18 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                               MvTextMsgData_MinValue
                                         (StringLiteral_backgroundOutlineThickness,(MethodInfo *)0x0
                                         );
                      fVar19 = Assets::Scripts::WorldObjectTypes::MVTextMsg::MvTextMsgData::
                               MvTextMsgData_MaxValue
                                         (StringLiteral_backgroundOutlineThickness,(MethodInfo *)0x0
                                         );
                      if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                  (pSVar16,StringLiteral_backgroundOutlineThickness,pDVar2,fVar18,
                                   fVar19,fVar17,(MethodInfo *)0x0);
                        pDVar2 = (this->fields).data;
                        pSVar20 = (this->fields).billboardToggle;
                        if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                            (pOVar11 = mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Object,System::Object]::
                                       Dictionary_2_System_Object_System_Object__get_Item
                                                 (pDVar2,(Object *)StringLiteral_billboard,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                 ), pSVar20 != (SettingsToggle *)0x0)) &&
                           (pOVar11 != (Object *)0x0)) {
                          if ((pOVar11->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar11,lRam_?);
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          SettingsToggle::SettingsToggle_Initialize
                                    (pSVar20,StringLiteral_billboard,*(bool *)&pOVar11[1].klass,
                                     (MethodInfo *)0x0);
                          pDVar2 = (this->fields).data;
                          pSVar20 = (this->fields).textOutlineToggle;
                          if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                              (pOVar11 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Object,System::Object]::
                                         Dictionary_2_System_Object_System_Object__get_Item
                                                   (pDVar2,(Object *)StringLiteral_textOutline,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar20 != (SettingsToggle *)0x0)) &&
                             (pOVar11 != (Object *)0x0)) {
                            if ((pOVar11->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar11,lRam_?);
                              pcVar9 = (code *)swi(3);
                              (*pcVar9)();
                              return;
                            }
                            SettingsToggle::SettingsToggle_Initialize
                                      (pSVar20,StringLiteral_textOutline,*(bool *)&pOVar11[1].klass,
                                       (MethodInfo *)0x0);
                            pDVar2 = (this->fields).data;
                            pSVar20 = (this->fields).textItalicToggle;
                            if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                                (pOVar11 = mscorlib.dll::System::Collections::Generic::
                                           Dictionary`2[System::Object,System::Object]::
                                           Dictionary_2_System_Object_System_Object__get_Item
                                                     (pDVar2,(Object *)StringLiteral_textItalic,
                                                                                                            
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar20 != (SettingsToggle *)0x0)) &&
                               (pOVar11 != (Object *)0x0)) {
                              if ((pOVar11->klass->_0).element_class !=
                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                FUN_?(pOVar11,lRam_?);
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                              SettingsToggle::SettingsToggle_Initialize
                                        (pSVar20,StringLiteral_textItalic,*(bool *)&pOVar11[1].klass,
                                         (MethodInfo *)0x0);
                              pDVar2 = (this->fields).data;
                              pSVar20 = (this->fields).textUnderscoredToggle;
                              if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                                  (pOVar11 = mscorlib.dll::System::Collections::Generic::
                                             Dictionary`2[System::Object,System::Object]::
                                             Dictionary_2_System_Object_System_Object__get_Item
                                                       (pDVar2,(Object *)
                                                                StringLiteral_textUnderscored,
                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar20 != (SettingsToggle *)0x0)) &&
                                 (pOVar11 != (Object *)0x0)) {
                                if ((pOVar11->klass->_0).element_class !=
                                    *(Il2CppClass **)(lRam_? + 0x40)) {
                                  FUN_?(pOVar11,lRam_?);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                SettingsToggle::SettingsToggle_Initialize
                                          (pSVar20,StringLiteral_textUnderscored,
                                           *(bool *)&pOVar11[1].klass,(MethodInfo *)0x0);
                                pDVar2 = (this->fields).data;
                                pSVar20 = (this->fields).backgroundToggle;
                                if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                    && (pOVar11 = mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_background,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar20 != (SettingsToggle *)0x0)) &&
                                   (pOVar11 != (Object *)0x0)) {
                                  if ((pOVar11->klass->_0).element_class !=
                                      *(Il2CppClass **)(lRam_? + 0x40)) {
                                    FUN_?(pOVar11,lRam_?);
                                    pcVar9 = (code *)swi(3);
                                    (*pcVar9)();
                                    return;
                                  }
                                  SettingsToggle::SettingsToggle_Initialize
                                            (pSVar20,StringLiteral_background,
                                             *(bool *)&pOVar11[1].klass,(MethodInfo *)0x0);
                                  pDVar2 = (this->fields).data;
                                  pSVar20 = (this->fields).backgroundOutlineToggle;
                                  if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                      && (pOVar11 = mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_backgroundOutline
                                                             ,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar20 != (SettingsToggle *)0x0)) &&
                                     (pOVar11 != (Object *)0x0)) {
                                    if ((pOVar11->klass->_0).element_class !=
                                        *(Il2CppClass **)(lRam_? + 0x40)) {
                                      FUN_?(pOVar11,lRam_?);
                                      pcVar9 = (code *)swi(3);
                                      (*pcVar9)();
                                      return;
                                    }
                                    SettingsToggle::SettingsToggle_Initialize
                                              (pSVar20,StringLiteral_backgroundOutline,
                                               *(bool *)&pOVar11[1].klass,(MethodInfo *)0x0);
                                    pSVar1 = StringLiteral_textColor;
                                    pIVar21 = (this->fields).textColorPreview;
                                    pDVar2 = (this->fields).data;
                                    if (cRam_? == '\0') {
                                      FUN_?(&TypeInfo__Extensions);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                      FUN_?();
                                    }
                                    CStack_22.r = 0.0;
                                    CStack_22.g = 0.0;
                                    CStack_22.b = 0.0;
                                    CStack_22.a = 0.0;
                                    pCVar23 = Extensions::Extensions_GetColorOrDefault
                                                        (aCStack_24,pDVar2,pSVar1,&CStack_22,
                                                         (MethodInfo *)0x0);
                                    if (pIVar21 != (Image *)0x0) {
                                      CStack_22.r = pCVar23->r;
                                      CStack_22.g = pCVar23->g;
                                      CStack_22.b = pCVar23->b;
                                      CStack_22.a = pCVar23->a;
                                      (*(pIVar21->klass->vtable).set_color.methodPtr)
                                                (pIVar21,&CStack_22,
                                                 (pIVar21->klass->vtable).set_color.method);
                                      pSVar1 = StringLiteral_textOutlineColor;
                                      pIVar21 = (this->fields).textOutlineColorPreview;
                                      pDVar2 = (this->fields).data;
                                      if (cRam_? == '\0') {
                                        FUN_?(&TypeInfo__Extensions);
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                        FUN_?();
                                      }
                                      CStack_22.r = 0.0;
                                      CStack_22.g = 0.0;
                                      CStack_22.b = 0.0;
                                      CStack_22.a = 0.0;
                                      pCVar23 = Extensions::Extensions_GetColorOrDefault
                                                          (aCStack_24,pDVar2,pSVar1,&CStack_22,
                                                           (MethodInfo *)0x0);
                                      if (pIVar21 != (Image *)0x0) {
                                        CStack_22.r = pCVar23->r;
                                        CStack_22.g = pCVar23->g;
                                        CStack_22.b = pCVar23->b;
                                        CStack_22.a = pCVar23->a;
                                        (*(pIVar21->klass->vtable).set_color.methodPtr)
                                                  (pIVar21,&CStack_22,
                                                   (pIVar21->klass->vtable).set_color.method);
                                        pSVar1 = StringLiteral_backgroundColor;
                                        pIVar21 = (this->fields).backgroundColorPreview;
                                        pDVar2 = (this->fields).data;
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__Extensions);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                          FUN_?();
                                        }
                                        CStack_22.r = 0.0;
                                        CStack_22.g = 0.0;
                                        CStack_22.b = 0.0;
                                        CStack_22.a = 0.0;
                                        pCVar23 = Extensions::Extensions_GetColorOrDefault
                                                            (aCStack_24,pDVar2,pSVar1,&CStack_22,
                                                             (MethodInfo *)0x0);
                                        if (pIVar21 != (Image *)0x0) {
                                          CStack_22.r = pCVar23->r;
                                          CStack_22.g = pCVar23->g;
                                          CStack_22.b = pCVar23->b;
                                          CStack_22.a = pCVar23->a;
                                          (*(pIVar21->klass->vtable).set_color.methodPtr)
                                                    (pIVar21,&CStack_22,
                                                     (pIVar21->klass->vtable).set_color.method);
                                          pSVar1 = StringLiteral_backgroundOutlineColor;
                                          pIVar21 = (this->fields).backgroundOutlineColorPreview;
                                          pDVar2 = (this->fields).data;
                                          if (cRam_? == '\0') {
                                            FUN_?(&TypeInfo__Extensions);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                                            FUN_?();
                                          }
                                          CStack_22.r = 0.0;
                                          CStack_22.g = 0.0;
                                          CStack_22.b = 0.0;
                                          CStack_22.a = 0.0;
                                          pCVar23 = Extensions::Extensions_GetColorOrDefault
                                                              (aCStack_24,pDVar2,pSVar1,&CStack_22
                                                               ,(MethodInfo *)0x0);
                                          if (pIVar21 != (Image *)0x0) {
                                            CStack_22.r = pCVar23->r;
                                            CStack_22.g = pCVar23->g;
                                            CStack_22.b = pCVar23->b;
                                            CStack_22.a = pCVar23->a;
                                            (*(pIVar21->klass->vtable).set_color.methodPtr)
                                                      (pIVar21,&CStack_22,
                                                       (pIVar21->klass->vtable).set_color.method);
                                            if (cRam_? == '\0') {
                                              FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ,0);
                                              LOCK();
                                              UNLOCK();
                                              FUN_?(&StringLiteral_fontSelection);
                                              LOCK();
                                              UNLOCK();
                                              FUN_?(&StringLiteral_backgroundOutline);
                                              LOCK();
                                              UNLOCK();
                                              FUN_?(&StringLiteral_textOutline);
                                              LOCK();
                                              UNLOCK();
                                              FUN_?(&StringLiteral_background);
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pDVar2 = (this->fields).data;
                                            receiver = (this->fields).selectedFontItem;
                                            if (pDVar2 !=
                                                (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                              pOVar11 = mscorlib.dll::System::Collections::Generic::
                                                        Dictionary`2[System::Object,System::Object]
                                                        ::
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_fontSelection,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                              if ((receiver != (TMPSettingsDropdownItemFont *)0x0)
                                                 && (pOVar11 != (Object *)0x0)) {
                                                if ((pOVar11->klass->_0).element_class !=
                                                    *(Il2CppClass **)(lRam_? + 0x40))
                                                {
                                                  FUN_?(pOVar11,lRam_?);
                                                  pcVar9 = (code *)swi(3);
                                                  (*pcVar9)();
                                                  return;
                                                }
                                                pSVar10 = (receiver->fields).fontList;
                                                if (pSVar10 != (StreamedTextMeshProFontList *)0x0) {
                                                  pSVar1 = StreamedTextMeshProFontList::
                                                            StreamedTextMeshProFontList_GetFontUrl
                                                                      (pSVar10,*(int32_t *)
                                                                               &pOVar11[1].klass,
                                                                       (MethodInfo *)0x0);
                                                  this_03 = (receiver->fields).fontStream;
                                                  if (this_03 !=
                                                      (StreamedTextMeshProFontTriggered *)0x0) {
                                                    StreamedTextMeshProFontTriggered::
                                                    StreamedTextMeshProFontTriggered_StreamFont
                                                              (this_03,(
                                                  StreamedTextMeshProFont_IReceiver *)receiver,
                                                  pSVar1,(MethodInfo *)0x0);
                                                  pDVar2 = (this->fields).data;
                                                  if (pDVar2 !=
                                                      (Dictionary_2_System_Object_System_Object_ *)
                                                      0x0) {
                                                    pOVar11 = mscorlib.dll::System::Collections::
                                                              Generic::Dictionary`2[System::
                                                              Object,System::Object]::
                                                                                                                            
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_textOutline,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  if (pOVar11 != (Object *)0x0) {
                                                    if ((pOVar11->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar11,lRam_?);
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                    pDVar2 = (this->fields).data;
                                                    value = *(bool *)&pOVar11[1].klass;
                                                    if (pDVar2 !=
                                                        (Dictionary_2_System_Object_System_Object_ *
                                                        )0x0) {
                                                      pOVar11 = mscorlib.dll::System::Collections::
                                                                Generic::Dictionary`2[System::
                                                                Object,System::Object]::
                                                                                                                                
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_background,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  if (pOVar11 != (Object *)0x0) {
                                                    if ((pOVar11->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar11,lRam_?);
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                    pDVar2 = (this->fields).data;
                                                    value_00 = *(bool *)&pOVar11[1].klass;
                                                    if (pDVar2 !=
                                                        (Dictionary_2_System_Object_System_Object_ *
                                                        )0x0) {
                                                      pOVar11 = mscorlib.dll::System::Collections::
                                                                Generic::Dictionary`2[System::
                                                                Object,System::Object]::
                                                                                                                                
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_backgroundOutline
                                                             ,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                                  if (pOVar11 != (Object *)0x0) {
                                                    if ((pOVar11->klass->_0).element_class !=
                                                        *(Il2CppClass **)
                                                         (lRam_? + 0x40)) {
                                                      FUN_?(pOVar11,lRam_?);
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                    pSVar16 = (this->fields).
                                                             textOutlineThicknessSlider;
                                                    bVar25 = *(byte *)&pOVar11[1].klass;
                                                    if (pSVar16 != (SettingsInputFieldSlider *)0x0) {
                                                      pTVar26 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Component::
                                                                Component_get_transform
                                                                          ((Component *)pSVar16,
                                                                           (MethodInfo *)0x0);
                                                      if (pTVar26 != (Transform *)0x0) {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Transform::
                                                                  Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,value,(MethodInfo *)0x0);
                                                      pIVar21 = (this->fields).
                                                               textOutlineColorPreview;
                                                      if (pIVar21 != (Image *)0x0) {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pIVar21,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar26 != (Transform *)0x0) {
                                                          pTVar26 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pTVar26 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,value,(MethodInfo *)0x0);
                                                      pSVar16 = (this->fields).bakgroundWidthSlider;
                                                      if (pSVar16 != (SettingsInputFieldSlider *)0x0)
                                                      {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pSVar16,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar26 != (Transform *)0x0) {
                                                          pTVar26 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar16 = (this->fields).backgroundRadiusSlider
                                                      ;
                                                      if (pSVar16 != (SettingsInputFieldSlider *)0x0)
                                                      {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pSVar16,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar26 != (Transform *)0x0) {
                                                          pTVar26 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar20 = (this->fields).
                                                               backgroundOutlineToggle;
                                                      if (pSVar20 != (SettingsToggle *)0x0) {
                                                        pGVar27 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_gameObject
                                                                            ((Component *)pSVar20,
                                                                             (MethodInfo *)0x0);
                                                        if (pGVar27 != (GameObject *)0x0) {
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::GameObject_SetActive
                                                                    (pGVar27,value_00,
                                                                     (MethodInfo *)0x0);
                                                          pSVar16 = (this->fields).
                                                                   backgroundOutlineThicknessSlider;
                                                          if (pSVar16 != (SettingsInputFieldSlider *)
                                                                        0x0) {
                                                            pTVar26 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Component::
                                                                      Component_get_transform
                                                                                ((Component *)pSVar16
                                                                                 ,(MethodInfo *)0x0)
                                                            ;
                                                            if (pTVar26 != (Transform *)0x0) {
                                                              pTVar26 = UnityEngine.CoreModule.dll::
                                                                        UnityEngine::Transform::
                                                                        Transform_GetParent(pTVar26,
                                                  (MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,bVar25 & value_00,
                                                                 (MethodInfo *)0x0);
                                                      pIVar21 = (this->fields).backgroundColorPreview
                                                      ;
                                                      if (pIVar21 != (Image *)0x0) {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pIVar21,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar26 != (Transform *)0x0) {
                                                          pTVar26 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pTVar26 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,value_00,(MethodInfo *)0x0)
                                                      ;
                                                      pIVar21 = (this->fields).
                                                               backgroundOutlineColorPreview;
                                                      if (pIVar21 != (Image *)0x0) {
                                                        pTVar26 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Component::
                                                                  Component_get_transform
                                                                            ((Component *)pIVar21,
                                                                             (MethodInfo *)0x0);
                                                        if (pTVar26 != (Transform *)0x0) {
                                                          pTVar26 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pTVar26 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_GetParent(pTVar26,(
                                                  MethodInfo *)0x0);
                                                  if (pTVar26 != (Transform *)0x0) {
                                                    pGVar27 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Component::
                                                              Component_get_gameObject
                                                                        ((Component *)pTVar26,
                                                                         (MethodInfo *)0x0);
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      bVar25 = bVar25 & value_00;
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  ,bVar25,0);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  if (pGVar27 == (GameObject *)0x0) {
                                                    FUN_?();
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pvVar28 = (pGVar27->fields)._.m_CachedPtr;
                                                  if (pvVar28 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pGVar27,(MethodInfo *)0x0);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pcVar9 = pcRam_?;
                                                  if (pcRam_? == (code *)0x0) {
                                                    pcVar9 = (code *)FUN_?(&UNK_?);
                                                    if (pcVar9 == (code *)0x0) {
                                                      uVar29 = func_?(&UNK_?);
                                                      FUN_?(uVar29,0);
                                                      pcVar9 = (code *)swi(3);
                                                      (*pcVar9)();
                                                      return;
                                                    }
                                                  }
                                                  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*pcRam_?)(pvVar28,bVar25);
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
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                            FUN_?();
                                            pcVar9 = (code *)swi(3);
                                            (*pcVar9)();
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
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_OnColorEdited
               (MessageBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutlineColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundColor);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).editingColorKey;
  if ((pSVar1 != StringLiteral_textColor) &&
     ((((pSVar1 == (String *)0x0 || (StringLiteral_textColor == (String *)0x0)) ||
       ((pSVar1->fields)._stringLength != (StringLiteral_textColor->fields)._stringLength)) ||
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_textColor->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar2 == 0)))) {
    if ((pSVar1 == StringLiteral_textOutlineColor) ||
       (((pSVar1 != (String *)0x0 && (StringLiteral_textOutlineColor != (String *)0x0)) &&
        (((pSVar1->fields)._stringLength == (StringLiteral_textOutlineColor->fields)._stringLength
         && (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar1->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_textOutlineColor->fields)._firstChar,
                                (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar2 != 0)))))) {
      pIVar3 = (this->fields).textOutlineColorPreview;
      goto code_?;
    }
    if ((pSVar1 == StringLiteral_backgroundColor) ||
       (((pSVar1 != (String *)0x0 && (StringLiteral_backgroundColor != (String *)0x0)) &&
        (((pSVar1->fields)._stringLength == (StringLiteral_backgroundColor->fields)._stringLength &&
         (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar1->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_backgroundColor->fields)._firstChar,
                             (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar2 != 0)))))) {
      pIVar3 = (this->fields).backgroundColorPreview;
      goto code_?;
    }
    if ((pSVar1 == StringLiteral_backgroundOutlineColor) ||
       ((((pSVar1 != (String *)0x0 && (StringLiteral_backgroundOutlineColor != (String *)0x0)) &&
         ((pSVar1->fields)._stringLength ==
          (StringLiteral_backgroundOutlineColor->fields)._stringLength)) &&
        (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar1->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_backgroundOutlineColor->fields)._firstChar,
                            (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar2 != 0)))) {
      pIVar3 = (this->fields).backgroundOutlineColorPreview;
      goto code_?;
    }
  }
  pIVar3 = (this->fields).textColorPreview;
code_?:
  pSVar4 = (this->fields).colorR;
  if ((pSVar4 != (SettingsSlider *)0x0) &&
     (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
    fVar6 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                              (pSVar5,(pSVar5->klass->vtable).get_value.method);
    pSVar4 = (this->fields).colorG;
    if ((pSVar4 != (SettingsSlider *)0x0) &&
       (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
      fVar7 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable).get_value.method);
      pSVar4 = (this->fields).colorB;
      if ((pSVar4 != (SettingsSlider *)0x0) &&
         (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
        fVar8 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                                  (pSVar5,(pSVar5->klass->vtable).get_value.method);
        pSVar4 = (this->fields).colorA;
        if ((pSVar4 != (SettingsSlider *)0x0) &&
           ((pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0 &&
            (fVar9 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                                       (pSVar5,(pSVar5->klass->vtable).get_value.method),
            pIVar3 != (Image *)0x0)))) {
          aCStack_10[0].g = fVar7;
          aCStack_10[0].r = fVar6;
          aCStack_10[0].a = fVar9;
          aCStack_10[0].b = fVar8;
          (*(pIVar3->klass->vtable).set_color.methodPtr)(pIVar3,aCStack_10);
          pGVar11 = (this->fields).content;
          if (pGVar11 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,1,(MethodInfo *)0x0);
            pGVar11 = (this->fields).colorPicker;
            if (pGVar11 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar11,0,(MethodInfo *)0x0);
              this_00 = (this->fields).canvas;
              if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MessageBoxSettings);
              }
              if (this_00 != (RectTransform *)0x0) {
                value.y = (TypeInfo__MessageBoxSettings->static_fields->NormalCanvasSize).y;
                value.x = (TypeInfo__MessageBoxSettings->static_fields->NormalCanvasSize).x;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                          (this_00,value,(MethodInfo *)0x0);
                hashtable = (this->fields).data;
                pSVar1 = (this->fields).editingColorKey;
                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                  FUN_?();
                }
                Extensions::Extensions_SetColor(hashtable,pSVar1,aCStack_10,(MethodInfo *)0x0);
                this_01 = (this->fields).settingsBase;
                pSVar1 = (this->fields).editingColorKey;
                value_00 = (Object *)FUN_?(TypeInfo__System__Single,4);
                if (value_00 != (Object *)0x0) {
                  if ((((*(int *)&value_00[1].monitor == 0) ||
                       (*(float *)&value_00[2].klass = fVar6, *(uint *)&value_00[1].monitor < 2))
                      || (*(float *)((longlong)&value_00[2].klass + 4) = fVar7,
                         *(uint *)&value_00[1].monitor < 3)) ||
                     (*(float *)&value_00[2].monitor = fVar8, *(uint *)&value_00[1].monitor < 4)) {
                    FUN_?();
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  *(float *)((longlong)&value_00[2].monitor + 4) = fVar9;
                  if (this_01 != (SettingsBase *)0x0) {
                    SettingsBase::SettingsBase_OnSettingChanged
                              (this_01,pSVar1,value_00,(MethodInfo *)0x0);
                    bVar13 = iRam_? != 0;
                    (this->fields).editingColorKey = ::StringLiteral__;
                    if (bVar13) {
                      uVar14 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
                      uVar15 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
                      do {
                        uVar16 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
                        puVar17 = (ulonglong *)(uVar15 * 8 + 0xADDR);
                        LOCK();
                        bVar13 = uVar16 == *puVar17;
                        if (bVar13) {
                          *puVar17 = uVar16 | 1L << (uVar14 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar13);
                    }
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
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_OnColorPressed
               (MessageBoxSettings *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorA);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (this->fields).data;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
  }
  hashtable_00 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                 static_fields->DefaultData;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  CStack_1.r = 0.0;
  CStack_1.g = 0.0;
  CStack_1.b = 0.0;
  CStack_1.a = 0.0;
  pCVar2 = Extensions::Extensions_GetColorOrDefault
                      (aCStack_3,hashtable_00,colorKey,&CStack_1,(MethodInfo *)0x0);
  CStack_1.r = pCVar2->r;
  CStack_1.g = pCVar2->g;
  CStack_1.b = pCVar2->b;
  CStack_1.a = pCVar2->a;
  pCVar2 = Extensions::Extensions_GetColorOrDefault
                      (aCStack_3,hashtable,colorKey,&CStack_1,(MethodInfo *)0x0);
  maxValue = _UNK_?;
  pSVar4 = (this->fields).colorR;
  value_00 = pCVar2->g;
  uVar5._0_4_ = pCVar2->r;
  uVar5._4_4_ = pCVar2->g;
  value_01 = pCVar2->b;
  value_02 = pCVar2->a;
  uVar6._0_4_ = pCVar2->b;
  uVar6._4_4_ = pCVar2->a;
  if (pSVar4 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize
              (pSVar4,StringLiteral_colorR,pCVar2->r,0.0,_UNK_?,(MethodInfo *)0x0);
    pSVar4 = (this->fields).colorG;
    if (pSVar4 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar4,StringLiteral_colorG,value_00,0.0,maxValue,(MethodInfo *)0x0);
      pSVar4 = (this->fields).colorB;
      if (pSVar4 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar4,StringLiteral_colorB,value_01,0.0,maxValue,(MethodInfo *)0x0);
        pSVar4 = (this->fields).colorA;
        if (pSVar4 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar4,StringLiteral_colorA,value_02,0.0,maxValue,(MethodInfo *)0x0);
          pIVar7 = (this->fields).colorPickerPreview;
          if (pIVar7 != (Image *)0x0) {
            CStack_1._0_8_ = uVar5;
            CStack_1._8_8_ = uVar6;
            (*(pIVar7->klass->vtable).set_color.methodPtr)
                      (pIVar7,&CStack_1,(pIVar7->klass->vtable).set_color.method);
            pSVar8 = Extensions::Extensions_AddSpacesToSentence(colorKey,(MethodInfo *)0x0);
            if (pSVar8 != (String *)0x0) {
              if ((pSVar8->fields)._stringLength < 0) {
                uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
                pAVar9 = (ArgumentOutOfRangeException *)func_?(uVar5);
                pSVar8 = (String *)
                          func_?(&StringLiteral_startIndex_cannot_be_larger_than);
                pSVar10 = (String *)func_?(&StringLiteral_startIndex);
                mscorlib.dll::System::ArgumentOutOfRangeException::
                ArgumentOutOfRangeException__ctor_2(pAVar9,pSVar10,pSVar8,(MethodInfo *)0x0);
                uVar5 = func_?(&MethodInfo__System__String__Substring_int__int_);
                FUN_?(pAVar9,uVar5);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar12 = (pSVar8->fields)._stringLength;
              if (iVar12 + -1 < 0) {
                uVar5 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
                pAVar9 = (ArgumentOutOfRangeException *)func_?(uVar5);
                pSVar8 = (String *)
                          func_?(&StringLiteral_Index_and_length_must_refer_to_a);
                pSVar10 = (String *)func_?(&StringLiteral_length);
                mscorlib.dll::System::ArgumentOutOfRangeException::
                ArgumentOutOfRangeException__ctor_2(pAVar9,pSVar10,pSVar8,(MethodInfo *)0x0);
                uVar5 = func_?(&MethodInfo__System__String__Substring_int__int_);
                FUN_?(pAVar9,uVar5);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pSVar10 = pSVar8;
              if ((iVar12 == 1) ||
                 (pSVar10 = mscorlib.dll::System::String::String_InternalSubString
                                      (pSVar8,0,1,(MethodInfo *)0x0), pSVar10 != (String *)0x0)) {
                pSVar10 = mscorlib.dll::System::String::String_ToUpper(pSVar10,(MethodInfo *)0x0);
                pSVar8 = mscorlib.dll::System::String::String_Substring_1
                                    (pSVar8,1,(pSVar8->fields)._stringLength + -1,
                                     (MethodInfo *)0x0);
                pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                    (pSVar10,pSVar8,(MethodInfo *)0x0);
                pTVar13 = (this->fields).colorText;
                TM::TM__(pSVar8,(MethodInfo *)0x0);
                if (pTVar13 != (Text *)0x0) {
                  (*(pTVar13->klass->vtable).set_text.methodPtr)(pTVar13);
                  pGVar14 = (this->fields).content;
                  if (pGVar14 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar14,0,(MethodInfo *)0x0);
                    pGVar14 = (this->fields).colorPicker;
                    if (pGVar14 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar14,1,(MethodInfo *)0x0);
                      this_00 = (this->fields).canvas;
                      if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
                        FUN_?(TypeInfo__MessageBoxSettings);
                      }
                      if (this_00 != (RectTransform *)0x0) {
                        value.y = (TypeInfo__MessageBoxSettings->static_fields->
                                  ColorEditingCanvasSize).y;
                        value.x = (TypeInfo__MessageBoxSettings->static_fields->
                                  ColorEditingCanvasSize).x;
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_set_sizeDelta(this_00,value,(MethodInfo *)0x0);
                        bVar15 = iRam_? != 0;
                        (this->fields).editingColorKey = colorKey;
                        if (bVar15) {
                          uVar16 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
                          uVar17 = (ulonglong)((uVar16 & 0x1fffff) >> 6);
                          do {
                            uVar18 = *(ulonglong *)(uVar17 * 8 + 0xADDR);
                            puVar19 = (ulonglong *)(uVar17 * 8 + 0xADDR);
                            LOCK();
                            bVar15 = uVar18 == *puVar19;
                            if (bVar15) {
                              *puVar19 = uVar18 | 1L << (uVar16 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar15);
                        }
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_OnSettingChanged
               (MessageBoxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    puStackY_40 = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    puStackY_40 = &UNK_?;
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == (String *)0x0) {
    return;
  }
  if ((key->fields)._stringLength == 0) {
    return;
  }
  if ((key->fields)._stringLength == 6) {
    if ((key->fields)._stringLength + -5 < 0) {
      puStackY_40 = &UNK_?;
      uVar1 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      puStackY_40 = &UNK_?;
      this_00 = (ArgumentOutOfRangeException *)func_?(uVar1);
      puStackY_40 = &UNK_?;
      pSVar2 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
      puStackY_40 = &UNK_?;
      paramName = (String *)func_?(&StringLiteral_length);
      puStackY_40 = &UNK_?;
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (this_00,paramName,pSVar2,(MethodInfo *)0x0);
      puStackY_40 = &UNK_?;
      uVar1 = func_?(&MethodInfo__System__String__Substring_int__int_);
      puStackY_40 = &UNK_?;
      FUN_?(this_00,uVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    method = (MethodInfo *)0x0;
    puStackY_40 = &UNK_?;
    pSVar2 = mscorlib.dll::System::String::String_InternalSubString(key,0,5,(MethodInfo *)0x0);
    if (pSVar2 == StringLiteral_color) {
code_?:
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Single,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = (this->fields).colorR;
      if ((pSVar4 != (SettingsSlider *)0x0) &&
         (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
        uVar6 = (*(pSVar5->klass->vtable).get_value.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable).get_value.method);
        pSVar4 = (this->fields).colorG;
        if ((pSVar4 != (SettingsSlider *)0x0) &&
           (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
          uVar7 = (*(pSVar5->klass->vtable).get_value.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable).get_value.method);
          pSVar4 = (this->fields).colorB;
          if ((pSVar4 != (SettingsSlider *)0x0) &&
             (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
            uVar8 = (*(pSVar5->klass->vtable).get_value.methodPtr)
                               (pSVar5,(pSVar5->klass->vtable).get_value.method);
            pSVar4 = (this->fields).colorA;
            if ((pSVar4 != (SettingsSlider *)0x0) &&
               (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
              uVar9 = (*(pSVar5->klass->vtable).get_value.methodPtr)
                                 (pSVar5,(pSVar5->klass->vtable).get_value.method);
              pIVar10 = (this->fields).colorPickerPreview;
              if (pIVar10 != (Image *)0x0) {
                uStackY_58 = uVar6;
                uStackY_54 = uVar7;
                uStackY_50 = uVar8;
                uStackY_4c = uVar9;
                (*(pIVar10->klass->vtable).set_color.methodPtr)
                          (pIVar10,&uStackY_58,(pIVar10->klass->vtable).set_color.method);
                pSVar11 = (this->fields).settingsBase;
                pSVar2 = (this->fields).editingColorKey;
                pOVar12 = (Object *)FUN_?(TypeInfo__System__Single,4);
                if (pOVar12 != (Object *)0x0) {
                  if ((((*(int *)&pOVar12[1].monitor == 0) ||
                       (*(undefined4 *)&pOVar12[2].klass = uVar6, *(uint *)&pOVar12[1].monitor < 2)
                       ) || (*(undefined4 *)((longlong)&pOVar12[2].klass + 4) = uVar7,
                            *(uint *)&pOVar12[1].monitor < 3)) ||
                     (*(undefined4 *)&pOVar12[2].monitor = uVar8, *(uint *)&pOVar12[1].monitor < 4)
                     ) {
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  *(undefined4 *)((longlong)&pOVar12[2].monitor + 4) = uVar9;
                  if (pSVar11 != (SettingsBase *)0x0) {
                    if (cRam_? == '\0') {
                      puStackY_40 = &UNK_?;
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                   );
                      LOCK();
                      UNLOCK();
                      puStackY_40 = &UNK_?;
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                   );
                      LOCK();
                      UNLOCK();
                      puStackY_40 = &UNK_?;
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                   );
                      LOCK();
                      UNLOCK();
                      puStackY_40 = &UNK_?;
                      FUN_?(&
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
                      LOCK();
                      UNLOCK();
                      puStackY_40 = &UNK_?;
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if ((((pSVar11->fields).woID != -1) && (pSVar2 != (String *)0x0)) &&
                       ((pSVar2->fields)._stringLength != 0)) {
                      puStackY_40 = &UNK_?;
                      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                          ((MethodInfo *)0x0);
                      if (this_01 != (MVWorldObjectClientManager *)0x0) {
                        puStackY_40 = &UNK_?;
                        wo = MVWorldObjectClientManager::
                             MVWorldObjectClientManager_GetWorldObjectClient
                                       (this_01,(pSVar11->fields).woID,(MethodInfo *)0x0);
                        if (wo == (MVWorldObjectClient *)0x0) {
                          return;
                        }
                        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
                          puStackY_40 = &UNK_?;
                          FUN_?();
                        }
                        uVar1 = 0;
                        puStackY_40 = &UNK_?;
                        WorldObjectDataValidator::WorldObjectDataValidator_Validate
                                  (wo,pSVar2,pOVar12,(MethodInfo *)0x0);
                        pDVar13 = (pSVar11->fields).result;
                        if (pDVar13 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
                          puStackY_40 = &UNK_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::
                          Dictionary_2_System_Object_System_Object__TryInsert
                                    (pDVar13,(Object *)pSVar2,pOVar12,(InsertionBehavior__Enum)uVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                     ->klass->rgctx_data[0x22].method);
                          puStackY_40 = &UNK_?;
                          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                                     *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                          puStackY_40 = &UNK_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::UIR::
                          UIRenderDevice+DisableForceGammaMaterial]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                                    (this_02,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                    );
                          if (this_02 !=
                              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                               *)0x0) {
                            puStackY_40 = &UNK_?;
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__TryInsert
                                      ((Dictionary_2_System_Object_System_Object_ *)this_02,
                                       (Object *)pSVar2,pOVar12,
                                       (InsertionBehavior__Enum)
                                       CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                       ->klass->rgctx_data[0x22].method);
                            puStackY_40 = &UNK_?;
                            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                                      (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
                            return;
                          }
                        }
                      }
                      puStackY_40 = &UNK_?;
                      FUN_?();
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((pSVar2 != (String *)0x0) && (StringLiteral_color != (String *)0x0)) &&
       ((pSVar2->fields)._stringLength == (StringLiteral_color->fields)._stringLength)) {
      method = (MethodInfo *)0x0;
      puStackY_40 = &UNK_?;
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar2->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_color->fields)._firstChar,
                         (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) goto code_?;
    }
  }
  if (key == StringLiteral_textSize) {
code_?:
    pSVar11 = (this->fields).settingsBase;
    if (value == (Object *)0x0) goto code_?;
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      puStackY_40 = &UNK_?;
      FUN_?(value,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStackX_10 = CONCAT44(uStackX_10._4_4_,*(float *)&value[1].klass / _UNK_?);
    puStackY_40 = &UNK_?;
    pOVar12 = (Object *)FUN_?(lRam_?,&uStackX_10);
  }
  else {
    if ((StringLiteral_textSize != (String *)0x0) &&
       ((key->fields)._stringLength == (StringLiteral_textSize->fields)._stringLength)) {
      method = (MethodInfo *)0x0;
      puStackY_40 = &UNK_?;
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(key->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_textSize->fields)._firstChar,
                         (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
      puStackY_40 = &UNK_?;
      FUN_?();
    }
    puStackY_40 = &UNK_?;
    pOVar12 = MessageBoxSettings_RemoveQuadFromText(key,value,(MethodInfo *)0x0);
    pDVar13 = (this->fields).data;
    if (pDVar13 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    puStackY_40 = &UNK_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar13,(Object *)key,pOVar12,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    puStackY_40 = &UNK_?;
    MessageBoxSettings_UpdateUI(this,(MethodInfo *)0x0);
    pSVar11 = (this->fields).settingsBase;
  }
  if (pSVar11 != (SettingsBase *)0x0) {
    puStackY_40 = &UNK_?;
    SettingsBase::SettingsBase_OnSettingChanged(pSVar11,key,pOVar12,(MethodInfo *)0x0);
    return;
  }
code_?:
  puStackY_40 = &UNK_?;
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Object,System.Object] ReadData(Int32) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_ReadData
          (MessageBoxSettings *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_02,woID,(MethodInfo *)0x0), pMVar2 != (MVWorldObjectClient *)0x0)) {
    pDVar3 = (pMVar2->fields)._.data;
    pDStack_4 = pDVar3;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar5 = 
    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
    ;
    IVar6 = Extensions::Extensions_GetValueOrDefault_2
                      (pDVar3,StringLiteral_version,1,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    aIStackX_10[0] = IVar6;
    pOVar7 = (Object *)FUN_?(uRam_?,aIStackX_10);
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar3,(Object *)StringLiteral_version,pOVar7,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar5 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
                   field_0x1c == 0) {
        FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
      }
      pDVar8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                   static_fields->DefaultData;
      if ((pDVar8 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) && (pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                             UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                       (pDVar8,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                       ),
                   pDVar9 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)0x0)) {
        pDVar8 = (pDVar9->fields)._dictionary;
        pLStack_10 = (List_1_T_Enumerator_System_Object_ *)0x0;
        uStack_11 = 0;
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)&uStack_13 >> 0xc);
          lVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
          do {
            uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
            puVar16 = (ulonglong *)(lVar14 + 0xADDR);
            LOCK();
            bVar17 = uVar15 == *puVar16;
            if (bVar17) {
              *puVar16 = uVar15 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar17);
        }
        if (pDVar8 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          uStack_13 = pDVar8;
          FUN_?();
          pcVar18 = (code *)swi(3);
          pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
          return pDVar3;
        }
        LStack_19._version = (pDVar8->fields)._version;
        uStack_11 = 0;
        uStack_13._0_4_ = SUB84(pDVar8,0);
        uStack_13._4_4_ = (undefined4)((ulonglong)pDVar8 >> 0x20);
        LStack_19._list._0_4_ = (undefined4)uStack_13;
        LStack_19._list._4_4_ = uStack_13._4_4_;
        LStack_19._index = 0;
        LStack_19._current = (Object *)0x0;
        uStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
        pLStack_10 = &LStack_19;
        while (lVar14 = CONCAT44(LStack_19._list._4_4_,LStack_19._list._0_4_), lVar14 != 0) {
          if (LStack_19._version != *(int *)(lVar14 + 0x2c)) goto code_?;
          do {
            if (lVar14 == 0) goto code_?;
            if (*(uint *)(lVar14 + 0x20) <= (uint)LStack_19._index) {
              LStack_19._index = *(int *)(lVar14 + 0x20) + 1;
              LStack_19._current = (Object *)0x0;
              if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                           _1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__System__String);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_text);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_version);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (IVar6 == 2) {
                return pDVar3;
              }
              collection = (IEnumerable_1_System_Object_ *)FUN_?(TypeInfo__System__String,1)
              ;
              if (collection == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
              FUN_?(collection,0,StringLiteral_version);
              this_03 = (List_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object___ctor_1
                        (this_03,collection,
                         MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
                        );
              if (IVar6 == 1) {
                if (this_03 == (List_1_System_Object_ *)0x0) goto code_?;
                FUN_?(this_03,StringLiteral_text,
                              MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                             );
              }
              else if (this_03 == (List_1_System_Object_ *)0x0) {
                return pDVar3;
              }
              aIStackX_10[0] = 2;
              pOVar7 = (Object *)FUN_?(uRam_?,aIStackX_10);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar3,(Object *)StringLiteral_version,pOVar7,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pDVar8 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (iRam_? != 0) {
                uVar12 = (uint)((ulonglong)&uStack_13 >> 0xc);
                lVar14 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
                do {
                  uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
                  puVar16 = (ulonglong *)(lVar14 + 0xADDR);
                  LOCK();
                  bVar17 = uVar15 == *puVar16;
                  if (bVar17) {
                    *puVar16 = uVar15 | 1L << (uVar12 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar17);
              }
              pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                           ((ulonglong)(uint)(this_03->fields)._version << 0x20);
              uStack_11 = 0;
              LStack_1._8_8_ = pLStack_10;
              LStack_1._current = (Object *)0x0;
              uStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)0x0;
              pLStack_10 = &LStack_1;
              LStack_1._list = this_03;
              while( true ) {
                bVar20 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  (&LStack_1,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                  );
                pOVar7 = LStack_1._current;
                if (bVar20 == 0) {
                  return pDVar3;
                }
                this_01 = (this->fields).settingsBase;
                pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (pDVar3,LStack_1._current,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (this_01 == (SettingsBase *)0x0) break;
                SettingsBase::SettingsBase_OnSettingChanged
                          (this_01,(String *)pOVar7,pOVar21,(MethodInfo *)0x0);
              }
              goto code_?;
            }
            pDVar8 = *(Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        **)(lVar14 + 0x18);
            lVar22 = (longlong)LStack_19._index;
            uVar12 = LStack_19._index + 1;
            if (pDVar8 ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) goto code_?;
            bVar17 = *(uint *)&(pDVar8->fields)._entries <= (uint)LStack_19._index;
            LStack_19._index = uVar12;
            if (bVar17) goto code_?;
          } while ((&(pDVar8->fields)._count)[lVar22 * 6] < 0);
          LStack_19._current = *(Object **)(&(pDVar8->fields)._freeCount + lVar22 * 6);
          func_?(&LStack_19._current);
          pOVar7 = LStack_19._current;
          if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->_1).
                       field_0x1c == 0) {
            FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData);
          }
          this_00 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVTextMsg__MvTextMsgData->
                    static_fields->DefaultData;
          if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0)
          goto code_?;
          pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (this_00,pOVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          pDVar8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar3,pOVar7,pOVar21,InsertionBehavior__Enum_None,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar12 = LStack_19._index;
code_?:
  LStack_19._index = uVar12;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
  return pDVar3;
}


/* Object RemoveQuadFromText(String, Object) */

Object * Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_RemoveQuadFromText
                   (String *key,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__quad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((key == StringLiteral_text) ||
      ((((key != (String *)0x0 && (StringLiteral_text != (String *)0x0)) &&
        ((key->fields)._stringLength == (StringLiteral_text->fields)._stringLength)) &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_text->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ))) && (val != (Object *)0x0)) {
    pSVar2 = (String *)0x0;
    if (val->klass == pORam0000000182dc50c0) {
      pSVar2 = (String *)val;
    }
    if (pSVar2 != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_ToLower(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 != (String *)0x0) {
        bVar1 = mscorlib.dll::System::String::String_Contains
                          (pSVar3,StringLiteral__quad,(MethodInfo *)0x0);
        pSVar4 = StringLiteral__quad;
        if (bVar1 == 0) {
          return val;
        }
        iVar5 = (pSVar3->fields)._stringLength;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Globalization__CompareInfo);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Globalization__CultureInfo);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar4 == (String *)0x0) {
          uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
          pAVar7 = (ArgumentNullException *)func_?(uVar6);
          pSVar2 = (String *)func_?(&StringLiteral_value);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (pAVar7,pSVar2,(MethodInfo *)0x0);
          uVar6 = func_?(&
                                      MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                     );
          FUN_?(pAVar7,uVar6);
          pcVar8 = (code *)swi(3);
          pOVar9 = (Object *)(*pcVar8)();
          return pOVar9;
        }
        if ((pSVar3->fields)._stringLength < 0) {
          uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
          pSVar2 = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
          pSVar3 = (String *)func_?(&StringLiteral_startIndex);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
          uVar6 = func_?(&
                                      MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                     );
          FUN_?(pAVar10,uVar6);
          pcVar8 = (code *)swi(3);
          pOVar9 = (Object *)(*pcVar8)();
          return pOVar9;
        }
        if ((iVar5 < 0) || ((pSVar3->fields)._stringLength - iVar5 < 0)) {
          uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
          pSVar2 = (String *)func_?(&StringLiteral_Count_must_be_positive_and_count);
          pSVar3 = (String *)func_?(&StringLiteral_count);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
          uVar6 = func_?(&
                                      MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                     );
          FUN_?(pAVar10,uVar6);
          pcVar8 = (code *)swi(3);
          pOVar9 = (Object *)(*pcVar8)();
          return pOVar9;
        }
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__Globalization__CompareInfo);
        }
        pCVar11 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
        if (pCVar11 != (CompareInfo *)0x0) {
          startIndex = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_IndexOfOrdinal
                                 (pCVar11,pSVar3,pSVar4,0,iVar5,0,(MethodInfo *)0x0);
          pSVar4 = ::StringLiteral__;
          iVar5 = (pSVar3->fields)._stringLength - startIndex;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Globalization__CompareInfo);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Globalization__CultureInfo);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar4 == (String *)0x0) {
            uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
            pAVar7 = (ArgumentNullException *)func_?(uVar6);
            pSVar2 = (String *)func_?(&StringLiteral_value);
            mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                      (pAVar7,pSVar2,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                       );
            FUN_?(pAVar7,uVar6);
            pcVar8 = (code *)swi(3);
            pOVar9 = (Object *)(*pcVar8)();
            return pOVar9;
          }
          if ((startIndex < 0) || ((pSVar3->fields)._stringLength < startIndex)) {
            uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
            pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
            pSVar2 = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
            pSVar3 = (String *)func_?(&StringLiteral_startIndex);
            mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                      (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                       );
            FUN_?(pAVar10,uVar6);
            pcVar8 = (code *)swi(3);
            pOVar9 = (Object *)(*pcVar8)();
            return pOVar9;
          }
          if ((iVar5 < 0) || ((pSVar3->fields)._stringLength - iVar5 < startIndex)) {
            uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
            pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
            pSVar2 = (String *)func_?(&StringLiteral_Count_must_be_positive_and_count);
            pSVar3 = (String *)func_?(&StringLiteral_count);
            mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                      (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                       );
            FUN_?(pAVar10,uVar6);
            pcVar8 = (code *)swi(3);
            pOVar9 = (Object *)(*pcVar8)();
            return pOVar9;
          }
          if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__System__Globalization__CompareInfo);
          }
          pCVar11 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
          if (pCVar11 != (CompareInfo *)0x0) {
            iVar12 = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_IndexOfOrdinal
                              (pCVar11,pSVar3,pSVar4,startIndex,iVar5,0,(MethodInfo *)0x0);
            if (-1 < iVar12) {
              pSVar3 = mscorlib.dll::System::String::String_Substring_1
                                 (pSVar2,0,startIndex,(MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::String::String_Substring_1
                                 (pSVar2,iVar12 + 1,(pSVar2->fields)._stringLength - (iVar12 + 1),
                                  (MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::String::String_Concat_4
                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
              return (Object *)pSVar2;
            }
            pSVar2 = mscorlib.dll::System::String::String_Substring_1
                               (pSVar2,0,startIndex,(MethodInfo *)0x0);
            return (Object *)pSVar2;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      pOVar9 = (Object *)(*pcVar8)();
      return pOVar9;
    }
  }
  return val;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_UpdateColorPickerPreview
               (MessageBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).colorR;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    uVar3 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pSVar1 = (this->fields).colorG;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
      uVar4 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable).get_value.method);
      pSVar1 = (this->fields).colorB;
      if ((pSVar1 != (SettingsSlider *)0x0) &&
         (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
        uVar5 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable).get_value.method);
        pSVar1 = (this->fields).colorA;
        if ((pSVar1 != (SettingsSlider *)0x0) &&
           (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
          uVar6 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable).get_value.method);
          pIVar7 = (this->fields).colorPickerPreview;
          if (pIVar7 != (Image *)0x0) {
            uStackY_58 = uVar3;
            uStackY_54 = uVar4;
            uStackY_50 = uVar5;
            uStackY_4c = uVar6;
            (*(pIVar7->klass->vtable).set_color.methodPtr)
                      (pIVar7,&uStackY_58,(pIVar7->klass->vtable).set_color.method);
            pSVar8 = (this->fields).settingsBase;
            key = (this->fields).editingColorKey;
            value = (Object *)FUN_?(TypeInfo__System__Single,4);
            if (value != (Object *)0x0) {
              if ((((*(int *)&value[1].monitor == 0) ||
                   (*(undefined4 *)&value[2].klass = uVar3, *(uint *)&value[1].monitor < 2)) ||
                  (*(undefined4 *)((longlong)&value[2].klass + 4) = uVar4,
                  *(uint *)&value[1].monitor < 3)) ||
                 (*(undefined4 *)&value[2].monitor = uVar5, *(uint *)&value[1].monitor < 4)) {
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined4 *)((longlong)&value[2].monitor + 4) = uVar6;
              if (pSVar8 != (SettingsBase *)0x0) {
                if (cRam_? == '\0') {
                  puStackY_40 = &UNK_?;
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                               );
                  LOCK();
                  UNLOCK();
                  puStackY_40 = &UNK_?;
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                               );
                  LOCK();
                  UNLOCK();
                  puStackY_40 = &UNK_?;
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                               );
                  LOCK();
                  UNLOCK();
                  puStackY_40 = &UNK_?;
                  FUN_?(&
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
                  LOCK();
                  UNLOCK();
                  puStackY_40 = &UNK_?;
                  FUN_?();
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((((pSVar8->fields).woID != -1) && (key != (String *)0x0)) &&
                   ((key->fields)._stringLength != 0)) {
                  puStackY_40 = &UNK_?;
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (this_01 != (MVWorldObjectClientManager *)0x0) {
                    puStackY_40 = &UNK_?;
                    wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (this_01,(pSVar8->fields).woID,(MethodInfo *)0x0);
                    if (wo == (MVWorldObjectClient *)0x0) {
                      return;
                    }
                    if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
                      puStackY_40 = &UNK_?;
                      FUN_?();
                    }
                    uVar10 = 0;
                    puStackY_40 = &UNK_?;
                    WorldObjectDataValidator::WorldObjectDataValidator_Validate
                              (wo,key,value,(MethodInfo *)0x0);
                    this_00 = (pSVar8->fields).result;
                    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
                      puStackY_40 = &UNK_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                (this_00,(Object *)key,value,(InsertionBehavior__Enum)uVar10,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                 ->klass->rgctx_data[0x22].method);
                      puStackY_40 = &UNK_?;
                      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                                 *)FUN_?(
                                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                );
                      puStackY_40 = &UNK_?;
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]
                      ::
                      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                                (this_02,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                );
                      if (this_02 !=
                          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                           *)0x0) {
                        puStackY_40 = &UNK_?;
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                  ((Dictionary_2_System_Object_System_Object_ *)this_02,
                                   (Object *)key,value,
                                   (InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)uVar10 >> 8),2),
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                   ->klass->rgctx_data[0x22].method);
                        puStackY_40 = &UNK_?;
                        (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                                  (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
                        return;
                      }
                    }
                  }
                  puStackY_40 = &UNK_?;
                  FUN_?();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateUI() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_UpdateUI
               (MessageBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fontSelection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_backgroundOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textOutline);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_background);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).data;
  receiver = (this->fields).selectedFontItem;
  if (((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar1,(Object *)StringLiteral_fontSelection,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), receiver != (TMPSettingsDropdownItemFont *)0x0)) &&
     (pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (receiver->fields).fontList;
    if (this_00 != (StreamedTextMeshProFontList *)0x0) {
      url = StreamedTextMeshProFontList::StreamedTextMeshProFontList_GetFontUrl
                      (this_00,*(int32_t *)&pOVar2[1].klass,(MethodInfo *)0x0);
      this_01 = (receiver->fields).fontStream;
      if (this_01 != (StreamedTextMeshProFontTriggered *)0x0) {
        StreamedTextMeshProFontTriggered::StreamedTextMeshProFontTriggered_StreamFont
                  (this_01,(StreamedTextMeshProFont_IReceiver *)receiver,url,(MethodInfo *)0x0);
        pDVar1 = (this->fields).data;
        if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_textOutline,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pOVar2 != (Object *)0x0)) {
          if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar2,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pDVar1 = (this->fields).data;
          value = *(bool *)&pOVar2[1].klass;
          if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar1,(Object *)StringLiteral_background,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar2 != (Object *)0x0)) {
            if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar2,lRam_?);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pDVar1 = (this->fields).data;
            value_00 = *(bool *)&pOVar2[1].klass;
            if ((pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
               (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar1,(Object *)StringLiteral_backgroundOutline,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pOVar2 != (Object *)0x0)) {
              if ((pOVar2->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar2,lRam_?);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pSVar4 = (this->fields).textOutlineThicknessSlider;
              bVar5 = *(byte *)&pOVar2[1].klass;
              if ((((pSVar4 != (SettingsInputFieldSlider *)0x0) &&
                   (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pSVar4,(MethodInfo *)0x0),
                   pTVar6 != (Transform *)0x0)) &&
                  (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                                      (pTVar6,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) &&
                 (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                 pGVar7 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar7,value,(MethodInfo *)0x0);
                pIVar8 = (this->fields).textOutlineColorPreview;
                if (((pIVar8 != (Image *)0x0) &&
                    (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pIVar8,(MethodInfo *)0x0),
                    pTVar6 != (Transform *)0x0)) &&
                   ((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                    pTVar6 != (Transform *)0x0 &&
                    ((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                     pTVar6 != (Transform *)0x0 &&
                     (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                     pGVar7 != (GameObject *)0x0)))))) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar7,value,(MethodInfo *)0x0);
                  pSVar4 = (this->fields).bakgroundWidthSlider;
                  if ((pSVar4 != (SettingsInputFieldSlider *)0x0) &&
                     (((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_transform((Component *)pSVar4,(MethodInfo *)0x0),
                       pTVar6 != (Transform *)0x0 &&
                       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                       pTVar6 != (Transform *)0x0)) &&
                      (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                      pGVar7 != (GameObject *)0x0)))) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar7,value_00,(MethodInfo *)0x0);
                    pSVar4 = (this->fields).backgroundRadiusSlider;
                    if (((pSVar4 != (SettingsInputFieldSlider *)0x0) &&
                        (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_transform((Component *)pSVar4,(MethodInfo *)0x0),
                        pTVar6 != (Transform *)0x0)) &&
                       ((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                        pTVar6 != (Transform *)0x0 &&
                        (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pTVar6,(MethodInfo *)0x0),
                        pGVar7 != (GameObject *)0x0)))) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar7,value_00,(MethodInfo *)0x0);
                      this_02 = (this->fields).backgroundOutlineToggle;
                      if ((this_02 != (SettingsToggle *)0x0) &&
                         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0),
                         pGVar7 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar7,value_00,(MethodInfo *)0x0);
                        pSVar4 = (this->fields).backgroundOutlineThicknessSlider;
                        if ((pSVar4 != (SettingsInputFieldSlider *)0x0) &&
                           (((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_transform
                                                 ((Component *)pSVar4,(MethodInfo *)0x0),
                             pTVar6 != (Transform *)0x0 &&
                             (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                       Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                             pTVar6 != (Transform *)0x0)) &&
                            (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pTVar6,(MethodInfo *)0x0),
                            pGVar7 != (GameObject *)0x0)))) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar7,bVar5 & value_00,(MethodInfo *)0x0);
                          pIVar8 = (this->fields).backgroundColorPreview;
                          if (((pIVar8 != (Image *)0x0) &&
                              (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)pIVar8,(MethodInfo *)0x0),
                              pTVar6 != (Transform *)0x0)) &&
                             ((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                              pTVar6 != (Transform *)0x0 &&
                              ((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                         Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                               pTVar6 != (Transform *)0x0 &&
                               (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pTVar6,(MethodInfo *)0x0),
                               pGVar7 != (GameObject *)0x0)))))) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar7,value_00,(MethodInfo *)0x0);
                            pIVar8 = (this->fields).backgroundOutlineColorPreview;
                            if ((pIVar8 != (Image *)0x0) &&
                               ((((pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform
                                                      ((Component *)pIVar8,(MethodInfo *)0x0),
                                  pTVar6 != (Transform *)0x0 &&
                                  (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                                  pTVar6 != (Transform *)0x0)) &&
                                 (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                           Transform_GetParent(pTVar6,(MethodInfo *)0x0),
                                 pTVar6 != (Transform *)0x0)) &&
                                (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pTVar6,(MethodInfo *)0x0),
                                pGVar7 != (GameObject *)0x0)))) {
                              bVar5 = bVar5 & value_00;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                              ,bVar5,0);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if (pGVar7 == (GameObject *)0x0) {
                                FUN_?();
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              pvVar9 = (pGVar7->fields)._.m_CachedPtr;
                              if (pvVar9 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pGVar7,(MethodInfo *)0x0);
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              pcVar3 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar3 = (code *)FUN_?(&UNK_?),
                                 pcVar3 == (code *)0x0)) {
                                uVar10 = func_?(&UNK_?);
                                FUN_?(uVar10,0);
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*pcRam_?)(pvVar9,bVar5);
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MessageBoxSettings() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MessageBoxSettings->static_fields;
  (pMVar1->NormalCanvasSize).x = 1270.0;
  (pMVar1->NormalCanvasSize).y = 1070.0;
  pMVar1 = TypeInfo__MessageBoxSettings->static_fields;
  (pMVar1->ColorEditingCanvasSize).x = 800.0;
  (pMVar1->ColorEditingCanvasSize).y = 750.0;
  return;
}


/* MessageBoxSettings() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings__ctor
               (MessageBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).editingColorKey = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pSVar6 = (Single__Array *)FUN_?(TypeInfo__System__Single,4);
  bVar1 = iRam_? != 0;
  (this->fields).color = pSVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).color >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}

