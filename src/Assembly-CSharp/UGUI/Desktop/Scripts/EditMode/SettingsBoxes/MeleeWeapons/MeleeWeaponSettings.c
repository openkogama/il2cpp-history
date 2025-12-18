
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_Initialize
               (MeleeWeaponSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (String *)0x0;
  if (woID == -1) {
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__Common__AvatarItemType);
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
      FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
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
    if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    pDVar2 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
              MeleeWeaponData_DefaultItemData((MethodInfo *)0x0);
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
    auStackX_10[0] = 8;
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
                            (this_02,woID,(MethodInfo *)0x0), pMVar12 == (MVWorldObjectClient *)0x0)
       ) goto code_?;
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
    pDVar2 = MeleeWeaponSettings_ReadWorldObjectItemData
                        (this,(this->fields).data,(MethodInfo *)0x0);
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
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_MeleeWeapon,(MethodInfo *)0x0)
    ;
    pCVar13 = (this->fields).fireAudioPlayer;
    pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
    if (pCVar14 != (Camera *)0x0) {
      pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar14,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar13 = (CustomItemAudioPlayer *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                          ((Object *)pCVar13,pTVar15,
                           CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                          );
      bVar5 = iRam_? != 0;
      (this->fields).fireAudioPlayer = pCVar13;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).fireAudioPlayer >> 0xc);
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
      pCVar13 = (this->fields).hitAudioPlayer;
      pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar14 != (Camera *)0x0) {
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pCVar14,(MethodInfo *)0x0);
        pCVar13 = (CustomItemAudioPlayer *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_5
                            ((Object *)pCVar13,pTVar15,
                             CustomItemAudioPlayer_MethodInfo__UnityEngine__Object__Instantiate<CustomItemAudioPlayer>_CustomItemAudioPlayer__UnityEngine__Transform_
                            );
        bVar5 = iRam_? != 0;
        (this->fields).hitAudioPlayer = pCVar13;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).hitAudioPlayer >> 0xc);
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
        pCVar13 = (this->fields).fireAudioPlayer;
        if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1)
                     .field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
        }
        if (pCVar13 != (CustomItemAudioPlayer *)0x0) {
          CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
                    (pCVar13,TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                             ->static_fields->fireSoundEffects,(MethodInfo *)0x0);
          pCVar13 = (this->fields).hitAudioPlayer;
          if (pCVar13 != (CustomItemAudioPlayer *)0x0) {
            CustomItemAudioPlayer::CustomItemAudioPlayer_Initialize
                      (pCVar13,TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                               ->static_fields->hitSoundEffects,(MethodInfo *)0x0);
            VVar16 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_MinMaxValue(StringLiteral_Damage,(MethodInfo *)0x0);
            VVar17 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_MinMaxValue(StringLiteral_ImpulseStrength,(MethodInfo *)0x0);
            VVar18 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_MinMaxValue(StringLiteral_RecoilStrength,(MethodInfo *)0x0);
            VVar19 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                     MeleeWeaponData_MinMaxValue
                               (StringLiteral_AttackAnimationTime,(MethodInfo *)0x0);
            VStack_20 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                        MeleeWeaponData_MinMaxValue(StringLiteral_AttackCooldown,(MethodInfo *)0x0);
            aCStack_21[0]._0_8_ =
                 Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
                 MeleeWeaponData_MinMaxValue(StringLiteral_Range,(MethodInfo *)0x0);
            pSVar22 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->
                     static_fields->fireSoundEffects;
            if (pSVar22 != (String__Array *)0x0) {
              this_04 = (List_1_System_UInt32Enum_ *)
                        FUN_?(TypeInfo__System__Collections__Generic__List<int>);
              FUN_?(this_04,(int)pSVar22->max_length,
                            MethodInfo__System__Collections__Generic__List<int>__List_int_);
              pSVar23 = pSVar1;
              while( true ) {
                while( true ) {
                  if (*(int *)&(
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                               ->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  pMVar24 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                  pSVar22 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                           ->static_fields->fireSoundEffects;
                  if (pSVar22 == (String__Array *)0x0) goto code_?;
                  UVar25 = (UInt32Enum__Enum)pSVar23;
                  if ((int)pSVar22->max_length <= (int)UVar25) {
                    if (*(int *)&(
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                                 ->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pSVar22 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                             ->static_fields->hitSoundEffects;
                    if (pSVar22 == (String__Array *)0x0) goto code_?;
                    this_05 = (List_1_System_UInt32Enum_ *)
                              FUN_?(TypeInfo__System__Collections__Generic__List<int>);
                    FUN_?(this_05,(int)pSVar22->max_length,
                                  MethodInfo__System__Collections__Generic__List<int>__List_int_);
                    pSVar23 = pSVar1;
                    goto code_?;
                  }
                  if (this_04 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
                  piVar26 = &(this_04->fields)._version;
                  *piVar26 = *piVar26 + 1;
                  pUVar27 = (this_04->fields)._items;
                  if (pUVar27 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
                  uVar6 = (this_04->fields)._size;
                  if (uVar6 < (uint)pUVar27->max_length) break;
                  mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
                  List_1_System_UInt32Enum__AddWithResize
                            (this_04,UVar25,pMVar24->klass->rgctx_data[0xe].method);
                  pSVar23 = (String *)(ulonglong)(UVar25 + 1);
                }
                (this_04->fields)._size = uVar6 + 1;
                if ((uint)pUVar27->max_length <= uVar6) break;
                pUVar27->vector[(int)uVar6] = UVar25;
                pSVar23 = (String *)(ulonglong)(UVar25 + 1);
              }
code_?:
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
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
  }
  pMVar24 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
  pSVar22 = TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->static_fields
           ->hitSoundEffects;
  if (pSVar22 == (String__Array *)0x0) goto code_?;
  UVar25 = (UInt32Enum__Enum)pSVar23;
  if ((int)pSVar22->max_length <= (int)UVar25) {
    pDVar2 = (this->fields).itemData;
    this_01 = (this->fields).nameInputField;
    if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pSVar23 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,(Object *)StringLiteral_Name,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), this_01 != (SettingsInputField *)0x0)) {
      if (pSVar23 != (String *)0x0) {
        if (pSVar23->klass == pSRam0000000182dc50c0) {
          pSVar1 = pSVar23;
        }
        if (pSVar1 == (String *)0x0) {
          FUN_?(pSVar23);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      SettingsInputField::SettingsInputField_Initialize
                (this_01,StringLiteral_Name,pSVar1,(MethodInfo *)0x0);
      pDVar2 = (this->fields).itemData;
      pSVar28 = (this->fields).weaponDamageSlider;
      if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
          (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar2,(Object *)StringLiteral_Damage,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               ), pSVar28 != (SettingsSlider *)0x0)) && (pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar4,lRam_?);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        fStack_29 = VVar16.Item2;
        fStack_30 = VVar16.Item1;
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar28,StringLiteral_Damage,*(float *)&pOVar4[1].klass,fStack_30,fStack_29,
                   (MethodInfo *)0x0);
        pDVar2 = (this->fields).itemData;
        pSVar31 = (this->fields).weaponDamageInputSlider;
        if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
            (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar2,(Object *)StringLiteral_Damage,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pSVar31 != (SettingsInputFieldSlider *)0x0)) &&
           (pOVar4 != (Object *)0x0)) {
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar4);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          bVar5 = iRam_? != 0;
          fVar32 = *(float *)&pOVar4[1].klass;
          (pSVar31->fields).key = StringLiteral_Damage;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(pSVar31->fields).key >> 0xc);
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
          fVar32 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                             (pSVar31,fVar32,(MethodInfo *)0x0);
          pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                              (fVar32,(MethodInfo *)0x0);
          pIVar33 = (pSVar31->fields).inputField;
          if (pIVar33 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                      (pIVar33,pSVar1,1,(MethodInfo *)0x0);
            pDVar2 = (this->fields).itemData;
            pSVar28 = (this->fields).ImpulseStrengthSlider;
            if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar2,(Object *)StringLiteral_ImpulseStrength,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     ), pSVar28 != (SettingsSlider *)0x0)) &&
               (pOVar4 != (Object *)0x0)) {
              if ((pOVar4->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar4,lRam_?);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              fStack_34 = VVar17.Item2;
              fStack_35 = VVar17.Item1;
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar28,StringLiteral_ImpulseStrength,*(float *)&pOVar4[1].klass,fStack_35,
                         fStack_34,(MethodInfo *)0x0);
              pDVar2 = (this->fields).itemData;
              pSVar31 = (this->fields).ImpulseStrengthInputSlider;
              if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                  (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar2,(Object *)StringLiteral_ImpulseStrength,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       ), pSVar31 != (SettingsInputFieldSlider *)0x0)) &&
                 (pOVar4 != (Object *)0x0)) {
                if ((pOVar4->klass->_0).element_class !=
                    *(Il2CppClass **)(lRam_? + 0x40)) {
                  FUN_?(pOVar4);
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                bVar5 = iRam_? != 0;
                fVar32 = *(float *)&pOVar4[1].klass;
                (pSVar31->fields).key = StringLiteral_ImpulseStrength;
                if (bVar5) {
                  uVar6 = (uint)((ulonglong)&(pSVar31->fields).key >> 0xc);
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
                fVar32 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                                   (pSVar31,fVar32,(MethodInfo *)0x0);
                pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                                    (fVar32,(MethodInfo *)0x0);
                pIVar33 = (pSVar31->fields).inputField;
                if (pIVar33 != (InputField *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                            (pIVar33,pSVar1,1,(MethodInfo *)0x0);
                  pDVar2 = (this->fields).itemData;
                  pSVar28 = (this->fields).RecoilStrengthSlider;
                  if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                      (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__get_Item
                                           (pDVar2,(Object *)StringLiteral_RecoilStrength,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           ), pSVar28 != (SettingsSlider *)0x0)) &&
                     (pOVar4 != (Object *)0x0)) {
                    if ((pOVar4->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar4,lRam_?);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    fStack_36 = VVar18.Item2;
                    fStack_37 = VVar18.Item1;
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar28,StringLiteral_RecoilStrength,*(float *)&pOVar4[1].klass,
                               fStack_37,fStack_36,(MethodInfo *)0x0);
                    pDVar2 = (this->fields).itemData;
                    pSVar31 = (this->fields).RecoilStrengthInputSlider;
                    if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                        (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (pDVar2,(Object *)StringLiteral_RecoilStrength,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             ), pSVar31 != (SettingsInputFieldSlider *)0x0)) &&
                       (pOVar4 != (Object *)0x0)) {
                      if ((pOVar4->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar4);
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      bVar5 = iRam_? != 0;
                      fVar32 = *(float *)&pOVar4[1].klass;
                      (pSVar31->fields).key = StringLiteral_RecoilStrength;
                      if (bVar5) {
                        uVar6 = (uint)((ulonglong)&(pSVar31->fields).key >> 0xc);
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
                      fVar32 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                                         (pSVar31,fVar32,(MethodInfo *)0x0);
                      pSVar1 = SettingsInputFieldSlider::
                                SettingsInputFieldSlider_ConvertFloatToString
                                          (fVar32,(MethodInfo *)0x0);
                      pIVar33 = (pSVar31->fields).inputField;
                      if (pIVar33 != (InputField *)0x0) {
                        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                                  (pIVar33,pSVar1,1,(MethodInfo *)0x0);
                        pDVar2 = (this->fields).itemData;
                        pSVar28 = (this->fields).attackAnimationSlider;
                        if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                            (pOVar4 = mscorlib.dll::System::Collections::Generic::
                                       Dictionary`2[System::Object,System::Object]::
                                       Dictionary_2_System_Object_System_Object__get_Item
                                                 (pDVar2,(Object *)
                                                          StringLiteral_AttackAnimationTime,
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                 ), pSVar28 != (SettingsSlider *)0x0)) &&
                           (pOVar4 != (Object *)0x0)) {
                          if ((pOVar4->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar4,lRam_?);
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          fStack_38 = VVar19.Item2;
                          fStack_39 = VVar19.Item1;
                          SettingsSlider::SettingsSlider_Initialize
                                    (pSVar28,StringLiteral_AttackAnimationTime,
                                     *(float *)&pOVar4[1].klass,fStack_39,fStack_38,
                                     (MethodInfo *)0x0);
                          pDVar2 = (this->fields).itemData;
                          pSVar31 = (this->fields).attackAnimationInputSlider;
                          if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                              (pOVar4 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Object,System::Object]::
                                         Dictionary_2_System_Object_System_Object__get_Item
                                                   (pDVar2,(Object *)
                                                            StringLiteral_AttackAnimationTime,
                                                                                                        
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar31 != (SettingsInputFieldSlider *)0x0)) &&
                             (pOVar4 != (Object *)0x0)) {
                            if ((pOVar4->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar4);
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            bVar5 = iRam_? != 0;
                            fVar32 = *(float *)&pOVar4[1].klass;
                            (pSVar31->fields).key = StringLiteral_AttackAnimationTime;
                            if (bVar5) {
                              uVar6 = (uint)((ulonglong)&(pSVar31->fields).key >> 0xc);
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
                            fVar32 = SettingsInputFieldSlider::
                                     SettingsInputFieldSlider_GetInputFieldValue
                                               (pSVar31,fVar32,(MethodInfo *)0x0);
                            pSVar1 = SettingsInputFieldSlider::
                                      SettingsInputFieldSlider_ConvertFloatToString
                                                (fVar32,(MethodInfo *)0x0);
                            pIVar33 = (pSVar31->fields).inputField;
                            if (pIVar33 != (InputField *)0x0) {
                              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                                        (pIVar33,pSVar1,1,(MethodInfo *)0x0);
                              pDVar2 = (this->fields).itemData;
                              pSVar28 = (this->fields).attackCooldownSlider;
                              if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                                  (pOVar4 = mscorlib.dll::System::Collections::Generic::
                                             Dictionary`2[System::Object,System::Object]::
                                             Dictionary_2_System_Object_System_Object__get_Item
                                                       (pDVar2,(Object *)
                                                                StringLiteral_AttackCooldown,
                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar28 != (SettingsSlider *)0x0)) &&
                                 (pOVar4 != (Object *)0x0)) {
                                if ((pOVar4->klass->_0).element_class !=
                                    *(Il2CppClass **)(lRam_? + 0x40)) {
                                  FUN_?(pOVar4,lRam_?);
                                  pcVar11 = (code *)swi(3);
                                  (*pcVar11)();
                                  return;
                                }
                                SettingsSlider::SettingsSlider_Initialize
                                          (pSVar28,StringLiteral_AttackCooldown,
                                           *(float *)&pOVar4[1].klass,VStack_20.Item1,
                                           VStack_20.Item2,(MethodInfo *)0x0);
                                pDVar2 = (this->fields).itemData;
                                pSVar31 = (this->fields).attackCooldownInputSlider;
                                if (((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                    && (pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Object,System::Object]::
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_AttackCooldown,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar31 != (SettingsInputFieldSlider *)0x0)) &&
                                   (pOVar4 != (Object *)0x0)) {
                                  if ((pOVar4->klass->_0).element_class !=
                                      *(Il2CppClass **)(lRam_? + 0x40)) {
                                    FUN_?(pOVar4);
                                    pcVar11 = (code *)swi(3);
                                    (*pcVar11)();
                                    return;
                                  }
                                  bVar5 = iRam_? != 0;
                                  fVar32 = *(float *)&pOVar4[1].klass;
                                  (pSVar31->fields).key = StringLiteral_AttackCooldown;
                                  if (bVar5) {
                                    uVar6 = (uint)((ulonglong)&(pSVar31->fields).key >> 0xc);
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
                                  fVar32 = SettingsInputFieldSlider::
                                           SettingsInputFieldSlider_GetInputFieldValue
                                                     (pSVar31,fVar32,(MethodInfo *)0x0);
                                  pSVar1 = SettingsInputFieldSlider::
                                            SettingsInputFieldSlider_ConvertFloatToString
                                                      (fVar32,(MethodInfo *)0x0);
                                  pIVar33 = (pSVar31->fields).inputField;
                                  if (pIVar33 != (InputField *)0x0) {
                                    UnityEngine.UI.dll::UnityEngine::UI::InputField::
                                    InputField_SetText(pIVar33,pSVar1,1,(MethodInfo *)0x0);
                                    pDVar2 = (this->fields).itemData;
                                    pSVar28 = (this->fields).rangeSlider;
                                    if (((pDVar2 !=
                                          (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                                        (pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                   Dictionary`2[System::Object,System::Object]::
                                                                                                      
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)StringLiteral_Range,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar28 != (SettingsSlider *)0x0)) &&
                                       (pOVar4 != (Object *)0x0)) {
                                      if ((pOVar4->klass->_0).element_class !=
                                          *(Il2CppClass **)(lRam_? + 0x40)) {
                                        FUN_?(pOVar4,lRam_?);
                                        pcVar11 = (code *)swi(3);
                                        (*pcVar11)();
                                        return;
                                      }
                                      SettingsSlider::SettingsSlider_Initialize
                                                (pSVar28,StringLiteral_Range,
                                                 *(float *)&pOVar4[1].klass,aCStack_21[0].r,
                                                 aCStack_21[0].g,(MethodInfo *)0x0);
                                      pDVar2 = (this->fields).itemData;
                                      pSVar31 = (this->fields).rangeInputSlider;
                                      if (((pDVar2 !=
                                            (Dictionary_2_System_Object_System_Object_ *)0x0) &&
                                          (pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                     Dictionary`2[System::Object,System::Object]::
                                                                                                          
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)StringLiteral_Range,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar31 != (SettingsInputFieldSlider *)0x0)) &&
                                         (pOVar4 != (Object *)0x0)) {
                                        if ((pOVar4->klass->_0).element_class !=
                                            *(Il2CppClass **)(lRam_? + 0x40)) {
                                          FUN_?(pOVar4);
                                          pcVar11 = (code *)swi(3);
                                          (*pcVar11)();
                                          return;
                                        }
                                        bVar5 = iRam_? != 0;
                                        fVar32 = *(float *)&pOVar4[1].klass;
                                        (pSVar31->fields).key = StringLiteral_Range;
                                        if (bVar5) {
                                          uVar6 = (uint)((ulonglong)&(pSVar31->fields).key >> 0xc);
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
                                        fVar32 = SettingsInputFieldSlider::
                                                 SettingsInputFieldSlider_GetInputFieldValue
                                                           (pSVar31,fVar32,(MethodInfo *)0x0);
                                        pSVar1 = SettingsInputFieldSlider::
                                                  SettingsInputFieldSlider_ConvertFloatToString
                                                            (fVar32,(MethodInfo *)0x0);
                                        pIVar33 = (pSVar31->fields).inputField;
                                        if (pIVar33 != (InputField *)0x0) {
                                          UnityEngine.UI.dll::UnityEngine::UI::InputField::
                                          InputField_SetText(pIVar33,pSVar1,1,(MethodInfo *)0x0);
                                          pDVar2 = (this->fields).itemData;
                                          pSVar40 = (this->fields).fireSoundEffectDropdown;
                                          if (pDVar2 !=
                                              (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                            pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                      Dictionary`2[System::Object,System::Object]::
                                                                                                            
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_FireSoundEffect,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  );
                                            if (*(int *)&(
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                                                  ->_1).field_0x1c == 0) {
                                              FUN_?(
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                                                  );
                                            }
                                            if ((pSVar40 != (SettingsDropdown *)0x0) &&
                                               (pOVar4 != (Object *)0x0)) {
                                              if ((pOVar4->klass->_0).element_class !=
                                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                                FUN_?(pOVar4,lRam_?);
                                                pcVar11 = (code *)swi(3);
                                                (*pcVar11)();
                                                return;
                                              }
                                              SettingsDropdown::SettingsDropdown_Initialize
                                                        (pSVar40,StringLiteral_FireSoundEffect,
                                                         *(int32_t *)&pOVar4[1].klass,
                                                                                                                  
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                                                  ->static_fields->fireSoundEffects,
                                                  (List_1_System_Int32_ *)this_04,(MethodInfo *)0x0)
                                              ;
                                              pDVar2 = (this->fields).itemData;
                                              pSVar40 = (this->fields).hitSoundEffectDropdown;
                                              if (((pDVar2 !=
                                                    (Dictionary_2_System_Object_System_Object_ *)0x0
                                                   ) && (pOVar4 = mscorlib.dll::System::Collections
                                                                   ::Generic::Dictionary`2[System::
                                                                   Object,System::Object]::
                                                                                                                                      
                                                  Dictionary_2_System_Object_System_Object__get_Item
                                                            (pDVar2,(Object *)
                                                                     StringLiteral_HitSoundEffect,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                                  ), pSVar40 != (SettingsDropdown *)0x0)) &&
                                                 (pOVar4 != (Object *)0x0)) {
                                                if ((pOVar4->klass->_0).element_class !=
                                                    *(Il2CppClass **)(lRam_? + 0x40))
                                                {
                                                  FUN_?(pOVar4,lRam_?);
                                                  pcVar11 = (code *)swi(3);
                                                  (*pcVar11)();
                                                  return;
                                                }
                                                SettingsDropdown::SettingsDropdown_Initialize
                                                          (pSVar40,StringLiteral_HitSoundEffect,
                                                           *(int32_t *)&pOVar4[1].klass,
                                                                                                                      
                                                  TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData
                                                  ->static_fields->hitSoundEffects,
                                                  (List_1_System_Int32_ *)this_05,(MethodInfo *)0x0)
                                                ;
                                                pIVar41 = (this->fields).trailColorImage;
                                                pDVar2 = (this->fields).itemData;
                                                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c
                                                    == 0) {
                                                  FUN_?();
                                                }
                                                pSVar1 = StringLiteral_TrailColor;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&TypeInfo__Extensions);
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c
                                                    == 0) {
                                                  FUN_?();
                                                }
                                                aCStack_21[0].r = 0.0;
                                                aCStack_21[0].g = 0.0;
                                                aCStack_21[0].b = 0.0;
                                                aCStack_21[0].a = 0.0;
                                                pCVar42 = Extensions::Extensions_GetColorOrDefault
                                                                    ((Color *)&VStack_20,pDVar2,
                                                                     pSVar1,aCStack_21,
                                                                     (MethodInfo *)0x0);
                                                if (pIVar41 != (Image *)0x0) {
                                                  aCStack_21[0].r = pCVar42->r;
                                                  aCStack_21[0].g = pCVar42->g;
                                                  aCStack_21[0].b = pCVar42->b;
                                                  aCStack_21[0].a = pCVar42->a;
                                                  (*(pIVar41->klass->vtable).set_color.methodPtr)
                                                            (pIVar41,aCStack_21,
                                                             (pIVar41->klass->vtable).set_color.
                                                             method);
                                                  pSVar1 = StringLiteral_HitEffectColor;
                                                  pIVar41 = (this->fields).hitEffectColorImage;
                                                  pDVar2 = (this->fields).itemData;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__Extensions);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c
                                                      == 0) {
                                                    FUN_?();
                                                  }
                                                  aCStack_21[0].r = 0.0;
                                                  aCStack_21[0].g = 0.0;
                                                  aCStack_21[0].b = 0.0;
                                                  aCStack_21[0].a = 0.0;
                                                  pCVar42 = Extensions::Extensions_GetColorOrDefault
                                                                      ((Color *)&VStack_20,pDVar2,
                                                                       pSVar1,aCStack_21,
                                                                       (MethodInfo *)0x0);
                                                  if (pIVar41 != (Image *)0x0) {
                                                    aCStack_21[0].r = pCVar42->r;
                                                    aCStack_21[0].g = pCVar42->g;
                                                    aCStack_21[0].b = pCVar42->b;
                                                    aCStack_21[0].a = pCVar42->a;
                                                    (*(pIVar41->klass->vtable).set_color.methodPtr)
                                                              (pIVar41,aCStack_21,
                                                               (pIVar41->klass->vtable).set_color.
                                                               method);
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
    goto code_?;
  }
  if (this_05 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
  piVar26 = &(this_05->fields)._version;
  *piVar26 = *piVar26 + 1;
  pUVar27 = (this_05->fields)._items;
  if (pUVar27 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
  uVar6 = (this_05->fields)._size;
  if (uVar6 < (uint)pUVar27->max_length) {
    (this_05->fields)._size = uVar6 + 1;
    if (uVar6 < (uint)pUVar27->max_length) {
      pUVar27->vector[(int)uVar6] = UVar25;
      pSVar23 = (String *)(ulonglong)(UVar25 + 1);
      goto code_?;
    }
    goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
  List_1_System_UInt32Enum__AddWithResize(this_05,UVar25,pMVar24->klass->rgctx_data[0xe].method);
  pSVar23 = (String *)(ulonglong)(UVar25 + 1);
  goto code_?;
}


/* Void OnClickPreviewSound(String, Int32) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnClickPreviewSound
               (MeleeWeaponSettings *this,String *soundCategory,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSound);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSound);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index == -1) {
    if ((soundCategory == StringLiteral_FireSound) ||
       ((((soundCategory != (String *)0x0 && (StringLiteral_FireSound != (String *)0x0)) &&
         ((soundCategory->fields)._stringLength == (StringLiteral_FireSound->fields)._stringLength))
        && (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(soundCategory->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_FireSound->fields)._firstChar,
                               (longlong)(soundCategory->fields)._stringLength * 2,(MethodInfo *)0x0
                              ), bVar1 != 0)))) {
      pDVar2 = (this->fields).itemData;
      if ((pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar2,(Object *)StringLiteral_FireSoundEffect,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar3 == (Object *)0x0)) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      index = *(int32_t *)&pOVar3[1].klass;
    }
    else if ((soundCategory == StringLiteral_HitSound) ||
            (((soundCategory != (String *)0x0 && (StringLiteral_HitSound != (String *)0x0)) &&
             (((soundCategory->fields)._stringLength ==
               (StringLiteral_HitSound->fields)._stringLength &&
              (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(soundCategory->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_HitSound->fields)._firstChar,
                                  (longlong)(soundCategory->fields)._stringLength * 2,
                                  (MethodInfo *)0x0), bVar1 != 0)))))) {
      pDVar2 = (this->fields).itemData;
      if ((pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar2,(Object *)StringLiteral_HitSoundEffect,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar3 == (Object *)0x0)) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      index = *(int32_t *)&pOVar3[1].klass;
    }
    else {
      index = 0;
    }
  }
  if ((soundCategory == StringLiteral_FireSound) ||
     ((((soundCategory != (String *)0x0 && (StringLiteral_FireSound != (String *)0x0)) &&
       ((soundCategory->fields)._stringLength == (StringLiteral_FireSound->fields)._stringLength))
      && (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(soundCategory->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_FireSound->fields)._firstChar,
                             (longlong)(soundCategory->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar1 != 0)))) {
    fVar5 = _UNK_?;
    pCVar6 = (this->fields).fireAudioPlayer;
    if ((pCVar6 == (CustomItemAudioPlayer *)0x0) ||
       (pCVar7 = (pCVar6->fields).audioClips,
       pCVar7 == (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0))
    goto code_?;
    if ((uint)pCVar7->max_length <= (uint)index) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pCVar6 = (this->fields).fireAudioPlayer;
    if (pCVar7->vector[index].isLooped != 0) {
      if (pCVar6 != (CustomItemAudioPlayer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object,index,_UNK_?,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pAVar8 = (pCVar6->fields).audioSource;
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
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pAVar8 != (AudioSource *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (((pAVar8->fields)._._._._.m_CachedPtr != (void *)0x0) && (-1 < index)) {
            pCVar7 = (pCVar6->fields).audioClips;
            if (pCVar7 != (CustomItemAudioPlayer_CustomItemAudioClip__Array *)0x0) {
              if ((int)pCVar7->max_length <= index) {
                return;
              }
              CustomItemAudioPlayer::CustomItemAudioPlayer_SetAudioSourceSettings
                        (pCVar6,index,(MethodInfo *)0x0);
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar9 = func_?(&UNK_?);
                FUN_?(uVar9,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              dVar10 = (double)(*pcRam_?)();
              pAVar8 = (pCVar6->fields).audioSource;
              if (pAVar8 != (AudioSource *)0x0) {
                UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                          (pAVar8,0,(MethodInfo *)0x0);
                pAVar8 = (pCVar6->fields).audioSource;
                if (pAVar8 != (AudioSource *)0x0) {
                  uVar11 = 0;
                  if (0.0 <= dVar10) {
                    uVar11 = SUB84(dVar10,0);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar12 = (pAVar8->fields)._._._._.m_CachedPtr;
                  if (pvVar12 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar8,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcVar4 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar4;
                  (*pcRam_?)(pvVar12,uVar11);
                  pAVar8 = (pCVar6->fields).audioSource;
                  if (pAVar8 != (AudioSource *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar12 = (pAVar8->fields)._._._._.m_CachedPtr;
                    if (pvVar12 != (void *)0x0) {
                      pcVar4 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                        uVar9 = func_?(&UNK_?);
                        FUN_?(uVar9,0);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pcRam_? = pcVar4;
                      (*pcRam_?)(pvVar12,SUB84((double)fVar5 + dVar10,0));
                      return;
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar8,(MethodInfo *)0x0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
              }
            }
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        return;
      }
      goto code_?;
    }
  }
  else {
    if (soundCategory != StringLiteral_HitSound) {
      if (soundCategory == (String *)0x0) {
        return;
      }
      if (StringLiteral_HitSound == (String *)0x0) {
        return;
      }
      if ((soundCategory->fields)._stringLength != (StringLiteral_HitSound->fields)._stringLength) {
        return;
      }
      bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(soundCategory->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_HitSound->fields)._firstChar,
                         (longlong)(soundCategory->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return;
      }
    }
    pCVar6 = (this->fields).hitAudioPlayer;
  }
  VStack_13.x = 0.0;
  VStack_13.y = 0.0;
  if (pCVar6 != (CustomItemAudioPlayer *)0x0) {
    VStack_13.x = 0.0;
    VStack_13.y = 0.0;
    VStack_13.z = 0.0;
    CustomItemAudioPlayer::CustomItemAudioPlayer_PlayClip
              (pCVar6,index,1,&VStack_13,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnColorEdited
               (MeleeWeaponSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
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
  pSVar1 = (this->fields).editingColorKey;
  if (pSVar1 == StringLiteral_TrailColor) {
    bVar2 = 1;
  }
  else if (((pSVar1 == (String *)0x0) || (StringLiteral_TrailColor == (String *)0x0)) ||
          ((pSVar1->fields)._stringLength != (StringLiteral_TrailColor->fields)._stringLength)) {
    bVar2 = 0;
  }
  else {
    bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(pSVar1->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_TrailColor->fields)._firstChar,
                       (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0);
  }
  pSVar3 = (this->fields).colorR;
  pIVar4 = (&(this->fields).trailColorImage)[(ulonglong)bVar2 ^ 1];
  if ((pSVar3 != (SettingsSlider *)0x0) &&
     (pSVar5 = (pSVar3->fields).slider, pSVar5 != (Slider *)0x0)) {
    fVar6 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                              (pSVar5,(pSVar5->klass->vtable).get_value.method);
    pSVar3 = (this->fields).colorG;
    if ((pSVar3 != (SettingsSlider *)0x0) &&
       (pSVar5 = (pSVar3->fields).slider, pSVar5 != (Slider *)0x0)) {
      fVar7 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable).get_value.method);
      pSVar3 = (this->fields).colorB;
      if ((pSVar3 != (SettingsSlider *)0x0) &&
         (pSVar5 = (pSVar3->fields).slider, pSVar5 != (Slider *)0x0)) {
        fVar8 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                                  (pSVar5,(pSVar5->klass->vtable).get_value.method);
        pSVar3 = (this->fields).colorA;
        if ((pSVar3 != (SettingsSlider *)0x0) &&
           ((pSVar5 = (pSVar3->fields).slider, pSVar5 != (Slider *)0x0 &&
            (fVar9 = (float)(*(pSVar5->klass->vtable).get_value.methodPtr)
                                       (pSVar5,(pSVar5->klass->vtable).get_value.method),
            pIVar4 != (Image *)0x0)))) {
          CStack_10.g = fVar7;
          CStack_10.r = fVar6;
          CStack_10.a = fVar9;
          CStack_10.b = fVar8;
          (*(pIVar4->klass->vtable).set_color.methodPtr)
                    (pIVar4,&CStack_10,(pIVar4->klass->vtable).set_color.method);
          hashtable = (this->fields).itemData;
          pSVar1 = (this->fields).editingColorKey;
          if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
            FUN_?();
          }
          Extensions::Extensions_SetColor(hashtable,pSVar1,&CStack_10,(MethodInfo *)0x0);
          this_00 = (this->fields).settingsBase;
          if (this_00 != (SettingsBase *)0x0) {
            SettingsBase::SettingsBase_OnSettingChanged
                      (this_00,StringLiteral_itemData,(Object *)(this->fields).itemData,
                       (MethodInfo *)0x0);
            bVar11 = iRam_? != 0;
            (this->fields).editingColorKey = ::StringLiteral__;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)&(this->fields).editingColorKey >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar14 == *puVar15;
                if (bVar11) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar11);
            }
            this_01 = (this->fields).colorPicker;
            if (this_01 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_01,0,(MethodInfo *)0x0);
              obj = (this->fields).canvas;
              if (*(int *)&(
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                           ->_1).field_0x1c == 0) {
                FUN_?(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                             );
              }
              if (obj != (RectTransform *)0x0) {
                auStack_16[0] =
                     CONCAT44((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                               ->static_fields->NormalEditingCanvasSize).y,
                              (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                               ->static_fields->NormalEditingCanvasSize).x);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                ,auStack_16[0],0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (obj == (RectTransform *)0x0) {
                  FUN_?();
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pvVar18 = (obj->fields)._._._.m_CachedPtr;
                if (pvVar18 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                pcVar17 = pcRam_?;
                if (pcRam_? == (code *)0x0) {
                  pcVar17 = (code *)FUN_?(&UNK_?);
                  if (pcVar17 == (code *)0x0) {
                    uVar19 = func_?(&UNK_?);
                    FUN_?(uVar19,0);
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                }
                pcRam_? = pcVar17;
                (*pcRam_?)(pvVar18,auStack_16);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnColorPressed(String) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnColorPressed
               (MeleeWeaponSettings *this,String *colorKey,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                 );
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
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultColor(&CStack_2,colorKey,(MethodInfo *)0x0);
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
                           TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                           ->_1).field_0x1c == 0) {
                FUN_?(
                             TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                             );
              }
              if (obj != (RectTransform *)0x0) {
                auStack_13[0] =
                     CONCAT44((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                               ->static_fields->ColorEditingCanvasSize).y,
                              (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
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

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_OnSettingChanged
               (MeleeWeaponSettings *this,String *key,Object *value,MethodInfo *method)

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
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
MeleeWeaponSettings::MeleeWeaponSettings_ReadWorldObjectItemData
          (MeleeWeaponSettings *this,Dictionary_2_System_Object_System_Object_ *woData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
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
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Damage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ImpulseStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TrailColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Name);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackAnimationTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AttackCooldown);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RecoilStrength);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FireSoundEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HitEffectColor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  pDVar1 = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
           MeleeWeaponData_DefaultItemData((MethodInfo *)0x0);
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
                         (pDVar1,(Object *)StringLiteral_Damage,
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
                       (hashtable,StringLiteral_Damage,*(float *)&pOVar7[1].klass,
                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                       );
        pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (pDVar1,(Object *)StringLiteral_Damage,pOVar7,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar1,(Object *)StringLiteral_ImpulseStrength,
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
                         (hashtable,StringLiteral_ImpulseStrength,*(float *)&pOVar7[1].klass,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
          pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (pDVar1,(Object *)StringLiteral_ImpulseStrength,pOVar7,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar1,(Object *)StringLiteral_RecoilStrength,
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
                           (hashtable,StringLiteral_RecoilStrength,*(float *)&pOVar7[1].klass,
                            float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                           );
            pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (pDVar1,(Object *)StringLiteral_RecoilStrength,pOVar7,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar1,(Object *)StringLiteral_AttackAnimationTime,
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
              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
              ;
              afStackX_10[0] =
                   Extensions::Extensions_GetValueOrDefault_4
                             (hashtable,StringLiteral_AttackAnimationTime,*(float *)&pOVar7[1].klass
                              ,
                              float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                             );
              pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (pDVar1,(Object *)StringLiteral_AttackAnimationTime,pOVar7,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar1,(Object *)StringLiteral_AttackCooldown,
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
                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                ;
                afStackX_10[0] =
                     Extensions::Extensions_GetValueOrDefault_4
                               (hashtable,StringLiteral_AttackCooldown,*(float *)&pOVar7[1].klass,
                                float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                               );
                pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (pDVar1,(Object *)StringLiteral_AttackCooldown,pOVar7,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar1,(Object *)StringLiteral_Range,
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
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                  ;
                  afStackX_10[0] =
                       Extensions::Extensions_GetValueOrDefault_4
                                 (hashtable,StringLiteral_Range,*(float *)&pOVar7[1].klass,
                                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                                 );
                  pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar1,(Object *)StringLiteral_Range,pOVar7,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar1,(Object *)StringLiteral_FireSoundEffect,
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
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                    ;
                    afStackX_10[0] =
                         (float)Extensions::Extensions_GetValueOrDefault_2
                                          (hashtable,StringLiteral_FireSoundEffect,
                                           *(Int32Enum__Enum *)&pOVar7[1].klass,
                                           int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                          );
                    pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryInsert
                              (pDVar1,(Object *)StringLiteral_FireSoundEffect,pOVar7,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1),
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar1,(Object *)StringLiteral_HitSoundEffect,
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
                      int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      ;
                      afStackX_10[0] =
                           (float)Extensions::Extensions_GetValueOrDefault_2
                                            (hashtable,StringLiteral_HitSoundEffect,
                                             *(Int32Enum__Enum *)&pOVar7[1].klass,
                                             int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                                            );
                      pOVar7 = (Object *)FUN_?(lRam_?,afStackX_10);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                (pDVar1,(Object *)StringLiteral_HitSoundEffect,pOVar7,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
                      pSVar8 = TypeInfo__System__Single;
                      pDVar3 = defaultValue;
                      if ((pOVar7 != (Object *)0x0) &&
                         (pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                                   FUN_?(pOVar7,TypeInfo__System__Single),
                         pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                        FUN_?(pOVar7,pSVar8);
                        pcVar5 = (code *)swi(3);
                        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
                        return pDVar1;
                      }
                      pOVar7 = Extensions::Extensions_GetValueOrDefault_3
                                         (hashtable,StringLiteral_TrailColor,(Object *)pDVar3,pMVar6
                                         );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                (pDVar1,(Object *)StringLiteral_TrailColor,pOVar7,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                  ->klass->rgctx_data[0x22].method);
                      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (pDVar1,(Object *)StringLiteral_HitEffectColor,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                      pMVar6 = 
                      System__Single__MethodInfo__Extensions__GetValueOrDefault<System::Single_[]>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Single________
                      ;
                      pSVar8 = TypeInfo__System__Single;
                      if ((pOVar7 != (Object *)0x0) &&
                         (defaultValue = (Dictionary_2_System_Object_System_Object_ *)
                                         FUN_?(pOVar7,TypeInfo__System__Single),
                         defaultValue == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                        FUN_?(pOVar7,pSVar8);
                        pcVar5 = (code *)swi(3);
                        pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
                        return pDVar1;
                      }
                      pOVar7 = Extensions::Extensions_GetValueOrDefault_3
                                         (hashtable,StringLiteral_HitEffectColor,
                                          (Object *)defaultValue,pMVar6);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__TryInsert
                                (pDVar1,(Object *)StringLiteral_HitEffectColor,pOVar7,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),1)
                                 ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
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
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar5)();
  return pDVar1;
}


/* Void UpdateColorPickerPreview() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings_UpdateColorPickerPreview
               (MeleeWeaponSettings *this,MethodInfo *method)

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


/* MeleeWeaponSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
           ->static_fields;
  (pMVar1->NormalEditingCanvasSize).x = 1150.0;
  (pMVar1->NormalEditingCanvasSize).y = 860.0;
  pMVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__MeleeWeapons__MeleeWeaponSettings
           ->static_fields;
  (pMVar1->ColorEditingCanvasSize).x = 800.0;
  (pMVar1->ColorEditingCanvasSize).y = 700.0;
  return;
}


/* MeleeWeaponSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::MeleeWeapons::
     MeleeWeaponSettings::MeleeWeaponSettings__ctor(MeleeWeaponSettings *this,MethodInfo *method)

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
                while (ppMVar19 = ppMVar18 + 0x3052af3c,
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

