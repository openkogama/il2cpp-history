
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_Initialize
               (CostumeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
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
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCanCollide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInvisible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeed);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  if (woID == -1) {
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__Common__AvatarItemType);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
      LOCK();
      UNLOCK();
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
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_itemData);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_itemType);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    pDVar2 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultItemData
                        ((MethodInfo *)0x0);
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar3 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_itemData
               ,(Object *)pDVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_10[0] = 0x3b;
    pOVar4 = (Object *)FUN_?(TypeInfo__MV__Common__AvatarItemType,auStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_itemType
               ,pOVar4,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    bVar5 = iRam_? != 0;
    (this->fields).data = (Dictionary_2_System_Object_System_Object_ *)this_03;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).data >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pDVar2 = (this->fields).data;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar2,(Object *)StringLiteral_itemData,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      (this->fields).itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar10) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar2);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (this->fields).itemData = pDVar2;
      bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar10) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar2);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).itemData >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_02,woID,(MethodInfo *)0x0), pMVar12 == (MVWorldObjectClient *)0x0))
    goto code_?;
    bVar5 = iRam_? != 0;
    (this->fields).data = (pMVar12->fields)._.data;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).data >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pDVar2 = CostumeSettings_ReadWorldObjectItemData(this,(this->fields).data,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields).itemData = pDVar2;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).itemData >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Costume,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    VVar13 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                       (StringLiteral_Health,(MethodInfo *)0x0);
    VStack_14 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                          (StringLiteral_MovementSpeed,(MethodInfo *)0x0);
    aCStack_15[0]._0_8_ =
         Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_MinMaxValue
                   (StringLiteral_TrailLength,(MethodInfo *)0x0);
    pDVar2 = (this->fields).itemData;
    this_01 = (this->fields).nameInputField;
    if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pSVar16 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,(Object *)StringLiteral_Name,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 != (SettingsInputField *)0x0)) {
      if (pSVar16 != (String *)0x0) {
        if (pSVar16->klass == pSRam0000000182dc50c0) {
          pSVar1 = pSVar16;
        }
        if (pSVar1 == (String *)0x0) {
          FUN_?(pSVar16);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      SettingsInputField::SettingsInputField_Initialize
                (this_01,StringLiteral_Name,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (this->fields).itemData;
      pSVar17 = (this->fields).healthSlider;
      if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
          (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar2,(Object *)StringLiteral_Health,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pSVar17 != (SettingsSlider *)0x0)) && (pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar4,lRam_?);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fStack_18 = VVar13.Item2;
        fStack_19 = VVar13.Item1;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar17,StringLiteral_Health,*(float *)&pOVar4[1].klass,fStack_19,fStack_18,
                   (MethodInfo *)0x0);
        pDVar2 = (this->fields).itemData;
        pSVar20 = (this->fields).healthInputSlider;
        if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
            (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar2,(Object *)StringLiteral_Health,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pSVar20 != (SettingsInputFieldSlider *)0x0)) &&
           (pOVar4 != (Object *)0x0)) {
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar4,lRam_?);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                    (pSVar20,StringLiteral_Health,*(float *)&pOVar4[1].klass,(MethodInfo *)0x0);
          pDVar2 = (this->fields).itemData;
          pSVar17 = (this->fields).movementSpeedSlider;
          if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
              (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar2,(Object *)StringLiteral_MovementSpeed,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   ), pSVar17 != (SettingsSlider *)0x0)) &&
             (pOVar4 != (Object *)0x0)) {
            if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar4,lRam_?);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar17,StringLiteral_MovementSpeed,*(float *)&pOVar4[1].klass,
                       VStack_14.Item1,VStack_14.Item2,(MethodInfo *)0x0);
            pDVar2 = (this->fields).itemData;
            pSVar20 = (this->fields).movementSpeedInputSlider;
            if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar2,(Object *)StringLiteral_MovementSpeed,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pSVar20 != (SettingsInputFieldSlider *)0x0)) &&
               (pOVar4 != (Object *)0x0)) {
              if ((pOVar4->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar4,lRam_?);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                        (pSVar20,StringLiteral_MovementSpeed,*(float *)&pOVar4[1].klass,
                         (MethodInfo *)0x0);
              pDVar2 = (this->fields).itemData;
              pSVar21 = (this->fields).playerInvisibleToggle;
              if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                  (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar2,(Object *)StringLiteral_PlayerInvisible,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       ), pSVar21 != (SettingsToggle *)0x0)) &&
                 (pOVar4 != (Object *)0x0)) {
                if ((pOVar4->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar4,lRam_?);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                SettingsToggle::SettingsToggle_Initialize
                          (pSVar21,StringLiteral_PlayerInvisible,*(bool *)&pOVar4[1].klass,
                           (MethodInfo *)0x0);
                pDVar2 = (this->fields).itemData;
                pSVar21 = (this->fields).playersCanCollideToggle;
                if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                    (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (pDVar2,(Object *)StringLiteral_PlayersCanCollide,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         ), pSVar21 != (SettingsToggle *)0x0)) &&
                   (pOVar4 != (Object *)0x0)) {
                  if ((pOVar4->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar4,lRam_?);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  SettingsToggle::SettingsToggle_Initialize
                            (pSVar21,StringLiteral_PlayersCanCollide,*(bool *)&pOVar4[1].klass,
                             (MethodInfo *)0x0);
                  pDVar2 = (this->fields).itemData;
                  pSVar21 = (this->fields).trailToggle;
                  if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                      (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__get_Item
                                           (pDVar2,(Object *)StringLiteral_TrailEnabled,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           ), pSVar21 != (SettingsToggle *)0x0)) &&
                     (pOVar4 != (Object *)0x0)) {
                    if ((pOVar4->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar4,lRam_?);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    SettingsToggle::SettingsToggle_Initialize
                              (pSVar21,StringLiteral_TrailEnabled,*(bool *)&pOVar4[1].klass,
                               (MethodInfo *)0x0);
                    pDVar2 = (this->fields).itemData;
                    pSVar17 = (this->fields).trailLengthSlider;
                    if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                        (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (pDVar2,(Object *)StringLiteral_TrailLength,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             ), pSVar17 != (SettingsSlider *)0x0)) &&
                       (pOVar4 != (Object *)0x0)) {
                      if ((pOVar4->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar4,lRam_?);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      SettingsSlider::SettingsSlider_Initialize
                                (pSVar17,StringLiteral_TrailLength,*(float *)&pOVar4[1].klass,
                                 aCStack_15[0].r,aCStack_15[0].g,(MethodInfo *)0x0);
                      pDVar2 = (this->fields).itemData;
                      pSVar20 = (this->fields).trailLengthInputSlider;
                      if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                          (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,System::Object]::
                                     Dictionary_2_System_Object_System_Object__get_Item
                                               (pDVar2,(Object *)StringLiteral_TrailLength,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               ), pSVar20 != (SettingsInputFieldSlider *)0x0)) &&
                         (pOVar4 != (Object *)0x0)) {
                        if ((pOVar4->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar4,lRam_?);
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                                  (pSVar20,StringLiteral_TrailLength,*(float *)&pOVar4[1].klass,
                                   (MethodInfo *)0x0);
                        pIVar22 = (this->fields).trailColorImage;
                        pDVar2 = (this->fields).itemData;
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pSVar1 = StringLiteral_TrailColor;
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__Extensions);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        aCStack_15[0].r = 0.0;
                        aCStack_15[0].g = 0.0;
                        aCStack_15[0].b = 0.0;
                        aCStack_15[0].a = 0.0;
                        pCVar23 = Extensions::Extensions_GetColorOrDefault
                                            ((Color *)&VStack_14,pDVar2,pSVar1,aCStack_15,
                                             (MethodInfo *)0x0);
                        if (pIVar22 != (Image *)0x0) {
                          aCStack_15[0].r = pCVar23->r;
                          aCStack_15[0].g = pCVar23->g;
                          aCStack_15[0].b = pCVar23->b;
                          aCStack_15[0].a = pCVar23->a;
                          (*(pIVar22->klass->vtable).set_color.methodPtr)
                                    (pIVar22,aCStack_15,(pIVar22->klass->vtable).set_color.method);
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
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_OnColorEdited(CostumeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).colorR;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    fVar3 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                              (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pSVar1 = (this->fields).colorG;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
      fVar4 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                (pSVar2,(pSVar2->klass->vtable).get_value.method);
      pSVar1 = (this->fields).colorB;
      if ((pSVar1 != (SettingsSlider *)0x0) &&
         (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
        fVar5 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                  (pSVar2,(pSVar2->klass->vtable).get_value.method);
        pSVar1 = (this->fields).colorA;
        if ((pSVar1 != (SettingsSlider *)0x0) &&
           (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
          fVar6 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                                    (pSVar2,(pSVar2->klass->vtable).get_value.method);
          pIVar7 = (this->fields).trailColorImage;
          if (pIVar7 != (Image *)0x0) {
            CStack_8.g = fVar4;
            CStack_8.r = fVar3;
            CStack_8.a = fVar6;
            CStack_8.b = fVar5;
            (*(pIVar7->klass->vtable).set_color.methodPtr)
                      (pIVar7,&CStack_8,(pIVar7->klass->vtable).set_color.method);
            hashtable = (this->fields).itemData;
            colorKey = (this->fields).editingColorKey;
            if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
              FUN_?();
            }
            Extensions::Extensions_SetColor(hashtable,colorKey,&CStack_8,(MethodInfo *)0x0);
            this_00 = (this->fields).settingsBase;
            if (this_00 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_OnSettingChanged
                        (this_00,StringLiteral_itemData,(Object *)(this->fields).itemData,
                         (MethodInfo *)0x0);
              bVar9 = iRam_? != 0;
              (this->fields).editingColorKey = ::StringLiteral__;
              if (bVar9) {
                uVar10 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
                uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                do {
                  uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                  puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                  LOCK();
                  bVar9 = uVar12 == *puVar13;
                  if (bVar9) {
                    *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              this_01 = (this->fields).colorPicker;
              if (this_01 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_01,0,(MethodInfo *)0x0);
                obj = (this->fields).canvas;
                if (*(int *)&(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                             ->_1).field_0x1c == 0) {
                  FUN_?(
                               TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                               );
                }
                if (obj != (RectTransform *)0x0) {
                  auStack_14[0] =
                       CONCAT44((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                                 ->static_fields->NormalEditingCanvasSize).y,
                                (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                                 ->static_fields->NormalEditingCanvasSize).x);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                  ,auStack_14[0],0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (obj == (RectTransform *)0x0) {
                    FUN_?();
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pvVar16 = (obj->fields)._._._.m_CachedPtr;
                  if (pvVar16 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  pcVar15 = pcRam_?;
                  if (pcRam_? == (code *)0x0) {
                    pcVar15 = (code *)FUN_?(&UNK_?);
                    if (pcVar15 == (code *)0x0) {
                      uVar17 = func_?(&UNK_?);
                      FUN_?(uVar17,0);
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                  }
                  pcRam_? = pcVar15;
                  (*pcRam_?)(pvVar16,auStack_14);
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_OnColorPressed(CostumeSettings *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
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
  hashtable = (this->fields).itemData;
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pCVar1 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultColor
                     (&CStack_2,colorKey,(MethodInfo *)0x0);
  CStack_2.r = pCVar1->r;
  CStack_2.g = pCVar1->g;
  CStack_2.b = pCVar1->b;
  CStack_2.a = pCVar1->a;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = Extensions::Extensions_GetColorOrDefault
                     (&CStack_3,hashtable,colorKey,&CStack_2,(MethodInfo *)0x0);
  maxValue = _UNK_?;
  pSVar4 = (this->fields).colorR;
  value = pCVar1->g;
  uVar5._0_4_ = pCVar1->r;
  uVar5._4_4_ = pCVar1->g;
  value_00 = pCVar1->b;
  value_01 = pCVar1->a;
  uVar6._0_4_ = pCVar1->b;
  uVar6._4_4_ = pCVar1->a;
  if (pSVar4 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize
              (pSVar4,StringLiteral_colorR,pCVar1->r,0.0,_UNK_?,(MethodInfo *)0x0);
    pSVar4 = (this->fields).colorG;
    if (pSVar4 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar4,StringLiteral_colorG,value,0.0,maxValue,(MethodInfo *)0x0);
      pSVar4 = (this->fields).colorB;
      if (pSVar4 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar4,StringLiteral_colorB,value_00,0.0,maxValue,(MethodInfo *)0x0);
        pSVar4 = (this->fields).colorA;
        if (pSVar4 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar4,StringLiteral_colorA,value_01,0.0,maxValue,(MethodInfo *)0x0);
          pIVar7 = (this->fields).colorPickerPreview;
          if (pIVar7 != (Image *)0x0) {
            CStack_2._0_8_ = uVar5;
            CStack_2._8_8_ = uVar6;
            (*(pIVar7->klass->vtable).set_color.methodPtr)(pIVar7,&CStack_2);
            bVar8 = iRam_? != 0;
            (this->fields).editingColorKey = colorKey;
            if (bVar8) {
              uVar9 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar8 = uVar11 == *puVar12;
                if (bVar8) {
                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar8);
            }
            this_00 = (this->fields).colorPicker;
            if (this_00 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              obj = (this->fields).canvas;
              if (*(int *)&(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                           ->_1).field_0x1c == 0) {
                FUN_?(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                             );
              }
              if (obj != (RectTransform *)0x0) {
                auStack_13[0] =
                     CONCAT44((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                               ->static_fields->ColorEditingCanvasSize).y,
                              (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                               ->static_fields->ColorEditingCanvasSize).x);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                ,auStack_13[0],0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (obj == (RectTransform *)0x0) {
                  FUN_?();
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pvVar15 = (obj->fields)._._._.m_CachedPtr;
                if (pvVar15 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pcVar14 = pcRam_?;
                if (pcRam_? == (code *)0x0) {
                  pcVar14 = (code *)FUN_?(&UNK_?);
                  if (pcVar14 == (code *)0x0) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                pcRam_? = pcVar14;
                (*pcRam_?)(pvVar15,auStack_13);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_OnSettingChanged
               (CostumeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
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
  iVar1 = (key->fields)._stringLength;
  if (5 < iVar1) {
    if (iVar1 + -5 < 0) {
      uVar2 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      this_02 = (ArgumentOutOfRangeException *)func_?(uVar2);
      pSVar3 = (String *)func_?(&StringLiteral_Index_and_length_must_refer_to_a);
      paramName = (String *)func_?(&StringLiteral_length);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                (this_02,paramName,pSVar3,(MethodInfo *)0x0);
      uVar2 = func_?(&MethodInfo__System__String__Substring_int__int_);
      FUN_?(this_02,uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    method = (MethodInfo *)0x0;
    pSVar3 = mscorlib.dll::System::String::String_InternalSubString(key,0,5,(MethodInfo *)0x0);
    if (pSVar3 == StringLiteral_color) {
code_?:
      pSVar5 = (this->fields).colorR;
      pIVar6 = (this->fields).colorPickerPreview;
      if ((pSVar5 != (SettingsSlider *)0x0) &&
         (pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0)) {
        uVar8 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable).get_value.method);
        pSVar5 = (this->fields).colorG;
        if ((pSVar5 != (SettingsSlider *)0x0) &&
           (pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0)) {
          uVar9 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable).get_value.method);
          pSVar5 = (this->fields).colorB;
          if ((pSVar5 != (SettingsSlider *)0x0) &&
             (pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0)) {
            uStack_10 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                                  (pSVar7,(pSVar7->klass->vtable).get_value.method);
            pSVar5 = (this->fields).colorA;
            if ((pSVar5 != (SettingsSlider *)0x0) &&
               ((pSVar7 = (pSVar5->fields).slider, pSVar7 != (Slider *)0x0 &&
                (uStack_11 = (*(pSVar7->klass->vtable).get_value.methodPtr)
                                       (pSVar7,(pSVar7->klass->vtable).get_value.method),
                pIVar6 != (Image *)0x0)))) {
              uStack_12 = uVar8;
              uStack_13 = uVar9;
              (*(pIVar6->klass->vtable).set_color.methodPtr)
                        (pIVar6,&uStack_12,(pIVar6->klass->vtable).set_color.method);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (((pSVar3 != (String *)0x0) && (StringLiteral_color != (String *)0x0)) &&
       ((pSVar3->fields)._stringLength == (StringLiteral_color->fields)._stringLength)) {
      method = (MethodInfo *)0x0;
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar3->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_color->fields)._firstChar,
                         (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) goto code_?;
    }
  }
  this_00 = (this->fields).itemData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = (this->fields).settingsBase;
    if (this_01 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                (this_01,StringLiteral_itemData,(Object *)(this->fields).itemData,(MethodInfo *)0x0)
      ;
      return;
    }
  }
code_?:
  FUN_?();
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
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
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
    FUN_?(&
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailEnabled);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailLength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayersCanCollide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInvisible);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MovementSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).field_0x1c ==
      0) {
    FUN_?();
  }
  pDVar1 = Assets::Scripts::WorldObjectTypes::Costume::CostumeData::CostumeData_DefaultItemData
                     ((MethodInfo *)0x0);
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)woData,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (woData,(Object *)StringLiteral_itemData,(Object *)(this->fields).itemData,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      return (this->fields).itemData;
    }
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (woData,(Object *)StringLiteral_itemData,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    defaultValue = (Dictionary_2_System_Object_System_Object_ *)0x0;
    hashtable = defaultValue;
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar3->klass->_1).naturalAligment < bVar4) ||
         (hashtable = pDVar3,
         (Dictionary_2_System_Object_System_Object___Class *)
         (pDVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar3);
        pcVar5 = (code *)swi(3);
        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
        return pDVar1;
      }
    }
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_Name,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      defaultValue_00 = defaultValue;
      if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        if (pDVar3->klass == pDRam0000000182dc50c0) {
          defaultValue_00 = pDVar3;
        }
        if (defaultValue_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          FUN_?(pDVar3);
          pcVar5 = (code *)swi(3);
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
          return pDVar1;
        }
      }
      pMVar6 = 
      System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
      ;
      pOVar7 = Extensions::Extensions_GetValueOrDefault_3
                         (hashtable,StringLiteral_Name,(Object *)defaultValue_00,
                          System__String_MethodInfo__Extensions__GetValueOrDefault<System::String>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__String_
                         );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar1,(Object *)StringLiteral_Name,pOVar7,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_Health,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar7 != (Object *)0x0) {
        if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar7,lRam_?);
          pcVar5 = (code *)swi(3);
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
          return pDVar1;
        }
        pMVar6 = 
        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
        ;
        afStackX_10[0] =
             Extensions::Extensions_GetValueOrDefault_4
                       (hashtable,StringLiteral_Health,*(float *)&pOVar7[1].klass,
                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                       );
        pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar1,(Object *)StringLiteral_Health,pOVar7,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_MovementSpeed,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar7 != (Object *)0x0) {
          if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
            FUN_?(pOVar7,lRam_?);
            pcVar5 = (code *)swi(3);
            pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
            return pDVar1;
          }
          pMVar6 = 
          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
          ;
          afStackX_10[0] =
               Extensions::Extensions_GetValueOrDefault_4
                         (hashtable,StringLiteral_MovementSpeed,*(float *)&pOVar7[1].klass,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
          pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar1,(Object *)StringLiteral_MovementSpeed,pOVar7,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar1,(Object *)StringLiteral_TrailLength,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar7 != (Object *)0x0) {
            if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar7,lRam_?);
              pcVar5 = (code *)swi(3);
              pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
              return pDVar1;
            }
            pMVar6 = 
            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
            ;
            afStackX_10[0] =
                 Extensions::Extensions_GetValueOrDefault_4
                           (hashtable,StringLiteral_TrailLength,*(float *)&pOVar7[1].klass,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
            pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar1,(Object *)StringLiteral_TrailLength,pOVar7,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_PlayerInvisible,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar7 != (Object *)0x0) {
              if ((pOVar7->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar7,lRam_?);
                pcVar5 = (code *)swi(3);
                pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
                return pDVar1;
              }
              pMVar6 = 
              bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
              ;
              bVar8 = Extensions::Extensions_GetValueOrDefault
                                (hashtable,StringLiteral_PlayerInvisible,*(bool *)&pOVar7[1].klass,
                                 bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                );
              afStackX_10[0] = (float)CONCAT31(afStackX_10[0]._1_3_,bVar8);
              pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar1,(Object *)StringLiteral_PlayerInvisible,pOVar7,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar1,(Object *)StringLiteral_PlayersCanCollide,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar7 != (Object *)0x0) {
                if ((pOVar7->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar7,lRam_?);
                  pcVar5 = (code *)swi(3);
                  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
                  return pDVar1;
                }
                pMVar6 = 
                bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                ;
                bVar8 = Extensions::Extensions_GetValueOrDefault
                                  (hashtable,StringLiteral_PlayersCanCollide,
                                   *(bool *)&pOVar7[1].klass,
                                   bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                  );
                afStackX_10[0] = (float)CONCAT31(afStackX_10[0]._1_3_,bVar8);
                pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (pDVar1,(Object *)StringLiteral_PlayersCanCollide,pOVar7,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar1,(Object *)StringLiteral_TrailEnabled,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pOVar7 != (Object *)0x0) {
                  if ((pOVar7->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar7,lRam_?);
                    pcVar5 = (code *)swi(3);
                    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
                    return pDVar1;
                  }
                  pMVar6 = 
                  bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                  ;
                  bVar8 = Extensions::Extensions_GetValueOrDefault
                                    (hashtable,StringLiteral_TrailEnabled,*(bool *)&pOVar7[1].klass,
                                     bool_MethodInfo__Extensions__GetValueOrDefault<bool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__bool_
                                    );
                  afStackX_10[0] = (float)CONCAT31(afStackX_10[0]._1_3_,bVar8);
                  pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar1,(Object *)StringLiteral_TrailEnabled,pOVar7,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar1,(Object *)StringLiteral_TrailColor,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  pMVar6 = 
                  System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                  ;
                  pSVar9 = TypeInfo__System__Single;
                  if ((pOVar7 != (Object *)0x0) &&
                     (defaultValue = (Dictionary_2_System_Object_System_Object_ *)
                                     FUN_?(pOVar7,TypeInfo__System__Single),
                     defaultValue == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                    FUN_?(pOVar7,pSVar9);
                    pcVar5 = (code *)swi(3);
                    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
                    return pDVar1;
                  }
                  pOVar7 = Extensions::Extensions_GetValueOrDefault_3
                                     (hashtable,StringLiteral_TrailColor,(Object *)defaultValue,
                                      pMVar6);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar1,(Object *)StringLiteral_TrailColor,pOVar7,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  return pDVar1;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings_UpdateColorPickerPreview(CostumeSettings *this,MethodInfo *method)

{
  pIVar1 = (this->fields).colorPickerPreview;
  pSVar2 = (this->fields).colorR;
  if ((pSVar2 != (SettingsSlider *)0x0) &&
     (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
    uVar4 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable).get_value.method);
    pSVar2 = (this->fields).colorG;
    if ((pSVar2 != (SettingsSlider *)0x0) &&
       (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
      uVar5 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable).get_value.method);
      pSVar2 = (this->fields).colorB;
      if ((pSVar2 != (SettingsSlider *)0x0) &&
         (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
        uStack_6 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable).get_value.method);
        pSVar2 = (this->fields).colorA;
        if ((pSVar2 != (SettingsSlider *)0x0) &&
           (pSVar3 = (pSVar2->fields).slider, pSVar3 != (Slider *)0x0)) {
          uStack_7 = (*(pSVar3->klass->vtable).get_value.methodPtr)
                                (pSVar3,(pSVar3->klass->vtable).get_value.method);
          if (pIVar1 != (Image *)0x0) {
            uStack_8 = uVar4;
            uStack_9 = uVar5;
            (*(pIVar1->klass->vtable).set_color.methodPtr)
                      (pIVar1,&uStack_8,(pIVar1->klass->vtable).set_color.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* CostumeSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Costume::CostumeSettings
     ::CostumeSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Costume__CostumeSettings
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).editingColorKey = ::StringLiteral__;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar9;
      LOCK();
      bVar1 = uVar2 != uRam_?;
      uVar10 = uVar2;
      uVar11 = uVar2 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar10, uVar2 = uVar10, uVar10 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar12 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar14 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar2 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar16 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar9 = pIVar16->methods;
            pMVar17 = *ppMVar9;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar7;
                while (ppMVar19 = ppMVar18 + 0x3052af36,
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *(char *)ppMVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar5 = _UNK_?;
    uVar20 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_21 = 0;
    uStack_22 = _UNK_?;
    uStack_23 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_23) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_23 < 0x10) {
code_?:
      lVar8 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_22 = uVar20;
      uStack_23 = uVar5;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar8 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar3;
            LOCK();
            uVar5 = *puVar3;
            if (uVar4 == uVar5) {
              *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar5);
        }
      }
      FUN_?(pOVar6,lVar15);
      if (0xf < uStack_24) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_24 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_23 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar20 = _UNK_?;
      uVar5 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar20._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar20._4_4_ = (pOVar6->_1).cctor_started;
  uVar20 = FUN_?(uVar20);
  FUN_?(uVar20,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

